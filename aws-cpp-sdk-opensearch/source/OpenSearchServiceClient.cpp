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

#include <aws/opensearch/OpenSearchServiceClient.h>
#include <aws/opensearch/OpenSearchServiceErrorMarshaller.h>
#include <aws/opensearch/OpenSearchServiceEndpointProvider.h>
#include <aws/opensearch/model/AcceptInboundConnectionRequest.h>
#include <aws/opensearch/model/AddTagsRequest.h>
#include <aws/opensearch/model/AssociatePackageRequest.h>
#include <aws/opensearch/model/AuthorizeVpcEndpointAccessRequest.h>
#include <aws/opensearch/model/CancelServiceSoftwareUpdateRequest.h>
#include <aws/opensearch/model/CreateDomainRequest.h>
#include <aws/opensearch/model/CreateOutboundConnectionRequest.h>
#include <aws/opensearch/model/CreatePackageRequest.h>
#include <aws/opensearch/model/CreateVpcEndpointRequest.h>
#include <aws/opensearch/model/DeleteDomainRequest.h>
#include <aws/opensearch/model/DeleteInboundConnectionRequest.h>
#include <aws/opensearch/model/DeleteOutboundConnectionRequest.h>
#include <aws/opensearch/model/DeletePackageRequest.h>
#include <aws/opensearch/model/DeleteVpcEndpointRequest.h>
#include <aws/opensearch/model/DescribeDomainRequest.h>
#include <aws/opensearch/model/DescribeDomainAutoTunesRequest.h>
#include <aws/opensearch/model/DescribeDomainChangeProgressRequest.h>
#include <aws/opensearch/model/DescribeDomainConfigRequest.h>
#include <aws/opensearch/model/DescribeDomainsRequest.h>
#include <aws/opensearch/model/DescribeInboundConnectionsRequest.h>
#include <aws/opensearch/model/DescribeInstanceTypeLimitsRequest.h>
#include <aws/opensearch/model/DescribeOutboundConnectionsRequest.h>
#include <aws/opensearch/model/DescribePackagesRequest.h>
#include <aws/opensearch/model/DescribeReservedInstanceOfferingsRequest.h>
#include <aws/opensearch/model/DescribeReservedInstancesRequest.h>
#include <aws/opensearch/model/DescribeVpcEndpointsRequest.h>
#include <aws/opensearch/model/DissociatePackageRequest.h>
#include <aws/opensearch/model/GetCompatibleVersionsRequest.h>
#include <aws/opensearch/model/GetPackageVersionHistoryRequest.h>
#include <aws/opensearch/model/GetUpgradeHistoryRequest.h>
#include <aws/opensearch/model/GetUpgradeStatusRequest.h>
#include <aws/opensearch/model/ListDomainNamesRequest.h>
#include <aws/opensearch/model/ListDomainsForPackageRequest.h>
#include <aws/opensearch/model/ListInstanceTypeDetailsRequest.h>
#include <aws/opensearch/model/ListPackagesForDomainRequest.h>
#include <aws/opensearch/model/ListTagsRequest.h>
#include <aws/opensearch/model/ListVersionsRequest.h>
#include <aws/opensearch/model/ListVpcEndpointAccessRequest.h>
#include <aws/opensearch/model/ListVpcEndpointsRequest.h>
#include <aws/opensearch/model/ListVpcEndpointsForDomainRequest.h>
#include <aws/opensearch/model/PurchaseReservedInstanceOfferingRequest.h>
#include <aws/opensearch/model/RejectInboundConnectionRequest.h>
#include <aws/opensearch/model/RemoveTagsRequest.h>
#include <aws/opensearch/model/RevokeVpcEndpointAccessRequest.h>
#include <aws/opensearch/model/StartServiceSoftwareUpdateRequest.h>
#include <aws/opensearch/model/UpdateDomainConfigRequest.h>
#include <aws/opensearch/model/UpdatePackageRequest.h>
#include <aws/opensearch/model/UpdateVpcEndpointRequest.h>
#include <aws/opensearch/model/UpgradeDomainRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::OpenSearchService;
using namespace Aws::OpenSearchService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* OpenSearchServiceClient::SERVICE_NAME = "es";
const char* OpenSearchServiceClient::ALLOCATION_TAG = "OpenSearchServiceClient";

OpenSearchServiceClient::OpenSearchServiceClient(const OpenSearchService::OpenSearchServiceClientConfiguration& clientConfiguration,
                                                 std::shared_ptr<OpenSearchServiceEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OpenSearchServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

OpenSearchServiceClient::OpenSearchServiceClient(const AWSCredentials& credentials,
                                                 std::shared_ptr<OpenSearchServiceEndpointProviderBase> endpointProvider,
                                                 const OpenSearchService::OpenSearchServiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OpenSearchServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

OpenSearchServiceClient::OpenSearchServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 std::shared_ptr<OpenSearchServiceEndpointProviderBase> endpointProvider,
                                                 const OpenSearchService::OpenSearchServiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OpenSearchServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  OpenSearchServiceClient::OpenSearchServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OpenSearchServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<OpenSearchServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

OpenSearchServiceClient::OpenSearchServiceClient(const AWSCredentials& credentials,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OpenSearchServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<OpenSearchServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

OpenSearchServiceClient::OpenSearchServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OpenSearchServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<OpenSearchServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
OpenSearchServiceClient::~OpenSearchServiceClient()
{
}

std::shared_ptr<OpenSearchServiceEndpointProviderBase>& OpenSearchServiceClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void OpenSearchServiceClient::init(const OpenSearchService::OpenSearchServiceClientConfiguration& config)
{
  AWSClient::SetServiceClientName("OpenSearch");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void OpenSearchServiceClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AcceptInboundConnectionOutcome OpenSearchServiceClient::AcceptInboundConnection(const AcceptInboundConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AcceptInboundConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AcceptInboundConnection", "Required field: ConnectionId, is not set");
    return AcceptInboundConnectionOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AcceptInboundConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/cc/inboundConnection/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accept");
  return AcceptInboundConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AcceptInboundConnectionOutcomeCallable OpenSearchServiceClient::AcceptInboundConnectionCallable(const AcceptInboundConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptInboundConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptInboundConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::AcceptInboundConnectionAsync(const AcceptInboundConnectionRequest& request, const AcceptInboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AcceptInboundConnection(request), context);
    } );
}

AddTagsOutcome OpenSearchServiceClient::AddTags(const AddTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/tags");
  return AddTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddTagsOutcomeCallable OpenSearchServiceClient::AddTagsCallable(const AddTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::AddTagsAsync(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddTags(request), context);
    } );
}

AssociatePackageOutcome OpenSearchServiceClient::AssociatePackage(const AssociatePackageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociatePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PackageIDHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociatePackage", "Required field: PackageID, is not set");
    return AssociatePackageOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociatePackage", "Required field: DomainName, is not set");
    return AssociatePackageOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociatePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/packages/associate/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageID());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  return AssociatePackageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociatePackageOutcomeCallable OpenSearchServiceClient::AssociatePackageCallable(const AssociatePackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociatePackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociatePackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::AssociatePackageAsync(const AssociatePackageRequest& request, const AssociatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociatePackage(request), context);
    } );
}

AuthorizeVpcEndpointAccessOutcome OpenSearchServiceClient::AuthorizeVpcEndpointAccess(const AuthorizeVpcEndpointAccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AuthorizeVpcEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AuthorizeVpcEndpointAccess", "Required field: DomainName, is not set");
    return AuthorizeVpcEndpointAccessOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AuthorizeVpcEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/authorizeVpcEndpointAccess");
  return AuthorizeVpcEndpointAccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AuthorizeVpcEndpointAccessOutcomeCallable OpenSearchServiceClient::AuthorizeVpcEndpointAccessCallable(const AuthorizeVpcEndpointAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AuthorizeVpcEndpointAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AuthorizeVpcEndpointAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::AuthorizeVpcEndpointAccessAsync(const AuthorizeVpcEndpointAccessRequest& request, const AuthorizeVpcEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AuthorizeVpcEndpointAccess(request), context);
    } );
}

CancelServiceSoftwareUpdateOutcome OpenSearchServiceClient::CancelServiceSoftwareUpdate(const CancelServiceSoftwareUpdateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelServiceSoftwareUpdate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelServiceSoftwareUpdate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/serviceSoftwareUpdate/cancel");
  return CancelServiceSoftwareUpdateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelServiceSoftwareUpdateOutcomeCallable OpenSearchServiceClient::CancelServiceSoftwareUpdateCallable(const CancelServiceSoftwareUpdateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelServiceSoftwareUpdateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelServiceSoftwareUpdate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::CancelServiceSoftwareUpdateAsync(const CancelServiceSoftwareUpdateRequest& request, const CancelServiceSoftwareUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelServiceSoftwareUpdate(request), context);
    } );
}

CreateDomainOutcome OpenSearchServiceClient::CreateDomain(const CreateDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain");
  return CreateDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDomainOutcomeCallable OpenSearchServiceClient::CreateDomainCallable(const CreateDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::CreateDomainAsync(const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDomain(request), context);
    } );
}

CreateOutboundConnectionOutcome OpenSearchServiceClient::CreateOutboundConnection(const CreateOutboundConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateOutboundConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateOutboundConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/cc/outboundConnection");
  return CreateOutboundConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateOutboundConnectionOutcomeCallable OpenSearchServiceClient::CreateOutboundConnectionCallable(const CreateOutboundConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateOutboundConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateOutboundConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::CreateOutboundConnectionAsync(const CreateOutboundConnectionRequest& request, const CreateOutboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateOutboundConnection(request), context);
    } );
}

CreatePackageOutcome OpenSearchServiceClient::CreatePackage(const CreatePackageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/packages");
  return CreatePackageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePackageOutcomeCallable OpenSearchServiceClient::CreatePackageCallable(const CreatePackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::CreatePackageAsync(const CreatePackageRequest& request, const CreatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreatePackage(request), context);
    } );
}

CreateVpcEndpointOutcome OpenSearchServiceClient::CreateVpcEndpoint(const CreateVpcEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/vpcEndpoints");
  return CreateVpcEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVpcEndpointOutcomeCallable OpenSearchServiceClient::CreateVpcEndpointCallable(const CreateVpcEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVpcEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVpcEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::CreateVpcEndpointAsync(const CreateVpcEndpointRequest& request, const CreateVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateVpcEndpoint(request), context);
    } );
}

DeleteDomainOutcome OpenSearchServiceClient::DeleteDomain(const DeleteDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDomain", "Required field: DomainName, is not set");
    return DeleteDomainOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  return DeleteDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDomainOutcomeCallable OpenSearchServiceClient::DeleteDomainCallable(const DeleteDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::DeleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDomain(request), context);
    } );
}

DeleteInboundConnectionOutcome OpenSearchServiceClient::DeleteInboundConnection(const DeleteInboundConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInboundConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteInboundConnection", "Required field: ConnectionId, is not set");
    return DeleteInboundConnectionOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteInboundConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/cc/inboundConnection/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectionId());
  return DeleteInboundConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteInboundConnectionOutcomeCallable OpenSearchServiceClient::DeleteInboundConnectionCallable(const DeleteInboundConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInboundConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInboundConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::DeleteInboundConnectionAsync(const DeleteInboundConnectionRequest& request, const DeleteInboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteInboundConnection(request), context);
    } );
}

DeleteOutboundConnectionOutcome OpenSearchServiceClient::DeleteOutboundConnection(const DeleteOutboundConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteOutboundConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteOutboundConnection", "Required field: ConnectionId, is not set");
    return DeleteOutboundConnectionOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteOutboundConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/cc/outboundConnection/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectionId());
  return DeleteOutboundConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteOutboundConnectionOutcomeCallable OpenSearchServiceClient::DeleteOutboundConnectionCallable(const DeleteOutboundConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteOutboundConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteOutboundConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::DeleteOutboundConnectionAsync(const DeleteOutboundConnectionRequest& request, const DeleteOutboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteOutboundConnection(request), context);
    } );
}

DeletePackageOutcome OpenSearchServiceClient::DeletePackage(const DeletePackageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PackageIDHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePackage", "Required field: PackageID, is not set");
    return DeletePackageOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/packages/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageID());
  return DeletePackageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePackageOutcomeCallable OpenSearchServiceClient::DeletePackageCallable(const DeletePackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::DeletePackageAsync(const DeletePackageRequest& request, const DeletePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeletePackage(request), context);
    } );
}

DeleteVpcEndpointOutcome OpenSearchServiceClient::DeleteVpcEndpoint(const DeleteVpcEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VpcEndpointIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVpcEndpoint", "Required field: VpcEndpointId, is not set");
    return DeleteVpcEndpointOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VpcEndpointId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/vpcEndpoints/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVpcEndpointId());
  return DeleteVpcEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVpcEndpointOutcomeCallable OpenSearchServiceClient::DeleteVpcEndpointCallable(const DeleteVpcEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVpcEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVpcEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::DeleteVpcEndpointAsync(const DeleteVpcEndpointRequest& request, const DeleteVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVpcEndpoint(request), context);
    } );
}

DescribeDomainOutcome OpenSearchServiceClient::DescribeDomain(const DescribeDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDomain", "Required field: DomainName, is not set");
    return DescribeDomainOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  return DescribeDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDomainOutcomeCallable OpenSearchServiceClient::DescribeDomainCallable(const DescribeDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::DescribeDomainAsync(const DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDomain(request), context);
    } );
}

DescribeDomainAutoTunesOutcome OpenSearchServiceClient::DescribeDomainAutoTunes(const DescribeDomainAutoTunesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDomainAutoTunes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDomainAutoTunes", "Required field: DomainName, is not set");
    return DescribeDomainAutoTunesOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDomainAutoTunes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/autoTunes");
  return DescribeDomainAutoTunesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDomainAutoTunesOutcomeCallable OpenSearchServiceClient::DescribeDomainAutoTunesCallable(const DescribeDomainAutoTunesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDomainAutoTunesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDomainAutoTunes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::DescribeDomainAutoTunesAsync(const DescribeDomainAutoTunesRequest& request, const DescribeDomainAutoTunesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDomainAutoTunes(request), context);
    } );
}

DescribeDomainChangeProgressOutcome OpenSearchServiceClient::DescribeDomainChangeProgress(const DescribeDomainChangeProgressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDomainChangeProgress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDomainChangeProgress", "Required field: DomainName, is not set");
    return DescribeDomainChangeProgressOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDomainChangeProgress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/progress");
  return DescribeDomainChangeProgressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDomainChangeProgressOutcomeCallable OpenSearchServiceClient::DescribeDomainChangeProgressCallable(const DescribeDomainChangeProgressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDomainChangeProgressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDomainChangeProgress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::DescribeDomainChangeProgressAsync(const DescribeDomainChangeProgressRequest& request, const DescribeDomainChangeProgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDomainChangeProgress(request), context);
    } );
}

DescribeDomainConfigOutcome OpenSearchServiceClient::DescribeDomainConfig(const DescribeDomainConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDomainConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDomainConfig", "Required field: DomainName, is not set");
    return DescribeDomainConfigOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDomainConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  return DescribeDomainConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDomainConfigOutcomeCallable OpenSearchServiceClient::DescribeDomainConfigCallable(const DescribeDomainConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDomainConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDomainConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::DescribeDomainConfigAsync(const DescribeDomainConfigRequest& request, const DescribeDomainConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDomainConfig(request), context);
    } );
}

DescribeDomainsOutcome OpenSearchServiceClient::DescribeDomains(const DescribeDomainsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain-info");
  return DescribeDomainsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDomainsOutcomeCallable OpenSearchServiceClient::DescribeDomainsCallable(const DescribeDomainsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDomainsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDomains(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::DescribeDomainsAsync(const DescribeDomainsRequest& request, const DescribeDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDomains(request), context);
    } );
}

DescribeInboundConnectionsOutcome OpenSearchServiceClient::DescribeInboundConnections(const DescribeInboundConnectionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInboundConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInboundConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/cc/inboundConnection/search");
  return DescribeInboundConnectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeInboundConnectionsOutcomeCallable OpenSearchServiceClient::DescribeInboundConnectionsCallable(const DescribeInboundConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInboundConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInboundConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::DescribeInboundConnectionsAsync(const DescribeInboundConnectionsRequest& request, const DescribeInboundConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeInboundConnections(request), context);
    } );
}

DescribeInstanceTypeLimitsOutcome OpenSearchServiceClient::DescribeInstanceTypeLimits(const DescribeInstanceTypeLimitsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceTypeLimits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInstanceTypeLimits", "Required field: InstanceType, is not set");
    return DescribeInstanceTypeLimitsOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceType]", false));
  }
  if (!request.EngineVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInstanceTypeLimits", "Required field: EngineVersion, is not set");
    return DescribeInstanceTypeLimitsOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EngineVersion]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstanceTypeLimits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/instanceTypeLimits/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEngineVersion());
  endpointResolutionOutcome.GetResult().AddPathSegment(OpenSearchPartitionInstanceTypeMapper::GetNameForOpenSearchPartitionInstanceType(request.GetInstanceType()));
  return DescribeInstanceTypeLimitsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeInstanceTypeLimitsOutcomeCallable OpenSearchServiceClient::DescribeInstanceTypeLimitsCallable(const DescribeInstanceTypeLimitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstanceTypeLimitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstanceTypeLimits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::DescribeInstanceTypeLimitsAsync(const DescribeInstanceTypeLimitsRequest& request, const DescribeInstanceTypeLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeInstanceTypeLimits(request), context);
    } );
}

DescribeOutboundConnectionsOutcome OpenSearchServiceClient::DescribeOutboundConnections(const DescribeOutboundConnectionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeOutboundConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeOutboundConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/cc/outboundConnection/search");
  return DescribeOutboundConnectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeOutboundConnectionsOutcomeCallable OpenSearchServiceClient::DescribeOutboundConnectionsCallable(const DescribeOutboundConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOutboundConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOutboundConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::DescribeOutboundConnectionsAsync(const DescribeOutboundConnectionsRequest& request, const DescribeOutboundConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeOutboundConnections(request), context);
    } );
}

DescribePackagesOutcome OpenSearchServiceClient::DescribePackages(const DescribePackagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePackages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePackages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/packages/describe");
  return DescribePackagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePackagesOutcomeCallable OpenSearchServiceClient::DescribePackagesCallable(const DescribePackagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePackagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePackages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::DescribePackagesAsync(const DescribePackagesRequest& request, const DescribePackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribePackages(request), context);
    } );
}

DescribeReservedInstanceOfferingsOutcome OpenSearchServiceClient::DescribeReservedInstanceOfferings(const DescribeReservedInstanceOfferingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReservedInstanceOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReservedInstanceOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/reservedInstanceOfferings");
  return DescribeReservedInstanceOfferingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeReservedInstanceOfferingsOutcomeCallable OpenSearchServiceClient::DescribeReservedInstanceOfferingsCallable(const DescribeReservedInstanceOfferingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservedInstanceOfferingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReservedInstanceOfferings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::DescribeReservedInstanceOfferingsAsync(const DescribeReservedInstanceOfferingsRequest& request, const DescribeReservedInstanceOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeReservedInstanceOfferings(request), context);
    } );
}

DescribeReservedInstancesOutcome OpenSearchServiceClient::DescribeReservedInstances(const DescribeReservedInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReservedInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReservedInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/reservedInstances");
  return DescribeReservedInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeReservedInstancesOutcomeCallable OpenSearchServiceClient::DescribeReservedInstancesCallable(const DescribeReservedInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservedInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReservedInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::DescribeReservedInstancesAsync(const DescribeReservedInstancesRequest& request, const DescribeReservedInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeReservedInstances(request), context);
    } );
}

DescribeVpcEndpointsOutcome OpenSearchServiceClient::DescribeVpcEndpoints(const DescribeVpcEndpointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpcEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpcEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/vpcEndpoints/describe");
  return DescribeVpcEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeVpcEndpointsOutcomeCallable OpenSearchServiceClient::DescribeVpcEndpointsCallable(const DescribeVpcEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVpcEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::DescribeVpcEndpointsAsync(const DescribeVpcEndpointsRequest& request, const DescribeVpcEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeVpcEndpoints(request), context);
    } );
}

DissociatePackageOutcome OpenSearchServiceClient::DissociatePackage(const DissociatePackageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DissociatePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PackageIDHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DissociatePackage", "Required field: PackageID, is not set");
    return DissociatePackageOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DissociatePackage", "Required field: DomainName, is not set");
    return DissociatePackageOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DissociatePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/packages/dissociate/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageID());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  return DissociatePackageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DissociatePackageOutcomeCallable OpenSearchServiceClient::DissociatePackageCallable(const DissociatePackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DissociatePackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DissociatePackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::DissociatePackageAsync(const DissociatePackageRequest& request, const DissociatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DissociatePackage(request), context);
    } );
}

GetCompatibleVersionsOutcome OpenSearchServiceClient::GetCompatibleVersions(const GetCompatibleVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCompatibleVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCompatibleVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/compatibleVersions");
  return GetCompatibleVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCompatibleVersionsOutcomeCallable OpenSearchServiceClient::GetCompatibleVersionsCallable(const GetCompatibleVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCompatibleVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCompatibleVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::GetCompatibleVersionsAsync(const GetCompatibleVersionsRequest& request, const GetCompatibleVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCompatibleVersions(request), context);
    } );
}

GetPackageVersionHistoryOutcome OpenSearchServiceClient::GetPackageVersionHistory(const GetPackageVersionHistoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPackageVersionHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PackageIDHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPackageVersionHistory", "Required field: PackageID, is not set");
    return GetPackageVersionHistoryOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPackageVersionHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/packages/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageID());
  endpointResolutionOutcome.GetResult().AddPathSegments("/history");
  return GetPackageVersionHistoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPackageVersionHistoryOutcomeCallable OpenSearchServiceClient::GetPackageVersionHistoryCallable(const GetPackageVersionHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPackageVersionHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPackageVersionHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::GetPackageVersionHistoryAsync(const GetPackageVersionHistoryRequest& request, const GetPackageVersionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPackageVersionHistory(request), context);
    } );
}

GetUpgradeHistoryOutcome OpenSearchServiceClient::GetUpgradeHistory(const GetUpgradeHistoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUpgradeHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUpgradeHistory", "Required field: DomainName, is not set");
    return GetUpgradeHistoryOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUpgradeHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/upgradeDomain/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/history");
  return GetUpgradeHistoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetUpgradeHistoryOutcomeCallable OpenSearchServiceClient::GetUpgradeHistoryCallable(const GetUpgradeHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUpgradeHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUpgradeHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::GetUpgradeHistoryAsync(const GetUpgradeHistoryRequest& request, const GetUpgradeHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetUpgradeHistory(request), context);
    } );
}

GetUpgradeStatusOutcome OpenSearchServiceClient::GetUpgradeStatus(const GetUpgradeStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUpgradeStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUpgradeStatus", "Required field: DomainName, is not set");
    return GetUpgradeStatusOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUpgradeStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/upgradeDomain/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  return GetUpgradeStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetUpgradeStatusOutcomeCallable OpenSearchServiceClient::GetUpgradeStatusCallable(const GetUpgradeStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUpgradeStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUpgradeStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::GetUpgradeStatusAsync(const GetUpgradeStatusRequest& request, const GetUpgradeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetUpgradeStatus(request), context);
    } );
}

ListDomainNamesOutcome OpenSearchServiceClient::ListDomainNames(const ListDomainNamesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDomainNames, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDomainNames, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/domain");
  return ListDomainNamesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDomainNamesOutcomeCallable OpenSearchServiceClient::ListDomainNamesCallable(const ListDomainNamesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainNamesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomainNames(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::ListDomainNamesAsync(const ListDomainNamesRequest& request, const ListDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDomainNames(request), context);
    } );
}

ListDomainsForPackageOutcome OpenSearchServiceClient::ListDomainsForPackage(const ListDomainsForPackageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDomainsForPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PackageIDHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDomainsForPackage", "Required field: PackageID, is not set");
    return ListDomainsForPackageOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDomainsForPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/packages/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageID());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains");
  return ListDomainsForPackageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDomainsForPackageOutcomeCallable OpenSearchServiceClient::ListDomainsForPackageCallable(const ListDomainsForPackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainsForPackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomainsForPackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::ListDomainsForPackageAsync(const ListDomainsForPackageRequest& request, const ListDomainsForPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDomainsForPackage(request), context);
    } );
}

ListInstanceTypeDetailsOutcome OpenSearchServiceClient::ListInstanceTypeDetails(const ListInstanceTypeDetailsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInstanceTypeDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EngineVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListInstanceTypeDetails", "Required field: EngineVersion, is not set");
    return ListInstanceTypeDetailsOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EngineVersion]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListInstanceTypeDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/instanceTypeDetails/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEngineVersion());
  return ListInstanceTypeDetailsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListInstanceTypeDetailsOutcomeCallable OpenSearchServiceClient::ListInstanceTypeDetailsCallable(const ListInstanceTypeDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstanceTypeDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstanceTypeDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::ListInstanceTypeDetailsAsync(const ListInstanceTypeDetailsRequest& request, const ListInstanceTypeDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListInstanceTypeDetails(request), context);
    } );
}

ListPackagesForDomainOutcome OpenSearchServiceClient::ListPackagesForDomain(const ListPackagesForDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPackagesForDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPackagesForDomain", "Required field: DomainName, is not set");
    return ListPackagesForDomainOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPackagesForDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/domain/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/packages");
  return ListPackagesForDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPackagesForDomainOutcomeCallable OpenSearchServiceClient::ListPackagesForDomainCallable(const ListPackagesForDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPackagesForDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPackagesForDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::ListPackagesForDomainAsync(const ListPackagesForDomainRequest& request, const ListPackagesForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPackagesForDomain(request), context);
    } );
}

ListTagsOutcome OpenSearchServiceClient::ListTags(const ListTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTags", "Required field: ARN, is not set");
    return ListTagsOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ARN]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/tags/");
  return ListTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsOutcomeCallable OpenSearchServiceClient::ListTagsCallable(const ListTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::ListTagsAsync(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTags(request), context);
    } );
}

ListVersionsOutcome OpenSearchServiceClient::ListVersions(const ListVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/versions");
  return ListVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVersionsOutcomeCallable OpenSearchServiceClient::ListVersionsCallable(const ListVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::ListVersionsAsync(const ListVersionsRequest& request, const ListVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListVersions(request), context);
    } );
}

ListVpcEndpointAccessOutcome OpenSearchServiceClient::ListVpcEndpointAccess(const ListVpcEndpointAccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVpcEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVpcEndpointAccess", "Required field: DomainName, is not set");
    return ListVpcEndpointAccessOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVpcEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listVpcEndpointAccess");
  return ListVpcEndpointAccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVpcEndpointAccessOutcomeCallable OpenSearchServiceClient::ListVpcEndpointAccessCallable(const ListVpcEndpointAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVpcEndpointAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVpcEndpointAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::ListVpcEndpointAccessAsync(const ListVpcEndpointAccessRequest& request, const ListVpcEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListVpcEndpointAccess(request), context);
    } );
}

ListVpcEndpointsOutcome OpenSearchServiceClient::ListVpcEndpoints(const ListVpcEndpointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVpcEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVpcEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/vpcEndpoints");
  return ListVpcEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVpcEndpointsOutcomeCallable OpenSearchServiceClient::ListVpcEndpointsCallable(const ListVpcEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVpcEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVpcEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::ListVpcEndpointsAsync(const ListVpcEndpointsRequest& request, const ListVpcEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListVpcEndpoints(request), context);
    } );
}

ListVpcEndpointsForDomainOutcome OpenSearchServiceClient::ListVpcEndpointsForDomain(const ListVpcEndpointsForDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVpcEndpointsForDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVpcEndpointsForDomain", "Required field: DomainName, is not set");
    return ListVpcEndpointsForDomainOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVpcEndpointsForDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/vpcEndpoints");
  return ListVpcEndpointsForDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVpcEndpointsForDomainOutcomeCallable OpenSearchServiceClient::ListVpcEndpointsForDomainCallable(const ListVpcEndpointsForDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVpcEndpointsForDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVpcEndpointsForDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::ListVpcEndpointsForDomainAsync(const ListVpcEndpointsForDomainRequest& request, const ListVpcEndpointsForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListVpcEndpointsForDomain(request), context);
    } );
}

PurchaseReservedInstanceOfferingOutcome OpenSearchServiceClient::PurchaseReservedInstanceOffering(const PurchaseReservedInstanceOfferingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PurchaseReservedInstanceOffering, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PurchaseReservedInstanceOffering, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/purchaseReservedInstanceOffering");
  return PurchaseReservedInstanceOfferingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PurchaseReservedInstanceOfferingOutcomeCallable OpenSearchServiceClient::PurchaseReservedInstanceOfferingCallable(const PurchaseReservedInstanceOfferingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PurchaseReservedInstanceOfferingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PurchaseReservedInstanceOffering(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::PurchaseReservedInstanceOfferingAsync(const PurchaseReservedInstanceOfferingRequest& request, const PurchaseReservedInstanceOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PurchaseReservedInstanceOffering(request), context);
    } );
}

RejectInboundConnectionOutcome OpenSearchServiceClient::RejectInboundConnection(const RejectInboundConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RejectInboundConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RejectInboundConnection", "Required field: ConnectionId, is not set");
    return RejectInboundConnectionOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RejectInboundConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/cc/inboundConnection/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/reject");
  return RejectInboundConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

RejectInboundConnectionOutcomeCallable OpenSearchServiceClient::RejectInboundConnectionCallable(const RejectInboundConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectInboundConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectInboundConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::RejectInboundConnectionAsync(const RejectInboundConnectionRequest& request, const RejectInboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RejectInboundConnection(request), context);
    } );
}

RemoveTagsOutcome OpenSearchServiceClient::RemoveTags(const RemoveTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/tags-removal");
  return RemoveTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveTagsOutcomeCallable OpenSearchServiceClient::RemoveTagsCallable(const RemoveTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::RemoveTagsAsync(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemoveTags(request), context);
    } );
}

RevokeVpcEndpointAccessOutcome OpenSearchServiceClient::RevokeVpcEndpointAccess(const RevokeVpcEndpointAccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RevokeVpcEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RevokeVpcEndpointAccess", "Required field: DomainName, is not set");
    return RevokeVpcEndpointAccessOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RevokeVpcEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/revokeVpcEndpointAccess");
  return RevokeVpcEndpointAccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RevokeVpcEndpointAccessOutcomeCallable OpenSearchServiceClient::RevokeVpcEndpointAccessCallable(const RevokeVpcEndpointAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokeVpcEndpointAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokeVpcEndpointAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::RevokeVpcEndpointAccessAsync(const RevokeVpcEndpointAccessRequest& request, const RevokeVpcEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RevokeVpcEndpointAccess(request), context);
    } );
}

StartServiceSoftwareUpdateOutcome OpenSearchServiceClient::StartServiceSoftwareUpdate(const StartServiceSoftwareUpdateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartServiceSoftwareUpdate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartServiceSoftwareUpdate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/serviceSoftwareUpdate/start");
  return StartServiceSoftwareUpdateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartServiceSoftwareUpdateOutcomeCallable OpenSearchServiceClient::StartServiceSoftwareUpdateCallable(const StartServiceSoftwareUpdateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartServiceSoftwareUpdateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartServiceSoftwareUpdate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::StartServiceSoftwareUpdateAsync(const StartServiceSoftwareUpdateRequest& request, const StartServiceSoftwareUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartServiceSoftwareUpdate(request), context);
    } );
}

UpdateDomainConfigOutcome OpenSearchServiceClient::UpdateDomainConfig(const UpdateDomainConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDomainConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDomainConfig", "Required field: DomainName, is not set");
    return UpdateDomainConfigOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDomainConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  return UpdateDomainConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDomainConfigOutcomeCallable OpenSearchServiceClient::UpdateDomainConfigCallable(const UpdateDomainConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDomainConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDomainConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::UpdateDomainConfigAsync(const UpdateDomainConfigRequest& request, const UpdateDomainConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDomainConfig(request), context);
    } );
}

UpdatePackageOutcome OpenSearchServiceClient::UpdatePackage(const UpdatePackageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/packages/update");
  return UpdatePackageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePackageOutcomeCallable OpenSearchServiceClient::UpdatePackageCallable(const UpdatePackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::UpdatePackageAsync(const UpdatePackageRequest& request, const UpdatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdatePackage(request), context);
    } );
}

UpdateVpcEndpointOutcome OpenSearchServiceClient::UpdateVpcEndpoint(const UpdateVpcEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/vpcEndpoints/update");
  return UpdateVpcEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateVpcEndpointOutcomeCallable OpenSearchServiceClient::UpdateVpcEndpointCallable(const UpdateVpcEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVpcEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVpcEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::UpdateVpcEndpointAsync(const UpdateVpcEndpointRequest& request, const UpdateVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateVpcEndpoint(request), context);
    } );
}

UpgradeDomainOutcome OpenSearchServiceClient::UpgradeDomain(const UpgradeDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpgradeDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpgradeDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/upgradeDomain");
  return UpgradeDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpgradeDomainOutcomeCallable OpenSearchServiceClient::UpgradeDomainCallable(const UpgradeDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpgradeDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpgradeDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClient::UpgradeDomainAsync(const UpgradeDomainRequest& request, const UpgradeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpgradeDomain(request), context);
    } );
}

