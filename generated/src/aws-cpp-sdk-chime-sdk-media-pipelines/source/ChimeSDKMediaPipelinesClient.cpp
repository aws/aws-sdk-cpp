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


#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesClient.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesErrorMarshaller.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesEndpointProvider.h>
#include <aws/chime-sdk-media-pipelines/model/CreateMediaCapturePipelineRequest.h>
#include <aws/chime-sdk-media-pipelines/model/CreateMediaConcatenationPipelineRequest.h>
#include <aws/chime-sdk-media-pipelines/model/CreateMediaInsightsPipelineRequest.h>
#include <aws/chime-sdk-media-pipelines/model/CreateMediaInsightsPipelineConfigurationRequest.h>
#include <aws/chime-sdk-media-pipelines/model/CreateMediaLiveConnectorPipelineRequest.h>
#include <aws/chime-sdk-media-pipelines/model/CreateMediaPipelineKinesisVideoStreamPoolRequest.h>
#include <aws/chime-sdk-media-pipelines/model/CreateMediaStreamPipelineRequest.h>
#include <aws/chime-sdk-media-pipelines/model/DeleteMediaCapturePipelineRequest.h>
#include <aws/chime-sdk-media-pipelines/model/DeleteMediaInsightsPipelineConfigurationRequest.h>
#include <aws/chime-sdk-media-pipelines/model/DeleteMediaPipelineRequest.h>
#include <aws/chime-sdk-media-pipelines/model/DeleteMediaPipelineKinesisVideoStreamPoolRequest.h>
#include <aws/chime-sdk-media-pipelines/model/GetMediaCapturePipelineRequest.h>
#include <aws/chime-sdk-media-pipelines/model/GetMediaInsightsPipelineConfigurationRequest.h>
#include <aws/chime-sdk-media-pipelines/model/GetMediaPipelineRequest.h>
#include <aws/chime-sdk-media-pipelines/model/GetMediaPipelineKinesisVideoStreamPoolRequest.h>
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

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ChimeSDKMediaPipelines;
using namespace Aws::ChimeSDKMediaPipelines::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace ChimeSDKMediaPipelines
  {
    const char ALLOCATION_TAG[] = "ChimeSDKMediaPipelinesClient";
    const char SERVICE_NAME[] = "chime";
  }
}
const char* ChimeSDKMediaPipelinesClient::GetServiceName() {return SERVICE_NAME;}
const char* ChimeSDKMediaPipelinesClient::GetAllocationTag() {return ALLOCATION_TAG;}

ChimeSDKMediaPipelinesClient::ChimeSDKMediaPipelinesClient(const ChimeSDKMediaPipelines::ChimeSDKMediaPipelinesClientConfiguration& clientConfiguration,
                           std::shared_ptr<ChimeSDKMediaPipelinesEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Chime SDK Media Pipelines",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<ChimeSDKMediaPipelinesErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<ChimeSDKMediaPipelinesEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

ChimeSDKMediaPipelinesClient::ChimeSDKMediaPipelinesClient(const AWSCredentials& credentials,
                           std::shared_ptr<ChimeSDKMediaPipelinesEndpointProviderBase> endpointProvider,
                           const ChimeSDKMediaPipelines::ChimeSDKMediaPipelinesClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Chime SDK Media Pipelines",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<ChimeSDKMediaPipelinesErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<ChimeSDKMediaPipelinesEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

ChimeSDKMediaPipelinesClient::ChimeSDKMediaPipelinesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<ChimeSDKMediaPipelinesEndpointProviderBase> endpointProvider,
                           const ChimeSDKMediaPipelines::ChimeSDKMediaPipelinesClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Chime SDK Media Pipelines",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<ChimeSDKMediaPipelinesErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<ChimeSDKMediaPipelinesEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
ChimeSDKMediaPipelinesClient::ChimeSDKMediaPipelinesClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "Chime SDK Media Pipelines",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<ChimeSDKMediaPipelinesErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<ChimeSDKMediaPipelinesEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

ChimeSDKMediaPipelinesClient::ChimeSDKMediaPipelinesClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Chime SDK Media Pipelines",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<ChimeSDKMediaPipelinesErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<ChimeSDKMediaPipelinesEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

ChimeSDKMediaPipelinesClient::ChimeSDKMediaPipelinesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Chime SDK Media Pipelines",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<ChimeSDKMediaPipelinesErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<ChimeSDKMediaPipelinesEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

ChimeSDKMediaPipelinesClient::~ChimeSDKMediaPipelinesClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<ChimeSDKMediaPipelinesEndpointProviderBase>& ChimeSDKMediaPipelinesClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void ChimeSDKMediaPipelinesClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
CreateMediaCapturePipelineOutcome ChimeSDKMediaPipelinesClient::CreateMediaCapturePipeline(const CreateMediaCapturePipelineRequest& request) const
{
  AWS_OPERATION_GUARD(CreateMediaCapturePipeline);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMediaCapturePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateMediaCapturePipeline, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateMediaCapturePipeline, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateMediaCapturePipeline",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateMediaCapturePipelineOutcome>(
    [&]()-> CreateMediaCapturePipelineOutcome {
      return CreateMediaCapturePipelineOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sdk-media-capture-pipelines");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateMediaConcatenationPipelineOutcome ChimeSDKMediaPipelinesClient::CreateMediaConcatenationPipeline(const CreateMediaConcatenationPipelineRequest& request) const
{
  AWS_OPERATION_GUARD(CreateMediaConcatenationPipeline);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMediaConcatenationPipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateMediaConcatenationPipeline, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateMediaConcatenationPipeline, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateMediaConcatenationPipeline",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateMediaConcatenationPipelineOutcome>(
    [&]()-> CreateMediaConcatenationPipelineOutcome {
      return CreateMediaConcatenationPipelineOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sdk-media-concatenation-pipelines");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateMediaInsightsPipelineOutcome ChimeSDKMediaPipelinesClient::CreateMediaInsightsPipeline(const CreateMediaInsightsPipelineRequest& request) const
{
  AWS_OPERATION_GUARD(CreateMediaInsightsPipeline);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMediaInsightsPipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateMediaInsightsPipeline, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateMediaInsightsPipeline, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateMediaInsightsPipeline",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateMediaInsightsPipelineOutcome>(
    [&]()-> CreateMediaInsightsPipelineOutcome {
      return CreateMediaInsightsPipelineOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/media-insights-pipelines");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateMediaInsightsPipelineConfigurationOutcome ChimeSDKMediaPipelinesClient::CreateMediaInsightsPipelineConfiguration(const CreateMediaInsightsPipelineConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateMediaInsightsPipelineConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMediaInsightsPipelineConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateMediaInsightsPipelineConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateMediaInsightsPipelineConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateMediaInsightsPipelineConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateMediaInsightsPipelineConfigurationOutcome>(
    [&]()-> CreateMediaInsightsPipelineConfigurationOutcome {
      return CreateMediaInsightsPipelineConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/media-insights-pipeline-configurations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateMediaLiveConnectorPipelineOutcome ChimeSDKMediaPipelinesClient::CreateMediaLiveConnectorPipeline(const CreateMediaLiveConnectorPipelineRequest& request) const
{
  AWS_OPERATION_GUARD(CreateMediaLiveConnectorPipeline);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMediaLiveConnectorPipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateMediaLiveConnectorPipeline, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateMediaLiveConnectorPipeline, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateMediaLiveConnectorPipeline",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateMediaLiveConnectorPipelineOutcome>(
    [&]()-> CreateMediaLiveConnectorPipelineOutcome {
      return CreateMediaLiveConnectorPipelineOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sdk-media-live-connector-pipelines");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateMediaPipelineKinesisVideoStreamPoolOutcome ChimeSDKMediaPipelinesClient::CreateMediaPipelineKinesisVideoStreamPool(const CreateMediaPipelineKinesisVideoStreamPoolRequest& request) const
{
  AWS_OPERATION_GUARD(CreateMediaPipelineKinesisVideoStreamPool);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMediaPipelineKinesisVideoStreamPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateMediaPipelineKinesisVideoStreamPool, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateMediaPipelineKinesisVideoStreamPool, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateMediaPipelineKinesisVideoStreamPool",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateMediaPipelineKinesisVideoStreamPoolOutcome>(
    [&]()-> CreateMediaPipelineKinesisVideoStreamPoolOutcome {
      return CreateMediaPipelineKinesisVideoStreamPoolOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/media-pipeline-kinesis-video-stream-pools");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateMediaStreamPipelineOutcome ChimeSDKMediaPipelinesClient::CreateMediaStreamPipeline(const CreateMediaStreamPipelineRequest& request) const
{
  AWS_OPERATION_GUARD(CreateMediaStreamPipeline);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMediaStreamPipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateMediaStreamPipeline, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateMediaStreamPipeline, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateMediaStreamPipeline",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateMediaStreamPipelineOutcome>(
    [&]()-> CreateMediaStreamPipelineOutcome {
      return CreateMediaStreamPipelineOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sdk-media-stream-pipelines");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteMediaCapturePipelineOutcome ChimeSDKMediaPipelinesClient::DeleteMediaCapturePipeline(const DeleteMediaCapturePipelineRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteMediaCapturePipeline);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMediaCapturePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MediaPipelineIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMediaCapturePipeline", "Required field: MediaPipelineId, is not set");
    return DeleteMediaCapturePipelineOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaPipelineId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteMediaCapturePipeline, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteMediaCapturePipeline, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteMediaCapturePipeline",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteMediaCapturePipelineOutcome>(
    [&]()-> DeleteMediaCapturePipelineOutcome {
      return DeleteMediaCapturePipelineOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sdk-media-capture-pipelines/");
      resolvedEndpoint.AddPathSegment(request.GetMediaPipelineId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteMediaInsightsPipelineConfigurationOutcome ChimeSDKMediaPipelinesClient::DeleteMediaInsightsPipelineConfiguration(const DeleteMediaInsightsPipelineConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteMediaInsightsPipelineConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMediaInsightsPipelineConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMediaInsightsPipelineConfiguration", "Required field: Identifier, is not set");
    return DeleteMediaInsightsPipelineConfigurationOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteMediaInsightsPipelineConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteMediaInsightsPipelineConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteMediaInsightsPipelineConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteMediaInsightsPipelineConfigurationOutcome>(
    [&]()-> DeleteMediaInsightsPipelineConfigurationOutcome {
      return DeleteMediaInsightsPipelineConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/media-insights-pipeline-configurations/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteMediaPipelineOutcome ChimeSDKMediaPipelinesClient::DeleteMediaPipeline(const DeleteMediaPipelineRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteMediaPipeline);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMediaPipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MediaPipelineIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMediaPipeline", "Required field: MediaPipelineId, is not set");
    return DeleteMediaPipelineOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaPipelineId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteMediaPipeline, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteMediaPipeline, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteMediaPipeline",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteMediaPipelineOutcome>(
    [&]()-> DeleteMediaPipelineOutcome {
      return DeleteMediaPipelineOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sdk-media-pipelines/");
      resolvedEndpoint.AddPathSegment(request.GetMediaPipelineId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteMediaPipelineKinesisVideoStreamPoolOutcome ChimeSDKMediaPipelinesClient::DeleteMediaPipelineKinesisVideoStreamPool(const DeleteMediaPipelineKinesisVideoStreamPoolRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteMediaPipelineKinesisVideoStreamPool);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMediaPipelineKinesisVideoStreamPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMediaPipelineKinesisVideoStreamPool", "Required field: Identifier, is not set");
    return DeleteMediaPipelineKinesisVideoStreamPoolOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteMediaPipelineKinesisVideoStreamPool, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteMediaPipelineKinesisVideoStreamPool, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteMediaPipelineKinesisVideoStreamPool",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteMediaPipelineKinesisVideoStreamPoolOutcome>(
    [&]()-> DeleteMediaPipelineKinesisVideoStreamPoolOutcome {
      return DeleteMediaPipelineKinesisVideoStreamPoolOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/media-pipeline-kinesis-video-stream-pools/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetMediaCapturePipelineOutcome ChimeSDKMediaPipelinesClient::GetMediaCapturePipeline(const GetMediaCapturePipelineRequest& request) const
{
  AWS_OPERATION_GUARD(GetMediaCapturePipeline);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMediaCapturePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MediaPipelineIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMediaCapturePipeline", "Required field: MediaPipelineId, is not set");
    return GetMediaCapturePipelineOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaPipelineId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetMediaCapturePipeline, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMediaCapturePipeline, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMediaCapturePipeline",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMediaCapturePipelineOutcome>(
    [&]()-> GetMediaCapturePipelineOutcome {
      return GetMediaCapturePipelineOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sdk-media-capture-pipelines/");
      resolvedEndpoint.AddPathSegment(request.GetMediaPipelineId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetMediaInsightsPipelineConfigurationOutcome ChimeSDKMediaPipelinesClient::GetMediaInsightsPipelineConfiguration(const GetMediaInsightsPipelineConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetMediaInsightsPipelineConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMediaInsightsPipelineConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMediaInsightsPipelineConfiguration", "Required field: Identifier, is not set");
    return GetMediaInsightsPipelineConfigurationOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetMediaInsightsPipelineConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMediaInsightsPipelineConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMediaInsightsPipelineConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMediaInsightsPipelineConfigurationOutcome>(
    [&]()-> GetMediaInsightsPipelineConfigurationOutcome {
      return GetMediaInsightsPipelineConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/media-insights-pipeline-configurations/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetMediaPipelineOutcome ChimeSDKMediaPipelinesClient::GetMediaPipeline(const GetMediaPipelineRequest& request) const
{
  AWS_OPERATION_GUARD(GetMediaPipeline);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMediaPipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MediaPipelineIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMediaPipeline", "Required field: MediaPipelineId, is not set");
    return GetMediaPipelineOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaPipelineId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetMediaPipeline, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMediaPipeline, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMediaPipeline",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMediaPipelineOutcome>(
    [&]()-> GetMediaPipelineOutcome {
      return GetMediaPipelineOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sdk-media-pipelines/");
      resolvedEndpoint.AddPathSegment(request.GetMediaPipelineId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetMediaPipelineKinesisVideoStreamPoolOutcome ChimeSDKMediaPipelinesClient::GetMediaPipelineKinesisVideoStreamPool(const GetMediaPipelineKinesisVideoStreamPoolRequest& request) const
{
  AWS_OPERATION_GUARD(GetMediaPipelineKinesisVideoStreamPool);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMediaPipelineKinesisVideoStreamPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMediaPipelineKinesisVideoStreamPool", "Required field: Identifier, is not set");
    return GetMediaPipelineKinesisVideoStreamPoolOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetMediaPipelineKinesisVideoStreamPool, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMediaPipelineKinesisVideoStreamPool, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMediaPipelineKinesisVideoStreamPool",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMediaPipelineKinesisVideoStreamPoolOutcome>(
    [&]()-> GetMediaPipelineKinesisVideoStreamPoolOutcome {
      return GetMediaPipelineKinesisVideoStreamPoolOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/media-pipeline-kinesis-video-stream-pools/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSpeakerSearchTaskOutcome ChimeSDKMediaPipelinesClient::GetSpeakerSearchTask(const GetSpeakerSearchTaskRequest& request) const
{
  AWS_OPERATION_GUARD(GetSpeakerSearchTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSpeakerSearchTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSpeakerSearchTask", "Required field: Identifier, is not set");
    return GetSpeakerSearchTaskOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  if (!request.SpeakerSearchTaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSpeakerSearchTask", "Required field: SpeakerSearchTaskId, is not set");
    return GetSpeakerSearchTaskOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpeakerSearchTaskId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSpeakerSearchTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSpeakerSearchTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSpeakerSearchTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSpeakerSearchTaskOutcome>(
    [&]()-> GetSpeakerSearchTaskOutcome {
      return GetSpeakerSearchTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/media-insights-pipelines/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/speaker-search-tasks/");
      resolvedEndpoint.AddPathSegment(request.GetSpeakerSearchTaskId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetVoiceToneAnalysisTaskOutcome ChimeSDKMediaPipelinesClient::GetVoiceToneAnalysisTask(const GetVoiceToneAnalysisTaskRequest& request) const
{
  AWS_OPERATION_GUARD(GetVoiceToneAnalysisTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVoiceToneAnalysisTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceToneAnalysisTask", "Required field: Identifier, is not set");
    return GetVoiceToneAnalysisTaskOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  if (!request.VoiceToneAnalysisTaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceToneAnalysisTask", "Required field: VoiceToneAnalysisTaskId, is not set");
    return GetVoiceToneAnalysisTaskOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceToneAnalysisTaskId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetVoiceToneAnalysisTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetVoiceToneAnalysisTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetVoiceToneAnalysisTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetVoiceToneAnalysisTaskOutcome>(
    [&]()-> GetVoiceToneAnalysisTaskOutcome {
      return GetVoiceToneAnalysisTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/media-insights-pipelines/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/voice-tone-analysis-tasks/");
      resolvedEndpoint.AddPathSegment(request.GetVoiceToneAnalysisTaskId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMediaCapturePipelinesOutcome ChimeSDKMediaPipelinesClient::ListMediaCapturePipelines(const ListMediaCapturePipelinesRequest& request) const
{
  AWS_OPERATION_GUARD(ListMediaCapturePipelines);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMediaCapturePipelines, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListMediaCapturePipelines, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMediaCapturePipelines, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMediaCapturePipelines",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMediaCapturePipelinesOutcome>(
    [&]()-> ListMediaCapturePipelinesOutcome {
      return ListMediaCapturePipelinesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sdk-media-capture-pipelines");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMediaInsightsPipelineConfigurationsOutcome ChimeSDKMediaPipelinesClient::ListMediaInsightsPipelineConfigurations(const ListMediaInsightsPipelineConfigurationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListMediaInsightsPipelineConfigurations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMediaInsightsPipelineConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListMediaInsightsPipelineConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMediaInsightsPipelineConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMediaInsightsPipelineConfigurations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMediaInsightsPipelineConfigurationsOutcome>(
    [&]()-> ListMediaInsightsPipelineConfigurationsOutcome {
      return ListMediaInsightsPipelineConfigurationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/media-insights-pipeline-configurations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMediaPipelineKinesisVideoStreamPoolsOutcome ChimeSDKMediaPipelinesClient::ListMediaPipelineKinesisVideoStreamPools(const ListMediaPipelineKinesisVideoStreamPoolsRequest& request) const
{
  AWS_OPERATION_GUARD(ListMediaPipelineKinesisVideoStreamPools);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMediaPipelineKinesisVideoStreamPools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListMediaPipelineKinesisVideoStreamPools, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMediaPipelineKinesisVideoStreamPools, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMediaPipelineKinesisVideoStreamPools",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMediaPipelineKinesisVideoStreamPoolsOutcome>(
    [&]()-> ListMediaPipelineKinesisVideoStreamPoolsOutcome {
      return ListMediaPipelineKinesisVideoStreamPoolsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/media-pipeline-kinesis-video-stream-pools");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMediaPipelinesOutcome ChimeSDKMediaPipelinesClient::ListMediaPipelines(const ListMediaPipelinesRequest& request) const
{
  AWS_OPERATION_GUARD(ListMediaPipelines);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMediaPipelines, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListMediaPipelines, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMediaPipelines, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMediaPipelines",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMediaPipelinesOutcome>(
    [&]()-> ListMediaPipelinesOutcome {
      return ListMediaPipelinesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sdk-media-pipelines");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome ChimeSDKMediaPipelinesClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceARN, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceARN]", false));
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
      resolvedEndpoint.AddPathSegments("/tags");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartSpeakerSearchTaskOutcome ChimeSDKMediaPipelinesClient::StartSpeakerSearchTask(const StartSpeakerSearchTaskRequest& request) const
{
  AWS_OPERATION_GUARD(StartSpeakerSearchTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartSpeakerSearchTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartSpeakerSearchTask", "Required field: Identifier, is not set");
    return StartSpeakerSearchTaskOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartSpeakerSearchTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartSpeakerSearchTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartSpeakerSearchTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartSpeakerSearchTaskOutcome>(
    [&]()-> StartSpeakerSearchTaskOutcome {
      return StartSpeakerSearchTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      resolvedEndpoint.AddPathSegments("/media-insights-pipelines/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegment("/speaker-search-tasks");
      ss.str("?operation=start");
      resolvedEndpoint.SetQueryString(ss.str());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartVoiceToneAnalysisTaskOutcome ChimeSDKMediaPipelinesClient::StartVoiceToneAnalysisTask(const StartVoiceToneAnalysisTaskRequest& request) const
{
  AWS_OPERATION_GUARD(StartVoiceToneAnalysisTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartVoiceToneAnalysisTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartVoiceToneAnalysisTask", "Required field: Identifier, is not set");
    return StartVoiceToneAnalysisTaskOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartVoiceToneAnalysisTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartVoiceToneAnalysisTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartVoiceToneAnalysisTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartVoiceToneAnalysisTaskOutcome>(
    [&]()-> StartVoiceToneAnalysisTaskOutcome {
      return StartVoiceToneAnalysisTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      resolvedEndpoint.AddPathSegments("/media-insights-pipelines/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegment("/voice-tone-analysis-tasks");
      ss.str("?operation=start");
      resolvedEndpoint.SetQueryString(ss.str());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopSpeakerSearchTaskOutcome ChimeSDKMediaPipelinesClient::StopSpeakerSearchTask(const StopSpeakerSearchTaskRequest& request) const
{
  AWS_OPERATION_GUARD(StopSpeakerSearchTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopSpeakerSearchTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopSpeakerSearchTask", "Required field: Identifier, is not set");
    return StopSpeakerSearchTaskOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  if (!request.SpeakerSearchTaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopSpeakerSearchTask", "Required field: SpeakerSearchTaskId, is not set");
    return StopSpeakerSearchTaskOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpeakerSearchTaskId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StopSpeakerSearchTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopSpeakerSearchTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopSpeakerSearchTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopSpeakerSearchTaskOutcome>(
    [&]()-> StopSpeakerSearchTaskOutcome {
      return StopSpeakerSearchTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      resolvedEndpoint.AddPathSegments("/media-insights-pipelines/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/speaker-search-tasks/");
      resolvedEndpoint.AddPathSegment(request.GetSpeakerSearchTaskId());
      ss.str("?operation=stop");
      resolvedEndpoint.SetQueryString(ss.str());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopVoiceToneAnalysisTaskOutcome ChimeSDKMediaPipelinesClient::StopVoiceToneAnalysisTask(const StopVoiceToneAnalysisTaskRequest& request) const
{
  AWS_OPERATION_GUARD(StopVoiceToneAnalysisTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopVoiceToneAnalysisTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopVoiceToneAnalysisTask", "Required field: Identifier, is not set");
    return StopVoiceToneAnalysisTaskOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  if (!request.VoiceToneAnalysisTaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopVoiceToneAnalysisTask", "Required field: VoiceToneAnalysisTaskId, is not set");
    return StopVoiceToneAnalysisTaskOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceToneAnalysisTaskId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StopVoiceToneAnalysisTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopVoiceToneAnalysisTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopVoiceToneAnalysisTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopVoiceToneAnalysisTaskOutcome>(
    [&]()-> StopVoiceToneAnalysisTaskOutcome {
      return StopVoiceToneAnalysisTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      resolvedEndpoint.AddPathSegments("/media-insights-pipelines/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/voice-tone-analysis-tasks/");
      resolvedEndpoint.AddPathSegment(request.GetVoiceToneAnalysisTaskId());
      ss.str("?operation=stop");
      resolvedEndpoint.SetQueryString(ss.str());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome ChimeSDKMediaPipelinesClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
      Aws::StringStream ss;
      resolvedEndpoint.AddPathSegments("/tags");
      ss.str("?operation=tag-resource");
      resolvedEndpoint.SetQueryString(ss.str());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome ChimeSDKMediaPipelinesClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      return UntagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      resolvedEndpoint.AddPathSegments("/tags");
      ss.str("?operation=untag-resource");
      resolvedEndpoint.SetQueryString(ss.str());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateMediaInsightsPipelineConfigurationOutcome ChimeSDKMediaPipelinesClient::UpdateMediaInsightsPipelineConfiguration(const UpdateMediaInsightsPipelineConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateMediaInsightsPipelineConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMediaInsightsPipelineConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMediaInsightsPipelineConfiguration", "Required field: Identifier, is not set");
    return UpdateMediaInsightsPipelineConfigurationOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateMediaInsightsPipelineConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateMediaInsightsPipelineConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateMediaInsightsPipelineConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateMediaInsightsPipelineConfigurationOutcome>(
    [&]()-> UpdateMediaInsightsPipelineConfigurationOutcome {
      return UpdateMediaInsightsPipelineConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/media-insights-pipeline-configurations/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateMediaInsightsPipelineStatusOutcome ChimeSDKMediaPipelinesClient::UpdateMediaInsightsPipelineStatus(const UpdateMediaInsightsPipelineStatusRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateMediaInsightsPipelineStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMediaInsightsPipelineStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMediaInsightsPipelineStatus", "Required field: Identifier, is not set");
    return UpdateMediaInsightsPipelineStatusOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateMediaInsightsPipelineStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateMediaInsightsPipelineStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateMediaInsightsPipelineStatus",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateMediaInsightsPipelineStatusOutcome>(
    [&]()-> UpdateMediaInsightsPipelineStatusOutcome {
      return UpdateMediaInsightsPipelineStatusOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/media-insights-pipeline-status/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateMediaPipelineKinesisVideoStreamPoolOutcome ChimeSDKMediaPipelinesClient::UpdateMediaPipelineKinesisVideoStreamPool(const UpdateMediaPipelineKinesisVideoStreamPoolRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateMediaPipelineKinesisVideoStreamPool);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMediaPipelineKinesisVideoStreamPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMediaPipelineKinesisVideoStreamPool", "Required field: Identifier, is not set");
    return UpdateMediaPipelineKinesisVideoStreamPoolOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateMediaPipelineKinesisVideoStreamPool, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateMediaPipelineKinesisVideoStreamPool, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateMediaPipelineKinesisVideoStreamPool",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateMediaPipelineKinesisVideoStreamPoolOutcome>(
    [&]()-> UpdateMediaPipelineKinesisVideoStreamPoolOutcome {
      return UpdateMediaPipelineKinesisVideoStreamPoolOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/media-pipeline-kinesis-video-stream-pools/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


