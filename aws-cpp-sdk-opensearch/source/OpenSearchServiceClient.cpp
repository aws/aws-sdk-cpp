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

#include <aws/opensearch/OpenSearchServiceClient.h>
#include <aws/opensearch/OpenSearchServiceEndpoint.h>
#include <aws/opensearch/OpenSearchServiceErrorMarshaller.h>
#include <aws/opensearch/model/AcceptInboundConnectionRequest.h>
#include <aws/opensearch/model/AddTagsRequest.h>
#include <aws/opensearch/model/AssociatePackageRequest.h>
#include <aws/opensearch/model/CancelServiceSoftwareUpdateRequest.h>
#include <aws/opensearch/model/CreateDomainRequest.h>
#include <aws/opensearch/model/CreateOutboundConnectionRequest.h>
#include <aws/opensearch/model/CreatePackageRequest.h>
#include <aws/opensearch/model/DeleteDomainRequest.h>
#include <aws/opensearch/model/DeleteInboundConnectionRequest.h>
#include <aws/opensearch/model/DeleteOutboundConnectionRequest.h>
#include <aws/opensearch/model/DeletePackageRequest.h>
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
#include <aws/opensearch/model/PurchaseReservedInstanceOfferingRequest.h>
#include <aws/opensearch/model/RejectInboundConnectionRequest.h>
#include <aws/opensearch/model/RemoveTagsRequest.h>
#include <aws/opensearch/model/StartServiceSoftwareUpdateRequest.h>
#include <aws/opensearch/model/UpdateDomainConfigRequest.h>
#include <aws/opensearch/model/UpdatePackageRequest.h>
#include <aws/opensearch/model/UpgradeDomainRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::OpenSearchService;
using namespace Aws::OpenSearchService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "es";
static const char* ALLOCATION_TAG = "OpenSearchServiceClient";

OpenSearchServiceClient::OpenSearchServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OpenSearchServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

OpenSearchServiceClient::OpenSearchServiceClient(const AWSCredentials& credentials,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OpenSearchServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

OpenSearchServiceClient::OpenSearchServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OpenSearchServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

OpenSearchServiceClient::~OpenSearchServiceClient()
{
}

void OpenSearchServiceClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("OpenSearch");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + OpenSearchServiceEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void OpenSearchServiceClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

AcceptInboundConnectionOutcome OpenSearchServiceClient::AcceptInboundConnection(const AcceptInboundConnectionRequest& request) const
{
  if (!request.ConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AcceptInboundConnection", "Required field: ConnectionId, is not set");
    return AcceptInboundConnectionOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/opensearch/cc/inboundConnection/");
  uri.AddPathSegment(request.GetConnectionId());
  uri.AddPathSegments("/accept");
  return AcceptInboundConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AcceptInboundConnectionOutcomeCallable OpenSearchServiceClient::AcceptInboundConnectionCallable(const AcceptInboundConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptInboundConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptInboundConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientAcceptInboundConnectionAsyncHelper(OpenSearchServiceClient const * const clientThis, const AcceptInboundConnectionRequest& request, const AcceptInboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AcceptInboundConnection(request), context);
}

void OpenSearchServiceClient::AcceptInboundConnectionAsync(const AcceptInboundConnectionRequest& request, const AcceptInboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientAcceptInboundConnectionAsyncHelper( this, request, handler, context ); } );
}

AddTagsOutcome OpenSearchServiceClient::AddTags(const AddTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/tags");
  return AddTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddTagsOutcomeCallable OpenSearchServiceClient::AddTagsCallable(const AddTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientAddTagsAsyncHelper(OpenSearchServiceClient const * const clientThis, const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddTags(request), context);
}

void OpenSearchServiceClient::AddTagsAsync(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientAddTagsAsyncHelper( this, request, handler, context ); } );
}

AssociatePackageOutcome OpenSearchServiceClient::AssociatePackage(const AssociatePackageRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/packages/associate/");
  uri.AddPathSegment(request.GetPackageID());
  uri.AddPathSegment(request.GetDomainName());
  return AssociatePackageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociatePackageOutcomeCallable OpenSearchServiceClient::AssociatePackageCallable(const AssociatePackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociatePackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociatePackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientAssociatePackageAsyncHelper(OpenSearchServiceClient const * const clientThis, const AssociatePackageRequest& request, const AssociatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociatePackage(request), context);
}

void OpenSearchServiceClient::AssociatePackageAsync(const AssociatePackageRequest& request, const AssociatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientAssociatePackageAsyncHelper( this, request, handler, context ); } );
}

CancelServiceSoftwareUpdateOutcome OpenSearchServiceClient::CancelServiceSoftwareUpdate(const CancelServiceSoftwareUpdateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/opensearch/serviceSoftwareUpdate/cancel");
  return CancelServiceSoftwareUpdateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelServiceSoftwareUpdateOutcomeCallable OpenSearchServiceClient::CancelServiceSoftwareUpdateCallable(const CancelServiceSoftwareUpdateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelServiceSoftwareUpdateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelServiceSoftwareUpdate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientCancelServiceSoftwareUpdateAsyncHelper(OpenSearchServiceClient const * const clientThis, const CancelServiceSoftwareUpdateRequest& request, const CancelServiceSoftwareUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelServiceSoftwareUpdate(request), context);
}

void OpenSearchServiceClient::CancelServiceSoftwareUpdateAsync(const CancelServiceSoftwareUpdateRequest& request, const CancelServiceSoftwareUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientCancelServiceSoftwareUpdateAsyncHelper( this, request, handler, context ); } );
}

CreateDomainOutcome OpenSearchServiceClient::CreateDomain(const CreateDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/opensearch/domain");
  return CreateDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDomainOutcomeCallable OpenSearchServiceClient::CreateDomainCallable(const CreateDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientCreateDomainAsyncHelper(OpenSearchServiceClient const * const clientThis, const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDomain(request), context);
}

void OpenSearchServiceClient::CreateDomainAsync(const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientCreateDomainAsyncHelper( this, request, handler, context ); } );
}

CreateOutboundConnectionOutcome OpenSearchServiceClient::CreateOutboundConnection(const CreateOutboundConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/opensearch/cc/outboundConnection");
  return CreateOutboundConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateOutboundConnectionOutcomeCallable OpenSearchServiceClient::CreateOutboundConnectionCallable(const CreateOutboundConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateOutboundConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateOutboundConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientCreateOutboundConnectionAsyncHelper(OpenSearchServiceClient const * const clientThis, const CreateOutboundConnectionRequest& request, const CreateOutboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateOutboundConnection(request), context);
}

void OpenSearchServiceClient::CreateOutboundConnectionAsync(const CreateOutboundConnectionRequest& request, const CreateOutboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientCreateOutboundConnectionAsyncHelper( this, request, handler, context ); } );
}

CreatePackageOutcome OpenSearchServiceClient::CreatePackage(const CreatePackageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/packages");
  return CreatePackageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePackageOutcomeCallable OpenSearchServiceClient::CreatePackageCallable(const CreatePackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientCreatePackageAsyncHelper(OpenSearchServiceClient const * const clientThis, const CreatePackageRequest& request, const CreatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePackage(request), context);
}

void OpenSearchServiceClient::CreatePackageAsync(const CreatePackageRequest& request, const CreatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientCreatePackageAsyncHelper( this, request, handler, context ); } );
}

DeleteDomainOutcome OpenSearchServiceClient::DeleteDomain(const DeleteDomainRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDomain", "Required field: DomainName, is not set");
    return DeleteDomainOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/opensearch/domain/");
  uri.AddPathSegment(request.GetDomainName());
  return DeleteDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDomainOutcomeCallable OpenSearchServiceClient::DeleteDomainCallable(const DeleteDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientDeleteDomainAsyncHelper(OpenSearchServiceClient const * const clientThis, const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDomain(request), context);
}

void OpenSearchServiceClient::DeleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientDeleteDomainAsyncHelper( this, request, handler, context ); } );
}

DeleteInboundConnectionOutcome OpenSearchServiceClient::DeleteInboundConnection(const DeleteInboundConnectionRequest& request) const
{
  if (!request.ConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteInboundConnection", "Required field: ConnectionId, is not set");
    return DeleteInboundConnectionOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/opensearch/cc/inboundConnection/");
  uri.AddPathSegment(request.GetConnectionId());
  return DeleteInboundConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteInboundConnectionOutcomeCallable OpenSearchServiceClient::DeleteInboundConnectionCallable(const DeleteInboundConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInboundConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInboundConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientDeleteInboundConnectionAsyncHelper(OpenSearchServiceClient const * const clientThis, const DeleteInboundConnectionRequest& request, const DeleteInboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteInboundConnection(request), context);
}

void OpenSearchServiceClient::DeleteInboundConnectionAsync(const DeleteInboundConnectionRequest& request, const DeleteInboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientDeleteInboundConnectionAsyncHelper( this, request, handler, context ); } );
}

DeleteOutboundConnectionOutcome OpenSearchServiceClient::DeleteOutboundConnection(const DeleteOutboundConnectionRequest& request) const
{
  if (!request.ConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteOutboundConnection", "Required field: ConnectionId, is not set");
    return DeleteOutboundConnectionOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/opensearch/cc/outboundConnection/");
  uri.AddPathSegment(request.GetConnectionId());
  return DeleteOutboundConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteOutboundConnectionOutcomeCallable OpenSearchServiceClient::DeleteOutboundConnectionCallable(const DeleteOutboundConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteOutboundConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteOutboundConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientDeleteOutboundConnectionAsyncHelper(OpenSearchServiceClient const * const clientThis, const DeleteOutboundConnectionRequest& request, const DeleteOutboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteOutboundConnection(request), context);
}

void OpenSearchServiceClient::DeleteOutboundConnectionAsync(const DeleteOutboundConnectionRequest& request, const DeleteOutboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientDeleteOutboundConnectionAsyncHelper( this, request, handler, context ); } );
}

DeletePackageOutcome OpenSearchServiceClient::DeletePackage(const DeletePackageRequest& request) const
{
  if (!request.PackageIDHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePackage", "Required field: PackageID, is not set");
    return DeletePackageOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/packages/");
  uri.AddPathSegment(request.GetPackageID());
  return DeletePackageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePackageOutcomeCallable OpenSearchServiceClient::DeletePackageCallable(const DeletePackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientDeletePackageAsyncHelper(OpenSearchServiceClient const * const clientThis, const DeletePackageRequest& request, const DeletePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePackage(request), context);
}

void OpenSearchServiceClient::DeletePackageAsync(const DeletePackageRequest& request, const DeletePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientDeletePackageAsyncHelper( this, request, handler, context ); } );
}

DescribeDomainOutcome OpenSearchServiceClient::DescribeDomain(const DescribeDomainRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDomain", "Required field: DomainName, is not set");
    return DescribeDomainOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/opensearch/domain/");
  uri.AddPathSegment(request.GetDomainName());
  return DescribeDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDomainOutcomeCallable OpenSearchServiceClient::DescribeDomainCallable(const DescribeDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientDescribeDomainAsyncHelper(OpenSearchServiceClient const * const clientThis, const DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDomain(request), context);
}

void OpenSearchServiceClient::DescribeDomainAsync(const DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientDescribeDomainAsyncHelper( this, request, handler, context ); } );
}

DescribeDomainAutoTunesOutcome OpenSearchServiceClient::DescribeDomainAutoTunes(const DescribeDomainAutoTunesRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDomainAutoTunes", "Required field: DomainName, is not set");
    return DescribeDomainAutoTunesOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/opensearch/domain/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/autoTunes");
  return DescribeDomainAutoTunesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDomainAutoTunesOutcomeCallable OpenSearchServiceClient::DescribeDomainAutoTunesCallable(const DescribeDomainAutoTunesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDomainAutoTunesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDomainAutoTunes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientDescribeDomainAutoTunesAsyncHelper(OpenSearchServiceClient const * const clientThis, const DescribeDomainAutoTunesRequest& request, const DescribeDomainAutoTunesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDomainAutoTunes(request), context);
}

void OpenSearchServiceClient::DescribeDomainAutoTunesAsync(const DescribeDomainAutoTunesRequest& request, const DescribeDomainAutoTunesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientDescribeDomainAutoTunesAsyncHelper( this, request, handler, context ); } );
}

DescribeDomainChangeProgressOutcome OpenSearchServiceClient::DescribeDomainChangeProgress(const DescribeDomainChangeProgressRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDomainChangeProgress", "Required field: DomainName, is not set");
    return DescribeDomainChangeProgressOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/opensearch/domain/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/progress");
  return DescribeDomainChangeProgressOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDomainChangeProgressOutcomeCallable OpenSearchServiceClient::DescribeDomainChangeProgressCallable(const DescribeDomainChangeProgressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDomainChangeProgressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDomainChangeProgress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientDescribeDomainChangeProgressAsyncHelper(OpenSearchServiceClient const * const clientThis, const DescribeDomainChangeProgressRequest& request, const DescribeDomainChangeProgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDomainChangeProgress(request), context);
}

void OpenSearchServiceClient::DescribeDomainChangeProgressAsync(const DescribeDomainChangeProgressRequest& request, const DescribeDomainChangeProgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientDescribeDomainChangeProgressAsyncHelper( this, request, handler, context ); } );
}

DescribeDomainConfigOutcome OpenSearchServiceClient::DescribeDomainConfig(const DescribeDomainConfigRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDomainConfig", "Required field: DomainName, is not set");
    return DescribeDomainConfigOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/opensearch/domain/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/config");
  return DescribeDomainConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDomainConfigOutcomeCallable OpenSearchServiceClient::DescribeDomainConfigCallable(const DescribeDomainConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDomainConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDomainConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientDescribeDomainConfigAsyncHelper(OpenSearchServiceClient const * const clientThis, const DescribeDomainConfigRequest& request, const DescribeDomainConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDomainConfig(request), context);
}

void OpenSearchServiceClient::DescribeDomainConfigAsync(const DescribeDomainConfigRequest& request, const DescribeDomainConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientDescribeDomainConfigAsyncHelper( this, request, handler, context ); } );
}

DescribeDomainsOutcome OpenSearchServiceClient::DescribeDomains(const DescribeDomainsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/opensearch/domain-info");
  return DescribeDomainsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDomainsOutcomeCallable OpenSearchServiceClient::DescribeDomainsCallable(const DescribeDomainsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDomainsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDomains(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientDescribeDomainsAsyncHelper(OpenSearchServiceClient const * const clientThis, const DescribeDomainsRequest& request, const DescribeDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDomains(request), context);
}

void OpenSearchServiceClient::DescribeDomainsAsync(const DescribeDomainsRequest& request, const DescribeDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientDescribeDomainsAsyncHelper( this, request, handler, context ); } );
}

DescribeInboundConnectionsOutcome OpenSearchServiceClient::DescribeInboundConnections(const DescribeInboundConnectionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/opensearch/cc/inboundConnection/search");
  return DescribeInboundConnectionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeInboundConnectionsOutcomeCallable OpenSearchServiceClient::DescribeInboundConnectionsCallable(const DescribeInboundConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInboundConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInboundConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientDescribeInboundConnectionsAsyncHelper(OpenSearchServiceClient const * const clientThis, const DescribeInboundConnectionsRequest& request, const DescribeInboundConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeInboundConnections(request), context);
}

void OpenSearchServiceClient::DescribeInboundConnectionsAsync(const DescribeInboundConnectionsRequest& request, const DescribeInboundConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientDescribeInboundConnectionsAsyncHelper( this, request, handler, context ); } );
}

DescribeInstanceTypeLimitsOutcome OpenSearchServiceClient::DescribeInstanceTypeLimits(const DescribeInstanceTypeLimitsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/opensearch/instanceTypeLimits/");
  uri.AddPathSegment(request.GetEngineVersion());
  uri.AddPathSegment(OpenSearchPartitionInstanceTypeMapper::GetNameForOpenSearchPartitionInstanceType(request.GetInstanceType()));
  return DescribeInstanceTypeLimitsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeInstanceTypeLimitsOutcomeCallable OpenSearchServiceClient::DescribeInstanceTypeLimitsCallable(const DescribeInstanceTypeLimitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstanceTypeLimitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstanceTypeLimits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientDescribeInstanceTypeLimitsAsyncHelper(OpenSearchServiceClient const * const clientThis, const DescribeInstanceTypeLimitsRequest& request, const DescribeInstanceTypeLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeInstanceTypeLimits(request), context);
}

void OpenSearchServiceClient::DescribeInstanceTypeLimitsAsync(const DescribeInstanceTypeLimitsRequest& request, const DescribeInstanceTypeLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientDescribeInstanceTypeLimitsAsyncHelper( this, request, handler, context ); } );
}

DescribeOutboundConnectionsOutcome OpenSearchServiceClient::DescribeOutboundConnections(const DescribeOutboundConnectionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/opensearch/cc/outboundConnection/search");
  return DescribeOutboundConnectionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeOutboundConnectionsOutcomeCallable OpenSearchServiceClient::DescribeOutboundConnectionsCallable(const DescribeOutboundConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOutboundConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOutboundConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientDescribeOutboundConnectionsAsyncHelper(OpenSearchServiceClient const * const clientThis, const DescribeOutboundConnectionsRequest& request, const DescribeOutboundConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeOutboundConnections(request), context);
}

void OpenSearchServiceClient::DescribeOutboundConnectionsAsync(const DescribeOutboundConnectionsRequest& request, const DescribeOutboundConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientDescribeOutboundConnectionsAsyncHelper( this, request, handler, context ); } );
}

DescribePackagesOutcome OpenSearchServiceClient::DescribePackages(const DescribePackagesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/packages/describe");
  return DescribePackagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePackagesOutcomeCallable OpenSearchServiceClient::DescribePackagesCallable(const DescribePackagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePackagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePackages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientDescribePackagesAsyncHelper(OpenSearchServiceClient const * const clientThis, const DescribePackagesRequest& request, const DescribePackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePackages(request), context);
}

void OpenSearchServiceClient::DescribePackagesAsync(const DescribePackagesRequest& request, const DescribePackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientDescribePackagesAsyncHelper( this, request, handler, context ); } );
}

DescribeReservedInstanceOfferingsOutcome OpenSearchServiceClient::DescribeReservedInstanceOfferings(const DescribeReservedInstanceOfferingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/opensearch/reservedInstanceOfferings");
  return DescribeReservedInstanceOfferingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeReservedInstanceOfferingsOutcomeCallable OpenSearchServiceClient::DescribeReservedInstanceOfferingsCallable(const DescribeReservedInstanceOfferingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservedInstanceOfferingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReservedInstanceOfferings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientDescribeReservedInstanceOfferingsAsyncHelper(OpenSearchServiceClient const * const clientThis, const DescribeReservedInstanceOfferingsRequest& request, const DescribeReservedInstanceOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeReservedInstanceOfferings(request), context);
}

void OpenSearchServiceClient::DescribeReservedInstanceOfferingsAsync(const DescribeReservedInstanceOfferingsRequest& request, const DescribeReservedInstanceOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientDescribeReservedInstanceOfferingsAsyncHelper( this, request, handler, context ); } );
}

DescribeReservedInstancesOutcome OpenSearchServiceClient::DescribeReservedInstances(const DescribeReservedInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/opensearch/reservedInstances");
  return DescribeReservedInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeReservedInstancesOutcomeCallable OpenSearchServiceClient::DescribeReservedInstancesCallable(const DescribeReservedInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservedInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReservedInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientDescribeReservedInstancesAsyncHelper(OpenSearchServiceClient const * const clientThis, const DescribeReservedInstancesRequest& request, const DescribeReservedInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeReservedInstances(request), context);
}

void OpenSearchServiceClient::DescribeReservedInstancesAsync(const DescribeReservedInstancesRequest& request, const DescribeReservedInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientDescribeReservedInstancesAsyncHelper( this, request, handler, context ); } );
}

DissociatePackageOutcome OpenSearchServiceClient::DissociatePackage(const DissociatePackageRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/packages/dissociate/");
  uri.AddPathSegment(request.GetPackageID());
  uri.AddPathSegment(request.GetDomainName());
  return DissociatePackageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DissociatePackageOutcomeCallable OpenSearchServiceClient::DissociatePackageCallable(const DissociatePackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DissociatePackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DissociatePackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientDissociatePackageAsyncHelper(OpenSearchServiceClient const * const clientThis, const DissociatePackageRequest& request, const DissociatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DissociatePackage(request), context);
}

void OpenSearchServiceClient::DissociatePackageAsync(const DissociatePackageRequest& request, const DissociatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientDissociatePackageAsyncHelper( this, request, handler, context ); } );
}

GetCompatibleVersionsOutcome OpenSearchServiceClient::GetCompatibleVersions(const GetCompatibleVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/opensearch/compatibleVersions");
  return GetCompatibleVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCompatibleVersionsOutcomeCallable OpenSearchServiceClient::GetCompatibleVersionsCallable(const GetCompatibleVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCompatibleVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCompatibleVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientGetCompatibleVersionsAsyncHelper(OpenSearchServiceClient const * const clientThis, const GetCompatibleVersionsRequest& request, const GetCompatibleVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCompatibleVersions(request), context);
}

void OpenSearchServiceClient::GetCompatibleVersionsAsync(const GetCompatibleVersionsRequest& request, const GetCompatibleVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientGetCompatibleVersionsAsyncHelper( this, request, handler, context ); } );
}

GetPackageVersionHistoryOutcome OpenSearchServiceClient::GetPackageVersionHistory(const GetPackageVersionHistoryRequest& request) const
{
  if (!request.PackageIDHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPackageVersionHistory", "Required field: PackageID, is not set");
    return GetPackageVersionHistoryOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/packages/");
  uri.AddPathSegment(request.GetPackageID());
  uri.AddPathSegments("/history");
  return GetPackageVersionHistoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPackageVersionHistoryOutcomeCallable OpenSearchServiceClient::GetPackageVersionHistoryCallable(const GetPackageVersionHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPackageVersionHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPackageVersionHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientGetPackageVersionHistoryAsyncHelper(OpenSearchServiceClient const * const clientThis, const GetPackageVersionHistoryRequest& request, const GetPackageVersionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPackageVersionHistory(request), context);
}

void OpenSearchServiceClient::GetPackageVersionHistoryAsync(const GetPackageVersionHistoryRequest& request, const GetPackageVersionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientGetPackageVersionHistoryAsyncHelper( this, request, handler, context ); } );
}

GetUpgradeHistoryOutcome OpenSearchServiceClient::GetUpgradeHistory(const GetUpgradeHistoryRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUpgradeHistory", "Required field: DomainName, is not set");
    return GetUpgradeHistoryOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/opensearch/upgradeDomain/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/history");
  return GetUpgradeHistoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetUpgradeHistoryOutcomeCallable OpenSearchServiceClient::GetUpgradeHistoryCallable(const GetUpgradeHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUpgradeHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUpgradeHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientGetUpgradeHistoryAsyncHelper(OpenSearchServiceClient const * const clientThis, const GetUpgradeHistoryRequest& request, const GetUpgradeHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetUpgradeHistory(request), context);
}

void OpenSearchServiceClient::GetUpgradeHistoryAsync(const GetUpgradeHistoryRequest& request, const GetUpgradeHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientGetUpgradeHistoryAsyncHelper( this, request, handler, context ); } );
}

GetUpgradeStatusOutcome OpenSearchServiceClient::GetUpgradeStatus(const GetUpgradeStatusRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUpgradeStatus", "Required field: DomainName, is not set");
    return GetUpgradeStatusOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/opensearch/upgradeDomain/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/status");
  return GetUpgradeStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetUpgradeStatusOutcomeCallable OpenSearchServiceClient::GetUpgradeStatusCallable(const GetUpgradeStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUpgradeStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUpgradeStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientGetUpgradeStatusAsyncHelper(OpenSearchServiceClient const * const clientThis, const GetUpgradeStatusRequest& request, const GetUpgradeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetUpgradeStatus(request), context);
}

void OpenSearchServiceClient::GetUpgradeStatusAsync(const GetUpgradeStatusRequest& request, const GetUpgradeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientGetUpgradeStatusAsyncHelper( this, request, handler, context ); } );
}

ListDomainNamesOutcome OpenSearchServiceClient::ListDomainNames(const ListDomainNamesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/domain");
  return ListDomainNamesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDomainNamesOutcomeCallable OpenSearchServiceClient::ListDomainNamesCallable(const ListDomainNamesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainNamesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomainNames(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientListDomainNamesAsyncHelper(OpenSearchServiceClient const * const clientThis, const ListDomainNamesRequest& request, const ListDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDomainNames(request), context);
}

void OpenSearchServiceClient::ListDomainNamesAsync(const ListDomainNamesRequest& request, const ListDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientListDomainNamesAsyncHelper( this, request, handler, context ); } );
}

ListDomainsForPackageOutcome OpenSearchServiceClient::ListDomainsForPackage(const ListDomainsForPackageRequest& request) const
{
  if (!request.PackageIDHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDomainsForPackage", "Required field: PackageID, is not set");
    return ListDomainsForPackageOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/packages/");
  uri.AddPathSegment(request.GetPackageID());
  uri.AddPathSegments("/domains");
  return ListDomainsForPackageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDomainsForPackageOutcomeCallable OpenSearchServiceClient::ListDomainsForPackageCallable(const ListDomainsForPackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainsForPackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomainsForPackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientListDomainsForPackageAsyncHelper(OpenSearchServiceClient const * const clientThis, const ListDomainsForPackageRequest& request, const ListDomainsForPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDomainsForPackage(request), context);
}

void OpenSearchServiceClient::ListDomainsForPackageAsync(const ListDomainsForPackageRequest& request, const ListDomainsForPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientListDomainsForPackageAsyncHelper( this, request, handler, context ); } );
}

ListInstanceTypeDetailsOutcome OpenSearchServiceClient::ListInstanceTypeDetails(const ListInstanceTypeDetailsRequest& request) const
{
  if (!request.EngineVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListInstanceTypeDetails", "Required field: EngineVersion, is not set");
    return ListInstanceTypeDetailsOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EngineVersion]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/opensearch/instanceTypeDetails/");
  uri.AddPathSegment(request.GetEngineVersion());
  return ListInstanceTypeDetailsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListInstanceTypeDetailsOutcomeCallable OpenSearchServiceClient::ListInstanceTypeDetailsCallable(const ListInstanceTypeDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstanceTypeDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstanceTypeDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientListInstanceTypeDetailsAsyncHelper(OpenSearchServiceClient const * const clientThis, const ListInstanceTypeDetailsRequest& request, const ListInstanceTypeDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListInstanceTypeDetails(request), context);
}

void OpenSearchServiceClient::ListInstanceTypeDetailsAsync(const ListInstanceTypeDetailsRequest& request, const ListInstanceTypeDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientListInstanceTypeDetailsAsyncHelper( this, request, handler, context ); } );
}

ListPackagesForDomainOutcome OpenSearchServiceClient::ListPackagesForDomain(const ListPackagesForDomainRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPackagesForDomain", "Required field: DomainName, is not set");
    return ListPackagesForDomainOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/domain/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/packages");
  return ListPackagesForDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPackagesForDomainOutcomeCallable OpenSearchServiceClient::ListPackagesForDomainCallable(const ListPackagesForDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPackagesForDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPackagesForDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientListPackagesForDomainAsyncHelper(OpenSearchServiceClient const * const clientThis, const ListPackagesForDomainRequest& request, const ListPackagesForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPackagesForDomain(request), context);
}

void OpenSearchServiceClient::ListPackagesForDomainAsync(const ListPackagesForDomainRequest& request, const ListPackagesForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientListPackagesForDomainAsyncHelper( this, request, handler, context ); } );
}

ListTagsOutcome OpenSearchServiceClient::ListTags(const ListTagsRequest& request) const
{
  if (!request.ARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTags", "Required field: ARN, is not set");
    return ListTagsOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ARN]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/tags/");
  return ListTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsOutcomeCallable OpenSearchServiceClient::ListTagsCallable(const ListTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientListTagsAsyncHelper(OpenSearchServiceClient const * const clientThis, const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTags(request), context);
}

void OpenSearchServiceClient::ListTagsAsync(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientListTagsAsyncHelper( this, request, handler, context ); } );
}

ListVersionsOutcome OpenSearchServiceClient::ListVersions(const ListVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/opensearch/versions");
  return ListVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVersionsOutcomeCallable OpenSearchServiceClient::ListVersionsCallable(const ListVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientListVersionsAsyncHelper(OpenSearchServiceClient const * const clientThis, const ListVersionsRequest& request, const ListVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListVersions(request), context);
}

void OpenSearchServiceClient::ListVersionsAsync(const ListVersionsRequest& request, const ListVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientListVersionsAsyncHelper( this, request, handler, context ); } );
}

PurchaseReservedInstanceOfferingOutcome OpenSearchServiceClient::PurchaseReservedInstanceOffering(const PurchaseReservedInstanceOfferingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/opensearch/purchaseReservedInstanceOffering");
  return PurchaseReservedInstanceOfferingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PurchaseReservedInstanceOfferingOutcomeCallable OpenSearchServiceClient::PurchaseReservedInstanceOfferingCallable(const PurchaseReservedInstanceOfferingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PurchaseReservedInstanceOfferingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PurchaseReservedInstanceOffering(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientPurchaseReservedInstanceOfferingAsyncHelper(OpenSearchServiceClient const * const clientThis, const PurchaseReservedInstanceOfferingRequest& request, const PurchaseReservedInstanceOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PurchaseReservedInstanceOffering(request), context);
}

void OpenSearchServiceClient::PurchaseReservedInstanceOfferingAsync(const PurchaseReservedInstanceOfferingRequest& request, const PurchaseReservedInstanceOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientPurchaseReservedInstanceOfferingAsyncHelper( this, request, handler, context ); } );
}

RejectInboundConnectionOutcome OpenSearchServiceClient::RejectInboundConnection(const RejectInboundConnectionRequest& request) const
{
  if (!request.ConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RejectInboundConnection", "Required field: ConnectionId, is not set");
    return RejectInboundConnectionOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/opensearch/cc/inboundConnection/");
  uri.AddPathSegment(request.GetConnectionId());
  uri.AddPathSegments("/reject");
  return RejectInboundConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

RejectInboundConnectionOutcomeCallable OpenSearchServiceClient::RejectInboundConnectionCallable(const RejectInboundConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectInboundConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectInboundConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientRejectInboundConnectionAsyncHelper(OpenSearchServiceClient const * const clientThis, const RejectInboundConnectionRequest& request, const RejectInboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RejectInboundConnection(request), context);
}

void OpenSearchServiceClient::RejectInboundConnectionAsync(const RejectInboundConnectionRequest& request, const RejectInboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientRejectInboundConnectionAsyncHelper( this, request, handler, context ); } );
}

RemoveTagsOutcome OpenSearchServiceClient::RemoveTags(const RemoveTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/tags-removal");
  return RemoveTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveTagsOutcomeCallable OpenSearchServiceClient::RemoveTagsCallable(const RemoveTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientRemoveTagsAsyncHelper(OpenSearchServiceClient const * const clientThis, const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveTags(request), context);
}

void OpenSearchServiceClient::RemoveTagsAsync(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientRemoveTagsAsyncHelper( this, request, handler, context ); } );
}

StartServiceSoftwareUpdateOutcome OpenSearchServiceClient::StartServiceSoftwareUpdate(const StartServiceSoftwareUpdateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/opensearch/serviceSoftwareUpdate/start");
  return StartServiceSoftwareUpdateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartServiceSoftwareUpdateOutcomeCallable OpenSearchServiceClient::StartServiceSoftwareUpdateCallable(const StartServiceSoftwareUpdateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartServiceSoftwareUpdateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartServiceSoftwareUpdate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientStartServiceSoftwareUpdateAsyncHelper(OpenSearchServiceClient const * const clientThis, const StartServiceSoftwareUpdateRequest& request, const StartServiceSoftwareUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartServiceSoftwareUpdate(request), context);
}

void OpenSearchServiceClient::StartServiceSoftwareUpdateAsync(const StartServiceSoftwareUpdateRequest& request, const StartServiceSoftwareUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientStartServiceSoftwareUpdateAsyncHelper( this, request, handler, context ); } );
}

UpdateDomainConfigOutcome OpenSearchServiceClient::UpdateDomainConfig(const UpdateDomainConfigRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDomainConfig", "Required field: DomainName, is not set");
    return UpdateDomainConfigOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/opensearch/domain/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/config");
  return UpdateDomainConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDomainConfigOutcomeCallable OpenSearchServiceClient::UpdateDomainConfigCallable(const UpdateDomainConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDomainConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDomainConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientUpdateDomainConfigAsyncHelper(OpenSearchServiceClient const * const clientThis, const UpdateDomainConfigRequest& request, const UpdateDomainConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDomainConfig(request), context);
}

void OpenSearchServiceClient::UpdateDomainConfigAsync(const UpdateDomainConfigRequest& request, const UpdateDomainConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientUpdateDomainConfigAsyncHelper( this, request, handler, context ); } );
}

UpdatePackageOutcome OpenSearchServiceClient::UpdatePackage(const UpdatePackageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/packages/update");
  return UpdatePackageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePackageOutcomeCallable OpenSearchServiceClient::UpdatePackageCallable(const UpdatePackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientUpdatePackageAsyncHelper(OpenSearchServiceClient const * const clientThis, const UpdatePackageRequest& request, const UpdatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePackage(request), context);
}

void OpenSearchServiceClient::UpdatePackageAsync(const UpdatePackageRequest& request, const UpdatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientUpdatePackageAsyncHelper( this, request, handler, context ); } );
}

UpgradeDomainOutcome OpenSearchServiceClient::UpgradeDomain(const UpgradeDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-01-01/opensearch/upgradeDomain");
  return UpgradeDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpgradeDomainOutcomeCallable OpenSearchServiceClient::UpgradeDomainCallable(const UpgradeDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpgradeDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpgradeDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpenSearchServiceClientUpgradeDomainAsyncHelper(OpenSearchServiceClient const * const clientThis, const UpgradeDomainRequest& request, const UpgradeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpgradeDomain(request), context);
}

void OpenSearchServiceClient::UpgradeDomainAsync(const UpgradeDomainRequest& request, const UpgradeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpenSearchServiceClientUpgradeDomainAsyncHelper( this, request, handler, context ); } );
}

