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
#include <aws/lambda-microvms/LambdaMicrovmsClient.h>
#include <aws/lambda-microvms/LambdaMicrovmsEndpointProvider.h>
#include <aws/lambda-microvms/LambdaMicrovmsErrorMarshaller.h>
#include <aws/lambda-microvms/model/CreateMicrovmAuthTokenRequest.h>
#include <aws/lambda-microvms/model/CreateMicrovmImageRequest.h>
#include <aws/lambda-microvms/model/CreateMicrovmShellAuthTokenRequest.h>
#include <aws/lambda-microvms/model/DeleteMicrovmImageRequest.h>
#include <aws/lambda-microvms/model/DeleteMicrovmImageVersionRequest.h>
#include <aws/lambda-microvms/model/GetMicrovmImageBuildRequest.h>
#include <aws/lambda-microvms/model/GetMicrovmImageRequest.h>
#include <aws/lambda-microvms/model/GetMicrovmImageVersionRequest.h>
#include <aws/lambda-microvms/model/GetMicrovmRequest.h>
#include <aws/lambda-microvms/model/ListManagedMicrovmImageVersionsRequest.h>
#include <aws/lambda-microvms/model/ListManagedMicrovmImagesRequest.h>
#include <aws/lambda-microvms/model/ListMicrovmImageBuildsRequest.h>
#include <aws/lambda-microvms/model/ListMicrovmImageVersionsRequest.h>
#include <aws/lambda-microvms/model/ListMicrovmImagesRequest.h>
#include <aws/lambda-microvms/model/ListMicrovmsRequest.h>
#include <aws/lambda-microvms/model/ListTagsRequest.h>
#include <aws/lambda-microvms/model/ResumeMicrovmRequest.h>
#include <aws/lambda-microvms/model/RunMicrovmRequest.h>
#include <aws/lambda-microvms/model/SuspendMicrovmRequest.h>
#include <aws/lambda-microvms/model/TagResourceRequest.h>
#include <aws/lambda-microvms/model/TerminateMicrovmRequest.h>
#include <aws/lambda-microvms/model/UntagResourceRequest.h>
#include <aws/lambda-microvms/model/UpdateMicrovmImageRequest.h>
#include <aws/lambda-microvms/model/UpdateMicrovmImageVersionRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LambdaMicrovms;
using namespace Aws::LambdaMicrovms::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace LambdaMicrovms {
const char SERVICE_NAME[] = "lambda";
const char ALLOCATION_TAG[] = "LambdaMicrovmsClient";
}  // namespace LambdaMicrovms
}  // namespace Aws
const char* LambdaMicrovmsClient::GetServiceName() { return SERVICE_NAME; }
const char* LambdaMicrovmsClient::GetAllocationTag() { return ALLOCATION_TAG; }

LambdaMicrovmsClient::LambdaMicrovmsClient(const LambdaMicrovms::LambdaMicrovmsClientConfiguration& clientConfiguration,
                                           std::shared_ptr<LambdaMicrovmsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LambdaMicrovmsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LambdaMicrovmsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LambdaMicrovmsClient::LambdaMicrovmsClient(const AWSCredentials& credentials,
                                           std::shared_ptr<LambdaMicrovmsEndpointProviderBase> endpointProvider,
                                           const LambdaMicrovms::LambdaMicrovmsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LambdaMicrovmsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LambdaMicrovmsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LambdaMicrovmsClient::LambdaMicrovmsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<LambdaMicrovmsEndpointProviderBase> endpointProvider,
                                           const LambdaMicrovms::LambdaMicrovmsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LambdaMicrovmsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LambdaMicrovmsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
LambdaMicrovmsClient::LambdaMicrovmsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LambdaMicrovmsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LambdaMicrovmsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LambdaMicrovmsClient::LambdaMicrovmsClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LambdaMicrovmsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LambdaMicrovmsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LambdaMicrovmsClient::LambdaMicrovmsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LambdaMicrovmsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LambdaMicrovmsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
LambdaMicrovmsClient::~LambdaMicrovmsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<LambdaMicrovmsEndpointProviderBase>& LambdaMicrovmsClient::accessEndpointProvider() { return m_endpointProvider; }

void LambdaMicrovmsClient::init(const LambdaMicrovms::LambdaMicrovmsClientConfiguration& config) {
  AWSClient::SetServiceClientName("Lambda Microvms");
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

void LambdaMicrovmsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
LambdaMicrovmsClient::InvokeOperationOutcome LambdaMicrovmsClient::InvokeServiceOperation(
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

CreateMicrovmAuthTokenOutcome LambdaMicrovmsClient::CreateMicrovmAuthToken(const CreateMicrovmAuthTokenRequest& request) const {
  if (!request.MicrovmIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateMicrovmAuthToken", "Required field: MicrovmIdentifier, is not set");
    return CreateMicrovmAuthTokenOutcome(Aws::Client::AWSError<LambdaMicrovmsErrors>(
        LambdaMicrovmsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MicrovmIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-09-09/microvms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMicrovmIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/auth-token");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMicrovmAuthTokenOutcome(result.GetResultWithOwnership())
                            : CreateMicrovmAuthTokenOutcome(std::move(result.GetError()));
}

CreateMicrovmImageOutcome LambdaMicrovmsClient::CreateMicrovmImage(const CreateMicrovmImageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-09-09/microvm-images");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMicrovmImageOutcome(result.GetResultWithOwnership())
                            : CreateMicrovmImageOutcome(std::move(result.GetError()));
}

CreateMicrovmShellAuthTokenOutcome LambdaMicrovmsClient::CreateMicrovmShellAuthToken(
    const CreateMicrovmShellAuthTokenRequest& request) const {
  if (!request.MicrovmIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateMicrovmShellAuthToken", "Required field: MicrovmIdentifier, is not set");
    return CreateMicrovmShellAuthTokenOutcome(Aws::Client::AWSError<LambdaMicrovmsErrors>(
        LambdaMicrovmsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MicrovmIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-09-09/microvms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMicrovmIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/shell-auth-token");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMicrovmShellAuthTokenOutcome(result.GetResultWithOwnership())
                            : CreateMicrovmShellAuthTokenOutcome(std::move(result.GetError()));
}

DeleteMicrovmImageOutcome LambdaMicrovmsClient::DeleteMicrovmImage(const DeleteMicrovmImageRequest& request) const {
  if (!request.ImageIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMicrovmImage", "Required field: ImageIdentifier, is not set");
    return DeleteMicrovmImageOutcome(Aws::Client::AWSError<LambdaMicrovmsErrors>(
        LambdaMicrovmsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-09-09/microvm-images/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImageIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMicrovmImageOutcome(result.GetResultWithOwnership())
                            : DeleteMicrovmImageOutcome(std::move(result.GetError()));
}

DeleteMicrovmImageVersionOutcome LambdaMicrovmsClient::DeleteMicrovmImageVersion(const DeleteMicrovmImageVersionRequest& request) const {
  if (!request.ImageIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMicrovmImageVersion", "Required field: ImageIdentifier, is not set");
    return DeleteMicrovmImageVersionOutcome(Aws::Client::AWSError<LambdaMicrovmsErrors>(
        LambdaMicrovmsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageIdentifier]", false));
  }
  if (!request.ImageVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMicrovmImageVersion", "Required field: ImageVersion, is not set");
    return DeleteMicrovmImageVersionOutcome(Aws::Client::AWSError<LambdaMicrovmsErrors>(
        LambdaMicrovmsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-09-09/microvm-images/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImageIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImageVersion());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMicrovmImageVersionOutcome(result.GetResultWithOwnership())
                            : DeleteMicrovmImageVersionOutcome(std::move(result.GetError()));
}

GetMicrovmOutcome LambdaMicrovmsClient::GetMicrovm(const GetMicrovmRequest& request) const {
  if (!request.MicrovmIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMicrovm", "Required field: MicrovmIdentifier, is not set");
    return GetMicrovmOutcome(Aws::Client::AWSError<LambdaMicrovmsErrors>(LambdaMicrovmsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [MicrovmIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-09-09/microvms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMicrovmIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMicrovmOutcome(result.GetResultWithOwnership()) : GetMicrovmOutcome(std::move(result.GetError()));
}

GetMicrovmImageOutcome LambdaMicrovmsClient::GetMicrovmImage(const GetMicrovmImageRequest& request) const {
  if (!request.ImageIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMicrovmImage", "Required field: ImageIdentifier, is not set");
    return GetMicrovmImageOutcome(Aws::Client::AWSError<LambdaMicrovmsErrors>(LambdaMicrovmsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ImageIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-09-09/microvm-images/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImageIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMicrovmImageOutcome(result.GetResultWithOwnership())
                            : GetMicrovmImageOutcome(std::move(result.GetError()));
}

GetMicrovmImageBuildOutcome LambdaMicrovmsClient::GetMicrovmImageBuild(const GetMicrovmImageBuildRequest& request) const {
  if (!request.ImageIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMicrovmImageBuild", "Required field: ImageIdentifier, is not set");
    return GetMicrovmImageBuildOutcome(Aws::Client::AWSError<LambdaMicrovmsErrors>(
        LambdaMicrovmsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageIdentifier]", false));
  }
  if (!request.ImageVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMicrovmImageBuild", "Required field: ImageVersion, is not set");
    return GetMicrovmImageBuildOutcome(Aws::Client::AWSError<LambdaMicrovmsErrors>(
        LambdaMicrovmsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageVersion]", false));
  }
  if (!request.BuildIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMicrovmImageBuild", "Required field: BuildId, is not set");
    return GetMicrovmImageBuildOutcome(Aws::Client::AWSError<LambdaMicrovmsErrors>(
        LambdaMicrovmsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BuildId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-09-09/microvm-images/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImageIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImageVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/builds/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBuildId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMicrovmImageBuildOutcome(result.GetResultWithOwnership())
                            : GetMicrovmImageBuildOutcome(std::move(result.GetError()));
}

GetMicrovmImageVersionOutcome LambdaMicrovmsClient::GetMicrovmImageVersion(const GetMicrovmImageVersionRequest& request) const {
  if (!request.ImageIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMicrovmImageVersion", "Required field: ImageIdentifier, is not set");
    return GetMicrovmImageVersionOutcome(Aws::Client::AWSError<LambdaMicrovmsErrors>(
        LambdaMicrovmsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageIdentifier]", false));
  }
  if (!request.ImageVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMicrovmImageVersion", "Required field: ImageVersion, is not set");
    return GetMicrovmImageVersionOutcome(Aws::Client::AWSError<LambdaMicrovmsErrors>(
        LambdaMicrovmsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-09-09/microvm-images/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImageIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImageVersion());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMicrovmImageVersionOutcome(result.GetResultWithOwnership())
                            : GetMicrovmImageVersionOutcome(std::move(result.GetError()));
}

ListManagedMicrovmImageVersionsOutcome LambdaMicrovmsClient::ListManagedMicrovmImageVersions(
    const ListManagedMicrovmImageVersionsRequest& request) const {
  if (!request.ImageIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListManagedMicrovmImageVersions", "Required field: ImageIdentifier, is not set");
    return ListManagedMicrovmImageVersionsOutcome(Aws::Client::AWSError<LambdaMicrovmsErrors>(
        LambdaMicrovmsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-09-09/managed-microvm-images/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImageIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListManagedMicrovmImageVersionsOutcome(result.GetResultWithOwnership())
                            : ListManagedMicrovmImageVersionsOutcome(std::move(result.GetError()));
}

ListManagedMicrovmImagesOutcome LambdaMicrovmsClient::ListManagedMicrovmImages(const ListManagedMicrovmImagesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-09-09/managed-microvm-images");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListManagedMicrovmImagesOutcome(result.GetResultWithOwnership())
                            : ListManagedMicrovmImagesOutcome(std::move(result.GetError()));
}

ListMicrovmImageBuildsOutcome LambdaMicrovmsClient::ListMicrovmImageBuilds(const ListMicrovmImageBuildsRequest& request) const {
  if (!request.ImageIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMicrovmImageBuilds", "Required field: ImageIdentifier, is not set");
    return ListMicrovmImageBuildsOutcome(Aws::Client::AWSError<LambdaMicrovmsErrors>(
        LambdaMicrovmsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageIdentifier]", false));
  }
  if (!request.ImageVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMicrovmImageBuilds", "Required field: ImageVersion, is not set");
    return ListMicrovmImageBuildsOutcome(Aws::Client::AWSError<LambdaMicrovmsErrors>(
        LambdaMicrovmsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-09-09/microvm-images/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImageIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImageVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/builds");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMicrovmImageBuildsOutcome(result.GetResultWithOwnership())
                            : ListMicrovmImageBuildsOutcome(std::move(result.GetError()));
}

ListMicrovmImageVersionsOutcome LambdaMicrovmsClient::ListMicrovmImageVersions(const ListMicrovmImageVersionsRequest& request) const {
  if (!request.ImageIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMicrovmImageVersions", "Required field: ImageIdentifier, is not set");
    return ListMicrovmImageVersionsOutcome(Aws::Client::AWSError<LambdaMicrovmsErrors>(
        LambdaMicrovmsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-09-09/microvm-images/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImageIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMicrovmImageVersionsOutcome(result.GetResultWithOwnership())
                            : ListMicrovmImageVersionsOutcome(std::move(result.GetError()));
}

ListMicrovmImagesOutcome LambdaMicrovmsClient::ListMicrovmImages(const ListMicrovmImagesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-09-09/microvm-images");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMicrovmImagesOutcome(result.GetResultWithOwnership())
                            : ListMicrovmImagesOutcome(std::move(result.GetError()));
}

ListMicrovmsOutcome LambdaMicrovmsClient::ListMicrovms(const ListMicrovmsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-09-09/microvms");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMicrovmsOutcome(result.GetResultWithOwnership()) : ListMicrovmsOutcome(std::move(result.GetError()));
}

ListTagsOutcome LambdaMicrovmsClient::ListTags(const ListTagsRequest& request) const {
  if (!request.ResourceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTags", "Required field: Resource, is not set");
    return ListTagsOutcome(Aws::Client::AWSError<LambdaMicrovmsErrors>(LambdaMicrovmsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

ResumeMicrovmOutcome LambdaMicrovmsClient::ResumeMicrovm(const ResumeMicrovmRequest& request) const {
  if (!request.MicrovmIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ResumeMicrovm", "Required field: MicrovmIdentifier, is not set");
    return ResumeMicrovmOutcome(Aws::Client::AWSError<LambdaMicrovmsErrors>(LambdaMicrovmsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [MicrovmIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-09-09/microvms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMicrovmIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resume");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResumeMicrovmOutcome(result.GetResultWithOwnership()) : ResumeMicrovmOutcome(std::move(result.GetError()));
}

RunMicrovmOutcome LambdaMicrovmsClient::RunMicrovm(const RunMicrovmRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-09-09/microvms");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RunMicrovmOutcome(result.GetResultWithOwnership()) : RunMicrovmOutcome(std::move(result.GetError()));
}

SuspendMicrovmOutcome LambdaMicrovmsClient::SuspendMicrovm(const SuspendMicrovmRequest& request) const {
  if (!request.MicrovmIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SuspendMicrovm", "Required field: MicrovmIdentifier, is not set");
    return SuspendMicrovmOutcome(Aws::Client::AWSError<LambdaMicrovmsErrors>(LambdaMicrovmsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [MicrovmIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-09-09/microvms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMicrovmIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/suspend");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SuspendMicrovmOutcome(result.GetResultWithOwnership()) : SuspendMicrovmOutcome(std::move(result.GetError()));
}

TagResourceOutcome LambdaMicrovmsClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: Resource, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<LambdaMicrovmsErrors>(LambdaMicrovmsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

TerminateMicrovmOutcome LambdaMicrovmsClient::TerminateMicrovm(const TerminateMicrovmRequest& request) const {
  if (!request.MicrovmIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TerminateMicrovm", "Required field: MicrovmIdentifier, is not set");
    return TerminateMicrovmOutcome(Aws::Client::AWSError<LambdaMicrovmsErrors>(LambdaMicrovmsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [MicrovmIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-09-09/microvms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMicrovmIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? TerminateMicrovmOutcome(result.GetResultWithOwnership())
                            : TerminateMicrovmOutcome(std::move(result.GetError()));
}

UntagResourceOutcome LambdaMicrovmsClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: Resource, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LambdaMicrovmsErrors>(LambdaMicrovmsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Resource]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LambdaMicrovmsErrors>(LambdaMicrovmsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

UpdateMicrovmImageOutcome LambdaMicrovmsClient::UpdateMicrovmImage(const UpdateMicrovmImageRequest& request) const {
  if (!request.ImageIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMicrovmImage", "Required field: ImageIdentifier, is not set");
    return UpdateMicrovmImageOutcome(Aws::Client::AWSError<LambdaMicrovmsErrors>(
        LambdaMicrovmsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-09-09/microvm-images/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImageIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateMicrovmImageOutcome(result.GetResultWithOwnership())
                            : UpdateMicrovmImageOutcome(std::move(result.GetError()));
}

UpdateMicrovmImageVersionOutcome LambdaMicrovmsClient::UpdateMicrovmImageVersion(const UpdateMicrovmImageVersionRequest& request) const {
  if (!request.ImageIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMicrovmImageVersion", "Required field: ImageIdentifier, is not set");
    return UpdateMicrovmImageVersionOutcome(Aws::Client::AWSError<LambdaMicrovmsErrors>(
        LambdaMicrovmsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageIdentifier]", false));
  }
  if (!request.ImageVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMicrovmImageVersion", "Required field: ImageVersion, is not set");
    return UpdateMicrovmImageVersionOutcome(Aws::Client::AWSError<LambdaMicrovmsErrors>(
        LambdaMicrovmsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2025-09-09/microvm-images/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImageIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImageVersion());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateMicrovmImageVersionOutcome(result.GetResultWithOwnership())
                            : UpdateMicrovmImageVersionOutcome(std::move(result.GetError()));
}
