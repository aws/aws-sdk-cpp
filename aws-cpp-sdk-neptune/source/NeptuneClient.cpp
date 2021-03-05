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

#include <aws/neptune/NeptuneClient.h>
#include <aws/neptune/NeptuneEndpoint.h>
#include <aws/neptune/NeptuneErrorMarshaller.h>
#include <aws/neptune/model/AddRoleToDBClusterRequest.h>
#include <aws/neptune/model/AddSourceIdentifierToSubscriptionRequest.h>
#include <aws/neptune/model/AddTagsToResourceRequest.h>
#include <aws/neptune/model/ApplyPendingMaintenanceActionRequest.h>
#include <aws/neptune/model/CopyDBClusterParameterGroupRequest.h>
#include <aws/neptune/model/CopyDBClusterSnapshotRequest.h>
#include <aws/neptune/model/CopyDBParameterGroupRequest.h>
#include <aws/neptune/model/CreateDBClusterRequest.h>
#include <aws/neptune/model/CreateDBClusterEndpointRequest.h>
#include <aws/neptune/model/CreateDBClusterParameterGroupRequest.h>
#include <aws/neptune/model/CreateDBClusterSnapshotRequest.h>
#include <aws/neptune/model/CreateDBInstanceRequest.h>
#include <aws/neptune/model/CreateDBParameterGroupRequest.h>
#include <aws/neptune/model/CreateDBSubnetGroupRequest.h>
#include <aws/neptune/model/CreateEventSubscriptionRequest.h>
#include <aws/neptune/model/DeleteDBClusterRequest.h>
#include <aws/neptune/model/DeleteDBClusterEndpointRequest.h>
#include <aws/neptune/model/DeleteDBClusterParameterGroupRequest.h>
#include <aws/neptune/model/DeleteDBClusterSnapshotRequest.h>
#include <aws/neptune/model/DeleteDBInstanceRequest.h>
#include <aws/neptune/model/DeleteDBParameterGroupRequest.h>
#include <aws/neptune/model/DeleteDBSubnetGroupRequest.h>
#include <aws/neptune/model/DeleteEventSubscriptionRequest.h>
#include <aws/neptune/model/DescribeDBClusterEndpointsRequest.h>
#include <aws/neptune/model/DescribeDBClusterParameterGroupsRequest.h>
#include <aws/neptune/model/DescribeDBClusterParametersRequest.h>
#include <aws/neptune/model/DescribeDBClusterSnapshotAttributesRequest.h>
#include <aws/neptune/model/DescribeDBClusterSnapshotsRequest.h>
#include <aws/neptune/model/DescribeDBClustersRequest.h>
#include <aws/neptune/model/DescribeDBEngineVersionsRequest.h>
#include <aws/neptune/model/DescribeDBInstancesRequest.h>
#include <aws/neptune/model/DescribeDBParameterGroupsRequest.h>
#include <aws/neptune/model/DescribeDBParametersRequest.h>
#include <aws/neptune/model/DescribeDBSubnetGroupsRequest.h>
#include <aws/neptune/model/DescribeEngineDefaultClusterParametersRequest.h>
#include <aws/neptune/model/DescribeEngineDefaultParametersRequest.h>
#include <aws/neptune/model/DescribeEventCategoriesRequest.h>
#include <aws/neptune/model/DescribeEventSubscriptionsRequest.h>
#include <aws/neptune/model/DescribeEventsRequest.h>
#include <aws/neptune/model/DescribeOrderableDBInstanceOptionsRequest.h>
#include <aws/neptune/model/DescribePendingMaintenanceActionsRequest.h>
#include <aws/neptune/model/DescribeValidDBInstanceModificationsRequest.h>
#include <aws/neptune/model/FailoverDBClusterRequest.h>
#include <aws/neptune/model/ListTagsForResourceRequest.h>
#include <aws/neptune/model/ModifyDBClusterRequest.h>
#include <aws/neptune/model/ModifyDBClusterEndpointRequest.h>
#include <aws/neptune/model/ModifyDBClusterParameterGroupRequest.h>
#include <aws/neptune/model/ModifyDBClusterSnapshotAttributeRequest.h>
#include <aws/neptune/model/ModifyDBInstanceRequest.h>
#include <aws/neptune/model/ModifyDBParameterGroupRequest.h>
#include <aws/neptune/model/ModifyDBSubnetGroupRequest.h>
#include <aws/neptune/model/ModifyEventSubscriptionRequest.h>
#include <aws/neptune/model/PromoteReadReplicaDBClusterRequest.h>
#include <aws/neptune/model/RebootDBInstanceRequest.h>
#include <aws/neptune/model/RemoveRoleFromDBClusterRequest.h>
#include <aws/neptune/model/RemoveSourceIdentifierFromSubscriptionRequest.h>
#include <aws/neptune/model/RemoveTagsFromResourceRequest.h>
#include <aws/neptune/model/ResetDBClusterParameterGroupRequest.h>
#include <aws/neptune/model/ResetDBParameterGroupRequest.h>
#include <aws/neptune/model/RestoreDBClusterFromSnapshotRequest.h>
#include <aws/neptune/model/RestoreDBClusterToPointInTimeRequest.h>
#include <aws/neptune/model/StartDBClusterRequest.h>
#include <aws/neptune/model/StopDBClusterRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Neptune;
using namespace Aws::Neptune::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


static const char* SERVICE_NAME = "rds";
static const char* ALLOCATION_TAG = "NeptuneClient";


NeptuneClient::NeptuneClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<NeptuneErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

NeptuneClient::NeptuneClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<NeptuneErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

NeptuneClient::NeptuneClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<NeptuneErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

NeptuneClient::~NeptuneClient()
{
}

void NeptuneClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("Neptune");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  m_useDualStack = config.useDualStack;
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + NeptuneEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void NeptuneClient::OverrideEndpoint(const Aws::String& endpoint)
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

Aws::String NeptuneClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const
{
  Aws::StringStream ss;
  ss << "https://" << NeptuneEndpoint::ForRegion(region);
  ss << "?" << requestToConvert.SerializePayload();

  URI uri(ss.str());
  return GeneratePresignedUrl(uri, Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

AddRoleToDBClusterOutcome NeptuneClient::AddRoleToDBCluster(const AddRoleToDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return AddRoleToDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AddRoleToDBClusterOutcomeCallable NeptuneClient::AddRoleToDBClusterCallable(const AddRoleToDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddRoleToDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddRoleToDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::AddRoleToDBClusterAsync(const AddRoleToDBClusterRequest& request, const AddRoleToDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddRoleToDBClusterAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::AddRoleToDBClusterAsyncHelper(const AddRoleToDBClusterRequest& request, const AddRoleToDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddRoleToDBCluster(request), context);
}

AddSourceIdentifierToSubscriptionOutcome NeptuneClient::AddSourceIdentifierToSubscription(const AddSourceIdentifierToSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return AddSourceIdentifierToSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AddSourceIdentifierToSubscriptionOutcomeCallable NeptuneClient::AddSourceIdentifierToSubscriptionCallable(const AddSourceIdentifierToSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddSourceIdentifierToSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddSourceIdentifierToSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::AddSourceIdentifierToSubscriptionAsync(const AddSourceIdentifierToSubscriptionRequest& request, const AddSourceIdentifierToSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddSourceIdentifierToSubscriptionAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::AddSourceIdentifierToSubscriptionAsyncHelper(const AddSourceIdentifierToSubscriptionRequest& request, const AddSourceIdentifierToSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddSourceIdentifierToSubscription(request), context);
}

AddTagsToResourceOutcome NeptuneClient::AddTagsToResource(const AddTagsToResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return AddTagsToResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AddTagsToResourceOutcomeCallable NeptuneClient::AddTagsToResourceCallable(const AddTagsToResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsToResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTagsToResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::AddTagsToResourceAsync(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddTagsToResourceAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::AddTagsToResourceAsyncHelper(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTagsToResource(request), context);
}

ApplyPendingMaintenanceActionOutcome NeptuneClient::ApplyPendingMaintenanceAction(const ApplyPendingMaintenanceActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ApplyPendingMaintenanceActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ApplyPendingMaintenanceActionOutcomeCallable NeptuneClient::ApplyPendingMaintenanceActionCallable(const ApplyPendingMaintenanceActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ApplyPendingMaintenanceActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ApplyPendingMaintenanceAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::ApplyPendingMaintenanceActionAsync(const ApplyPendingMaintenanceActionRequest& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ApplyPendingMaintenanceActionAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::ApplyPendingMaintenanceActionAsyncHelper(const ApplyPendingMaintenanceActionRequest& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ApplyPendingMaintenanceAction(request), context);
}

CopyDBClusterParameterGroupOutcome NeptuneClient::CopyDBClusterParameterGroup(const CopyDBClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CopyDBClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CopyDBClusterParameterGroupOutcomeCallable NeptuneClient::CopyDBClusterParameterGroupCallable(const CopyDBClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyDBClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyDBClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::CopyDBClusterParameterGroupAsync(const CopyDBClusterParameterGroupRequest& request, const CopyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CopyDBClusterParameterGroupAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::CopyDBClusterParameterGroupAsyncHelper(const CopyDBClusterParameterGroupRequest& request, const CopyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CopyDBClusterParameterGroup(request), context);
}

CopyDBClusterSnapshotOutcome NeptuneClient::CopyDBClusterSnapshot(const CopyDBClusterSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  CopyDBClusterSnapshotRequest newRequest = request;
  if (request.SourceRegionHasBeenSet() && !request.PreSignedUrlHasBeenSet())
  {
    Aws::Http::URI sourceUri(m_configScheme + "://" + NeptuneEndpoint::ForRegion(request.GetSourceRegion(), m_useDualStack));
    newRequest.SetPreSignedUrl(GeneratePresignedUrl(request, sourceUri, Aws::Http::HttpMethod::HTTP_GET, request.GetSourceRegion().c_str(), {{ "DestinationRegion", m_region }}, 3600));
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CopyDBClusterSnapshotOutcome(MakeRequest(uri, newRequest, Aws::Http::HttpMethod::HTTP_POST));
}

CopyDBClusterSnapshotOutcomeCallable NeptuneClient::CopyDBClusterSnapshotCallable(const CopyDBClusterSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyDBClusterSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyDBClusterSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::CopyDBClusterSnapshotAsync(const CopyDBClusterSnapshotRequest& request, const CopyDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CopyDBClusterSnapshotAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::CopyDBClusterSnapshotAsyncHelper(const CopyDBClusterSnapshotRequest& request, const CopyDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CopyDBClusterSnapshot(request), context);
}

CopyDBParameterGroupOutcome NeptuneClient::CopyDBParameterGroup(const CopyDBParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CopyDBParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CopyDBParameterGroupOutcomeCallable NeptuneClient::CopyDBParameterGroupCallable(const CopyDBParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyDBParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyDBParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::CopyDBParameterGroupAsync(const CopyDBParameterGroupRequest& request, const CopyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CopyDBParameterGroupAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::CopyDBParameterGroupAsyncHelper(const CopyDBParameterGroupRequest& request, const CopyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CopyDBParameterGroup(request), context);
}

CreateDBClusterOutcome NeptuneClient::CreateDBCluster(const CreateDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  CreateDBClusterRequest newRequest = request;
  if (request.SourceRegionHasBeenSet() && !request.PreSignedUrlHasBeenSet())
  {
    Aws::Http::URI sourceUri(m_configScheme + "://" + NeptuneEndpoint::ForRegion(request.GetSourceRegion(), m_useDualStack));
    newRequest.SetPreSignedUrl(GeneratePresignedUrl(request, sourceUri, Aws::Http::HttpMethod::HTTP_GET, request.GetSourceRegion().c_str(), {{ "DestinationRegion", m_region }}, 3600));
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateDBClusterOutcome(MakeRequest(uri, newRequest, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBClusterOutcomeCallable NeptuneClient::CreateDBClusterCallable(const CreateDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::CreateDBClusterAsync(const CreateDBClusterRequest& request, const CreateDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDBClusterAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::CreateDBClusterAsyncHelper(const CreateDBClusterRequest& request, const CreateDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDBCluster(request), context);
}

CreateDBClusterEndpointOutcome NeptuneClient::CreateDBClusterEndpoint(const CreateDBClusterEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateDBClusterEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBClusterEndpointOutcomeCallable NeptuneClient::CreateDBClusterEndpointCallable(const CreateDBClusterEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBClusterEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBClusterEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::CreateDBClusterEndpointAsync(const CreateDBClusterEndpointRequest& request, const CreateDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDBClusterEndpointAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::CreateDBClusterEndpointAsyncHelper(const CreateDBClusterEndpointRequest& request, const CreateDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDBClusterEndpoint(request), context);
}

CreateDBClusterParameterGroupOutcome NeptuneClient::CreateDBClusterParameterGroup(const CreateDBClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateDBClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBClusterParameterGroupOutcomeCallable NeptuneClient::CreateDBClusterParameterGroupCallable(const CreateDBClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::CreateDBClusterParameterGroupAsync(const CreateDBClusterParameterGroupRequest& request, const CreateDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDBClusterParameterGroupAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::CreateDBClusterParameterGroupAsyncHelper(const CreateDBClusterParameterGroupRequest& request, const CreateDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDBClusterParameterGroup(request), context);
}

CreateDBClusterSnapshotOutcome NeptuneClient::CreateDBClusterSnapshot(const CreateDBClusterSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateDBClusterSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBClusterSnapshotOutcomeCallable NeptuneClient::CreateDBClusterSnapshotCallable(const CreateDBClusterSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBClusterSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBClusterSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::CreateDBClusterSnapshotAsync(const CreateDBClusterSnapshotRequest& request, const CreateDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDBClusterSnapshotAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::CreateDBClusterSnapshotAsyncHelper(const CreateDBClusterSnapshotRequest& request, const CreateDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDBClusterSnapshot(request), context);
}

CreateDBInstanceOutcome NeptuneClient::CreateDBInstance(const CreateDBInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateDBInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBInstanceOutcomeCallable NeptuneClient::CreateDBInstanceCallable(const CreateDBInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::CreateDBInstanceAsync(const CreateDBInstanceRequest& request, const CreateDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDBInstanceAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::CreateDBInstanceAsyncHelper(const CreateDBInstanceRequest& request, const CreateDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDBInstance(request), context);
}

CreateDBParameterGroupOutcome NeptuneClient::CreateDBParameterGroup(const CreateDBParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateDBParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBParameterGroupOutcomeCallable NeptuneClient::CreateDBParameterGroupCallable(const CreateDBParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::CreateDBParameterGroupAsync(const CreateDBParameterGroupRequest& request, const CreateDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDBParameterGroupAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::CreateDBParameterGroupAsyncHelper(const CreateDBParameterGroupRequest& request, const CreateDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDBParameterGroup(request), context);
}

CreateDBSubnetGroupOutcome NeptuneClient::CreateDBSubnetGroup(const CreateDBSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateDBSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBSubnetGroupOutcomeCallable NeptuneClient::CreateDBSubnetGroupCallable(const CreateDBSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::CreateDBSubnetGroupAsync(const CreateDBSubnetGroupRequest& request, const CreateDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDBSubnetGroupAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::CreateDBSubnetGroupAsyncHelper(const CreateDBSubnetGroupRequest& request, const CreateDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDBSubnetGroup(request), context);
}

CreateEventSubscriptionOutcome NeptuneClient::CreateEventSubscription(const CreateEventSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateEventSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateEventSubscriptionOutcomeCallable NeptuneClient::CreateEventSubscriptionCallable(const CreateEventSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEventSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEventSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::CreateEventSubscriptionAsync(const CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateEventSubscriptionAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::CreateEventSubscriptionAsyncHelper(const CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateEventSubscription(request), context);
}

DeleteDBClusterOutcome NeptuneClient::DeleteDBCluster(const DeleteDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBClusterOutcomeCallable NeptuneClient::DeleteDBClusterCallable(const DeleteDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::DeleteDBClusterAsync(const DeleteDBClusterRequest& request, const DeleteDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDBClusterAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::DeleteDBClusterAsyncHelper(const DeleteDBClusterRequest& request, const DeleteDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDBCluster(request), context);
}

DeleteDBClusterEndpointOutcome NeptuneClient::DeleteDBClusterEndpoint(const DeleteDBClusterEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteDBClusterEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBClusterEndpointOutcomeCallable NeptuneClient::DeleteDBClusterEndpointCallable(const DeleteDBClusterEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBClusterEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBClusterEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::DeleteDBClusterEndpointAsync(const DeleteDBClusterEndpointRequest& request, const DeleteDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDBClusterEndpointAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::DeleteDBClusterEndpointAsyncHelper(const DeleteDBClusterEndpointRequest& request, const DeleteDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDBClusterEndpoint(request), context);
}

DeleteDBClusterParameterGroupOutcome NeptuneClient::DeleteDBClusterParameterGroup(const DeleteDBClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteDBClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBClusterParameterGroupOutcomeCallable NeptuneClient::DeleteDBClusterParameterGroupCallable(const DeleteDBClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::DeleteDBClusterParameterGroupAsync(const DeleteDBClusterParameterGroupRequest& request, const DeleteDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDBClusterParameterGroupAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::DeleteDBClusterParameterGroupAsyncHelper(const DeleteDBClusterParameterGroupRequest& request, const DeleteDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDBClusterParameterGroup(request), context);
}

DeleteDBClusterSnapshotOutcome NeptuneClient::DeleteDBClusterSnapshot(const DeleteDBClusterSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteDBClusterSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBClusterSnapshotOutcomeCallable NeptuneClient::DeleteDBClusterSnapshotCallable(const DeleteDBClusterSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBClusterSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBClusterSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::DeleteDBClusterSnapshotAsync(const DeleteDBClusterSnapshotRequest& request, const DeleteDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDBClusterSnapshotAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::DeleteDBClusterSnapshotAsyncHelper(const DeleteDBClusterSnapshotRequest& request, const DeleteDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDBClusterSnapshot(request), context);
}

DeleteDBInstanceOutcome NeptuneClient::DeleteDBInstance(const DeleteDBInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteDBInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBInstanceOutcomeCallable NeptuneClient::DeleteDBInstanceCallable(const DeleteDBInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::DeleteDBInstanceAsync(const DeleteDBInstanceRequest& request, const DeleteDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDBInstanceAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::DeleteDBInstanceAsyncHelper(const DeleteDBInstanceRequest& request, const DeleteDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDBInstance(request), context);
}

DeleteDBParameterGroupOutcome NeptuneClient::DeleteDBParameterGroup(const DeleteDBParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteDBParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBParameterGroupOutcomeCallable NeptuneClient::DeleteDBParameterGroupCallable(const DeleteDBParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::DeleteDBParameterGroupAsync(const DeleteDBParameterGroupRequest& request, const DeleteDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDBParameterGroupAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::DeleteDBParameterGroupAsyncHelper(const DeleteDBParameterGroupRequest& request, const DeleteDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDBParameterGroup(request), context);
}

DeleteDBSubnetGroupOutcome NeptuneClient::DeleteDBSubnetGroup(const DeleteDBSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteDBSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBSubnetGroupOutcomeCallable NeptuneClient::DeleteDBSubnetGroupCallable(const DeleteDBSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::DeleteDBSubnetGroupAsync(const DeleteDBSubnetGroupRequest& request, const DeleteDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDBSubnetGroupAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::DeleteDBSubnetGroupAsyncHelper(const DeleteDBSubnetGroupRequest& request, const DeleteDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDBSubnetGroup(request), context);
}

DeleteEventSubscriptionOutcome NeptuneClient::DeleteEventSubscription(const DeleteEventSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteEventSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteEventSubscriptionOutcomeCallable NeptuneClient::DeleteEventSubscriptionCallable(const DeleteEventSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEventSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::DeleteEventSubscriptionAsync(const DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEventSubscriptionAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::DeleteEventSubscriptionAsyncHelper(const DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEventSubscription(request), context);
}

DescribeDBClusterEndpointsOutcome NeptuneClient::DescribeDBClusterEndpoints(const DescribeDBClusterEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBClusterEndpointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClusterEndpointsOutcomeCallable NeptuneClient::DescribeDBClusterEndpointsCallable(const DescribeDBClusterEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClusterEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusterEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::DescribeDBClusterEndpointsAsync(const DescribeDBClusterEndpointsRequest& request, const DescribeDBClusterEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBClusterEndpointsAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::DescribeDBClusterEndpointsAsyncHelper(const DescribeDBClusterEndpointsRequest& request, const DescribeDBClusterEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBClusterEndpoints(request), context);
}

DescribeDBClusterParameterGroupsOutcome NeptuneClient::DescribeDBClusterParameterGroups(const DescribeDBClusterParameterGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBClusterParameterGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClusterParameterGroupsOutcomeCallable NeptuneClient::DescribeDBClusterParameterGroupsCallable(const DescribeDBClusterParameterGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClusterParameterGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusterParameterGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::DescribeDBClusterParameterGroupsAsync(const DescribeDBClusterParameterGroupsRequest& request, const DescribeDBClusterParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBClusterParameterGroupsAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::DescribeDBClusterParameterGroupsAsyncHelper(const DescribeDBClusterParameterGroupsRequest& request, const DescribeDBClusterParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBClusterParameterGroups(request), context);
}

DescribeDBClusterParametersOutcome NeptuneClient::DescribeDBClusterParameters(const DescribeDBClusterParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBClusterParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClusterParametersOutcomeCallable NeptuneClient::DescribeDBClusterParametersCallable(const DescribeDBClusterParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClusterParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusterParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::DescribeDBClusterParametersAsync(const DescribeDBClusterParametersRequest& request, const DescribeDBClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBClusterParametersAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::DescribeDBClusterParametersAsyncHelper(const DescribeDBClusterParametersRequest& request, const DescribeDBClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBClusterParameters(request), context);
}

DescribeDBClusterSnapshotAttributesOutcome NeptuneClient::DescribeDBClusterSnapshotAttributes(const DescribeDBClusterSnapshotAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBClusterSnapshotAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClusterSnapshotAttributesOutcomeCallable NeptuneClient::DescribeDBClusterSnapshotAttributesCallable(const DescribeDBClusterSnapshotAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClusterSnapshotAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusterSnapshotAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::DescribeDBClusterSnapshotAttributesAsync(const DescribeDBClusterSnapshotAttributesRequest& request, const DescribeDBClusterSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBClusterSnapshotAttributesAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::DescribeDBClusterSnapshotAttributesAsyncHelper(const DescribeDBClusterSnapshotAttributesRequest& request, const DescribeDBClusterSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBClusterSnapshotAttributes(request), context);
}

DescribeDBClusterSnapshotsOutcome NeptuneClient::DescribeDBClusterSnapshots(const DescribeDBClusterSnapshotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBClusterSnapshotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClusterSnapshotsOutcomeCallable NeptuneClient::DescribeDBClusterSnapshotsCallable(const DescribeDBClusterSnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClusterSnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusterSnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::DescribeDBClusterSnapshotsAsync(const DescribeDBClusterSnapshotsRequest& request, const DescribeDBClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBClusterSnapshotsAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::DescribeDBClusterSnapshotsAsyncHelper(const DescribeDBClusterSnapshotsRequest& request, const DescribeDBClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBClusterSnapshots(request), context);
}

DescribeDBClustersOutcome NeptuneClient::DescribeDBClusters(const DescribeDBClustersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBClustersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClustersOutcomeCallable NeptuneClient::DescribeDBClustersCallable(const DescribeDBClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::DescribeDBClustersAsync(const DescribeDBClustersRequest& request, const DescribeDBClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBClustersAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::DescribeDBClustersAsyncHelper(const DescribeDBClustersRequest& request, const DescribeDBClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBClusters(request), context);
}

DescribeDBEngineVersionsOutcome NeptuneClient::DescribeDBEngineVersions(const DescribeDBEngineVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBEngineVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBEngineVersionsOutcomeCallable NeptuneClient::DescribeDBEngineVersionsCallable(const DescribeDBEngineVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBEngineVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBEngineVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::DescribeDBEngineVersionsAsync(const DescribeDBEngineVersionsRequest& request, const DescribeDBEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBEngineVersionsAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::DescribeDBEngineVersionsAsyncHelper(const DescribeDBEngineVersionsRequest& request, const DescribeDBEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBEngineVersions(request), context);
}

DescribeDBInstancesOutcome NeptuneClient::DescribeDBInstances(const DescribeDBInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBInstancesOutcomeCallable NeptuneClient::DescribeDBInstancesCallable(const DescribeDBInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::DescribeDBInstancesAsync(const DescribeDBInstancesRequest& request, const DescribeDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBInstancesAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::DescribeDBInstancesAsyncHelper(const DescribeDBInstancesRequest& request, const DescribeDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBInstances(request), context);
}

DescribeDBParameterGroupsOutcome NeptuneClient::DescribeDBParameterGroups(const DescribeDBParameterGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBParameterGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBParameterGroupsOutcomeCallable NeptuneClient::DescribeDBParameterGroupsCallable(const DescribeDBParameterGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBParameterGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBParameterGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::DescribeDBParameterGroupsAsync(const DescribeDBParameterGroupsRequest& request, const DescribeDBParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBParameterGroupsAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::DescribeDBParameterGroupsAsyncHelper(const DescribeDBParameterGroupsRequest& request, const DescribeDBParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBParameterGroups(request), context);
}

DescribeDBParametersOutcome NeptuneClient::DescribeDBParameters(const DescribeDBParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBParametersOutcomeCallable NeptuneClient::DescribeDBParametersCallable(const DescribeDBParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::DescribeDBParametersAsync(const DescribeDBParametersRequest& request, const DescribeDBParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBParametersAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::DescribeDBParametersAsyncHelper(const DescribeDBParametersRequest& request, const DescribeDBParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBParameters(request), context);
}

DescribeDBSubnetGroupsOutcome NeptuneClient::DescribeDBSubnetGroups(const DescribeDBSubnetGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBSubnetGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBSubnetGroupsOutcomeCallable NeptuneClient::DescribeDBSubnetGroupsCallable(const DescribeDBSubnetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBSubnetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBSubnetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::DescribeDBSubnetGroupsAsync(const DescribeDBSubnetGroupsRequest& request, const DescribeDBSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBSubnetGroupsAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::DescribeDBSubnetGroupsAsyncHelper(const DescribeDBSubnetGroupsRequest& request, const DescribeDBSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBSubnetGroups(request), context);
}

DescribeEngineDefaultClusterParametersOutcome NeptuneClient::DescribeEngineDefaultClusterParameters(const DescribeEngineDefaultClusterParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeEngineDefaultClusterParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEngineDefaultClusterParametersOutcomeCallable NeptuneClient::DescribeEngineDefaultClusterParametersCallable(const DescribeEngineDefaultClusterParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEngineDefaultClusterParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEngineDefaultClusterParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::DescribeEngineDefaultClusterParametersAsync(const DescribeEngineDefaultClusterParametersRequest& request, const DescribeEngineDefaultClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEngineDefaultClusterParametersAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::DescribeEngineDefaultClusterParametersAsyncHelper(const DescribeEngineDefaultClusterParametersRequest& request, const DescribeEngineDefaultClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEngineDefaultClusterParameters(request), context);
}

DescribeEngineDefaultParametersOutcome NeptuneClient::DescribeEngineDefaultParameters(const DescribeEngineDefaultParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeEngineDefaultParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEngineDefaultParametersOutcomeCallable NeptuneClient::DescribeEngineDefaultParametersCallable(const DescribeEngineDefaultParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEngineDefaultParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEngineDefaultParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::DescribeEngineDefaultParametersAsync(const DescribeEngineDefaultParametersRequest& request, const DescribeEngineDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEngineDefaultParametersAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::DescribeEngineDefaultParametersAsyncHelper(const DescribeEngineDefaultParametersRequest& request, const DescribeEngineDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEngineDefaultParameters(request), context);
}

DescribeEventCategoriesOutcome NeptuneClient::DescribeEventCategories(const DescribeEventCategoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeEventCategoriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEventCategoriesOutcomeCallable NeptuneClient::DescribeEventCategoriesCallable(const DescribeEventCategoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventCategoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventCategories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::DescribeEventCategoriesAsync(const DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEventCategoriesAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::DescribeEventCategoriesAsyncHelper(const DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEventCategories(request), context);
}

DescribeEventSubscriptionsOutcome NeptuneClient::DescribeEventSubscriptions(const DescribeEventSubscriptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeEventSubscriptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEventSubscriptionsOutcomeCallable NeptuneClient::DescribeEventSubscriptionsCallable(const DescribeEventSubscriptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventSubscriptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventSubscriptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::DescribeEventSubscriptionsAsync(const DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEventSubscriptionsAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::DescribeEventSubscriptionsAsyncHelper(const DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEventSubscriptions(request), context);
}

DescribeEventsOutcome NeptuneClient::DescribeEvents(const DescribeEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEventsOutcomeCallable NeptuneClient::DescribeEventsCallable(const DescribeEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::DescribeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEventsAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::DescribeEventsAsyncHelper(const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEvents(request), context);
}

DescribeOrderableDBInstanceOptionsOutcome NeptuneClient::DescribeOrderableDBInstanceOptions(const DescribeOrderableDBInstanceOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeOrderableDBInstanceOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeOrderableDBInstanceOptionsOutcomeCallable NeptuneClient::DescribeOrderableDBInstanceOptionsCallable(const DescribeOrderableDBInstanceOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrderableDBInstanceOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrderableDBInstanceOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::DescribeOrderableDBInstanceOptionsAsync(const DescribeOrderableDBInstanceOptionsRequest& request, const DescribeOrderableDBInstanceOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeOrderableDBInstanceOptionsAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::DescribeOrderableDBInstanceOptionsAsyncHelper(const DescribeOrderableDBInstanceOptionsRequest& request, const DescribeOrderableDBInstanceOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeOrderableDBInstanceOptions(request), context);
}

DescribePendingMaintenanceActionsOutcome NeptuneClient::DescribePendingMaintenanceActions(const DescribePendingMaintenanceActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribePendingMaintenanceActionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribePendingMaintenanceActionsOutcomeCallable NeptuneClient::DescribePendingMaintenanceActionsCallable(const DescribePendingMaintenanceActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePendingMaintenanceActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePendingMaintenanceActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::DescribePendingMaintenanceActionsAsync(const DescribePendingMaintenanceActionsRequest& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePendingMaintenanceActionsAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::DescribePendingMaintenanceActionsAsyncHelper(const DescribePendingMaintenanceActionsRequest& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePendingMaintenanceActions(request), context);
}

DescribeValidDBInstanceModificationsOutcome NeptuneClient::DescribeValidDBInstanceModifications(const DescribeValidDBInstanceModificationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeValidDBInstanceModificationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeValidDBInstanceModificationsOutcomeCallable NeptuneClient::DescribeValidDBInstanceModificationsCallable(const DescribeValidDBInstanceModificationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeValidDBInstanceModificationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeValidDBInstanceModifications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::DescribeValidDBInstanceModificationsAsync(const DescribeValidDBInstanceModificationsRequest& request, const DescribeValidDBInstanceModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeValidDBInstanceModificationsAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::DescribeValidDBInstanceModificationsAsyncHelper(const DescribeValidDBInstanceModificationsRequest& request, const DescribeValidDBInstanceModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeValidDBInstanceModifications(request), context);
}

FailoverDBClusterOutcome NeptuneClient::FailoverDBCluster(const FailoverDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return FailoverDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

FailoverDBClusterOutcomeCallable NeptuneClient::FailoverDBClusterCallable(const FailoverDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< FailoverDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->FailoverDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::FailoverDBClusterAsync(const FailoverDBClusterRequest& request, const FailoverDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->FailoverDBClusterAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::FailoverDBClusterAsyncHelper(const FailoverDBClusterRequest& request, const FailoverDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, FailoverDBCluster(request), context);
}

ListTagsForResourceOutcome NeptuneClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListTagsForResourceOutcomeCallable NeptuneClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ModifyDBClusterOutcome NeptuneClient::ModifyDBCluster(const ModifyDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ModifyDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBClusterOutcomeCallable NeptuneClient::ModifyDBClusterCallable(const ModifyDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::ModifyDBClusterAsync(const ModifyDBClusterRequest& request, const ModifyDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyDBClusterAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::ModifyDBClusterAsyncHelper(const ModifyDBClusterRequest& request, const ModifyDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyDBCluster(request), context);
}

ModifyDBClusterEndpointOutcome NeptuneClient::ModifyDBClusterEndpoint(const ModifyDBClusterEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ModifyDBClusterEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBClusterEndpointOutcomeCallable NeptuneClient::ModifyDBClusterEndpointCallable(const ModifyDBClusterEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBClusterEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBClusterEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::ModifyDBClusterEndpointAsync(const ModifyDBClusterEndpointRequest& request, const ModifyDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyDBClusterEndpointAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::ModifyDBClusterEndpointAsyncHelper(const ModifyDBClusterEndpointRequest& request, const ModifyDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyDBClusterEndpoint(request), context);
}

ModifyDBClusterParameterGroupOutcome NeptuneClient::ModifyDBClusterParameterGroup(const ModifyDBClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ModifyDBClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBClusterParameterGroupOutcomeCallable NeptuneClient::ModifyDBClusterParameterGroupCallable(const ModifyDBClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::ModifyDBClusterParameterGroupAsync(const ModifyDBClusterParameterGroupRequest& request, const ModifyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyDBClusterParameterGroupAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::ModifyDBClusterParameterGroupAsyncHelper(const ModifyDBClusterParameterGroupRequest& request, const ModifyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyDBClusterParameterGroup(request), context);
}

ModifyDBClusterSnapshotAttributeOutcome NeptuneClient::ModifyDBClusterSnapshotAttribute(const ModifyDBClusterSnapshotAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ModifyDBClusterSnapshotAttributeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBClusterSnapshotAttributeOutcomeCallable NeptuneClient::ModifyDBClusterSnapshotAttributeCallable(const ModifyDBClusterSnapshotAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBClusterSnapshotAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBClusterSnapshotAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::ModifyDBClusterSnapshotAttributeAsync(const ModifyDBClusterSnapshotAttributeRequest& request, const ModifyDBClusterSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyDBClusterSnapshotAttributeAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::ModifyDBClusterSnapshotAttributeAsyncHelper(const ModifyDBClusterSnapshotAttributeRequest& request, const ModifyDBClusterSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyDBClusterSnapshotAttribute(request), context);
}

ModifyDBInstanceOutcome NeptuneClient::ModifyDBInstance(const ModifyDBInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ModifyDBInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBInstanceOutcomeCallable NeptuneClient::ModifyDBInstanceCallable(const ModifyDBInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::ModifyDBInstanceAsync(const ModifyDBInstanceRequest& request, const ModifyDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyDBInstanceAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::ModifyDBInstanceAsyncHelper(const ModifyDBInstanceRequest& request, const ModifyDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyDBInstance(request), context);
}

ModifyDBParameterGroupOutcome NeptuneClient::ModifyDBParameterGroup(const ModifyDBParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ModifyDBParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBParameterGroupOutcomeCallable NeptuneClient::ModifyDBParameterGroupCallable(const ModifyDBParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::ModifyDBParameterGroupAsync(const ModifyDBParameterGroupRequest& request, const ModifyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyDBParameterGroupAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::ModifyDBParameterGroupAsyncHelper(const ModifyDBParameterGroupRequest& request, const ModifyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyDBParameterGroup(request), context);
}

ModifyDBSubnetGroupOutcome NeptuneClient::ModifyDBSubnetGroup(const ModifyDBSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ModifyDBSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBSubnetGroupOutcomeCallable NeptuneClient::ModifyDBSubnetGroupCallable(const ModifyDBSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::ModifyDBSubnetGroupAsync(const ModifyDBSubnetGroupRequest& request, const ModifyDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyDBSubnetGroupAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::ModifyDBSubnetGroupAsyncHelper(const ModifyDBSubnetGroupRequest& request, const ModifyDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyDBSubnetGroup(request), context);
}

ModifyEventSubscriptionOutcome NeptuneClient::ModifyEventSubscription(const ModifyEventSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ModifyEventSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyEventSubscriptionOutcomeCallable NeptuneClient::ModifyEventSubscriptionCallable(const ModifyEventSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyEventSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyEventSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::ModifyEventSubscriptionAsync(const ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyEventSubscriptionAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::ModifyEventSubscriptionAsyncHelper(const ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyEventSubscription(request), context);
}

PromoteReadReplicaDBClusterOutcome NeptuneClient::PromoteReadReplicaDBCluster(const PromoteReadReplicaDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return PromoteReadReplicaDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PromoteReadReplicaDBClusterOutcomeCallable NeptuneClient::PromoteReadReplicaDBClusterCallable(const PromoteReadReplicaDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PromoteReadReplicaDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PromoteReadReplicaDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::PromoteReadReplicaDBClusterAsync(const PromoteReadReplicaDBClusterRequest& request, const PromoteReadReplicaDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PromoteReadReplicaDBClusterAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::PromoteReadReplicaDBClusterAsyncHelper(const PromoteReadReplicaDBClusterRequest& request, const PromoteReadReplicaDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PromoteReadReplicaDBCluster(request), context);
}

RebootDBInstanceOutcome NeptuneClient::RebootDBInstance(const RebootDBInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RebootDBInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RebootDBInstanceOutcomeCallable NeptuneClient::RebootDBInstanceCallable(const RebootDBInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebootDBInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebootDBInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::RebootDBInstanceAsync(const RebootDBInstanceRequest& request, const RebootDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RebootDBInstanceAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::RebootDBInstanceAsyncHelper(const RebootDBInstanceRequest& request, const RebootDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RebootDBInstance(request), context);
}

RemoveRoleFromDBClusterOutcome NeptuneClient::RemoveRoleFromDBCluster(const RemoveRoleFromDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RemoveRoleFromDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RemoveRoleFromDBClusterOutcomeCallable NeptuneClient::RemoveRoleFromDBClusterCallable(const RemoveRoleFromDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveRoleFromDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveRoleFromDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::RemoveRoleFromDBClusterAsync(const RemoveRoleFromDBClusterRequest& request, const RemoveRoleFromDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveRoleFromDBClusterAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::RemoveRoleFromDBClusterAsyncHelper(const RemoveRoleFromDBClusterRequest& request, const RemoveRoleFromDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveRoleFromDBCluster(request), context);
}

RemoveSourceIdentifierFromSubscriptionOutcome NeptuneClient::RemoveSourceIdentifierFromSubscription(const RemoveSourceIdentifierFromSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RemoveSourceIdentifierFromSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RemoveSourceIdentifierFromSubscriptionOutcomeCallable NeptuneClient::RemoveSourceIdentifierFromSubscriptionCallable(const RemoveSourceIdentifierFromSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveSourceIdentifierFromSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveSourceIdentifierFromSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::RemoveSourceIdentifierFromSubscriptionAsync(const RemoveSourceIdentifierFromSubscriptionRequest& request, const RemoveSourceIdentifierFromSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveSourceIdentifierFromSubscriptionAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::RemoveSourceIdentifierFromSubscriptionAsyncHelper(const RemoveSourceIdentifierFromSubscriptionRequest& request, const RemoveSourceIdentifierFromSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveSourceIdentifierFromSubscription(request), context);
}

RemoveTagsFromResourceOutcome NeptuneClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RemoveTagsFromResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RemoveTagsFromResourceOutcomeCallable NeptuneClient::RemoveTagsFromResourceCallable(const RemoveTagsFromResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsFromResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTagsFromResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveTagsFromResourceAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::RemoveTagsFromResourceAsyncHelper(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTagsFromResource(request), context);
}

ResetDBClusterParameterGroupOutcome NeptuneClient::ResetDBClusterParameterGroup(const ResetDBClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ResetDBClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ResetDBClusterParameterGroupOutcomeCallable NeptuneClient::ResetDBClusterParameterGroupCallable(const ResetDBClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetDBClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetDBClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::ResetDBClusterParameterGroupAsync(const ResetDBClusterParameterGroupRequest& request, const ResetDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResetDBClusterParameterGroupAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::ResetDBClusterParameterGroupAsyncHelper(const ResetDBClusterParameterGroupRequest& request, const ResetDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResetDBClusterParameterGroup(request), context);
}

ResetDBParameterGroupOutcome NeptuneClient::ResetDBParameterGroup(const ResetDBParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ResetDBParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ResetDBParameterGroupOutcomeCallable NeptuneClient::ResetDBParameterGroupCallable(const ResetDBParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetDBParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetDBParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::ResetDBParameterGroupAsync(const ResetDBParameterGroupRequest& request, const ResetDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResetDBParameterGroupAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::ResetDBParameterGroupAsyncHelper(const ResetDBParameterGroupRequest& request, const ResetDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResetDBParameterGroup(request), context);
}

RestoreDBClusterFromSnapshotOutcome NeptuneClient::RestoreDBClusterFromSnapshot(const RestoreDBClusterFromSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RestoreDBClusterFromSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RestoreDBClusterFromSnapshotOutcomeCallable NeptuneClient::RestoreDBClusterFromSnapshotCallable(const RestoreDBClusterFromSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreDBClusterFromSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreDBClusterFromSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::RestoreDBClusterFromSnapshotAsync(const RestoreDBClusterFromSnapshotRequest& request, const RestoreDBClusterFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RestoreDBClusterFromSnapshotAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::RestoreDBClusterFromSnapshotAsyncHelper(const RestoreDBClusterFromSnapshotRequest& request, const RestoreDBClusterFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestoreDBClusterFromSnapshot(request), context);
}

RestoreDBClusterToPointInTimeOutcome NeptuneClient::RestoreDBClusterToPointInTime(const RestoreDBClusterToPointInTimeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RestoreDBClusterToPointInTimeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RestoreDBClusterToPointInTimeOutcomeCallable NeptuneClient::RestoreDBClusterToPointInTimeCallable(const RestoreDBClusterToPointInTimeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreDBClusterToPointInTimeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreDBClusterToPointInTime(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::RestoreDBClusterToPointInTimeAsync(const RestoreDBClusterToPointInTimeRequest& request, const RestoreDBClusterToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RestoreDBClusterToPointInTimeAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::RestoreDBClusterToPointInTimeAsyncHelper(const RestoreDBClusterToPointInTimeRequest& request, const RestoreDBClusterToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestoreDBClusterToPointInTime(request), context);
}

StartDBClusterOutcome NeptuneClient::StartDBCluster(const StartDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return StartDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

StartDBClusterOutcomeCallable NeptuneClient::StartDBClusterCallable(const StartDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::StartDBClusterAsync(const StartDBClusterRequest& request, const StartDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartDBClusterAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::StartDBClusterAsyncHelper(const StartDBClusterRequest& request, const StartDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartDBCluster(request), context);
}

StopDBClusterOutcome NeptuneClient::StopDBCluster(const StopDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return StopDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

StopDBClusterOutcomeCallable NeptuneClient::StopDBClusterCallable(const StopDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClient::StopDBClusterAsync(const StopDBClusterRequest& request, const StopDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopDBClusterAsyncHelper( request, handler, context ); } );
}

void NeptuneClient::StopDBClusterAsyncHelper(const StopDBClusterRequest& request, const StopDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopDBCluster(request), context);
}



