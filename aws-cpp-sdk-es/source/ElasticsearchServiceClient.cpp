/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/es/ElasticsearchServiceClient.h>
#include <aws/es/ElasticsearchServiceErrorMarshaller.h>
#include <aws/es/ElasticsearchServiceEndpointProvider.h>
#include <aws/es/model/AcceptInboundCrossClusterSearchConnectionRequest.h>
#include <aws/es/model/AddTagsRequest.h>
#include <aws/es/model/AssociatePackageRequest.h>
#include <aws/es/model/AuthorizeVpcEndpointAccessRequest.h>
#include <aws/es/model/CancelElasticsearchServiceSoftwareUpdateRequest.h>
#include <aws/es/model/CreateElasticsearchDomainRequest.h>
#include <aws/es/model/CreateOutboundCrossClusterSearchConnectionRequest.h>
#include <aws/es/model/CreatePackageRequest.h>
#include <aws/es/model/CreateVpcEndpointRequest.h>
#include <aws/es/model/DeleteElasticsearchDomainRequest.h>
#include <aws/es/model/DeleteInboundCrossClusterSearchConnectionRequest.h>
#include <aws/es/model/DeleteOutboundCrossClusterSearchConnectionRequest.h>
#include <aws/es/model/DeletePackageRequest.h>
#include <aws/es/model/DeleteVpcEndpointRequest.h>
#include <aws/es/model/DescribeDomainAutoTunesRequest.h>
#include <aws/es/model/DescribeDomainChangeProgressRequest.h>
#include <aws/es/model/DescribeElasticsearchDomainRequest.h>
#include <aws/es/model/DescribeElasticsearchDomainConfigRequest.h>
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
#include <aws/es/model/ListVpcEndpointsRequest.h>
#include <aws/es/model/ListVpcEndpointsForDomainRequest.h>
#include <aws/es/model/PurchaseReservedElasticsearchInstanceOfferingRequest.h>
#include <aws/es/model/RejectInboundCrossClusterSearchConnectionRequest.h>
#include <aws/es/model/RemoveTagsRequest.h>
#include <aws/es/model/RevokeVpcEndpointAccessRequest.h>
#include <aws/es/model/StartElasticsearchServiceSoftwareUpdateRequest.h>
#include <aws/es/model/UpdateElasticsearchDomainConfigRequest.h>
#include <aws/es/model/UpdatePackageRequest.h>
#include <aws/es/model/UpdateVpcEndpointRequest.h>
#include <aws/es/model/UpgradeElasticsearchDomainRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ElasticsearchService;
using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* ElasticsearchServiceClient::SERVICE_NAME = "es";
const char* ElasticsearchServiceClient::ALLOCATION_TAG = "ElasticsearchServiceClient";

ElasticsearchServiceClient::ElasticsearchServiceClient(const ElasticsearchService::ElasticsearchServiceClientConfiguration& clientConfiguration,
                                                       std::shared_ptr<ElasticsearchServiceEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticsearchServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ElasticsearchServiceClient::ElasticsearchServiceClient(const AWSCredentials& credentials,
                                                       std::shared_ptr<ElasticsearchServiceEndpointProviderBase> endpointProvider,
                                                       const ElasticsearchService::ElasticsearchServiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticsearchServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ElasticsearchServiceClient::ElasticsearchServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                       std::shared_ptr<ElasticsearchServiceEndpointProviderBase> endpointProvider,
                                                       const ElasticsearchService::ElasticsearchServiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticsearchServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  ElasticsearchServiceClient::ElasticsearchServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticsearchServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<ElasticsearchServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ElasticsearchServiceClient::ElasticsearchServiceClient(const AWSCredentials& credentials,
                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticsearchServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ElasticsearchServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ElasticsearchServiceClient::ElasticsearchServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticsearchServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ElasticsearchServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
ElasticsearchServiceClient::~ElasticsearchServiceClient()
{
}

std::shared_ptr<ElasticsearchServiceEndpointProviderBase>& ElasticsearchServiceClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void ElasticsearchServiceClient::init(const ElasticsearchService::ElasticsearchServiceClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Elasticsearch Service");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void ElasticsearchServiceClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AcceptInboundCrossClusterSearchConnectionOutcome ElasticsearchServiceClient::AcceptInboundCrossClusterSearchConnection(const AcceptInboundCrossClusterSearchConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AcceptInboundCrossClusterSearchConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CrossClusterSearchConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AcceptInboundCrossClusterSearchConnection", "Required field: CrossClusterSearchConnectionId, is not set");
    return AcceptInboundCrossClusterSearchConnectionOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CrossClusterSearchConnectionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AcceptInboundCrossClusterSearchConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/ccs/inboundConnection/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCrossClusterSearchConnectionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accept");
  return AcceptInboundCrossClusterSearchConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AcceptInboundCrossClusterSearchConnectionOutcomeCallable ElasticsearchServiceClient::AcceptInboundCrossClusterSearchConnectionCallable(const AcceptInboundCrossClusterSearchConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptInboundCrossClusterSearchConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptInboundCrossClusterSearchConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::AcceptInboundCrossClusterSearchConnectionAsync(const AcceptInboundCrossClusterSearchConnectionRequest& request, const AcceptInboundCrossClusterSearchConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AcceptInboundCrossClusterSearchConnection(request), context);
    } );
}

AddTagsOutcome ElasticsearchServiceClient::AddTags(const AddTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/tags");
  return AddTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddTagsOutcomeCallable ElasticsearchServiceClient::AddTagsCallable(const AddTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::AddTagsAsync(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddTags(request), context);
    } );
}

AssociatePackageOutcome ElasticsearchServiceClient::AssociatePackage(const AssociatePackageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociatePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PackageIDHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociatePackage", "Required field: PackageID, is not set");
    return AssociatePackageOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociatePackage", "Required field: DomainName, is not set");
    return AssociatePackageOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociatePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/packages/associate/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageID());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  return AssociatePackageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociatePackageOutcomeCallable ElasticsearchServiceClient::AssociatePackageCallable(const AssociatePackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociatePackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociatePackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::AssociatePackageAsync(const AssociatePackageRequest& request, const AssociatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociatePackage(request), context);
    } );
}

AuthorizeVpcEndpointAccessOutcome ElasticsearchServiceClient::AuthorizeVpcEndpointAccess(const AuthorizeVpcEndpointAccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AuthorizeVpcEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AuthorizeVpcEndpointAccess", "Required field: DomainName, is not set");
    return AuthorizeVpcEndpointAccessOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AuthorizeVpcEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/domain/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/authorizeVpcEndpointAccess");
  return AuthorizeVpcEndpointAccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AuthorizeVpcEndpointAccessOutcomeCallable ElasticsearchServiceClient::AuthorizeVpcEndpointAccessCallable(const AuthorizeVpcEndpointAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AuthorizeVpcEndpointAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AuthorizeVpcEndpointAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::AuthorizeVpcEndpointAccessAsync(const AuthorizeVpcEndpointAccessRequest& request, const AuthorizeVpcEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AuthorizeVpcEndpointAccess(request), context);
    } );
}

CancelElasticsearchServiceSoftwareUpdateOutcome ElasticsearchServiceClient::CancelElasticsearchServiceSoftwareUpdate(const CancelElasticsearchServiceSoftwareUpdateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelElasticsearchServiceSoftwareUpdate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelElasticsearchServiceSoftwareUpdate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/serviceSoftwareUpdate/cancel");
  return CancelElasticsearchServiceSoftwareUpdateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelElasticsearchServiceSoftwareUpdateOutcomeCallable ElasticsearchServiceClient::CancelElasticsearchServiceSoftwareUpdateCallable(const CancelElasticsearchServiceSoftwareUpdateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelElasticsearchServiceSoftwareUpdateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelElasticsearchServiceSoftwareUpdate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::CancelElasticsearchServiceSoftwareUpdateAsync(const CancelElasticsearchServiceSoftwareUpdateRequest& request, const CancelElasticsearchServiceSoftwareUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelElasticsearchServiceSoftwareUpdate(request), context);
    } );
}

CreateElasticsearchDomainOutcome ElasticsearchServiceClient::CreateElasticsearchDomain(const CreateElasticsearchDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateElasticsearchDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateElasticsearchDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/domain");
  return CreateElasticsearchDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateElasticsearchDomainOutcomeCallable ElasticsearchServiceClient::CreateElasticsearchDomainCallable(const CreateElasticsearchDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateElasticsearchDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateElasticsearchDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::CreateElasticsearchDomainAsync(const CreateElasticsearchDomainRequest& request, const CreateElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateElasticsearchDomain(request), context);
    } );
}

CreateOutboundCrossClusterSearchConnectionOutcome ElasticsearchServiceClient::CreateOutboundCrossClusterSearchConnection(const CreateOutboundCrossClusterSearchConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateOutboundCrossClusterSearchConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateOutboundCrossClusterSearchConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/ccs/outboundConnection");
  return CreateOutboundCrossClusterSearchConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateOutboundCrossClusterSearchConnectionOutcomeCallable ElasticsearchServiceClient::CreateOutboundCrossClusterSearchConnectionCallable(const CreateOutboundCrossClusterSearchConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateOutboundCrossClusterSearchConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateOutboundCrossClusterSearchConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::CreateOutboundCrossClusterSearchConnectionAsync(const CreateOutboundCrossClusterSearchConnectionRequest& request, const CreateOutboundCrossClusterSearchConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateOutboundCrossClusterSearchConnection(request), context);
    } );
}

CreatePackageOutcome ElasticsearchServiceClient::CreatePackage(const CreatePackageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/packages");
  return CreatePackageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePackageOutcomeCallable ElasticsearchServiceClient::CreatePackageCallable(const CreatePackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::CreatePackageAsync(const CreatePackageRequest& request, const CreatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreatePackage(request), context);
    } );
}

CreateVpcEndpointOutcome ElasticsearchServiceClient::CreateVpcEndpoint(const CreateVpcEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/vpcEndpoints");
  return CreateVpcEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVpcEndpointOutcomeCallable ElasticsearchServiceClient::CreateVpcEndpointCallable(const CreateVpcEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVpcEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVpcEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::CreateVpcEndpointAsync(const CreateVpcEndpointRequest& request, const CreateVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateVpcEndpoint(request), context);
    } );
}

DeleteElasticsearchDomainOutcome ElasticsearchServiceClient::DeleteElasticsearchDomain(const DeleteElasticsearchDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteElasticsearchDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteElasticsearchDomain", "Required field: DomainName, is not set");
    return DeleteElasticsearchDomainOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteElasticsearchDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/domain/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  return DeleteElasticsearchDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteElasticsearchDomainOutcomeCallable ElasticsearchServiceClient::DeleteElasticsearchDomainCallable(const DeleteElasticsearchDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteElasticsearchDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteElasticsearchDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::DeleteElasticsearchDomainAsync(const DeleteElasticsearchDomainRequest& request, const DeleteElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteElasticsearchDomain(request), context);
    } );
}

DeleteElasticsearchServiceRoleOutcome ElasticsearchServiceClient::DeleteElasticsearchServiceRole() const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteElasticsearchServiceRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  static const Aws::Vector<Aws::Endpoint::EndpointParameter> staticEndpointParameters;
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(staticEndpointParameters);
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteElasticsearchServiceRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/role");
  return DeleteElasticsearchServiceRoleOutcome(MakeRequest(endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER, "DeleteElasticsearchServiceRole"));
}

DeleteElasticsearchServiceRoleOutcomeCallable ElasticsearchServiceClient::DeleteElasticsearchServiceRoleCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteElasticsearchServiceRoleOutcome() > >(ALLOCATION_TAG, [this](){ return this->DeleteElasticsearchServiceRole(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::DeleteElasticsearchServiceRoleAsync(const DeleteElasticsearchServiceRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context]()
    {
      handler(this, DeleteElasticsearchServiceRole(), context);
    } );
}

DeleteInboundCrossClusterSearchConnectionOutcome ElasticsearchServiceClient::DeleteInboundCrossClusterSearchConnection(const DeleteInboundCrossClusterSearchConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInboundCrossClusterSearchConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CrossClusterSearchConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteInboundCrossClusterSearchConnection", "Required field: CrossClusterSearchConnectionId, is not set");
    return DeleteInboundCrossClusterSearchConnectionOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CrossClusterSearchConnectionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteInboundCrossClusterSearchConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/ccs/inboundConnection/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCrossClusterSearchConnectionId());
  return DeleteInboundCrossClusterSearchConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteInboundCrossClusterSearchConnectionOutcomeCallable ElasticsearchServiceClient::DeleteInboundCrossClusterSearchConnectionCallable(const DeleteInboundCrossClusterSearchConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInboundCrossClusterSearchConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInboundCrossClusterSearchConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::DeleteInboundCrossClusterSearchConnectionAsync(const DeleteInboundCrossClusterSearchConnectionRequest& request, const DeleteInboundCrossClusterSearchConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteInboundCrossClusterSearchConnection(request), context);
    } );
}

DeleteOutboundCrossClusterSearchConnectionOutcome ElasticsearchServiceClient::DeleteOutboundCrossClusterSearchConnection(const DeleteOutboundCrossClusterSearchConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteOutboundCrossClusterSearchConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CrossClusterSearchConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteOutboundCrossClusterSearchConnection", "Required field: CrossClusterSearchConnectionId, is not set");
    return DeleteOutboundCrossClusterSearchConnectionOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CrossClusterSearchConnectionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteOutboundCrossClusterSearchConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/ccs/outboundConnection/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCrossClusterSearchConnectionId());
  return DeleteOutboundCrossClusterSearchConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteOutboundCrossClusterSearchConnectionOutcomeCallable ElasticsearchServiceClient::DeleteOutboundCrossClusterSearchConnectionCallable(const DeleteOutboundCrossClusterSearchConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteOutboundCrossClusterSearchConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteOutboundCrossClusterSearchConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::DeleteOutboundCrossClusterSearchConnectionAsync(const DeleteOutboundCrossClusterSearchConnectionRequest& request, const DeleteOutboundCrossClusterSearchConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteOutboundCrossClusterSearchConnection(request), context);
    } );
}

DeletePackageOutcome ElasticsearchServiceClient::DeletePackage(const DeletePackageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PackageIDHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePackage", "Required field: PackageID, is not set");
    return DeletePackageOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/packages/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageID());
  return DeletePackageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePackageOutcomeCallable ElasticsearchServiceClient::DeletePackageCallable(const DeletePackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::DeletePackageAsync(const DeletePackageRequest& request, const DeletePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeletePackage(request), context);
    } );
}

DeleteVpcEndpointOutcome ElasticsearchServiceClient::DeleteVpcEndpoint(const DeleteVpcEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VpcEndpointIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVpcEndpoint", "Required field: VpcEndpointId, is not set");
    return DeleteVpcEndpointOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VpcEndpointId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/vpcEndpoints/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVpcEndpointId());
  return DeleteVpcEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVpcEndpointOutcomeCallable ElasticsearchServiceClient::DeleteVpcEndpointCallable(const DeleteVpcEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVpcEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVpcEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::DeleteVpcEndpointAsync(const DeleteVpcEndpointRequest& request, const DeleteVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVpcEndpoint(request), context);
    } );
}

DescribeDomainAutoTunesOutcome ElasticsearchServiceClient::DescribeDomainAutoTunes(const DescribeDomainAutoTunesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDomainAutoTunes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDomainAutoTunes", "Required field: DomainName, is not set");
    return DescribeDomainAutoTunesOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDomainAutoTunes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/domain/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/autoTunes");
  return DescribeDomainAutoTunesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDomainAutoTunesOutcomeCallable ElasticsearchServiceClient::DescribeDomainAutoTunesCallable(const DescribeDomainAutoTunesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDomainAutoTunesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDomainAutoTunes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::DescribeDomainAutoTunesAsync(const DescribeDomainAutoTunesRequest& request, const DescribeDomainAutoTunesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDomainAutoTunes(request), context);
    } );
}

DescribeDomainChangeProgressOutcome ElasticsearchServiceClient::DescribeDomainChangeProgress(const DescribeDomainChangeProgressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDomainChangeProgress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDomainChangeProgress", "Required field: DomainName, is not set");
    return DescribeDomainChangeProgressOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDomainChangeProgress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/domain/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/progress");
  return DescribeDomainChangeProgressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDomainChangeProgressOutcomeCallable ElasticsearchServiceClient::DescribeDomainChangeProgressCallable(const DescribeDomainChangeProgressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDomainChangeProgressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDomainChangeProgress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::DescribeDomainChangeProgressAsync(const DescribeDomainChangeProgressRequest& request, const DescribeDomainChangeProgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDomainChangeProgress(request), context);
    } );
}

DescribeElasticsearchDomainOutcome ElasticsearchServiceClient::DescribeElasticsearchDomain(const DescribeElasticsearchDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeElasticsearchDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeElasticsearchDomain", "Required field: DomainName, is not set");
    return DescribeElasticsearchDomainOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeElasticsearchDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/domain/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  return DescribeElasticsearchDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeElasticsearchDomainOutcomeCallable ElasticsearchServiceClient::DescribeElasticsearchDomainCallable(const DescribeElasticsearchDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeElasticsearchDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeElasticsearchDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::DescribeElasticsearchDomainAsync(const DescribeElasticsearchDomainRequest& request, const DescribeElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeElasticsearchDomain(request), context);
    } );
}

DescribeElasticsearchDomainConfigOutcome ElasticsearchServiceClient::DescribeElasticsearchDomainConfig(const DescribeElasticsearchDomainConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeElasticsearchDomainConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeElasticsearchDomainConfig", "Required field: DomainName, is not set");
    return DescribeElasticsearchDomainConfigOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeElasticsearchDomainConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/domain/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  return DescribeElasticsearchDomainConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeElasticsearchDomainConfigOutcomeCallable ElasticsearchServiceClient::DescribeElasticsearchDomainConfigCallable(const DescribeElasticsearchDomainConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeElasticsearchDomainConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeElasticsearchDomainConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::DescribeElasticsearchDomainConfigAsync(const DescribeElasticsearchDomainConfigRequest& request, const DescribeElasticsearchDomainConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeElasticsearchDomainConfig(request), context);
    } );
}

DescribeElasticsearchDomainsOutcome ElasticsearchServiceClient::DescribeElasticsearchDomains(const DescribeElasticsearchDomainsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeElasticsearchDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeElasticsearchDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/domain-info");
  return DescribeElasticsearchDomainsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeElasticsearchDomainsOutcomeCallable ElasticsearchServiceClient::DescribeElasticsearchDomainsCallable(const DescribeElasticsearchDomainsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeElasticsearchDomainsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeElasticsearchDomains(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::DescribeElasticsearchDomainsAsync(const DescribeElasticsearchDomainsRequest& request, const DescribeElasticsearchDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeElasticsearchDomains(request), context);
    } );
}

DescribeElasticsearchInstanceTypeLimitsOutcome ElasticsearchServiceClient::DescribeElasticsearchInstanceTypeLimits(const DescribeElasticsearchInstanceTypeLimitsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeElasticsearchInstanceTypeLimits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeElasticsearchInstanceTypeLimits", "Required field: InstanceType, is not set");
    return DescribeElasticsearchInstanceTypeLimitsOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceType]", false));
  }
  if (!request.ElasticsearchVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeElasticsearchInstanceTypeLimits", "Required field: ElasticsearchVersion, is not set");
    return DescribeElasticsearchInstanceTypeLimitsOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ElasticsearchVersion]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeElasticsearchInstanceTypeLimits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/instanceTypeLimits/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetElasticsearchVersion());
  endpointResolutionOutcome.GetResult().AddPathSegment(ESPartitionInstanceTypeMapper::GetNameForESPartitionInstanceType(request.GetInstanceType()));
  return DescribeElasticsearchInstanceTypeLimitsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeElasticsearchInstanceTypeLimitsOutcomeCallable ElasticsearchServiceClient::DescribeElasticsearchInstanceTypeLimitsCallable(const DescribeElasticsearchInstanceTypeLimitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeElasticsearchInstanceTypeLimitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeElasticsearchInstanceTypeLimits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::DescribeElasticsearchInstanceTypeLimitsAsync(const DescribeElasticsearchInstanceTypeLimitsRequest& request, const DescribeElasticsearchInstanceTypeLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeElasticsearchInstanceTypeLimits(request), context);
    } );
}

DescribeInboundCrossClusterSearchConnectionsOutcome ElasticsearchServiceClient::DescribeInboundCrossClusterSearchConnections(const DescribeInboundCrossClusterSearchConnectionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInboundCrossClusterSearchConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInboundCrossClusterSearchConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/ccs/inboundConnection/search");
  return DescribeInboundCrossClusterSearchConnectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeInboundCrossClusterSearchConnectionsOutcomeCallable ElasticsearchServiceClient::DescribeInboundCrossClusterSearchConnectionsCallable(const DescribeInboundCrossClusterSearchConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInboundCrossClusterSearchConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInboundCrossClusterSearchConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::DescribeInboundCrossClusterSearchConnectionsAsync(const DescribeInboundCrossClusterSearchConnectionsRequest& request, const DescribeInboundCrossClusterSearchConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeInboundCrossClusterSearchConnections(request), context);
    } );
}

DescribeOutboundCrossClusterSearchConnectionsOutcome ElasticsearchServiceClient::DescribeOutboundCrossClusterSearchConnections(const DescribeOutboundCrossClusterSearchConnectionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeOutboundCrossClusterSearchConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeOutboundCrossClusterSearchConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/ccs/outboundConnection/search");
  return DescribeOutboundCrossClusterSearchConnectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeOutboundCrossClusterSearchConnectionsOutcomeCallable ElasticsearchServiceClient::DescribeOutboundCrossClusterSearchConnectionsCallable(const DescribeOutboundCrossClusterSearchConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOutboundCrossClusterSearchConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOutboundCrossClusterSearchConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::DescribeOutboundCrossClusterSearchConnectionsAsync(const DescribeOutboundCrossClusterSearchConnectionsRequest& request, const DescribeOutboundCrossClusterSearchConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeOutboundCrossClusterSearchConnections(request), context);
    } );
}

DescribePackagesOutcome ElasticsearchServiceClient::DescribePackages(const DescribePackagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePackages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePackages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/packages/describe");
  return DescribePackagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePackagesOutcomeCallable ElasticsearchServiceClient::DescribePackagesCallable(const DescribePackagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePackagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePackages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::DescribePackagesAsync(const DescribePackagesRequest& request, const DescribePackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribePackages(request), context);
    } );
}

DescribeReservedElasticsearchInstanceOfferingsOutcome ElasticsearchServiceClient::DescribeReservedElasticsearchInstanceOfferings(const DescribeReservedElasticsearchInstanceOfferingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReservedElasticsearchInstanceOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReservedElasticsearchInstanceOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/reservedInstanceOfferings");
  return DescribeReservedElasticsearchInstanceOfferingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeReservedElasticsearchInstanceOfferingsOutcomeCallable ElasticsearchServiceClient::DescribeReservedElasticsearchInstanceOfferingsCallable(const DescribeReservedElasticsearchInstanceOfferingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservedElasticsearchInstanceOfferingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReservedElasticsearchInstanceOfferings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::DescribeReservedElasticsearchInstanceOfferingsAsync(const DescribeReservedElasticsearchInstanceOfferingsRequest& request, const DescribeReservedElasticsearchInstanceOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeReservedElasticsearchInstanceOfferings(request), context);
    } );
}

DescribeReservedElasticsearchInstancesOutcome ElasticsearchServiceClient::DescribeReservedElasticsearchInstances(const DescribeReservedElasticsearchInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReservedElasticsearchInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReservedElasticsearchInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/reservedInstances");
  return DescribeReservedElasticsearchInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeReservedElasticsearchInstancesOutcomeCallable ElasticsearchServiceClient::DescribeReservedElasticsearchInstancesCallable(const DescribeReservedElasticsearchInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservedElasticsearchInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReservedElasticsearchInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::DescribeReservedElasticsearchInstancesAsync(const DescribeReservedElasticsearchInstancesRequest& request, const DescribeReservedElasticsearchInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeReservedElasticsearchInstances(request), context);
    } );
}

DescribeVpcEndpointsOutcome ElasticsearchServiceClient::DescribeVpcEndpoints(const DescribeVpcEndpointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpcEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpcEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/vpcEndpoints/describe");
  return DescribeVpcEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeVpcEndpointsOutcomeCallable ElasticsearchServiceClient::DescribeVpcEndpointsCallable(const DescribeVpcEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVpcEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::DescribeVpcEndpointsAsync(const DescribeVpcEndpointsRequest& request, const DescribeVpcEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeVpcEndpoints(request), context);
    } );
}

DissociatePackageOutcome ElasticsearchServiceClient::DissociatePackage(const DissociatePackageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DissociatePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PackageIDHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DissociatePackage", "Required field: PackageID, is not set");
    return DissociatePackageOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DissociatePackage", "Required field: DomainName, is not set");
    return DissociatePackageOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DissociatePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/packages/dissociate/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageID());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  return DissociatePackageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DissociatePackageOutcomeCallable ElasticsearchServiceClient::DissociatePackageCallable(const DissociatePackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DissociatePackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DissociatePackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::DissociatePackageAsync(const DissociatePackageRequest& request, const DissociatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DissociatePackage(request), context);
    } );
}

GetCompatibleElasticsearchVersionsOutcome ElasticsearchServiceClient::GetCompatibleElasticsearchVersions(const GetCompatibleElasticsearchVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCompatibleElasticsearchVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCompatibleElasticsearchVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/compatibleVersions");
  return GetCompatibleElasticsearchVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCompatibleElasticsearchVersionsOutcomeCallable ElasticsearchServiceClient::GetCompatibleElasticsearchVersionsCallable(const GetCompatibleElasticsearchVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCompatibleElasticsearchVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCompatibleElasticsearchVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::GetCompatibleElasticsearchVersionsAsync(const GetCompatibleElasticsearchVersionsRequest& request, const GetCompatibleElasticsearchVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCompatibleElasticsearchVersions(request), context);
    } );
}

GetPackageVersionHistoryOutcome ElasticsearchServiceClient::GetPackageVersionHistory(const GetPackageVersionHistoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPackageVersionHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PackageIDHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPackageVersionHistory", "Required field: PackageID, is not set");
    return GetPackageVersionHistoryOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPackageVersionHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/packages/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageID());
  endpointResolutionOutcome.GetResult().AddPathSegments("/history");
  return GetPackageVersionHistoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPackageVersionHistoryOutcomeCallable ElasticsearchServiceClient::GetPackageVersionHistoryCallable(const GetPackageVersionHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPackageVersionHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPackageVersionHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::GetPackageVersionHistoryAsync(const GetPackageVersionHistoryRequest& request, const GetPackageVersionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPackageVersionHistory(request), context);
    } );
}

GetUpgradeHistoryOutcome ElasticsearchServiceClient::GetUpgradeHistory(const GetUpgradeHistoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUpgradeHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUpgradeHistory", "Required field: DomainName, is not set");
    return GetUpgradeHistoryOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUpgradeHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/upgradeDomain/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/history");
  return GetUpgradeHistoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetUpgradeHistoryOutcomeCallable ElasticsearchServiceClient::GetUpgradeHistoryCallable(const GetUpgradeHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUpgradeHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUpgradeHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::GetUpgradeHistoryAsync(const GetUpgradeHistoryRequest& request, const GetUpgradeHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetUpgradeHistory(request), context);
    } );
}

GetUpgradeStatusOutcome ElasticsearchServiceClient::GetUpgradeStatus(const GetUpgradeStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUpgradeStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUpgradeStatus", "Required field: DomainName, is not set");
    return GetUpgradeStatusOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUpgradeStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/upgradeDomain/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  return GetUpgradeStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetUpgradeStatusOutcomeCallable ElasticsearchServiceClient::GetUpgradeStatusCallable(const GetUpgradeStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUpgradeStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUpgradeStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::GetUpgradeStatusAsync(const GetUpgradeStatusRequest& request, const GetUpgradeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetUpgradeStatus(request), context);
    } );
}

ListDomainNamesOutcome ElasticsearchServiceClient::ListDomainNames(const ListDomainNamesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDomainNames, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDomainNames, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/domain");
  return ListDomainNamesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDomainNamesOutcomeCallable ElasticsearchServiceClient::ListDomainNamesCallable(const ListDomainNamesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainNamesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomainNames(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::ListDomainNamesAsync(const ListDomainNamesRequest& request, const ListDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDomainNames(request), context);
    } );
}

ListDomainsForPackageOutcome ElasticsearchServiceClient::ListDomainsForPackage(const ListDomainsForPackageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDomainsForPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PackageIDHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDomainsForPackage", "Required field: PackageID, is not set");
    return ListDomainsForPackageOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDomainsForPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/packages/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageID());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains");
  return ListDomainsForPackageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDomainsForPackageOutcomeCallable ElasticsearchServiceClient::ListDomainsForPackageCallable(const ListDomainsForPackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainsForPackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomainsForPackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::ListDomainsForPackageAsync(const ListDomainsForPackageRequest& request, const ListDomainsForPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDomainsForPackage(request), context);
    } );
}

ListElasticsearchInstanceTypesOutcome ElasticsearchServiceClient::ListElasticsearchInstanceTypes(const ListElasticsearchInstanceTypesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListElasticsearchInstanceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ElasticsearchVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListElasticsearchInstanceTypes", "Required field: ElasticsearchVersion, is not set");
    return ListElasticsearchInstanceTypesOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ElasticsearchVersion]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListElasticsearchInstanceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/instanceTypes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetElasticsearchVersion());
  return ListElasticsearchInstanceTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListElasticsearchInstanceTypesOutcomeCallable ElasticsearchServiceClient::ListElasticsearchInstanceTypesCallable(const ListElasticsearchInstanceTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListElasticsearchInstanceTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListElasticsearchInstanceTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::ListElasticsearchInstanceTypesAsync(const ListElasticsearchInstanceTypesRequest& request, const ListElasticsearchInstanceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListElasticsearchInstanceTypes(request), context);
    } );
}

ListElasticsearchVersionsOutcome ElasticsearchServiceClient::ListElasticsearchVersions(const ListElasticsearchVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListElasticsearchVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListElasticsearchVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/versions");
  return ListElasticsearchVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListElasticsearchVersionsOutcomeCallable ElasticsearchServiceClient::ListElasticsearchVersionsCallable(const ListElasticsearchVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListElasticsearchVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListElasticsearchVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::ListElasticsearchVersionsAsync(const ListElasticsearchVersionsRequest& request, const ListElasticsearchVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListElasticsearchVersions(request), context);
    } );
}

ListPackagesForDomainOutcome ElasticsearchServiceClient::ListPackagesForDomain(const ListPackagesForDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPackagesForDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPackagesForDomain", "Required field: DomainName, is not set");
    return ListPackagesForDomainOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPackagesForDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/domain/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/packages");
  return ListPackagesForDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPackagesForDomainOutcomeCallable ElasticsearchServiceClient::ListPackagesForDomainCallable(const ListPackagesForDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPackagesForDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPackagesForDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::ListPackagesForDomainAsync(const ListPackagesForDomainRequest& request, const ListPackagesForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPackagesForDomain(request), context);
    } );
}

ListTagsOutcome ElasticsearchServiceClient::ListTags(const ListTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTags", "Required field: ARN, is not set");
    return ListTagsOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ARN]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/tags/");
  return ListTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsOutcomeCallable ElasticsearchServiceClient::ListTagsCallable(const ListTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::ListTagsAsync(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTags(request), context);
    } );
}

ListVpcEndpointAccessOutcome ElasticsearchServiceClient::ListVpcEndpointAccess(const ListVpcEndpointAccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVpcEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVpcEndpointAccess", "Required field: DomainName, is not set");
    return ListVpcEndpointAccessOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVpcEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/domain/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listVpcEndpointAccess");
  return ListVpcEndpointAccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVpcEndpointAccessOutcomeCallable ElasticsearchServiceClient::ListVpcEndpointAccessCallable(const ListVpcEndpointAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVpcEndpointAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVpcEndpointAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::ListVpcEndpointAccessAsync(const ListVpcEndpointAccessRequest& request, const ListVpcEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListVpcEndpointAccess(request), context);
    } );
}

ListVpcEndpointsOutcome ElasticsearchServiceClient::ListVpcEndpoints(const ListVpcEndpointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVpcEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVpcEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/vpcEndpoints");
  return ListVpcEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVpcEndpointsOutcomeCallable ElasticsearchServiceClient::ListVpcEndpointsCallable(const ListVpcEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVpcEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVpcEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::ListVpcEndpointsAsync(const ListVpcEndpointsRequest& request, const ListVpcEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListVpcEndpoints(request), context);
    } );
}

ListVpcEndpointsForDomainOutcome ElasticsearchServiceClient::ListVpcEndpointsForDomain(const ListVpcEndpointsForDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVpcEndpointsForDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVpcEndpointsForDomain", "Required field: DomainName, is not set");
    return ListVpcEndpointsForDomainOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVpcEndpointsForDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/domain/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/vpcEndpoints");
  return ListVpcEndpointsForDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVpcEndpointsForDomainOutcomeCallable ElasticsearchServiceClient::ListVpcEndpointsForDomainCallable(const ListVpcEndpointsForDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVpcEndpointsForDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVpcEndpointsForDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::ListVpcEndpointsForDomainAsync(const ListVpcEndpointsForDomainRequest& request, const ListVpcEndpointsForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListVpcEndpointsForDomain(request), context);
    } );
}

PurchaseReservedElasticsearchInstanceOfferingOutcome ElasticsearchServiceClient::PurchaseReservedElasticsearchInstanceOffering(const PurchaseReservedElasticsearchInstanceOfferingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PurchaseReservedElasticsearchInstanceOffering, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PurchaseReservedElasticsearchInstanceOffering, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/purchaseReservedInstanceOffering");
  return PurchaseReservedElasticsearchInstanceOfferingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PurchaseReservedElasticsearchInstanceOfferingOutcomeCallable ElasticsearchServiceClient::PurchaseReservedElasticsearchInstanceOfferingCallable(const PurchaseReservedElasticsearchInstanceOfferingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PurchaseReservedElasticsearchInstanceOfferingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PurchaseReservedElasticsearchInstanceOffering(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::PurchaseReservedElasticsearchInstanceOfferingAsync(const PurchaseReservedElasticsearchInstanceOfferingRequest& request, const PurchaseReservedElasticsearchInstanceOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PurchaseReservedElasticsearchInstanceOffering(request), context);
    } );
}

RejectInboundCrossClusterSearchConnectionOutcome ElasticsearchServiceClient::RejectInboundCrossClusterSearchConnection(const RejectInboundCrossClusterSearchConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RejectInboundCrossClusterSearchConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CrossClusterSearchConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RejectInboundCrossClusterSearchConnection", "Required field: CrossClusterSearchConnectionId, is not set");
    return RejectInboundCrossClusterSearchConnectionOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CrossClusterSearchConnectionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RejectInboundCrossClusterSearchConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/ccs/inboundConnection/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCrossClusterSearchConnectionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/reject");
  return RejectInboundCrossClusterSearchConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

RejectInboundCrossClusterSearchConnectionOutcomeCallable ElasticsearchServiceClient::RejectInboundCrossClusterSearchConnectionCallable(const RejectInboundCrossClusterSearchConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectInboundCrossClusterSearchConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectInboundCrossClusterSearchConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::RejectInboundCrossClusterSearchConnectionAsync(const RejectInboundCrossClusterSearchConnectionRequest& request, const RejectInboundCrossClusterSearchConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RejectInboundCrossClusterSearchConnection(request), context);
    } );
}

RemoveTagsOutcome ElasticsearchServiceClient::RemoveTags(const RemoveTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/tags-removal");
  return RemoveTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveTagsOutcomeCallable ElasticsearchServiceClient::RemoveTagsCallable(const RemoveTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::RemoveTagsAsync(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemoveTags(request), context);
    } );
}

RevokeVpcEndpointAccessOutcome ElasticsearchServiceClient::RevokeVpcEndpointAccess(const RevokeVpcEndpointAccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RevokeVpcEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RevokeVpcEndpointAccess", "Required field: DomainName, is not set");
    return RevokeVpcEndpointAccessOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RevokeVpcEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/domain/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/revokeVpcEndpointAccess");
  return RevokeVpcEndpointAccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RevokeVpcEndpointAccessOutcomeCallable ElasticsearchServiceClient::RevokeVpcEndpointAccessCallable(const RevokeVpcEndpointAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokeVpcEndpointAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokeVpcEndpointAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::RevokeVpcEndpointAccessAsync(const RevokeVpcEndpointAccessRequest& request, const RevokeVpcEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RevokeVpcEndpointAccess(request), context);
    } );
}

StartElasticsearchServiceSoftwareUpdateOutcome ElasticsearchServiceClient::StartElasticsearchServiceSoftwareUpdate(const StartElasticsearchServiceSoftwareUpdateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartElasticsearchServiceSoftwareUpdate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartElasticsearchServiceSoftwareUpdate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/serviceSoftwareUpdate/start");
  return StartElasticsearchServiceSoftwareUpdateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartElasticsearchServiceSoftwareUpdateOutcomeCallable ElasticsearchServiceClient::StartElasticsearchServiceSoftwareUpdateCallable(const StartElasticsearchServiceSoftwareUpdateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartElasticsearchServiceSoftwareUpdateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartElasticsearchServiceSoftwareUpdate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::StartElasticsearchServiceSoftwareUpdateAsync(const StartElasticsearchServiceSoftwareUpdateRequest& request, const StartElasticsearchServiceSoftwareUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartElasticsearchServiceSoftwareUpdate(request), context);
    } );
}

UpdateElasticsearchDomainConfigOutcome ElasticsearchServiceClient::UpdateElasticsearchDomainConfig(const UpdateElasticsearchDomainConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateElasticsearchDomainConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateElasticsearchDomainConfig", "Required field: DomainName, is not set");
    return UpdateElasticsearchDomainConfigOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateElasticsearchDomainConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/domain/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  return UpdateElasticsearchDomainConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateElasticsearchDomainConfigOutcomeCallable ElasticsearchServiceClient::UpdateElasticsearchDomainConfigCallable(const UpdateElasticsearchDomainConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateElasticsearchDomainConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateElasticsearchDomainConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::UpdateElasticsearchDomainConfigAsync(const UpdateElasticsearchDomainConfigRequest& request, const UpdateElasticsearchDomainConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateElasticsearchDomainConfig(request), context);
    } );
}

UpdatePackageOutcome ElasticsearchServiceClient::UpdatePackage(const UpdatePackageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/packages/update");
  return UpdatePackageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePackageOutcomeCallable ElasticsearchServiceClient::UpdatePackageCallable(const UpdatePackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::UpdatePackageAsync(const UpdatePackageRequest& request, const UpdatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdatePackage(request), context);
    } );
}

UpdateVpcEndpointOutcome ElasticsearchServiceClient::UpdateVpcEndpoint(const UpdateVpcEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/vpcEndpoints/update");
  return UpdateVpcEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateVpcEndpointOutcomeCallable ElasticsearchServiceClient::UpdateVpcEndpointCallable(const UpdateVpcEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVpcEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVpcEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::UpdateVpcEndpointAsync(const UpdateVpcEndpointRequest& request, const UpdateVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateVpcEndpoint(request), context);
    } );
}

UpgradeElasticsearchDomainOutcome ElasticsearchServiceClient::UpgradeElasticsearchDomain(const UpgradeElasticsearchDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpgradeElasticsearchDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpgradeElasticsearchDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-01-01/es/upgradeDomain");
  return UpgradeElasticsearchDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpgradeElasticsearchDomainOutcomeCallable ElasticsearchServiceClient::UpgradeElasticsearchDomainCallable(const UpgradeElasticsearchDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpgradeElasticsearchDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpgradeElasticsearchDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::UpgradeElasticsearchDomainAsync(const UpgradeElasticsearchDomainRequest& request, const UpgradeElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpgradeElasticsearchDomain(request), context);
    } );
}

