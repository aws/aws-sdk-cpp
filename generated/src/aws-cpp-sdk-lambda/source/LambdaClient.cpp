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
#include <aws/core/utils/event/EventStream.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/lambda/LambdaClient.h>
#include <aws/lambda/LambdaEndpointProvider.h>
#include <aws/lambda/LambdaErrorMarshaller.h>
#include <aws/lambda/model/AddLayerVersionPermissionRequest.h>
#include <aws/lambda/model/AddPermissionRequest.h>
#include <aws/lambda/model/CheckpointDurableExecutionRequest.h>
#include <aws/lambda/model/CreateAliasRequest.h>
#include <aws/lambda/model/CreateCapacityProviderRequest.h>
#include <aws/lambda/model/CreateCodeSigningConfigRequest.h>
#include <aws/lambda/model/CreateEventSourceMappingRequest.h>
#include <aws/lambda/model/CreateFunctionRequest.h>
#include <aws/lambda/model/CreateFunctionUrlConfigRequest.h>
#include <aws/lambda/model/DeleteAliasRequest.h>
#include <aws/lambda/model/DeleteCapacityProviderRequest.h>
#include <aws/lambda/model/DeleteCodeSigningConfigRequest.h>
#include <aws/lambda/model/DeleteEventSourceMappingRequest.h>
#include <aws/lambda/model/DeleteFunctionCodeSigningConfigRequest.h>
#include <aws/lambda/model/DeleteFunctionConcurrencyRequest.h>
#include <aws/lambda/model/DeleteFunctionEventInvokeConfigRequest.h>
#include <aws/lambda/model/DeleteFunctionRequest.h>
#include <aws/lambda/model/DeleteFunctionUrlConfigRequest.h>
#include <aws/lambda/model/DeleteLayerVersionRequest.h>
#include <aws/lambda/model/DeleteProvisionedConcurrencyConfigRequest.h>
#include <aws/lambda/model/GetAccountSettingsRequest.h>
#include <aws/lambda/model/GetAliasRequest.h>
#include <aws/lambda/model/GetCapacityProviderRequest.h>
#include <aws/lambda/model/GetCodeSigningConfigRequest.h>
#include <aws/lambda/model/GetDurableExecutionHistoryRequest.h>
#include <aws/lambda/model/GetDurableExecutionRequest.h>
#include <aws/lambda/model/GetDurableExecutionStateRequest.h>
#include <aws/lambda/model/GetEventSourceMappingRequest.h>
#include <aws/lambda/model/GetFunctionCodeSigningConfigRequest.h>
#include <aws/lambda/model/GetFunctionConcurrencyRequest.h>
#include <aws/lambda/model/GetFunctionConfigurationRequest.h>
#include <aws/lambda/model/GetFunctionEventInvokeConfigRequest.h>
#include <aws/lambda/model/GetFunctionRecursionConfigRequest.h>
#include <aws/lambda/model/GetFunctionRequest.h>
#include <aws/lambda/model/GetFunctionScalingConfigRequest.h>
#include <aws/lambda/model/GetFunctionUrlConfigRequest.h>
#include <aws/lambda/model/GetLayerVersionByArnRequest.h>
#include <aws/lambda/model/GetLayerVersionPolicyRequest.h>
#include <aws/lambda/model/GetLayerVersionRequest.h>
#include <aws/lambda/model/GetPolicyRequest.h>
#include <aws/lambda/model/GetProvisionedConcurrencyConfigRequest.h>
#include <aws/lambda/model/GetRuntimeManagementConfigRequest.h>
#include <aws/lambda/model/InvokeRequest.h>
#include <aws/lambda/model/InvokeWithResponseStreamRequest.h>
#include <aws/lambda/model/ListAliasesRequest.h>
#include <aws/lambda/model/ListCapacityProvidersRequest.h>
#include <aws/lambda/model/ListCodeSigningConfigsRequest.h>
#include <aws/lambda/model/ListDurableExecutionsByFunctionRequest.h>
#include <aws/lambda/model/ListEventSourceMappingsRequest.h>
#include <aws/lambda/model/ListFunctionEventInvokeConfigsRequest.h>
#include <aws/lambda/model/ListFunctionUrlConfigsRequest.h>
#include <aws/lambda/model/ListFunctionVersionsByCapacityProviderRequest.h>
#include <aws/lambda/model/ListFunctionsByCodeSigningConfigRequest.h>
#include <aws/lambda/model/ListFunctionsRequest.h>
#include <aws/lambda/model/ListLayerVersionsRequest.h>
#include <aws/lambda/model/ListLayersRequest.h>
#include <aws/lambda/model/ListProvisionedConcurrencyConfigsRequest.h>
#include <aws/lambda/model/ListTagsRequest.h>
#include <aws/lambda/model/ListVersionsByFunctionRequest.h>
#include <aws/lambda/model/PublishLayerVersionRequest.h>
#include <aws/lambda/model/PublishVersionRequest.h>
#include <aws/lambda/model/PutFunctionCodeSigningConfigRequest.h>
#include <aws/lambda/model/PutFunctionConcurrencyRequest.h>
#include <aws/lambda/model/PutFunctionEventInvokeConfigRequest.h>
#include <aws/lambda/model/PutFunctionRecursionConfigRequest.h>
#include <aws/lambda/model/PutFunctionScalingConfigRequest.h>
#include <aws/lambda/model/PutProvisionedConcurrencyConfigRequest.h>
#include <aws/lambda/model/PutRuntimeManagementConfigRequest.h>
#include <aws/lambda/model/RemoveLayerVersionPermissionRequest.h>
#include <aws/lambda/model/RemovePermissionRequest.h>
#include <aws/lambda/model/SendDurableExecutionCallbackFailureRequest.h>
#include <aws/lambda/model/SendDurableExecutionCallbackHeartbeatRequest.h>
#include <aws/lambda/model/SendDurableExecutionCallbackSuccessRequest.h>
#include <aws/lambda/model/StopDurableExecutionRequest.h>
#include <aws/lambda/model/TagResourceRequest.h>
#include <aws/lambda/model/UntagResourceRequest.h>
#include <aws/lambda/model/UpdateAliasRequest.h>
#include <aws/lambda/model/UpdateCapacityProviderRequest.h>
#include <aws/lambda/model/UpdateCodeSigningConfigRequest.h>
#include <aws/lambda/model/UpdateEventSourceMappingRequest.h>
#include <aws/lambda/model/UpdateFunctionCodeRequest.h>
#include <aws/lambda/model/UpdateFunctionConfigurationRequest.h>
#include <aws/lambda/model/UpdateFunctionEventInvokeConfigRequest.h>
#include <aws/lambda/model/UpdateFunctionUrlConfigRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Lambda;
using namespace Aws::Lambda::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Lambda {
const char SERVICE_NAME[] = "lambda";
const char ALLOCATION_TAG[] = "LambdaClient";
}  // namespace Lambda
}  // namespace Aws
const char* LambdaClient::GetServiceName() { return SERVICE_NAME; }
const char* LambdaClient::GetAllocationTag() { return ALLOCATION_TAG; }

LambdaClient::LambdaClient(const Lambda::LambdaClientConfiguration& clientConfiguration,
                           std::shared_ptr<LambdaEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LambdaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LambdaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LambdaClient::LambdaClient(const AWSCredentials& credentials, std::shared_ptr<LambdaEndpointProviderBase> endpointProvider,
                           const Lambda::LambdaClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LambdaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LambdaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LambdaClient::LambdaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<LambdaEndpointProviderBase> endpointProvider,
                           const Lambda::LambdaClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LambdaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LambdaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
LambdaClient::LambdaClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LambdaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LambdaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LambdaClient::LambdaClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LambdaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LambdaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LambdaClient::LambdaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LambdaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LambdaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
LambdaClient::~LambdaClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<LambdaEndpointProviderBase>& LambdaClient::accessEndpointProvider() { return m_endpointProvider; }

void LambdaClient::init(const Lambda::LambdaClientConfiguration& config) {
  AWSClient::SetServiceClientName("Lambda");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "lambda");
}

void LambdaClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
LambdaClient::InvokeOperationOutcome LambdaClient::InvokeServiceOperation(
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

AddLayerVersionPermissionOutcome LambdaClient::AddLayerVersionPermission(const AddLayerVersionPermissionRequest& request) const {
  if (!request.LayerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddLayerVersionPermission", "Required field: LayerName, is not set");
    return AddLayerVersionPermissionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [LayerName]", false));
  }
  if (!request.VersionNumberHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddLayerVersionPermission", "Required field: VersionNumber, is not set");
    return AddLayerVersionPermissionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [VersionNumber]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2018-10-31/layers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLayerName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionNumber());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  return AddLayerVersionPermissionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AddPermissionOutcome LambdaClient::AddPermission(const AddPermissionRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddPermission", "Required field: FunctionName, is not set");
    return AddPermissionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-03-31/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  return AddPermissionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CheckpointDurableExecutionOutcome LambdaClient::CheckpointDurableExecution(const CheckpointDurableExecutionRequest& request) const {
  if (!request.DurableExecutionArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CheckpointDurableExecution", "Required field: DurableExecutionArn, is not set");
    return CheckpointDurableExecutionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [DurableExecutionArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-12-01/durable-executions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDurableExecutionArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/checkpoint");
  };

  return CheckpointDurableExecutionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAliasOutcome LambdaClient::CreateAlias(const CreateAliasRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAlias", "Required field: FunctionName, is not set");
    return CreateAliasOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-03-31/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aliases");
  };

  return CreateAliasOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCapacityProviderOutcome LambdaClient::CreateCapacityProvider(const CreateCapacityProviderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-11-30/capacity-providers");
  };

  return CreateCapacityProviderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCodeSigningConfigOutcome LambdaClient::CreateCodeSigningConfig(const CreateCodeSigningConfigRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-04-22/code-signing-configs");
  };

  return CreateCodeSigningConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEventSourceMappingOutcome LambdaClient::CreateEventSourceMapping(const CreateEventSourceMappingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-03-31/event-source-mappings");
  };

  return CreateEventSourceMappingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFunctionOutcome LambdaClient::CreateFunction(const CreateFunctionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-03-31/functions");
  };

  return CreateFunctionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFunctionUrlConfigOutcome LambdaClient::CreateFunctionUrlConfig(const CreateFunctionUrlConfigRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateFunctionUrlConfig", "Required field: FunctionName, is not set");
    return CreateFunctionUrlConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-10-31/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/url");
  };

  return CreateFunctionUrlConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAliasOutcome LambdaClient::DeleteAlias(const DeleteAliasRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAlias", "Required field: FunctionName, is not set");
    return DeleteAliasOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [FunctionName]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAlias", "Required field: Name, is not set");
    return DeleteAliasOutcome(
        Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-03-31/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteAliasOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteCapacityProviderOutcome LambdaClient::DeleteCapacityProvider(const DeleteCapacityProviderRequest& request) const {
  if (!request.CapacityProviderNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCapacityProvider", "Required field: CapacityProviderName, is not set");
    return DeleteCapacityProviderOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [CapacityProviderName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-11-30/capacity-providers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCapacityProviderName());
  };

  return DeleteCapacityProviderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteCodeSigningConfigOutcome LambdaClient::DeleteCodeSigningConfig(const DeleteCodeSigningConfigRequest& request) const {
  if (!request.CodeSigningConfigArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCodeSigningConfig", "Required field: CodeSigningConfigArn, is not set");
    return DeleteCodeSigningConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [CodeSigningConfigArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-04-22/code-signing-configs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCodeSigningConfigArn());
  };

  return DeleteCodeSigningConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteEventSourceMappingOutcome LambdaClient::DeleteEventSourceMapping(const DeleteEventSourceMappingRequest& request) const {
  if (!request.UUIDHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEventSourceMapping", "Required field: UUID, is not set");
    return DeleteEventSourceMappingOutcome(
        Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UUID]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-03-31/event-source-mappings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUUID());
  };

  return DeleteEventSourceMappingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteFunctionOutcome LambdaClient::DeleteFunction(const DeleteFunctionRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFunction", "Required field: FunctionName, is not set");
    return DeleteFunctionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-03-31/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
  };

  return DeleteFunctionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteFunctionCodeSigningConfigOutcome LambdaClient::DeleteFunctionCodeSigningConfig(
    const DeleteFunctionCodeSigningConfigRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFunctionCodeSigningConfig", "Required field: FunctionName, is not set");
    return DeleteFunctionCodeSigningConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-06-30/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/code-signing-config");
  };

  return DeleteFunctionCodeSigningConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteFunctionConcurrencyOutcome LambdaClient::DeleteFunctionConcurrency(const DeleteFunctionConcurrencyRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFunctionConcurrency", "Required field: FunctionName, is not set");
    return DeleteFunctionConcurrencyOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-10-31/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/concurrency");
  };

  return DeleteFunctionConcurrencyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteFunctionEventInvokeConfigOutcome LambdaClient::DeleteFunctionEventInvokeConfig(
    const DeleteFunctionEventInvokeConfigRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFunctionEventInvokeConfig", "Required field: FunctionName, is not set");
    return DeleteFunctionEventInvokeConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2019-09-25/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-invoke-config");
  };

  return DeleteFunctionEventInvokeConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteFunctionUrlConfigOutcome LambdaClient::DeleteFunctionUrlConfig(const DeleteFunctionUrlConfigRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFunctionUrlConfig", "Required field: FunctionName, is not set");
    return DeleteFunctionUrlConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-10-31/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/url");
  };

  return DeleteFunctionUrlConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteLayerVersionOutcome LambdaClient::DeleteLayerVersion(const DeleteLayerVersionRequest& request) const {
  if (!request.LayerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteLayerVersion", "Required field: LayerName, is not set");
    return DeleteLayerVersionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [LayerName]", false));
  }
  if (!request.VersionNumberHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteLayerVersion", "Required field: VersionNumber, is not set");
    return DeleteLayerVersionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [VersionNumber]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2018-10-31/layers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLayerName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionNumber());
  };

  return DeleteLayerVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteProvisionedConcurrencyConfigOutcome LambdaClient::DeleteProvisionedConcurrencyConfig(
    const DeleteProvisionedConcurrencyConfigRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProvisionedConcurrencyConfig", "Required field: FunctionName, is not set");
    return DeleteProvisionedConcurrencyConfigOutcome(Aws::Client::AWSError<LambdaErrors>(
        LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  if (!request.QualifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProvisionedConcurrencyConfig", "Required field: Qualifier, is not set");
    return DeleteProvisionedConcurrencyConfigOutcome(Aws::Client::AWSError<LambdaErrors>(
        LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Qualifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2019-09-30/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/provisioned-concurrency");
  };

  return DeleteProvisionedConcurrencyConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetAccountSettingsOutcome LambdaClient::GetAccountSettings(const GetAccountSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2016-08-19/account-settings");
  };

  return GetAccountSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAliasOutcome LambdaClient::GetAlias(const GetAliasRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAlias", "Required field: FunctionName, is not set");
    return GetAliasOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                               "Missing required field [FunctionName]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAlias", "Required field: Name, is not set");
    return GetAliasOutcome(
        Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-03-31/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return GetAliasOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCapacityProviderOutcome LambdaClient::GetCapacityProvider(const GetCapacityProviderRequest& request) const {
  if (!request.CapacityProviderNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCapacityProvider", "Required field: CapacityProviderName, is not set");
    return GetCapacityProviderOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [CapacityProviderName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-11-30/capacity-providers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCapacityProviderName());
  };

  return GetCapacityProviderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCodeSigningConfigOutcome LambdaClient::GetCodeSigningConfig(const GetCodeSigningConfigRequest& request) const {
  if (!request.CodeSigningConfigArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCodeSigningConfig", "Required field: CodeSigningConfigArn, is not set");
    return GetCodeSigningConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [CodeSigningConfigArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-04-22/code-signing-configs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCodeSigningConfigArn());
  };

  return GetCodeSigningConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDurableExecutionOutcome LambdaClient::GetDurableExecution(const GetDurableExecutionRequest& request) const {
  if (!request.DurableExecutionArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDurableExecution", "Required field: DurableExecutionArn, is not set");
    return GetDurableExecutionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DurableExecutionArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-12-01/durable-executions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDurableExecutionArn());
  };

  return GetDurableExecutionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDurableExecutionHistoryOutcome LambdaClient::GetDurableExecutionHistory(const GetDurableExecutionHistoryRequest& request) const {
  if (!request.DurableExecutionArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDurableExecutionHistory", "Required field: DurableExecutionArn, is not set");
    return GetDurableExecutionHistoryOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [DurableExecutionArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-12-01/durable-executions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDurableExecutionArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/history");
  };

  return GetDurableExecutionHistoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDurableExecutionStateOutcome LambdaClient::GetDurableExecutionState(const GetDurableExecutionStateRequest& request) const {
  if (!request.DurableExecutionArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDurableExecutionState", "Required field: DurableExecutionArn, is not set");
    return GetDurableExecutionStateOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DurableExecutionArn]", false));
  }
  if (!request.CheckpointTokenHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDurableExecutionState", "Required field: CheckpointToken, is not set");
    return GetDurableExecutionStateOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [CheckpointToken]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-12-01/durable-executions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDurableExecutionArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/state");
  };

  return GetDurableExecutionStateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEventSourceMappingOutcome LambdaClient::GetEventSourceMapping(const GetEventSourceMappingRequest& request) const {
  if (!request.UUIDHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEventSourceMapping", "Required field: UUID, is not set");
    return GetEventSourceMappingOutcome(
        Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UUID]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-03-31/event-source-mappings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUUID());
  };

  return GetEventSourceMappingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFunctionOutcome LambdaClient::GetFunction(const GetFunctionRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFunction", "Required field: FunctionName, is not set");
    return GetFunctionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-03-31/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
  };

  return GetFunctionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFunctionCodeSigningConfigOutcome LambdaClient::GetFunctionCodeSigningConfig(const GetFunctionCodeSigningConfigRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFunctionCodeSigningConfig", "Required field: FunctionName, is not set");
    return GetFunctionCodeSigningConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-06-30/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/code-signing-config");
  };

  return GetFunctionCodeSigningConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFunctionConcurrencyOutcome LambdaClient::GetFunctionConcurrency(const GetFunctionConcurrencyRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFunctionConcurrency", "Required field: FunctionName, is not set");
    return GetFunctionConcurrencyOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2019-09-30/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/concurrency");
  };

  return GetFunctionConcurrencyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFunctionConfigurationOutcome LambdaClient::GetFunctionConfiguration(const GetFunctionConfigurationRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFunctionConfiguration", "Required field: FunctionName, is not set");
    return GetFunctionConfigurationOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-03-31/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  };

  return GetFunctionConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFunctionEventInvokeConfigOutcome LambdaClient::GetFunctionEventInvokeConfig(const GetFunctionEventInvokeConfigRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFunctionEventInvokeConfig", "Required field: FunctionName, is not set");
    return GetFunctionEventInvokeConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2019-09-25/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-invoke-config");
  };

  return GetFunctionEventInvokeConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFunctionRecursionConfigOutcome LambdaClient::GetFunctionRecursionConfig(const GetFunctionRecursionConfigRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFunctionRecursionConfig", "Required field: FunctionName, is not set");
    return GetFunctionRecursionConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2024-08-31/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recursion-config");
  };

  return GetFunctionRecursionConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFunctionScalingConfigOutcome LambdaClient::GetFunctionScalingConfig(const GetFunctionScalingConfigRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFunctionScalingConfig", "Required field: FunctionName, is not set");
    return GetFunctionScalingConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [FunctionName]", false));
  }
  if (!request.QualifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFunctionScalingConfig", "Required field: Qualifier, is not set");
    return GetFunctionScalingConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Qualifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-11-30/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/function-scaling-config");
  };

  return GetFunctionScalingConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFunctionUrlConfigOutcome LambdaClient::GetFunctionUrlConfig(const GetFunctionUrlConfigRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFunctionUrlConfig", "Required field: FunctionName, is not set");
    return GetFunctionUrlConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-10-31/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/url");
  };

  return GetFunctionUrlConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetLayerVersionOutcome LambdaClient::GetLayerVersion(const GetLayerVersionRequest& request) const {
  if (!request.LayerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLayerVersion", "Required field: LayerName, is not set");
    return GetLayerVersionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [LayerName]", false));
  }
  if (!request.VersionNumberHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLayerVersion", "Required field: VersionNumber, is not set");
    return GetLayerVersionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [VersionNumber]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2018-10-31/layers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLayerName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionNumber());
  };

  return GetLayerVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetLayerVersionByArnOutcome LambdaClient::GetLayerVersionByArn(const GetLayerVersionByArnRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLayerVersionByArn", "Required field: Arn, is not set");
    return GetLayerVersionByArnOutcome(
        Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2018-10-31/layers");
    ss.str("?find=LayerVersion");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return GetLayerVersionByArnOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetLayerVersionPolicyOutcome LambdaClient::GetLayerVersionPolicy(const GetLayerVersionPolicyRequest& request) const {
  if (!request.LayerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLayerVersionPolicy", "Required field: LayerName, is not set");
    return GetLayerVersionPolicyOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [LayerName]", false));
  }
  if (!request.VersionNumberHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLayerVersionPolicy", "Required field: VersionNumber, is not set");
    return GetLayerVersionPolicyOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [VersionNumber]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2018-10-31/layers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLayerName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionNumber());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  return GetLayerVersionPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPolicyOutcome LambdaClient::GetPolicy(const GetPolicyRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPolicy", "Required field: FunctionName, is not set");
    return GetPolicyOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-03-31/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  return GetPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetProvisionedConcurrencyConfigOutcome LambdaClient::GetProvisionedConcurrencyConfig(
    const GetProvisionedConcurrencyConfigRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProvisionedConcurrencyConfig", "Required field: FunctionName, is not set");
    return GetProvisionedConcurrencyConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [FunctionName]", false));
  }
  if (!request.QualifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProvisionedConcurrencyConfig", "Required field: Qualifier, is not set");
    return GetProvisionedConcurrencyConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [Qualifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2019-09-30/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/provisioned-concurrency");
  };

  return GetProvisionedConcurrencyConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRuntimeManagementConfigOutcome LambdaClient::GetRuntimeManagementConfig(const GetRuntimeManagementConfigRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRuntimeManagementConfig", "Required field: FunctionName, is not set");
    return GetRuntimeManagementConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-07-20/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtime-management-config");
  };

  return GetRuntimeManagementConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

InvokeOutcome LambdaClient::Invoke(const InvokeRequest& request) const {
  AWS_OPERATION_GUARD(Invoke);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, Invoke, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("Invoke", "Required field: FunctionName, is not set");
    return InvokeOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                             "Missing required field [FunctionName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, Invoke, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, Invoke, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".Invoke",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InvokeOutcome>(
      [&]() -> InvokeOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, Invoke, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/2015-03-31/functions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/invocations");
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST);
        return result.IsSuccess() ? InvokeOutcome(InvokeResult(result.GetResultWithOwnership())) : InvokeOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

InvokeWithResponseStreamOutcome LambdaClient::InvokeWithResponseStream(InvokeWithResponseStreamRequest& request) const {
  AWS_OPERATION_GUARD(InvokeWithResponseStream);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InvokeWithResponseStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InvokeWithResponseStream", "Required field: FunctionName, is not set");
    return InvokeWithResponseStreamOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [FunctionName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, InvokeWithResponseStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InvokeWithResponseStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InvokeWithResponseStream",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InvokeWithResponseStreamOutcome>(
      [&]() -> InvokeWithResponseStreamOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InvokeWithResponseStream, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/2021-11-15/functions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/response-streaming-invocations");
        request.SetResponseStreamFactory([&] {
          request.GetEventStreamDecoder().Reset();
          return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder());
        });
        if (!request.GetHeadersReceivedEventHandler()) {
          request.SetHeadersReceivedEventHandler([&request](const Http::HttpRequest*, Http::HttpResponse* response) {
            AWS_CHECK_PTR("InvokeWithResponseStream", response);
            if (const auto initialResponseHandler = request.GetEventStreamHandler().GetInitialResponseCallbackEx()) {
              initialResponseHandler({response->GetHeaders()}, Utils::Event::InitialResponseType::ON_RESPONSE);
            }
          });
        }
        return InvokeWithResponseStreamOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAliasesOutcome LambdaClient::ListAliases(const ListAliasesRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAliases", "Required field: FunctionName, is not set");
    return ListAliasesOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-03-31/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aliases");
  };

  return ListAliasesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCapacityProvidersOutcome LambdaClient::ListCapacityProviders(const ListCapacityProvidersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-11-30/capacity-providers");
  };

  return ListCapacityProvidersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCodeSigningConfigsOutcome LambdaClient::ListCodeSigningConfigs(const ListCodeSigningConfigsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-04-22/code-signing-configs");
  };

  return ListCodeSigningConfigsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDurableExecutionsByFunctionOutcome LambdaClient::ListDurableExecutionsByFunction(
    const ListDurableExecutionsByFunctionRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDurableExecutionsByFunction", "Required field: FunctionName, is not set");
    return ListDurableExecutionsByFunctionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-12-01/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/durable-executions");
  };

  return ListDurableExecutionsByFunctionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListEventSourceMappingsOutcome LambdaClient::ListEventSourceMappings(const ListEventSourceMappingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-03-31/event-source-mappings");
  };

  return ListEventSourceMappingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListFunctionEventInvokeConfigsOutcome LambdaClient::ListFunctionEventInvokeConfigs(
    const ListFunctionEventInvokeConfigsRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFunctionEventInvokeConfigs", "Required field: FunctionName, is not set");
    return ListFunctionEventInvokeConfigsOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2019-09-25/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-invoke-config/list");
  };

  return ListFunctionEventInvokeConfigsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListFunctionUrlConfigsOutcome LambdaClient::ListFunctionUrlConfigs(const ListFunctionUrlConfigsRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFunctionUrlConfigs", "Required field: FunctionName, is not set");
    return ListFunctionUrlConfigsOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-10-31/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/urls");
  };

  return ListFunctionUrlConfigsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListFunctionVersionsByCapacityProviderOutcome LambdaClient::ListFunctionVersionsByCapacityProvider(
    const ListFunctionVersionsByCapacityProviderRequest& request) const {
  if (!request.CapacityProviderNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFunctionVersionsByCapacityProvider", "Required field: CapacityProviderName, is not set");
    return ListFunctionVersionsByCapacityProviderOutcome(Aws::Client::AWSError<LambdaErrors>(
        LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CapacityProviderName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-11-30/capacity-providers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCapacityProviderName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/function-versions");
  };

  return ListFunctionVersionsByCapacityProviderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListFunctionsOutcome LambdaClient::ListFunctions(const ListFunctionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-03-31/functions");
  };

  return ListFunctionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListFunctionsByCodeSigningConfigOutcome LambdaClient::ListFunctionsByCodeSigningConfig(
    const ListFunctionsByCodeSigningConfigRequest& request) const {
  if (!request.CodeSigningConfigArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFunctionsByCodeSigningConfig", "Required field: CodeSigningConfigArn, is not set");
    return ListFunctionsByCodeSigningConfigOutcome(Aws::Client::AWSError<LambdaErrors>(
        LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CodeSigningConfigArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-04-22/code-signing-configs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCodeSigningConfigArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/functions");
  };

  return ListFunctionsByCodeSigningConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListLayerVersionsOutcome LambdaClient::ListLayerVersions(const ListLayerVersionsRequest& request) const {
  if (!request.LayerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListLayerVersions", "Required field: LayerName, is not set");
    return ListLayerVersionsOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [LayerName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2018-10-31/layers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLayerName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return ListLayerVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListLayersOutcome LambdaClient::ListLayers(const ListLayersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2018-10-31/layers");
  };

  return ListLayersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListProvisionedConcurrencyConfigsOutcome LambdaClient::ListProvisionedConcurrencyConfigs(
    const ListProvisionedConcurrencyConfigsRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProvisionedConcurrencyConfigs", "Required field: FunctionName, is not set");
    return ListProvisionedConcurrencyConfigsOutcome(Aws::Client::AWSError<LambdaErrors>(
        LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2019-09-30/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/provisioned-concurrency");
    ss.str("?List=ALL");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return ListProvisionedConcurrencyConfigsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsOutcome LambdaClient::ListTags(const ListTagsRequest& request) const {
  if (!request.ResourceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTags", "Required field: Resource, is not set");
    return ListTagsOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                               "Missing required field [Resource]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-03-31/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResource());
  };

  return ListTagsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListVersionsByFunctionOutcome LambdaClient::ListVersionsByFunction(const ListVersionsByFunctionRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListVersionsByFunction", "Required field: FunctionName, is not set");
    return ListVersionsByFunctionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-03-31/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return ListVersionsByFunctionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PublishLayerVersionOutcome LambdaClient::PublishLayerVersion(const PublishLayerVersionRequest& request) const {
  if (!request.LayerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PublishLayerVersion", "Required field: LayerName, is not set");
    return PublishLayerVersionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [LayerName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2018-10-31/layers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLayerName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return PublishLayerVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PublishVersionOutcome LambdaClient::PublishVersion(const PublishVersionRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PublishVersion", "Required field: FunctionName, is not set");
    return PublishVersionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-03-31/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return PublishVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutFunctionCodeSigningConfigOutcome LambdaClient::PutFunctionCodeSigningConfig(const PutFunctionCodeSigningConfigRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutFunctionCodeSigningConfig", "Required field: FunctionName, is not set");
    return PutFunctionCodeSigningConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-06-30/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/code-signing-config");
  };

  return PutFunctionCodeSigningConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutFunctionConcurrencyOutcome LambdaClient::PutFunctionConcurrency(const PutFunctionConcurrencyRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutFunctionConcurrency", "Required field: FunctionName, is not set");
    return PutFunctionConcurrencyOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-10-31/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/concurrency");
  };

  return PutFunctionConcurrencyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutFunctionEventInvokeConfigOutcome LambdaClient::PutFunctionEventInvokeConfig(const PutFunctionEventInvokeConfigRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutFunctionEventInvokeConfig", "Required field: FunctionName, is not set");
    return PutFunctionEventInvokeConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2019-09-25/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-invoke-config");
  };

  return PutFunctionEventInvokeConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutFunctionRecursionConfigOutcome LambdaClient::PutFunctionRecursionConfig(const PutFunctionRecursionConfigRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutFunctionRecursionConfig", "Required field: FunctionName, is not set");
    return PutFunctionRecursionConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2024-08-31/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recursion-config");
  };

  return PutFunctionRecursionConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutFunctionScalingConfigOutcome LambdaClient::PutFunctionScalingConfig(const PutFunctionScalingConfigRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutFunctionScalingConfig", "Required field: FunctionName, is not set");
    return PutFunctionScalingConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [FunctionName]", false));
  }
  if (!request.QualifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutFunctionScalingConfig", "Required field: Qualifier, is not set");
    return PutFunctionScalingConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Qualifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-11-30/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/function-scaling-config");
  };

  return PutFunctionScalingConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutProvisionedConcurrencyConfigOutcome LambdaClient::PutProvisionedConcurrencyConfig(
    const PutProvisionedConcurrencyConfigRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutProvisionedConcurrencyConfig", "Required field: FunctionName, is not set");
    return PutProvisionedConcurrencyConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [FunctionName]", false));
  }
  if (!request.QualifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutProvisionedConcurrencyConfig", "Required field: Qualifier, is not set");
    return PutProvisionedConcurrencyConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [Qualifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2019-09-30/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/provisioned-concurrency");
  };

  return PutProvisionedConcurrencyConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutRuntimeManagementConfigOutcome LambdaClient::PutRuntimeManagementConfig(const PutRuntimeManagementConfigRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutRuntimeManagementConfig", "Required field: FunctionName, is not set");
    return PutRuntimeManagementConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-07-20/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtime-management-config");
  };

  return PutRuntimeManagementConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

RemoveLayerVersionPermissionOutcome LambdaClient::RemoveLayerVersionPermission(const RemoveLayerVersionPermissionRequest& request) const {
  if (!request.LayerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveLayerVersionPermission", "Required field: LayerName, is not set");
    return RemoveLayerVersionPermissionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [LayerName]", false));
  }
  if (!request.VersionNumberHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveLayerVersionPermission", "Required field: VersionNumber, is not set");
    return RemoveLayerVersionPermissionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [VersionNumber]", false));
  }
  if (!request.StatementIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveLayerVersionPermission", "Required field: StatementId, is not set");
    return RemoveLayerVersionPermissionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [StatementId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2018-10-31/layers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLayerName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionNumber());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStatementId());
  };

  return RemoveLayerVersionPermissionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

RemovePermissionOutcome LambdaClient::RemovePermission(const RemovePermissionRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemovePermission", "Required field: FunctionName, is not set");
    return RemovePermissionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [FunctionName]", false));
  }
  if (!request.StatementIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemovePermission", "Required field: StatementId, is not set");
    return RemovePermissionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [StatementId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-03-31/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStatementId());
  };

  return RemovePermissionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

SendDurableExecutionCallbackFailureOutcome LambdaClient::SendDurableExecutionCallbackFailure(
    const SendDurableExecutionCallbackFailureRequest& request) const {
  if (!request.CallbackIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SendDurableExecutionCallbackFailure", "Required field: CallbackId, is not set");
    return SendDurableExecutionCallbackFailureOutcome(Aws::Client::AWSError<LambdaErrors>(
        LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CallbackId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-12-01/durable-execution-callbacks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCallbackId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fail");
  };

  return SendDurableExecutionCallbackFailureOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SendDurableExecutionCallbackHeartbeatOutcome LambdaClient::SendDurableExecutionCallbackHeartbeat(
    const SendDurableExecutionCallbackHeartbeatRequest& request) const {
  if (!request.CallbackIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SendDurableExecutionCallbackHeartbeat", "Required field: CallbackId, is not set");
    return SendDurableExecutionCallbackHeartbeatOutcome(Aws::Client::AWSError<LambdaErrors>(
        LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CallbackId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-12-01/durable-execution-callbacks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCallbackId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/heartbeat");
  };

  return SendDurableExecutionCallbackHeartbeatOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SendDurableExecutionCallbackSuccessOutcome LambdaClient::SendDurableExecutionCallbackSuccess(
    const SendDurableExecutionCallbackSuccessRequest& request) const {
  if (!request.CallbackIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SendDurableExecutionCallbackSuccess", "Required field: CallbackId, is not set");
    return SendDurableExecutionCallbackSuccessOutcome(Aws::Client::AWSError<LambdaErrors>(
        LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CallbackId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-12-01/durable-execution-callbacks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCallbackId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/succeed");
  };

  return SendDurableExecutionCallbackSuccessOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopDurableExecutionOutcome LambdaClient::StopDurableExecution(const StopDurableExecutionRequest& request) const {
  if (!request.DurableExecutionArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopDurableExecution", "Required field: DurableExecutionArn, is not set");
    return StopDurableExecutionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DurableExecutionArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-12-01/durable-executions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDurableExecutionArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
  };

  return StopDurableExecutionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome LambdaClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: Resource, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [Resource]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-03-31/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResource());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome LambdaClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: Resource, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [Resource]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-03-31/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResource());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateAliasOutcome LambdaClient::UpdateAlias(const UpdateAliasRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAlias", "Required field: FunctionName, is not set");
    return UpdateAliasOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [FunctionName]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAlias", "Required field: Name, is not set");
    return UpdateAliasOutcome(
        Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-03-31/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return UpdateAliasOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateCapacityProviderOutcome LambdaClient::UpdateCapacityProvider(const UpdateCapacityProviderRequest& request) const {
  if (!request.CapacityProviderNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCapacityProvider", "Required field: CapacityProviderName, is not set");
    return UpdateCapacityProviderOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [CapacityProviderName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-11-30/capacity-providers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCapacityProviderName());
  };

  return UpdateCapacityProviderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateCodeSigningConfigOutcome LambdaClient::UpdateCodeSigningConfig(const UpdateCodeSigningConfigRequest& request) const {
  if (!request.CodeSigningConfigArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCodeSigningConfig", "Required field: CodeSigningConfigArn, is not set");
    return UpdateCodeSigningConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [CodeSigningConfigArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-04-22/code-signing-configs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCodeSigningConfigArn());
  };

  return UpdateCodeSigningConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateEventSourceMappingOutcome LambdaClient::UpdateEventSourceMapping(const UpdateEventSourceMappingRequest& request) const {
  if (!request.UUIDHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEventSourceMapping", "Required field: UUID, is not set");
    return UpdateEventSourceMappingOutcome(
        Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UUID]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-03-31/event-source-mappings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUUID());
  };

  return UpdateEventSourceMappingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateFunctionCodeOutcome LambdaClient::UpdateFunctionCode(const UpdateFunctionCodeRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFunctionCode", "Required field: FunctionName, is not set");
    return UpdateFunctionCodeOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-03-31/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/code");
  };

  return UpdateFunctionCodeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateFunctionConfigurationOutcome LambdaClient::UpdateFunctionConfiguration(const UpdateFunctionConfigurationRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFunctionConfiguration", "Required field: FunctionName, is not set");
    return UpdateFunctionConfigurationOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-03-31/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  };

  return UpdateFunctionConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateFunctionEventInvokeConfigOutcome LambdaClient::UpdateFunctionEventInvokeConfig(
    const UpdateFunctionEventInvokeConfigRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFunctionEventInvokeConfig", "Required field: FunctionName, is not set");
    return UpdateFunctionEventInvokeConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2019-09-25/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-invoke-config");
  };

  return UpdateFunctionEventInvokeConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateFunctionUrlConfigOutcome LambdaClient::UpdateFunctionUrlConfig(const UpdateFunctionUrlConfigRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFunctionUrlConfig", "Required field: FunctionName, is not set");
    return UpdateFunctionUrlConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-10-31/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/url");
  };

  return UpdateFunctionUrlConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
