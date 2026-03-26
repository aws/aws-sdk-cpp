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
#include <aws/lex-models/LexModelBuildingServiceClient.h>
#include <aws/lex-models/LexModelBuildingServiceEndpointProvider.h>
#include <aws/lex-models/LexModelBuildingServiceErrorMarshaller.h>
#include <aws/lex-models/model/CreateBotVersionRequest.h>
#include <aws/lex-models/model/CreateIntentVersionRequest.h>
#include <aws/lex-models/model/CreateSlotTypeVersionRequest.h>
#include <aws/lex-models/model/DeleteBotAliasRequest.h>
#include <aws/lex-models/model/DeleteBotChannelAssociationRequest.h>
#include <aws/lex-models/model/DeleteBotRequest.h>
#include <aws/lex-models/model/DeleteBotVersionRequest.h>
#include <aws/lex-models/model/DeleteIntentRequest.h>
#include <aws/lex-models/model/DeleteIntentVersionRequest.h>
#include <aws/lex-models/model/DeleteSlotTypeRequest.h>
#include <aws/lex-models/model/DeleteSlotTypeVersionRequest.h>
#include <aws/lex-models/model/DeleteUtterancesRequest.h>
#include <aws/lex-models/model/GetBotAliasRequest.h>
#include <aws/lex-models/model/GetBotAliasesRequest.h>
#include <aws/lex-models/model/GetBotChannelAssociationRequest.h>
#include <aws/lex-models/model/GetBotChannelAssociationsRequest.h>
#include <aws/lex-models/model/GetBotRequest.h>
#include <aws/lex-models/model/GetBotVersionsRequest.h>
#include <aws/lex-models/model/GetBotsRequest.h>
#include <aws/lex-models/model/GetBuiltinIntentRequest.h>
#include <aws/lex-models/model/GetBuiltinIntentsRequest.h>
#include <aws/lex-models/model/GetBuiltinSlotTypesRequest.h>
#include <aws/lex-models/model/GetExportRequest.h>
#include <aws/lex-models/model/GetImportRequest.h>
#include <aws/lex-models/model/GetIntentRequest.h>
#include <aws/lex-models/model/GetIntentVersionsRequest.h>
#include <aws/lex-models/model/GetIntentsRequest.h>
#include <aws/lex-models/model/GetMigrationRequest.h>
#include <aws/lex-models/model/GetMigrationsRequest.h>
#include <aws/lex-models/model/GetSlotTypeRequest.h>
#include <aws/lex-models/model/GetSlotTypeVersionsRequest.h>
#include <aws/lex-models/model/GetSlotTypesRequest.h>
#include <aws/lex-models/model/GetUtterancesViewRequest.h>
#include <aws/lex-models/model/ListTagsForResourceRequest.h>
#include <aws/lex-models/model/PutBotAliasRequest.h>
#include <aws/lex-models/model/PutBotRequest.h>
#include <aws/lex-models/model/PutIntentRequest.h>
#include <aws/lex-models/model/PutSlotTypeRequest.h>
#include <aws/lex-models/model/StartImportRequest.h>
#include <aws/lex-models/model/StartMigrationRequest.h>
#include <aws/lex-models/model/TagResourceRequest.h>
#include <aws/lex-models/model/UntagResourceRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LexModelBuildingService;
using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace LexModelBuildingService {
const char SERVICE_NAME[] = "lex";
const char ALLOCATION_TAG[] = "LexModelBuildingServiceClient";
}  // namespace LexModelBuildingService
}  // namespace Aws
const char* LexModelBuildingServiceClient::GetServiceName() { return SERVICE_NAME; }
const char* LexModelBuildingServiceClient::GetAllocationTag() { return ALLOCATION_TAG; }

LexModelBuildingServiceClient::LexModelBuildingServiceClient(
    const LexModelBuildingService::LexModelBuildingServiceClientConfiguration& clientConfiguration,
    std::shared_ptr<LexModelBuildingServiceEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LexModelBuildingServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<LexModelBuildingServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LexModelBuildingServiceClient::LexModelBuildingServiceClient(
    const AWSCredentials& credentials, std::shared_ptr<LexModelBuildingServiceEndpointProviderBase> endpointProvider,
    const LexModelBuildingService::LexModelBuildingServiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LexModelBuildingServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<LexModelBuildingServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LexModelBuildingServiceClient::LexModelBuildingServiceClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<LexModelBuildingServiceEndpointProviderBase> endpointProvider,
    const LexModelBuildingService::LexModelBuildingServiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LexModelBuildingServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<LexModelBuildingServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
LexModelBuildingServiceClient::LexModelBuildingServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LexModelBuildingServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LexModelBuildingServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LexModelBuildingServiceClient::LexModelBuildingServiceClient(const AWSCredentials& credentials,
                                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LexModelBuildingServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LexModelBuildingServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LexModelBuildingServiceClient::LexModelBuildingServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LexModelBuildingServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LexModelBuildingServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
LexModelBuildingServiceClient::~LexModelBuildingServiceClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<LexModelBuildingServiceEndpointProviderBase>& LexModelBuildingServiceClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void LexModelBuildingServiceClient::init(const LexModelBuildingService::LexModelBuildingServiceClientConfiguration& config) {
  AWSClient::SetServiceClientName("Lex Model Building Service");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "lex");
}

void LexModelBuildingServiceClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
LexModelBuildingServiceClient::InvokeOperationOutcome LexModelBuildingServiceClient::InvokeServiceOperation(
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

CreateBotVersionOutcome LexModelBuildingServiceClient::CreateBotVersion(const CreateBotVersionRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBotVersion", "Required field: Name, is not set");
    return CreateBotVersionOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return CreateBotVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateIntentVersionOutcome LexModelBuildingServiceClient::CreateIntentVersion(const CreateIntentVersionRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateIntentVersion", "Required field: Name, is not set");
    return CreateIntentVersionOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return CreateIntentVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSlotTypeVersionOutcome LexModelBuildingServiceClient::CreateSlotTypeVersion(const CreateSlotTypeVersionRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSlotTypeVersion", "Required field: Name, is not set");
    return CreateSlotTypeVersionOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/slottypes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return CreateSlotTypeVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteBotOutcome LexModelBuildingServiceClient::DeleteBot(const DeleteBotRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBot", "Required field: Name, is not set");
    return DeleteBotOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteBotOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteBotAliasOutcome LexModelBuildingServiceClient::DeleteBotAlias(const DeleteBotAliasRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBotAlias", "Required field: Name, is not set");
    return DeleteBotAliasOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.BotNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBotAlias", "Required field: BotName, is not set");
    return DeleteBotAliasOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteBotAliasOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteBotChannelAssociationOutcome LexModelBuildingServiceClient::DeleteBotChannelAssociation(
    const DeleteBotChannelAssociationRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBotChannelAssociation", "Required field: Name, is not set");
    return DeleteBotChannelAssociationOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.BotNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBotChannelAssociation", "Required field: BotName, is not set");
    return DeleteBotChannelAssociationOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }
  if (!request.BotAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBotChannelAssociation", "Required field: BotAlias, is not set");
    return DeleteBotChannelAssociationOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotAlias]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAlias());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteBotChannelAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteBotVersionOutcome LexModelBuildingServiceClient::DeleteBotVersion(const DeleteBotVersionRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBotVersion", "Required field: Name, is not set");
    return DeleteBotVersionOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.VersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBotVersion", "Required field: Version, is not set");
    return DeleteBotVersionOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Version]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersion());
  };

  return DeleteBotVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteIntentOutcome LexModelBuildingServiceClient::DeleteIntent(const DeleteIntentRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIntent", "Required field: Name, is not set");
    return DeleteIntentOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteIntentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteIntentVersionOutcome LexModelBuildingServiceClient::DeleteIntentVersion(const DeleteIntentVersionRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIntentVersion", "Required field: Name, is not set");
    return DeleteIntentVersionOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.VersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIntentVersion", "Required field: Version, is not set");
    return DeleteIntentVersionOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Version]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersion());
  };

  return DeleteIntentVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSlotTypeOutcome LexModelBuildingServiceClient::DeleteSlotType(const DeleteSlotTypeRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSlotType", "Required field: Name, is not set");
    return DeleteSlotTypeOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/slottypes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteSlotTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSlotTypeVersionOutcome LexModelBuildingServiceClient::DeleteSlotTypeVersion(const DeleteSlotTypeVersionRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSlotTypeVersion", "Required field: Name, is not set");
    return DeleteSlotTypeVersionOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.VersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSlotTypeVersion", "Required field: Version, is not set");
    return DeleteSlotTypeVersionOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Version]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/slottypes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/version/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersion());
  };

  return DeleteSlotTypeVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteUtterancesOutcome LexModelBuildingServiceClient::DeleteUtterances(const DeleteUtterancesRequest& request) const {
  if (!request.BotNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUtterances", "Required field: BotName, is not set");
    return DeleteUtterancesOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUtterances", "Required field: UserId, is not set");
    return DeleteUtterancesOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/utterances/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  };

  return DeleteUtterancesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetBotOutcome LexModelBuildingServiceClient::GetBot(const GetBotRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBot", "Required field: Name, is not set");
    return GetBotOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER,
                                                                              "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.VersionOrAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBot", "Required field: VersionOrAlias, is not set");
    return GetBotOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionOrAlias]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionOrAlias());
  };

  return GetBotOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetBotAliasOutcome LexModelBuildingServiceClient::GetBotAlias(const GetBotAliasRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBotAlias", "Required field: Name, is not set");
    return GetBotAliasOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.BotNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBotAlias", "Required field: BotName, is not set");
    return GetBotAliasOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return GetBotAliasOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetBotAliasesOutcome LexModelBuildingServiceClient::GetBotAliases(const GetBotAliasesRequest& request) const {
  if (!request.BotNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBotAliases", "Required field: BotName, is not set");
    return GetBotAliasesOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
  };

  return GetBotAliasesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetBotChannelAssociationOutcome LexModelBuildingServiceClient::GetBotChannelAssociation(
    const GetBotChannelAssociationRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBotChannelAssociation", "Required field: Name, is not set");
    return GetBotChannelAssociationOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.BotNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBotChannelAssociation", "Required field: BotName, is not set");
    return GetBotChannelAssociationOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }
  if (!request.BotAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBotChannelAssociation", "Required field: BotAlias, is not set");
    return GetBotChannelAssociationOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotAlias]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAlias());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return GetBotChannelAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetBotChannelAssociationsOutcome LexModelBuildingServiceClient::GetBotChannelAssociations(
    const GetBotChannelAssociationsRequest& request) const {
  if (!request.BotNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBotChannelAssociations", "Required field: BotName, is not set");
    return GetBotChannelAssociationsOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }
  if (!request.BotAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBotChannelAssociations", "Required field: BotAlias, is not set");
    return GetBotChannelAssociationsOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotAlias]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAlias());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  };

  return GetBotChannelAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetBotVersionsOutcome LexModelBuildingServiceClient::GetBotVersions(const GetBotVersionsRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBotVersions", "Required field: Name, is not set");
    return GetBotVersionsOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  };

  return GetBotVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetBotsOutcome LexModelBuildingServiceClient::GetBots(const GetBotsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  };

  return GetBotsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetBuiltinIntentOutcome LexModelBuildingServiceClient::GetBuiltinIntent(const GetBuiltinIntentRequest& request) const {
  if (!request.SignatureHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBuiltinIntent", "Required field: Signature, is not set");
    return GetBuiltinIntentOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Signature]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/builtins/intents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSignature());
  };

  return GetBuiltinIntentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetBuiltinIntentsOutcome LexModelBuildingServiceClient::GetBuiltinIntents(const GetBuiltinIntentsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/builtins/intents/");
  };

  return GetBuiltinIntentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetBuiltinSlotTypesOutcome LexModelBuildingServiceClient::GetBuiltinSlotTypes(const GetBuiltinSlotTypesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/builtins/slottypes/");
  };

  return GetBuiltinSlotTypesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetExportOutcome LexModelBuildingServiceClient::GetExport(const GetExportRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetExport", "Required field: Name, is not set");
    return GetExportOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.VersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetExport", "Required field: Version, is not set");
    return GetExportOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Version]", false));
  }
  if (!request.ResourceTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetExport", "Required field: ResourceType, is not set");
    return GetExportOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  if (!request.ExportTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetExport", "Required field: ExportType, is not set");
    return GetExportOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExportType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/exports/");
  };

  return GetExportOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetImportOutcome LexModelBuildingServiceClient::GetImport(const GetImportRequest& request) const {
  if (!request.ImportIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetImport", "Required field: ImportId, is not set");
    return GetImportOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImportId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/imports/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImportId());
  };

  return GetImportOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetIntentOutcome LexModelBuildingServiceClient::GetIntent(const GetIntentRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIntent", "Required field: Name, is not set");
    return GetIntentOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.VersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIntent", "Required field: Version, is not set");
    return GetIntentOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Version]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersion());
  };

  return GetIntentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetIntentVersionsOutcome LexModelBuildingServiceClient::GetIntentVersions(const GetIntentVersionsRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIntentVersions", "Required field: Name, is not set");
    return GetIntentVersionsOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  };

  return GetIntentVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetIntentsOutcome LexModelBuildingServiceClient::GetIntents(const GetIntentsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
  };

  return GetIntentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMigrationOutcome LexModelBuildingServiceClient::GetMigration(const GetMigrationRequest& request) const {
  if (!request.MigrationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMigration", "Required field: MigrationId, is not set");
    return GetMigrationOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MigrationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/migrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMigrationId());
  };

  return GetMigrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMigrationsOutcome LexModelBuildingServiceClient::GetMigrations(const GetMigrationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/migrations");
  };

  return GetMigrationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSlotTypeOutcome LexModelBuildingServiceClient::GetSlotType(const GetSlotTypeRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSlotType", "Required field: Name, is not set");
    return GetSlotTypeOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.VersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSlotType", "Required field: Version, is not set");
    return GetSlotTypeOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Version]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/slottypes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersion());
  };

  return GetSlotTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSlotTypeVersionsOutcome LexModelBuildingServiceClient::GetSlotTypeVersions(const GetSlotTypeVersionsRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSlotTypeVersions", "Required field: Name, is not set");
    return GetSlotTypeVersionsOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/slottypes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  };

  return GetSlotTypeVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSlotTypesOutcome LexModelBuildingServiceClient::GetSlotTypes(const GetSlotTypesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/slottypes/");
  };

  return GetSlotTypesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetUtterancesViewOutcome LexModelBuildingServiceClient::GetUtterancesView(const GetUtterancesViewRequest& request) const {
  if (!request.BotNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUtterancesView", "Required field: BotName, is not set");
    return GetUtterancesViewOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }
  if (!request.BotVersionsHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUtterancesView", "Required field: BotVersions, is not set");
    return GetUtterancesViewOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersions]", false));
  }
  if (!request.StatusTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUtterancesView", "Required field: StatusType, is not set");
    return GetUtterancesViewOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StatusType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/utterances");
    ss.str("?view=aggregation");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return GetUtterancesViewOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome LexModelBuildingServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PutBotOutcome LexModelBuildingServiceClient::PutBot(const PutBotRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBot", "Required field: Name, is not set");
    return PutBotOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER,
                                                                              "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/$LATEST");
  };

  return PutBotOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutBotAliasOutcome LexModelBuildingServiceClient::PutBotAlias(const PutBotAliasRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBotAlias", "Required field: Name, is not set");
    return PutBotAliasOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.BotNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBotAlias", "Required field: BotName, is not set");
    return PutBotAliasOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return PutBotAliasOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutIntentOutcome LexModelBuildingServiceClient::PutIntent(const PutIntentRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutIntent", "Required field: Name, is not set");
    return PutIntentOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/$LATEST");
  };

  return PutIntentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutSlotTypeOutcome LexModelBuildingServiceClient::PutSlotType(const PutSlotTypeRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutSlotType", "Required field: Name, is not set");
    return PutSlotTypeOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/slottypes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/$LATEST");
  };

  return PutSlotTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartImportOutcome LexModelBuildingServiceClient::StartImport(const StartImportRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/imports/");
  };

  return StartImportOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMigrationOutcome LexModelBuildingServiceClient::StartMigration(const StartMigrationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/migrations");
  };

  return StartMigrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome LexModelBuildingServiceClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome LexModelBuildingServiceClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(
        LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}
