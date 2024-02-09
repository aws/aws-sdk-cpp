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

#include <aws/chime-sdk-meetings/ChimeSDKMeetingsClient.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsErrorMarshaller.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsEndpointProvider.h>
#include <aws/chime-sdk-meetings/model/BatchCreateAttendeeRequest.h>
#include <aws/chime-sdk-meetings/model/BatchUpdateAttendeeCapabilitiesExceptRequest.h>
#include <aws/chime-sdk-meetings/model/CreateAttendeeRequest.h>
#include <aws/chime-sdk-meetings/model/CreateMeetingRequest.h>
#include <aws/chime-sdk-meetings/model/CreateMeetingWithAttendeesRequest.h>
#include <aws/chime-sdk-meetings/model/DeleteAttendeeRequest.h>
#include <aws/chime-sdk-meetings/model/DeleteMeetingRequest.h>
#include <aws/chime-sdk-meetings/model/GetAttendeeRequest.h>
#include <aws/chime-sdk-meetings/model/GetMeetingRequest.h>
#include <aws/chime-sdk-meetings/model/ListAttendeesRequest.h>
#include <aws/chime-sdk-meetings/model/ListTagsForResourceRequest.h>
#include <aws/chime-sdk-meetings/model/StartMeetingTranscriptionRequest.h>
#include <aws/chime-sdk-meetings/model/StopMeetingTranscriptionRequest.h>
#include <aws/chime-sdk-meetings/model/TagResourceRequest.h>
#include <aws/chime-sdk-meetings/model/UntagResourceRequest.h>
#include <aws/chime-sdk-meetings/model/UpdateAttendeeCapabilitiesRequest.h>

#include <smithy/tracing/TracingUtils.h>


using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ChimeSDKMeetings;
using namespace Aws::ChimeSDKMeetings::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace ChimeSDKMeetings
  {
    const char SERVICE_NAME[] = "chime";
    const char ALLOCATION_TAG[] = "ChimeSDKMeetingsClient";
  }
}
const char* ChimeSDKMeetingsClient::GetServiceName() {return SERVICE_NAME;}
const char* ChimeSDKMeetingsClient::GetAllocationTag() {return ALLOCATION_TAG;}

ChimeSDKMeetingsClient::ChimeSDKMeetingsClient(const ChimeSDKMeetings::ChimeSDKMeetingsClientConfiguration& clientConfiguration,
                                               std::shared_ptr<ChimeSDKMeetingsEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ChimeSDKMeetingsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ChimeSDKMeetingsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ChimeSDKMeetingsClient::ChimeSDKMeetingsClient(const AWSCredentials& credentials,
                                               std::shared_ptr<ChimeSDKMeetingsEndpointProviderBase> endpointProvider,
                                               const ChimeSDKMeetings::ChimeSDKMeetingsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ChimeSDKMeetingsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ChimeSDKMeetingsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ChimeSDKMeetingsClient::ChimeSDKMeetingsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<ChimeSDKMeetingsEndpointProviderBase> endpointProvider,
                                               const ChimeSDKMeetings::ChimeSDKMeetingsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ChimeSDKMeetingsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ChimeSDKMeetingsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  ChimeSDKMeetingsClient::ChimeSDKMeetingsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ChimeSDKMeetingsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<ChimeSDKMeetingsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ChimeSDKMeetingsClient::ChimeSDKMeetingsClient(const AWSCredentials& credentials,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ChimeSDKMeetingsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ChimeSDKMeetingsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ChimeSDKMeetingsClient::ChimeSDKMeetingsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ChimeSDKMeetingsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ChimeSDKMeetingsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
ChimeSDKMeetingsClient::~ChimeSDKMeetingsClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<ChimeSDKMeetingsEndpointProviderBase>& ChimeSDKMeetingsClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void ChimeSDKMeetingsClient::init(const ChimeSDKMeetings::ChimeSDKMeetingsClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Chime SDK Meetings");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void ChimeSDKMeetingsClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

BatchCreateAttendeeOutcome ChimeSDKMeetingsClient::BatchCreateAttendee(const BatchCreateAttendeeRequest& request) const
{
  AWS_OPERATION_GUARD(BatchCreateAttendee);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchCreateAttendee, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchCreateAttendee", "Required field: MeetingId, is not set");
    return BatchCreateAttendeeOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BatchCreateAttendee, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchCreateAttendee, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchCreateAttendee",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchCreateAttendeeOutcome>(
    [&]()-> BatchCreateAttendeeOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchCreateAttendee, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/attendees");
      ss.str("?operation=batch-create");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      return BatchCreateAttendeeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchUpdateAttendeeCapabilitiesExceptOutcome ChimeSDKMeetingsClient::BatchUpdateAttendeeCapabilitiesExcept(const BatchUpdateAttendeeCapabilitiesExceptRequest& request) const
{
  AWS_OPERATION_GUARD(BatchUpdateAttendeeCapabilitiesExcept);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchUpdateAttendeeCapabilitiesExcept, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchUpdateAttendeeCapabilitiesExcept", "Required field: MeetingId, is not set");
    return BatchUpdateAttendeeCapabilitiesExceptOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BatchUpdateAttendeeCapabilitiesExcept, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchUpdateAttendeeCapabilitiesExcept, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchUpdateAttendeeCapabilitiesExcept",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchUpdateAttendeeCapabilitiesExceptOutcome>(
    [&]()-> BatchUpdateAttendeeCapabilitiesExceptOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchUpdateAttendeeCapabilitiesExcept, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/attendees/capabilities");
      ss.str("?operation=batch-update-except");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      return BatchUpdateAttendeeCapabilitiesExceptOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAttendeeOutcome ChimeSDKMeetingsClient::CreateAttendee(const CreateAttendeeRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAttendee);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAttendee, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAttendee", "Required field: MeetingId, is not set");
    return CreateAttendeeOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateAttendee, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAttendee, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAttendee",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAttendeeOutcome>(
    [&]()-> CreateAttendeeOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAttendee, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/attendees");
      return CreateAttendeeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateMeetingOutcome ChimeSDKMeetingsClient::CreateMeeting(const CreateMeetingRequest& request) const
{
  AWS_OPERATION_GUARD(CreateMeeting);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMeeting, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateMeeting, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateMeeting, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateMeeting",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateMeetingOutcome>(
    [&]()-> CreateMeetingOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMeeting, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/meetings");
      return CreateMeetingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateMeetingWithAttendeesOutcome ChimeSDKMeetingsClient::CreateMeetingWithAttendees(const CreateMeetingWithAttendeesRequest& request) const
{
  AWS_OPERATION_GUARD(CreateMeetingWithAttendees);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMeetingWithAttendees, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateMeetingWithAttendees, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateMeetingWithAttendees, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateMeetingWithAttendees",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateMeetingWithAttendeesOutcome>(
    [&]()-> CreateMeetingWithAttendeesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMeetingWithAttendees, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      endpointResolutionOutcome.GetResult().AddPathSegments("/meetings");
      ss.str("?operation=create-attendees");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      return CreateMeetingWithAttendeesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAttendeeOutcome ChimeSDKMeetingsClient::DeleteAttendee(const DeleteAttendeeRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAttendee);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAttendee, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAttendee", "Required field: MeetingId, is not set");
    return DeleteAttendeeOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  if (!request.AttendeeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAttendee", "Required field: AttendeeId, is not set");
    return DeleteAttendeeOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttendeeId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteAttendee, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAttendee, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAttendee",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAttendeeOutcome>(
    [&]()-> DeleteAttendeeOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAttendee, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/attendees/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttendeeId());
      return DeleteAttendeeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteMeetingOutcome ChimeSDKMeetingsClient::DeleteMeeting(const DeleteMeetingRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteMeeting);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMeeting, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMeeting", "Required field: MeetingId, is not set");
    return DeleteMeetingOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteMeeting, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteMeeting, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteMeeting",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteMeetingOutcome>(
    [&]()-> DeleteMeetingOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMeeting, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
      return DeleteMeetingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAttendeeOutcome ChimeSDKMeetingsClient::GetAttendee(const GetAttendeeRequest& request) const
{
  AWS_OPERATION_GUARD(GetAttendee);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAttendee, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAttendee", "Required field: MeetingId, is not set");
    return GetAttendeeOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  if (!request.AttendeeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAttendee", "Required field: AttendeeId, is not set");
    return GetAttendeeOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttendeeId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetAttendee, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAttendee, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAttendee",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAttendeeOutcome>(
    [&]()-> GetAttendeeOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAttendee, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/attendees/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttendeeId());
      return GetAttendeeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetMeetingOutcome ChimeSDKMeetingsClient::GetMeeting(const GetMeetingRequest& request) const
{
  AWS_OPERATION_GUARD(GetMeeting);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMeeting, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMeeting", "Required field: MeetingId, is not set");
    return GetMeetingOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetMeeting, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMeeting, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMeeting",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMeetingOutcome>(
    [&]()-> GetMeetingOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMeeting, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
      return GetMeetingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAttendeesOutcome ChimeSDKMeetingsClient::ListAttendees(const ListAttendeesRequest& request) const
{
  AWS_OPERATION_GUARD(ListAttendees);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAttendees, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAttendees", "Required field: MeetingId, is not set");
    return ListAttendeesOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListAttendees, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAttendees, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAttendees",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAttendeesOutcome>(
    [&]()-> ListAttendeesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAttendees, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/attendees");
      return ListAttendeesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome ChimeSDKMeetingsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceARN, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
    [&]()-> ListTagsForResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
      return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartMeetingTranscriptionOutcome ChimeSDKMeetingsClient::StartMeetingTranscription(const StartMeetingTranscriptionRequest& request) const
{
  AWS_OPERATION_GUARD(StartMeetingTranscription);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartMeetingTranscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartMeetingTranscription", "Required field: MeetingId, is not set");
    return StartMeetingTranscriptionOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartMeetingTranscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartMeetingTranscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartMeetingTranscription",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartMeetingTranscriptionOutcome>(
    [&]()-> StartMeetingTranscriptionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartMeetingTranscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/transcription");
      ss.str("?operation=start");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      return StartMeetingTranscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopMeetingTranscriptionOutcome ChimeSDKMeetingsClient::StopMeetingTranscription(const StopMeetingTranscriptionRequest& request) const
{
  AWS_OPERATION_GUARD(StopMeetingTranscription);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopMeetingTranscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopMeetingTranscription", "Required field: MeetingId, is not set");
    return StopMeetingTranscriptionOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopMeetingTranscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopMeetingTranscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopMeetingTranscription",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopMeetingTranscriptionOutcome>(
    [&]()-> StopMeetingTranscriptionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopMeetingTranscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/transcription");
      ss.str("?operation=stop");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      return StopMeetingTranscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome ChimeSDKMeetingsClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
      ss.str("?operation=tag-resource");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome ChimeSDKMeetingsClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
      ss.str("?operation=untag-resource");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAttendeeCapabilitiesOutcome ChimeSDKMeetingsClient::UpdateAttendeeCapabilities(const UpdateAttendeeCapabilitiesRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAttendeeCapabilities);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAttendeeCapabilities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAttendeeCapabilities", "Required field: MeetingId, is not set");
    return UpdateAttendeeCapabilitiesOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  if (!request.AttendeeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAttendeeCapabilities", "Required field: AttendeeId, is not set");
    return UpdateAttendeeCapabilitiesOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttendeeId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateAttendeeCapabilities, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAttendeeCapabilities, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAttendeeCapabilities",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAttendeeCapabilitiesOutcome>(
    [&]()-> UpdateAttendeeCapabilitiesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAttendeeCapabilities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/attendees/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttendeeId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/capabilities");
      return UpdateAttendeeCapabilitiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

