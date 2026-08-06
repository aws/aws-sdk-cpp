/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/AgentRegistryControlClient.h>
#include <aws/agent-registry-control/AgentRegistryControlEndpointProvider.h>
#include <aws/agent-registry-control/AgentRegistryControlErrorMarshaller.h>
#include <aws/agent-registry-control/model/CreateRegistryRecordRequest.h>
#include <aws/agent-registry-control/model/CreateRegistryRequest.h>
#include <aws/agent-registry-control/model/DeleteRegistryRecordRequest.h>
#include <aws/agent-registry-control/model/DeleteRegistryRequest.h>
#include <aws/agent-registry-control/model/GetRegistryRecordRequest.h>
#include <aws/agent-registry-control/model/GetRegistryRequest.h>
#include <aws/agent-registry-control/model/ListRegistriesRequest.h>
#include <aws/agent-registry-control/model/ListRegistryRecordsRequest.h>
#include <aws/agent-registry-control/model/ListTagsForResourceRequest.h>
#include <aws/agent-registry-control/model/SubmitRegistryRecordForApprovalRequest.h>
#include <aws/agent-registry-control/model/TagResourceRequest.h>
#include <aws/agent-registry-control/model/UntagResourceRequest.h>
#include <aws/agent-registry-control/model/UpdateRegistryRecordRequest.h>
#include <aws/agent-registry-control/model/UpdateRegistryRecordStatusRequest.h>
#include <aws/agent-registry-control/model/UpdateRegistryRequest.h>
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
using namespace Aws::AgentRegistryControl;
using namespace Aws::AgentRegistryControl::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace AgentRegistryControl {
const char SERVICE_NAME[] = "agent-registry";
const char ALLOCATION_TAG[] = "AgentRegistryControlClient";
}  // namespace AgentRegistryControl
}  // namespace Aws
const char* AgentRegistryControlClient::GetServiceName() { return SERVICE_NAME; }
const char* AgentRegistryControlClient::GetAllocationTag() { return ALLOCATION_TAG; }

AgentRegistryControlClient::AgentRegistryControlClient(
    const AgentRegistryControl::AgentRegistryControlClientConfiguration& clientConfiguration,
    std::shared_ptr<AgentRegistryControlEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AgentRegistryControlErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<AgentRegistryControlEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AgentRegistryControlClient::AgentRegistryControlClient(
    const AWSCredentials& credentials, std::shared_ptr<AgentRegistryControlEndpointProviderBase> endpointProvider,
    const AgentRegistryControl::AgentRegistryControlClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AgentRegistryControlErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<AgentRegistryControlEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AgentRegistryControlClient::AgentRegistryControlClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<AgentRegistryControlEndpointProviderBase> endpointProvider,
    const AgentRegistryControl::AgentRegistryControlClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AgentRegistryControlErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<AgentRegistryControlEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
AgentRegistryControlClient::AgentRegistryControlClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AgentRegistryControlErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AgentRegistryControlEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AgentRegistryControlClient::AgentRegistryControlClient(const AWSCredentials& credentials,
                                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AgentRegistryControlErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AgentRegistryControlEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AgentRegistryControlClient::AgentRegistryControlClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AgentRegistryControlErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AgentRegistryControlEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
AgentRegistryControlClient::~AgentRegistryControlClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<AgentRegistryControlEndpointProviderBase>& AgentRegistryControlClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void AgentRegistryControlClient::init(const AgentRegistryControl::AgentRegistryControlClientConfiguration& config) {
  AWSClient::SetServiceClientName("Agent Registry Control");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "agent-registry");
}

void AgentRegistryControlClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
AgentRegistryControlClient::InvokeOperationOutcome AgentRegistryControlClient::InvokeServiceOperation(
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

CreateRegistryOutcome AgentRegistryControlClient::CreateRegistry(const CreateRegistryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/registries");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRegistryOutcome(result.GetResultWithOwnership()) : CreateRegistryOutcome(std::move(result.GetError()));
}

CreateRegistryRecordOutcome AgentRegistryControlClient::CreateRegistryRecord(const CreateRegistryRecordRequest& request) const {
  if (!request.RegistryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRegistryRecord", "Required field: RegistryId, is not set");
    return CreateRegistryRecordOutcome(Aws::Client::AWSError<AgentRegistryControlErrors>(
        AgentRegistryControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/registries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/records");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRegistryRecordOutcome(result.GetResultWithOwnership())
                            : CreateRegistryRecordOutcome(std::move(result.GetError()));
}

DeleteRegistryOutcome AgentRegistryControlClient::DeleteRegistry(const DeleteRegistryRequest& request) const {
  if (!request.RegistryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRegistry", "Required field: RegistryId, is not set");
    return DeleteRegistryOutcome(Aws::Client::AWSError<AgentRegistryControlErrors>(
        AgentRegistryControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/registries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteRegistryOutcome(result.GetResultWithOwnership()) : DeleteRegistryOutcome(std::move(result.GetError()));
}

DeleteRegistryRecordOutcome AgentRegistryControlClient::DeleteRegistryRecord(const DeleteRegistryRecordRequest& request) const {
  if (!request.RegistryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRegistryRecord", "Required field: RegistryId, is not set");
    return DeleteRegistryRecordOutcome(Aws::Client::AWSError<AgentRegistryControlErrors>(
        AgentRegistryControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryId]", false));
  }
  if (!request.RecordIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRegistryRecord", "Required field: RecordId, is not set");
    return DeleteRegistryRecordOutcome(Aws::Client::AWSError<AgentRegistryControlErrors>(
        AgentRegistryControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecordId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/registries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/records/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecordId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteRegistryRecordOutcome(result.GetResultWithOwnership())
                            : DeleteRegistryRecordOutcome(std::move(result.GetError()));
}

GetRegistryOutcome AgentRegistryControlClient::GetRegistry(const GetRegistryRequest& request) const {
  if (!request.RegistryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRegistry", "Required field: RegistryId, is not set");
    return GetRegistryOutcome(Aws::Client::AWSError<AgentRegistryControlErrors>(
        AgentRegistryControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/registries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRegistryOutcome(result.GetResultWithOwnership()) : GetRegistryOutcome(std::move(result.GetError()));
}

GetRegistryRecordOutcome AgentRegistryControlClient::GetRegistryRecord(const GetRegistryRecordRequest& request) const {
  if (!request.RegistryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRegistryRecord", "Required field: RegistryId, is not set");
    return GetRegistryRecordOutcome(Aws::Client::AWSError<AgentRegistryControlErrors>(
        AgentRegistryControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryId]", false));
  }
  if (!request.RecordIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRegistryRecord", "Required field: RecordId, is not set");
    return GetRegistryRecordOutcome(Aws::Client::AWSError<AgentRegistryControlErrors>(
        AgentRegistryControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecordId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/registries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/records/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecordId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRegistryRecordOutcome(result.GetResultWithOwnership())
                            : GetRegistryRecordOutcome(std::move(result.GetError()));
}

ListRegistriesOutcome AgentRegistryControlClient::ListRegistries(const ListRegistriesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/registries-list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRegistriesOutcome(result.GetResultWithOwnership()) : ListRegistriesOutcome(std::move(result.GetError()));
}

ListRegistryRecordsOutcome AgentRegistryControlClient::ListRegistryRecords(const ListRegistryRecordsRequest& request) const {
  if (!request.RegistryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRegistryRecords", "Required field: RegistryId, is not set");
    return ListRegistryRecordsOutcome(Aws::Client::AWSError<AgentRegistryControlErrors>(
        AgentRegistryControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/registries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/records-list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRegistryRecordsOutcome(result.GetResultWithOwnership())
                            : ListRegistryRecordsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome AgentRegistryControlClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AgentRegistryControlErrors>(
        AgentRegistryControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().SetRfc3986Encoded(true);
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

SubmitRegistryRecordForApprovalOutcome AgentRegistryControlClient::SubmitRegistryRecordForApproval(
    const SubmitRegistryRecordForApprovalRequest& request) const {
  if (!request.RegistryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SubmitRegistryRecordForApproval", "Required field: RegistryId, is not set");
    return SubmitRegistryRecordForApprovalOutcome(Aws::Client::AWSError<AgentRegistryControlErrors>(
        AgentRegistryControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryId]", false));
  }
  if (!request.RecordIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SubmitRegistryRecordForApproval", "Required field: RecordId, is not set");
    return SubmitRegistryRecordForApprovalOutcome(Aws::Client::AWSError<AgentRegistryControlErrors>(
        AgentRegistryControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecordId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/registries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/records/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecordId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/submit-for-approval");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SubmitRegistryRecordForApprovalOutcome(result.GetResultWithOwnership())
                            : SubmitRegistryRecordForApprovalOutcome(std::move(result.GetError()));
}

TagResourceOutcome AgentRegistryControlClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AgentRegistryControlErrors>(
        AgentRegistryControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().SetRfc3986Encoded(true);
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome AgentRegistryControlClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AgentRegistryControlErrors>(
        AgentRegistryControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AgentRegistryControlErrors>(
        AgentRegistryControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().SetRfc3986Encoded(true);
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateRegistryOutcome AgentRegistryControlClient::UpdateRegistry(const UpdateRegistryRequest& request) const {
  if (!request.RegistryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRegistry", "Required field: RegistryId, is not set");
    return UpdateRegistryOutcome(Aws::Client::AWSError<AgentRegistryControlErrors>(
        AgentRegistryControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/registries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateRegistryOutcome(result.GetResultWithOwnership()) : UpdateRegistryOutcome(std::move(result.GetError()));
}

UpdateRegistryRecordOutcome AgentRegistryControlClient::UpdateRegistryRecord(const UpdateRegistryRecordRequest& request) const {
  if (!request.RegistryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRegistryRecord", "Required field: RegistryId, is not set");
    return UpdateRegistryRecordOutcome(Aws::Client::AWSError<AgentRegistryControlErrors>(
        AgentRegistryControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryId]", false));
  }
  if (!request.RecordIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRegistryRecord", "Required field: RecordId, is not set");
    return UpdateRegistryRecordOutcome(Aws::Client::AWSError<AgentRegistryControlErrors>(
        AgentRegistryControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecordId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/registries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/records/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecordId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateRegistryRecordOutcome(result.GetResultWithOwnership())
                            : UpdateRegistryRecordOutcome(std::move(result.GetError()));
}

UpdateRegistryRecordStatusOutcome AgentRegistryControlClient::UpdateRegistryRecordStatus(
    const UpdateRegistryRecordStatusRequest& request) const {
  if (!request.RegistryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRegistryRecordStatus", "Required field: RegistryId, is not set");
    return UpdateRegistryRecordStatusOutcome(Aws::Client::AWSError<AgentRegistryControlErrors>(
        AgentRegistryControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryId]", false));
  }
  if (!request.RecordIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRegistryRecordStatus", "Required field: RecordId, is not set");
    return UpdateRegistryRecordStatusOutcome(Aws::Client::AWSError<AgentRegistryControlErrors>(
        AgentRegistryControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecordId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/registries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/records/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecordId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateRegistryRecordStatusOutcome(result.GetResultWithOwnership())
                            : UpdateRegistryRecordStatusOutcome(std::move(result.GetError()));
}
