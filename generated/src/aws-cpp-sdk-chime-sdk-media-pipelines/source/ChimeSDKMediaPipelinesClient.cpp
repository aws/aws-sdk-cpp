/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesClient.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesEndpointProvider.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesErrorMarshaller.h>
#include <aws/chime-sdk-media-pipelines/model/CreateMediaCapturePipelineRequest.h>
#include <aws/chime-sdk-media-pipelines/model/CreateMediaConcatenationPipelineRequest.h>
#include <aws/chime-sdk-media-pipelines/model/CreateMediaInsightsPipelineConfigurationRequest.h>
#include <aws/chime-sdk-media-pipelines/model/CreateMediaInsightsPipelineRequest.h>
#include <aws/chime-sdk-media-pipelines/model/CreateMediaLiveConnectorPipelineRequest.h>
#include <aws/chime-sdk-media-pipelines/model/CreateMediaPipelineKinesisVideoStreamPoolRequest.h>
#include <aws/chime-sdk-media-pipelines/model/CreateMediaStreamPipelineRequest.h>
#include <aws/chime-sdk-media-pipelines/model/DeleteMediaCapturePipelineRequest.h>
#include <aws/chime-sdk-media-pipelines/model/DeleteMediaInsightsPipelineConfigurationRequest.h>
#include <aws/chime-sdk-media-pipelines/model/DeleteMediaPipelineKinesisVideoStreamPoolRequest.h>
#include <aws/chime-sdk-media-pipelines/model/DeleteMediaPipelineRequest.h>
#include <aws/chime-sdk-media-pipelines/model/GetMediaCapturePipelineRequest.h>
#include <aws/chime-sdk-media-pipelines/model/GetMediaInsightsPipelineConfigurationRequest.h>
#include <aws/chime-sdk-media-pipelines/model/GetMediaPipelineKinesisVideoStreamPoolRequest.h>
#include <aws/chime-sdk-media-pipelines/model/GetMediaPipelineRequest.h>
#include <aws/chime-sdk-media-pipelines/model/GetSpeakerSearchTaskRequest.h>
#include <aws/chime-sdk-media-pipelines/model/GetVoiceToneAnalysisTaskRequest.h>
#include <aws/chime-sdk-media-pipelines/model/ListMediaCapturePipelinesRequest.h>
#include <aws/chime-sdk-media-pipelines/model/ListMediaInsightsPipelineConfigurationsRequest.h>
#include <aws/chime-sdk-media-pipelines/model/ListMediaPipelineKinesisVideoStreamPoolsRequest.h>
#include <aws/chime-sdk-media-pipelines/model/ListMediaPipelinesRequest.h>
#include <aws/chime-sdk-media-pipelines/model/ListTagsForResourceRequest.h>
#include <aws/chime-sdk-media-pipelines/model/StartSpeakerSearchTaskRequest.h>
#include <aws/chime-sdk-media-pipelines/model/StartVoiceToneAnalysisTaskRequest.h>
#include <aws/chime-sdk-media-pipelines/model/StopSpeakerSearchTaskRequest.h>
#include <aws/chime-sdk-media-pipelines/model/StopVoiceToneAnalysisTaskRequest.h>
#include <aws/chime-sdk-media-pipelines/model/TagResourceRequest.h>
#include <aws/chime-sdk-media-pipelines/model/UntagResourceRequest.h>
#include <aws/chime-sdk-media-pipelines/model/UpdateMediaInsightsPipelineConfigurationRequest.h>
#include <aws/chime-sdk-media-pipelines/model/UpdateMediaInsightsPipelineStatusRequest.h>
#include <aws/chime-sdk-media-pipelines/model/UpdateMediaPipelineKinesisVideoStreamPoolRequest.h>
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
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ChimeSDKMediaPipelines;
using namespace Aws::ChimeSDKMediaPipelines::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ChimeSDKMediaPipelines {
const char SERVICE_NAME[] = "chime";
const char ALLOCATION_TAG[] = "ChimeSDKMediaPipelinesClient";
}  // namespace ChimeSDKMediaPipelines
}  // namespace Aws
const char* ChimeSDKMediaPipelinesClient::GetServiceName() { return SERVICE_NAME; }
const char* ChimeSDKMediaPipelinesClient::GetAllocationTag() { return ALLOCATION_TAG; }

ChimeSDKMediaPipelinesClient::ChimeSDKMediaPipelinesClient(
    const ChimeSDKMediaPipelines::ChimeSDKMediaPipelinesClientConfiguration& clientConfiguration,
    std::shared_ptr<ChimeSDKMediaPipelinesEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeSDKMediaPipelinesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ChimeSDKMediaPipelinesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ChimeSDKMediaPipelinesClient::ChimeSDKMediaPipelinesClient(
    const AWSCredentials& credentials, std::shared_ptr<ChimeSDKMediaPipelinesEndpointProviderBase> endpointProvider,
    const ChimeSDKMediaPipelines::ChimeSDKMediaPipelinesClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeSDKMediaPipelinesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ChimeSDKMediaPipelinesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ChimeSDKMediaPipelinesClient::ChimeSDKMediaPipelinesClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<ChimeSDKMediaPipelinesEndpointProviderBase> endpointProvider,
    const ChimeSDKMediaPipelines::ChimeSDKMediaPipelinesClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeSDKMediaPipelinesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ChimeSDKMediaPipelinesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ChimeSDKMediaPipelinesClient::ChimeSDKMediaPipelinesClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeSDKMediaPipelinesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ChimeSDKMediaPipelinesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ChimeSDKMediaPipelinesClient::ChimeSDKMediaPipelinesClient(const AWSCredentials& credentials,
                                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeSDKMediaPipelinesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ChimeSDKMediaPipelinesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ChimeSDKMediaPipelinesClient::ChimeSDKMediaPipelinesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeSDKMediaPipelinesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ChimeSDKMediaPipelinesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ChimeSDKMediaPipelinesClient::~ChimeSDKMediaPipelinesClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ChimeSDKMediaPipelinesEndpointProviderBase>& ChimeSDKMediaPipelinesClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void ChimeSDKMediaPipelinesClient::init(const ChimeSDKMediaPipelines::ChimeSDKMediaPipelinesClientConfiguration& config) {
  AWSClient::SetServiceClientName("Chime SDK Media Pipelines");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "chime");
}

void ChimeSDKMediaPipelinesClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ChimeSDKMediaPipelinesClient::InvokeOperationOutcome ChimeSDKMediaPipelinesClient::InvokeServiceOperation(
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

CreateMediaCapturePipelineOutcome ChimeSDKMediaPipelinesClient::CreateMediaCapturePipeline(
    const CreateMediaCapturePipelineRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sdk-media-capture-pipelines");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMediaCapturePipelineOutcome(result.GetResultWithOwnership())
                            : CreateMediaCapturePipelineOutcome(std::move(result.GetError()));
}

CreateMediaConcatenationPipelineOutcome ChimeSDKMediaPipelinesClient::CreateMediaConcatenationPipeline(
    const CreateMediaConcatenationPipelineRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sdk-media-concatenation-pipelines");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMediaConcatenationPipelineOutcome(result.GetResultWithOwnership())
                            : CreateMediaConcatenationPipelineOutcome(std::move(result.GetError()));
}

CreateMediaInsightsPipelineOutcome ChimeSDKMediaPipelinesClient::CreateMediaInsightsPipeline(
    const CreateMediaInsightsPipelineRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/media-insights-pipelines");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMediaInsightsPipelineOutcome(result.GetResultWithOwnership())
                            : CreateMediaInsightsPipelineOutcome(std::move(result.GetError()));
}

CreateMediaInsightsPipelineConfigurationOutcome ChimeSDKMediaPipelinesClient::CreateMediaInsightsPipelineConfiguration(
    const CreateMediaInsightsPipelineConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/media-insights-pipeline-configurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMediaInsightsPipelineConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateMediaInsightsPipelineConfigurationOutcome(std::move(result.GetError()));
}

CreateMediaLiveConnectorPipelineOutcome ChimeSDKMediaPipelinesClient::CreateMediaLiveConnectorPipeline(
    const CreateMediaLiveConnectorPipelineRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sdk-media-live-connector-pipelines");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMediaLiveConnectorPipelineOutcome(result.GetResultWithOwnership())
                            : CreateMediaLiveConnectorPipelineOutcome(std::move(result.GetError()));
}

CreateMediaPipelineKinesisVideoStreamPoolOutcome ChimeSDKMediaPipelinesClient::CreateMediaPipelineKinesisVideoStreamPool(
    const CreateMediaPipelineKinesisVideoStreamPoolRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/media-pipeline-kinesis-video-stream-pools");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMediaPipelineKinesisVideoStreamPoolOutcome(result.GetResultWithOwnership())
                            : CreateMediaPipelineKinesisVideoStreamPoolOutcome(std::move(result.GetError()));
}

CreateMediaStreamPipelineOutcome ChimeSDKMediaPipelinesClient::CreateMediaStreamPipeline(
    const CreateMediaStreamPipelineRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sdk-media-stream-pipelines");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMediaStreamPipelineOutcome(result.GetResultWithOwnership())
                            : CreateMediaStreamPipelineOutcome(std::move(result.GetError()));
}

DeleteMediaCapturePipelineOutcome ChimeSDKMediaPipelinesClient::DeleteMediaCapturePipeline(
    const DeleteMediaCapturePipelineRequest& request) const {
  if (!request.MediaPipelineIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMediaCapturePipeline", "Required field: MediaPipelineId, is not set");
    return DeleteMediaCapturePipelineOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(
        ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaPipelineId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sdk-media-capture-pipelines/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMediaPipelineId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMediaCapturePipelineOutcome(result.GetResultWithOwnership())
                            : DeleteMediaCapturePipelineOutcome(std::move(result.GetError()));
}

DeleteMediaInsightsPipelineConfigurationOutcome ChimeSDKMediaPipelinesClient::DeleteMediaInsightsPipelineConfiguration(
    const DeleteMediaInsightsPipelineConfigurationRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMediaInsightsPipelineConfiguration", "Required field: Identifier, is not set");
    return DeleteMediaInsightsPipelineConfigurationOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(
        ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/media-insights-pipeline-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMediaInsightsPipelineConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteMediaInsightsPipelineConfigurationOutcome(std::move(result.GetError()));
}

DeleteMediaPipelineOutcome ChimeSDKMediaPipelinesClient::DeleteMediaPipeline(const DeleteMediaPipelineRequest& request) const {
  if (!request.MediaPipelineIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMediaPipeline", "Required field: MediaPipelineId, is not set");
    return DeleteMediaPipelineOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(
        ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaPipelineId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sdk-media-pipelines/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMediaPipelineId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMediaPipelineOutcome(result.GetResultWithOwnership())
                            : DeleteMediaPipelineOutcome(std::move(result.GetError()));
}

DeleteMediaPipelineKinesisVideoStreamPoolOutcome ChimeSDKMediaPipelinesClient::DeleteMediaPipelineKinesisVideoStreamPool(
    const DeleteMediaPipelineKinesisVideoStreamPoolRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMediaPipelineKinesisVideoStreamPool", "Required field: Identifier, is not set");
    return DeleteMediaPipelineKinesisVideoStreamPoolOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(
        ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/media-pipeline-kinesis-video-stream-pools/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMediaPipelineKinesisVideoStreamPoolOutcome(result.GetResultWithOwnership())
                            : DeleteMediaPipelineKinesisVideoStreamPoolOutcome(std::move(result.GetError()));
}

GetMediaCapturePipelineOutcome ChimeSDKMediaPipelinesClient::GetMediaCapturePipeline(const GetMediaCapturePipelineRequest& request) const {
  if (!request.MediaPipelineIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMediaCapturePipeline", "Required field: MediaPipelineId, is not set");
    return GetMediaCapturePipelineOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(
        ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaPipelineId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sdk-media-capture-pipelines/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMediaPipelineId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMediaCapturePipelineOutcome(result.GetResultWithOwnership())
                            : GetMediaCapturePipelineOutcome(std::move(result.GetError()));
}

GetMediaInsightsPipelineConfigurationOutcome ChimeSDKMediaPipelinesClient::GetMediaInsightsPipelineConfiguration(
    const GetMediaInsightsPipelineConfigurationRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMediaInsightsPipelineConfiguration", "Required field: Identifier, is not set");
    return GetMediaInsightsPipelineConfigurationOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(
        ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/media-insights-pipeline-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMediaInsightsPipelineConfigurationOutcome(result.GetResultWithOwnership())
                            : GetMediaInsightsPipelineConfigurationOutcome(std::move(result.GetError()));
}

GetMediaPipelineOutcome ChimeSDKMediaPipelinesClient::GetMediaPipeline(const GetMediaPipelineRequest& request) const {
  if (!request.MediaPipelineIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMediaPipeline", "Required field: MediaPipelineId, is not set");
    return GetMediaPipelineOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(
        ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaPipelineId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sdk-media-pipelines/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMediaPipelineId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMediaPipelineOutcome(result.GetResultWithOwnership())
                            : GetMediaPipelineOutcome(std::move(result.GetError()));
}

GetMediaPipelineKinesisVideoStreamPoolOutcome ChimeSDKMediaPipelinesClient::GetMediaPipelineKinesisVideoStreamPool(
    const GetMediaPipelineKinesisVideoStreamPoolRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMediaPipelineKinesisVideoStreamPool", "Required field: Identifier, is not set");
    return GetMediaPipelineKinesisVideoStreamPoolOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(
        ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/media-pipeline-kinesis-video-stream-pools/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMediaPipelineKinesisVideoStreamPoolOutcome(result.GetResultWithOwnership())
                            : GetMediaPipelineKinesisVideoStreamPoolOutcome(std::move(result.GetError()));
}

GetSpeakerSearchTaskOutcome ChimeSDKMediaPipelinesClient::GetSpeakerSearchTask(const GetSpeakerSearchTaskRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSpeakerSearchTask", "Required field: Identifier, is not set");
    return GetSpeakerSearchTaskOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(
        ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  if (!request.SpeakerSearchTaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSpeakerSearchTask", "Required field: SpeakerSearchTaskId, is not set");
    return GetSpeakerSearchTaskOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(
        ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpeakerSearchTaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/media-insights-pipelines/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/speaker-search-tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpeakerSearchTaskId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSpeakerSearchTaskOutcome(result.GetResultWithOwnership())
                            : GetSpeakerSearchTaskOutcome(std::move(result.GetError()));
}

GetVoiceToneAnalysisTaskOutcome ChimeSDKMediaPipelinesClient::GetVoiceToneAnalysisTask(
    const GetVoiceToneAnalysisTaskRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVoiceToneAnalysisTask", "Required field: Identifier, is not set");
    return GetVoiceToneAnalysisTaskOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(
        ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  if (!request.VoiceToneAnalysisTaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVoiceToneAnalysisTask", "Required field: VoiceToneAnalysisTaskId, is not set");
    return GetVoiceToneAnalysisTaskOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(
        ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceToneAnalysisTaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/media-insights-pipelines/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-tone-analysis-tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceToneAnalysisTaskId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetVoiceToneAnalysisTaskOutcome(result.GetResultWithOwnership())
                            : GetVoiceToneAnalysisTaskOutcome(std::move(result.GetError()));
}

ListMediaCapturePipelinesOutcome ChimeSDKMediaPipelinesClient::ListMediaCapturePipelines(
    const ListMediaCapturePipelinesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sdk-media-capture-pipelines");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMediaCapturePipelinesOutcome(result.GetResultWithOwnership())
                            : ListMediaCapturePipelinesOutcome(std::move(result.GetError()));
}

ListMediaInsightsPipelineConfigurationsOutcome ChimeSDKMediaPipelinesClient::ListMediaInsightsPipelineConfigurations(
    const ListMediaInsightsPipelineConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/media-insights-pipeline-configurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMediaInsightsPipelineConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListMediaInsightsPipelineConfigurationsOutcome(std::move(result.GetError()));
}

ListMediaPipelineKinesisVideoStreamPoolsOutcome ChimeSDKMediaPipelinesClient::ListMediaPipelineKinesisVideoStreamPools(
    const ListMediaPipelineKinesisVideoStreamPoolsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/media-pipeline-kinesis-video-stream-pools");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMediaPipelineKinesisVideoStreamPoolsOutcome(result.GetResultWithOwnership())
                            : ListMediaPipelineKinesisVideoStreamPoolsOutcome(std::move(result.GetError()));
}

ListMediaPipelinesOutcome ChimeSDKMediaPipelinesClient::ListMediaPipelines(const ListMediaPipelinesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sdk-media-pipelines");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMediaPipelinesOutcome(result.GetResultWithOwnership())
                            : ListMediaPipelinesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome ChimeSDKMediaPipelinesClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceARN, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(
        ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

StartSpeakerSearchTaskOutcome ChimeSDKMediaPipelinesClient::StartSpeakerSearchTask(const StartSpeakerSearchTaskRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartSpeakerSearchTask", "Required field: Identifier, is not set");
    return StartSpeakerSearchTaskOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(
        ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/media-insights-pipelines/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/speaker-search-tasks");
    ss.str("?operation=start");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartSpeakerSearchTaskOutcome(result.GetResultWithOwnership())
                            : StartSpeakerSearchTaskOutcome(std::move(result.GetError()));
}

StartVoiceToneAnalysisTaskOutcome ChimeSDKMediaPipelinesClient::StartVoiceToneAnalysisTask(
    const StartVoiceToneAnalysisTaskRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartVoiceToneAnalysisTask", "Required field: Identifier, is not set");
    return StartVoiceToneAnalysisTaskOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(
        ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/media-insights-pipelines/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-tone-analysis-tasks");
    ss.str("?operation=start");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartVoiceToneAnalysisTaskOutcome(result.GetResultWithOwnership())
                            : StartVoiceToneAnalysisTaskOutcome(std::move(result.GetError()));
}

StopSpeakerSearchTaskOutcome ChimeSDKMediaPipelinesClient::StopSpeakerSearchTask(const StopSpeakerSearchTaskRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopSpeakerSearchTask", "Required field: Identifier, is not set");
    return StopSpeakerSearchTaskOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(
        ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  if (!request.SpeakerSearchTaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopSpeakerSearchTask", "Required field: SpeakerSearchTaskId, is not set");
    return StopSpeakerSearchTaskOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(
        ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpeakerSearchTaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/media-insights-pipelines/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/speaker-search-tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpeakerSearchTaskId());
    ss.str("?operation=stop");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopSpeakerSearchTaskOutcome(result.GetResultWithOwnership())
                            : StopSpeakerSearchTaskOutcome(std::move(result.GetError()));
}

StopVoiceToneAnalysisTaskOutcome ChimeSDKMediaPipelinesClient::StopVoiceToneAnalysisTask(
    const StopVoiceToneAnalysisTaskRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopVoiceToneAnalysisTask", "Required field: Identifier, is not set");
    return StopVoiceToneAnalysisTaskOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(
        ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  if (!request.VoiceToneAnalysisTaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopVoiceToneAnalysisTask", "Required field: VoiceToneAnalysisTaskId, is not set");
    return StopVoiceToneAnalysisTaskOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(
        ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceToneAnalysisTaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/media-insights-pipelines/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-tone-analysis-tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceToneAnalysisTaskId());
    ss.str("?operation=stop");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopVoiceToneAnalysisTaskOutcome(result.GetResultWithOwnership())
                            : StopVoiceToneAnalysisTaskOutcome(std::move(result.GetError()));
}

TagResourceOutcome ChimeSDKMediaPipelinesClient::TagResource(const TagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
    ss.str("?operation=tag-resource");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome ChimeSDKMediaPipelinesClient::UntagResource(const UntagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
    ss.str("?operation=untag-resource");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateMediaInsightsPipelineConfigurationOutcome ChimeSDKMediaPipelinesClient::UpdateMediaInsightsPipelineConfiguration(
    const UpdateMediaInsightsPipelineConfigurationRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMediaInsightsPipelineConfiguration", "Required field: Identifier, is not set");
    return UpdateMediaInsightsPipelineConfigurationOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(
        ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/media-insights-pipeline-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateMediaInsightsPipelineConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateMediaInsightsPipelineConfigurationOutcome(std::move(result.GetError()));
}

UpdateMediaInsightsPipelineStatusOutcome ChimeSDKMediaPipelinesClient::UpdateMediaInsightsPipelineStatus(
    const UpdateMediaInsightsPipelineStatusRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMediaInsightsPipelineStatus", "Required field: Identifier, is not set");
    return UpdateMediaInsightsPipelineStatusOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(
        ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/media-insights-pipeline-status/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateMediaInsightsPipelineStatusOutcome(result.GetResultWithOwnership())
                            : UpdateMediaInsightsPipelineStatusOutcome(std::move(result.GetError()));
}

UpdateMediaPipelineKinesisVideoStreamPoolOutcome ChimeSDKMediaPipelinesClient::UpdateMediaPipelineKinesisVideoStreamPool(
    const UpdateMediaPipelineKinesisVideoStreamPoolRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMediaPipelineKinesisVideoStreamPool", "Required field: Identifier, is not set");
    return UpdateMediaPipelineKinesisVideoStreamPoolOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(
        ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/media-pipeline-kinesis-video-stream-pools/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateMediaPipelineKinesisVideoStreamPoolOutcome(result.GetResultWithOwnership())
                            : UpdateMediaPipelineKinesisVideoStreamPoolOutcome(std::move(result.GetError()));
}
