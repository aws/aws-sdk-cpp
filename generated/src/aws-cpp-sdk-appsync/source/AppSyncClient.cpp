/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/AppSyncClient.h>
#include <aws/appsync/AppSyncEndpointProvider.h>
#include <aws/appsync/AppSyncErrorMarshaller.h>
#include <aws/appsync/model/AssociateApiRequest.h>
#include <aws/appsync/model/AssociateMergedGraphqlApiRequest.h>
#include <aws/appsync/model/AssociateSourceGraphqlApiRequest.h>
#include <aws/appsync/model/CreateApiCacheRequest.h>
#include <aws/appsync/model/CreateApiKeyRequest.h>
#include <aws/appsync/model/CreateApiRequest.h>
#include <aws/appsync/model/CreateChannelNamespaceRequest.h>
#include <aws/appsync/model/CreateDataSourceRequest.h>
#include <aws/appsync/model/CreateDomainNameRequest.h>
#include <aws/appsync/model/CreateFunctionRequest.h>
#include <aws/appsync/model/CreateGraphqlApiRequest.h>
#include <aws/appsync/model/CreateResolverRequest.h>
#include <aws/appsync/model/CreateTypeRequest.h>
#include <aws/appsync/model/DeleteApiCacheRequest.h>
#include <aws/appsync/model/DeleteApiKeyRequest.h>
#include <aws/appsync/model/DeleteApiRequest.h>
#include <aws/appsync/model/DeleteChannelNamespaceRequest.h>
#include <aws/appsync/model/DeleteDataSourceRequest.h>
#include <aws/appsync/model/DeleteDomainNameRequest.h>
#include <aws/appsync/model/DeleteFunctionRequest.h>
#include <aws/appsync/model/DeleteGraphqlApiRequest.h>
#include <aws/appsync/model/DeleteResolverRequest.h>
#include <aws/appsync/model/DeleteTypeRequest.h>
#include <aws/appsync/model/DisassociateApiRequest.h>
#include <aws/appsync/model/DisassociateMergedGraphqlApiRequest.h>
#include <aws/appsync/model/DisassociateSourceGraphqlApiRequest.h>
#include <aws/appsync/model/EvaluateCodeRequest.h>
#include <aws/appsync/model/EvaluateMappingTemplateRequest.h>
#include <aws/appsync/model/FlushApiCacheRequest.h>
#include <aws/appsync/model/GetApiAssociationRequest.h>
#include <aws/appsync/model/GetApiCacheRequest.h>
#include <aws/appsync/model/GetApiRequest.h>
#include <aws/appsync/model/GetChannelNamespaceRequest.h>
#include <aws/appsync/model/GetDataSourceIntrospectionRequest.h>
#include <aws/appsync/model/GetDataSourceRequest.h>
#include <aws/appsync/model/GetDomainNameRequest.h>
#include <aws/appsync/model/GetFunctionRequest.h>
#include <aws/appsync/model/GetGraphqlApiEnvironmentVariablesRequest.h>
#include <aws/appsync/model/GetGraphqlApiRequest.h>
#include <aws/appsync/model/GetIntrospectionSchemaRequest.h>
#include <aws/appsync/model/GetResolverRequest.h>
#include <aws/appsync/model/GetSchemaCreationStatusRequest.h>
#include <aws/appsync/model/GetSourceApiAssociationRequest.h>
#include <aws/appsync/model/GetTypeRequest.h>
#include <aws/appsync/model/ListApiKeysRequest.h>
#include <aws/appsync/model/ListApisRequest.h>
#include <aws/appsync/model/ListChannelNamespacesRequest.h>
#include <aws/appsync/model/ListDataSourcesRequest.h>
#include <aws/appsync/model/ListDomainNamesRequest.h>
#include <aws/appsync/model/ListFunctionsRequest.h>
#include <aws/appsync/model/ListGraphqlApisRequest.h>
#include <aws/appsync/model/ListResolversByFunctionRequest.h>
#include <aws/appsync/model/ListResolversRequest.h>
#include <aws/appsync/model/ListSourceApiAssociationsRequest.h>
#include <aws/appsync/model/ListTagsForResourceRequest.h>
#include <aws/appsync/model/ListTypesByAssociationRequest.h>
#include <aws/appsync/model/ListTypesRequest.h>
#include <aws/appsync/model/PutGraphqlApiEnvironmentVariablesRequest.h>
#include <aws/appsync/model/StartDataSourceIntrospectionRequest.h>
#include <aws/appsync/model/StartSchemaCreationRequest.h>
#include <aws/appsync/model/StartSchemaMergeRequest.h>
#include <aws/appsync/model/TagResourceRequest.h>
#include <aws/appsync/model/UntagResourceRequest.h>
#include <aws/appsync/model/UpdateApiCacheRequest.h>
#include <aws/appsync/model/UpdateApiKeyRequest.h>
#include <aws/appsync/model/UpdateApiRequest.h>
#include <aws/appsync/model/UpdateChannelNamespaceRequest.h>
#include <aws/appsync/model/UpdateDataSourceRequest.h>
#include <aws/appsync/model/UpdateDomainNameRequest.h>
#include <aws/appsync/model/UpdateFunctionRequest.h>
#include <aws/appsync/model/UpdateGraphqlApiRequest.h>
#include <aws/appsync/model/UpdateResolverRequest.h>
#include <aws/appsync/model/UpdateSourceApiAssociationRequest.h>
#include <aws/appsync/model/UpdateTypeRequest.h>
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
using namespace Aws::AppSync;
using namespace Aws::AppSync::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace AppSync {
const char SERVICE_NAME[] = "appsync";
const char ALLOCATION_TAG[] = "AppSyncClient";
}  // namespace AppSync
}  // namespace Aws
const char* AppSyncClient::GetServiceName() { return SERVICE_NAME; }
const char* AppSyncClient::GetAllocationTag() { return ALLOCATION_TAG; }

AppSyncClient::AppSyncClient(const AppSync::AppSyncClientConfiguration& clientConfiguration,
                             std::shared_ptr<AppSyncEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppSyncErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AppSyncEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppSyncClient::AppSyncClient(const AWSCredentials& credentials, std::shared_ptr<AppSyncEndpointProviderBase> endpointProvider,
                             const AppSync::AppSyncClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppSyncErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AppSyncEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppSyncClient::AppSyncClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<AppSyncEndpointProviderBase> endpointProvider,
                             const AppSync::AppSyncClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppSyncErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AppSyncEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
AppSyncClient::AppSyncClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppSyncErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AppSyncEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppSyncClient::AppSyncClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppSyncErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AppSyncEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppSyncClient::AppSyncClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppSyncErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AppSyncEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
AppSyncClient::~AppSyncClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<AppSyncEndpointProviderBase>& AppSyncClient::accessEndpointProvider() { return m_endpointProvider; }

void AppSyncClient::init(const AppSync::AppSyncClientConfiguration& config) {
  AWSClient::SetServiceClientName("AppSync");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "appsync");
}

void AppSyncClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
AppSyncClient::InvokeOperationOutcome AppSyncClient::InvokeServiceOperation(
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

AssociateApiOutcome AppSyncClient::AssociateApi(const AssociateApiRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateApi", "Required field: DomainName, is not set");
    return AssociateApiOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/domainnames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/apiassociation");
  };

  return AssociateApiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateMergedGraphqlApiOutcome AppSyncClient::AssociateMergedGraphqlApi(const AssociateMergedGraphqlApiRequest& request) const {
  if (!request.SourceApiIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateMergedGraphqlApi", "Required field: SourceApiIdentifier, is not set");
    return AssociateMergedGraphqlApiOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [SourceApiIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/sourceApis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceApiIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/mergedApiAssociations");
  };

  return AssociateMergedGraphqlApiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateSourceGraphqlApiOutcome AppSyncClient::AssociateSourceGraphqlApi(const AssociateSourceGraphqlApiRequest& request) const {
  if (!request.MergedApiIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateSourceGraphqlApi", "Required field: MergedApiIdentifier, is not set");
    return AssociateSourceGraphqlApiOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [MergedApiIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/mergedApis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMergedApiIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceApiAssociations");
  };

  return AssociateSourceGraphqlApiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateApiOutcome AppSyncClient::CreateApi(const CreateApiRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis");
  };

  return CreateApiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateApiCacheOutcome AppSyncClient::CreateApiCache(const CreateApiCacheRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateApiCache", "Required field: ApiId, is not set");
    return CreateApiCacheOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ApiCaches");
  };

  return CreateApiCacheOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateApiKeyOutcome AppSyncClient::CreateApiKey(const CreateApiKeyRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateApiKey", "Required field: ApiId, is not set");
    return CreateApiKeyOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/apikeys");
  };

  return CreateApiKeyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateChannelNamespaceOutcome AppSyncClient::CreateChannelNamespace(const CreateChannelNamespaceRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateChannelNamespace", "Required field: ApiId, is not set");
    return CreateChannelNamespaceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelNamespaces");
  };

  return CreateChannelNamespaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDataSourceOutcome AppSyncClient::CreateDataSource(const CreateDataSourceRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDataSource", "Required field: ApiId, is not set");
    return CreateDataSourceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasources");
  };

  return CreateDataSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDomainNameOutcome AppSyncClient::CreateDomainName(const CreateDomainNameRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/domainnames");
  };

  return CreateDomainNameOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFunctionOutcome AppSyncClient::CreateFunction(const CreateFunctionRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateFunction", "Required field: ApiId, is not set");
    return CreateFunctionOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/functions");
  };

  return CreateFunctionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGraphqlApiOutcome AppSyncClient::CreateGraphqlApi(const CreateGraphqlApiRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis");
  };

  return CreateGraphqlApiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateResolverOutcome AppSyncClient::CreateResolver(const CreateResolverRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateResolver", "Required field: ApiId, is not set");
    return CreateResolverOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApiId]", false));
  }
  if (!request.TypeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateResolver", "Required field: TypeName, is not set");
    return CreateResolverOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [TypeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTypeName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resolvers");
  };

  return CreateResolverOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTypeOutcome AppSyncClient::CreateType(const CreateTypeRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateType", "Required field: ApiId, is not set");
    return CreateTypeOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/types");
  };

  return CreateTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApiOutcome AppSyncClient::DeleteApi(const DeleteApiRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteApi", "Required field: ApiId, is not set");
    return DeleteApiOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
  };

  return DeleteApiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteApiCacheOutcome AppSyncClient::DeleteApiCache(const DeleteApiCacheRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteApiCache", "Required field: ApiId, is not set");
    return DeleteApiCacheOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ApiCaches");
  };

  return DeleteApiCacheOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteApiKeyOutcome AppSyncClient::DeleteApiKey(const DeleteApiKeyRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteApiKey", "Required field: ApiId, is not set");
    return DeleteApiKeyOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ApiId]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteApiKey", "Required field: Id, is not set");
    return DeleteApiKeyOutcome(
        Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/apikeys/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteApiKeyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteChannelNamespaceOutcome AppSyncClient::DeleteChannelNamespace(const DeleteChannelNamespaceRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannelNamespace", "Required field: ApiId, is not set");
    return DeleteChannelNamespaceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ApiId]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannelNamespace", "Required field: Name, is not set");
    return DeleteChannelNamespaceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelNamespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteChannelNamespaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDataSourceOutcome AppSyncClient::DeleteDataSource(const DeleteDataSourceRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataSource", "Required field: ApiId, is not set");
    return DeleteDataSourceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ApiId]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataSource", "Required field: Name, is not set");
    return DeleteDataSourceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteDataSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDomainNameOutcome AppSyncClient::DeleteDomainName(const DeleteDomainNameRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDomainName", "Required field: DomainName, is not set");
    return DeleteDomainNameOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/domainnames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  };

  return DeleteDomainNameOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteFunctionOutcome AppSyncClient::DeleteFunction(const DeleteFunctionRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFunction", "Required field: ApiId, is not set");
    return DeleteFunctionOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApiId]", false));
  }
  if (!request.FunctionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFunction", "Required field: FunctionId, is not set");
    return DeleteFunctionOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [FunctionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionId());
  };

  return DeleteFunctionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteGraphqlApiOutcome AppSyncClient::DeleteGraphqlApi(const DeleteGraphqlApiRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGraphqlApi", "Required field: ApiId, is not set");
    return DeleteGraphqlApiOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
  };

  return DeleteGraphqlApiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteResolverOutcome AppSyncClient::DeleteResolver(const DeleteResolverRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteResolver", "Required field: ApiId, is not set");
    return DeleteResolverOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApiId]", false));
  }
  if (!request.TypeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteResolver", "Required field: TypeName, is not set");
    return DeleteResolverOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [TypeName]", false));
  }
  if (!request.FieldNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteResolver", "Required field: FieldName, is not set");
    return DeleteResolverOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [FieldName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTypeName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resolvers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFieldName());
  };

  return DeleteResolverOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteTypeOutcome AppSyncClient::DeleteType(const DeleteTypeRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteType", "Required field: ApiId, is not set");
    return DeleteTypeOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [ApiId]", false));
  }
  if (!request.TypeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteType", "Required field: TypeName, is not set");
    return DeleteTypeOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [TypeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTypeName());
  };

  return DeleteTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateApiOutcome AppSyncClient::DisassociateApi(const DisassociateApiRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateApi", "Required field: DomainName, is not set");
    return DisassociateApiOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/domainnames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/apiassociation");
  };

  return DisassociateApiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateMergedGraphqlApiOutcome AppSyncClient::DisassociateMergedGraphqlApi(const DisassociateMergedGraphqlApiRequest& request) const {
  if (!request.SourceApiIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateMergedGraphqlApi", "Required field: SourceApiIdentifier, is not set");
    return DisassociateMergedGraphqlApiOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [SourceApiIdentifier]", false));
  }
  if (!request.AssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateMergedGraphqlApi", "Required field: AssociationId, is not set");
    return DisassociateMergedGraphqlApiOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [AssociationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/sourceApis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceApiIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/mergedApiAssociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssociationId());
  };

  return DisassociateMergedGraphqlApiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateSourceGraphqlApiOutcome AppSyncClient::DisassociateSourceGraphqlApi(const DisassociateSourceGraphqlApiRequest& request) const {
  if (!request.MergedApiIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateSourceGraphqlApi", "Required field: MergedApiIdentifier, is not set");
    return DisassociateSourceGraphqlApiOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [MergedApiIdentifier]", false));
  }
  if (!request.AssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateSourceGraphqlApi", "Required field: AssociationId, is not set");
    return DisassociateSourceGraphqlApiOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [AssociationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/mergedApis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMergedApiIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceApiAssociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssociationId());
  };

  return DisassociateSourceGraphqlApiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

EvaluateCodeOutcome AppSyncClient::EvaluateCode(const EvaluateCodeRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/dataplane-evaluatecode");
  };

  return EvaluateCodeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

EvaluateMappingTemplateOutcome AppSyncClient::EvaluateMappingTemplate(const EvaluateMappingTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/dataplane-evaluatetemplate");
  };

  return EvaluateMappingTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

FlushApiCacheOutcome AppSyncClient::FlushApiCache(const FlushApiCacheRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("FlushApiCache", "Required field: ApiId, is not set");
    return FlushApiCacheOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/FlushCache");
  };

  return FlushApiCacheOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetApiOutcome AppSyncClient::GetApi(const GetApiRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApi", "Required field: ApiId, is not set");
    return GetApiOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                              "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
  };

  return GetApiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetApiAssociationOutcome AppSyncClient::GetApiAssociation(const GetApiAssociationRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApiAssociation", "Required field: DomainName, is not set");
    return GetApiAssociationOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/domainnames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/apiassociation");
  };

  return GetApiAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetApiCacheOutcome AppSyncClient::GetApiCache(const GetApiCacheRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApiCache", "Required field: ApiId, is not set");
    return GetApiCacheOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ApiCaches");
  };

  return GetApiCacheOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetChannelNamespaceOutcome AppSyncClient::GetChannelNamespace(const GetChannelNamespaceRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChannelNamespace", "Required field: ApiId, is not set");
    return GetChannelNamespaceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ApiId]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChannelNamespace", "Required field: Name, is not set");
    return GetChannelNamespaceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelNamespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return GetChannelNamespaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDataSourceOutcome AppSyncClient::GetDataSource(const GetDataSourceRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataSource", "Required field: ApiId, is not set");
    return GetDataSourceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ApiId]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataSource", "Required field: Name, is not set");
    return GetDataSourceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return GetDataSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDataSourceIntrospectionOutcome AppSyncClient::GetDataSourceIntrospection(const GetDataSourceIntrospectionRequest& request) const {
  if (!request.IntrospectionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataSourceIntrospection", "Required field: IntrospectionId, is not set");
    return GetDataSourceIntrospectionOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [IntrospectionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datasources/introspections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntrospectionId());
  };

  return GetDataSourceIntrospectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDomainNameOutcome AppSyncClient::GetDomainName(const GetDomainNameRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDomainName", "Required field: DomainName, is not set");
    return GetDomainNameOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/domainnames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  };

  return GetDomainNameOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFunctionOutcome AppSyncClient::GetFunction(const GetFunctionRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFunction", "Required field: ApiId, is not set");
    return GetFunctionOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ApiId]", false));
  }
  if (!request.FunctionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFunction", "Required field: FunctionId, is not set");
    return GetFunctionOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [FunctionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionId());
  };

  return GetFunctionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetGraphqlApiOutcome AppSyncClient::GetGraphqlApi(const GetGraphqlApiRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGraphqlApi", "Required field: ApiId, is not set");
    return GetGraphqlApiOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
  };

  return GetGraphqlApiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetGraphqlApiEnvironmentVariablesOutcome AppSyncClient::GetGraphqlApiEnvironmentVariables(
    const GetGraphqlApiEnvironmentVariablesRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGraphqlApiEnvironmentVariables", "Required field: ApiId, is not set");
    return GetGraphqlApiEnvironmentVariablesOutcome(Aws::Client::AWSError<AppSyncErrors>(
        AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environmentVariables");
  };

  return GetGraphqlApiEnvironmentVariablesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetIntrospectionSchemaOutcome AppSyncClient::GetIntrospectionSchema(const GetIntrospectionSchemaRequest& request) const {
  AWS_OPERATION_GUARD(GetIntrospectionSchema);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIntrospectionSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIntrospectionSchema", "Required field: ApiId, is not set");
    return GetIntrospectionSchemaOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ApiId]", false));
  }
  if (!request.FormatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIntrospectionSchema", "Required field: Format, is not set");
    return GetIntrospectionSchemaOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Format]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetIntrospectionSchema, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetIntrospectionSchema, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetIntrospectionSchema",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetIntrospectionSchemaOutcome>(
      [&]() -> GetIntrospectionSchemaOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIntrospectionSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/schema");
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET);
        return result.IsSuccess() ? GetIntrospectionSchemaOutcome(GetIntrospectionSchemaResult(result.GetResultWithOwnership()))
                                  : GetIntrospectionSchemaOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetResolverOutcome AppSyncClient::GetResolver(const GetResolverRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResolver", "Required field: ApiId, is not set");
    return GetResolverOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ApiId]", false));
  }
  if (!request.TypeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResolver", "Required field: TypeName, is not set");
    return GetResolverOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [TypeName]", false));
  }
  if (!request.FieldNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResolver", "Required field: FieldName, is not set");
    return GetResolverOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [FieldName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTypeName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resolvers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFieldName());
  };

  return GetResolverOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSchemaCreationStatusOutcome AppSyncClient::GetSchemaCreationStatus(const GetSchemaCreationStatusRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSchemaCreationStatus", "Required field: ApiId, is not set");
    return GetSchemaCreationStatusOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/schemacreation");
  };

  return GetSchemaCreationStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSourceApiAssociationOutcome AppSyncClient::GetSourceApiAssociation(const GetSourceApiAssociationRequest& request) const {
  if (!request.MergedApiIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSourceApiAssociation", "Required field: MergedApiIdentifier, is not set");
    return GetSourceApiAssociationOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [MergedApiIdentifier]", false));
  }
  if (!request.AssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSourceApiAssociation", "Required field: AssociationId, is not set");
    return GetSourceApiAssociationOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AssociationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/mergedApis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMergedApiIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceApiAssociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssociationId());
  };

  return GetSourceApiAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTypeOutcome AppSyncClient::GetType(const GetTypeRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetType", "Required field: ApiId, is not set");
    return GetTypeOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                               "Missing required field [ApiId]", false));
  }
  if (!request.TypeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetType", "Required field: TypeName, is not set");
    return GetTypeOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                               "Missing required field [TypeName]", false));
  }
  if (!request.FormatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetType", "Required field: Format, is not set");
    return GetTypeOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                               "Missing required field [Format]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTypeName());
  };

  return GetTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListApiKeysOutcome AppSyncClient::ListApiKeys(const ListApiKeysRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListApiKeys", "Required field: ApiId, is not set");
    return ListApiKeysOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/apikeys");
  };

  return ListApiKeysOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListApisOutcome AppSyncClient::ListApis(const ListApisRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis");
  };

  return ListApisOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListChannelNamespacesOutcome AppSyncClient::ListChannelNamespaces(const ListChannelNamespacesRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListChannelNamespaces", "Required field: ApiId, is not set");
    return ListChannelNamespacesOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelNamespaces");
  };

  return ListChannelNamespacesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDataSourcesOutcome AppSyncClient::ListDataSources(const ListDataSourcesRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataSources", "Required field: ApiId, is not set");
    return ListDataSourcesOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasources");
  };

  return ListDataSourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDomainNamesOutcome AppSyncClient::ListDomainNames(const ListDomainNamesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/domainnames");
  };

  return ListDomainNamesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListFunctionsOutcome AppSyncClient::ListFunctions(const ListFunctionsRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFunctions", "Required field: ApiId, is not set");
    return ListFunctionsOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/functions");
  };

  return ListFunctionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListGraphqlApisOutcome AppSyncClient::ListGraphqlApis(const ListGraphqlApisRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis");
  };

  return ListGraphqlApisOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListResolversOutcome AppSyncClient::ListResolvers(const ListResolversRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListResolvers", "Required field: ApiId, is not set");
    return ListResolversOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ApiId]", false));
  }
  if (!request.TypeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListResolvers", "Required field: TypeName, is not set");
    return ListResolversOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [TypeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTypeName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resolvers");
  };

  return ListResolversOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListResolversByFunctionOutcome AppSyncClient::ListResolversByFunction(const ListResolversByFunctionRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListResolversByFunction", "Required field: ApiId, is not set");
    return ListResolversByFunctionOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ApiId]", false));
  }
  if (!request.FunctionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListResolversByFunction", "Required field: FunctionId, is not set");
    return ListResolversByFunctionOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [FunctionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resolvers");
  };

  return ListResolversByFunctionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSourceApiAssociationsOutcome AppSyncClient::ListSourceApiAssociations(const ListSourceApiAssociationsRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSourceApiAssociations", "Required field: ApiId, is not set");
    return ListSourceApiAssociationsOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceApiAssociations");
  };

  return ListSourceApiAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome AppSyncClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTypesOutcome AppSyncClient::ListTypes(const ListTypesRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTypes", "Required field: ApiId, is not set");
    return ListTypesOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [ApiId]", false));
  }
  if (!request.FormatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTypes", "Required field: Format, is not set");
    return ListTypesOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [Format]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/types");
  };

  return ListTypesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTypesByAssociationOutcome AppSyncClient::ListTypesByAssociation(const ListTypesByAssociationRequest& request) const {
  if (!request.MergedApiIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTypesByAssociation", "Required field: MergedApiIdentifier, is not set");
    return ListTypesByAssociationOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [MergedApiIdentifier]", false));
  }
  if (!request.AssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTypesByAssociation", "Required field: AssociationId, is not set");
    return ListTypesByAssociationOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AssociationId]", false));
  }
  if (!request.FormatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTypesByAssociation", "Required field: Format, is not set");
    return ListTypesByAssociationOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Format]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/mergedApis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMergedApiIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceApiAssociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssociationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/types");
  };

  return ListTypesByAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PutGraphqlApiEnvironmentVariablesOutcome AppSyncClient::PutGraphqlApiEnvironmentVariables(
    const PutGraphqlApiEnvironmentVariablesRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutGraphqlApiEnvironmentVariables", "Required field: ApiId, is not set");
    return PutGraphqlApiEnvironmentVariablesOutcome(Aws::Client::AWSError<AppSyncErrors>(
        AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environmentVariables");
  };

  return PutGraphqlApiEnvironmentVariablesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartDataSourceIntrospectionOutcome AppSyncClient::StartDataSourceIntrospection(const StartDataSourceIntrospectionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datasources/introspections");
  };

  return StartDataSourceIntrospectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartSchemaCreationOutcome AppSyncClient::StartSchemaCreation(const StartSchemaCreationRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartSchemaCreation", "Required field: ApiId, is not set");
    return StartSchemaCreationOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/schemacreation");
  };

  return StartSchemaCreationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartSchemaMergeOutcome AppSyncClient::StartSchemaMerge(const StartSchemaMergeRequest& request) const {
  if (!request.AssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartSchemaMerge", "Required field: AssociationId, is not set");
    return StartSchemaMergeOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AssociationId]", false));
  }
  if (!request.MergedApiIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartSchemaMerge", "Required field: MergedApiIdentifier, is not set");
    return StartSchemaMergeOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [MergedApiIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/mergedApis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMergedApiIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceApiAssociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssociationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/merge");
  };

  return StartSchemaMergeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome AppSyncClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome AppSyncClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateApiOutcome AppSyncClient::UpdateApi(const UpdateApiRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateApi", "Required field: ApiId, is not set");
    return UpdateApiOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
  };

  return UpdateApiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateApiCacheOutcome AppSyncClient::UpdateApiCache(const UpdateApiCacheRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateApiCache", "Required field: ApiId, is not set");
    return UpdateApiCacheOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ApiCaches/update");
  };

  return UpdateApiCacheOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateApiKeyOutcome AppSyncClient::UpdateApiKey(const UpdateApiKeyRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateApiKey", "Required field: ApiId, is not set");
    return UpdateApiKeyOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ApiId]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateApiKey", "Required field: Id, is not set");
    return UpdateApiKeyOutcome(
        Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/apikeys/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return UpdateApiKeyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateChannelNamespaceOutcome AppSyncClient::UpdateChannelNamespace(const UpdateChannelNamespaceRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateChannelNamespace", "Required field: ApiId, is not set");
    return UpdateChannelNamespaceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ApiId]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateChannelNamespace", "Required field: Name, is not set");
    return UpdateChannelNamespaceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelNamespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return UpdateChannelNamespaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDataSourceOutcome AppSyncClient::UpdateDataSource(const UpdateDataSourceRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataSource", "Required field: ApiId, is not set");
    return UpdateDataSourceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ApiId]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataSource", "Required field: Name, is not set");
    return UpdateDataSourceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return UpdateDataSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDomainNameOutcome AppSyncClient::UpdateDomainName(const UpdateDomainNameRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDomainName", "Required field: DomainName, is not set");
    return UpdateDomainNameOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/domainnames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  };

  return UpdateDomainNameOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateFunctionOutcome AppSyncClient::UpdateFunction(const UpdateFunctionRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFunction", "Required field: ApiId, is not set");
    return UpdateFunctionOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApiId]", false));
  }
  if (!request.FunctionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFunction", "Required field: FunctionId, is not set");
    return UpdateFunctionOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [FunctionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionId());
  };

  return UpdateFunctionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateGraphqlApiOutcome AppSyncClient::UpdateGraphqlApi(const UpdateGraphqlApiRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGraphqlApi", "Required field: ApiId, is not set");
    return UpdateGraphqlApiOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
  };

  return UpdateGraphqlApiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateResolverOutcome AppSyncClient::UpdateResolver(const UpdateResolverRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateResolver", "Required field: ApiId, is not set");
    return UpdateResolverOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApiId]", false));
  }
  if (!request.TypeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateResolver", "Required field: TypeName, is not set");
    return UpdateResolverOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [TypeName]", false));
  }
  if (!request.FieldNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateResolver", "Required field: FieldName, is not set");
    return UpdateResolverOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [FieldName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTypeName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resolvers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFieldName());
  };

  return UpdateResolverOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSourceApiAssociationOutcome AppSyncClient::UpdateSourceApiAssociation(const UpdateSourceApiAssociationRequest& request) const {
  if (!request.AssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSourceApiAssociation", "Required field: AssociationId, is not set");
    return UpdateSourceApiAssociationOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [AssociationId]", false));
  }
  if (!request.MergedApiIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSourceApiAssociation", "Required field: MergedApiIdentifier, is not set");
    return UpdateSourceApiAssociationOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [MergedApiIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/mergedApis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMergedApiIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceApiAssociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssociationId());
  };

  return UpdateSourceApiAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTypeOutcome AppSyncClient::UpdateType(const UpdateTypeRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateType", "Required field: ApiId, is not set");
    return UpdateTypeOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [ApiId]", false));
  }
  if (!request.TypeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateType", "Required field: TypeName, is not set");
    return UpdateTypeOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [TypeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTypeName());
  };

  return UpdateTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
