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

#include <aws/es/ElasticsearchServiceClient.h>
#include <aws/es/ElasticsearchServiceEndpoint.h>
#include <aws/es/ElasticsearchServiceErrorMarshaller.h>
#include <aws/es/model/AcceptInboundCrossClusterSearchConnectionRequest.h>
#include <aws/es/model/AddTagsRequest.h>
#include <aws/es/model/AssociatePackageRequest.h>
#include <aws/es/model/CancelElasticsearchServiceSoftwareUpdateRequest.h>
#include <aws/es/model/CreateElasticsearchDomainRequest.h>
#include <aws/es/model/CreateOutboundCrossClusterSearchConnectionRequest.h>
#include <aws/es/model/CreatePackageRequest.h>
#include <aws/es/model/DeleteElasticsearchDomainRequest.h>
#include <aws/es/model/DeleteInboundCrossClusterSearchConnectionRequest.h>
#include <aws/es/model/DeleteOutboundCrossClusterSearchConnectionRequest.h>
#include <aws/es/model/DeletePackageRequest.h>
#include <aws/es/model/DescribeElasticsearchDomainRequest.h>
#include <aws/es/model/DescribeElasticsearchDomainConfigRequest.h>
#include <aws/es/model/DescribeElasticsearchDomainsRequest.h>
#include <aws/es/model/DescribeElasticsearchInstanceTypeLimitsRequest.h>
#include <aws/es/model/DescribeInboundCrossClusterSearchConnectionsRequest.h>
#include <aws/es/model/DescribeOutboundCrossClusterSearchConnectionsRequest.h>
#include <aws/es/model/DescribePackagesRequest.h>
#include <aws/es/model/DescribeReservedElasticsearchInstanceOfferingsRequest.h>
#include <aws/es/model/DescribeReservedElasticsearchInstancesRequest.h>
#include <aws/es/model/DissociatePackageRequest.h>
#include <aws/es/model/GetCompatibleElasticsearchVersionsRequest.h>
#include <aws/es/model/GetPackageVersionHistoryRequest.h>
#include <aws/es/model/GetUpgradeHistoryRequest.h>
#include <aws/es/model/GetUpgradeStatusRequest.h>
#include <aws/es/model/ListDomainsForPackageRequest.h>
#include <aws/es/model/ListElasticsearchInstanceTypesRequest.h>
#include <aws/es/model/ListElasticsearchVersionsRequest.h>
#include <aws/es/model/ListPackagesForDomainRequest.h>
#include <aws/es/model/ListTagsRequest.h>
#include <aws/es/model/PurchaseReservedElasticsearchInstanceOfferingRequest.h>
#include <aws/es/model/RejectInboundCrossClusterSearchConnectionRequest.h>
#include <aws/es/model/RemoveTagsRequest.h>
#include <aws/es/model/StartElasticsearchServiceSoftwareUpdateRequest.h>
#include <aws/es/model/UpdateElasticsearchDomainConfigRequest.h>
#include <aws/es/model/UpdatePackageRequest.h>
#include <aws/es/model/UpgradeElasticsearchDomainRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ElasticsearchService;
using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "es";
static const char* ALLOCATION_TAG = "ElasticsearchServiceClient";


ElasticsearchServiceClient::ElasticsearchServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ElasticsearchServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticsearchServiceClient::ElasticsearchServiceClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ElasticsearchServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticsearchServiceClient::ElasticsearchServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ElasticsearchServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticsearchServiceClient::~ElasticsearchServiceClient()
{
}

void ElasticsearchServiceClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("Elasticsearch Service");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ElasticsearchServiceEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ElasticsearchServiceClient::OverrideEndpoint(const Aws::String& endpoint)
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

AcceptInboundCrossClusterSearchConnectionOutcome ElasticsearchServiceClient::AcceptInboundCrossClusterSearchConnection(const AcceptInboundCrossClusterSearchConnectionRequest& request) const
{
  if (!request.CrossClusterSearchConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AcceptInboundCrossClusterSearchConnection", "Required field: CrossClusterSearchConnectionId, is not set");
    return AcceptInboundCrossClusterSearchConnectionOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CrossClusterSearchConnectionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/ccs/inboundConnection/";
  ss << request.GetCrossClusterSearchConnectionId();
  ss << "/accept";
  uri.SetPath(uri.GetPath() + ss.str());
  return AcceptInboundCrossClusterSearchConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->AcceptInboundCrossClusterSearchConnectionAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::AcceptInboundCrossClusterSearchConnectionAsyncHelper(const AcceptInboundCrossClusterSearchConnectionRequest& request, const AcceptInboundCrossClusterSearchConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AcceptInboundCrossClusterSearchConnection(request), context);
}

AddTagsOutcome ElasticsearchServiceClient::AddTags(const AddTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/tags";
  uri.SetPath(uri.GetPath() + ss.str());
  return AddTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->AddTagsAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::AddTagsAsyncHelper(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTags(request), context);
}

AssociatePackageOutcome ElasticsearchServiceClient::AssociatePackage(const AssociatePackageRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/packages/associate/";
  ss << request.GetPackageID();
  ss << "/";
  ss << request.GetDomainName();
  uri.SetPath(uri.GetPath() + ss.str());
  return AssociatePackageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->AssociatePackageAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::AssociatePackageAsyncHelper(const AssociatePackageRequest& request, const AssociatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociatePackage(request), context);
}

CancelElasticsearchServiceSoftwareUpdateOutcome ElasticsearchServiceClient::CancelElasticsearchServiceSoftwareUpdate(const CancelElasticsearchServiceSoftwareUpdateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/serviceSoftwareUpdate/cancel";
  uri.SetPath(uri.GetPath() + ss.str());
  return CancelElasticsearchServiceSoftwareUpdateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CancelElasticsearchServiceSoftwareUpdateAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::CancelElasticsearchServiceSoftwareUpdateAsyncHelper(const CancelElasticsearchServiceSoftwareUpdateRequest& request, const CancelElasticsearchServiceSoftwareUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelElasticsearchServiceSoftwareUpdate(request), context);
}

CreateElasticsearchDomainOutcome ElasticsearchServiceClient::CreateElasticsearchDomain(const CreateElasticsearchDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/domain";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateElasticsearchDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateElasticsearchDomainAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::CreateElasticsearchDomainAsyncHelper(const CreateElasticsearchDomainRequest& request, const CreateElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateElasticsearchDomain(request), context);
}

CreateOutboundCrossClusterSearchConnectionOutcome ElasticsearchServiceClient::CreateOutboundCrossClusterSearchConnection(const CreateOutboundCrossClusterSearchConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/ccs/outboundConnection";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateOutboundCrossClusterSearchConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateOutboundCrossClusterSearchConnectionAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::CreateOutboundCrossClusterSearchConnectionAsyncHelper(const CreateOutboundCrossClusterSearchConnectionRequest& request, const CreateOutboundCrossClusterSearchConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateOutboundCrossClusterSearchConnection(request), context);
}

CreatePackageOutcome ElasticsearchServiceClient::CreatePackage(const CreatePackageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/packages";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreatePackageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreatePackageAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::CreatePackageAsyncHelper(const CreatePackageRequest& request, const CreatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePackage(request), context);
}

DeleteElasticsearchDomainOutcome ElasticsearchServiceClient::DeleteElasticsearchDomain(const DeleteElasticsearchDomainRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteElasticsearchDomain", "Required field: DomainName, is not set");
    return DeleteElasticsearchDomainOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/domain/";
  ss << request.GetDomainName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteElasticsearchDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteElasticsearchDomainAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::DeleteElasticsearchDomainAsyncHelper(const DeleteElasticsearchDomainRequest& request, const DeleteElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteElasticsearchDomain(request), context);
}

DeleteElasticsearchServiceRoleOutcome ElasticsearchServiceClient::DeleteElasticsearchServiceRole() const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-01-01/es/role";
  return DeleteElasticsearchServiceRoleOutcome(MakeRequest(ss.str(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER, "DeleteElasticsearchServiceRole"));
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
  m_executor->Submit( [this, handler, context](){ this->DeleteElasticsearchServiceRoleAsyncHelper( handler, context ); } );
}

void ElasticsearchServiceClient::DeleteElasticsearchServiceRoleAsyncHelper(const DeleteElasticsearchServiceRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, DeleteElasticsearchServiceRole(), context);
}

DeleteInboundCrossClusterSearchConnectionOutcome ElasticsearchServiceClient::DeleteInboundCrossClusterSearchConnection(const DeleteInboundCrossClusterSearchConnectionRequest& request) const
{
  if (!request.CrossClusterSearchConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteInboundCrossClusterSearchConnection", "Required field: CrossClusterSearchConnectionId, is not set");
    return DeleteInboundCrossClusterSearchConnectionOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CrossClusterSearchConnectionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/ccs/inboundConnection/";
  ss << request.GetCrossClusterSearchConnectionId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteInboundCrossClusterSearchConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteInboundCrossClusterSearchConnectionAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::DeleteInboundCrossClusterSearchConnectionAsyncHelper(const DeleteInboundCrossClusterSearchConnectionRequest& request, const DeleteInboundCrossClusterSearchConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteInboundCrossClusterSearchConnection(request), context);
}

DeleteOutboundCrossClusterSearchConnectionOutcome ElasticsearchServiceClient::DeleteOutboundCrossClusterSearchConnection(const DeleteOutboundCrossClusterSearchConnectionRequest& request) const
{
  if (!request.CrossClusterSearchConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteOutboundCrossClusterSearchConnection", "Required field: CrossClusterSearchConnectionId, is not set");
    return DeleteOutboundCrossClusterSearchConnectionOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CrossClusterSearchConnectionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/ccs/outboundConnection/";
  ss << request.GetCrossClusterSearchConnectionId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteOutboundCrossClusterSearchConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteOutboundCrossClusterSearchConnectionAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::DeleteOutboundCrossClusterSearchConnectionAsyncHelper(const DeleteOutboundCrossClusterSearchConnectionRequest& request, const DeleteOutboundCrossClusterSearchConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteOutboundCrossClusterSearchConnection(request), context);
}

DeletePackageOutcome ElasticsearchServiceClient::DeletePackage(const DeletePackageRequest& request) const
{
  if (!request.PackageIDHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePackage", "Required field: PackageID, is not set");
    return DeletePackageOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/packages/";
  ss << request.GetPackageID();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeletePackageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeletePackageAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::DeletePackageAsyncHelper(const DeletePackageRequest& request, const DeletePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePackage(request), context);
}

DescribeElasticsearchDomainOutcome ElasticsearchServiceClient::DescribeElasticsearchDomain(const DescribeElasticsearchDomainRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeElasticsearchDomain", "Required field: DomainName, is not set");
    return DescribeElasticsearchDomainOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/domain/";
  ss << request.GetDomainName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeElasticsearchDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeElasticsearchDomainAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::DescribeElasticsearchDomainAsyncHelper(const DescribeElasticsearchDomainRequest& request, const DescribeElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeElasticsearchDomain(request), context);
}

DescribeElasticsearchDomainConfigOutcome ElasticsearchServiceClient::DescribeElasticsearchDomainConfig(const DescribeElasticsearchDomainConfigRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeElasticsearchDomainConfig", "Required field: DomainName, is not set");
    return DescribeElasticsearchDomainConfigOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/domain/";
  ss << request.GetDomainName();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeElasticsearchDomainConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeElasticsearchDomainConfigAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::DescribeElasticsearchDomainConfigAsyncHelper(const DescribeElasticsearchDomainConfigRequest& request, const DescribeElasticsearchDomainConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeElasticsearchDomainConfig(request), context);
}

DescribeElasticsearchDomainsOutcome ElasticsearchServiceClient::DescribeElasticsearchDomains(const DescribeElasticsearchDomainsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/domain-info";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeElasticsearchDomainsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeElasticsearchDomainsAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::DescribeElasticsearchDomainsAsyncHelper(const DescribeElasticsearchDomainsRequest& request, const DescribeElasticsearchDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeElasticsearchDomains(request), context);
}

DescribeElasticsearchInstanceTypeLimitsOutcome ElasticsearchServiceClient::DescribeElasticsearchInstanceTypeLimits(const DescribeElasticsearchInstanceTypeLimitsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/instanceTypeLimits/";
  ss << request.GetElasticsearchVersion();
  ss << "/";
  ss << ESPartitionInstanceTypeMapper::GetNameForESPartitionInstanceType(request.GetInstanceType());
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeElasticsearchInstanceTypeLimitsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeElasticsearchInstanceTypeLimitsAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::DescribeElasticsearchInstanceTypeLimitsAsyncHelper(const DescribeElasticsearchInstanceTypeLimitsRequest& request, const DescribeElasticsearchInstanceTypeLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeElasticsearchInstanceTypeLimits(request), context);
}

DescribeInboundCrossClusterSearchConnectionsOutcome ElasticsearchServiceClient::DescribeInboundCrossClusterSearchConnections(const DescribeInboundCrossClusterSearchConnectionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/ccs/inboundConnection/search";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeInboundCrossClusterSearchConnectionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeInboundCrossClusterSearchConnectionsAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::DescribeInboundCrossClusterSearchConnectionsAsyncHelper(const DescribeInboundCrossClusterSearchConnectionsRequest& request, const DescribeInboundCrossClusterSearchConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeInboundCrossClusterSearchConnections(request), context);
}

DescribeOutboundCrossClusterSearchConnectionsOutcome ElasticsearchServiceClient::DescribeOutboundCrossClusterSearchConnections(const DescribeOutboundCrossClusterSearchConnectionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/ccs/outboundConnection/search";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeOutboundCrossClusterSearchConnectionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeOutboundCrossClusterSearchConnectionsAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::DescribeOutboundCrossClusterSearchConnectionsAsyncHelper(const DescribeOutboundCrossClusterSearchConnectionsRequest& request, const DescribeOutboundCrossClusterSearchConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeOutboundCrossClusterSearchConnections(request), context);
}

DescribePackagesOutcome ElasticsearchServiceClient::DescribePackages(const DescribePackagesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/packages/describe";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribePackagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribePackagesAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::DescribePackagesAsyncHelper(const DescribePackagesRequest& request, const DescribePackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePackages(request), context);
}

DescribeReservedElasticsearchInstanceOfferingsOutcome ElasticsearchServiceClient::DescribeReservedElasticsearchInstanceOfferings(const DescribeReservedElasticsearchInstanceOfferingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/reservedInstanceOfferings";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeReservedElasticsearchInstanceOfferingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeReservedElasticsearchInstanceOfferingsAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::DescribeReservedElasticsearchInstanceOfferingsAsyncHelper(const DescribeReservedElasticsearchInstanceOfferingsRequest& request, const DescribeReservedElasticsearchInstanceOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReservedElasticsearchInstanceOfferings(request), context);
}

DescribeReservedElasticsearchInstancesOutcome ElasticsearchServiceClient::DescribeReservedElasticsearchInstances(const DescribeReservedElasticsearchInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/reservedInstances";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeReservedElasticsearchInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeReservedElasticsearchInstancesAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::DescribeReservedElasticsearchInstancesAsyncHelper(const DescribeReservedElasticsearchInstancesRequest& request, const DescribeReservedElasticsearchInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReservedElasticsearchInstances(request), context);
}

DissociatePackageOutcome ElasticsearchServiceClient::DissociatePackage(const DissociatePackageRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/packages/dissociate/";
  ss << request.GetPackageID();
  ss << "/";
  ss << request.GetDomainName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DissociatePackageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DissociatePackageAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::DissociatePackageAsyncHelper(const DissociatePackageRequest& request, const DissociatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DissociatePackage(request), context);
}

GetCompatibleElasticsearchVersionsOutcome ElasticsearchServiceClient::GetCompatibleElasticsearchVersions(const GetCompatibleElasticsearchVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/compatibleVersions";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetCompatibleElasticsearchVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetCompatibleElasticsearchVersionsAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::GetCompatibleElasticsearchVersionsAsyncHelper(const GetCompatibleElasticsearchVersionsRequest& request, const GetCompatibleElasticsearchVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCompatibleElasticsearchVersions(request), context);
}

GetPackageVersionHistoryOutcome ElasticsearchServiceClient::GetPackageVersionHistory(const GetPackageVersionHistoryRequest& request) const
{
  if (!request.PackageIDHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPackageVersionHistory", "Required field: PackageID, is not set");
    return GetPackageVersionHistoryOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/packages/";
  ss << request.GetPackageID();
  ss << "/history";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetPackageVersionHistoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetPackageVersionHistoryAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::GetPackageVersionHistoryAsyncHelper(const GetPackageVersionHistoryRequest& request, const GetPackageVersionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPackageVersionHistory(request), context);
}

GetUpgradeHistoryOutcome ElasticsearchServiceClient::GetUpgradeHistory(const GetUpgradeHistoryRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUpgradeHistory", "Required field: DomainName, is not set");
    return GetUpgradeHistoryOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/upgradeDomain/";
  ss << request.GetDomainName();
  ss << "/history";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetUpgradeHistoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetUpgradeHistoryAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::GetUpgradeHistoryAsyncHelper(const GetUpgradeHistoryRequest& request, const GetUpgradeHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUpgradeHistory(request), context);
}

GetUpgradeStatusOutcome ElasticsearchServiceClient::GetUpgradeStatus(const GetUpgradeStatusRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUpgradeStatus", "Required field: DomainName, is not set");
    return GetUpgradeStatusOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/upgradeDomain/";
  ss << request.GetDomainName();
  ss << "/status";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetUpgradeStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetUpgradeStatusAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::GetUpgradeStatusAsyncHelper(const GetUpgradeStatusRequest& request, const GetUpgradeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUpgradeStatus(request), context);
}

ListDomainNamesOutcome ElasticsearchServiceClient::ListDomainNames() const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-01-01/domain";
  return ListDomainNamesOutcome(MakeRequest(ss.str(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, "ListDomainNames"));
}

ListDomainNamesOutcomeCallable ElasticsearchServiceClient::ListDomainNamesCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainNamesOutcome() > >(ALLOCATION_TAG, [this](){ return this->ListDomainNames(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticsearchServiceClient::ListDomainNamesAsync(const ListDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context](){ this->ListDomainNamesAsyncHelper( handler, context ); } );
}

void ElasticsearchServiceClient::ListDomainNamesAsyncHelper(const ListDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, ListDomainNames(), context);
}

ListDomainsForPackageOutcome ElasticsearchServiceClient::ListDomainsForPackage(const ListDomainsForPackageRequest& request) const
{
  if (!request.PackageIDHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDomainsForPackage", "Required field: PackageID, is not set");
    return ListDomainsForPackageOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/packages/";
  ss << request.GetPackageID();
  ss << "/domains";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListDomainsForPackageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListDomainsForPackageAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::ListDomainsForPackageAsyncHelper(const ListDomainsForPackageRequest& request, const ListDomainsForPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDomainsForPackage(request), context);
}

ListElasticsearchInstanceTypesOutcome ElasticsearchServiceClient::ListElasticsearchInstanceTypes(const ListElasticsearchInstanceTypesRequest& request) const
{
  if (!request.ElasticsearchVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListElasticsearchInstanceTypes", "Required field: ElasticsearchVersion, is not set");
    return ListElasticsearchInstanceTypesOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ElasticsearchVersion]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/instanceTypes/";
  ss << request.GetElasticsearchVersion();
  uri.SetPath(uri.GetPath() + ss.str());
  return ListElasticsearchInstanceTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListElasticsearchInstanceTypesAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::ListElasticsearchInstanceTypesAsyncHelper(const ListElasticsearchInstanceTypesRequest& request, const ListElasticsearchInstanceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListElasticsearchInstanceTypes(request), context);
}

ListElasticsearchVersionsOutcome ElasticsearchServiceClient::ListElasticsearchVersions(const ListElasticsearchVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/versions";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListElasticsearchVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListElasticsearchVersionsAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::ListElasticsearchVersionsAsyncHelper(const ListElasticsearchVersionsRequest& request, const ListElasticsearchVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListElasticsearchVersions(request), context);
}

ListPackagesForDomainOutcome ElasticsearchServiceClient::ListPackagesForDomain(const ListPackagesForDomainRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPackagesForDomain", "Required field: DomainName, is not set");
    return ListPackagesForDomainOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/domain/";
  ss << request.GetDomainName();
  ss << "/packages";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListPackagesForDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListPackagesForDomainAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::ListPackagesForDomainAsyncHelper(const ListPackagesForDomainRequest& request, const ListPackagesForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPackagesForDomain(request), context);
}

ListTagsOutcome ElasticsearchServiceClient::ListTags(const ListTagsRequest& request) const
{
  if (!request.ARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTags", "Required field: ARN, is not set");
    return ListTagsOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ARN]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/tags/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::ListTagsAsyncHelper(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTags(request), context);
}

PurchaseReservedElasticsearchInstanceOfferingOutcome ElasticsearchServiceClient::PurchaseReservedElasticsearchInstanceOffering(const PurchaseReservedElasticsearchInstanceOfferingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/purchaseReservedInstanceOffering";
  uri.SetPath(uri.GetPath() + ss.str());
  return PurchaseReservedElasticsearchInstanceOfferingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->PurchaseReservedElasticsearchInstanceOfferingAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::PurchaseReservedElasticsearchInstanceOfferingAsyncHelper(const PurchaseReservedElasticsearchInstanceOfferingRequest& request, const PurchaseReservedElasticsearchInstanceOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PurchaseReservedElasticsearchInstanceOffering(request), context);
}

RejectInboundCrossClusterSearchConnectionOutcome ElasticsearchServiceClient::RejectInboundCrossClusterSearchConnection(const RejectInboundCrossClusterSearchConnectionRequest& request) const
{
  if (!request.CrossClusterSearchConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RejectInboundCrossClusterSearchConnection", "Required field: CrossClusterSearchConnectionId, is not set");
    return RejectInboundCrossClusterSearchConnectionOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CrossClusterSearchConnectionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/ccs/inboundConnection/";
  ss << request.GetCrossClusterSearchConnectionId();
  ss << "/reject";
  uri.SetPath(uri.GetPath() + ss.str());
  return RejectInboundCrossClusterSearchConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->RejectInboundCrossClusterSearchConnectionAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::RejectInboundCrossClusterSearchConnectionAsyncHelper(const RejectInboundCrossClusterSearchConnectionRequest& request, const RejectInboundCrossClusterSearchConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RejectInboundCrossClusterSearchConnection(request), context);
}

RemoveTagsOutcome ElasticsearchServiceClient::RemoveTags(const RemoveTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/tags-removal";
  uri.SetPath(uri.GetPath() + ss.str());
  return RemoveTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->RemoveTagsAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::RemoveTagsAsyncHelper(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTags(request), context);
}

StartElasticsearchServiceSoftwareUpdateOutcome ElasticsearchServiceClient::StartElasticsearchServiceSoftwareUpdate(const StartElasticsearchServiceSoftwareUpdateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/serviceSoftwareUpdate/start";
  uri.SetPath(uri.GetPath() + ss.str());
  return StartElasticsearchServiceSoftwareUpdateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->StartElasticsearchServiceSoftwareUpdateAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::StartElasticsearchServiceSoftwareUpdateAsyncHelper(const StartElasticsearchServiceSoftwareUpdateRequest& request, const StartElasticsearchServiceSoftwareUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartElasticsearchServiceSoftwareUpdate(request), context);
}

UpdateElasticsearchDomainConfigOutcome ElasticsearchServiceClient::UpdateElasticsearchDomainConfig(const UpdateElasticsearchDomainConfigRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateElasticsearchDomainConfig", "Required field: DomainName, is not set");
    return UpdateElasticsearchDomainConfigOutcome(Aws::Client::AWSError<ElasticsearchServiceErrors>(ElasticsearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/domain/";
  ss << request.GetDomainName();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateElasticsearchDomainConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateElasticsearchDomainConfigAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::UpdateElasticsearchDomainConfigAsyncHelper(const UpdateElasticsearchDomainConfigRequest& request, const UpdateElasticsearchDomainConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateElasticsearchDomainConfig(request), context);
}

UpdatePackageOutcome ElasticsearchServiceClient::UpdatePackage(const UpdatePackageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/packages/update";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdatePackageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdatePackageAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::UpdatePackageAsyncHelper(const UpdatePackageRequest& request, const UpdatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePackage(request), context);
}

UpgradeElasticsearchDomainOutcome ElasticsearchServiceClient::UpgradeElasticsearchDomain(const UpgradeElasticsearchDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-01-01/es/upgradeDomain";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpgradeElasticsearchDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpgradeElasticsearchDomainAsyncHelper( request, handler, context ); } );
}

void ElasticsearchServiceClient::UpgradeElasticsearchDomainAsyncHelper(const UpgradeElasticsearchDomainRequest& request, const UpgradeElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpgradeElasticsearchDomain(request), context);
}

