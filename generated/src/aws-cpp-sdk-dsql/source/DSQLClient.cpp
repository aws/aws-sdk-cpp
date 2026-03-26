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
#include <aws/dsql/DSQLClient.h>
#include <aws/dsql/DSQLEndpointProvider.h>
#include <aws/dsql/DSQLErrorMarshaller.h>
#include <aws/dsql/model/CreateClusterRequest.h>
#include <aws/dsql/model/DeleteClusterPolicyRequest.h>
#include <aws/dsql/model/DeleteClusterRequest.h>
#include <aws/dsql/model/GetClusterPolicyRequest.h>
#include <aws/dsql/model/GetClusterRequest.h>
#include <aws/dsql/model/GetVpcEndpointServiceNameRequest.h>
#include <aws/dsql/model/ListClustersRequest.h>
#include <aws/dsql/model/ListTagsForResourceRequest.h>
#include <aws/dsql/model/PutClusterPolicyRequest.h>
#include <aws/dsql/model/TagResourceRequest.h>
#include <aws/dsql/model/UntagResourceRequest.h>
#include <aws/dsql/model/UpdateClusterRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DSQL;
using namespace Aws::DSQL::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace DSQL {
const char SERVICE_NAME[] = "dsql";
const char ALLOCATION_TAG[] = "DSQLClient";
}  // namespace DSQL
}  // namespace Aws
const char* DSQLClient::GetServiceName() { return SERVICE_NAME; }
const char* DSQLClient::GetAllocationTag() { return ALLOCATION_TAG; }

DSQLClient::DSQLClient(const DSQL::DSQLClientConfiguration& clientConfiguration, std::shared_ptr<DSQLEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DSQLErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DSQLEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DSQLClient::DSQLClient(const AWSCredentials& credentials, std::shared_ptr<DSQLEndpointProviderBase> endpointProvider,
                       const DSQL::DSQLClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DSQLErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DSQLEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DSQLClient::DSQLClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<DSQLEndpointProviderBase> endpointProvider, const DSQL::DSQLClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DSQLErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DSQLEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
DSQLClient::DSQLClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DSQLErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DSQLEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DSQLClient::DSQLClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DSQLErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DSQLEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DSQLClient::DSQLClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DSQLErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DSQLEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
DSQLClient::~DSQLClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<DSQLEndpointProviderBase>& DSQLClient::accessEndpointProvider() { return m_endpointProvider; }

void DSQLClient::init(const DSQL::DSQLClientConfiguration& config) {
  AWSClient::SetServiceClientName("DSQL");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "dsql");
}

void DSQLClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
DSQLClient::InvokeOperationOutcome DSQLClient::InvokeServiceOperation(
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

CreateClusterOutcome DSQLClient::CreateCluster(const CreateClusterRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateClusterOutcome(result.GetResultWithOwnership()) : CreateClusterOutcome(std::move(result.GetError()));
}

DeleteClusterOutcome DSQLClient::DeleteCluster(const DeleteClusterRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCluster", "Required field: Identifier, is not set");
    return DeleteClusterOutcome(Aws::Client::AWSError<DSQLErrors>(DSQLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteClusterOutcome(result.GetResultWithOwnership()) : DeleteClusterOutcome(std::move(result.GetError()));
}

DeleteClusterPolicyOutcome DSQLClient::DeleteClusterPolicy(const DeleteClusterPolicyRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteClusterPolicy", "Required field: Identifier, is not set");
    return DeleteClusterPolicyOutcome(Aws::Client::AWSError<DSQLErrors>(DSQLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteClusterPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteClusterPolicyOutcome(std::move(result.GetError()));
}

GetClusterOutcome DSQLClient::GetCluster(const GetClusterRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCluster", "Required field: Identifier, is not set");
    return GetClusterOutcome(Aws::Client::AWSError<DSQLErrors>(DSQLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                               "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetClusterOutcome(result.GetResultWithOwnership()) : GetClusterOutcome(std::move(result.GetError()));
}

GetClusterPolicyOutcome DSQLClient::GetClusterPolicy(const GetClusterPolicyRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetClusterPolicy", "Required field: Identifier, is not set");
    return GetClusterPolicyOutcome(Aws::Client::AWSError<DSQLErrors>(DSQLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetClusterPolicyOutcome(result.GetResultWithOwnership())
                            : GetClusterPolicyOutcome(std::move(result.GetError()));
}

GetVpcEndpointServiceNameOutcome DSQLClient::GetVpcEndpointServiceName(const GetVpcEndpointServiceNameRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVpcEndpointServiceName", "Required field: Identifier, is not set");
    return GetVpcEndpointServiceNameOutcome(Aws::Client::AWSError<DSQLErrors>(DSQLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vpc-endpoint-service-name");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetVpcEndpointServiceNameOutcome(result.GetResultWithOwnership())
                            : GetVpcEndpointServiceNameOutcome(std::move(result.GetError()));
}

ListClustersOutcome DSQLClient::ListClusters(const ListClustersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListClustersOutcome(result.GetResultWithOwnership()) : ListClustersOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome DSQLClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<DSQLErrors>(DSQLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceArn]", false));
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

PutClusterPolicyOutcome DSQLClient::PutClusterPolicy(const PutClusterPolicyRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutClusterPolicy", "Required field: Identifier, is not set");
    return PutClusterPolicyOutcome(Aws::Client::AWSError<DSQLErrors>(DSQLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutClusterPolicyOutcome(result.GetResultWithOwnership())
                            : PutClusterPolicyOutcome(std::move(result.GetError()));
}

TagResourceOutcome DSQLClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<DSQLErrors>(DSQLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

UntagResourceOutcome DSQLClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<DSQLErrors>(DSQLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(
        Aws::Client::AWSError<DSQLErrors>(DSQLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateClusterOutcome DSQLClient::UpdateCluster(const UpdateClusterRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCluster", "Required field: Identifier, is not set");
    return UpdateClusterOutcome(Aws::Client::AWSError<DSQLErrors>(DSQLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateClusterOutcome(result.GetResultWithOwnership()) : UpdateClusterOutcome(std::move(result.GetError()));
}

Aws::Utils::Outcome<String, DSQLError> DSQLClient::GenerateDBConnectAuthToken(const Aws::String& hostname, const Aws::String& region,
                                                                              long long expiresIn) {
  if (hostname.empty() || region.empty()) {
    return AWSError<CoreErrors>{CoreErrors::INVALID_PARAMETER_VALUE, "InavlidParameterValue", "all argments must be non-empty", false};
  }
  URI uri(hostname);
  uri.AddQueryStringParameter("Action", "DbConnect");
  auto url = GeneratePresignedUrl(uri, Aws::Http::HttpMethod::HTTP_GET, region.c_str(), GetServiceName(), expiresIn);
  Aws::Utils::StringUtils::Replace(url, "http://", "");
  return url;
}
Aws::Utils::Outcome<String, DSQLError> DSQLClient::GenerateDBConnectAdminAuthToken(const Aws::String& hostname, const Aws::String& region,
                                                                                   long long expiresIn) {
  if (hostname.empty() || region.empty()) {
    return AWSError<CoreErrors>{CoreErrors::INVALID_PARAMETER_VALUE, "InavlidParameterValue", "all argments must be non-empty", false};
  }
  URI uri(hostname);
  uri.AddQueryStringParameter("Action", "DbConnectAdmin");
  auto url = GeneratePresignedUrl(uri, Aws::Http::HttpMethod::HTTP_GET, region.c_str(), GetServiceName(), expiresIn);
  Aws::Utils::StringUtils::Replace(url, "http://", "");
  return url;
}
