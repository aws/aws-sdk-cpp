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
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorClient.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorEndpointProvider.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorErrorMarshaller.h>
#include <aws/iotdeviceadvisor/model/CreateSuiteDefinitionRequest.h>
#include <aws/iotdeviceadvisor/model/DeleteSuiteDefinitionRequest.h>
#include <aws/iotdeviceadvisor/model/GetEndpointRequest.h>
#include <aws/iotdeviceadvisor/model/GetSuiteDefinitionRequest.h>
#include <aws/iotdeviceadvisor/model/GetSuiteRunReportRequest.h>
#include <aws/iotdeviceadvisor/model/GetSuiteRunRequest.h>
#include <aws/iotdeviceadvisor/model/ListSuiteDefinitionsRequest.h>
#include <aws/iotdeviceadvisor/model/ListSuiteRunsRequest.h>
#include <aws/iotdeviceadvisor/model/ListTagsForResourceRequest.h>
#include <aws/iotdeviceadvisor/model/StartSuiteRunRequest.h>
#include <aws/iotdeviceadvisor/model/StopSuiteRunRequest.h>
#include <aws/iotdeviceadvisor/model/TagResourceRequest.h>
#include <aws/iotdeviceadvisor/model/UntagResourceRequest.h>
#include <aws/iotdeviceadvisor/model/UpdateSuiteDefinitionRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoTDeviceAdvisor;
using namespace Aws::IoTDeviceAdvisor::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace IoTDeviceAdvisor {
const char SERVICE_NAME[] = "iotdeviceadvisor";
const char ALLOCATION_TAG[] = "IoTDeviceAdvisorClient";
}  // namespace IoTDeviceAdvisor
}  // namespace Aws
const char* IoTDeviceAdvisorClient::GetServiceName() { return SERVICE_NAME; }
const char* IoTDeviceAdvisorClient::GetAllocationTag() { return ALLOCATION_TAG; }

IoTDeviceAdvisorClient::IoTDeviceAdvisorClient(const IoTDeviceAdvisor::IoTDeviceAdvisorClientConfiguration& clientConfiguration,
                                               std::shared_ptr<IoTDeviceAdvisorEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTDeviceAdvisorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<IoTDeviceAdvisorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTDeviceAdvisorClient::IoTDeviceAdvisorClient(const AWSCredentials& credentials,
                                               std::shared_ptr<IoTDeviceAdvisorEndpointProviderBase> endpointProvider,
                                               const IoTDeviceAdvisor::IoTDeviceAdvisorClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTDeviceAdvisorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<IoTDeviceAdvisorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTDeviceAdvisorClient::IoTDeviceAdvisorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<IoTDeviceAdvisorEndpointProviderBase> endpointProvider,
                                               const IoTDeviceAdvisor::IoTDeviceAdvisorClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTDeviceAdvisorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<IoTDeviceAdvisorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
IoTDeviceAdvisorClient::IoTDeviceAdvisorClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTDeviceAdvisorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IoTDeviceAdvisorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTDeviceAdvisorClient::IoTDeviceAdvisorClient(const AWSCredentials& credentials,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTDeviceAdvisorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IoTDeviceAdvisorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTDeviceAdvisorClient::IoTDeviceAdvisorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTDeviceAdvisorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IoTDeviceAdvisorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
IoTDeviceAdvisorClient::~IoTDeviceAdvisorClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<IoTDeviceAdvisorEndpointProviderBase>& IoTDeviceAdvisorClient::accessEndpointProvider() { return m_endpointProvider; }

void IoTDeviceAdvisorClient::init(const IoTDeviceAdvisor::IoTDeviceAdvisorClientConfiguration& config) {
  AWSClient::SetServiceClientName("IotDeviceAdvisor");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "iotdeviceadvisor");
}

void IoTDeviceAdvisorClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
IoTDeviceAdvisorClient::InvokeOperationOutcome IoTDeviceAdvisorClient::InvokeServiceOperation(
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

CreateSuiteDefinitionOutcome IoTDeviceAdvisorClient::CreateSuiteDefinition(const CreateSuiteDefinitionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/suiteDefinitions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSuiteDefinitionOutcome(result.GetResultWithOwnership())
                            : CreateSuiteDefinitionOutcome(std::move(result.GetError()));
}

DeleteSuiteDefinitionOutcome IoTDeviceAdvisorClient::DeleteSuiteDefinition(const DeleteSuiteDefinitionRequest& request) const {
  if (!request.SuiteDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSuiteDefinition", "Required field: SuiteDefinitionId, is not set");
    return DeleteSuiteDefinitionOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(
        IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SuiteDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/suiteDefinitions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSuiteDefinitionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteSuiteDefinitionOutcome(result.GetResultWithOwnership())
                            : DeleteSuiteDefinitionOutcome(std::move(result.GetError()));
}

GetEndpointOutcome IoTDeviceAdvisorClient::GetEndpoint(const GetEndpointRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/endpoint");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetEndpointOutcome(result.GetResultWithOwnership()) : GetEndpointOutcome(std::move(result.GetError()));
}

GetSuiteDefinitionOutcome IoTDeviceAdvisorClient::GetSuiteDefinition(const GetSuiteDefinitionRequest& request) const {
  if (!request.SuiteDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSuiteDefinition", "Required field: SuiteDefinitionId, is not set");
    return GetSuiteDefinitionOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(
        IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SuiteDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/suiteDefinitions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSuiteDefinitionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSuiteDefinitionOutcome(result.GetResultWithOwnership())
                            : GetSuiteDefinitionOutcome(std::move(result.GetError()));
}

GetSuiteRunOutcome IoTDeviceAdvisorClient::GetSuiteRun(const GetSuiteRunRequest& request) const {
  if (!request.SuiteDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSuiteRun", "Required field: SuiteDefinitionId, is not set");
    return GetSuiteRunOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [SuiteDefinitionId]", false));
  }
  if (!request.SuiteRunIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSuiteRun", "Required field: SuiteRunId, is not set");
    return GetSuiteRunOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [SuiteRunId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/suiteDefinitions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSuiteDefinitionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/suiteRuns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSuiteRunId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSuiteRunOutcome(result.GetResultWithOwnership()) : GetSuiteRunOutcome(std::move(result.GetError()));
}

GetSuiteRunReportOutcome IoTDeviceAdvisorClient::GetSuiteRunReport(const GetSuiteRunReportRequest& request) const {
  if (!request.SuiteDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSuiteRunReport", "Required field: SuiteDefinitionId, is not set");
    return GetSuiteRunReportOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(
        IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SuiteDefinitionId]", false));
  }
  if (!request.SuiteRunIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSuiteRunReport", "Required field: SuiteRunId, is not set");
    return GetSuiteRunReportOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(
        IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SuiteRunId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/suiteDefinitions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSuiteDefinitionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/suiteRuns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSuiteRunId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/report");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSuiteRunReportOutcome(result.GetResultWithOwnership())
                            : GetSuiteRunReportOutcome(std::move(result.GetError()));
}

ListSuiteDefinitionsOutcome IoTDeviceAdvisorClient::ListSuiteDefinitions(const ListSuiteDefinitionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/suiteDefinitions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSuiteDefinitionsOutcome(result.GetResultWithOwnership())
                            : ListSuiteDefinitionsOutcome(std::move(result.GetError()));
}

ListSuiteRunsOutcome IoTDeviceAdvisorClient::ListSuiteRuns(const ListSuiteRunsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/suiteRuns");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSuiteRunsOutcome(result.GetResultWithOwnership()) : ListSuiteRunsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome IoTDeviceAdvisorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(
        IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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

StartSuiteRunOutcome IoTDeviceAdvisorClient::StartSuiteRun(const StartSuiteRunRequest& request) const {
  if (!request.SuiteDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartSuiteRun", "Required field: SuiteDefinitionId, is not set");
    return StartSuiteRunOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(
        IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SuiteDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/suiteDefinitions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSuiteDefinitionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/suiteRuns");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartSuiteRunOutcome(result.GetResultWithOwnership()) : StartSuiteRunOutcome(std::move(result.GetError()));
}

StopSuiteRunOutcome IoTDeviceAdvisorClient::StopSuiteRun(const StopSuiteRunRequest& request) const {
  if (!request.SuiteDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopSuiteRun", "Required field: SuiteDefinitionId, is not set");
    return StopSuiteRunOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [SuiteDefinitionId]", false));
  }
  if (!request.SuiteRunIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopSuiteRun", "Required field: SuiteRunId, is not set");
    return StopSuiteRunOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [SuiteRunId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/suiteDefinitions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSuiteDefinitionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/suiteRuns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSuiteRunId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopSuiteRunOutcome(result.GetResultWithOwnership()) : StopSuiteRunOutcome(std::move(result.GetError()));
}

TagResourceOutcome IoTDeviceAdvisorClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

UntagResourceOutcome IoTDeviceAdvisorClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(
        IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(
        IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateSuiteDefinitionOutcome IoTDeviceAdvisorClient::UpdateSuiteDefinition(const UpdateSuiteDefinitionRequest& request) const {
  if (!request.SuiteDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSuiteDefinition", "Required field: SuiteDefinitionId, is not set");
    return UpdateSuiteDefinitionOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(
        IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SuiteDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/suiteDefinitions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSuiteDefinitionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateSuiteDefinitionOutcome(result.GetResultWithOwnership())
                            : UpdateSuiteDefinitionOutcome(std::move(result.GetError()));
}
