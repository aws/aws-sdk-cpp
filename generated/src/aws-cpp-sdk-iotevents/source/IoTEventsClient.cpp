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
#include <aws/iotevents/IoTEventsClient.h>
#include <aws/iotevents/IoTEventsEndpointProvider.h>
#include <aws/iotevents/IoTEventsErrorMarshaller.h>
#include <aws/iotevents/model/CreateAlarmModelRequest.h>
#include <aws/iotevents/model/CreateDetectorModelRequest.h>
#include <aws/iotevents/model/CreateInputRequest.h>
#include <aws/iotevents/model/DeleteAlarmModelRequest.h>
#include <aws/iotevents/model/DeleteDetectorModelRequest.h>
#include <aws/iotevents/model/DeleteInputRequest.h>
#include <aws/iotevents/model/DescribeAlarmModelRequest.h>
#include <aws/iotevents/model/DescribeDetectorModelAnalysisRequest.h>
#include <aws/iotevents/model/DescribeDetectorModelRequest.h>
#include <aws/iotevents/model/DescribeInputRequest.h>
#include <aws/iotevents/model/DescribeLoggingOptionsRequest.h>
#include <aws/iotevents/model/GetDetectorModelAnalysisResultsRequest.h>
#include <aws/iotevents/model/ListAlarmModelVersionsRequest.h>
#include <aws/iotevents/model/ListAlarmModelsRequest.h>
#include <aws/iotevents/model/ListDetectorModelVersionsRequest.h>
#include <aws/iotevents/model/ListDetectorModelsRequest.h>
#include <aws/iotevents/model/ListInputRoutingsRequest.h>
#include <aws/iotevents/model/ListInputsRequest.h>
#include <aws/iotevents/model/ListTagsForResourceRequest.h>
#include <aws/iotevents/model/PutLoggingOptionsRequest.h>
#include <aws/iotevents/model/StartDetectorModelAnalysisRequest.h>
#include <aws/iotevents/model/TagResourceRequest.h>
#include <aws/iotevents/model/UntagResourceRequest.h>
#include <aws/iotevents/model/UpdateAlarmModelRequest.h>
#include <aws/iotevents/model/UpdateDetectorModelRequest.h>
#include <aws/iotevents/model/UpdateInputRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoTEvents;
using namespace Aws::IoTEvents::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace IoTEvents {
const char SERVICE_NAME[] = "iotevents";
const char ALLOCATION_TAG[] = "IoTEventsClient";
}  // namespace IoTEvents
}  // namespace Aws
const char* IoTEventsClient::GetServiceName() { return SERVICE_NAME; }
const char* IoTEventsClient::GetAllocationTag() { return ALLOCATION_TAG; }

IoTEventsClient::IoTEventsClient(const IoTEvents::IoTEventsClientConfiguration& clientConfiguration,
                                 std::shared_ptr<IoTEventsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTEventsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IoTEventsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTEventsClient::IoTEventsClient(const AWSCredentials& credentials, std::shared_ptr<IoTEventsEndpointProviderBase> endpointProvider,
                                 const IoTEvents::IoTEventsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTEventsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IoTEventsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTEventsClient::IoTEventsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<IoTEventsEndpointProviderBase> endpointProvider,
                                 const IoTEvents::IoTEventsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTEventsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IoTEventsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
IoTEventsClient::IoTEventsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTEventsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IoTEventsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTEventsClient::IoTEventsClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTEventsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IoTEventsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTEventsClient::IoTEventsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTEventsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IoTEventsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
IoTEventsClient::~IoTEventsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<IoTEventsEndpointProviderBase>& IoTEventsClient::accessEndpointProvider() { return m_endpointProvider; }

void IoTEventsClient::init(const IoTEvents::IoTEventsClientConfiguration& config) {
  AWSClient::SetServiceClientName("IoT Events");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "iotevents");
}

void IoTEventsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
IoTEventsClient::InvokeOperationOutcome IoTEventsClient::InvokeServiceOperation(
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

CreateAlarmModelOutcome IoTEventsClient::CreateAlarmModel(const CreateAlarmModelRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/alarm-models");
  };

  return CreateAlarmModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDetectorModelOutcome IoTEventsClient::CreateDetectorModel(const CreateDetectorModelRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector-models");
  };

  return CreateDetectorModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateInputOutcome IoTEventsClient::CreateInput(const CreateInputRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/inputs");
  };

  return CreateInputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAlarmModelOutcome IoTEventsClient::DeleteAlarmModel(const DeleteAlarmModelRequest& request) const {
  if (!request.AlarmModelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAlarmModel", "Required field: AlarmModelName, is not set");
    return DeleteAlarmModelOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AlarmModelName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/alarm-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAlarmModelName());
  };

  return DeleteAlarmModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDetectorModelOutcome IoTEventsClient::DeleteDetectorModel(const DeleteDetectorModelRequest& request) const {
  if (!request.DetectorModelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDetectorModel", "Required field: DetectorModelName, is not set");
    return DeleteDetectorModelOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DetectorModelName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorModelName());
  };

  return DeleteDetectorModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteInputOutcome IoTEventsClient::DeleteInput(const DeleteInputRequest& request) const {
  if (!request.InputNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteInput", "Required field: InputName, is not set");
    return DeleteInputOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [InputName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/inputs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInputName());
  };

  return DeleteInputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeAlarmModelOutcome IoTEventsClient::DescribeAlarmModel(const DescribeAlarmModelRequest& request) const {
  if (!request.AlarmModelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAlarmModel", "Required field: AlarmModelName, is not set");
    return DescribeAlarmModelOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AlarmModelName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/alarm-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAlarmModelName());
  };

  return DescribeAlarmModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDetectorModelOutcome IoTEventsClient::DescribeDetectorModel(const DescribeDetectorModelRequest& request) const {
  if (!request.DetectorModelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDetectorModel", "Required field: DetectorModelName, is not set");
    return DescribeDetectorModelOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DetectorModelName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorModelName());
  };

  return DescribeDetectorModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDetectorModelAnalysisOutcome IoTEventsClient::DescribeDetectorModelAnalysis(
    const DescribeDetectorModelAnalysisRequest& request) const {
  if (!request.AnalysisIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDetectorModelAnalysis", "Required field: AnalysisId, is not set");
    return DescribeDetectorModelAnalysisOutcome(Aws::Client::AWSError<IoTEventsErrors>(
        IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/analysis/detector-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
  };

  return DescribeDetectorModelAnalysisOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeInputOutcome IoTEventsClient::DescribeInput(const DescribeInputRequest& request) const {
  if (!request.InputNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeInput", "Required field: InputName, is not set");
    return DescribeInputOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [InputName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/inputs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInputName());
  };

  return DescribeInputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeLoggingOptionsOutcome IoTEventsClient::DescribeLoggingOptions(const DescribeLoggingOptionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/logging");
  };

  return DescribeLoggingOptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDetectorModelAnalysisResultsOutcome IoTEventsClient::GetDetectorModelAnalysisResults(
    const GetDetectorModelAnalysisResultsRequest& request) const {
  if (!request.AnalysisIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDetectorModelAnalysisResults", "Required field: AnalysisId, is not set");
    return GetDetectorModelAnalysisResultsOutcome(Aws::Client::AWSError<IoTEventsErrors>(
        IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/analysis/detector-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/results");
  };

  return GetDetectorModelAnalysisResultsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAlarmModelVersionsOutcome IoTEventsClient::ListAlarmModelVersions(const ListAlarmModelVersionsRequest& request) const {
  if (!request.AlarmModelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAlarmModelVersions", "Required field: AlarmModelName, is not set");
    return ListAlarmModelVersionsOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AlarmModelName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/alarm-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAlarmModelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return ListAlarmModelVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAlarmModelsOutcome IoTEventsClient::ListAlarmModels(const ListAlarmModelsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/alarm-models");
  };

  return ListAlarmModelsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDetectorModelVersionsOutcome IoTEventsClient::ListDetectorModelVersions(const ListDetectorModelVersionsRequest& request) const {
  if (!request.DetectorModelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDetectorModelVersions", "Required field: DetectorModelName, is not set");
    return ListDetectorModelVersionsOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [DetectorModelName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorModelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return ListDetectorModelVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDetectorModelsOutcome IoTEventsClient::ListDetectorModels(const ListDetectorModelsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector-models");
  };

  return ListDetectorModelsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListInputRoutingsOutcome IoTEventsClient::ListInputRoutings(const ListInputRoutingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/input-routings");
  };

  return ListInputRoutingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListInputsOutcome IoTEventsClient::ListInputs(const ListInputsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/inputs");
  };

  return ListInputsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome IoTEventsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PutLoggingOptionsOutcome IoTEventsClient::PutLoggingOptions(const PutLoggingOptionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/logging");
  };

  return PutLoggingOptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartDetectorModelAnalysisOutcome IoTEventsClient::StartDetectorModelAnalysis(const StartDetectorModelAnalysisRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/analysis/detector-models/");
  };

  return StartDetectorModelAnalysisOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome IoTEventsClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome IoTEventsClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateAlarmModelOutcome IoTEventsClient::UpdateAlarmModel(const UpdateAlarmModelRequest& request) const {
  if (!request.AlarmModelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAlarmModel", "Required field: AlarmModelName, is not set");
    return UpdateAlarmModelOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AlarmModelName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/alarm-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAlarmModelName());
  };

  return UpdateAlarmModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDetectorModelOutcome IoTEventsClient::UpdateDetectorModel(const UpdateDetectorModelRequest& request) const {
  if (!request.DetectorModelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDetectorModel", "Required field: DetectorModelName, is not set");
    return UpdateDetectorModelOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DetectorModelName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorModelName());
  };

  return UpdateDetectorModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateInputOutcome IoTEventsClient::UpdateInput(const UpdateInputRequest& request) const {
  if (!request.InputNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateInput", "Required field: InputName, is not set");
    return UpdateInputOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [InputName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/inputs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInputName());
  };

  return UpdateInputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
