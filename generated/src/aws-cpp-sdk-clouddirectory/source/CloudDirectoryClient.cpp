/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/CloudDirectoryClient.h>
#include <aws/clouddirectory/CloudDirectoryEndpointProvider.h>
#include <aws/clouddirectory/CloudDirectoryErrorMarshaller.h>
#include <aws/clouddirectory/model/AddFacetToObjectRequest.h>
#include <aws/clouddirectory/model/ApplySchemaRequest.h>
#include <aws/clouddirectory/model/AttachObjectRequest.h>
#include <aws/clouddirectory/model/AttachPolicyRequest.h>
#include <aws/clouddirectory/model/AttachToIndexRequest.h>
#include <aws/clouddirectory/model/AttachTypedLinkRequest.h>
#include <aws/clouddirectory/model/BatchReadRequest.h>
#include <aws/clouddirectory/model/BatchWriteRequest.h>
#include <aws/clouddirectory/model/CreateDirectoryRequest.h>
#include <aws/clouddirectory/model/CreateFacetRequest.h>
#include <aws/clouddirectory/model/CreateIndexRequest.h>
#include <aws/clouddirectory/model/CreateObjectRequest.h>
#include <aws/clouddirectory/model/CreateSchemaRequest.h>
#include <aws/clouddirectory/model/CreateTypedLinkFacetRequest.h>
#include <aws/clouddirectory/model/DeleteDirectoryRequest.h>
#include <aws/clouddirectory/model/DeleteFacetRequest.h>
#include <aws/clouddirectory/model/DeleteObjectRequest.h>
#include <aws/clouddirectory/model/DeleteSchemaRequest.h>
#include <aws/clouddirectory/model/DeleteTypedLinkFacetRequest.h>
#include <aws/clouddirectory/model/DetachFromIndexRequest.h>
#include <aws/clouddirectory/model/DetachObjectRequest.h>
#include <aws/clouddirectory/model/DetachPolicyRequest.h>
#include <aws/clouddirectory/model/DetachTypedLinkRequest.h>
#include <aws/clouddirectory/model/DisableDirectoryRequest.h>
#include <aws/clouddirectory/model/EnableDirectoryRequest.h>
#include <aws/clouddirectory/model/GetAppliedSchemaVersionRequest.h>
#include <aws/clouddirectory/model/GetDirectoryRequest.h>
#include <aws/clouddirectory/model/GetFacetRequest.h>
#include <aws/clouddirectory/model/GetLinkAttributesRequest.h>
#include <aws/clouddirectory/model/GetObjectAttributesRequest.h>
#include <aws/clouddirectory/model/GetObjectInformationRequest.h>
#include <aws/clouddirectory/model/GetSchemaAsJsonRequest.h>
#include <aws/clouddirectory/model/GetTypedLinkFacetInformationRequest.h>
#include <aws/clouddirectory/model/ListAppliedSchemaArnsRequest.h>
#include <aws/clouddirectory/model/ListAttachedIndicesRequest.h>
#include <aws/clouddirectory/model/ListDevelopmentSchemaArnsRequest.h>
#include <aws/clouddirectory/model/ListDirectoriesRequest.h>
#include <aws/clouddirectory/model/ListFacetAttributesRequest.h>
#include <aws/clouddirectory/model/ListFacetNamesRequest.h>
#include <aws/clouddirectory/model/ListIncomingTypedLinksRequest.h>
#include <aws/clouddirectory/model/ListIndexRequest.h>
#include <aws/clouddirectory/model/ListManagedSchemaArnsRequest.h>
#include <aws/clouddirectory/model/ListObjectAttributesRequest.h>
#include <aws/clouddirectory/model/ListObjectChildrenRequest.h>
#include <aws/clouddirectory/model/ListObjectParentPathsRequest.h>
#include <aws/clouddirectory/model/ListObjectParentsRequest.h>
#include <aws/clouddirectory/model/ListObjectPoliciesRequest.h>
#include <aws/clouddirectory/model/ListOutgoingTypedLinksRequest.h>
#include <aws/clouddirectory/model/ListPolicyAttachmentsRequest.h>
#include <aws/clouddirectory/model/ListPublishedSchemaArnsRequest.h>
#include <aws/clouddirectory/model/ListTagsForResourceRequest.h>
#include <aws/clouddirectory/model/ListTypedLinkFacetAttributesRequest.h>
#include <aws/clouddirectory/model/ListTypedLinkFacetNamesRequest.h>
#include <aws/clouddirectory/model/LookupPolicyRequest.h>
#include <aws/clouddirectory/model/PublishSchemaRequest.h>
#include <aws/clouddirectory/model/PutSchemaFromJsonRequest.h>
#include <aws/clouddirectory/model/RemoveFacetFromObjectRequest.h>
#include <aws/clouddirectory/model/TagResourceRequest.h>
#include <aws/clouddirectory/model/UntagResourceRequest.h>
#include <aws/clouddirectory/model/UpdateFacetRequest.h>
#include <aws/clouddirectory/model/UpdateLinkAttributesRequest.h>
#include <aws/clouddirectory/model/UpdateObjectAttributesRequest.h>
#include <aws/clouddirectory/model/UpdateSchemaRequest.h>
#include <aws/clouddirectory/model/UpdateTypedLinkFacetRequest.h>
#include <aws/clouddirectory/model/UpgradeAppliedSchemaRequest.h>
#include <aws/clouddirectory/model/UpgradePublishedSchemaRequest.h>
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
using namespace Aws::CloudDirectory;
using namespace Aws::CloudDirectory::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CloudDirectory {
const char SERVICE_NAME[] = "clouddirectory";
const char ALLOCATION_TAG[] = "CloudDirectoryClient";
}  // namespace CloudDirectory
}  // namespace Aws
const char* CloudDirectoryClient::GetServiceName() { return SERVICE_NAME; }
const char* CloudDirectoryClient::GetAllocationTag() { return ALLOCATION_TAG; }

CloudDirectoryClient::CloudDirectoryClient(const CloudDirectory::CloudDirectoryClientConfiguration& clientConfiguration,
                                           std::shared_ptr<CloudDirectoryEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudDirectoryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudDirectoryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudDirectoryClient::CloudDirectoryClient(const AWSCredentials& credentials,
                                           std::shared_ptr<CloudDirectoryEndpointProviderBase> endpointProvider,
                                           const CloudDirectory::CloudDirectoryClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudDirectoryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudDirectoryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudDirectoryClient::CloudDirectoryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<CloudDirectoryEndpointProviderBase> endpointProvider,
                                           const CloudDirectory::CloudDirectoryClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudDirectoryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudDirectoryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CloudDirectoryClient::CloudDirectoryClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudDirectoryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudDirectoryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudDirectoryClient::CloudDirectoryClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudDirectoryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudDirectoryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudDirectoryClient::CloudDirectoryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudDirectoryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudDirectoryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CloudDirectoryClient::~CloudDirectoryClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CloudDirectoryEndpointProviderBase>& CloudDirectoryClient::accessEndpointProvider() { return m_endpointProvider; }

void CloudDirectoryClient::init(const CloudDirectory::CloudDirectoryClientConfiguration& config) {
  AWSClient::SetServiceClientName("CloudDirectory");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "clouddirectory");
}

void CloudDirectoryClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CloudDirectoryClient::InvokeOperationOutcome CloudDirectoryClient::InvokeServiceOperation(
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

AddFacetToObjectOutcome CloudDirectoryClient::AddFacetToObject(const AddFacetToObjectRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddFacetToObject", "Required field: DirectoryArn, is not set");
    return AddFacetToObjectOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/object/facets");
  };

  return AddFacetToObjectOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

ApplySchemaOutcome CloudDirectoryClient::ApplySchema(const ApplySchemaRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ApplySchema", "Required field: DirectoryArn, is not set");
    return ApplySchemaOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/schema/apply");
  };

  return ApplySchemaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AttachObjectOutcome CloudDirectoryClient::AttachObject(const AttachObjectRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AttachObject", "Required field: DirectoryArn, is not set");
    return AttachObjectOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/object/attach");
  };

  return AttachObjectOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AttachPolicyOutcome CloudDirectoryClient::AttachPolicy(const AttachPolicyRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AttachPolicy", "Required field: DirectoryArn, is not set");
    return AttachPolicyOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/policy/attach");
  };

  return AttachPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AttachToIndexOutcome CloudDirectoryClient::AttachToIndex(const AttachToIndexRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AttachToIndex", "Required field: DirectoryArn, is not set");
    return AttachToIndexOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/index/attach");
  };

  return AttachToIndexOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AttachTypedLinkOutcome CloudDirectoryClient::AttachTypedLink(const AttachTypedLinkRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AttachTypedLink", "Required field: DirectoryArn, is not set");
    return AttachTypedLinkOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/typedlink/attach");
  };

  return AttachTypedLinkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

BatchReadOutcome CloudDirectoryClient::BatchRead(const BatchReadRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchRead", "Required field: DirectoryArn, is not set");
    return BatchReadOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/batchread");
  };

  return BatchReadOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchWriteOutcome CloudDirectoryClient::BatchWrite(const BatchWriteRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchWrite", "Required field: DirectoryArn, is not set");
    return BatchWriteOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/batchwrite");
  };

  return BatchWriteOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateDirectoryOutcome CloudDirectoryClient::CreateDirectory(const CreateDirectoryRequest& request) const {
  if (!request.SchemaArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDirectory", "Required field: SchemaArn, is not set");
    return CreateDirectoryOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [SchemaArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/directory/create");
  };

  return CreateDirectoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateFacetOutcome CloudDirectoryClient::CreateFacet(const CreateFacetRequest& request) const {
  if (!request.SchemaArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateFacet", "Required field: SchemaArn, is not set");
    return CreateFacetOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [SchemaArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/facet/create");
  };

  return CreateFacetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateIndexOutcome CloudDirectoryClient::CreateIndex(const CreateIndexRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateIndex", "Required field: DirectoryArn, is not set");
    return CreateIndexOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/index");
  };

  return CreateIndexOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateObjectOutcome CloudDirectoryClient::CreateObject(const CreateObjectRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateObject", "Required field: DirectoryArn, is not set");
    return CreateObjectOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/object");
  };

  return CreateObjectOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateSchemaOutcome CloudDirectoryClient::CreateSchema(const CreateSchemaRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/schema/create");
  };

  return CreateSchemaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateTypedLinkFacetOutcome CloudDirectoryClient::CreateTypedLinkFacet(const CreateTypedLinkFacetRequest& request) const {
  if (!request.SchemaArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTypedLinkFacet", "Required field: SchemaArn, is not set");
    return CreateTypedLinkFacetOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(
        CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/typedlink/facet/create");
  };

  return CreateTypedLinkFacetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

DeleteDirectoryOutcome CloudDirectoryClient::DeleteDirectory(const DeleteDirectoryRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDirectory", "Required field: DirectoryArn, is not set");
    return DeleteDirectoryOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/directory");
  };

  return DeleteDirectoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

DeleteFacetOutcome CloudDirectoryClient::DeleteFacet(const DeleteFacetRequest& request) const {
  if (!request.SchemaArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFacet", "Required field: SchemaArn, is not set");
    return DeleteFacetOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [SchemaArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/facet/delete");
  };

  return DeleteFacetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

DeleteObjectOutcome CloudDirectoryClient::DeleteObject(const DeleteObjectRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteObject", "Required field: DirectoryArn, is not set");
    return DeleteObjectOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/object/delete");
  };

  return DeleteObjectOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

DeleteSchemaOutcome CloudDirectoryClient::DeleteSchema(const DeleteSchemaRequest& request) const {
  if (!request.SchemaArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSchema", "Required field: SchemaArn, is not set");
    return DeleteSchemaOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [SchemaArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/schema");
  };

  return DeleteSchemaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

DeleteTypedLinkFacetOutcome CloudDirectoryClient::DeleteTypedLinkFacet(const DeleteTypedLinkFacetRequest& request) const {
  if (!request.SchemaArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTypedLinkFacet", "Required field: SchemaArn, is not set");
    return DeleteTypedLinkFacetOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(
        CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/typedlink/facet/delete");
  };

  return DeleteTypedLinkFacetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

DetachFromIndexOutcome CloudDirectoryClient::DetachFromIndex(const DetachFromIndexRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DetachFromIndex", "Required field: DirectoryArn, is not set");
    return DetachFromIndexOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/index/detach");
  };

  return DetachFromIndexOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

DetachObjectOutcome CloudDirectoryClient::DetachObject(const DetachObjectRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DetachObject", "Required field: DirectoryArn, is not set");
    return DetachObjectOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/object/detach");
  };

  return DetachObjectOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

DetachPolicyOutcome CloudDirectoryClient::DetachPolicy(const DetachPolicyRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DetachPolicy", "Required field: DirectoryArn, is not set");
    return DetachPolicyOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/policy/detach");
  };

  return DetachPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

DetachTypedLinkOutcome CloudDirectoryClient::DetachTypedLink(const DetachTypedLinkRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DetachTypedLink", "Required field: DirectoryArn, is not set");
    return DetachTypedLinkOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/typedlink/detach");
  };

  return DetachTypedLinkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

DisableDirectoryOutcome CloudDirectoryClient::DisableDirectory(const DisableDirectoryRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisableDirectory", "Required field: DirectoryArn, is not set");
    return DisableDirectoryOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/directory/disable");
  };

  return DisableDirectoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

EnableDirectoryOutcome CloudDirectoryClient::EnableDirectory(const EnableDirectoryRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("EnableDirectory", "Required field: DirectoryArn, is not set");
    return EnableDirectoryOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/directory/enable");
  };

  return EnableDirectoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

GetAppliedSchemaVersionOutcome CloudDirectoryClient::GetAppliedSchemaVersion(const GetAppliedSchemaVersionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/schema/getappliedschema");
  };

  return GetAppliedSchemaVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDirectoryOutcome CloudDirectoryClient::GetDirectory(const GetDirectoryRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDirectory", "Required field: DirectoryArn, is not set");
    return GetDirectoryOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/directory/get");
  };

  return GetDirectoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetFacetOutcome CloudDirectoryClient::GetFacet(const GetFacetRequest& request) const {
  if (!request.SchemaArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFacet", "Required field: SchemaArn, is not set");
    return GetFacetOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [SchemaArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/facet");
  };

  return GetFacetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLinkAttributesOutcome CloudDirectoryClient::GetLinkAttributes(const GetLinkAttributesRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLinkAttributes", "Required field: DirectoryArn, is not set");
    return GetLinkAttributesOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(
        CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/typedlink/attributes/get");
  };

  return GetLinkAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetObjectAttributesOutcome CloudDirectoryClient::GetObjectAttributes(const GetObjectAttributesRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetObjectAttributes", "Required field: DirectoryArn, is not set");
    return GetObjectAttributesOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(
        CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/object/attributes/get");
  };

  return GetObjectAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetObjectInformationOutcome CloudDirectoryClient::GetObjectInformation(const GetObjectInformationRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetObjectInformation", "Required field: DirectoryArn, is not set");
    return GetObjectInformationOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(
        CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/object/information");
  };

  return GetObjectInformationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSchemaAsJsonOutcome CloudDirectoryClient::GetSchemaAsJson(const GetSchemaAsJsonRequest& request) const {
  if (!request.SchemaArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSchemaAsJson", "Required field: SchemaArn, is not set");
    return GetSchemaAsJsonOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [SchemaArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/schema/json");
  };

  return GetSchemaAsJsonOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTypedLinkFacetInformationOutcome CloudDirectoryClient::GetTypedLinkFacetInformation(
    const GetTypedLinkFacetInformationRequest& request) const {
  if (!request.SchemaArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTypedLinkFacetInformation", "Required field: SchemaArn, is not set");
    return GetTypedLinkFacetInformationOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(
        CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/typedlink/facet/get");
  };

  return GetTypedLinkFacetInformationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAppliedSchemaArnsOutcome CloudDirectoryClient::ListAppliedSchemaArns(const ListAppliedSchemaArnsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/schema/applied");
  };

  return ListAppliedSchemaArnsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAttachedIndicesOutcome CloudDirectoryClient::ListAttachedIndices(const ListAttachedIndicesRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAttachedIndices", "Required field: DirectoryArn, is not set");
    return ListAttachedIndicesOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(
        CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/object/indices");
  };

  return ListAttachedIndicesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDevelopmentSchemaArnsOutcome CloudDirectoryClient::ListDevelopmentSchemaArns(const ListDevelopmentSchemaArnsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/schema/development");
  };

  return ListDevelopmentSchemaArnsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDirectoriesOutcome CloudDirectoryClient::ListDirectories(const ListDirectoriesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/directory/list");
  };

  return ListDirectoriesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFacetAttributesOutcome CloudDirectoryClient::ListFacetAttributes(const ListFacetAttributesRequest& request) const {
  if (!request.SchemaArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFacetAttributes", "Required field: SchemaArn, is not set");
    return ListFacetAttributesOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(
        CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/facet/attributes");
  };

  return ListFacetAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFacetNamesOutcome CloudDirectoryClient::ListFacetNames(const ListFacetNamesRequest& request) const {
  if (!request.SchemaArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFacetNames", "Required field: SchemaArn, is not set");
    return ListFacetNamesOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [SchemaArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/facet/list");
  };

  return ListFacetNamesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListIncomingTypedLinksOutcome CloudDirectoryClient::ListIncomingTypedLinks(const ListIncomingTypedLinksRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListIncomingTypedLinks", "Required field: DirectoryArn, is not set");
    return ListIncomingTypedLinksOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(
        CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/typedlink/incoming");
  };

  return ListIncomingTypedLinksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListIndexOutcome CloudDirectoryClient::ListIndex(const ListIndexRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListIndex", "Required field: DirectoryArn, is not set");
    return ListIndexOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/index/targets");
  };

  return ListIndexOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListManagedSchemaArnsOutcome CloudDirectoryClient::ListManagedSchemaArns(const ListManagedSchemaArnsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/schema/managed");
  };

  return ListManagedSchemaArnsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListObjectAttributesOutcome CloudDirectoryClient::ListObjectAttributes(const ListObjectAttributesRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListObjectAttributes", "Required field: DirectoryArn, is not set");
    return ListObjectAttributesOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(
        CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/object/attributes");
  };

  return ListObjectAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListObjectChildrenOutcome CloudDirectoryClient::ListObjectChildren(const ListObjectChildrenRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListObjectChildren", "Required field: DirectoryArn, is not set");
    return ListObjectChildrenOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(
        CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/object/children");
  };

  return ListObjectChildrenOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListObjectParentPathsOutcome CloudDirectoryClient::ListObjectParentPaths(const ListObjectParentPathsRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListObjectParentPaths", "Required field: DirectoryArn, is not set");
    return ListObjectParentPathsOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(
        CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/object/parentpaths");
  };

  return ListObjectParentPathsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListObjectParentsOutcome CloudDirectoryClient::ListObjectParents(const ListObjectParentsRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListObjectParents", "Required field: DirectoryArn, is not set");
    return ListObjectParentsOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(
        CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/object/parent");
  };

  return ListObjectParentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListObjectPoliciesOutcome CloudDirectoryClient::ListObjectPolicies(const ListObjectPoliciesRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListObjectPolicies", "Required field: DirectoryArn, is not set");
    return ListObjectPoliciesOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(
        CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/object/policy");
  };

  return ListObjectPoliciesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListOutgoingTypedLinksOutcome CloudDirectoryClient::ListOutgoingTypedLinks(const ListOutgoingTypedLinksRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListOutgoingTypedLinks", "Required field: DirectoryArn, is not set");
    return ListOutgoingTypedLinksOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(
        CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/typedlink/outgoing");
  };

  return ListOutgoingTypedLinksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPolicyAttachmentsOutcome CloudDirectoryClient::ListPolicyAttachments(const ListPolicyAttachmentsRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPolicyAttachments", "Required field: DirectoryArn, is not set");
    return ListPolicyAttachmentsOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(
        CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/policy/attachment");
  };

  return ListPolicyAttachmentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPublishedSchemaArnsOutcome CloudDirectoryClient::ListPublishedSchemaArns(const ListPublishedSchemaArnsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/schema/published");
  };

  return ListPublishedSchemaArnsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome CloudDirectoryClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/tags");
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTypedLinkFacetAttributesOutcome CloudDirectoryClient::ListTypedLinkFacetAttributes(
    const ListTypedLinkFacetAttributesRequest& request) const {
  if (!request.SchemaArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTypedLinkFacetAttributes", "Required field: SchemaArn, is not set");
    return ListTypedLinkFacetAttributesOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(
        CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/typedlink/facet/attributes");
  };

  return ListTypedLinkFacetAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTypedLinkFacetNamesOutcome CloudDirectoryClient::ListTypedLinkFacetNames(const ListTypedLinkFacetNamesRequest& request) const {
  if (!request.SchemaArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTypedLinkFacetNames", "Required field: SchemaArn, is not set");
    return ListTypedLinkFacetNamesOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(
        CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/typedlink/facet/list");
  };

  return ListTypedLinkFacetNamesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

LookupPolicyOutcome CloudDirectoryClient::LookupPolicy(const LookupPolicyRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("LookupPolicy", "Required field: DirectoryArn, is not set");
    return LookupPolicyOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/policy/lookup");
  };

  return LookupPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PublishSchemaOutcome CloudDirectoryClient::PublishSchema(const PublishSchemaRequest& request) const {
  if (!request.DevelopmentSchemaArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PublishSchema", "Required field: DevelopmentSchemaArn, is not set");
    return PublishSchemaOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [DevelopmentSchemaArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/schema/publish");
  };

  return PublishSchemaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutSchemaFromJsonOutcome CloudDirectoryClient::PutSchemaFromJson(const PutSchemaFromJsonRequest& request) const {
  if (!request.SchemaArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutSchemaFromJson", "Required field: SchemaArn, is not set");
    return PutSchemaFromJsonOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(
        CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/schema/json");
  };

  return PutSchemaFromJsonOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

RemoveFacetFromObjectOutcome CloudDirectoryClient::RemoveFacetFromObject(const RemoveFacetFromObjectRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveFacetFromObject", "Required field: DirectoryArn, is not set");
    return RemoveFacetFromObjectOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(
        CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/object/facets/delete");
  };

  return RemoveFacetFromObjectOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

TagResourceOutcome CloudDirectoryClient::TagResource(const TagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/tags/add");
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UntagResourceOutcome CloudDirectoryClient::UntagResource(const UntagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/tags/remove");
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateFacetOutcome CloudDirectoryClient::UpdateFacet(const UpdateFacetRequest& request) const {
  if (!request.SchemaArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFacet", "Required field: SchemaArn, is not set");
    return UpdateFacetOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [SchemaArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/facet");
  };

  return UpdateFacetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateLinkAttributesOutcome CloudDirectoryClient::UpdateLinkAttributes(const UpdateLinkAttributesRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateLinkAttributes", "Required field: DirectoryArn, is not set");
    return UpdateLinkAttributesOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(
        CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/typedlink/attributes/update");
  };

  return UpdateLinkAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateObjectAttributesOutcome CloudDirectoryClient::UpdateObjectAttributes(const UpdateObjectAttributesRequest& request) const {
  if (!request.DirectoryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateObjectAttributes", "Required field: DirectoryArn, is not set");
    return UpdateObjectAttributesOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(
        CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/object/update");
  };

  return UpdateObjectAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateSchemaOutcome CloudDirectoryClient::UpdateSchema(const UpdateSchemaRequest& request) const {
  if (!request.SchemaArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSchema", "Required field: SchemaArn, is not set");
    return UpdateSchemaOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [SchemaArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/schema/update");
  };

  return UpdateSchemaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateTypedLinkFacetOutcome CloudDirectoryClient::UpdateTypedLinkFacet(const UpdateTypedLinkFacetRequest& request) const {
  if (!request.SchemaArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTypedLinkFacet", "Required field: SchemaArn, is not set");
    return UpdateTypedLinkFacetOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(
        CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/typedlink/facet");
  };

  return UpdateTypedLinkFacetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpgradeAppliedSchemaOutcome CloudDirectoryClient::UpgradeAppliedSchema(const UpgradeAppliedSchemaRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/schema/upgradeapplied");
  };

  return UpgradeAppliedSchemaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpgradePublishedSchemaOutcome CloudDirectoryClient::UpgradePublishedSchema(const UpgradePublishedSchemaRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/amazonclouddirectory/2017-01-11/schema/upgradepublished");
  };

  return UpgradePublishedSchemaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
