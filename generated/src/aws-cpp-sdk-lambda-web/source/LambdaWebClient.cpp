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
#include <aws/lambda-web/LambdaWebClient.h>
#include <aws/lambda-web/LambdaWebEndpointProvider.h>
#include <aws/lambda-web/LambdaWebErrorMarshaller.h>
#include <aws/lambda-web/model/CreateWebFunctionEndpointRequest.h>
#include <aws/lambda-web/model/CreateWebFunctionRequest.h>
#include <aws/lambda-web/model/CreateWebFunctionRevisionRequest.h>
#include <aws/lambda-web/model/DeleteResourcePolicyRequest.h>
#include <aws/lambda-web/model/DeleteWebFunctionEndpointRequest.h>
#include <aws/lambda-web/model/DeleteWebFunctionRequest.h>
#include <aws/lambda-web/model/DeleteWebFunctionRevisionRequest.h>
#include <aws/lambda-web/model/GetResourcePolicyRequest.h>
#include <aws/lambda-web/model/GetWebAccountSettingsRequest.h>
#include <aws/lambda-web/model/GetWebFunctionEndpointRequest.h>
#include <aws/lambda-web/model/GetWebFunctionRequest.h>
#include <aws/lambda-web/model/GetWebFunctionRevisionRequest.h>
#include <aws/lambda-web/model/ListTagsRequest.h>
#include <aws/lambda-web/model/ListWebFunctionEndpointsRequest.h>
#include <aws/lambda-web/model/ListWebFunctionRevisionsRequest.h>
#include <aws/lambda-web/model/ListWebFunctionsRequest.h>
#include <aws/lambda-web/model/PutResourcePolicyRequest.h>
#include <aws/lambda-web/model/TagResourceRequest.h>
#include <aws/lambda-web/model/UntagResourceRequest.h>
#include <aws/lambda-web/model/UpdateWebFunctionEndpointRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LambdaWeb;
using namespace Aws::LambdaWeb::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace LambdaWeb {
const char SERVICE_NAME[] = "lambda";
const char ALLOCATION_TAG[] = "LambdaWebClient";
}  // namespace LambdaWeb
}  // namespace Aws
const char* LambdaWebClient::GetServiceName() { return SERVICE_NAME; }
const char* LambdaWebClient::GetAllocationTag() { return ALLOCATION_TAG; }

LambdaWebClient::LambdaWebClient(const LambdaWeb::LambdaWebClientConfiguration& clientConfiguration,
                                 std::shared_ptr<LambdaWebEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LambdaWebErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LambdaWebEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LambdaWebClient::LambdaWebClient(const AWSCredentials& credentials, std::shared_ptr<LambdaWebEndpointProviderBase> endpointProvider,
                                 const LambdaWeb::LambdaWebClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LambdaWebErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LambdaWebEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LambdaWebClient::LambdaWebClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<LambdaWebEndpointProviderBase> endpointProvider,
                                 const LambdaWeb::LambdaWebClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LambdaWebErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LambdaWebEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
LambdaWebClient::LambdaWebClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LambdaWebErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LambdaWebEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LambdaWebClient::LambdaWebClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LambdaWebErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LambdaWebEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LambdaWebClient::LambdaWebClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LambdaWebErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LambdaWebEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
LambdaWebClient::~LambdaWebClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<LambdaWebEndpointProviderBase>& LambdaWebClient::accessEndpointProvider() { return m_endpointProvider; }

void LambdaWebClient::init(const LambdaWeb::LambdaWebClientConfiguration& config) {
  AWSClient::SetServiceClientName("Lambda Web");
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

void LambdaWebClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
LambdaWebClient::InvokeOperationOutcome LambdaWebClient::InvokeServiceOperation(
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

CreateWebFunctionOutcome LambdaWebClient::CreateWebFunction(const CreateWebFunctionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-03-07/web-functions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateWebFunctionOutcome(result.GetResultWithOwnership())
                            : CreateWebFunctionOutcome(std::move(result.GetError()));
}

CreateWebFunctionEndpointOutcome LambdaWebClient::CreateWebFunctionEndpoint(const CreateWebFunctionEndpointRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateWebFunctionEndpoint", "Required field: FunctionName, is not set");
    return CreateWebFunctionEndpointOutcome(Aws::Client::AWSError<LambdaWebErrors>(LambdaWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-03-07/web-functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateWebFunctionEndpointOutcome(result.GetResultWithOwnership())
                            : CreateWebFunctionEndpointOutcome(std::move(result.GetError()));
}

CreateWebFunctionRevisionOutcome LambdaWebClient::CreateWebFunctionRevision(const CreateWebFunctionRevisionRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateWebFunctionRevision", "Required field: FunctionName, is not set");
    return CreateWebFunctionRevisionOutcome(Aws::Client::AWSError<LambdaWebErrors>(LambdaWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-03-07/web-functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/revisions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateWebFunctionRevisionOutcome(result.GetResultWithOwnership())
                            : CreateWebFunctionRevisionOutcome(std::move(result.GetError()));
}

DeleteResourcePolicyOutcome LambdaWebClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteResourcePolicy", "Required field: ResourceArn, is not set");
    return DeleteResourcePolicyOutcome(Aws::Client::AWSError<LambdaWebErrors>(LambdaWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-03-07/resource-policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteResourcePolicyOutcome(result.GetResultWithOwnership())
                            : DeleteResourcePolicyOutcome(std::move(result.GetError()));
}

DeleteWebFunctionOutcome LambdaWebClient::DeleteWebFunction(const DeleteWebFunctionRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWebFunction", "Required field: FunctionName, is not set");
    return DeleteWebFunctionOutcome(Aws::Client::AWSError<LambdaWebErrors>(LambdaWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-03-07/web-functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteWebFunctionOutcome(result.GetResultWithOwnership())
                            : DeleteWebFunctionOutcome(std::move(result.GetError()));
}

DeleteWebFunctionEndpointOutcome LambdaWebClient::DeleteWebFunctionEndpoint(const DeleteWebFunctionEndpointRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWebFunctionEndpoint", "Required field: FunctionName, is not set");
    return DeleteWebFunctionEndpointOutcome(Aws::Client::AWSError<LambdaWebErrors>(LambdaWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [FunctionName]", false));
  }
  if (!request.EndpointNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWebFunctionEndpoint", "Required field: EndpointName, is not set");
    return DeleteWebFunctionEndpointOutcome(Aws::Client::AWSError<LambdaWebErrors>(LambdaWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [EndpointName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-03-07/web-functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEndpointName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteWebFunctionEndpointOutcome(result.GetResultWithOwnership())
                            : DeleteWebFunctionEndpointOutcome(std::move(result.GetError()));
}

DeleteWebFunctionRevisionOutcome LambdaWebClient::DeleteWebFunctionRevision(const DeleteWebFunctionRevisionRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWebFunctionRevision", "Required field: FunctionName, is not set");
    return DeleteWebFunctionRevisionOutcome(Aws::Client::AWSError<LambdaWebErrors>(LambdaWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [FunctionName]", false));
  }
  if (!request.RevisionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWebFunctionRevision", "Required field: RevisionId, is not set");
    return DeleteWebFunctionRevisionOutcome(Aws::Client::AWSError<LambdaWebErrors>(LambdaWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [RevisionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-03-07/web-functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/revisions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRevisionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteWebFunctionRevisionOutcome(result.GetResultWithOwnership())
                            : DeleteWebFunctionRevisionOutcome(std::move(result.GetError()));
}

GetResourcePolicyOutcome LambdaWebClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourcePolicy", "Required field: ResourceArn, is not set");
    return GetResourcePolicyOutcome(Aws::Client::AWSError<LambdaWebErrors>(LambdaWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-03-07/resource-policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetResourcePolicyOutcome(result.GetResultWithOwnership())
                            : GetResourcePolicyOutcome(std::move(result.GetError()));
}

GetWebAccountSettingsOutcome LambdaWebClient::GetWebAccountSettings(const GetWebAccountSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-03-07/web-account-settings");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetWebAccountSettingsOutcome(result.GetResultWithOwnership())
                            : GetWebAccountSettingsOutcome(std::move(result.GetError()));
}

GetWebFunctionOutcome LambdaWebClient::GetWebFunction(const GetWebFunctionRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWebFunction", "Required field: FunctionName, is not set");
    return GetWebFunctionOutcome(Aws::Client::AWSError<LambdaWebErrors>(LambdaWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-03-07/web-functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetWebFunctionOutcome(result.GetResultWithOwnership()) : GetWebFunctionOutcome(std::move(result.GetError()));
}

GetWebFunctionEndpointOutcome LambdaWebClient::GetWebFunctionEndpoint(const GetWebFunctionEndpointRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWebFunctionEndpoint", "Required field: FunctionName, is not set");
    return GetWebFunctionEndpointOutcome(Aws::Client::AWSError<LambdaWebErrors>(LambdaWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [FunctionName]", false));
  }
  if (!request.EndpointNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWebFunctionEndpoint", "Required field: EndpointName, is not set");
    return GetWebFunctionEndpointOutcome(Aws::Client::AWSError<LambdaWebErrors>(LambdaWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [EndpointName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-03-07/web-functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEndpointName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetWebFunctionEndpointOutcome(result.GetResultWithOwnership())
                            : GetWebFunctionEndpointOutcome(std::move(result.GetError()));
}

GetWebFunctionRevisionOutcome LambdaWebClient::GetWebFunctionRevision(const GetWebFunctionRevisionRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWebFunctionRevision", "Required field: FunctionName, is not set");
    return GetWebFunctionRevisionOutcome(Aws::Client::AWSError<LambdaWebErrors>(LambdaWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [FunctionName]", false));
  }
  if (!request.RevisionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWebFunctionRevision", "Required field: RevisionId, is not set");
    return GetWebFunctionRevisionOutcome(Aws::Client::AWSError<LambdaWebErrors>(LambdaWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [RevisionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-03-07/web-functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/revisions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRevisionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetWebFunctionRevisionOutcome(result.GetResultWithOwnership())
                            : GetWebFunctionRevisionOutcome(std::move(result.GetError()));
}

ListTagsOutcome LambdaWebClient::ListTags(const ListTagsRequest& request) const {
  if (!request.ResourceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTags", "Required field: Resource, is not set");
    return ListTagsOutcome(Aws::Client::AWSError<LambdaWebErrors>(LambdaWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [Resource]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-03-07/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResource());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsOutcome(result.GetResultWithOwnership()) : ListTagsOutcome(std::move(result.GetError()));
}

ListWebFunctionEndpointsOutcome LambdaWebClient::ListWebFunctionEndpoints(const ListWebFunctionEndpointsRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWebFunctionEndpoints", "Required field: FunctionName, is not set");
    return ListWebFunctionEndpointsOutcome(Aws::Client::AWSError<LambdaWebErrors>(LambdaWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-03-07/web-functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-endpoints");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListWebFunctionEndpointsOutcome(result.GetResultWithOwnership())
                            : ListWebFunctionEndpointsOutcome(std::move(result.GetError()));
}

ListWebFunctionRevisionsOutcome LambdaWebClient::ListWebFunctionRevisions(const ListWebFunctionRevisionsRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWebFunctionRevisions", "Required field: FunctionName, is not set");
    return ListWebFunctionRevisionsOutcome(Aws::Client::AWSError<LambdaWebErrors>(LambdaWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [FunctionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-03-07/web-functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-revisions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListWebFunctionRevisionsOutcome(result.GetResultWithOwnership())
                            : ListWebFunctionRevisionsOutcome(std::move(result.GetError()));
}

ListWebFunctionsOutcome LambdaWebClient::ListWebFunctions(const ListWebFunctionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-03-07/web-functions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListWebFunctionsOutcome(result.GetResultWithOwnership())
                            : ListWebFunctionsOutcome(std::move(result.GetError()));
}

PutResourcePolicyOutcome LambdaWebClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutResourcePolicy", "Required field: ResourceArn, is not set");
    return PutResourcePolicyOutcome(Aws::Client::AWSError<LambdaWebErrors>(LambdaWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-03-07/resource-policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutResourcePolicyOutcome(result.GetResultWithOwnership())
                            : PutResourcePolicyOutcome(std::move(result.GetError()));
}

TagResourceOutcome LambdaWebClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: Resource, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<LambdaWebErrors>(LambdaWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [Resource]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-03-07/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResource());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome LambdaWebClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: Resource, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LambdaWebErrors>(LambdaWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [Resource]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LambdaWebErrors>(LambdaWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-03-07/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResource());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateWebFunctionEndpointOutcome LambdaWebClient::UpdateWebFunctionEndpoint(const UpdateWebFunctionEndpointRequest& request) const {
  if (!request.FunctionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWebFunctionEndpoint", "Required field: FunctionName, is not set");
    return UpdateWebFunctionEndpointOutcome(Aws::Client::AWSError<LambdaWebErrors>(LambdaWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [FunctionName]", false));
  }
  if (!request.EndpointNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWebFunctionEndpoint", "Required field: EndpointName, is not set");
    return UpdateWebFunctionEndpointOutcome(Aws::Client::AWSError<LambdaWebErrors>(LambdaWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [EndpointName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-03-07/web-functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEndpointName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateWebFunctionEndpointOutcome(result.GetResultWithOwnership())
                            : UpdateWebFunctionEndpointOutcome(std::move(result.GetError()));
}
