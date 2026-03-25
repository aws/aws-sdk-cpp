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
#include <aws/iotevents-data/IoTEventsDataClient.h>
#include <aws/iotevents-data/IoTEventsDataEndpointProvider.h>
#include <aws/iotevents-data/IoTEventsDataErrorMarshaller.h>
#include <aws/iotevents-data/model/BatchAcknowledgeAlarmRequest.h>
#include <aws/iotevents-data/model/BatchDeleteDetectorRequest.h>
#include <aws/iotevents-data/model/BatchDisableAlarmRequest.h>
#include <aws/iotevents-data/model/BatchEnableAlarmRequest.h>
#include <aws/iotevents-data/model/BatchPutMessageRequest.h>
#include <aws/iotevents-data/model/BatchResetAlarmRequest.h>
#include <aws/iotevents-data/model/BatchSnoozeAlarmRequest.h>
#include <aws/iotevents-data/model/BatchUpdateDetectorRequest.h>
#include <aws/iotevents-data/model/DescribeAlarmRequest.h>
#include <aws/iotevents-data/model/DescribeDetectorRequest.h>
#include <aws/iotevents-data/model/ListAlarmsRequest.h>
#include <aws/iotevents-data/model/ListDetectorsRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoTEventsData;
using namespace Aws::IoTEventsData::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace IoTEventsData {
const char SERVICE_NAME[] = "ioteventsdata";
const char ALLOCATION_TAG[] = "IoTEventsDataClient";
}  // namespace IoTEventsData
}  // namespace Aws
const char* IoTEventsDataClient::GetServiceName() { return SERVICE_NAME; }
const char* IoTEventsDataClient::GetAllocationTag() { return ALLOCATION_TAG; }

IoTEventsDataClient::IoTEventsDataClient(const IoTEventsData::IoTEventsDataClientConfiguration& clientConfiguration,
                                         std::shared_ptr<IoTEventsDataEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTEventsDataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IoTEventsDataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTEventsDataClient::IoTEventsDataClient(const AWSCredentials& credentials,
                                         std::shared_ptr<IoTEventsDataEndpointProviderBase> endpointProvider,
                                         const IoTEventsData::IoTEventsDataClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTEventsDataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IoTEventsDataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTEventsDataClient::IoTEventsDataClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<IoTEventsDataEndpointProviderBase> endpointProvider,
                                         const IoTEventsData::IoTEventsDataClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTEventsDataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IoTEventsDataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
IoTEventsDataClient::IoTEventsDataClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTEventsDataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IoTEventsDataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTEventsDataClient::IoTEventsDataClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTEventsDataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IoTEventsDataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTEventsDataClient::IoTEventsDataClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTEventsDataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IoTEventsDataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
IoTEventsDataClient::~IoTEventsDataClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<IoTEventsDataEndpointProviderBase>& IoTEventsDataClient::accessEndpointProvider() { return m_endpointProvider; }

void IoTEventsDataClient::init(const IoTEventsData::IoTEventsDataClientConfiguration& config) {
  AWSClient::SetServiceClientName("IoT Events Data");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "ioteventsdata");
}

void IoTEventsDataClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
IoTEventsDataClient::InvokeOperationOutcome IoTEventsDataClient::InvokeServiceOperation(
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

BatchAcknowledgeAlarmOutcome IoTEventsDataClient::BatchAcknowledgeAlarm(const BatchAcknowledgeAlarmRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/alarms/acknowledge");
  };

  return BatchAcknowledgeAlarmOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDeleteDetectorOutcome IoTEventsDataClient::BatchDeleteDetector(const BatchDeleteDetectorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detectors/delete");
  };

  return BatchDeleteDetectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDisableAlarmOutcome IoTEventsDataClient::BatchDisableAlarm(const BatchDisableAlarmRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/alarms/disable");
  };

  return BatchDisableAlarmOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchEnableAlarmOutcome IoTEventsDataClient::BatchEnableAlarm(const BatchEnableAlarmRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/alarms/enable");
  };

  return BatchEnableAlarmOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchPutMessageOutcome IoTEventsDataClient::BatchPutMessage(const BatchPutMessageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/inputs/messages");
  };

  return BatchPutMessageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchResetAlarmOutcome IoTEventsDataClient::BatchResetAlarm(const BatchResetAlarmRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/alarms/reset");
  };

  return BatchResetAlarmOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchSnoozeAlarmOutcome IoTEventsDataClient::BatchSnoozeAlarm(const BatchSnoozeAlarmRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/alarms/snooze");
  };

  return BatchSnoozeAlarmOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchUpdateDetectorOutcome IoTEventsDataClient::BatchUpdateDetector(const BatchUpdateDetectorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detectors");
  };

  return BatchUpdateDetectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAlarmOutcome IoTEventsDataClient::DescribeAlarm(const DescribeAlarmRequest& request) const {
  if (!request.AlarmModelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAlarm", "Required field: AlarmModelName, is not set");
    return DescribeAlarmOutcome(Aws::Client::AWSError<IoTEventsDataErrors>(IoTEventsDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AlarmModelName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/alarms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAlarmModelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/keyValues/");
  };

  return DescribeAlarmOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDetectorOutcome IoTEventsDataClient::DescribeDetector(const DescribeDetectorRequest& request) const {
  if (!request.DetectorModelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDetector", "Required field: DetectorModelName, is not set");
    return DescribeDetectorOutcome(Aws::Client::AWSError<IoTEventsDataErrors>(IoTEventsDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DetectorModelName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorModelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/keyValues/");
  };

  return DescribeDetectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAlarmsOutcome IoTEventsDataClient::ListAlarms(const ListAlarmsRequest& request) const {
  if (!request.AlarmModelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAlarms", "Required field: AlarmModelName, is not set");
    return ListAlarmsOutcome(Aws::Client::AWSError<IoTEventsDataErrors>(IoTEventsDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AlarmModelName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/alarms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAlarmModelName());
  };

  return ListAlarmsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDetectorsOutcome IoTEventsDataClient::ListDetectors(const ListDetectorsRequest& request) const {
  if (!request.DetectorModelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDetectors", "Required field: DetectorModelName, is not set");
    return ListDetectorsOutcome(Aws::Client::AWSError<IoTEventsDataErrors>(IoTEventsDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DetectorModelName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorModelName());
  };

  return ListDetectorsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}
