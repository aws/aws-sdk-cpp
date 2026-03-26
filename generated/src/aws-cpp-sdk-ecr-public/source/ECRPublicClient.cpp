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
#include <aws/ecr-public/ECRPublicClient.h>
#include <aws/ecr-public/ECRPublicEndpointProvider.h>
#include <aws/ecr-public/ECRPublicErrorMarshaller.h>
#include <aws/ecr-public/model/BatchCheckLayerAvailabilityRequest.h>
#include <aws/ecr-public/model/BatchDeleteImageRequest.h>
#include <aws/ecr-public/model/CompleteLayerUploadRequest.h>
#include <aws/ecr-public/model/CreateRepositoryRequest.h>
#include <aws/ecr-public/model/DeleteRepositoryPolicyRequest.h>
#include <aws/ecr-public/model/DeleteRepositoryRequest.h>
#include <aws/ecr-public/model/DescribeImageTagsRequest.h>
#include <aws/ecr-public/model/DescribeImagesRequest.h>
#include <aws/ecr-public/model/DescribeRegistriesRequest.h>
#include <aws/ecr-public/model/DescribeRepositoriesRequest.h>
#include <aws/ecr-public/model/GetAuthorizationTokenRequest.h>
#include <aws/ecr-public/model/GetRegistryCatalogDataRequest.h>
#include <aws/ecr-public/model/GetRepositoryCatalogDataRequest.h>
#include <aws/ecr-public/model/GetRepositoryPolicyRequest.h>
#include <aws/ecr-public/model/InitiateLayerUploadRequest.h>
#include <aws/ecr-public/model/ListTagsForResourceRequest.h>
#include <aws/ecr-public/model/PutImageRequest.h>
#include <aws/ecr-public/model/PutRegistryCatalogDataRequest.h>
#include <aws/ecr-public/model/PutRepositoryCatalogDataRequest.h>
#include <aws/ecr-public/model/SetRepositoryPolicyRequest.h>
#include <aws/ecr-public/model/TagResourceRequest.h>
#include <aws/ecr-public/model/UntagResourceRequest.h>
#include <aws/ecr-public/model/UploadLayerPartRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ECRPublic;
using namespace Aws::ECRPublic::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ECRPublic {
const char SERVICE_NAME[] = "ecr-public";
const char ALLOCATION_TAG[] = "ECRPublicClient";
}  // namespace ECRPublic
}  // namespace Aws
const char* ECRPublicClient::GetServiceName() { return SERVICE_NAME; }
const char* ECRPublicClient::GetAllocationTag() { return ALLOCATION_TAG; }

ECRPublicClient::ECRPublicClient(const ECRPublic::ECRPublicClientConfiguration& clientConfiguration,
                                 std::shared_ptr<ECRPublicEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ECRPublicErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ECRPublicEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ECRPublicClient::ECRPublicClient(const AWSCredentials& credentials, std::shared_ptr<ECRPublicEndpointProviderBase> endpointProvider,
                                 const ECRPublic::ECRPublicClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ECRPublicErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ECRPublicEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ECRPublicClient::ECRPublicClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<ECRPublicEndpointProviderBase> endpointProvider,
                                 const ECRPublic::ECRPublicClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ECRPublicErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ECRPublicEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ECRPublicClient::ECRPublicClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ECRPublicErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ECRPublicEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ECRPublicClient::ECRPublicClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ECRPublicErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ECRPublicEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ECRPublicClient::ECRPublicClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ECRPublicErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ECRPublicEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ECRPublicClient::~ECRPublicClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ECRPublicEndpointProviderBase>& ECRPublicClient::accessEndpointProvider() { return m_endpointProvider; }

void ECRPublicClient::init(const ECRPublic::ECRPublicClientConfiguration& config) {
  AWSClient::SetServiceClientName("ECR PUBLIC");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "ecr-public");
}

void ECRPublicClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ECRPublicClient::InvokeOperationOutcome ECRPublicClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

BatchCheckLayerAvailabilityOutcome ECRPublicClient::BatchCheckLayerAvailability(const BatchCheckLayerAvailabilityRequest& request) const {
  return BatchCheckLayerAvailabilityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDeleteImageOutcome ECRPublicClient::BatchDeleteImage(const BatchDeleteImageRequest& request) const {
  return BatchDeleteImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CompleteLayerUploadOutcome ECRPublicClient::CompleteLayerUpload(const CompleteLayerUploadRequest& request) const {
  return CompleteLayerUploadOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRepositoryOutcome ECRPublicClient::CreateRepository(const CreateRepositoryRequest& request) const {
  return CreateRepositoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRepositoryOutcome ECRPublicClient::DeleteRepository(const DeleteRepositoryRequest& request) const {
  return DeleteRepositoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRepositoryPolicyOutcome ECRPublicClient::DeleteRepositoryPolicy(const DeleteRepositoryPolicyRequest& request) const {
  return DeleteRepositoryPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeImageTagsOutcome ECRPublicClient::DescribeImageTags(const DescribeImageTagsRequest& request) const {
  return DescribeImageTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeImagesOutcome ECRPublicClient::DescribeImages(const DescribeImagesRequest& request) const {
  return DescribeImagesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRegistriesOutcome ECRPublicClient::DescribeRegistries(const DescribeRegistriesRequest& request) const {
  return DescribeRegistriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRepositoriesOutcome ECRPublicClient::DescribeRepositories(const DescribeRepositoriesRequest& request) const {
  return DescribeRepositoriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAuthorizationTokenOutcome ECRPublicClient::GetAuthorizationToken(const GetAuthorizationTokenRequest& request) const {
  return GetAuthorizationTokenOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRegistryCatalogDataOutcome ECRPublicClient::GetRegistryCatalogData(const GetRegistryCatalogDataRequest& request) const {
  return GetRegistryCatalogDataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRepositoryCatalogDataOutcome ECRPublicClient::GetRepositoryCatalogData(const GetRepositoryCatalogDataRequest& request) const {
  return GetRepositoryCatalogDataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRepositoryPolicyOutcome ECRPublicClient::GetRepositoryPolicy(const GetRepositoryPolicyRequest& request) const {
  return GetRepositoryPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

InitiateLayerUploadOutcome ECRPublicClient::InitiateLayerUpload(const InitiateLayerUploadRequest& request) const {
  return InitiateLayerUploadOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome ECRPublicClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutImageOutcome ECRPublicClient::PutImage(const PutImageRequest& request) const {
  return PutImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutRegistryCatalogDataOutcome ECRPublicClient::PutRegistryCatalogData(const PutRegistryCatalogDataRequest& request) const {
  return PutRegistryCatalogDataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutRepositoryCatalogDataOutcome ECRPublicClient::PutRepositoryCatalogData(const PutRepositoryCatalogDataRequest& request) const {
  return PutRepositoryCatalogDataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetRepositoryPolicyOutcome ECRPublicClient::SetRepositoryPolicy(const SetRepositoryPolicyRequest& request) const {
  return SetRepositoryPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome ECRPublicClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome ECRPublicClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UploadLayerPartOutcome ECRPublicClient::UploadLayerPart(const UploadLayerPartRequest& request) const {
  return UploadLayerPartOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
