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
#include <aws/m2/MainframeModernizationClient.h>
#include <aws/m2/MainframeModernizationEndpointProvider.h>
#include <aws/m2/MainframeModernizationErrorMarshaller.h>
#include <aws/m2/model/CancelBatchJobExecutionRequest.h>
#include <aws/m2/model/CreateApplicationRequest.h>
#include <aws/m2/model/CreateDataSetExportTaskRequest.h>
#include <aws/m2/model/CreateDataSetImportTaskRequest.h>
#include <aws/m2/model/CreateDeploymentRequest.h>
#include <aws/m2/model/CreateEnvironmentRequest.h>
#include <aws/m2/model/DeleteApplicationFromEnvironmentRequest.h>
#include <aws/m2/model/DeleteApplicationRequest.h>
#include <aws/m2/model/DeleteEnvironmentRequest.h>
#include <aws/m2/model/GetApplicationRequest.h>
#include <aws/m2/model/GetApplicationVersionRequest.h>
#include <aws/m2/model/GetBatchJobExecutionRequest.h>
#include <aws/m2/model/GetDataSetDetailsRequest.h>
#include <aws/m2/model/GetDataSetExportTaskRequest.h>
#include <aws/m2/model/GetDataSetImportTaskRequest.h>
#include <aws/m2/model/GetDeploymentRequest.h>
#include <aws/m2/model/GetEnvironmentRequest.h>
#include <aws/m2/model/GetSignedBluinsightsUrlRequest.h>
#include <aws/m2/model/ListApplicationVersionsRequest.h>
#include <aws/m2/model/ListApplicationsRequest.h>
#include <aws/m2/model/ListBatchJobDefinitionsRequest.h>
#include <aws/m2/model/ListBatchJobExecutionsRequest.h>
#include <aws/m2/model/ListBatchJobRestartPointsRequest.h>
#include <aws/m2/model/ListDataSetExportHistoryRequest.h>
#include <aws/m2/model/ListDataSetImportHistoryRequest.h>
#include <aws/m2/model/ListDataSetsRequest.h>
#include <aws/m2/model/ListDeploymentsRequest.h>
#include <aws/m2/model/ListEngineVersionsRequest.h>
#include <aws/m2/model/ListEnvironmentsRequest.h>
#include <aws/m2/model/ListTagsForResourceRequest.h>
#include <aws/m2/model/StartApplicationRequest.h>
#include <aws/m2/model/StartBatchJobRequest.h>
#include <aws/m2/model/StopApplicationRequest.h>
#include <aws/m2/model/TagResourceRequest.h>
#include <aws/m2/model/UntagResourceRequest.h>
#include <aws/m2/model/UpdateApplicationRequest.h>
#include <aws/m2/model/UpdateEnvironmentRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MainframeModernization;
using namespace Aws::MainframeModernization::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace MainframeModernization {
const char SERVICE_NAME[] = "m2";
const char ALLOCATION_TAG[] = "MainframeModernizationClient";
}  // namespace MainframeModernization
}  // namespace Aws
const char* MainframeModernizationClient::GetServiceName() { return SERVICE_NAME; }
const char* MainframeModernizationClient::GetAllocationTag() { return ALLOCATION_TAG; }

MainframeModernizationClient::MainframeModernizationClient(
    const MainframeModernization::MainframeModernizationClientConfiguration& clientConfiguration,
    std::shared_ptr<MainframeModernizationEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MainframeModernizationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<MainframeModernizationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MainframeModernizationClient::MainframeModernizationClient(
    const AWSCredentials& credentials, std::shared_ptr<MainframeModernizationEndpointProviderBase> endpointProvider,
    const MainframeModernization::MainframeModernizationClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MainframeModernizationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<MainframeModernizationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MainframeModernizationClient::MainframeModernizationClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<MainframeModernizationEndpointProviderBase> endpointProvider,
    const MainframeModernization::MainframeModernizationClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MainframeModernizationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<MainframeModernizationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
MainframeModernizationClient::MainframeModernizationClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MainframeModernizationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MainframeModernizationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MainframeModernizationClient::MainframeModernizationClient(const AWSCredentials& credentials,
                                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MainframeModernizationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MainframeModernizationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MainframeModernizationClient::MainframeModernizationClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MainframeModernizationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MainframeModernizationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
MainframeModernizationClient::~MainframeModernizationClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<MainframeModernizationEndpointProviderBase>& MainframeModernizationClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void MainframeModernizationClient::init(const MainframeModernization::MainframeModernizationClientConfiguration& config) {
  AWSClient::SetServiceClientName("m2");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "m2");
}

void MainframeModernizationClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
MainframeModernizationClient::InvokeOperationOutcome MainframeModernizationClient::InvokeServiceOperation(
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

CancelBatchJobExecutionOutcome MainframeModernizationClient::CancelBatchJobExecution(const CancelBatchJobExecutionRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelBatchJobExecution", "Required field: ApplicationId, is not set");
    return CancelBatchJobExecutionOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.ExecutionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelBatchJobExecution", "Required field: ExecutionId, is not set");
    return CancelBatchJobExecutionOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExecutionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/batch-job-executions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExecutionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cancel");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelBatchJobExecutionOutcome(result.GetResultWithOwnership())
                            : CancelBatchJobExecutionOutcome(std::move(result.GetError()));
}

CreateApplicationOutcome MainframeModernizationClient::CreateApplication(const CreateApplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateApplicationOutcome(result.GetResultWithOwnership())
                            : CreateApplicationOutcome(std::move(result.GetError()));
}

CreateDataSetExportTaskOutcome MainframeModernizationClient::CreateDataSetExportTask(const CreateDataSetExportTaskRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDataSetExportTask", "Required field: ApplicationId, is not set");
    return CreateDataSetExportTaskOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataset-export-task");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDataSetExportTaskOutcome(result.GetResultWithOwnership())
                            : CreateDataSetExportTaskOutcome(std::move(result.GetError()));
}

CreateDataSetImportTaskOutcome MainframeModernizationClient::CreateDataSetImportTask(const CreateDataSetImportTaskRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDataSetImportTask", "Required field: ApplicationId, is not set");
    return CreateDataSetImportTaskOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataset-import-task");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDataSetImportTaskOutcome(result.GetResultWithOwnership())
                            : CreateDataSetImportTaskOutcome(std::move(result.GetError()));
}

CreateDeploymentOutcome MainframeModernizationClient::CreateDeployment(const CreateDeploymentRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDeployment", "Required field: ApplicationId, is not set");
    return CreateDeploymentOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDeploymentOutcome(result.GetResultWithOwnership())
                            : CreateDeploymentOutcome(std::move(result.GetError()));
}

CreateEnvironmentOutcome MainframeModernizationClient::CreateEnvironment(const CreateEnvironmentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEnvironmentOutcome(result.GetResultWithOwnership())
                            : CreateEnvironmentOutcome(std::move(result.GetError()));
}

DeleteApplicationOutcome MainframeModernizationClient::DeleteApplication(const DeleteApplicationRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteApplication", "Required field: ApplicationId, is not set");
    return DeleteApplicationOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
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

DeleteApplicationFromEnvironmentOutcome MainframeModernizationClient::DeleteApplicationFromEnvironment(
    const DeleteApplicationFromEnvironmentRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteApplicationFromEnvironment", "Required field: ApplicationId, is not set");
    return DeleteApplicationFromEnvironmentOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteApplicationFromEnvironment", "Required field: EnvironmentId, is not set");
    return DeleteApplicationFromEnvironmentOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteApplicationFromEnvironmentOutcome(result.GetResultWithOwnership())
                            : DeleteApplicationFromEnvironmentOutcome(std::move(result.GetError()));
}

DeleteEnvironmentOutcome MainframeModernizationClient::DeleteEnvironment(const DeleteEnvironmentRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEnvironment", "Required field: EnvironmentId, is not set");
    return DeleteEnvironmentOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteEnvironmentOutcome(result.GetResultWithOwnership())
                            : DeleteEnvironmentOutcome(std::move(result.GetError()));
}

GetApplicationOutcome MainframeModernizationClient::GetApplication(const GetApplicationRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApplication", "Required field: ApplicationId, is not set");
    return GetApplicationOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetApplicationOutcome(result.GetResultWithOwnership()) : GetApplicationOutcome(std::move(result.GetError()));
}

GetApplicationVersionOutcome MainframeModernizationClient::GetApplicationVersion(const GetApplicationVersionRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApplicationVersion", "Required field: ApplicationId, is not set");
    return GetApplicationVersionOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.ApplicationVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApplicationVersion", "Required field: ApplicationVersion, is not set");
    return GetApplicationVersionOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationVersion());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetApplicationVersionOutcome(result.GetResultWithOwnership())
                            : GetApplicationVersionOutcome(std::move(result.GetError()));
}

GetBatchJobExecutionOutcome MainframeModernizationClient::GetBatchJobExecution(const GetBatchJobExecutionRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBatchJobExecution", "Required field: ApplicationId, is not set");
    return GetBatchJobExecutionOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.ExecutionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBatchJobExecution", "Required field: ExecutionId, is not set");
    return GetBatchJobExecutionOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExecutionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/batch-job-executions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExecutionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBatchJobExecutionOutcome(result.GetResultWithOwnership())
                            : GetBatchJobExecutionOutcome(std::move(result.GetError()));
}

GetDataSetDetailsOutcome MainframeModernizationClient::GetDataSetDetails(const GetDataSetDetailsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataSetDetails", "Required field: ApplicationId, is not set");
    return GetDataSetDetailsOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.DataSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataSetDetails", "Required field: DataSetName, is not set");
    return GetDataSetDetailsOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDataSetDetailsOutcome(result.GetResultWithOwnership())
                            : GetDataSetDetailsOutcome(std::move(result.GetError()));
}

GetDataSetExportTaskOutcome MainframeModernizationClient::GetDataSetExportTask(const GetDataSetExportTaskRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataSetExportTask", "Required field: ApplicationId, is not set");
    return GetDataSetExportTaskOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.TaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataSetExportTask", "Required field: TaskId, is not set");
    return GetDataSetExportTaskOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataset-export-tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDataSetExportTaskOutcome(result.GetResultWithOwnership())
                            : GetDataSetExportTaskOutcome(std::move(result.GetError()));
}

GetDataSetImportTaskOutcome MainframeModernizationClient::GetDataSetImportTask(const GetDataSetImportTaskRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataSetImportTask", "Required field: ApplicationId, is not set");
    return GetDataSetImportTaskOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.TaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataSetImportTask", "Required field: TaskId, is not set");
    return GetDataSetImportTaskOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataset-import-tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDataSetImportTaskOutcome(result.GetResultWithOwnership())
                            : GetDataSetImportTaskOutcome(std::move(result.GetError()));
}

GetDeploymentOutcome MainframeModernizationClient::GetDeployment(const GetDeploymentRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDeployment", "Required field: ApplicationId, is not set");
    return GetDeploymentOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.DeploymentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDeployment", "Required field: DeploymentId, is not set");
    return GetDeploymentOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDeploymentOutcome(result.GetResultWithOwnership()) : GetDeploymentOutcome(std::move(result.GetError()));
}

GetEnvironmentOutcome MainframeModernizationClient::GetEnvironment(const GetEnvironmentRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEnvironment", "Required field: EnvironmentId, is not set");
    return GetEnvironmentOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetEnvironmentOutcome(result.GetResultWithOwnership()) : GetEnvironmentOutcome(std::move(result.GetError()));
}

GetSignedBluinsightsUrlOutcome MainframeModernizationClient::GetSignedBluinsightsUrl(const GetSignedBluinsightsUrlRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/signed-bi-url");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSignedBluinsightsUrlOutcome(result.GetResultWithOwnership())
                            : GetSignedBluinsightsUrlOutcome(std::move(result.GetError()));
}

ListApplicationVersionsOutcome MainframeModernizationClient::ListApplicationVersions(const ListApplicationVersionsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListApplicationVersions", "Required field: ApplicationId, is not set");
    return ListApplicationVersionsOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListApplicationVersionsOutcome(result.GetResultWithOwnership())
                            : ListApplicationVersionsOutcome(std::move(result.GetError()));
}

ListApplicationsOutcome MainframeModernizationClient::ListApplications(const ListApplicationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListApplicationsOutcome(result.GetResultWithOwnership())
                            : ListApplicationsOutcome(std::move(result.GetError()));
}

ListBatchJobDefinitionsOutcome MainframeModernizationClient::ListBatchJobDefinitions(const ListBatchJobDefinitionsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBatchJobDefinitions", "Required field: ApplicationId, is not set");
    return ListBatchJobDefinitionsOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/batch-job-definitions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListBatchJobDefinitionsOutcome(result.GetResultWithOwnership())
                            : ListBatchJobDefinitionsOutcome(std::move(result.GetError()));
}

ListBatchJobExecutionsOutcome MainframeModernizationClient::ListBatchJobExecutions(const ListBatchJobExecutionsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBatchJobExecutions", "Required field: ApplicationId, is not set");
    return ListBatchJobExecutionsOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/batch-job-executions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListBatchJobExecutionsOutcome(result.GetResultWithOwnership())
                            : ListBatchJobExecutionsOutcome(std::move(result.GetError()));
}

ListBatchJobRestartPointsOutcome MainframeModernizationClient::ListBatchJobRestartPoints(
    const ListBatchJobRestartPointsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBatchJobRestartPoints", "Required field: ApplicationId, is not set");
    return ListBatchJobRestartPointsOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.ExecutionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBatchJobRestartPoints", "Required field: ExecutionId, is not set");
    return ListBatchJobRestartPointsOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExecutionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/batch-job-executions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExecutionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/steps");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListBatchJobRestartPointsOutcome(result.GetResultWithOwnership())
                            : ListBatchJobRestartPointsOutcome(std::move(result.GetError()));
}

ListDataSetExportHistoryOutcome MainframeModernizationClient::ListDataSetExportHistory(
    const ListDataSetExportHistoryRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataSetExportHistory", "Required field: ApplicationId, is not set");
    return ListDataSetExportHistoryOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataset-export-tasks");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDataSetExportHistoryOutcome(result.GetResultWithOwnership())
                            : ListDataSetExportHistoryOutcome(std::move(result.GetError()));
}

ListDataSetImportHistoryOutcome MainframeModernizationClient::ListDataSetImportHistory(
    const ListDataSetImportHistoryRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataSetImportHistory", "Required field: ApplicationId, is not set");
    return ListDataSetImportHistoryOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataset-import-tasks");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDataSetImportHistoryOutcome(result.GetResultWithOwnership())
                            : ListDataSetImportHistoryOutcome(std::move(result.GetError()));
}

ListDataSetsOutcome MainframeModernizationClient::ListDataSets(const ListDataSetsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataSets", "Required field: ApplicationId, is not set");
    return ListDataSetsOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasets");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDataSetsOutcome(result.GetResultWithOwnership()) : ListDataSetsOutcome(std::move(result.GetError()));
}

ListDeploymentsOutcome MainframeModernizationClient::ListDeployments(const ListDeploymentsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDeployments", "Required field: ApplicationId, is not set");
    return ListDeploymentsOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDeploymentsOutcome(result.GetResultWithOwnership())
                            : ListDeploymentsOutcome(std::move(result.GetError()));
}

ListEngineVersionsOutcome MainframeModernizationClient::ListEngineVersions(const ListEngineVersionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/engine-versions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListEngineVersionsOutcome(result.GetResultWithOwnership())
                            : ListEngineVersionsOutcome(std::move(result.GetError()));
}

ListEnvironmentsOutcome MainframeModernizationClient::ListEnvironments(const ListEnvironmentsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListEnvironmentsOutcome(result.GetResultWithOwnership())
                            : ListEnvironmentsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome MainframeModernizationClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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

StartApplicationOutcome MainframeModernizationClient::StartApplication(const StartApplicationRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartApplication", "Required field: ApplicationId, is not set");
    return StartApplicationOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
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

StartBatchJobOutcome MainframeModernizationClient::StartBatchJob(const StartBatchJobRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartBatchJob", "Required field: ApplicationId, is not set");
    return StartBatchJobOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/batch-job");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartBatchJobOutcome(result.GetResultWithOwnership()) : StartBatchJobOutcome(std::move(result.GetError()));
}

StopApplicationOutcome MainframeModernizationClient::StopApplication(const StopApplicationRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopApplication", "Required field: ApplicationId, is not set");
    return StopApplicationOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
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

TagResourceOutcome MainframeModernizationClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome MainframeModernizationClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateApplicationOutcome MainframeModernizationClient::UpdateApplication(const UpdateApplicationRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateApplication", "Required field: ApplicationId, is not set");
    return UpdateApplicationOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
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

UpdateEnvironmentOutcome MainframeModernizationClient::UpdateEnvironment(const UpdateEnvironmentRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEnvironment", "Required field: EnvironmentId, is not set");
    return UpdateEnvironmentOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(
        MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateEnvironmentOutcome(result.GetResultWithOwnership())
                            : UpdateEnvironmentOutcome(std::move(result.GetError()));
}
