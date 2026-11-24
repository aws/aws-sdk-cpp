/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/APIPortalClient.h>
#include <aws/apiportal/APIPortalEndpointProvider.h>
#include <aws/apiportal/APIPortalErrorMarshaller.h>
#include <aws/apiportal/model/AssociateManagedApisRequest.h>
#include <aws/apiportal/model/CreateManagedApiRequest.h>
#include <aws/apiportal/model/CreatePortalPreviewRequest.h>
#include <aws/apiportal/model/CreatePortalRequest.h>
#include <aws/apiportal/model/CreateProductApiPageRequest.h>
#include <aws/apiportal/model/CreateProductPageRequest.h>
#include <aws/apiportal/model/CreateProductRequest.h>
#include <aws/apiportal/model/DeleteDiscoveryConfigurationRequest.h>
#include <aws/apiportal/model/DeleteManagedApiRequest.h>
#include <aws/apiportal/model/DeleteOrganizationDiscoveryConfigurationRequest.h>
#include <aws/apiportal/model/DeletePortalRequest.h>
#include <aws/apiportal/model/DeleteProductApiPageRequest.h>
#include <aws/apiportal/model/DeleteProductPageRequest.h>
#include <aws/apiportal/model/DeleteProductRequest.h>
#include <aws/apiportal/model/DeleteProductSharingPolicyRequest.h>
#include <aws/apiportal/model/DisassociateManagedApisRequest.h>
#include <aws/apiportal/model/GetApiInventoryItemRequest.h>
#include <aws/apiportal/model/GetDiscoveryConfigurationRequest.h>
#include <aws/apiportal/model/GetManagedApiRequest.h>
#include <aws/apiportal/model/GetOrganizationDiscoveryConfigurationRequest.h>
#include <aws/apiportal/model/GetPortalRequest.h>
#include <aws/apiportal/model/GetProductApiPageRequest.h>
#include <aws/apiportal/model/GetProductPageRequest.h>
#include <aws/apiportal/model/GetProductRequest.h>
#include <aws/apiportal/model/GetProductSharingPolicyRequest.h>
#include <aws/apiportal/model/ListApiInventoryItemsRequest.h>
#include <aws/apiportal/model/ListDiscoveryStatusesRequest.h>
#include <aws/apiportal/model/ListManagedApiEventsRequest.h>
#include <aws/apiportal/model/ListManagedApisRequest.h>
#include <aws/apiportal/model/ListPortalsRequest.h>
#include <aws/apiportal/model/ListProductApiPagesRequest.h>
#include <aws/apiportal/model/ListProductPagesRequest.h>
#include <aws/apiportal/model/ListProductsRequest.h>
#include <aws/apiportal/model/ListTagsForResourceRequest.h>
#include <aws/apiportal/model/PutDiscoveryConfigurationRequest.h>
#include <aws/apiportal/model/PutOrganizationDiscoveryConfigurationRequest.h>
#include <aws/apiportal/model/PutProductSharingPolicyRequest.h>
#include <aws/apiportal/model/StartDiscoveryRequest.h>
#include <aws/apiportal/model/StopDiscoveryRequest.h>
#include <aws/apiportal/model/TagResourceRequest.h>
#include <aws/apiportal/model/UntagResourceRequest.h>
#include <aws/apiportal/model/UpdatePortalPublishStatusRequest.h>
#include <aws/apiportal/model/UpdatePortalRequest.h>
#include <aws/apiportal/model/UpdateProductApiPageRequest.h>
#include <aws/apiportal/model/UpdateProductPageRequest.h>
#include <aws/apiportal/model/UpdateProductRequest.h>
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
using namespace Aws::APIPortal;
using namespace Aws::APIPortal::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace APIPortal {
const char SERVICE_NAME[] = "apiportal";
const char ALLOCATION_TAG[] = "APIPortalClient";
}  // namespace APIPortal
}  // namespace Aws
const char* APIPortalClient::GetServiceName() { return SERVICE_NAME; }
const char* APIPortalClient::GetAllocationTag() { return ALLOCATION_TAG; }

APIPortalClient::APIPortalClient(const APIPortal::APIPortalClientConfiguration& clientConfiguration,
                                 std::shared_ptr<APIPortalEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<APIPortalErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<APIPortalEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

APIPortalClient::APIPortalClient(const AWSCredentials& credentials, std::shared_ptr<APIPortalEndpointProviderBase> endpointProvider,
                                 const APIPortal::APIPortalClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<APIPortalErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<APIPortalEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

APIPortalClient::APIPortalClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<APIPortalEndpointProviderBase> endpointProvider,
                                 const APIPortal::APIPortalClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<APIPortalErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<APIPortalEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
APIPortalClient::APIPortalClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<APIPortalErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<APIPortalEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

APIPortalClient::APIPortalClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<APIPortalErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<APIPortalEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

APIPortalClient::APIPortalClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<APIPortalErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<APIPortalEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
APIPortalClient::~APIPortalClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<APIPortalEndpointProviderBase>& APIPortalClient::accessEndpointProvider() { return m_endpointProvider; }

void APIPortalClient::init(const APIPortal::APIPortalClientConfiguration& config) {
  AWSClient::SetServiceClientName("APIPortal");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "apiportal");
}

void APIPortalClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
APIPortalClient::InvokeOperationOutcome APIPortalClient::InvokeServiceOperation(
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

  return Aws::Client::AsyncOperationState::MakeCallWithTiming<InvokeOperationOutcome>(
      request, std::move(span),
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
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AssociateManagedApisOutcome APIPortalClient::AssociateManagedApis(const AssociateManagedApisRequest& request) const {
  if (!request.ProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateManagedApis", "Required field: ProductId, is not set");
    return AssociateManagedApisOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ProductId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/products/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateManagedApisOutcome(result.GetResultWithOwnership())
                            : AssociateManagedApisOutcome(std::move(result.GetError()));
}

CreateManagedApiOutcome APIPortalClient::CreateManagedApi(const CreateManagedApiRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managedapis");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateManagedApiOutcome(result.GetResultWithOwnership())
                            : CreateManagedApiOutcome(std::move(result.GetError()));
}

CreatePortalOutcome APIPortalClient::CreatePortal(const CreatePortalRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePortalOutcome(result.GetResultWithOwnership()) : CreatePortalOutcome(std::move(result.GetError()));
}

CreatePortalPreviewOutcome APIPortalClient::CreatePortalPreview(const CreatePortalPreviewRequest& request) const {
  if (!request.PortalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePortalPreview", "Required field: PortalId, is not set");
    return CreatePortalPreviewOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [PortalId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/preview");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePortalPreviewOutcome(result.GetResultWithOwnership())
                            : CreatePortalPreviewOutcome(std::move(result.GetError()));
}

CreateProductOutcome APIPortalClient::CreateProduct(const CreateProductRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/products");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateProductOutcome(result.GetResultWithOwnership()) : CreateProductOutcome(std::move(result.GetError()));
}

CreateProductApiPageOutcome APIPortalClient::CreateProductApiPage(const CreateProductApiPageRequest& request) const {
  if (!request.ProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateProductApiPage", "Required field: ProductId, is not set");
    return CreateProductApiPageOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ProductId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/products/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/apipages");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateProductApiPageOutcome(result.GetResultWithOwnership())
                            : CreateProductApiPageOutcome(std::move(result.GetError()));
}

CreateProductPageOutcome APIPortalClient::CreateProductPage(const CreateProductPageRequest& request) const {
  if (!request.ProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateProductPage", "Required field: ProductId, is not set");
    return CreateProductPageOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ProductId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/products/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/productpages");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateProductPageOutcome(result.GetResultWithOwnership())
                            : CreateProductPageOutcome(std::move(result.GetError()));
}

DeleteDiscoveryConfigurationOutcome APIPortalClient::DeleteDiscoveryConfiguration(
    const DeleteDiscoveryConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/discovery-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDiscoveryConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteDiscoveryConfigurationOutcome(std::move(result.GetError()));
}

DeleteManagedApiOutcome APIPortalClient::DeleteManagedApi(const DeleteManagedApiRequest& request) const {
  if (!request.ManagedApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteManagedApi", "Required field: ManagedApiId, is not set");
    return DeleteManagedApiOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ManagedApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managedapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetManagedApiId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteManagedApiOutcome(result.GetResultWithOwnership())
                            : DeleteManagedApiOutcome(std::move(result.GetError()));
}

DeleteOrganizationDiscoveryConfigurationOutcome APIPortalClient::DeleteOrganizationDiscoveryConfiguration(
    const DeleteOrganizationDiscoveryConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/org-discovery-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteOrganizationDiscoveryConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteOrganizationDiscoveryConfigurationOutcome(std::move(result.GetError()));
}

DeletePortalOutcome APIPortalClient::DeletePortal(const DeletePortalRequest& request) const {
  if (!request.PortalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePortal", "Required field: PortalId, is not set");
    return DeletePortalOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [PortalId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeletePortalOutcome(result.GetResultWithOwnership()) : DeletePortalOutcome(std::move(result.GetError()));
}

DeleteProductOutcome APIPortalClient::DeleteProduct(const DeleteProductRequest& request) const {
  if (!request.ProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProduct", "Required field: ProductId, is not set");
    return DeleteProductOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ProductId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/products/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteProductOutcome(result.GetResultWithOwnership()) : DeleteProductOutcome(std::move(result.GetError()));
}

DeleteProductApiPageOutcome APIPortalClient::DeleteProductApiPage(const DeleteProductApiPageRequest& request) const {
  if (!request.ProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProductApiPage", "Required field: ProductId, is not set");
    return DeleteProductApiPageOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ProductId]", false));
  }
  if (!request.ProductApiPageIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProductApiPage", "Required field: ProductApiPageId, is not set");
    return DeleteProductApiPageOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ProductApiPageId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/products/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/apipages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductApiPageId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteProductApiPageOutcome(result.GetResultWithOwnership())
                            : DeleteProductApiPageOutcome(std::move(result.GetError()));
}

DeleteProductPageOutcome APIPortalClient::DeleteProductPage(const DeleteProductPageRequest& request) const {
  if (!request.ProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProductPage", "Required field: ProductId, is not set");
    return DeleteProductPageOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ProductId]", false));
  }
  if (!request.ProductPageIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProductPage", "Required field: ProductPageId, is not set");
    return DeleteProductPageOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ProductPageId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/products/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/productpages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductPageId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteProductPageOutcome(result.GetResultWithOwnership())
                            : DeleteProductPageOutcome(std::move(result.GetError()));
}

DeleteProductSharingPolicyOutcome APIPortalClient::DeleteProductSharingPolicy(const DeleteProductSharingPolicyRequest& request) const {
  if (!request.ProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProductSharingPolicy", "Required field: ProductId, is not set");
    return DeleteProductSharingPolicyOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [ProductId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/products/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sharingpolicy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteProductSharingPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteProductSharingPolicyOutcome(std::move(result.GetError()));
}

DisassociateManagedApisOutcome APIPortalClient::DisassociateManagedApis(const DisassociateManagedApisRequest& request) const {
  if (!request.ProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateManagedApis", "Required field: ProductId, is not set");
    return DisassociateManagedApisOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ProductId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/products/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/disassociate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateManagedApisOutcome(result.GetResultWithOwnership())
                            : DisassociateManagedApisOutcome(std::move(result.GetError()));
}

GetApiInventoryItemOutcome APIPortalClient::GetApiInventoryItem(const GetApiInventoryItemRequest& request) const {
  if (!request.MethodHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApiInventoryItem", "Required field: Method, is not set");
    return GetApiInventoryItemOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Method]", false));
  }
  if (!request.HostHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApiInventoryItem", "Required field: Host, is not set");
    return GetApiInventoryItemOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Host]", false));
  }
  if (!request.PortHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApiInventoryItem", "Required field: Port, is not set");
    return GetApiInventoryItemOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Port]", false));
  }
  if (!request.PathHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApiInventoryItem", "Required field: Path, is not set");
    return GetApiInventoryItemOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Path]", false));
  }
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApiInventoryItem", "Required field: ResourceArn, is not set");
    return GetApiInventoryItemOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api-inventory/item");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetApiInventoryItemOutcome(result.GetResultWithOwnership())
                            : GetApiInventoryItemOutcome(std::move(result.GetError()));
}

GetDiscoveryConfigurationOutcome APIPortalClient::GetDiscoveryConfiguration(const GetDiscoveryConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/discovery-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDiscoveryConfigurationOutcome(result.GetResultWithOwnership())
                            : GetDiscoveryConfigurationOutcome(std::move(result.GetError()));
}

GetManagedApiOutcome APIPortalClient::GetManagedApi(const GetManagedApiRequest& request) const {
  if (!request.ManagedApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetManagedApi", "Required field: ManagedApiId, is not set");
    return GetManagedApiOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ManagedApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managedapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetManagedApiId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetManagedApiOutcome(result.GetResultWithOwnership()) : GetManagedApiOutcome(std::move(result.GetError()));
}

GetOrganizationDiscoveryConfigurationOutcome APIPortalClient::GetOrganizationDiscoveryConfiguration(
    const GetOrganizationDiscoveryConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/org-discovery-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetOrganizationDiscoveryConfigurationOutcome(result.GetResultWithOwnership())
                            : GetOrganizationDiscoveryConfigurationOutcome(std::move(result.GetError()));
}

GetPortalOutcome APIPortalClient::GetPortal(const GetPortalRequest& request) const {
  if (!request.PortalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPortal", "Required field: PortalId, is not set");
    return GetPortalOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [PortalId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetPortalOutcome(result.GetResultWithOwnership()) : GetPortalOutcome(std::move(result.GetError()));
}

GetProductOutcome APIPortalClient::GetProduct(const GetProductRequest& request) const {
  if (!request.ProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProduct", "Required field: ProductId, is not set");
    return GetProductOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ProductId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/products/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetProductOutcome(result.GetResultWithOwnership()) : GetProductOutcome(std::move(result.GetError()));
}

GetProductApiPageOutcome APIPortalClient::GetProductApiPage(const GetProductApiPageRequest& request) const {
  if (!request.ProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProductApiPage", "Required field: ProductId, is not set");
    return GetProductApiPageOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ProductId]", false));
  }
  if (!request.ProductApiPageIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProductApiPage", "Required field: ProductApiPageId, is not set");
    return GetProductApiPageOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ProductApiPageId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/products/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/apipages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductApiPageId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetProductApiPageOutcome(result.GetResultWithOwnership())
                            : GetProductApiPageOutcome(std::move(result.GetError()));
}

GetProductPageOutcome APIPortalClient::GetProductPage(const GetProductPageRequest& request) const {
  if (!request.ProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProductPage", "Required field: ProductId, is not set");
    return GetProductPageOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ProductId]", false));
  }
  if (!request.ProductPageIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProductPage", "Required field: ProductPageId, is not set");
    return GetProductPageOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ProductPageId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/products/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/productpages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductPageId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetProductPageOutcome(result.GetResultWithOwnership()) : GetProductPageOutcome(std::move(result.GetError()));
}

GetProductSharingPolicyOutcome APIPortalClient::GetProductSharingPolicy(const GetProductSharingPolicyRequest& request) const {
  if (!request.ProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProductSharingPolicy", "Required field: ProductId, is not set");
    return GetProductSharingPolicyOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ProductId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/products/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sharingpolicy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetProductSharingPolicyOutcome(result.GetResultWithOwnership())
                            : GetProductSharingPolicyOutcome(std::move(result.GetError()));
}

ListApiInventoryItemsOutcome APIPortalClient::ListApiInventoryItems(const ListApiInventoryItemsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api-inventory");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListApiInventoryItemsOutcome(result.GetResultWithOwnership())
                            : ListApiInventoryItemsOutcome(std::move(result.GetError()));
}

ListDiscoveryStatusesOutcome APIPortalClient::ListDiscoveryStatuses(const ListDiscoveryStatusesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/discovery/statuses");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDiscoveryStatusesOutcome(result.GetResultWithOwnership())
                            : ListDiscoveryStatusesOutcome(std::move(result.GetError()));
}

ListManagedApiEventsOutcome APIPortalClient::ListManagedApiEvents(const ListManagedApiEventsRequest& request) const {
  if (!request.ManagedApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListManagedApiEvents", "Required field: ManagedApiId, is not set");
    return ListManagedApiEventsOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ManagedApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managedapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetManagedApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/events");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListManagedApiEventsOutcome(result.GetResultWithOwnership())
                            : ListManagedApiEventsOutcome(std::move(result.GetError()));
}

ListManagedApisOutcome APIPortalClient::ListManagedApis(const ListManagedApisRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managedapis");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListManagedApisOutcome(result.GetResultWithOwnership())
                            : ListManagedApisOutcome(std::move(result.GetError()));
}

ListPortalsOutcome APIPortalClient::ListPortals(const ListPortalsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListPortalsOutcome(result.GetResultWithOwnership()) : ListPortalsOutcome(std::move(result.GetError()));
}

ListProductApiPagesOutcome APIPortalClient::ListProductApiPages(const ListProductApiPagesRequest& request) const {
  if (!request.ProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProductApiPages", "Required field: ProductId, is not set");
    return ListProductApiPagesOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ProductId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/products/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/apipages");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListProductApiPagesOutcome(result.GetResultWithOwnership())
                            : ListProductApiPagesOutcome(std::move(result.GetError()));
}

ListProductPagesOutcome APIPortalClient::ListProductPages(const ListProductPagesRequest& request) const {
  if (!request.ProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProductPages", "Required field: ProductId, is not set");
    return ListProductPagesOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ProductId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/products/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/productpages");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListProductPagesOutcome(result.GetResultWithOwnership())
                            : ListProductPagesOutcome(std::move(result.GetError()));
}

ListProductsOutcome APIPortalClient::ListProducts(const ListProductsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/products");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListProductsOutcome(result.GetResultWithOwnership()) : ListProductsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome APIPortalClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

PutDiscoveryConfigurationOutcome APIPortalClient::PutDiscoveryConfiguration(const PutDiscoveryConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/discovery-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutDiscoveryConfigurationOutcome(result.GetResultWithOwnership())
                            : PutDiscoveryConfigurationOutcome(std::move(result.GetError()));
}

PutOrganizationDiscoveryConfigurationOutcome APIPortalClient::PutOrganizationDiscoveryConfiguration(
    const PutOrganizationDiscoveryConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/org-discovery-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutOrganizationDiscoveryConfigurationOutcome(result.GetResultWithOwnership())
                            : PutOrganizationDiscoveryConfigurationOutcome(std::move(result.GetError()));
}

PutProductSharingPolicyOutcome APIPortalClient::PutProductSharingPolicy(const PutProductSharingPolicyRequest& request) const {
  if (!request.ProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutProductSharingPolicy", "Required field: ProductId, is not set");
    return PutProductSharingPolicyOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ProductId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/products/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sharingpolicy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutProductSharingPolicyOutcome(result.GetResultWithOwnership())
                            : PutProductSharingPolicyOutcome(std::move(result.GetError()));
}

StartDiscoveryOutcome APIPortalClient::StartDiscovery(const StartDiscoveryRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartDiscovery", "Required field: Id, is not set");
    return StartDiscoveryOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/discovery/start");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartDiscoveryOutcome(result.GetResultWithOwnership()) : StartDiscoveryOutcome(std::move(result.GetError()));
}

StopDiscoveryOutcome APIPortalClient::StopDiscovery(const StopDiscoveryRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopDiscovery", "Required field: Id, is not set");
    return StopDiscoveryOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/discovery/stop");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopDiscoveryOutcome(result.GetResultWithOwnership()) : StopDiscoveryOutcome(std::move(result.GetError()));
}

TagResourceOutcome APIPortalClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

UntagResourceOutcome APIPortalClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdatePortalOutcome APIPortalClient::UpdatePortal(const UpdatePortalRequest& request) const {
  if (!request.PortalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePortal", "Required field: PortalId, is not set");
    return UpdatePortalOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [PortalId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdatePortalOutcome(result.GetResultWithOwnership()) : UpdatePortalOutcome(std::move(result.GetError()));
}

UpdatePortalPublishStatusOutcome APIPortalClient::UpdatePortalPublishStatus(const UpdatePortalPublishStatusRequest& request) const {
  if (!request.PortalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePortalPublishStatus", "Required field: PortalId, is not set");
    return UpdatePortalPublishStatusOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [PortalId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/publish");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdatePortalPublishStatusOutcome(result.GetResultWithOwnership())
                            : UpdatePortalPublishStatusOutcome(std::move(result.GetError()));
}

UpdateProductOutcome APIPortalClient::UpdateProduct(const UpdateProductRequest& request) const {
  if (!request.ProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProduct", "Required field: ProductId, is not set");
    return UpdateProductOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ProductId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/products/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateProductOutcome(result.GetResultWithOwnership()) : UpdateProductOutcome(std::move(result.GetError()));
}

UpdateProductApiPageOutcome APIPortalClient::UpdateProductApiPage(const UpdateProductApiPageRequest& request) const {
  if (!request.ProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProductApiPage", "Required field: ProductId, is not set");
    return UpdateProductApiPageOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ProductId]", false));
  }
  if (!request.ProductApiPageIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProductApiPage", "Required field: ProductApiPageId, is not set");
    return UpdateProductApiPageOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ProductApiPageId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/products/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/apipages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductApiPageId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateProductApiPageOutcome(result.GetResultWithOwnership())
                            : UpdateProductApiPageOutcome(std::move(result.GetError()));
}

UpdateProductPageOutcome APIPortalClient::UpdateProductPage(const UpdateProductPageRequest& request) const {
  if (!request.ProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProductPage", "Required field: ProductId, is not set");
    return UpdateProductPageOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ProductId]", false));
  }
  if (!request.ProductPageIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProductPage", "Required field: ProductPageId, is not set");
    return UpdateProductPageOutcome(Aws::Client::AWSError<APIPortalErrors>(APIPortalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ProductPageId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/products/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/productpages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductPageId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateProductPageOutcome(result.GetResultWithOwnership())
                            : UpdateProductPageOutcome(std::move(result.GetError()));
}
