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
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/docdb/DocDBClient.h>
#include <aws/docdb/DocDBEndpoint.h>
#include <aws/docdb/DocDBErrorMarshaller.h>
#include <aws/docdb/model/AddSourceIdentifierToSubscriptionRequest.h>
#include <aws/docdb/model/AddTagsToResourceRequest.h>
#include <aws/docdb/model/ApplyPendingMaintenanceActionRequest.h>
#include <aws/docdb/model/CopyDBClusterParameterGroupRequest.h>
#include <aws/docdb/model/CopyDBClusterSnapshotRequest.h>
#include <aws/docdb/model/CreateDBClusterRequest.h>
#include <aws/docdb/model/CreateDBClusterParameterGroupRequest.h>
#include <aws/docdb/model/CreateDBClusterSnapshotRequest.h>
#include <aws/docdb/model/CreateDBInstanceRequest.h>
#include <aws/docdb/model/CreateDBSubnetGroupRequest.h>
#include <aws/docdb/model/CreateEventSubscriptionRequest.h>
#include <aws/docdb/model/CreateGlobalClusterRequest.h>
#include <aws/docdb/model/DeleteDBClusterRequest.h>
#include <aws/docdb/model/DeleteDBClusterParameterGroupRequest.h>
#include <aws/docdb/model/DeleteDBClusterSnapshotRequest.h>
#include <aws/docdb/model/DeleteDBInstanceRequest.h>
#include <aws/docdb/model/DeleteDBSubnetGroupRequest.h>
#include <aws/docdb/model/DeleteEventSubscriptionRequest.h>
#include <aws/docdb/model/DeleteGlobalClusterRequest.h>
#include <aws/docdb/model/DescribeCertificatesRequest.h>
#include <aws/docdb/model/DescribeDBClusterParameterGroupsRequest.h>
#include <aws/docdb/model/DescribeDBClusterParametersRequest.h>
#include <aws/docdb/model/DescribeDBClusterSnapshotAttributesRequest.h>
#include <aws/docdb/model/DescribeDBClusterSnapshotsRequest.h>
#include <aws/docdb/model/DescribeDBClustersRequest.h>
#include <aws/docdb/model/DescribeDBEngineVersionsRequest.h>
#include <aws/docdb/model/DescribeDBInstancesRequest.h>
#include <aws/docdb/model/DescribeDBSubnetGroupsRequest.h>
#include <aws/docdb/model/DescribeEngineDefaultClusterParametersRequest.h>
#include <aws/docdb/model/DescribeEventCategoriesRequest.h>
#include <aws/docdb/model/DescribeEventSubscriptionsRequest.h>
#include <aws/docdb/model/DescribeEventsRequest.h>
#include <aws/docdb/model/DescribeGlobalClustersRequest.h>
#include <aws/docdb/model/DescribeOrderableDBInstanceOptionsRequest.h>
#include <aws/docdb/model/DescribePendingMaintenanceActionsRequest.h>
#include <aws/docdb/model/FailoverDBClusterRequest.h>
#include <aws/docdb/model/ListTagsForResourceRequest.h>
#include <aws/docdb/model/ModifyDBClusterRequest.h>
#include <aws/docdb/model/ModifyDBClusterParameterGroupRequest.h>
#include <aws/docdb/model/ModifyDBClusterSnapshotAttributeRequest.h>
#include <aws/docdb/model/ModifyDBInstanceRequest.h>
#include <aws/docdb/model/ModifyDBSubnetGroupRequest.h>
#include <aws/docdb/model/ModifyEventSubscriptionRequest.h>
#include <aws/docdb/model/ModifyGlobalClusterRequest.h>
#include <aws/docdb/model/RebootDBInstanceRequest.h>
#include <aws/docdb/model/RemoveFromGlobalClusterRequest.h>
#include <aws/docdb/model/RemoveSourceIdentifierFromSubscriptionRequest.h>
#include <aws/docdb/model/RemoveTagsFromResourceRequest.h>
#include <aws/docdb/model/ResetDBClusterParameterGroupRequest.h>
#include <aws/docdb/model/RestoreDBClusterFromSnapshotRequest.h>
#include <aws/docdb/model/RestoreDBClusterToPointInTimeRequest.h>
#include <aws/docdb/model/StartDBClusterRequest.h>
#include <aws/docdb/model/StopDBClusterRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DocDB;
using namespace Aws::DocDB::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


static const char* SERVICE_NAME = "rds";
static const char* ALLOCATION_TAG = "DocDBClient";

DocDBClient::DocDBClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DocDBErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DocDBClient::DocDBClient(const AWSCredentials& credentials,
                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DocDBErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DocDBClient::DocDBClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DocDBErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DocDBClient::~DocDBClient()
{
}

void DocDBClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("DocDB");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  m_useDualStack = config.useDualStack;
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + DocDBEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void DocDBClient::OverrideEndpoint(const Aws::String& endpoint)
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

Aws::String DocDBClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const
{
  Aws::StringStream ss;
  ss << "https://" << DocDBEndpoint::ForRegion(region);
  ss << "?" << requestToConvert.SerializePayload();

  URI uri(ss.str());
  return GeneratePresignedUrl(uri, Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

AddSourceIdentifierToSubscriptionOutcome DocDBClient::AddSourceIdentifierToSubscription(const AddSourceIdentifierToSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddSourceIdentifierToSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AddSourceIdentifierToSubscriptionOutcomeCallable DocDBClient::AddSourceIdentifierToSubscriptionCallable(const AddSourceIdentifierToSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddSourceIdentifierToSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddSourceIdentifierToSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientAddSourceIdentifierToSubscriptionAsyncHelper(DocDBClient const * const clientThis, const AddSourceIdentifierToSubscriptionRequest& request, const AddSourceIdentifierToSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddSourceIdentifierToSubscription(request), context);
}

void DocDBClient::AddSourceIdentifierToSubscriptionAsync(const AddSourceIdentifierToSubscriptionRequest& request, const AddSourceIdentifierToSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientAddSourceIdentifierToSubscriptionAsyncHelper( this, request, handler, context ); } );
}

AddTagsToResourceOutcome DocDBClient::AddTagsToResource(const AddTagsToResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddTagsToResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AddTagsToResourceOutcomeCallable DocDBClient::AddTagsToResourceCallable(const AddTagsToResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsToResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTagsToResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientAddTagsToResourceAsyncHelper(DocDBClient const * const clientThis, const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddTagsToResource(request), context);
}

void DocDBClient::AddTagsToResourceAsync(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientAddTagsToResourceAsyncHelper( this, request, handler, context ); } );
}

ApplyPendingMaintenanceActionOutcome DocDBClient::ApplyPendingMaintenanceAction(const ApplyPendingMaintenanceActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ApplyPendingMaintenanceActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ApplyPendingMaintenanceActionOutcomeCallable DocDBClient::ApplyPendingMaintenanceActionCallable(const ApplyPendingMaintenanceActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ApplyPendingMaintenanceActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ApplyPendingMaintenanceAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientApplyPendingMaintenanceActionAsyncHelper(DocDBClient const * const clientThis, const ApplyPendingMaintenanceActionRequest& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ApplyPendingMaintenanceAction(request), context);
}

void DocDBClient::ApplyPendingMaintenanceActionAsync(const ApplyPendingMaintenanceActionRequest& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientApplyPendingMaintenanceActionAsyncHelper( this, request, handler, context ); } );
}

CopyDBClusterParameterGroupOutcome DocDBClient::CopyDBClusterParameterGroup(const CopyDBClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CopyDBClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CopyDBClusterParameterGroupOutcomeCallable DocDBClient::CopyDBClusterParameterGroupCallable(const CopyDBClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyDBClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyDBClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientCopyDBClusterParameterGroupAsyncHelper(DocDBClient const * const clientThis, const CopyDBClusterParameterGroupRequest& request, const CopyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CopyDBClusterParameterGroup(request), context);
}

void DocDBClient::CopyDBClusterParameterGroupAsync(const CopyDBClusterParameterGroupRequest& request, const CopyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientCopyDBClusterParameterGroupAsyncHelper( this, request, handler, context ); } );
}

CopyDBClusterSnapshotOutcome DocDBClient::CopyDBClusterSnapshot(const CopyDBClusterSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  CopyDBClusterSnapshotRequest newRequest = request;
  if (request.SourceRegionHasBeenSet() && !request.PreSignedUrlHasBeenSet())
  {
    Aws::Http::URI sourceUri(m_configScheme + "://" + DocDBEndpoint::ForRegion(request.GetSourceRegion(), m_useDualStack));
    newRequest.SetPreSignedUrl(GeneratePresignedUrl(request, sourceUri, Aws::Http::HttpMethod::HTTP_GET, request.GetSourceRegion().c_str(), {{ "DestinationRegion", m_region }}, 3600));
  }
  return CopyDBClusterSnapshotOutcome(MakeRequest(uri, newRequest, Aws::Http::HttpMethod::HTTP_POST));
}

CopyDBClusterSnapshotOutcomeCallable DocDBClient::CopyDBClusterSnapshotCallable(const CopyDBClusterSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyDBClusterSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyDBClusterSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientCopyDBClusterSnapshotAsyncHelper(DocDBClient const * const clientThis, const CopyDBClusterSnapshotRequest& request, const CopyDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CopyDBClusterSnapshot(request), context);
}

void DocDBClient::CopyDBClusterSnapshotAsync(const CopyDBClusterSnapshotRequest& request, const CopyDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientCopyDBClusterSnapshotAsyncHelper( this, request, handler, context ); } );
}

CreateDBClusterOutcome DocDBClient::CreateDBCluster(const CreateDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  CreateDBClusterRequest newRequest = request;
  if (request.SourceRegionHasBeenSet() && !request.PreSignedUrlHasBeenSet())
  {
    Aws::Http::URI sourceUri(m_configScheme + "://" + DocDBEndpoint::ForRegion(request.GetSourceRegion(), m_useDualStack));
    newRequest.SetPreSignedUrl(GeneratePresignedUrl(request, sourceUri, Aws::Http::HttpMethod::HTTP_GET, request.GetSourceRegion().c_str(), {{ "DestinationRegion", m_region }}, 3600));
  }
  return CreateDBClusterOutcome(MakeRequest(uri, newRequest, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBClusterOutcomeCallable DocDBClient::CreateDBClusterCallable(const CreateDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientCreateDBClusterAsyncHelper(DocDBClient const * const clientThis, const CreateDBClusterRequest& request, const CreateDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDBCluster(request), context);
}

void DocDBClient::CreateDBClusterAsync(const CreateDBClusterRequest& request, const CreateDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientCreateDBClusterAsyncHelper( this, request, handler, context ); } );
}

CreateDBClusterParameterGroupOutcome DocDBClient::CreateDBClusterParameterGroup(const CreateDBClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDBClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBClusterParameterGroupOutcomeCallable DocDBClient::CreateDBClusterParameterGroupCallable(const CreateDBClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientCreateDBClusterParameterGroupAsyncHelper(DocDBClient const * const clientThis, const CreateDBClusterParameterGroupRequest& request, const CreateDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDBClusterParameterGroup(request), context);
}

void DocDBClient::CreateDBClusterParameterGroupAsync(const CreateDBClusterParameterGroupRequest& request, const CreateDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientCreateDBClusterParameterGroupAsyncHelper( this, request, handler, context ); } );
}

CreateDBClusterSnapshotOutcome DocDBClient::CreateDBClusterSnapshot(const CreateDBClusterSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDBClusterSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBClusterSnapshotOutcomeCallable DocDBClient::CreateDBClusterSnapshotCallable(const CreateDBClusterSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBClusterSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBClusterSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientCreateDBClusterSnapshotAsyncHelper(DocDBClient const * const clientThis, const CreateDBClusterSnapshotRequest& request, const CreateDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDBClusterSnapshot(request), context);
}

void DocDBClient::CreateDBClusterSnapshotAsync(const CreateDBClusterSnapshotRequest& request, const CreateDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientCreateDBClusterSnapshotAsyncHelper( this, request, handler, context ); } );
}

CreateDBInstanceOutcome DocDBClient::CreateDBInstance(const CreateDBInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDBInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBInstanceOutcomeCallable DocDBClient::CreateDBInstanceCallable(const CreateDBInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientCreateDBInstanceAsyncHelper(DocDBClient const * const clientThis, const CreateDBInstanceRequest& request, const CreateDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDBInstance(request), context);
}

void DocDBClient::CreateDBInstanceAsync(const CreateDBInstanceRequest& request, const CreateDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientCreateDBInstanceAsyncHelper( this, request, handler, context ); } );
}

CreateDBSubnetGroupOutcome DocDBClient::CreateDBSubnetGroup(const CreateDBSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDBSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBSubnetGroupOutcomeCallable DocDBClient::CreateDBSubnetGroupCallable(const CreateDBSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientCreateDBSubnetGroupAsyncHelper(DocDBClient const * const clientThis, const CreateDBSubnetGroupRequest& request, const CreateDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDBSubnetGroup(request), context);
}

void DocDBClient::CreateDBSubnetGroupAsync(const CreateDBSubnetGroupRequest& request, const CreateDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientCreateDBSubnetGroupAsyncHelper( this, request, handler, context ); } );
}

CreateEventSubscriptionOutcome DocDBClient::CreateEventSubscription(const CreateEventSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEventSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateEventSubscriptionOutcomeCallable DocDBClient::CreateEventSubscriptionCallable(const CreateEventSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEventSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEventSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientCreateEventSubscriptionAsyncHelper(DocDBClient const * const clientThis, const CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEventSubscription(request), context);
}

void DocDBClient::CreateEventSubscriptionAsync(const CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientCreateEventSubscriptionAsyncHelper( this, request, handler, context ); } );
}

CreateGlobalClusterOutcome DocDBClient::CreateGlobalCluster(const CreateGlobalClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateGlobalClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateGlobalClusterOutcomeCallable DocDBClient::CreateGlobalClusterCallable(const CreateGlobalClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGlobalClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGlobalCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientCreateGlobalClusterAsyncHelper(DocDBClient const * const clientThis, const CreateGlobalClusterRequest& request, const CreateGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGlobalCluster(request), context);
}

void DocDBClient::CreateGlobalClusterAsync(const CreateGlobalClusterRequest& request, const CreateGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientCreateGlobalClusterAsyncHelper( this, request, handler, context ); } );
}

DeleteDBClusterOutcome DocDBClient::DeleteDBCluster(const DeleteDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBClusterOutcomeCallable DocDBClient::DeleteDBClusterCallable(const DeleteDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientDeleteDBClusterAsyncHelper(DocDBClient const * const clientThis, const DeleteDBClusterRequest& request, const DeleteDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDBCluster(request), context);
}

void DocDBClient::DeleteDBClusterAsync(const DeleteDBClusterRequest& request, const DeleteDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientDeleteDBClusterAsyncHelper( this, request, handler, context ); } );
}

DeleteDBClusterParameterGroupOutcome DocDBClient::DeleteDBClusterParameterGroup(const DeleteDBClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDBClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBClusterParameterGroupOutcomeCallable DocDBClient::DeleteDBClusterParameterGroupCallable(const DeleteDBClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientDeleteDBClusterParameterGroupAsyncHelper(DocDBClient const * const clientThis, const DeleteDBClusterParameterGroupRequest& request, const DeleteDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDBClusterParameterGroup(request), context);
}

void DocDBClient::DeleteDBClusterParameterGroupAsync(const DeleteDBClusterParameterGroupRequest& request, const DeleteDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientDeleteDBClusterParameterGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteDBClusterSnapshotOutcome DocDBClient::DeleteDBClusterSnapshot(const DeleteDBClusterSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDBClusterSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBClusterSnapshotOutcomeCallable DocDBClient::DeleteDBClusterSnapshotCallable(const DeleteDBClusterSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBClusterSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBClusterSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientDeleteDBClusterSnapshotAsyncHelper(DocDBClient const * const clientThis, const DeleteDBClusterSnapshotRequest& request, const DeleteDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDBClusterSnapshot(request), context);
}

void DocDBClient::DeleteDBClusterSnapshotAsync(const DeleteDBClusterSnapshotRequest& request, const DeleteDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientDeleteDBClusterSnapshotAsyncHelper( this, request, handler, context ); } );
}

DeleteDBInstanceOutcome DocDBClient::DeleteDBInstance(const DeleteDBInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDBInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBInstanceOutcomeCallable DocDBClient::DeleteDBInstanceCallable(const DeleteDBInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientDeleteDBInstanceAsyncHelper(DocDBClient const * const clientThis, const DeleteDBInstanceRequest& request, const DeleteDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDBInstance(request), context);
}

void DocDBClient::DeleteDBInstanceAsync(const DeleteDBInstanceRequest& request, const DeleteDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientDeleteDBInstanceAsyncHelper( this, request, handler, context ); } );
}

DeleteDBSubnetGroupOutcome DocDBClient::DeleteDBSubnetGroup(const DeleteDBSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDBSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBSubnetGroupOutcomeCallable DocDBClient::DeleteDBSubnetGroupCallable(const DeleteDBSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientDeleteDBSubnetGroupAsyncHelper(DocDBClient const * const clientThis, const DeleteDBSubnetGroupRequest& request, const DeleteDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDBSubnetGroup(request), context);
}

void DocDBClient::DeleteDBSubnetGroupAsync(const DeleteDBSubnetGroupRequest& request, const DeleteDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientDeleteDBSubnetGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteEventSubscriptionOutcome DocDBClient::DeleteEventSubscription(const DeleteEventSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEventSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteEventSubscriptionOutcomeCallable DocDBClient::DeleteEventSubscriptionCallable(const DeleteEventSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEventSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientDeleteEventSubscriptionAsyncHelper(DocDBClient const * const clientThis, const DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEventSubscription(request), context);
}

void DocDBClient::DeleteEventSubscriptionAsync(const DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientDeleteEventSubscriptionAsyncHelper( this, request, handler, context ); } );
}

DeleteGlobalClusterOutcome DocDBClient::DeleteGlobalCluster(const DeleteGlobalClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteGlobalClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteGlobalClusterOutcomeCallable DocDBClient::DeleteGlobalClusterCallable(const DeleteGlobalClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGlobalClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGlobalCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientDeleteGlobalClusterAsyncHelper(DocDBClient const * const clientThis, const DeleteGlobalClusterRequest& request, const DeleteGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGlobalCluster(request), context);
}

void DocDBClient::DeleteGlobalClusterAsync(const DeleteGlobalClusterRequest& request, const DeleteGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientDeleteGlobalClusterAsyncHelper( this, request, handler, context ); } );
}

DescribeCertificatesOutcome DocDBClient::DescribeCertificates(const DescribeCertificatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCertificatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeCertificatesOutcomeCallable DocDBClient::DescribeCertificatesCallable(const DescribeCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientDescribeCertificatesAsyncHelper(DocDBClient const * const clientThis, const DescribeCertificatesRequest& request, const DescribeCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCertificates(request), context);
}

void DocDBClient::DescribeCertificatesAsync(const DescribeCertificatesRequest& request, const DescribeCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientDescribeCertificatesAsyncHelper( this, request, handler, context ); } );
}

DescribeDBClusterParameterGroupsOutcome DocDBClient::DescribeDBClusterParameterGroups(const DescribeDBClusterParameterGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBClusterParameterGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClusterParameterGroupsOutcomeCallable DocDBClient::DescribeDBClusterParameterGroupsCallable(const DescribeDBClusterParameterGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClusterParameterGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusterParameterGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientDescribeDBClusterParameterGroupsAsyncHelper(DocDBClient const * const clientThis, const DescribeDBClusterParameterGroupsRequest& request, const DescribeDBClusterParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBClusterParameterGroups(request), context);
}

void DocDBClient::DescribeDBClusterParameterGroupsAsync(const DescribeDBClusterParameterGroupsRequest& request, const DescribeDBClusterParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientDescribeDBClusterParameterGroupsAsyncHelper( this, request, handler, context ); } );
}

DescribeDBClusterParametersOutcome DocDBClient::DescribeDBClusterParameters(const DescribeDBClusterParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBClusterParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClusterParametersOutcomeCallable DocDBClient::DescribeDBClusterParametersCallable(const DescribeDBClusterParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClusterParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusterParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientDescribeDBClusterParametersAsyncHelper(DocDBClient const * const clientThis, const DescribeDBClusterParametersRequest& request, const DescribeDBClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBClusterParameters(request), context);
}

void DocDBClient::DescribeDBClusterParametersAsync(const DescribeDBClusterParametersRequest& request, const DescribeDBClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientDescribeDBClusterParametersAsyncHelper( this, request, handler, context ); } );
}

DescribeDBClusterSnapshotAttributesOutcome DocDBClient::DescribeDBClusterSnapshotAttributes(const DescribeDBClusterSnapshotAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBClusterSnapshotAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClusterSnapshotAttributesOutcomeCallable DocDBClient::DescribeDBClusterSnapshotAttributesCallable(const DescribeDBClusterSnapshotAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClusterSnapshotAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusterSnapshotAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientDescribeDBClusterSnapshotAttributesAsyncHelper(DocDBClient const * const clientThis, const DescribeDBClusterSnapshotAttributesRequest& request, const DescribeDBClusterSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBClusterSnapshotAttributes(request), context);
}

void DocDBClient::DescribeDBClusterSnapshotAttributesAsync(const DescribeDBClusterSnapshotAttributesRequest& request, const DescribeDBClusterSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientDescribeDBClusterSnapshotAttributesAsyncHelper( this, request, handler, context ); } );
}

DescribeDBClusterSnapshotsOutcome DocDBClient::DescribeDBClusterSnapshots(const DescribeDBClusterSnapshotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBClusterSnapshotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClusterSnapshotsOutcomeCallable DocDBClient::DescribeDBClusterSnapshotsCallable(const DescribeDBClusterSnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClusterSnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusterSnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientDescribeDBClusterSnapshotsAsyncHelper(DocDBClient const * const clientThis, const DescribeDBClusterSnapshotsRequest& request, const DescribeDBClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBClusterSnapshots(request), context);
}

void DocDBClient::DescribeDBClusterSnapshotsAsync(const DescribeDBClusterSnapshotsRequest& request, const DescribeDBClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientDescribeDBClusterSnapshotsAsyncHelper( this, request, handler, context ); } );
}

DescribeDBClustersOutcome DocDBClient::DescribeDBClusters(const DescribeDBClustersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBClustersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClustersOutcomeCallable DocDBClient::DescribeDBClustersCallable(const DescribeDBClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientDescribeDBClustersAsyncHelper(DocDBClient const * const clientThis, const DescribeDBClustersRequest& request, const DescribeDBClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBClusters(request), context);
}

void DocDBClient::DescribeDBClustersAsync(const DescribeDBClustersRequest& request, const DescribeDBClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientDescribeDBClustersAsyncHelper( this, request, handler, context ); } );
}

DescribeDBEngineVersionsOutcome DocDBClient::DescribeDBEngineVersions(const DescribeDBEngineVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBEngineVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBEngineVersionsOutcomeCallable DocDBClient::DescribeDBEngineVersionsCallable(const DescribeDBEngineVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBEngineVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBEngineVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientDescribeDBEngineVersionsAsyncHelper(DocDBClient const * const clientThis, const DescribeDBEngineVersionsRequest& request, const DescribeDBEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBEngineVersions(request), context);
}

void DocDBClient::DescribeDBEngineVersionsAsync(const DescribeDBEngineVersionsRequest& request, const DescribeDBEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientDescribeDBEngineVersionsAsyncHelper( this, request, handler, context ); } );
}

DescribeDBInstancesOutcome DocDBClient::DescribeDBInstances(const DescribeDBInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBInstancesOutcomeCallable DocDBClient::DescribeDBInstancesCallable(const DescribeDBInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientDescribeDBInstancesAsyncHelper(DocDBClient const * const clientThis, const DescribeDBInstancesRequest& request, const DescribeDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBInstances(request), context);
}

void DocDBClient::DescribeDBInstancesAsync(const DescribeDBInstancesRequest& request, const DescribeDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientDescribeDBInstancesAsyncHelper( this, request, handler, context ); } );
}

DescribeDBSubnetGroupsOutcome DocDBClient::DescribeDBSubnetGroups(const DescribeDBSubnetGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBSubnetGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBSubnetGroupsOutcomeCallable DocDBClient::DescribeDBSubnetGroupsCallable(const DescribeDBSubnetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBSubnetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBSubnetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientDescribeDBSubnetGroupsAsyncHelper(DocDBClient const * const clientThis, const DescribeDBSubnetGroupsRequest& request, const DescribeDBSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBSubnetGroups(request), context);
}

void DocDBClient::DescribeDBSubnetGroupsAsync(const DescribeDBSubnetGroupsRequest& request, const DescribeDBSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientDescribeDBSubnetGroupsAsyncHelper( this, request, handler, context ); } );
}

DescribeEngineDefaultClusterParametersOutcome DocDBClient::DescribeEngineDefaultClusterParameters(const DescribeEngineDefaultClusterParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEngineDefaultClusterParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEngineDefaultClusterParametersOutcomeCallable DocDBClient::DescribeEngineDefaultClusterParametersCallable(const DescribeEngineDefaultClusterParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEngineDefaultClusterParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEngineDefaultClusterParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientDescribeEngineDefaultClusterParametersAsyncHelper(DocDBClient const * const clientThis, const DescribeEngineDefaultClusterParametersRequest& request, const DescribeEngineDefaultClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEngineDefaultClusterParameters(request), context);
}

void DocDBClient::DescribeEngineDefaultClusterParametersAsync(const DescribeEngineDefaultClusterParametersRequest& request, const DescribeEngineDefaultClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientDescribeEngineDefaultClusterParametersAsyncHelper( this, request, handler, context ); } );
}

DescribeEventCategoriesOutcome DocDBClient::DescribeEventCategories(const DescribeEventCategoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEventCategoriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEventCategoriesOutcomeCallable DocDBClient::DescribeEventCategoriesCallable(const DescribeEventCategoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventCategoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventCategories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientDescribeEventCategoriesAsyncHelper(DocDBClient const * const clientThis, const DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEventCategories(request), context);
}

void DocDBClient::DescribeEventCategoriesAsync(const DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientDescribeEventCategoriesAsyncHelper( this, request, handler, context ); } );
}

DescribeEventSubscriptionsOutcome DocDBClient::DescribeEventSubscriptions(const DescribeEventSubscriptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEventSubscriptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEventSubscriptionsOutcomeCallable DocDBClient::DescribeEventSubscriptionsCallable(const DescribeEventSubscriptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventSubscriptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventSubscriptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientDescribeEventSubscriptionsAsyncHelper(DocDBClient const * const clientThis, const DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEventSubscriptions(request), context);
}

void DocDBClient::DescribeEventSubscriptionsAsync(const DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientDescribeEventSubscriptionsAsyncHelper( this, request, handler, context ); } );
}

DescribeEventsOutcome DocDBClient::DescribeEvents(const DescribeEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEventsOutcomeCallable DocDBClient::DescribeEventsCallable(const DescribeEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientDescribeEventsAsyncHelper(DocDBClient const * const clientThis, const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEvents(request), context);
}

void DocDBClient::DescribeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientDescribeEventsAsyncHelper( this, request, handler, context ); } );
}

DescribeGlobalClustersOutcome DocDBClient::DescribeGlobalClusters(const DescribeGlobalClustersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeGlobalClustersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeGlobalClustersOutcomeCallable DocDBClient::DescribeGlobalClustersCallable(const DescribeGlobalClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGlobalClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGlobalClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientDescribeGlobalClustersAsyncHelper(DocDBClient const * const clientThis, const DescribeGlobalClustersRequest& request, const DescribeGlobalClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeGlobalClusters(request), context);
}

void DocDBClient::DescribeGlobalClustersAsync(const DescribeGlobalClustersRequest& request, const DescribeGlobalClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientDescribeGlobalClustersAsyncHelper( this, request, handler, context ); } );
}

DescribeOrderableDBInstanceOptionsOutcome DocDBClient::DescribeOrderableDBInstanceOptions(const DescribeOrderableDBInstanceOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeOrderableDBInstanceOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeOrderableDBInstanceOptionsOutcomeCallable DocDBClient::DescribeOrderableDBInstanceOptionsCallable(const DescribeOrderableDBInstanceOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrderableDBInstanceOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrderableDBInstanceOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientDescribeOrderableDBInstanceOptionsAsyncHelper(DocDBClient const * const clientThis, const DescribeOrderableDBInstanceOptionsRequest& request, const DescribeOrderableDBInstanceOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeOrderableDBInstanceOptions(request), context);
}

void DocDBClient::DescribeOrderableDBInstanceOptionsAsync(const DescribeOrderableDBInstanceOptionsRequest& request, const DescribeOrderableDBInstanceOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientDescribeOrderableDBInstanceOptionsAsyncHelper( this, request, handler, context ); } );
}

DescribePendingMaintenanceActionsOutcome DocDBClient::DescribePendingMaintenanceActions(const DescribePendingMaintenanceActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePendingMaintenanceActionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribePendingMaintenanceActionsOutcomeCallable DocDBClient::DescribePendingMaintenanceActionsCallable(const DescribePendingMaintenanceActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePendingMaintenanceActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePendingMaintenanceActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientDescribePendingMaintenanceActionsAsyncHelper(DocDBClient const * const clientThis, const DescribePendingMaintenanceActionsRequest& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePendingMaintenanceActions(request), context);
}

void DocDBClient::DescribePendingMaintenanceActionsAsync(const DescribePendingMaintenanceActionsRequest& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientDescribePendingMaintenanceActionsAsyncHelper( this, request, handler, context ); } );
}

FailoverDBClusterOutcome DocDBClient::FailoverDBCluster(const FailoverDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return FailoverDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

FailoverDBClusterOutcomeCallable DocDBClient::FailoverDBClusterCallable(const FailoverDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< FailoverDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->FailoverDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientFailoverDBClusterAsyncHelper(DocDBClient const * const clientThis, const FailoverDBClusterRequest& request, const FailoverDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->FailoverDBCluster(request), context);
}

void DocDBClient::FailoverDBClusterAsync(const FailoverDBClusterRequest& request, const FailoverDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientFailoverDBClusterAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome DocDBClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListTagsForResourceOutcomeCallable DocDBClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientListTagsForResourceAsyncHelper(DocDBClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void DocDBClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ModifyDBClusterOutcome DocDBClient::ModifyDBCluster(const ModifyDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBClusterOutcomeCallable DocDBClient::ModifyDBClusterCallable(const ModifyDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientModifyDBClusterAsyncHelper(DocDBClient const * const clientThis, const ModifyDBClusterRequest& request, const ModifyDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyDBCluster(request), context);
}

void DocDBClient::ModifyDBClusterAsync(const ModifyDBClusterRequest& request, const ModifyDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientModifyDBClusterAsyncHelper( this, request, handler, context ); } );
}

ModifyDBClusterParameterGroupOutcome DocDBClient::ModifyDBClusterParameterGroup(const ModifyDBClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyDBClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBClusterParameterGroupOutcomeCallable DocDBClient::ModifyDBClusterParameterGroupCallable(const ModifyDBClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientModifyDBClusterParameterGroupAsyncHelper(DocDBClient const * const clientThis, const ModifyDBClusterParameterGroupRequest& request, const ModifyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyDBClusterParameterGroup(request), context);
}

void DocDBClient::ModifyDBClusterParameterGroupAsync(const ModifyDBClusterParameterGroupRequest& request, const ModifyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientModifyDBClusterParameterGroupAsyncHelper( this, request, handler, context ); } );
}

ModifyDBClusterSnapshotAttributeOutcome DocDBClient::ModifyDBClusterSnapshotAttribute(const ModifyDBClusterSnapshotAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyDBClusterSnapshotAttributeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBClusterSnapshotAttributeOutcomeCallable DocDBClient::ModifyDBClusterSnapshotAttributeCallable(const ModifyDBClusterSnapshotAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBClusterSnapshotAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBClusterSnapshotAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientModifyDBClusterSnapshotAttributeAsyncHelper(DocDBClient const * const clientThis, const ModifyDBClusterSnapshotAttributeRequest& request, const ModifyDBClusterSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyDBClusterSnapshotAttribute(request), context);
}

void DocDBClient::ModifyDBClusterSnapshotAttributeAsync(const ModifyDBClusterSnapshotAttributeRequest& request, const ModifyDBClusterSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientModifyDBClusterSnapshotAttributeAsyncHelper( this, request, handler, context ); } );
}

ModifyDBInstanceOutcome DocDBClient::ModifyDBInstance(const ModifyDBInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyDBInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBInstanceOutcomeCallable DocDBClient::ModifyDBInstanceCallable(const ModifyDBInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientModifyDBInstanceAsyncHelper(DocDBClient const * const clientThis, const ModifyDBInstanceRequest& request, const ModifyDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyDBInstance(request), context);
}

void DocDBClient::ModifyDBInstanceAsync(const ModifyDBInstanceRequest& request, const ModifyDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientModifyDBInstanceAsyncHelper( this, request, handler, context ); } );
}

ModifyDBSubnetGroupOutcome DocDBClient::ModifyDBSubnetGroup(const ModifyDBSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyDBSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBSubnetGroupOutcomeCallable DocDBClient::ModifyDBSubnetGroupCallable(const ModifyDBSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientModifyDBSubnetGroupAsyncHelper(DocDBClient const * const clientThis, const ModifyDBSubnetGroupRequest& request, const ModifyDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyDBSubnetGroup(request), context);
}

void DocDBClient::ModifyDBSubnetGroupAsync(const ModifyDBSubnetGroupRequest& request, const ModifyDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientModifyDBSubnetGroupAsyncHelper( this, request, handler, context ); } );
}

ModifyEventSubscriptionOutcome DocDBClient::ModifyEventSubscription(const ModifyEventSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyEventSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyEventSubscriptionOutcomeCallable DocDBClient::ModifyEventSubscriptionCallable(const ModifyEventSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyEventSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyEventSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientModifyEventSubscriptionAsyncHelper(DocDBClient const * const clientThis, const ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyEventSubscription(request), context);
}

void DocDBClient::ModifyEventSubscriptionAsync(const ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientModifyEventSubscriptionAsyncHelper( this, request, handler, context ); } );
}

ModifyGlobalClusterOutcome DocDBClient::ModifyGlobalCluster(const ModifyGlobalClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyGlobalClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyGlobalClusterOutcomeCallable DocDBClient::ModifyGlobalClusterCallable(const ModifyGlobalClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyGlobalClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyGlobalCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientModifyGlobalClusterAsyncHelper(DocDBClient const * const clientThis, const ModifyGlobalClusterRequest& request, const ModifyGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyGlobalCluster(request), context);
}

void DocDBClient::ModifyGlobalClusterAsync(const ModifyGlobalClusterRequest& request, const ModifyGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientModifyGlobalClusterAsyncHelper( this, request, handler, context ); } );
}

RebootDBInstanceOutcome DocDBClient::RebootDBInstance(const RebootDBInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RebootDBInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RebootDBInstanceOutcomeCallable DocDBClient::RebootDBInstanceCallable(const RebootDBInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebootDBInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebootDBInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientRebootDBInstanceAsyncHelper(DocDBClient const * const clientThis, const RebootDBInstanceRequest& request, const RebootDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RebootDBInstance(request), context);
}

void DocDBClient::RebootDBInstanceAsync(const RebootDBInstanceRequest& request, const RebootDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientRebootDBInstanceAsyncHelper( this, request, handler, context ); } );
}

RemoveFromGlobalClusterOutcome DocDBClient::RemoveFromGlobalCluster(const RemoveFromGlobalClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveFromGlobalClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RemoveFromGlobalClusterOutcomeCallable DocDBClient::RemoveFromGlobalClusterCallable(const RemoveFromGlobalClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveFromGlobalClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveFromGlobalCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientRemoveFromGlobalClusterAsyncHelper(DocDBClient const * const clientThis, const RemoveFromGlobalClusterRequest& request, const RemoveFromGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveFromGlobalCluster(request), context);
}

void DocDBClient::RemoveFromGlobalClusterAsync(const RemoveFromGlobalClusterRequest& request, const RemoveFromGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientRemoveFromGlobalClusterAsyncHelper( this, request, handler, context ); } );
}

RemoveSourceIdentifierFromSubscriptionOutcome DocDBClient::RemoveSourceIdentifierFromSubscription(const RemoveSourceIdentifierFromSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveSourceIdentifierFromSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RemoveSourceIdentifierFromSubscriptionOutcomeCallable DocDBClient::RemoveSourceIdentifierFromSubscriptionCallable(const RemoveSourceIdentifierFromSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveSourceIdentifierFromSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveSourceIdentifierFromSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientRemoveSourceIdentifierFromSubscriptionAsyncHelper(DocDBClient const * const clientThis, const RemoveSourceIdentifierFromSubscriptionRequest& request, const RemoveSourceIdentifierFromSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveSourceIdentifierFromSubscription(request), context);
}

void DocDBClient::RemoveSourceIdentifierFromSubscriptionAsync(const RemoveSourceIdentifierFromSubscriptionRequest& request, const RemoveSourceIdentifierFromSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientRemoveSourceIdentifierFromSubscriptionAsyncHelper( this, request, handler, context ); } );
}

RemoveTagsFromResourceOutcome DocDBClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveTagsFromResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RemoveTagsFromResourceOutcomeCallable DocDBClient::RemoveTagsFromResourceCallable(const RemoveTagsFromResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsFromResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTagsFromResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientRemoveTagsFromResourceAsyncHelper(DocDBClient const * const clientThis, const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveTagsFromResource(request), context);
}

void DocDBClient::RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientRemoveTagsFromResourceAsyncHelper( this, request, handler, context ); } );
}

ResetDBClusterParameterGroupOutcome DocDBClient::ResetDBClusterParameterGroup(const ResetDBClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ResetDBClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ResetDBClusterParameterGroupOutcomeCallable DocDBClient::ResetDBClusterParameterGroupCallable(const ResetDBClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetDBClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetDBClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientResetDBClusterParameterGroupAsyncHelper(DocDBClient const * const clientThis, const ResetDBClusterParameterGroupRequest& request, const ResetDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ResetDBClusterParameterGroup(request), context);
}

void DocDBClient::ResetDBClusterParameterGroupAsync(const ResetDBClusterParameterGroupRequest& request, const ResetDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientResetDBClusterParameterGroupAsyncHelper( this, request, handler, context ); } );
}

RestoreDBClusterFromSnapshotOutcome DocDBClient::RestoreDBClusterFromSnapshot(const RestoreDBClusterFromSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RestoreDBClusterFromSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RestoreDBClusterFromSnapshotOutcomeCallable DocDBClient::RestoreDBClusterFromSnapshotCallable(const RestoreDBClusterFromSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreDBClusterFromSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreDBClusterFromSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientRestoreDBClusterFromSnapshotAsyncHelper(DocDBClient const * const clientThis, const RestoreDBClusterFromSnapshotRequest& request, const RestoreDBClusterFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RestoreDBClusterFromSnapshot(request), context);
}

void DocDBClient::RestoreDBClusterFromSnapshotAsync(const RestoreDBClusterFromSnapshotRequest& request, const RestoreDBClusterFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientRestoreDBClusterFromSnapshotAsyncHelper( this, request, handler, context ); } );
}

RestoreDBClusterToPointInTimeOutcome DocDBClient::RestoreDBClusterToPointInTime(const RestoreDBClusterToPointInTimeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RestoreDBClusterToPointInTimeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RestoreDBClusterToPointInTimeOutcomeCallable DocDBClient::RestoreDBClusterToPointInTimeCallable(const RestoreDBClusterToPointInTimeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreDBClusterToPointInTimeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreDBClusterToPointInTime(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientRestoreDBClusterToPointInTimeAsyncHelper(DocDBClient const * const clientThis, const RestoreDBClusterToPointInTimeRequest& request, const RestoreDBClusterToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RestoreDBClusterToPointInTime(request), context);
}

void DocDBClient::RestoreDBClusterToPointInTimeAsync(const RestoreDBClusterToPointInTimeRequest& request, const RestoreDBClusterToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientRestoreDBClusterToPointInTimeAsyncHelper( this, request, handler, context ); } );
}

StartDBClusterOutcome DocDBClient::StartDBCluster(const StartDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

StartDBClusterOutcomeCallable DocDBClient::StartDBClusterCallable(const StartDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientStartDBClusterAsyncHelper(DocDBClient const * const clientThis, const StartDBClusterRequest& request, const StartDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartDBCluster(request), context);
}

void DocDBClient::StartDBClusterAsync(const StartDBClusterRequest& request, const StartDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientStartDBClusterAsyncHelper( this, request, handler, context ); } );
}

StopDBClusterOutcome DocDBClient::StopDBCluster(const StopDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

StopDBClusterOutcomeCallable DocDBClient::StopDBClusterCallable(const StopDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DocDBClientStopDBClusterAsyncHelper(DocDBClient const * const clientThis, const StopDBClusterRequest& request, const StopDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopDBCluster(request), context);
}

void DocDBClient::StopDBClusterAsync(const StopDBClusterRequest& request, const StopDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DocDBClientStopDBClusterAsyncHelper( this, request, handler, context ); } );
}

