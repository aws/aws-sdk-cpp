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
#include <aws/internetmonitor/InternetMonitorClient.h>
#include <aws/internetmonitor/InternetMonitorEndpointProvider.h>
#include <aws/internetmonitor/InternetMonitorErrorMarshaller.h>
#include <aws/internetmonitor/model/CreateMonitorRequest.h>
#include <aws/internetmonitor/model/DeleteMonitorRequest.h>
#include <aws/internetmonitor/model/GetHealthEventRequest.h>
#include <aws/internetmonitor/model/GetInternetEventRequest.h>
#include <aws/internetmonitor/model/GetMonitorRequest.h>
#include <aws/internetmonitor/model/GetQueryResultsRequest.h>
#include <aws/internetmonitor/model/GetQueryStatusRequest.h>
#include <aws/internetmonitor/model/ListHealthEventsRequest.h>
#include <aws/internetmonitor/model/ListInternetEventsRequest.h>
#include <aws/internetmonitor/model/ListMonitorsRequest.h>
#include <aws/internetmonitor/model/ListTagsForResourceRequest.h>
#include <aws/internetmonitor/model/StartQueryRequest.h>
#include <aws/internetmonitor/model/StopQueryRequest.h>
#include <aws/internetmonitor/model/TagResourceRequest.h>
#include <aws/internetmonitor/model/UntagResourceRequest.h>
#include <aws/internetmonitor/model/UpdateMonitorRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::InternetMonitor;
using namespace Aws::InternetMonitor::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace InternetMonitor {
const char SERVICE_NAME[] = "internetmonitor";
const char ALLOCATION_TAG[] = "InternetMonitorClient";
}  // namespace InternetMonitor
}  // namespace Aws
const char* InternetMonitorClient::GetServiceName() { return SERVICE_NAME; }
const char* InternetMonitorClient::GetAllocationTag() { return ALLOCATION_TAG; }

InternetMonitorClient::InternetMonitorClient(const InternetMonitor::InternetMonitorClientConfiguration& clientConfiguration,
                                             std::shared_ptr<InternetMonitorEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<InternetMonitorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<InternetMonitorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

InternetMonitorClient::InternetMonitorClient(const AWSCredentials& credentials,
                                             std::shared_ptr<InternetMonitorEndpointProviderBase> endpointProvider,
                                             const InternetMonitor::InternetMonitorClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<InternetMonitorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<InternetMonitorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

InternetMonitorClient::InternetMonitorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             std::shared_ptr<InternetMonitorEndpointProviderBase> endpointProvider,
                                             const InternetMonitor::InternetMonitorClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<InternetMonitorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<InternetMonitorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
InternetMonitorClient::InternetMonitorClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<InternetMonitorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<InternetMonitorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

InternetMonitorClient::InternetMonitorClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<InternetMonitorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<InternetMonitorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

InternetMonitorClient::InternetMonitorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<InternetMonitorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<InternetMonitorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
InternetMonitorClient::~InternetMonitorClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<InternetMonitorEndpointProviderBase>& InternetMonitorClient::accessEndpointProvider() { return m_endpointProvider; }

void InternetMonitorClient::init(const InternetMonitor::InternetMonitorClientConfiguration& config) {
  AWSClient::SetServiceClientName("InternetMonitor");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "internetmonitor");
}

void InternetMonitorClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
InternetMonitorClient::InvokeOperationOutcome InternetMonitorClient::InvokeServiceOperation(
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

CreateMonitorOutcome InternetMonitorClient::CreateMonitor(const CreateMonitorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20210603/Monitors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMonitorOutcome(result.GetResultWithOwnership()) : CreateMonitorOutcome(std::move(result.GetError()));
}

DeleteMonitorOutcome InternetMonitorClient::DeleteMonitor(const DeleteMonitorRequest& request) const {
  if (!request.MonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMonitor", "Required field: MonitorName, is not set");
    return DeleteMonitorOutcome(Aws::Client::AWSError<InternetMonitorErrors>(InternetMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [MonitorName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20210603/Monitors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMonitorOutcome(result.GetResultWithOwnership()) : DeleteMonitorOutcome(std::move(result.GetError()));
}

GetHealthEventOutcome InternetMonitorClient::GetHealthEvent(const GetHealthEventRequest& request) const {
  if (!request.MonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetHealthEvent", "Required field: MonitorName, is not set");
    return GetHealthEventOutcome(Aws::Client::AWSError<InternetMonitorErrors>(InternetMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [MonitorName]", false));
  }
  if (!request.EventIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetHealthEvent", "Required field: EventId, is not set");
    return GetHealthEventOutcome(Aws::Client::AWSError<InternetMonitorErrors>(InternetMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [EventId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20210603/Monitors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/HealthEvents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEventId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetHealthEventOutcome(result.GetResultWithOwnership()) : GetHealthEventOutcome(std::move(result.GetError()));
}

GetInternetEventOutcome InternetMonitorClient::GetInternetEvent(const GetInternetEventRequest& request) const {
  if (!request.EventIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetInternetEvent", "Required field: EventId, is not set");
    return GetInternetEventOutcome(Aws::Client::AWSError<InternetMonitorErrors>(
        InternetMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20210603/InternetEvents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEventId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetInternetEventOutcome(result.GetResultWithOwnership())
                            : GetInternetEventOutcome(std::move(result.GetError()));
}

GetMonitorOutcome InternetMonitorClient::GetMonitor(const GetMonitorRequest& request) const {
  if (!request.MonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMonitor", "Required field: MonitorName, is not set");
    return GetMonitorOutcome(Aws::Client::AWSError<InternetMonitorErrors>(InternetMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [MonitorName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20210603/Monitors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMonitorOutcome(result.GetResultWithOwnership()) : GetMonitorOutcome(std::move(result.GetError()));
}

GetQueryResultsOutcome InternetMonitorClient::GetQueryResults(const GetQueryResultsRequest& request) const {
  if (!request.MonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueryResults", "Required field: MonitorName, is not set");
    return GetQueryResultsOutcome(Aws::Client::AWSError<InternetMonitorErrors>(
        InternetMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MonitorName]", false));
  }
  if (!request.QueryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueryResults", "Required field: QueryId, is not set");
    return GetQueryResultsOutcome(Aws::Client::AWSError<InternetMonitorErrors>(
        InternetMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20210603/Monitors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/Queries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/Results");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetQueryResultsOutcome(result.GetResultWithOwnership())
                            : GetQueryResultsOutcome(std::move(result.GetError()));
}

GetQueryStatusOutcome InternetMonitorClient::GetQueryStatus(const GetQueryStatusRequest& request) const {
  if (!request.MonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueryStatus", "Required field: MonitorName, is not set");
    return GetQueryStatusOutcome(Aws::Client::AWSError<InternetMonitorErrors>(InternetMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [MonitorName]", false));
  }
  if (!request.QueryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueryStatus", "Required field: QueryId, is not set");
    return GetQueryStatusOutcome(Aws::Client::AWSError<InternetMonitorErrors>(InternetMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [QueryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20210603/Monitors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/Queries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/Status");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetQueryStatusOutcome(result.GetResultWithOwnership()) : GetQueryStatusOutcome(std::move(result.GetError()));
}

ListHealthEventsOutcome InternetMonitorClient::ListHealthEvents(const ListHealthEventsRequest& request) const {
  if (!request.MonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListHealthEvents", "Required field: MonitorName, is not set");
    return ListHealthEventsOutcome(Aws::Client::AWSError<InternetMonitorErrors>(
        InternetMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MonitorName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20210603/Monitors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/HealthEvents");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListHealthEventsOutcome(result.GetResultWithOwnership())
                            : ListHealthEventsOutcome(std::move(result.GetError()));
}

ListInternetEventsOutcome InternetMonitorClient::ListInternetEvents(const ListInternetEventsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20210603/InternetEvents");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListInternetEventsOutcome(result.GetResultWithOwnership())
                            : ListInternetEventsOutcome(std::move(result.GetError()));
}

ListMonitorsOutcome InternetMonitorClient::ListMonitors(const ListMonitorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20210603/Monitors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMonitorsOutcome(result.GetResultWithOwnership()) : ListMonitorsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome InternetMonitorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<InternetMonitorErrors>(
        InternetMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

StartQueryOutcome InternetMonitorClient::StartQuery(const StartQueryRequest& request) const {
  if (!request.MonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartQuery", "Required field: MonitorName, is not set");
    return StartQueryOutcome(Aws::Client::AWSError<InternetMonitorErrors>(InternetMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [MonitorName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20210603/Monitors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/Queries");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartQueryOutcome(result.GetResultWithOwnership()) : StartQueryOutcome(std::move(result.GetError()));
}

StopQueryOutcome InternetMonitorClient::StopQuery(const StopQueryRequest& request) const {
  if (!request.MonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopQuery", "Required field: MonitorName, is not set");
    return StopQueryOutcome(Aws::Client::AWSError<InternetMonitorErrors>(InternetMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [MonitorName]", false));
  }
  if (!request.QueryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopQuery", "Required field: QueryId, is not set");
    return StopQueryOutcome(Aws::Client::AWSError<InternetMonitorErrors>(InternetMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [QueryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20210603/Monitors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/Queries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueryId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? StopQueryOutcome(result.GetResultWithOwnership()) : StopQueryOutcome(std::move(result.GetError()));
}

TagResourceOutcome InternetMonitorClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<InternetMonitorErrors>(InternetMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome InternetMonitorClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<InternetMonitorErrors>(InternetMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<InternetMonitorErrors>(InternetMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateMonitorOutcome InternetMonitorClient::UpdateMonitor(const UpdateMonitorRequest& request) const {
  if (!request.MonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMonitor", "Required field: MonitorName, is not set");
    return UpdateMonitorOutcome(Aws::Client::AWSError<InternetMonitorErrors>(InternetMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [MonitorName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20210603/Monitors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateMonitorOutcome(result.GetResultWithOwnership()) : UpdateMonitorOutcome(std::move(result.GetError()));
}
