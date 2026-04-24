/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/ChimeSDKMeetingsClient.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsEndpointProvider.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsErrorMarshaller.h>
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
using namespace Aws::ChimeSDKMeetings;
using namespace Aws::ChimeSDKMeetings::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ChimeSDKMeetings {
const char SERVICE_NAME[] = "chime";
const char ALLOCATION_TAG[] = "ChimeSDKMeetingsClient";
}  // namespace ChimeSDKMeetings
}  // namespace Aws
const char* ChimeSDKMeetingsClient::GetServiceName() { return SERVICE_NAME; }
const char* ChimeSDKMeetingsClient::GetAllocationTag() { return ALLOCATION_TAG; }

ChimeSDKMeetingsClient::ChimeSDKMeetingsClient(const ChimeSDKMeetings::ChimeSDKMeetingsClientConfiguration& clientConfiguration,
                                               std::shared_ptr<ChimeSDKMeetingsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeSDKMeetingsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ChimeSDKMeetingsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ChimeSDKMeetingsClient::ChimeSDKMeetingsClient(const AWSCredentials& credentials,
                                               std::shared_ptr<ChimeSDKMeetingsEndpointProviderBase> endpointProvider,
                                               const ChimeSDKMeetings::ChimeSDKMeetingsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeSDKMeetingsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ChimeSDKMeetingsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ChimeSDKMeetingsClient::ChimeSDKMeetingsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<ChimeSDKMeetingsEndpointProviderBase> endpointProvider,
                                               const ChimeSDKMeetings::ChimeSDKMeetingsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeSDKMeetingsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ChimeSDKMeetingsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ChimeSDKMeetingsClient::ChimeSDKMeetingsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeSDKMeetingsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ChimeSDKMeetingsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ChimeSDKMeetingsClient::ChimeSDKMeetingsClient(const AWSCredentials& credentials,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeSDKMeetingsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ChimeSDKMeetingsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ChimeSDKMeetingsClient::ChimeSDKMeetingsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeSDKMeetingsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ChimeSDKMeetingsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ChimeSDKMeetingsClient::~ChimeSDKMeetingsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ChimeSDKMeetingsEndpointProviderBase>& ChimeSDKMeetingsClient::accessEndpointProvider() { return m_endpointProvider; }

void ChimeSDKMeetingsClient::init(const ChimeSDKMeetings::ChimeSDKMeetingsClientConfiguration& config) {
  AWSClient::SetServiceClientName("Chime SDK Meetings");
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

void ChimeSDKMeetingsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ChimeSDKMeetingsClient::InvokeOperationOutcome ChimeSDKMeetingsClient::InvokeServiceOperation(
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

BatchCreateAttendeeOutcome ChimeSDKMeetingsClient::BatchCreateAttendee(const BatchCreateAttendeeRequest& request) const {
  if (!request.MeetingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchCreateAttendee", "Required field: MeetingId, is not set");
    return BatchCreateAttendeeOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(
        ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attendees");
    ss.str("?operation=batch-create");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchCreateAttendeeOutcome(result.GetResultWithOwnership())
                            : BatchCreateAttendeeOutcome(std::move(result.GetError()));
}

BatchUpdateAttendeeCapabilitiesExceptOutcome ChimeSDKMeetingsClient::BatchUpdateAttendeeCapabilitiesExcept(
    const BatchUpdateAttendeeCapabilitiesExceptRequest& request) const {
  if (!request.MeetingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchUpdateAttendeeCapabilitiesExcept", "Required field: MeetingId, is not set");
    return BatchUpdateAttendeeCapabilitiesExceptOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(
        ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attendees/capabilities");
    ss.str("?operation=batch-update-except");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? BatchUpdateAttendeeCapabilitiesExceptOutcome(result.GetResultWithOwnership())
                            : BatchUpdateAttendeeCapabilitiesExceptOutcome(std::move(result.GetError()));
}

CreateAttendeeOutcome ChimeSDKMeetingsClient::CreateAttendee(const CreateAttendeeRequest& request) const {
  if (!request.MeetingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAttendee", "Required field: MeetingId, is not set");
    return CreateAttendeeOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(
        ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attendees");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAttendeeOutcome(result.GetResultWithOwnership()) : CreateAttendeeOutcome(std::move(result.GetError()));
}

CreateMeetingOutcome ChimeSDKMeetingsClient::CreateMeeting(const CreateMeetingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/meetings");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMeetingOutcome(result.GetResultWithOwnership()) : CreateMeetingOutcome(std::move(result.GetError()));
}

CreateMeetingWithAttendeesOutcome ChimeSDKMeetingsClient::CreateMeetingWithAttendees(
    const CreateMeetingWithAttendeesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/meetings");
    ss.str("?operation=create-attendees");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMeetingWithAttendeesOutcome(result.GetResultWithOwnership())
                            : CreateMeetingWithAttendeesOutcome(std::move(result.GetError()));
}

DeleteAttendeeOutcome ChimeSDKMeetingsClient::DeleteAttendee(const DeleteAttendeeRequest& request) const {
  if (!request.MeetingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAttendee", "Required field: MeetingId, is not set");
    return DeleteAttendeeOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(
        ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  if (!request.AttendeeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAttendee", "Required field: AttendeeId, is not set");
    return DeleteAttendeeOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(
        ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttendeeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attendees/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttendeeId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAttendeeOutcome(result.GetResultWithOwnership()) : DeleteAttendeeOutcome(std::move(result.GetError()));
}

DeleteMeetingOutcome ChimeSDKMeetingsClient::DeleteMeeting(const DeleteMeetingRequest& request) const {
  if (!request.MeetingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMeeting", "Required field: MeetingId, is not set");
    return DeleteMeetingOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(
        ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMeetingOutcome(result.GetResultWithOwnership()) : DeleteMeetingOutcome(std::move(result.GetError()));
}

GetAttendeeOutcome ChimeSDKMeetingsClient::GetAttendee(const GetAttendeeRequest& request) const {
  if (!request.MeetingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAttendee", "Required field: MeetingId, is not set");
    return GetAttendeeOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [MeetingId]", false));
  }
  if (!request.AttendeeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAttendee", "Required field: AttendeeId, is not set");
    return GetAttendeeOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AttendeeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attendees/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttendeeId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAttendeeOutcome(result.GetResultWithOwnership()) : GetAttendeeOutcome(std::move(result.GetError()));
}

GetMeetingOutcome ChimeSDKMeetingsClient::GetMeeting(const GetMeetingRequest& request) const {
  if (!request.MeetingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMeeting", "Required field: MeetingId, is not set");
    return GetMeetingOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [MeetingId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMeetingOutcome(result.GetResultWithOwnership()) : GetMeetingOutcome(std::move(result.GetError()));
}

ListAttendeesOutcome ChimeSDKMeetingsClient::ListAttendees(const ListAttendeesRequest& request) const {
  if (!request.MeetingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAttendees", "Required field: MeetingId, is not set");
    return ListAttendeesOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(
        ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attendees");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAttendeesOutcome(result.GetResultWithOwnership()) : ListAttendeesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome ChimeSDKMeetingsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceARN, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(
        ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

StartMeetingTranscriptionOutcome ChimeSDKMeetingsClient::StartMeetingTranscription(const StartMeetingTranscriptionRequest& request) const {
  if (!request.MeetingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartMeetingTranscription", "Required field: MeetingId, is not set");
    return StartMeetingTranscriptionOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(
        ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/transcription");
    ss.str("?operation=start");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartMeetingTranscriptionOutcome(result.GetResultWithOwnership())
                            : StartMeetingTranscriptionOutcome(std::move(result.GetError()));
}

StopMeetingTranscriptionOutcome ChimeSDKMeetingsClient::StopMeetingTranscription(const StopMeetingTranscriptionRequest& request) const {
  if (!request.MeetingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopMeetingTranscription", "Required field: MeetingId, is not set");
    return StopMeetingTranscriptionOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(
        ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/transcription");
    ss.str("?operation=stop");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopMeetingTranscriptionOutcome(result.GetResultWithOwnership())
                            : StopMeetingTranscriptionOutcome(std::move(result.GetError()));
}

TagResourceOutcome ChimeSDKMeetingsClient::TagResource(const TagResourceRequest& request) const {
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

UntagResourceOutcome ChimeSDKMeetingsClient::UntagResource(const UntagResourceRequest& request) const {
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

UpdateAttendeeCapabilitiesOutcome ChimeSDKMeetingsClient::UpdateAttendeeCapabilities(
    const UpdateAttendeeCapabilitiesRequest& request) const {
  if (!request.MeetingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAttendeeCapabilities", "Required field: MeetingId, is not set");
    return UpdateAttendeeCapabilitiesOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(
        ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  if (!request.AttendeeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAttendeeCapabilities", "Required field: AttendeeId, is not set");
    return UpdateAttendeeCapabilitiesOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(
        ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttendeeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attendees/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttendeeId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/capabilities");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateAttendeeCapabilitiesOutcome(result.GetResultWithOwnership())
                            : UpdateAttendeeCapabilitiesOutcome(std::move(result.GetError()));
}
