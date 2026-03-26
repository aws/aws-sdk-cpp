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

  return AcceptInboundCrossClusterSearchConnectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AddTagsOutcome ElasticsearchServiceClient::AddTags(const AddTagsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/tags");
  };

  return AddTagsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return AssociatePackageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return AuthorizeVpcEndpointAccessOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CancelDomainConfigChangeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelElasticsearchServiceSoftwareUpdateOutcome ElasticsearchServiceClient::CancelElasticsearchServiceSoftwareUpdate(
    const CancelElasticsearchServiceSoftwareUpdateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/serviceSoftwareUpdate/cancel");
  };

  return CancelElasticsearchServiceSoftwareUpdateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateElasticsearchDomainOutcome ElasticsearchServiceClient::CreateElasticsearchDomain(
    const CreateElasticsearchDomainRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/domain");
  };

  return CreateElasticsearchDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateOutboundCrossClusterSearchConnectionOutcome ElasticsearchServiceClient::CreateOutboundCrossClusterSearchConnection(
    const CreateOutboundCrossClusterSearchConnectionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/ccs/outboundConnection");
  };

  return CreateOutboundCrossClusterSearchConnectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePackageOutcome ElasticsearchServiceClient::CreatePackage(const CreatePackageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/packages");
  };

  return CreatePackageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVpcEndpointOutcome ElasticsearchServiceClient::CreateVpcEndpoint(const CreateVpcEndpointRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/vpcEndpoints");
  };

  return CreateVpcEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return DeleteElasticsearchDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteElasticsearchServiceRoleOutcome ElasticsearchServiceClient::DeleteElasticsearchServiceRole(
    const DeleteElasticsearchServiceRoleRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/role");
  };

  return DeleteElasticsearchServiceRoleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteInboundCrossClusterSearchConnectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteOutboundCrossClusterSearchConnectionOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeletePackageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteVpcEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DescribeDomainAutoTunesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return DescribeDomainChangeProgressOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return DescribeElasticsearchDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return DescribeElasticsearchDomainConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeElasticsearchDomainsOutcome ElasticsearchServiceClient::DescribeElasticsearchDomains(
    const DescribeElasticsearchDomainsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/domain-info");
  };

  return DescribeElasticsearchDomainsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return DescribeElasticsearchInstanceTypeLimitsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeInboundCrossClusterSearchConnectionsOutcome ElasticsearchServiceClient::DescribeInboundCrossClusterSearchConnections(
    const DescribeInboundCrossClusterSearchConnectionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/ccs/inboundConnection/search");
  };

  return DescribeInboundCrossClusterSearchConnectionsOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeOutboundCrossClusterSearchConnectionsOutcome ElasticsearchServiceClient::DescribeOutboundCrossClusterSearchConnections(
    const DescribeOutboundCrossClusterSearchConnectionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/ccs/outboundConnection/search");
  };

  return DescribeOutboundCrossClusterSearchConnectionsOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePackagesOutcome ElasticsearchServiceClient::DescribePackages(const DescribePackagesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/packages/describe");
  };

  return DescribePackagesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReservedElasticsearchInstanceOfferingsOutcome ElasticsearchServiceClient::DescribeReservedElasticsearchInstanceOfferings(
    const DescribeReservedElasticsearchInstanceOfferingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/reservedInstanceOfferings");
  };

  return DescribeReservedElasticsearchInstanceOfferingsOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeReservedElasticsearchInstancesOutcome ElasticsearchServiceClient::DescribeReservedElasticsearchInstances(
    const DescribeReservedElasticsearchInstancesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/reservedInstances");
  };

  return DescribeReservedElasticsearchInstancesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeVpcEndpointsOutcome ElasticsearchServiceClient::DescribeVpcEndpoints(const DescribeVpcEndpointsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/vpcEndpoints/describe");
  };

  return DescribeVpcEndpointsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return DissociatePackageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCompatibleElasticsearchVersionsOutcome ElasticsearchServiceClient::GetCompatibleElasticsearchVersions(
    const GetCompatibleElasticsearchVersionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/compatibleVersions");
  };

  return GetCompatibleElasticsearchVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetPackageVersionHistoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetUpgradeHistoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetUpgradeStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDomainNamesOutcome ElasticsearchServiceClient::ListDomainNames(const ListDomainNamesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/domain");
  };

  return ListDomainNamesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListDomainsForPackageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListElasticsearchInstanceTypesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListElasticsearchVersionsOutcome ElasticsearchServiceClient::ListElasticsearchVersions(
    const ListElasticsearchVersionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/versions");
  };

  return ListElasticsearchVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListPackagesForDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListTagsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListVpcEndpointAccessOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListVpcEndpointsOutcome ElasticsearchServiceClient::ListVpcEndpoints(const ListVpcEndpointsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/vpcEndpoints");
  };

  return ListVpcEndpointsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListVpcEndpointsForDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PurchaseReservedElasticsearchInstanceOfferingOutcome ElasticsearchServiceClient::PurchaseReservedElasticsearchInstanceOffering(
    const PurchaseReservedElasticsearchInstanceOfferingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/purchaseReservedInstanceOffering");
  };

  return PurchaseReservedElasticsearchInstanceOfferingOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return RejectInboundCrossClusterSearchConnectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

RemoveTagsOutcome ElasticsearchServiceClient::RemoveTags(const RemoveTagsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/tags-removal");
  };

  return RemoveTagsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return RevokeVpcEndpointAccessOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartElasticsearchServiceSoftwareUpdateOutcome ElasticsearchServiceClient::StartElasticsearchServiceSoftwareUpdate(
    const StartElasticsearchServiceSoftwareUpdateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/serviceSoftwareUpdate/start");
  };

  return StartElasticsearchServiceSoftwareUpdateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UpdateElasticsearchDomainConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePackageOutcome ElasticsearchServiceClient::UpdatePackage(const UpdatePackageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/packages/update");
  };

  return UpdatePackageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateVpcEndpointOutcome ElasticsearchServiceClient::UpdateVpcEndpoint(const UpdateVpcEndpointRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/vpcEndpoints/update");
  };

  return UpdateVpcEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpgradeElasticsearchDomainOutcome ElasticsearchServiceClient::UpgradeElasticsearchDomain(
    const UpgradeElasticsearchDomainRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/upgradeDomain");
  };

  return UpgradeElasticsearchDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
