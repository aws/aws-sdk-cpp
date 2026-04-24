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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddLayerVersionPermissionOutcome(result.GetResultWithOwnership())
                            : AddLayerVersionPermissionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddPermissionOutcome(result.GetResultWithOwnership()) : AddPermissionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CheckpointDurableExecutionOutcome(result.GetResultWithOwnership())
                            : CheckpointDurableExecutionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAliasOutcome(result.GetResultWithOwnership()) : CreateAliasOutcome(std::move(result.GetError()));
}

CreateCapacityProviderOutcome LambdaClient::CreateCapacityProvider(const CreateCapacityProviderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-11-30/capacity-providers");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCapacityProviderOutcome(result.GetResultWithOwnership())
                            : CreateCapacityProviderOutcome(std::move(result.GetError()));
}

CreateCodeSigningConfigOutcome LambdaClient::CreateCodeSigningConfig(const CreateCodeSigningConfigRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-04-22/code-signing-configs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCodeSigningConfigOutcome(result.GetResultWithOwnership())
                            : CreateCodeSigningConfigOutcome(std::move(result.GetError()));
}

CreateEventSourceMappingOutcome LambdaClient::CreateEventSourceMapping(const CreateEventSourceMappingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-03-31/event-source-mappings");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEventSourceMappingOutcome(result.GetResultWithOwnership())
                            : CreateEventSourceMappingOutcome(std::move(result.GetError()));
}

CreateFunctionOutcome LambdaClient::CreateFunction(const CreateFunctionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-03-31/functions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFunctionOutcome(result.GetResultWithOwnership()) : CreateFunctionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFunctionUrlConfigOutcome(result.GetResultWithOwnership())
                            : CreateFunctionUrlConfigOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAliasOutcome(result.GetResultWithOwnership()) : DeleteAliasOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCapacityProviderOutcome(result.GetResultWithOwnership())
                            : DeleteCapacityProviderOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCodeSigningConfigOutcome(result.GetResultWithOwnership())
                            : DeleteCodeSigningConfigOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteEventSourceMappingOutcome(result.GetResultWithOwnership())
                            : DeleteEventSourceMappingOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteFunctionOutcome(result.GetResultWithOwnership()) : DeleteFunctionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteFunctionCodeSigningConfigOutcome(result.GetResultWithOwnership())
                            : DeleteFunctionCodeSigningConfigOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteFunctionConcurrencyOutcome(result.GetResultWithOwnership())
                            : DeleteFunctionConcurrencyOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteFunctionEventInvokeConfigOutcome(result.GetResultWithOwnership())
                            : DeleteFunctionEventInvokeConfigOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteFunctionUrlConfigOutcome(result.GetResultWithOwnership())
                            : DeleteFunctionUrlConfigOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteLayerVersionOutcome(result.GetResultWithOwnership())
                            : DeleteLayerVersionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteProvisionedConcurrencyConfigOutcome(result.GetResultWithOwnership())
                            : DeleteProvisionedConcurrencyConfigOutcome(std::move(result.GetError()));
}

GetAccountSettingsOutcome LambdaClient::GetAccountSettings(const GetAccountSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2016-08-19/account-settings");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAccountSettingsOutcome(result.GetResultWithOwnership())
                            : GetAccountSettingsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAliasOutcome(result.GetResultWithOwnership()) : GetAliasOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCapacityProviderOutcome(result.GetResultWithOwnership())
                            : GetCapacityProviderOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCodeSigningConfigOutcome(result.GetResultWithOwnership())
                            : GetCodeSigningConfigOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDurableExecutionOutcome(result.GetResultWithOwnership())
                            : GetDurableExecutionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDurableExecutionHistoryOutcome(result.GetResultWithOwnership())
                            : GetDurableExecutionHistoryOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDurableExecutionStateOutcome(result.GetResultWithOwnership())
                            : GetDurableExecutionStateOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetEventSourceMappingOutcome(result.GetResultWithOwnership())
                            : GetEventSourceMappingOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetFunctionOutcome(result.GetResultWithOwnership()) : GetFunctionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetFunctionCodeSigningConfigOutcome(result.GetResultWithOwnership())
                            : GetFunctionCodeSigningConfigOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetFunctionConcurrencyOutcome(result.GetResultWithOwnership())
                            : GetFunctionConcurrencyOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetFunctionConfigurationOutcome(result.GetResultWithOwnership())
                            : GetFunctionConfigurationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetFunctionEventInvokeConfigOutcome(result.GetResultWithOwnership())
                            : GetFunctionEventInvokeConfigOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetFunctionRecursionConfigOutcome(result.GetResultWithOwnership())
                            : GetFunctionRecursionConfigOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetFunctionScalingConfigOutcome(result.GetResultWithOwnership())
                            : GetFunctionScalingConfigOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetFunctionUrlConfigOutcome(result.GetResultWithOwnership())
                            : GetFunctionUrlConfigOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetLayerVersionOutcome(result.GetResultWithOwnership())
                            : GetLayerVersionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetLayerVersionByArnOutcome(result.GetResultWithOwnership())
                            : GetLayerVersionByArnOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetLayerVersionPolicyOutcome(result.GetResultWithOwnership())
                            : GetLayerVersionPolicyOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetPolicyOutcome(result.GetResultWithOwnership()) : GetPolicyOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetProvisionedConcurrencyConfigOutcome(result.GetResultWithOwnership())
                            : GetProvisionedConcurrencyConfigOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRuntimeManagementConfigOutcome(result.GetResultWithOwnership())
                            : GetRuntimeManagementConfigOutcome(std::move(result.GetError()));
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
        return result.IsSuccess() ? InvokeOutcome(result.GetResultWithOwnership()) : InvokeOutcome(std::move(result.GetError()));
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
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST);
        return result.IsSuccess() ? InvokeWithResponseStreamOutcome(result.GetResultWithOwnership())
                                  : InvokeWithResponseStreamOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAliasesOutcome(result.GetResultWithOwnership()) : ListAliasesOutcome(std::move(result.GetError()));
}

ListCapacityProvidersOutcome LambdaClient::ListCapacityProviders(const ListCapacityProvidersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-11-30/capacity-providers");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCapacityProvidersOutcome(result.GetResultWithOwnership())
                            : ListCapacityProvidersOutcome(std::move(result.GetError()));
}

ListCodeSigningConfigsOutcome LambdaClient::ListCodeSigningConfigs(const ListCodeSigningConfigsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-04-22/code-signing-configs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCodeSigningConfigsOutcome(result.GetResultWithOwnership())
                            : ListCodeSigningConfigsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDurableExecutionsByFunctionOutcome(result.GetResultWithOwnership())
                            : ListDurableExecutionsByFunctionOutcome(std::move(result.GetError()));
}

ListEventSourceMappingsOutcome LambdaClient::ListEventSourceMappings(const ListEventSourceMappingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-03-31/event-source-mappings");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListEventSourceMappingsOutcome(result.GetResultWithOwnership())
                            : ListEventSourceMappingsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListFunctionEventInvokeConfigsOutcome(result.GetResultWithOwnership())
                            : ListFunctionEventInvokeConfigsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListFunctionUrlConfigsOutcome(result.GetResultWithOwnership())
                            : ListFunctionUrlConfigsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListFunctionVersionsByCapacityProviderOutcome(result.GetResultWithOwnership())
                            : ListFunctionVersionsByCapacityProviderOutcome(std::move(result.GetError()));
}

ListFunctionsOutcome LambdaClient::ListFunctions(const ListFunctionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-03-31/functions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListFunctionsOutcome(result.GetResultWithOwnership()) : ListFunctionsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListFunctionsByCodeSigningConfigOutcome(result.GetResultWithOwnership())
                            : ListFunctionsByCodeSigningConfigOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListLayerVersionsOutcome(result.GetResultWithOwnership())
                            : ListLayerVersionsOutcome(std::move(result.GetError()));
}

ListLayersOutcome LambdaClient::ListLayers(const ListLayersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2018-10-31/layers");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListLayersOutcome(result.GetResultWithOwnership()) : ListLayersOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListProvisionedConcurrencyConfigsOutcome(result.GetResultWithOwnership())
                            : ListProvisionedConcurrencyConfigsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsOutcome(result.GetResultWithOwnership()) : ListTagsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListVersionsByFunctionOutcome(result.GetResultWithOwnership())
                            : ListVersionsByFunctionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PublishLayerVersionOutcome(result.GetResultWithOwnership())
                            : PublishLayerVersionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PublishVersionOutcome(result.GetResultWithOwnership()) : PublishVersionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutFunctionCodeSigningConfigOutcome(result.GetResultWithOwnership())
                            : PutFunctionCodeSigningConfigOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutFunctionConcurrencyOutcome(result.GetResultWithOwnership())
                            : PutFunctionConcurrencyOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutFunctionEventInvokeConfigOutcome(result.GetResultWithOwnership())
                            : PutFunctionEventInvokeConfigOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutFunctionRecursionConfigOutcome(result.GetResultWithOwnership())
                            : PutFunctionRecursionConfigOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutFunctionScalingConfigOutcome(result.GetResultWithOwnership())
                            : PutFunctionScalingConfigOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutProvisionedConcurrencyConfigOutcome(result.GetResultWithOwnership())
                            : PutProvisionedConcurrencyConfigOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutRuntimeManagementConfigOutcome(result.GetResultWithOwnership())
                            : PutRuntimeManagementConfigOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? RemoveLayerVersionPermissionOutcome(result.GetResultWithOwnership())
                            : RemoveLayerVersionPermissionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? RemovePermissionOutcome(result.GetResultWithOwnership())
                            : RemovePermissionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendDurableExecutionCallbackFailureOutcome(result.GetResultWithOwnership())
                            : SendDurableExecutionCallbackFailureOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendDurableExecutionCallbackHeartbeatOutcome(result.GetResultWithOwnership())
                            : SendDurableExecutionCallbackHeartbeatOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendDurableExecutionCallbackSuccessOutcome(result.GetResultWithOwnership())
                            : SendDurableExecutionCallbackSuccessOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopDurableExecutionOutcome(result.GetResultWithOwnership())
                            : StopDurableExecutionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateAliasOutcome(result.GetResultWithOwnership()) : UpdateAliasOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateCapacityProviderOutcome(result.GetResultWithOwnership())
                            : UpdateCapacityProviderOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateCodeSigningConfigOutcome(result.GetResultWithOwnership())
                            : UpdateCodeSigningConfigOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateEventSourceMappingOutcome(result.GetResultWithOwnership())
                            : UpdateEventSourceMappingOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateFunctionCodeOutcome(result.GetResultWithOwnership())
                            : UpdateFunctionCodeOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateFunctionConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateFunctionConfigurationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateFunctionEventInvokeConfigOutcome(result.GetResultWithOwnership())
                            : UpdateFunctionEventInvokeConfigOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateFunctionUrlConfigOutcome(result.GetResultWithOwnership())
                            : UpdateFunctionUrlConfigOutcome(std::move(result.GetError()));
}
