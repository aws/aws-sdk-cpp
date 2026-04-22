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
#include <aws/emr-serverless/EMRServerlessClient.h>
#include <aws/emr-serverless/EMRServerlessEndpointProvider.h>
#include <aws/emr-serverless/EMRServerlessErrorMarshaller.h>
#include <aws/emr-serverless/model/CancelJobRunRequest.h>
#include <aws/emr-serverless/model/CreateApplicationRequest.h>
#include <aws/emr-serverless/model/DeleteApplicationRequest.h>
#include <aws/emr-serverless/model/GetApplicationRequest.h>
#include <aws/emr-serverless/model/GetDashboardForJobRunRequest.h>
#include <aws/emr-serverless/model/GetJobRunRequest.h>
#include <aws/emr-serverless/model/GetResourceDashboardRequest.h>
#include <aws/emr-serverless/model/GetSessionEndpointRequest.h>
#include <aws/emr-serverless/model/GetSessionRequest.h>
#include <aws/emr-serverless/model/ListApplicationsRequest.h>
#include <aws/emr-serverless/model/ListJobRunAttemptsRequest.h>
#include <aws/emr-serverless/model/ListJobRunsRequest.h>
#include <aws/emr-serverless/model/ListSessionsRequest.h>
#include <aws/emr-serverless/model/ListTagsForResourceRequest.h>
#include <aws/emr-serverless/model/StartApplicationRequest.h>
#include <aws/emr-serverless/model/StartJobRunRequest.h>
#include <aws/emr-serverless/model/StartSessionRequest.h>
#include <aws/emr-serverless/model/StopApplicationRequest.h>
#include <aws/emr-serverless/model/TagResourceRequest.h>
#include <aws/emr-serverless/model/TerminateSessionRequest.h>
#include <aws/emr-serverless/model/UntagResourceRequest.h>
#include <aws/emr-serverless/model/UpdateApplicationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EMRServerless;
using namespace Aws::EMRServerless::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace EMRServerless {
const char SERVICE_NAME[] = "emr-serverless";
const char ALLOCATION_TAG[] = "EMRServerlessClient";
}  // namespace EMRServerless
}  // namespace Aws
const char* EMRServerlessClient::GetServiceName() { return SERVICE_NAME; }
const char* EMRServerlessClient::GetAllocationTag() { return ALLOCATION_TAG; }

EMRServerlessClient::EMRServerlessClient(const EMRServerless::EMRServerlessClientConfiguration& clientConfiguration,
                                         std::shared_ptr<EMRServerlessEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EMRServerlessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EMRServerlessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EMRServerlessClient::EMRServerlessClient(const AWSCredentials& credentials,
                                         std::shared_ptr<EMRServerlessEndpointProviderBase> endpointProvider,
                                         const EMRServerless::EMRServerlessClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EMRServerlessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EMRServerlessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EMRServerlessClient::EMRServerlessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<EMRServerlessEndpointProviderBase> endpointProvider,
                                         const EMRServerless::EMRServerlessClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EMRServerlessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EMRServerlessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
EMRServerlessClient::EMRServerlessClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EMRServerlessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EMRServerlessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EMRServerlessClient::EMRServerlessClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EMRServerlessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EMRServerlessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EMRServerlessClient::EMRServerlessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EMRServerlessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EMRServerlessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
EMRServerlessClient::~EMRServerlessClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<EMRServerlessEndpointProviderBase>& EMRServerlessClient::accessEndpointProvider() { return m_endpointProvider; }

void EMRServerlessClient::init(const EMRServerless::EMRServerlessClientConfiguration& config) {
  AWSClient::SetServiceClientName("EMR Serverless");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "emr-serverless");
}

void EMRServerlessClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
EMRServerlessClient::InvokeOperationOutcome EMRServerlessClient::InvokeServiceOperation(
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

CancelJobRunOutcome EMRServerlessClient::CancelJobRun(const CancelJobRunRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelJobRun", "Required field: ApplicationId, is not set");
    return CancelJobRunOutcome(Aws::Client::AWSError<EMRServerlessErrors>(EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ApplicationId]", false));
  }
  if (!request.JobRunIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelJobRun", "Required field: JobRunId, is not set");
    return CancelJobRunOutcome(Aws::Client::AWSError<EMRServerlessErrors>(EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [JobRunId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobruns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobRunId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? CancelJobRunOutcome(result.GetResultWithOwnership()) : CancelJobRunOutcome(std::move(result.GetError()));
}

CreateApplicationOutcome EMRServerlessClient::CreateApplication(const CreateApplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateApplicationOutcome(result.GetResultWithOwnership())
                            : CreateApplicationOutcome(std::move(result.GetError()));
}

DeleteApplicationOutcome EMRServerlessClient::DeleteApplication(const DeleteApplicationRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteApplication", "Required field: ApplicationId, is not set");
    return DeleteApplicationOutcome(Aws::Client::AWSError<EMRServerlessErrors>(EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteApplicationOutcome(result.GetResultWithOwnership())
                            : DeleteApplicationOutcome(std::move(result.GetError()));
}

GetApplicationOutcome EMRServerlessClient::GetApplication(const GetApplicationRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApplication", "Required field: ApplicationId, is not set");
    return GetApplicationOutcome(Aws::Client::AWSError<EMRServerlessErrors>(EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetApplicationOutcome(result.GetResultWithOwnership()) : GetApplicationOutcome(std::move(result.GetError()));
}

GetDashboardForJobRunOutcome EMRServerlessClient::GetDashboardForJobRun(const GetDashboardForJobRunRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDashboardForJobRun", "Required field: ApplicationId, is not set");
    return GetDashboardForJobRunOutcome(Aws::Client::AWSError<EMRServerlessErrors>(
        EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.JobRunIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDashboardForJobRun", "Required field: JobRunId, is not set");
    return GetDashboardForJobRunOutcome(Aws::Client::AWSError<EMRServerlessErrors>(
        EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobRunId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobruns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobRunId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dashboard");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDashboardForJobRunOutcome(result.GetResultWithOwnership())
                            : GetDashboardForJobRunOutcome(std::move(result.GetError()));
}

GetJobRunOutcome EMRServerlessClient::GetJobRun(const GetJobRunRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJobRun", "Required field: ApplicationId, is not set");
    return GetJobRunOutcome(Aws::Client::AWSError<EMRServerlessErrors>(EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ApplicationId]", false));
  }
  if (!request.JobRunIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJobRun", "Required field: JobRunId, is not set");
    return GetJobRunOutcome(Aws::Client::AWSError<EMRServerlessErrors>(EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [JobRunId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobruns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobRunId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetJobRunOutcome(result.GetResultWithOwnership()) : GetJobRunOutcome(std::move(result.GetError()));
}

GetResourceDashboardOutcome EMRServerlessClient::GetResourceDashboard(const GetResourceDashboardRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourceDashboard", "Required field: ApplicationId, is not set");
    return GetResourceDashboardOutcome(Aws::Client::AWSError<EMRServerlessErrors>(
        EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourceDashboard", "Required field: ResourceId, is not set");
    return GetResourceDashboardOutcome(Aws::Client::AWSError<EMRServerlessErrors>(
        EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.ResourceTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourceDashboard", "Required field: ResourceType, is not set");
    return GetResourceDashboardOutcome(Aws::Client::AWSError<EMRServerlessErrors>(
        EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dashboard");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetResourceDashboardOutcome(result.GetResultWithOwnership())
                            : GetResourceDashboardOutcome(std::move(result.GetError()));
}

GetSessionOutcome EMRServerlessClient::GetSession(const GetSessionRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: ApplicationId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<EMRServerlessErrors>(EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ApplicationId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: SessionId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<EMRServerlessErrors>(EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [SessionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSessionOutcome(result.GetResultWithOwnership()) : GetSessionOutcome(std::move(result.GetError()));
}

GetSessionEndpointOutcome EMRServerlessClient::GetSessionEndpoint(const GetSessionEndpointRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSessionEndpoint", "Required field: ApplicationId, is not set");
    return GetSessionEndpointOutcome(Aws::Client::AWSError<EMRServerlessErrors>(EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ApplicationId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSessionEndpoint", "Required field: SessionId, is not set");
    return GetSessionEndpointOutcome(Aws::Client::AWSError<EMRServerlessErrors>(EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [SessionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/endpoint");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSessionEndpointOutcome(result.GetResultWithOwnership())
                            : GetSessionEndpointOutcome(std::move(result.GetError()));
}

ListApplicationsOutcome EMRServerlessClient::ListApplications(const ListApplicationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListApplicationsOutcome(result.GetResultWithOwnership())
                            : ListApplicationsOutcome(std::move(result.GetError()));
}

ListJobRunAttemptsOutcome EMRServerlessClient::ListJobRunAttempts(const ListJobRunAttemptsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListJobRunAttempts", "Required field: ApplicationId, is not set");
    return ListJobRunAttemptsOutcome(Aws::Client::AWSError<EMRServerlessErrors>(EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ApplicationId]", false));
  }
  if (!request.JobRunIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListJobRunAttempts", "Required field: JobRunId, is not set");
    return ListJobRunAttemptsOutcome(Aws::Client::AWSError<EMRServerlessErrors>(EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [JobRunId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobruns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobRunId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attempts");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListJobRunAttemptsOutcome(result.GetResultWithOwnership())
                            : ListJobRunAttemptsOutcome(std::move(result.GetError()));
}

ListJobRunsOutcome EMRServerlessClient::ListJobRuns(const ListJobRunsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListJobRuns", "Required field: ApplicationId, is not set");
    return ListJobRunsOutcome(Aws::Client::AWSError<EMRServerlessErrors>(EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobruns");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListJobRunsOutcome(result.GetResultWithOwnership()) : ListJobRunsOutcome(std::move(result.GetError()));
}

ListSessionsOutcome EMRServerlessClient::ListSessions(const ListSessionsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSessions", "Required field: ApplicationId, is not set");
    return ListSessionsOutcome(Aws::Client::AWSError<EMRServerlessErrors>(EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSessionsOutcome(result.GetResultWithOwnership()) : ListSessionsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome EMRServerlessClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<EMRServerlessErrors>(
        EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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

StartApplicationOutcome EMRServerlessClient::StartApplication(const StartApplicationRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartApplication", "Required field: ApplicationId, is not set");
    return StartApplicationOutcome(Aws::Client::AWSError<EMRServerlessErrors>(EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/start");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartApplicationOutcome(result.GetResultWithOwnership())
                            : StartApplicationOutcome(std::move(result.GetError()));
}

StartJobRunOutcome EMRServerlessClient::StartJobRun(const StartJobRunRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartJobRun", "Required field: ApplicationId, is not set");
    return StartJobRunOutcome(Aws::Client::AWSError<EMRServerlessErrors>(EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobruns");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartJobRunOutcome(result.GetResultWithOwnership()) : StartJobRunOutcome(std::move(result.GetError()));
}

StartSessionOutcome EMRServerlessClient::StartSession(const StartSessionRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartSession", "Required field: ApplicationId, is not set");
    return StartSessionOutcome(Aws::Client::AWSError<EMRServerlessErrors>(EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartSessionOutcome(result.GetResultWithOwnership()) : StartSessionOutcome(std::move(result.GetError()));
}

StopApplicationOutcome EMRServerlessClient::StopApplication(const StopApplicationRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopApplication", "Required field: ApplicationId, is not set");
    return StopApplicationOutcome(Aws::Client::AWSError<EMRServerlessErrors>(EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopApplicationOutcome(result.GetResultWithOwnership())
                            : StopApplicationOutcome(std::move(result.GetError()));
}

TagResourceOutcome EMRServerlessClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<EMRServerlessErrors>(EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

TerminateSessionOutcome EMRServerlessClient::TerminateSession(const TerminateSessionRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TerminateSession", "Required field: ApplicationId, is not set");
    return TerminateSessionOutcome(Aws::Client::AWSError<EMRServerlessErrors>(EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ApplicationId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TerminateSession", "Required field: SessionId, is not set");
    return TerminateSessionOutcome(Aws::Client::AWSError<EMRServerlessErrors>(EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [SessionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? TerminateSessionOutcome(result.GetResultWithOwnership())
                            : TerminateSessionOutcome(std::move(result.GetError()));
}

UntagResourceOutcome EMRServerlessClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<EMRServerlessErrors>(EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<EMRServerlessErrors>(EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

UpdateApplicationOutcome EMRServerlessClient::UpdateApplication(const UpdateApplicationRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateApplication", "Required field: ApplicationId, is not set");
    return UpdateApplicationOutcome(Aws::Client::AWSError<EMRServerlessErrors>(EMRServerlessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateApplicationOutcome(result.GetResultWithOwnership())
                            : UpdateApplicationOutcome(std::move(result.GetError()));
}
