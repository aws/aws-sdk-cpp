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
#include <aws/es/ElasticsearchServiceClient.h>
#include <aws/es/ElasticsearchServiceEndpointProvider.h>
#include <aws/es/ElasticsearchServiceErrorMarshaller.h>
#include <aws/es/model/AcceptInboundCrossClusterSearchConnectionRequest.h>
#include <aws/es/model/AddTagsRequest.h>
#include <aws/es/model/AssociatePackageRequest.h>
#include <aws/es/model/AuthorizeVpcEndpointAccessRequest.h>
#include <aws/es/model/CancelDomainConfigChangeRequest.h>
#include <aws/es/model/CancelElasticsearchServiceSoftwareUpdateRequest.h>
#include <aws/es/model/CreateElasticsearchDomainRequest.h>
#include <aws/es/model/CreateOutboundCrossClusterSearchConnectionRequest.h>
#include <aws/es/model/CreatePackageRequest.h>
#include <aws/es/model/CreateVpcEndpointRequest.h>
#include <aws/es/model/DeleteElasticsearchDomainRequest.h>
#include <aws/es/model/DeleteElasticsearchServiceRoleRequest.h>
#include <aws/es/model/DeleteInboundCrossClusterSearchConnectionRequest.h>
#include <aws/es/model/DeleteOutboundCrossClusterSearchConnectionRequest.h>
#include <aws/es/model/DeletePackageRequest.h>
#include <aws/es/model/DeleteVpcEndpointRequest.h>
#include <aws/es/model/DescribeDomainAutoTunesRequest.h>
#include <aws/es/model/DescribeDomainChangeProgressRequest.h>
#include <aws/es/model/DescribeElasticsearchDomainConfigRequest.h>
#include <aws/es/model/DescribeElasticsearchDomainRequest.h>
#include <aws/es/model/DescribeElasticsearchDomainsRequest.h>
#include <aws/es/model/DescribeElasticsearchInstanceTypeLimitsRequest.h>
#include <aws/es/model/DescribeInboundCrossClusterSearchConnectionsRequest.h>
#include <aws/es/model/DescribeOutboundCrossClusterSearchConnectionsRequest.h>
#include <aws/es/model/DescribePackagesRequest.h>
#include <aws/es/model/DescribeReservedElasticsearchInstanceOfferingsRequest.h>
#include <aws/es/model/DescribeReservedElasticsearchInstancesRequest.h>
#include <aws/es/model/DescribeVpcEndpointsRequest.h>
#include <aws/es/model/DissociatePackageRequest.h>
#include <aws/es/model/GetCompatibleElasticsearchVersionsRequest.h>
#include <aws/es/model/GetPackageVersionHistoryRequest.h>
#include <aws/es/model/GetUpgradeHistoryRequest.h>
#include <aws/es/model/GetUpgradeStatusRequest.h>
#include <aws/es/model/ListDomainNamesRequest.h>
#include <aws/es/model/ListDomainsForPackageRequest.h>
#include <aws/es/model/ListElasticsearchInstanceTypesRequest.h>
#include <aws/es/model/ListElasticsearchVersionsRequest.h>
#include <aws/es/model/ListPackagesForDomainRequest.h>
#include <aws/es/model/ListTagsRequest.h>
#include <aws/es/model/ListVpcEndpointAccessRequest.h>
#include <aws/es/model/ListVpcEndpointsForDomainRequest.h>
#include <aws/es/model/ListVpcEndpointsRequest.h>
#include <aws/es/model/PurchaseReservedElasticsearchInstanceOfferingRequest.h>
#include <aws/es/model/RejectInboundCrossClusterSearchConnectionRequest.h>
#include <aws/es/model/RemoveTagsRequest.h>
#include <aws/es/model/RevokeVpcEndpointAccessRequest.h>
#include <aws/es/model/StartElasticsearchServiceSoftwareUpdateRequest.h>
#include <aws/es/model/UpdateElasticsearchDomainConfigRequest.h>
#include <aws/es/model/UpdatePackageRequest.h>
#include <aws/es/model/UpdateVpcEndpointRequest.h>
#include <aws/es/model/UpgradeElasticsearchDomainRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ElasticsearchService;
using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ElasticsearchService {
const char SERVICE_NAME[] = "es";
const char ALLOCATION_TAG[] = "ElasticsearchServiceClient";
}  // namespace ElasticsearchService
}  // namespace Aws
const char* ElasticsearchServiceClient::GetServiceName() { return SERVICE_NAME; }
const char* ElasticsearchServiceClient::GetAllocationTag() { return ALLOCATION_TAG; }

ElasticsearchServiceClient::ElasticsearchServiceClient(
    const ElasticsearchService::ElasticsearchServiceClientConfiguration& clientConfiguration,
    std::shared_ptr<ElasticsearchServiceEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ElasticsearchServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ElasticsearchServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ElasticsearchServiceClient::ElasticsearchServiceClient(
    const AWSCredentials& credentials, std::shared_ptr<ElasticsearchServiceEndpointProviderBase> endpointProvider,
    const ElasticsearchService::ElasticsearchServiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ElasticsearchServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ElasticsearchServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ElasticsearchServiceClient::ElasticsearchServiceClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<ElasticsearchServiceEndpointProviderBase> endpointProvider,
    const ElasticsearchService::ElasticsearchServiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ElasticsearchServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ElasticsearchServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ElasticsearchServiceClient::ElasticsearchServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ElasticsearchServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ElasticsearchServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ElasticsearchServiceClient::ElasticsearchServiceClient(const AWSCredentials& credentials,
                                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ElasticsearchServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ElasticsearchServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ElasticsearchServiceClient::ElasticsearchServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ElasticsearchServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ElasticsearchServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ElasticsearchServiceClient::~ElasticsearchServiceClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ElasticsearchServiceEndpointProviderBase>& ElasticsearchServiceClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void ElasticsearchServiceClient::init(const ElasticsearchService::ElasticsearchServiceClientConfiguration& config) {
  AWSClient::SetServiceClientName("Elasticsearch Service");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "es");
}

void ElasticsearchServiceClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ElasticsearchServiceClient::InvokeOperationOutcome ElasticsearchServiceClient::InvokeServiceOperation(
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

AcceptInboundCrossClusterSearchConnectionOutcome ElasticsearchServiceClient::AcceptInboundCrossClusterSearchConnection(
    const AcceptInboundCrossClusterSearchConnectionRequest& request) const {
  if (!request.CrossClusterSearchConnectionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AcceptInboundCrossClusterSearchConnection", "Required field: CrossClusterSearchConnectionId, is not set");
    return AcceptInboundCrossClusterSearchConnectionOutcome(
        Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                          "Missing required field [CrossClusterSearchConnectionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/ccs/inboundConnection/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCrossClusterSearchConnectionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/accept");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? AcceptInboundCrossClusterSearchConnectionOutcome(result.GetResultWithOwnership())
                            : AcceptInboundCrossClusterSearchConnectionOutcome(std::move(result.GetError()));
}

AddTagsOutcome ElasticsearchServiceClient::AddTags(const AddTagsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/tags");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddTagsOutcome(result.GetResultWithOwnership()) : AddTagsOutcome(std::move(result.GetError()));
}

AssociatePackageOutcome ElasticsearchServiceClient::AssociatePackage(const AssociatePackageRequest& request) const {
  if (!request.PackageIDHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociatePackage", "Required field: PackageID, is not set");
    return AssociatePackageOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(
        ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociatePackage", "Required field: DomainName, is not set");
    return AssociatePackageOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(
        ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/packages/associate/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageID());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociatePackageOutcome(result.GetResultWithOwnership())
                            : AssociatePackageOutcome(std::move(result.GetError()));
}

AuthorizeVpcEndpointAccessOutcome ElasticsearchServiceClient::AuthorizeVpcEndpointAccess(
    const AuthorizeVpcEndpointAccessRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AuthorizeVpcEndpointAccess", "Required field: DomainName, is not set");
    return AuthorizeVpcEndpointAccessOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(
        ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/authorizeVpcEndpointAccess");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AuthorizeVpcEndpointAccessOutcome(result.GetResultWithOwnership())
                            : AuthorizeVpcEndpointAccessOutcome(std::move(result.GetError()));
}

CancelDomainConfigChangeOutcome ElasticsearchServiceClient::CancelDomainConfigChange(const CancelDomainConfigChangeRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelDomainConfigChange", "Required field: DomainName, is not set");
    return CancelDomainConfigChangeOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(
        ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config/cancel");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelDomainConfigChangeOutcome(result.GetResultWithOwnership())
                            : CancelDomainConfigChangeOutcome(std::move(result.GetError()));
}

CancelElasticsearchServiceSoftwareUpdateOutcome ElasticsearchServiceClient::CancelElasticsearchServiceSoftwareUpdate(
    const CancelElasticsearchServiceSoftwareUpdateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/serviceSoftwareUpdate/cancel");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelElasticsearchServiceSoftwareUpdateOutcome(result.GetResultWithOwnership())
                            : CancelElasticsearchServiceSoftwareUpdateOutcome(std::move(result.GetError()));
}

CreateElasticsearchDomainOutcome ElasticsearchServiceClient::CreateElasticsearchDomain(
    const CreateElasticsearchDomainRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/domain");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateElasticsearchDomainOutcome(result.GetResultWithOwnership())
                            : CreateElasticsearchDomainOutcome(std::move(result.GetError()));
}

CreateOutboundCrossClusterSearchConnectionOutcome ElasticsearchServiceClient::CreateOutboundCrossClusterSearchConnection(
    const CreateOutboundCrossClusterSearchConnectionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/ccs/outboundConnection");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateOutboundCrossClusterSearchConnectionOutcome(result.GetResultWithOwnership())
                            : CreateOutboundCrossClusterSearchConnectionOutcome(std::move(result.GetError()));
}

CreatePackageOutcome ElasticsearchServiceClient::CreatePackage(const CreatePackageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/packages");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePackageOutcome(result.GetResultWithOwnership()) : CreatePackageOutcome(std::move(result.GetError()));
}

CreateVpcEndpointOutcome ElasticsearchServiceClient::CreateVpcEndpoint(const CreateVpcEndpointRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/vpcEndpoints");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateVpcEndpointOutcome(result.GetResultWithOwnership())
                            : CreateVpcEndpointOutcome(std::move(result.GetError()));
}

DeleteElasticsearchDomainOutcome ElasticsearchServiceClient::DeleteElasticsearchDomain(
    const DeleteElasticsearchDomainRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteElasticsearchDomain", "Required field: DomainName, is not set");
    return DeleteElasticsearchDomainOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(
        ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteElasticsearchDomainOutcome(result.GetResultWithOwnership())
                            : DeleteElasticsearchDomainOutcome(std::move(result.GetError()));
}

DeleteElasticsearchServiceRoleOutcome ElasticsearchServiceClient::DeleteElasticsearchServiceRole(
    const DeleteElasticsearchServiceRoleRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/role");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteElasticsearchServiceRoleOutcome(result.GetResultWithOwnership())
                            : DeleteElasticsearchServiceRoleOutcome(std::move(result.GetError()));
}

DeleteInboundCrossClusterSearchConnectionOutcome ElasticsearchServiceClient::DeleteInboundCrossClusterSearchConnection(
    const DeleteInboundCrossClusterSearchConnectionRequest& request) const {
  if (!request.CrossClusterSearchConnectionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteInboundCrossClusterSearchConnection", "Required field: CrossClusterSearchConnectionId, is not set");
    return DeleteInboundCrossClusterSearchConnectionOutcome(
        Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                          "Missing required field [CrossClusterSearchConnectionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/ccs/inboundConnection/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCrossClusterSearchConnectionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteInboundCrossClusterSearchConnectionOutcome(result.GetResultWithOwnership())
                            : DeleteInboundCrossClusterSearchConnectionOutcome(std::move(result.GetError()));
}

DeleteOutboundCrossClusterSearchConnectionOutcome ElasticsearchServiceClient::DeleteOutboundCrossClusterSearchConnection(
    const DeleteOutboundCrossClusterSearchConnectionRequest& request) const {
  if (!request.CrossClusterSearchConnectionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteOutboundCrossClusterSearchConnection", "Required field: CrossClusterSearchConnectionId, is not set");
    return DeleteOutboundCrossClusterSearchConnectionOutcome(
        Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                          "Missing required field [CrossClusterSearchConnectionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/ccs/outboundConnection/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCrossClusterSearchConnectionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteOutboundCrossClusterSearchConnectionOutcome(result.GetResultWithOwnership())
                            : DeleteOutboundCrossClusterSearchConnectionOutcome(std::move(result.GetError()));
}

DeletePackageOutcome ElasticsearchServiceClient::DeletePackage(const DeletePackageRequest& request) const {
  if (!request.PackageIDHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePackage", "Required field: PackageID, is not set");
    return DeletePackageOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(
        ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/packages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageID());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeletePackageOutcome(result.GetResultWithOwnership()) : DeletePackageOutcome(std::move(result.GetError()));
}

DeleteVpcEndpointOutcome ElasticsearchServiceClient::DeleteVpcEndpoint(const DeleteVpcEndpointRequest& request) const {
  if (!request.VpcEndpointIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVpcEndpoint", "Required field: VpcEndpointId, is not set");
    return DeleteVpcEndpointOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(
        ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VpcEndpointId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/vpcEndpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVpcEndpointId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteVpcEndpointOutcome(result.GetResultWithOwnership())
                            : DeleteVpcEndpointOutcome(std::move(result.GetError()));
}

DescribeDomainAutoTunesOutcome ElasticsearchServiceClient::DescribeDomainAutoTunes(const DescribeDomainAutoTunesRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDomainAutoTunes", "Required field: DomainName, is not set");
    return DescribeDomainAutoTunesOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(
        ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/autoTunes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeDomainAutoTunesOutcome(result.GetResultWithOwnership())
                            : DescribeDomainAutoTunesOutcome(std::move(result.GetError()));
}

DescribeDomainChangeProgressOutcome ElasticsearchServiceClient::DescribeDomainChangeProgress(
    const DescribeDomainChangeProgressRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDomainChangeProgress", "Required field: DomainName, is not set");
    return DescribeDomainChangeProgressOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(
        ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/progress");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeDomainChangeProgressOutcome(result.GetResultWithOwnership())
                            : DescribeDomainChangeProgressOutcome(std::move(result.GetError()));
}

DescribeElasticsearchDomainOutcome ElasticsearchServiceClient::DescribeElasticsearchDomain(
    const DescribeElasticsearchDomainRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeElasticsearchDomain", "Required field: DomainName, is not set");
    return DescribeElasticsearchDomainOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(
        ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeElasticsearchDomainOutcome(result.GetResultWithOwnership())
                            : DescribeElasticsearchDomainOutcome(std::move(result.GetError()));
}

DescribeElasticsearchDomainConfigOutcome ElasticsearchServiceClient::DescribeElasticsearchDomainConfig(
    const DescribeElasticsearchDomainConfigRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeElasticsearchDomainConfig", "Required field: DomainName, is not set");
    return DescribeElasticsearchDomainConfigOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(
        ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeElasticsearchDomainConfigOutcome(result.GetResultWithOwnership())
                            : DescribeElasticsearchDomainConfigOutcome(std::move(result.GetError()));
}

DescribeElasticsearchDomainsOutcome ElasticsearchServiceClient::DescribeElasticsearchDomains(
    const DescribeElasticsearchDomainsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/domain-info");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeElasticsearchDomainsOutcome(result.GetResultWithOwnership())
                            : DescribeElasticsearchDomainsOutcome(std::move(result.GetError()));
}

DescribeElasticsearchInstanceTypeLimitsOutcome ElasticsearchServiceClient::DescribeElasticsearchInstanceTypeLimits(
    const DescribeElasticsearchInstanceTypeLimitsRequest& request) const {
  if (!request.InstanceTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeElasticsearchInstanceTypeLimits", "Required field: InstanceType, is not set");
    return DescribeElasticsearchInstanceTypeLimitsOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(
        ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceType]", false));
  }
  if (!request.ElasticsearchVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeElasticsearchInstanceTypeLimits", "Required field: ElasticsearchVersion, is not set");
    return DescribeElasticsearchInstanceTypeLimitsOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(
        ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ElasticsearchVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/instanceTypeLimits/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetElasticsearchVersion());
    endpointResolutionOutcome.GetResult().AddPathSegment(
        ESPartitionInstanceTypeMapper::GetNameForESPartitionInstanceType(request.GetInstanceType()));
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeElasticsearchInstanceTypeLimitsOutcome(result.GetResultWithOwnership())
                            : DescribeElasticsearchInstanceTypeLimitsOutcome(std::move(result.GetError()));
}

DescribeInboundCrossClusterSearchConnectionsOutcome ElasticsearchServiceClient::DescribeInboundCrossClusterSearchConnections(
    const DescribeInboundCrossClusterSearchConnectionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/ccs/inboundConnection/search");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInboundCrossClusterSearchConnectionsOutcome(result.GetResultWithOwnership())
                            : DescribeInboundCrossClusterSearchConnectionsOutcome(std::move(result.GetError()));
}

DescribeOutboundCrossClusterSearchConnectionsOutcome ElasticsearchServiceClient::DescribeOutboundCrossClusterSearchConnections(
    const DescribeOutboundCrossClusterSearchConnectionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/ccs/outboundConnection/search");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeOutboundCrossClusterSearchConnectionsOutcome(result.GetResultWithOwnership())
                            : DescribeOutboundCrossClusterSearchConnectionsOutcome(std::move(result.GetError()));
}

DescribePackagesOutcome ElasticsearchServiceClient::DescribePackages(const DescribePackagesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/packages/describe");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribePackagesOutcome(result.GetResultWithOwnership())
                            : DescribePackagesOutcome(std::move(result.GetError()));
}

DescribeReservedElasticsearchInstanceOfferingsOutcome ElasticsearchServiceClient::DescribeReservedElasticsearchInstanceOfferings(
    const DescribeReservedElasticsearchInstanceOfferingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/reservedInstanceOfferings");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeReservedElasticsearchInstanceOfferingsOutcome(result.GetResultWithOwnership())
                            : DescribeReservedElasticsearchInstanceOfferingsOutcome(std::move(result.GetError()));
}

DescribeReservedElasticsearchInstancesOutcome ElasticsearchServiceClient::DescribeReservedElasticsearchInstances(
    const DescribeReservedElasticsearchInstancesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/reservedInstances");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeReservedElasticsearchInstancesOutcome(result.GetResultWithOwnership())
                            : DescribeReservedElasticsearchInstancesOutcome(std::move(result.GetError()));
}

DescribeVpcEndpointsOutcome ElasticsearchServiceClient::DescribeVpcEndpoints(const DescribeVpcEndpointsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/vpcEndpoints/describe");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVpcEndpointsOutcome(result.GetResultWithOwnership())
                            : DescribeVpcEndpointsOutcome(std::move(result.GetError()));
}

DissociatePackageOutcome ElasticsearchServiceClient::DissociatePackage(const DissociatePackageRequest& request) const {
  if (!request.PackageIDHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DissociatePackage", "Required field: PackageID, is not set");
    return DissociatePackageOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(
        ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DissociatePackage", "Required field: DomainName, is not set");
    return DissociatePackageOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(
        ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/packages/dissociate/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageID());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DissociatePackageOutcome(result.GetResultWithOwnership())
                            : DissociatePackageOutcome(std::move(result.GetError()));
}

GetCompatibleElasticsearchVersionsOutcome ElasticsearchServiceClient::GetCompatibleElasticsearchVersions(
    const GetCompatibleElasticsearchVersionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/compatibleVersions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCompatibleElasticsearchVersionsOutcome(result.GetResultWithOwnership())
                            : GetCompatibleElasticsearchVersionsOutcome(std::move(result.GetError()));
}

GetPackageVersionHistoryOutcome ElasticsearchServiceClient::GetPackageVersionHistory(const GetPackageVersionHistoryRequest& request) const {
  if (!request.PackageIDHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPackageVersionHistory", "Required field: PackageID, is not set");
    return GetPackageVersionHistoryOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(
        ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/packages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageID());
    endpointResolutionOutcome.GetResult().AddPathSegments("/history");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetPackageVersionHistoryOutcome(result.GetResultWithOwnership())
                            : GetPackageVersionHistoryOutcome(std::move(result.GetError()));
}

GetUpgradeHistoryOutcome ElasticsearchServiceClient::GetUpgradeHistory(const GetUpgradeHistoryRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUpgradeHistory", "Required field: DomainName, is not set");
    return GetUpgradeHistoryOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(
        ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/upgradeDomain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/history");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetUpgradeHistoryOutcome(result.GetResultWithOwnership())
                            : GetUpgradeHistoryOutcome(std::move(result.GetError()));
}

GetUpgradeStatusOutcome ElasticsearchServiceClient::GetUpgradeStatus(const GetUpgradeStatusRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUpgradeStatus", "Required field: DomainName, is not set");
    return GetUpgradeStatusOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(
        ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/upgradeDomain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetUpgradeStatusOutcome(result.GetResultWithOwnership())
                            : GetUpgradeStatusOutcome(std::move(result.GetError()));
}

ListDomainNamesOutcome ElasticsearchServiceClient::ListDomainNames(const ListDomainNamesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/domain");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDomainNamesOutcome(result.GetResultWithOwnership())
                            : ListDomainNamesOutcome(std::move(result.GetError()));
}

ListDomainsForPackageOutcome ElasticsearchServiceClient::ListDomainsForPackage(const ListDomainsForPackageRequest& request) const {
  if (!request.PackageIDHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDomainsForPackage", "Required field: PackageID, is not set");
    return ListDomainsForPackageOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(
        ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/packages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageID());
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDomainsForPackageOutcome(result.GetResultWithOwnership())
                            : ListDomainsForPackageOutcome(std::move(result.GetError()));
}

ListElasticsearchInstanceTypesOutcome ElasticsearchServiceClient::ListElasticsearchInstanceTypes(
    const ListElasticsearchInstanceTypesRequest& request) const {
  if (!request.ElasticsearchVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListElasticsearchInstanceTypes", "Required field: ElasticsearchVersion, is not set");
    return ListElasticsearchInstanceTypesOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(
        ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ElasticsearchVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/instanceTypes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetElasticsearchVersion());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListElasticsearchInstanceTypesOutcome(result.GetResultWithOwnership())
                            : ListElasticsearchInstanceTypesOutcome(std::move(result.GetError()));
}

ListElasticsearchVersionsOutcome ElasticsearchServiceClient::ListElasticsearchVersions(
    const ListElasticsearchVersionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/versions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListElasticsearchVersionsOutcome(result.GetResultWithOwnership())
                            : ListElasticsearchVersionsOutcome(std::move(result.GetError()));
}

ListPackagesForDomainOutcome ElasticsearchServiceClient::ListPackagesForDomain(const ListPackagesForDomainRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPackagesForDomain", "Required field: DomainName, is not set");
    return ListPackagesForDomainOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(
        ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/packages");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListPackagesForDomainOutcome(result.GetResultWithOwnership())
                            : ListPackagesForDomainOutcome(std::move(result.GetError()));
}

ListTagsOutcome ElasticsearchServiceClient::ListTags(const ListTagsRequest& request) const {
  if (!request.ARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTags", "Required field: ARN, is not set");
    return ListTagsOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER,
                                                                             "MISSING_PARAMETER", "Missing required field [ARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/tags/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsOutcome(result.GetResultWithOwnership()) : ListTagsOutcome(std::move(result.GetError()));
}

ListVpcEndpointAccessOutcome ElasticsearchServiceClient::ListVpcEndpointAccess(const ListVpcEndpointAccessRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListVpcEndpointAccess", "Required field: DomainName, is not set");
    return ListVpcEndpointAccessOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(
        ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/listVpcEndpointAccess");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListVpcEndpointAccessOutcome(result.GetResultWithOwnership())
                            : ListVpcEndpointAccessOutcome(std::move(result.GetError()));
}

ListVpcEndpointsOutcome ElasticsearchServiceClient::ListVpcEndpoints(const ListVpcEndpointsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/vpcEndpoints");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListVpcEndpointsOutcome(result.GetResultWithOwnership())
                            : ListVpcEndpointsOutcome(std::move(result.GetError()));
}

ListVpcEndpointsForDomainOutcome ElasticsearchServiceClient::ListVpcEndpointsForDomain(
    const ListVpcEndpointsForDomainRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListVpcEndpointsForDomain", "Required field: DomainName, is not set");
    return ListVpcEndpointsForDomainOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(
        ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vpcEndpoints");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListVpcEndpointsForDomainOutcome(result.GetResultWithOwnership())
                            : ListVpcEndpointsForDomainOutcome(std::move(result.GetError()));
}

PurchaseReservedElasticsearchInstanceOfferingOutcome ElasticsearchServiceClient::PurchaseReservedElasticsearchInstanceOffering(
    const PurchaseReservedElasticsearchInstanceOfferingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/purchaseReservedInstanceOffering");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PurchaseReservedElasticsearchInstanceOfferingOutcome(result.GetResultWithOwnership())
                            : PurchaseReservedElasticsearchInstanceOfferingOutcome(std::move(result.GetError()));
}

RejectInboundCrossClusterSearchConnectionOutcome ElasticsearchServiceClient::RejectInboundCrossClusterSearchConnection(
    const RejectInboundCrossClusterSearchConnectionRequest& request) const {
  if (!request.CrossClusterSearchConnectionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RejectInboundCrossClusterSearchConnection", "Required field: CrossClusterSearchConnectionId, is not set");
    return RejectInboundCrossClusterSearchConnectionOutcome(
        Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                          "Missing required field [CrossClusterSearchConnectionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/ccs/inboundConnection/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCrossClusterSearchConnectionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/reject");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? RejectInboundCrossClusterSearchConnectionOutcome(result.GetResultWithOwnership())
                            : RejectInboundCrossClusterSearchConnectionOutcome(std::move(result.GetError()));
}

RemoveTagsOutcome ElasticsearchServiceClient::RemoveTags(const RemoveTagsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/tags-removal");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveTagsOutcome(result.GetResultWithOwnership()) : RemoveTagsOutcome(std::move(result.GetError()));
}

RevokeVpcEndpointAccessOutcome ElasticsearchServiceClient::RevokeVpcEndpointAccess(const RevokeVpcEndpointAccessRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RevokeVpcEndpointAccess", "Required field: DomainName, is not set");
    return RevokeVpcEndpointAccessOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(
        ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/revokeVpcEndpointAccess");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RevokeVpcEndpointAccessOutcome(result.GetResultWithOwnership())
                            : RevokeVpcEndpointAccessOutcome(std::move(result.GetError()));
}

StartElasticsearchServiceSoftwareUpdateOutcome ElasticsearchServiceClient::StartElasticsearchServiceSoftwareUpdate(
    const StartElasticsearchServiceSoftwareUpdateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/serviceSoftwareUpdate/start");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartElasticsearchServiceSoftwareUpdateOutcome(result.GetResultWithOwnership())
                            : StartElasticsearchServiceSoftwareUpdateOutcome(std::move(result.GetError()));
}

UpdateElasticsearchDomainConfigOutcome ElasticsearchServiceClient::UpdateElasticsearchDomainConfig(
    const UpdateElasticsearchDomainConfigRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateElasticsearchDomainConfig", "Required field: DomainName, is not set");
    return UpdateElasticsearchDomainConfigOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(
        ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateElasticsearchDomainConfigOutcome(result.GetResultWithOwnership())
                            : UpdateElasticsearchDomainConfigOutcome(std::move(result.GetError()));
}

UpdatePackageOutcome ElasticsearchServiceClient::UpdatePackage(const UpdatePackageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/packages/update");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdatePackageOutcome(result.GetResultWithOwnership()) : UpdatePackageOutcome(std::move(result.GetError()));
}

UpdateVpcEndpointOutcome ElasticsearchServiceClient::UpdateVpcEndpoint(const UpdateVpcEndpointRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/vpcEndpoints/update");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateVpcEndpointOutcome(result.GetResultWithOwnership())
                            : UpdateVpcEndpointOutcome(std::move(result.GetError()));
}

UpgradeElasticsearchDomainOutcome ElasticsearchServiceClient::UpgradeElasticsearchDomain(
    const UpgradeElasticsearchDomainRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/upgradeDomain");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpgradeElasticsearchDomainOutcome(result.GetResultWithOwnership())
                            : UpgradeElasticsearchDomainOutcome(std::move(result.GetError()));
}
