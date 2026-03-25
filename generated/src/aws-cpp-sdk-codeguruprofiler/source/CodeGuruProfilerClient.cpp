/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/CodeGuruProfilerClient.h>
#include <aws/codeguruprofiler/CodeGuruProfilerEndpointProvider.h>
#include <aws/codeguruprofiler/CodeGuruProfilerErrorMarshaller.h>
#include <aws/codeguruprofiler/model/AddNotificationChannelsRequest.h>
#include <aws/codeguruprofiler/model/BatchGetFrameMetricDataRequest.h>
#include <aws/codeguruprofiler/model/ConfigureAgentRequest.h>
#include <aws/codeguruprofiler/model/CreateProfilingGroupRequest.h>
#include <aws/codeguruprofiler/model/DeleteProfilingGroupRequest.h>
#include <aws/codeguruprofiler/model/DescribeProfilingGroupRequest.h>
#include <aws/codeguruprofiler/model/GetFindingsReportAccountSummaryRequest.h>
#include <aws/codeguruprofiler/model/GetNotificationConfigurationRequest.h>
#include <aws/codeguruprofiler/model/GetPolicyRequest.h>
#include <aws/codeguruprofiler/model/GetProfileRequest.h>
#include <aws/codeguruprofiler/model/GetRecommendationsRequest.h>
#include <aws/codeguruprofiler/model/ListFindingsReportsRequest.h>
#include <aws/codeguruprofiler/model/ListProfileTimesRequest.h>
#include <aws/codeguruprofiler/model/ListProfilingGroupsRequest.h>
#include <aws/codeguruprofiler/model/ListTagsForResourceRequest.h>
#include <aws/codeguruprofiler/model/PostAgentProfileRequest.h>
#include <aws/codeguruprofiler/model/PutPermissionRequest.h>
#include <aws/codeguruprofiler/model/RemoveNotificationChannelRequest.h>
#include <aws/codeguruprofiler/model/RemovePermissionRequest.h>
#include <aws/codeguruprofiler/model/SubmitFeedbackRequest.h>
#include <aws/codeguruprofiler/model/TagResourceRequest.h>
#include <aws/codeguruprofiler/model/UntagResourceRequest.h>
#include <aws/codeguruprofiler/model/UpdateProfilingGroupRequest.h>
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
using namespace Aws::CodeGuruProfiler;
using namespace Aws::CodeGuruProfiler::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CodeGuruProfiler {
const char SERVICE_NAME[] = "codeguru-profiler";
const char ALLOCATION_TAG[] = "CodeGuruProfilerClient";
}  // namespace CodeGuruProfiler
}  // namespace Aws
const char* CodeGuruProfilerClient::GetServiceName() { return SERVICE_NAME; }
const char* CodeGuruProfilerClient::GetAllocationTag() { return ALLOCATION_TAG; }

CodeGuruProfilerClient::CodeGuruProfilerClient(const CodeGuruProfiler::CodeGuruProfilerClientConfiguration& clientConfiguration,
                                               std::shared_ptr<CodeGuruProfilerEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeGuruProfilerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CodeGuruProfilerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeGuruProfilerClient::CodeGuruProfilerClient(const AWSCredentials& credentials,
                                               std::shared_ptr<CodeGuruProfilerEndpointProviderBase> endpointProvider,
                                               const CodeGuruProfiler::CodeGuruProfilerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeGuruProfilerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CodeGuruProfilerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeGuruProfilerClient::CodeGuruProfilerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<CodeGuruProfilerEndpointProviderBase> endpointProvider,
                                               const CodeGuruProfiler::CodeGuruProfilerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeGuruProfilerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CodeGuruProfilerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CodeGuruProfilerClient::CodeGuruProfilerClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeGuruProfilerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CodeGuruProfilerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeGuruProfilerClient::CodeGuruProfilerClient(const AWSCredentials& credentials,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeGuruProfilerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CodeGuruProfilerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeGuruProfilerClient::CodeGuruProfilerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeGuruProfilerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CodeGuruProfilerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CodeGuruProfilerClient::~CodeGuruProfilerClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CodeGuruProfilerEndpointProviderBase>& CodeGuruProfilerClient::accessEndpointProvider() { return m_endpointProvider; }

void CodeGuruProfilerClient::init(const CodeGuruProfiler::CodeGuruProfilerClientConfiguration& config) {
  AWSClient::SetServiceClientName("CodeGuruProfiler");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "codeguru-profiler");
}

void CodeGuruProfilerClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CodeGuruProfilerClient::InvokeOperationOutcome CodeGuruProfilerClient::InvokeServiceOperation(
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

AddNotificationChannelsOutcome CodeGuruProfilerClient::AddNotificationChannels(const AddNotificationChannelsRequest& request) const {
  if (!request.ProfilingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddNotificationChannels", "Required field: ProfilingGroupName, is not set");
    return AddNotificationChannelsOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/notificationConfiguration");
  };

  return AddNotificationChannelsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetFrameMetricDataOutcome CodeGuruProfilerClient::BatchGetFrameMetricData(const BatchGetFrameMetricDataRequest& request) const {
  if (!request.ProfilingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetFrameMetricData", "Required field: ProfilingGroupName, is not set");
    return BatchGetFrameMetricDataOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/frames/-/metrics");
  };

  return BatchGetFrameMetricDataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ConfigureAgentOutcome CodeGuruProfilerClient::ConfigureAgent(const ConfigureAgentRequest& request) const {
  if (!request.ProfilingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ConfigureAgent", "Required field: ProfilingGroupName, is not set");
    return ConfigureAgentOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configureAgent");
  };

  return ConfigureAgentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProfilingGroupOutcome CodeGuruProfilerClient::CreateProfilingGroup(const CreateProfilingGroupRequest& request) const {
  if (!request.ClientTokenHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateProfilingGroup", "Required field: ClientToken, is not set");
    return CreateProfilingGroupOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClientToken]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups");
  };

  return CreateProfilingGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteProfilingGroupOutcome CodeGuruProfilerClient::DeleteProfilingGroup(const DeleteProfilingGroupRequest& request) const {
  if (!request.ProfilingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProfilingGroup", "Required field: ProfilingGroupName, is not set");
    return DeleteProfilingGroupOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
  };

  return DeleteProfilingGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeProfilingGroupOutcome CodeGuruProfilerClient::DescribeProfilingGroup(const DescribeProfilingGroupRequest& request) const {
  if (!request.ProfilingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeProfilingGroup", "Required field: ProfilingGroupName, is not set");
    return DescribeProfilingGroupOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
  };

  return DescribeProfilingGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFindingsReportAccountSummaryOutcome CodeGuruProfilerClient::GetFindingsReportAccountSummary(
    const GetFindingsReportAccountSummaryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/internal/findingsReports");
  };

  return GetFindingsReportAccountSummaryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetNotificationConfigurationOutcome CodeGuruProfilerClient::GetNotificationConfiguration(
    const GetNotificationConfigurationRequest& request) const {
  if (!request.ProfilingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetNotificationConfiguration", "Required field: ProfilingGroupName, is not set");
    return GetNotificationConfigurationOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/notificationConfiguration");
  };

  return GetNotificationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPolicyOutcome CodeGuruProfilerClient::GetPolicy(const GetPolicyRequest& request) const {
  if (!request.ProfilingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPolicy", "Required field: ProfilingGroupName, is not set");
    return GetPolicyOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ProfilingGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  return GetPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetProfileOutcome CodeGuruProfilerClient::GetProfile(const GetProfileRequest& request) const {
  AWS_OPERATION_GUARD(GetProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfilingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProfile", "Required field: ProfilingGroupName, is not set");
    return GetProfileOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ProfilingGroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetProfile",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetProfileOutcome>(
      [&]() -> GetProfileOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/profile");
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET);
        return result.IsSuccess() ? GetProfileOutcome(GetProfileResult(result.GetResultWithOwnership()))
                                  : GetProfileOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetRecommendationsOutcome CodeGuruProfilerClient::GetRecommendations(const GetRecommendationsRequest& request) const {
  if (!request.EndTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRecommendations", "Required field: EndTime, is not set");
    return GetRecommendationsOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTime]", false));
  }
  if (!request.ProfilingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRecommendations", "Required field: ProfilingGroupName, is not set");
    return GetRecommendationsOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }
  if (!request.StartTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRecommendations", "Required field: StartTime, is not set");
    return GetRecommendationsOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTime]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/internal/profilingGroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recommendations");
  };

  return GetRecommendationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListFindingsReportsOutcome CodeGuruProfilerClient::ListFindingsReports(const ListFindingsReportsRequest& request) const {
  if (!request.EndTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFindingsReports", "Required field: EndTime, is not set");
    return ListFindingsReportsOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTime]", false));
  }
  if (!request.ProfilingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFindingsReports", "Required field: ProfilingGroupName, is not set");
    return ListFindingsReportsOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }
  if (!request.StartTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFindingsReports", "Required field: StartTime, is not set");
    return ListFindingsReportsOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTime]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/internal/profilingGroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/findingsReports");
  };

  return ListFindingsReportsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListProfileTimesOutcome CodeGuruProfilerClient::ListProfileTimes(const ListProfileTimesRequest& request) const {
  if (!request.EndTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProfileTimes", "Required field: EndTime, is not set");
    return ListProfileTimesOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTime]", false));
  }
  if (!request.PeriodHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProfileTimes", "Required field: Period, is not set");
    return ListProfileTimesOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Period]", false));
  }
  if (!request.ProfilingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProfileTimes", "Required field: ProfilingGroupName, is not set");
    return ListProfileTimesOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }
  if (!request.StartTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProfileTimes", "Required field: StartTime, is not set");
    return ListProfileTimesOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTime]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/profileTimes");
  };

  return ListProfileTimesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListProfilingGroupsOutcome CodeGuruProfilerClient::ListProfilingGroups(const ListProfilingGroupsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups");
  };

  return ListProfilingGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome CodeGuruProfilerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PostAgentProfileOutcome CodeGuruProfilerClient::PostAgentProfile(const PostAgentProfileRequest& request) const {
  if (!request.ProfilingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PostAgentProfile", "Required field: ProfilingGroupName, is not set");
    return PostAgentProfileOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/agentProfile");
  };

  return PostAgentProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutPermissionOutcome CodeGuruProfilerClient::PutPermission(const PutPermissionRequest& request) const {
  if (!request.ActionGroupHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutPermission", "Required field: ActionGroup, is not set");
    return PutPermissionOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ActionGroup]", false));
  }
  if (!request.ProfilingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutPermission", "Required field: ProfilingGroupName, is not set");
    return PutPermissionOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(ActionGroupMapper::GetNameForActionGroup(request.GetActionGroup()));
  };

  return PutPermissionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

RemoveNotificationChannelOutcome CodeGuruProfilerClient::RemoveNotificationChannel(const RemoveNotificationChannelRequest& request) const {
  if (!request.ChannelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveNotificationChannel", "Required field: ChannelId, is not set");
    return RemoveNotificationChannelOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  if (!request.ProfilingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveNotificationChannel", "Required field: ProfilingGroupName, is not set");
    return RemoveNotificationChannelOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/notificationConfiguration/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelId());
  };

  return RemoveNotificationChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

RemovePermissionOutcome CodeGuruProfilerClient::RemovePermission(const RemovePermissionRequest& request) const {
  if (!request.ActionGroupHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemovePermission", "Required field: ActionGroup, is not set");
    return RemovePermissionOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ActionGroup]", false));
  }
  if (!request.ProfilingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemovePermission", "Required field: ProfilingGroupName, is not set");
    return RemovePermissionOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }
  if (!request.RevisionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemovePermission", "Required field: RevisionId, is not set");
    return RemovePermissionOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RevisionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(ActionGroupMapper::GetNameForActionGroup(request.GetActionGroup()));
  };

  return RemovePermissionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

SubmitFeedbackOutcome CodeGuruProfilerClient::SubmitFeedback(const SubmitFeedbackRequest& request) const {
  if (!request.AnomalyInstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SubmitFeedback", "Required field: AnomalyInstanceId, is not set");
    return SubmitFeedbackOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnomalyInstanceId]", false));
  }
  if (!request.ProfilingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SubmitFeedback", "Required field: ProfilingGroupName, is not set");
    return SubmitFeedbackOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/internal/profilingGroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/anomalies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnomalyInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/feedback");
  };

  return SubmitFeedbackOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome CodeGuruProfilerClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome CodeGuruProfilerClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateProfilingGroupOutcome CodeGuruProfilerClient::UpdateProfilingGroup(const UpdateProfilingGroupRequest& request) const {
  if (!request.ProfilingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProfilingGroup", "Required field: ProfilingGroupName, is not set");
    return UpdateProfilingGroupOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(
        CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
  };

  return UpdateProfilingGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
