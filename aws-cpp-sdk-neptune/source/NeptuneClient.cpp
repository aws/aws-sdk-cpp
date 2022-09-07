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
#include <aws/neptune/model/CreateGlobalClusterRequest.h>
#include <aws/neptune/model/DeleteDBClusterRequest.h>
#include <aws/neptune/model/DeleteDBClusterEndpointRequest.h>
#include <aws/neptune/model/DeleteDBClusterParameterGroupRequest.h>
#include <aws/neptune/model/DeleteDBClusterSnapshotRequest.h>
#include <aws/neptune/model/DeleteDBInstanceRequest.h>
#include <aws/neptune/model/DeleteDBParameterGroupRequest.h>
#include <aws/neptune/model/DeleteDBSubnetGroupRequest.h>
#include <aws/neptune/model/DeleteEventSubscriptionRequest.h>
#include <aws/neptune/model/DeleteGlobalClusterRequest.h>
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
#include <aws/neptune/model/DescribeGlobalClustersRequest.h>
#include <aws/neptune/model/DescribeOrderableDBInstanceOptionsRequest.h>
#include <aws/neptune/model/DescribePendingMaintenanceActionsRequest.h>
#include <aws/neptune/model/DescribeValidDBInstanceModificationsRequest.h>
#include <aws/neptune/model/FailoverDBClusterRequest.h>
#include <aws/neptune/model/FailoverGlobalClusterRequest.h>
#include <aws/neptune/model/ListTagsForResourceRequest.h>
#include <aws/neptune/model/ModifyDBClusterRequest.h>
#include <aws/neptune/model/ModifyDBClusterEndpointRequest.h>
#include <aws/neptune/model/ModifyDBClusterParameterGroupRequest.h>
#include <aws/neptune/model/ModifyDBClusterSnapshotAttributeRequest.h>
#include <aws/neptune/model/ModifyDBInstanceRequest.h>
#include <aws/neptune/model/ModifyDBParameterGroupRequest.h>
#include <aws/neptune/model/ModifyDBSubnetGroupRequest.h>
#include <aws/neptune/model/ModifyEventSubscriptionRequest.h>
#include <aws/neptune/model/ModifyGlobalClusterRequest.h>
#include <aws/neptune/model/PromoteReadReplicaDBClusterRequest.h>
#include <aws/neptune/model/RebootDBInstanceRequest.h>
#include <aws/neptune/model/RemoveFromGlobalClusterRequest.h>
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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<NeptuneErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

NeptuneClient::NeptuneClient(const AWSCredentials& credentials,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<NeptuneErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

NeptuneClient::NeptuneClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<NeptuneErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

NeptuneClient::~NeptuneClient()
{
}

void NeptuneClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Neptune");
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
  return AddRoleToDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AddRoleToDBClusterOutcomeCallable NeptuneClient::AddRoleToDBClusterCallable(const AddRoleToDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddRoleToDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddRoleToDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientAddRoleToDBClusterAsyncHelper(NeptuneClient const * const clientThis, const AddRoleToDBClusterRequest& request, const AddRoleToDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddRoleToDBCluster(request), context);
}

void NeptuneClient::AddRoleToDBClusterAsync(const AddRoleToDBClusterRequest& request, const AddRoleToDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientAddRoleToDBClusterAsyncHelper( this, request, handler, context ); } );
}

AddSourceIdentifierToSubscriptionOutcome NeptuneClient::AddSourceIdentifierToSubscription(const AddSourceIdentifierToSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddSourceIdentifierToSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AddSourceIdentifierToSubscriptionOutcomeCallable NeptuneClient::AddSourceIdentifierToSubscriptionCallable(const AddSourceIdentifierToSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddSourceIdentifierToSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddSourceIdentifierToSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientAddSourceIdentifierToSubscriptionAsyncHelper(NeptuneClient const * const clientThis, const AddSourceIdentifierToSubscriptionRequest& request, const AddSourceIdentifierToSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddSourceIdentifierToSubscription(request), context);
}

void NeptuneClient::AddSourceIdentifierToSubscriptionAsync(const AddSourceIdentifierToSubscriptionRequest& request, const AddSourceIdentifierToSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientAddSourceIdentifierToSubscriptionAsyncHelper( this, request, handler, context ); } );
}

AddTagsToResourceOutcome NeptuneClient::AddTagsToResource(const AddTagsToResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddTagsToResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AddTagsToResourceOutcomeCallable NeptuneClient::AddTagsToResourceCallable(const AddTagsToResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsToResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTagsToResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientAddTagsToResourceAsyncHelper(NeptuneClient const * const clientThis, const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddTagsToResource(request), context);
}

void NeptuneClient::AddTagsToResourceAsync(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientAddTagsToResourceAsyncHelper( this, request, handler, context ); } );
}

ApplyPendingMaintenanceActionOutcome NeptuneClient::ApplyPendingMaintenanceAction(const ApplyPendingMaintenanceActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ApplyPendingMaintenanceActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ApplyPendingMaintenanceActionOutcomeCallable NeptuneClient::ApplyPendingMaintenanceActionCallable(const ApplyPendingMaintenanceActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ApplyPendingMaintenanceActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ApplyPendingMaintenanceAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientApplyPendingMaintenanceActionAsyncHelper(NeptuneClient const * const clientThis, const ApplyPendingMaintenanceActionRequest& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ApplyPendingMaintenanceAction(request), context);
}

void NeptuneClient::ApplyPendingMaintenanceActionAsync(const ApplyPendingMaintenanceActionRequest& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientApplyPendingMaintenanceActionAsyncHelper( this, request, handler, context ); } );
}

CopyDBClusterParameterGroupOutcome NeptuneClient::CopyDBClusterParameterGroup(const CopyDBClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CopyDBClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CopyDBClusterParameterGroupOutcomeCallable NeptuneClient::CopyDBClusterParameterGroupCallable(const CopyDBClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyDBClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyDBClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientCopyDBClusterParameterGroupAsyncHelper(NeptuneClient const * const clientThis, const CopyDBClusterParameterGroupRequest& request, const CopyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CopyDBClusterParameterGroup(request), context);
}

void NeptuneClient::CopyDBClusterParameterGroupAsync(const CopyDBClusterParameterGroupRequest& request, const CopyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientCopyDBClusterParameterGroupAsyncHelper( this, request, handler, context ); } );
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
  return CopyDBClusterSnapshotOutcome(MakeRequest(uri, newRequest, Aws::Http::HttpMethod::HTTP_POST));
}

CopyDBClusterSnapshotOutcomeCallable NeptuneClient::CopyDBClusterSnapshotCallable(const CopyDBClusterSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyDBClusterSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyDBClusterSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientCopyDBClusterSnapshotAsyncHelper(NeptuneClient const * const clientThis, const CopyDBClusterSnapshotRequest& request, const CopyDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CopyDBClusterSnapshot(request), context);
}

void NeptuneClient::CopyDBClusterSnapshotAsync(const CopyDBClusterSnapshotRequest& request, const CopyDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientCopyDBClusterSnapshotAsyncHelper( this, request, handler, context ); } );
}

CopyDBParameterGroupOutcome NeptuneClient::CopyDBParameterGroup(const CopyDBParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CopyDBParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CopyDBParameterGroupOutcomeCallable NeptuneClient::CopyDBParameterGroupCallable(const CopyDBParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyDBParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyDBParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientCopyDBParameterGroupAsyncHelper(NeptuneClient const * const clientThis, const CopyDBParameterGroupRequest& request, const CopyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CopyDBParameterGroup(request), context);
}

void NeptuneClient::CopyDBParameterGroupAsync(const CopyDBParameterGroupRequest& request, const CopyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientCopyDBParameterGroupAsyncHelper( this, request, handler, context ); } );
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
  return CreateDBClusterOutcome(MakeRequest(uri, newRequest, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBClusterOutcomeCallable NeptuneClient::CreateDBClusterCallable(const CreateDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientCreateDBClusterAsyncHelper(NeptuneClient const * const clientThis, const CreateDBClusterRequest& request, const CreateDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDBCluster(request), context);
}

void NeptuneClient::CreateDBClusterAsync(const CreateDBClusterRequest& request, const CreateDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientCreateDBClusterAsyncHelper( this, request, handler, context ); } );
}

CreateDBClusterEndpointOutcome NeptuneClient::CreateDBClusterEndpoint(const CreateDBClusterEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDBClusterEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBClusterEndpointOutcomeCallable NeptuneClient::CreateDBClusterEndpointCallable(const CreateDBClusterEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBClusterEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBClusterEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientCreateDBClusterEndpointAsyncHelper(NeptuneClient const * const clientThis, const CreateDBClusterEndpointRequest& request, const CreateDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDBClusterEndpoint(request), context);
}

void NeptuneClient::CreateDBClusterEndpointAsync(const CreateDBClusterEndpointRequest& request, const CreateDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientCreateDBClusterEndpointAsyncHelper( this, request, handler, context ); } );
}

CreateDBClusterParameterGroupOutcome NeptuneClient::CreateDBClusterParameterGroup(const CreateDBClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDBClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBClusterParameterGroupOutcomeCallable NeptuneClient::CreateDBClusterParameterGroupCallable(const CreateDBClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientCreateDBClusterParameterGroupAsyncHelper(NeptuneClient const * const clientThis, const CreateDBClusterParameterGroupRequest& request, const CreateDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDBClusterParameterGroup(request), context);
}

void NeptuneClient::CreateDBClusterParameterGroupAsync(const CreateDBClusterParameterGroupRequest& request, const CreateDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientCreateDBClusterParameterGroupAsyncHelper( this, request, handler, context ); } );
}

CreateDBClusterSnapshotOutcome NeptuneClient::CreateDBClusterSnapshot(const CreateDBClusterSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDBClusterSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBClusterSnapshotOutcomeCallable NeptuneClient::CreateDBClusterSnapshotCallable(const CreateDBClusterSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBClusterSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBClusterSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientCreateDBClusterSnapshotAsyncHelper(NeptuneClient const * const clientThis, const CreateDBClusterSnapshotRequest& request, const CreateDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDBClusterSnapshot(request), context);
}

void NeptuneClient::CreateDBClusterSnapshotAsync(const CreateDBClusterSnapshotRequest& request, const CreateDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientCreateDBClusterSnapshotAsyncHelper( this, request, handler, context ); } );
}

CreateDBInstanceOutcome NeptuneClient::CreateDBInstance(const CreateDBInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDBInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBInstanceOutcomeCallable NeptuneClient::CreateDBInstanceCallable(const CreateDBInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientCreateDBInstanceAsyncHelper(NeptuneClient const * const clientThis, const CreateDBInstanceRequest& request, const CreateDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDBInstance(request), context);
}

void NeptuneClient::CreateDBInstanceAsync(const CreateDBInstanceRequest& request, const CreateDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientCreateDBInstanceAsyncHelper( this, request, handler, context ); } );
}

CreateDBParameterGroupOutcome NeptuneClient::CreateDBParameterGroup(const CreateDBParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDBParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBParameterGroupOutcomeCallable NeptuneClient::CreateDBParameterGroupCallable(const CreateDBParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientCreateDBParameterGroupAsyncHelper(NeptuneClient const * const clientThis, const CreateDBParameterGroupRequest& request, const CreateDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDBParameterGroup(request), context);
}

void NeptuneClient::CreateDBParameterGroupAsync(const CreateDBParameterGroupRequest& request, const CreateDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientCreateDBParameterGroupAsyncHelper( this, request, handler, context ); } );
}

CreateDBSubnetGroupOutcome NeptuneClient::CreateDBSubnetGroup(const CreateDBSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDBSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBSubnetGroupOutcomeCallable NeptuneClient::CreateDBSubnetGroupCallable(const CreateDBSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientCreateDBSubnetGroupAsyncHelper(NeptuneClient const * const clientThis, const CreateDBSubnetGroupRequest& request, const CreateDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDBSubnetGroup(request), context);
}

void NeptuneClient::CreateDBSubnetGroupAsync(const CreateDBSubnetGroupRequest& request, const CreateDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientCreateDBSubnetGroupAsyncHelper( this, request, handler, context ); } );
}

CreateEventSubscriptionOutcome NeptuneClient::CreateEventSubscription(const CreateEventSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEventSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateEventSubscriptionOutcomeCallable NeptuneClient::CreateEventSubscriptionCallable(const CreateEventSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEventSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEventSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientCreateEventSubscriptionAsyncHelper(NeptuneClient const * const clientThis, const CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEventSubscription(request), context);
}

void NeptuneClient::CreateEventSubscriptionAsync(const CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientCreateEventSubscriptionAsyncHelper( this, request, handler, context ); } );
}

CreateGlobalClusterOutcome NeptuneClient::CreateGlobalCluster(const CreateGlobalClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateGlobalClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateGlobalClusterOutcomeCallable NeptuneClient::CreateGlobalClusterCallable(const CreateGlobalClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGlobalClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGlobalCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientCreateGlobalClusterAsyncHelper(NeptuneClient const * const clientThis, const CreateGlobalClusterRequest& request, const CreateGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGlobalCluster(request), context);
}

void NeptuneClient::CreateGlobalClusterAsync(const CreateGlobalClusterRequest& request, const CreateGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientCreateGlobalClusterAsyncHelper( this, request, handler, context ); } );
}

DeleteDBClusterOutcome NeptuneClient::DeleteDBCluster(const DeleteDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBClusterOutcomeCallable NeptuneClient::DeleteDBClusterCallable(const DeleteDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDeleteDBClusterAsyncHelper(NeptuneClient const * const clientThis, const DeleteDBClusterRequest& request, const DeleteDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDBCluster(request), context);
}

void NeptuneClient::DeleteDBClusterAsync(const DeleteDBClusterRequest& request, const DeleteDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDeleteDBClusterAsyncHelper( this, request, handler, context ); } );
}

DeleteDBClusterEndpointOutcome NeptuneClient::DeleteDBClusterEndpoint(const DeleteDBClusterEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDBClusterEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBClusterEndpointOutcomeCallable NeptuneClient::DeleteDBClusterEndpointCallable(const DeleteDBClusterEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBClusterEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBClusterEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDeleteDBClusterEndpointAsyncHelper(NeptuneClient const * const clientThis, const DeleteDBClusterEndpointRequest& request, const DeleteDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDBClusterEndpoint(request), context);
}

void NeptuneClient::DeleteDBClusterEndpointAsync(const DeleteDBClusterEndpointRequest& request, const DeleteDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDeleteDBClusterEndpointAsyncHelper( this, request, handler, context ); } );
}

DeleteDBClusterParameterGroupOutcome NeptuneClient::DeleteDBClusterParameterGroup(const DeleteDBClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDBClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBClusterParameterGroupOutcomeCallable NeptuneClient::DeleteDBClusterParameterGroupCallable(const DeleteDBClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDeleteDBClusterParameterGroupAsyncHelper(NeptuneClient const * const clientThis, const DeleteDBClusterParameterGroupRequest& request, const DeleteDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDBClusterParameterGroup(request), context);
}

void NeptuneClient::DeleteDBClusterParameterGroupAsync(const DeleteDBClusterParameterGroupRequest& request, const DeleteDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDeleteDBClusterParameterGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteDBClusterSnapshotOutcome NeptuneClient::DeleteDBClusterSnapshot(const DeleteDBClusterSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDBClusterSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBClusterSnapshotOutcomeCallable NeptuneClient::DeleteDBClusterSnapshotCallable(const DeleteDBClusterSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBClusterSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBClusterSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDeleteDBClusterSnapshotAsyncHelper(NeptuneClient const * const clientThis, const DeleteDBClusterSnapshotRequest& request, const DeleteDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDBClusterSnapshot(request), context);
}

void NeptuneClient::DeleteDBClusterSnapshotAsync(const DeleteDBClusterSnapshotRequest& request, const DeleteDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDeleteDBClusterSnapshotAsyncHelper( this, request, handler, context ); } );
}

DeleteDBInstanceOutcome NeptuneClient::DeleteDBInstance(const DeleteDBInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDBInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBInstanceOutcomeCallable NeptuneClient::DeleteDBInstanceCallable(const DeleteDBInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDeleteDBInstanceAsyncHelper(NeptuneClient const * const clientThis, const DeleteDBInstanceRequest& request, const DeleteDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDBInstance(request), context);
}

void NeptuneClient::DeleteDBInstanceAsync(const DeleteDBInstanceRequest& request, const DeleteDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDeleteDBInstanceAsyncHelper( this, request, handler, context ); } );
}

DeleteDBParameterGroupOutcome NeptuneClient::DeleteDBParameterGroup(const DeleteDBParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDBParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBParameterGroupOutcomeCallable NeptuneClient::DeleteDBParameterGroupCallable(const DeleteDBParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDeleteDBParameterGroupAsyncHelper(NeptuneClient const * const clientThis, const DeleteDBParameterGroupRequest& request, const DeleteDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDBParameterGroup(request), context);
}

void NeptuneClient::DeleteDBParameterGroupAsync(const DeleteDBParameterGroupRequest& request, const DeleteDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDeleteDBParameterGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteDBSubnetGroupOutcome NeptuneClient::DeleteDBSubnetGroup(const DeleteDBSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDBSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBSubnetGroupOutcomeCallable NeptuneClient::DeleteDBSubnetGroupCallable(const DeleteDBSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDeleteDBSubnetGroupAsyncHelper(NeptuneClient const * const clientThis, const DeleteDBSubnetGroupRequest& request, const DeleteDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDBSubnetGroup(request), context);
}

void NeptuneClient::DeleteDBSubnetGroupAsync(const DeleteDBSubnetGroupRequest& request, const DeleteDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDeleteDBSubnetGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteEventSubscriptionOutcome NeptuneClient::DeleteEventSubscription(const DeleteEventSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEventSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteEventSubscriptionOutcomeCallable NeptuneClient::DeleteEventSubscriptionCallable(const DeleteEventSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEventSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDeleteEventSubscriptionAsyncHelper(NeptuneClient const * const clientThis, const DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEventSubscription(request), context);
}

void NeptuneClient::DeleteEventSubscriptionAsync(const DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDeleteEventSubscriptionAsyncHelper( this, request, handler, context ); } );
}

DeleteGlobalClusterOutcome NeptuneClient::DeleteGlobalCluster(const DeleteGlobalClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteGlobalClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteGlobalClusterOutcomeCallable NeptuneClient::DeleteGlobalClusterCallable(const DeleteGlobalClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGlobalClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGlobalCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDeleteGlobalClusterAsyncHelper(NeptuneClient const * const clientThis, const DeleteGlobalClusterRequest& request, const DeleteGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGlobalCluster(request), context);
}

void NeptuneClient::DeleteGlobalClusterAsync(const DeleteGlobalClusterRequest& request, const DeleteGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDeleteGlobalClusterAsyncHelper( this, request, handler, context ); } );
}

DescribeDBClusterEndpointsOutcome NeptuneClient::DescribeDBClusterEndpoints(const DescribeDBClusterEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBClusterEndpointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClusterEndpointsOutcomeCallable NeptuneClient::DescribeDBClusterEndpointsCallable(const DescribeDBClusterEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClusterEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusterEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDescribeDBClusterEndpointsAsyncHelper(NeptuneClient const * const clientThis, const DescribeDBClusterEndpointsRequest& request, const DescribeDBClusterEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBClusterEndpoints(request), context);
}

void NeptuneClient::DescribeDBClusterEndpointsAsync(const DescribeDBClusterEndpointsRequest& request, const DescribeDBClusterEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDescribeDBClusterEndpointsAsyncHelper( this, request, handler, context ); } );
}

DescribeDBClusterParameterGroupsOutcome NeptuneClient::DescribeDBClusterParameterGroups(const DescribeDBClusterParameterGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBClusterParameterGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClusterParameterGroupsOutcomeCallable NeptuneClient::DescribeDBClusterParameterGroupsCallable(const DescribeDBClusterParameterGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClusterParameterGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusterParameterGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDescribeDBClusterParameterGroupsAsyncHelper(NeptuneClient const * const clientThis, const DescribeDBClusterParameterGroupsRequest& request, const DescribeDBClusterParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBClusterParameterGroups(request), context);
}

void NeptuneClient::DescribeDBClusterParameterGroupsAsync(const DescribeDBClusterParameterGroupsRequest& request, const DescribeDBClusterParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDescribeDBClusterParameterGroupsAsyncHelper( this, request, handler, context ); } );
}

DescribeDBClusterParametersOutcome NeptuneClient::DescribeDBClusterParameters(const DescribeDBClusterParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBClusterParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClusterParametersOutcomeCallable NeptuneClient::DescribeDBClusterParametersCallable(const DescribeDBClusterParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClusterParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusterParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDescribeDBClusterParametersAsyncHelper(NeptuneClient const * const clientThis, const DescribeDBClusterParametersRequest& request, const DescribeDBClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBClusterParameters(request), context);
}

void NeptuneClient::DescribeDBClusterParametersAsync(const DescribeDBClusterParametersRequest& request, const DescribeDBClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDescribeDBClusterParametersAsyncHelper( this, request, handler, context ); } );
}

DescribeDBClusterSnapshotAttributesOutcome NeptuneClient::DescribeDBClusterSnapshotAttributes(const DescribeDBClusterSnapshotAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBClusterSnapshotAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClusterSnapshotAttributesOutcomeCallable NeptuneClient::DescribeDBClusterSnapshotAttributesCallable(const DescribeDBClusterSnapshotAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClusterSnapshotAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusterSnapshotAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDescribeDBClusterSnapshotAttributesAsyncHelper(NeptuneClient const * const clientThis, const DescribeDBClusterSnapshotAttributesRequest& request, const DescribeDBClusterSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBClusterSnapshotAttributes(request), context);
}

void NeptuneClient::DescribeDBClusterSnapshotAttributesAsync(const DescribeDBClusterSnapshotAttributesRequest& request, const DescribeDBClusterSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDescribeDBClusterSnapshotAttributesAsyncHelper( this, request, handler, context ); } );
}

DescribeDBClusterSnapshotsOutcome NeptuneClient::DescribeDBClusterSnapshots(const DescribeDBClusterSnapshotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBClusterSnapshotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClusterSnapshotsOutcomeCallable NeptuneClient::DescribeDBClusterSnapshotsCallable(const DescribeDBClusterSnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClusterSnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusterSnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDescribeDBClusterSnapshotsAsyncHelper(NeptuneClient const * const clientThis, const DescribeDBClusterSnapshotsRequest& request, const DescribeDBClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBClusterSnapshots(request), context);
}

void NeptuneClient::DescribeDBClusterSnapshotsAsync(const DescribeDBClusterSnapshotsRequest& request, const DescribeDBClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDescribeDBClusterSnapshotsAsyncHelper( this, request, handler, context ); } );
}

DescribeDBClustersOutcome NeptuneClient::DescribeDBClusters(const DescribeDBClustersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBClustersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClustersOutcomeCallable NeptuneClient::DescribeDBClustersCallable(const DescribeDBClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDescribeDBClustersAsyncHelper(NeptuneClient const * const clientThis, const DescribeDBClustersRequest& request, const DescribeDBClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBClusters(request), context);
}

void NeptuneClient::DescribeDBClustersAsync(const DescribeDBClustersRequest& request, const DescribeDBClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDescribeDBClustersAsyncHelper( this, request, handler, context ); } );
}

DescribeDBEngineVersionsOutcome NeptuneClient::DescribeDBEngineVersions(const DescribeDBEngineVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBEngineVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBEngineVersionsOutcomeCallable NeptuneClient::DescribeDBEngineVersionsCallable(const DescribeDBEngineVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBEngineVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBEngineVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDescribeDBEngineVersionsAsyncHelper(NeptuneClient const * const clientThis, const DescribeDBEngineVersionsRequest& request, const DescribeDBEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBEngineVersions(request), context);
}

void NeptuneClient::DescribeDBEngineVersionsAsync(const DescribeDBEngineVersionsRequest& request, const DescribeDBEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDescribeDBEngineVersionsAsyncHelper( this, request, handler, context ); } );
}

DescribeDBInstancesOutcome NeptuneClient::DescribeDBInstances(const DescribeDBInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBInstancesOutcomeCallable NeptuneClient::DescribeDBInstancesCallable(const DescribeDBInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDescribeDBInstancesAsyncHelper(NeptuneClient const * const clientThis, const DescribeDBInstancesRequest& request, const DescribeDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBInstances(request), context);
}

void NeptuneClient::DescribeDBInstancesAsync(const DescribeDBInstancesRequest& request, const DescribeDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDescribeDBInstancesAsyncHelper( this, request, handler, context ); } );
}

DescribeDBParameterGroupsOutcome NeptuneClient::DescribeDBParameterGroups(const DescribeDBParameterGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBParameterGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBParameterGroupsOutcomeCallable NeptuneClient::DescribeDBParameterGroupsCallable(const DescribeDBParameterGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBParameterGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBParameterGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDescribeDBParameterGroupsAsyncHelper(NeptuneClient const * const clientThis, const DescribeDBParameterGroupsRequest& request, const DescribeDBParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBParameterGroups(request), context);
}

void NeptuneClient::DescribeDBParameterGroupsAsync(const DescribeDBParameterGroupsRequest& request, const DescribeDBParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDescribeDBParameterGroupsAsyncHelper( this, request, handler, context ); } );
}

DescribeDBParametersOutcome NeptuneClient::DescribeDBParameters(const DescribeDBParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBParametersOutcomeCallable NeptuneClient::DescribeDBParametersCallable(const DescribeDBParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDescribeDBParametersAsyncHelper(NeptuneClient const * const clientThis, const DescribeDBParametersRequest& request, const DescribeDBParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBParameters(request), context);
}

void NeptuneClient::DescribeDBParametersAsync(const DescribeDBParametersRequest& request, const DescribeDBParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDescribeDBParametersAsyncHelper( this, request, handler, context ); } );
}

DescribeDBSubnetGroupsOutcome NeptuneClient::DescribeDBSubnetGroups(const DescribeDBSubnetGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBSubnetGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBSubnetGroupsOutcomeCallable NeptuneClient::DescribeDBSubnetGroupsCallable(const DescribeDBSubnetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBSubnetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBSubnetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDescribeDBSubnetGroupsAsyncHelper(NeptuneClient const * const clientThis, const DescribeDBSubnetGroupsRequest& request, const DescribeDBSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBSubnetGroups(request), context);
}

void NeptuneClient::DescribeDBSubnetGroupsAsync(const DescribeDBSubnetGroupsRequest& request, const DescribeDBSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDescribeDBSubnetGroupsAsyncHelper( this, request, handler, context ); } );
}

DescribeEngineDefaultClusterParametersOutcome NeptuneClient::DescribeEngineDefaultClusterParameters(const DescribeEngineDefaultClusterParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEngineDefaultClusterParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEngineDefaultClusterParametersOutcomeCallable NeptuneClient::DescribeEngineDefaultClusterParametersCallable(const DescribeEngineDefaultClusterParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEngineDefaultClusterParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEngineDefaultClusterParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDescribeEngineDefaultClusterParametersAsyncHelper(NeptuneClient const * const clientThis, const DescribeEngineDefaultClusterParametersRequest& request, const DescribeEngineDefaultClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEngineDefaultClusterParameters(request), context);
}

void NeptuneClient::DescribeEngineDefaultClusterParametersAsync(const DescribeEngineDefaultClusterParametersRequest& request, const DescribeEngineDefaultClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDescribeEngineDefaultClusterParametersAsyncHelper( this, request, handler, context ); } );
}

DescribeEngineDefaultParametersOutcome NeptuneClient::DescribeEngineDefaultParameters(const DescribeEngineDefaultParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEngineDefaultParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEngineDefaultParametersOutcomeCallable NeptuneClient::DescribeEngineDefaultParametersCallable(const DescribeEngineDefaultParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEngineDefaultParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEngineDefaultParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDescribeEngineDefaultParametersAsyncHelper(NeptuneClient const * const clientThis, const DescribeEngineDefaultParametersRequest& request, const DescribeEngineDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEngineDefaultParameters(request), context);
}

void NeptuneClient::DescribeEngineDefaultParametersAsync(const DescribeEngineDefaultParametersRequest& request, const DescribeEngineDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDescribeEngineDefaultParametersAsyncHelper( this, request, handler, context ); } );
}

DescribeEventCategoriesOutcome NeptuneClient::DescribeEventCategories(const DescribeEventCategoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEventCategoriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEventCategoriesOutcomeCallable NeptuneClient::DescribeEventCategoriesCallable(const DescribeEventCategoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventCategoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventCategories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDescribeEventCategoriesAsyncHelper(NeptuneClient const * const clientThis, const DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEventCategories(request), context);
}

void NeptuneClient::DescribeEventCategoriesAsync(const DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDescribeEventCategoriesAsyncHelper( this, request, handler, context ); } );
}

DescribeEventSubscriptionsOutcome NeptuneClient::DescribeEventSubscriptions(const DescribeEventSubscriptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEventSubscriptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEventSubscriptionsOutcomeCallable NeptuneClient::DescribeEventSubscriptionsCallable(const DescribeEventSubscriptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventSubscriptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventSubscriptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDescribeEventSubscriptionsAsyncHelper(NeptuneClient const * const clientThis, const DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEventSubscriptions(request), context);
}

void NeptuneClient::DescribeEventSubscriptionsAsync(const DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDescribeEventSubscriptionsAsyncHelper( this, request, handler, context ); } );
}

DescribeEventsOutcome NeptuneClient::DescribeEvents(const DescribeEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEventsOutcomeCallable NeptuneClient::DescribeEventsCallable(const DescribeEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDescribeEventsAsyncHelper(NeptuneClient const * const clientThis, const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEvents(request), context);
}

void NeptuneClient::DescribeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDescribeEventsAsyncHelper( this, request, handler, context ); } );
}

DescribeGlobalClustersOutcome NeptuneClient::DescribeGlobalClusters(const DescribeGlobalClustersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeGlobalClustersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeGlobalClustersOutcomeCallable NeptuneClient::DescribeGlobalClustersCallable(const DescribeGlobalClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGlobalClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGlobalClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDescribeGlobalClustersAsyncHelper(NeptuneClient const * const clientThis, const DescribeGlobalClustersRequest& request, const DescribeGlobalClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeGlobalClusters(request), context);
}

void NeptuneClient::DescribeGlobalClustersAsync(const DescribeGlobalClustersRequest& request, const DescribeGlobalClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDescribeGlobalClustersAsyncHelper( this, request, handler, context ); } );
}

DescribeOrderableDBInstanceOptionsOutcome NeptuneClient::DescribeOrderableDBInstanceOptions(const DescribeOrderableDBInstanceOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeOrderableDBInstanceOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeOrderableDBInstanceOptionsOutcomeCallable NeptuneClient::DescribeOrderableDBInstanceOptionsCallable(const DescribeOrderableDBInstanceOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrderableDBInstanceOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrderableDBInstanceOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDescribeOrderableDBInstanceOptionsAsyncHelper(NeptuneClient const * const clientThis, const DescribeOrderableDBInstanceOptionsRequest& request, const DescribeOrderableDBInstanceOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeOrderableDBInstanceOptions(request), context);
}

void NeptuneClient::DescribeOrderableDBInstanceOptionsAsync(const DescribeOrderableDBInstanceOptionsRequest& request, const DescribeOrderableDBInstanceOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDescribeOrderableDBInstanceOptionsAsyncHelper( this, request, handler, context ); } );
}

DescribePendingMaintenanceActionsOutcome NeptuneClient::DescribePendingMaintenanceActions(const DescribePendingMaintenanceActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePendingMaintenanceActionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribePendingMaintenanceActionsOutcomeCallable NeptuneClient::DescribePendingMaintenanceActionsCallable(const DescribePendingMaintenanceActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePendingMaintenanceActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePendingMaintenanceActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDescribePendingMaintenanceActionsAsyncHelper(NeptuneClient const * const clientThis, const DescribePendingMaintenanceActionsRequest& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePendingMaintenanceActions(request), context);
}

void NeptuneClient::DescribePendingMaintenanceActionsAsync(const DescribePendingMaintenanceActionsRequest& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDescribePendingMaintenanceActionsAsyncHelper( this, request, handler, context ); } );
}

DescribeValidDBInstanceModificationsOutcome NeptuneClient::DescribeValidDBInstanceModifications(const DescribeValidDBInstanceModificationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeValidDBInstanceModificationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeValidDBInstanceModificationsOutcomeCallable NeptuneClient::DescribeValidDBInstanceModificationsCallable(const DescribeValidDBInstanceModificationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeValidDBInstanceModificationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeValidDBInstanceModifications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientDescribeValidDBInstanceModificationsAsyncHelper(NeptuneClient const * const clientThis, const DescribeValidDBInstanceModificationsRequest& request, const DescribeValidDBInstanceModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeValidDBInstanceModifications(request), context);
}

void NeptuneClient::DescribeValidDBInstanceModificationsAsync(const DescribeValidDBInstanceModificationsRequest& request, const DescribeValidDBInstanceModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientDescribeValidDBInstanceModificationsAsyncHelper( this, request, handler, context ); } );
}

FailoverDBClusterOutcome NeptuneClient::FailoverDBCluster(const FailoverDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return FailoverDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

FailoverDBClusterOutcomeCallable NeptuneClient::FailoverDBClusterCallable(const FailoverDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< FailoverDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->FailoverDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientFailoverDBClusterAsyncHelper(NeptuneClient const * const clientThis, const FailoverDBClusterRequest& request, const FailoverDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->FailoverDBCluster(request), context);
}

void NeptuneClient::FailoverDBClusterAsync(const FailoverDBClusterRequest& request, const FailoverDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientFailoverDBClusterAsyncHelper( this, request, handler, context ); } );
}

FailoverGlobalClusterOutcome NeptuneClient::FailoverGlobalCluster(const FailoverGlobalClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return FailoverGlobalClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

FailoverGlobalClusterOutcomeCallable NeptuneClient::FailoverGlobalClusterCallable(const FailoverGlobalClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< FailoverGlobalClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->FailoverGlobalCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientFailoverGlobalClusterAsyncHelper(NeptuneClient const * const clientThis, const FailoverGlobalClusterRequest& request, const FailoverGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->FailoverGlobalCluster(request), context);
}

void NeptuneClient::FailoverGlobalClusterAsync(const FailoverGlobalClusterRequest& request, const FailoverGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientFailoverGlobalClusterAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome NeptuneClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListTagsForResourceOutcomeCallable NeptuneClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientListTagsForResourceAsyncHelper(NeptuneClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void NeptuneClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ModifyDBClusterOutcome NeptuneClient::ModifyDBCluster(const ModifyDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBClusterOutcomeCallable NeptuneClient::ModifyDBClusterCallable(const ModifyDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientModifyDBClusterAsyncHelper(NeptuneClient const * const clientThis, const ModifyDBClusterRequest& request, const ModifyDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyDBCluster(request), context);
}

void NeptuneClient::ModifyDBClusterAsync(const ModifyDBClusterRequest& request, const ModifyDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientModifyDBClusterAsyncHelper( this, request, handler, context ); } );
}

ModifyDBClusterEndpointOutcome NeptuneClient::ModifyDBClusterEndpoint(const ModifyDBClusterEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyDBClusterEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBClusterEndpointOutcomeCallable NeptuneClient::ModifyDBClusterEndpointCallable(const ModifyDBClusterEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBClusterEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBClusterEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientModifyDBClusterEndpointAsyncHelper(NeptuneClient const * const clientThis, const ModifyDBClusterEndpointRequest& request, const ModifyDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyDBClusterEndpoint(request), context);
}

void NeptuneClient::ModifyDBClusterEndpointAsync(const ModifyDBClusterEndpointRequest& request, const ModifyDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientModifyDBClusterEndpointAsyncHelper( this, request, handler, context ); } );
}

ModifyDBClusterParameterGroupOutcome NeptuneClient::ModifyDBClusterParameterGroup(const ModifyDBClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyDBClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBClusterParameterGroupOutcomeCallable NeptuneClient::ModifyDBClusterParameterGroupCallable(const ModifyDBClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientModifyDBClusterParameterGroupAsyncHelper(NeptuneClient const * const clientThis, const ModifyDBClusterParameterGroupRequest& request, const ModifyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyDBClusterParameterGroup(request), context);
}

void NeptuneClient::ModifyDBClusterParameterGroupAsync(const ModifyDBClusterParameterGroupRequest& request, const ModifyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientModifyDBClusterParameterGroupAsyncHelper( this, request, handler, context ); } );
}

ModifyDBClusterSnapshotAttributeOutcome NeptuneClient::ModifyDBClusterSnapshotAttribute(const ModifyDBClusterSnapshotAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyDBClusterSnapshotAttributeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBClusterSnapshotAttributeOutcomeCallable NeptuneClient::ModifyDBClusterSnapshotAttributeCallable(const ModifyDBClusterSnapshotAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBClusterSnapshotAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBClusterSnapshotAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientModifyDBClusterSnapshotAttributeAsyncHelper(NeptuneClient const * const clientThis, const ModifyDBClusterSnapshotAttributeRequest& request, const ModifyDBClusterSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyDBClusterSnapshotAttribute(request), context);
}

void NeptuneClient::ModifyDBClusterSnapshotAttributeAsync(const ModifyDBClusterSnapshotAttributeRequest& request, const ModifyDBClusterSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientModifyDBClusterSnapshotAttributeAsyncHelper( this, request, handler, context ); } );
}

ModifyDBInstanceOutcome NeptuneClient::ModifyDBInstance(const ModifyDBInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyDBInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBInstanceOutcomeCallable NeptuneClient::ModifyDBInstanceCallable(const ModifyDBInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientModifyDBInstanceAsyncHelper(NeptuneClient const * const clientThis, const ModifyDBInstanceRequest& request, const ModifyDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyDBInstance(request), context);
}

void NeptuneClient::ModifyDBInstanceAsync(const ModifyDBInstanceRequest& request, const ModifyDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientModifyDBInstanceAsyncHelper( this, request, handler, context ); } );
}

ModifyDBParameterGroupOutcome NeptuneClient::ModifyDBParameterGroup(const ModifyDBParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyDBParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBParameterGroupOutcomeCallable NeptuneClient::ModifyDBParameterGroupCallable(const ModifyDBParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientModifyDBParameterGroupAsyncHelper(NeptuneClient const * const clientThis, const ModifyDBParameterGroupRequest& request, const ModifyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyDBParameterGroup(request), context);
}

void NeptuneClient::ModifyDBParameterGroupAsync(const ModifyDBParameterGroupRequest& request, const ModifyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientModifyDBParameterGroupAsyncHelper( this, request, handler, context ); } );
}

ModifyDBSubnetGroupOutcome NeptuneClient::ModifyDBSubnetGroup(const ModifyDBSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyDBSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBSubnetGroupOutcomeCallable NeptuneClient::ModifyDBSubnetGroupCallable(const ModifyDBSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientModifyDBSubnetGroupAsyncHelper(NeptuneClient const * const clientThis, const ModifyDBSubnetGroupRequest& request, const ModifyDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyDBSubnetGroup(request), context);
}

void NeptuneClient::ModifyDBSubnetGroupAsync(const ModifyDBSubnetGroupRequest& request, const ModifyDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientModifyDBSubnetGroupAsyncHelper( this, request, handler, context ); } );
}

ModifyEventSubscriptionOutcome NeptuneClient::ModifyEventSubscription(const ModifyEventSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyEventSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyEventSubscriptionOutcomeCallable NeptuneClient::ModifyEventSubscriptionCallable(const ModifyEventSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyEventSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyEventSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientModifyEventSubscriptionAsyncHelper(NeptuneClient const * const clientThis, const ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyEventSubscription(request), context);
}

void NeptuneClient::ModifyEventSubscriptionAsync(const ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientModifyEventSubscriptionAsyncHelper( this, request, handler, context ); } );
}

ModifyGlobalClusterOutcome NeptuneClient::ModifyGlobalCluster(const ModifyGlobalClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyGlobalClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyGlobalClusterOutcomeCallable NeptuneClient::ModifyGlobalClusterCallable(const ModifyGlobalClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyGlobalClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyGlobalCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientModifyGlobalClusterAsyncHelper(NeptuneClient const * const clientThis, const ModifyGlobalClusterRequest& request, const ModifyGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyGlobalCluster(request), context);
}

void NeptuneClient::ModifyGlobalClusterAsync(const ModifyGlobalClusterRequest& request, const ModifyGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientModifyGlobalClusterAsyncHelper( this, request, handler, context ); } );
}

PromoteReadReplicaDBClusterOutcome NeptuneClient::PromoteReadReplicaDBCluster(const PromoteReadReplicaDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PromoteReadReplicaDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PromoteReadReplicaDBClusterOutcomeCallable NeptuneClient::PromoteReadReplicaDBClusterCallable(const PromoteReadReplicaDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PromoteReadReplicaDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PromoteReadReplicaDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientPromoteReadReplicaDBClusterAsyncHelper(NeptuneClient const * const clientThis, const PromoteReadReplicaDBClusterRequest& request, const PromoteReadReplicaDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PromoteReadReplicaDBCluster(request), context);
}

void NeptuneClient::PromoteReadReplicaDBClusterAsync(const PromoteReadReplicaDBClusterRequest& request, const PromoteReadReplicaDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientPromoteReadReplicaDBClusterAsyncHelper( this, request, handler, context ); } );
}

RebootDBInstanceOutcome NeptuneClient::RebootDBInstance(const RebootDBInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RebootDBInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RebootDBInstanceOutcomeCallable NeptuneClient::RebootDBInstanceCallable(const RebootDBInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebootDBInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebootDBInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientRebootDBInstanceAsyncHelper(NeptuneClient const * const clientThis, const RebootDBInstanceRequest& request, const RebootDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RebootDBInstance(request), context);
}

void NeptuneClient::RebootDBInstanceAsync(const RebootDBInstanceRequest& request, const RebootDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientRebootDBInstanceAsyncHelper( this, request, handler, context ); } );
}

RemoveFromGlobalClusterOutcome NeptuneClient::RemoveFromGlobalCluster(const RemoveFromGlobalClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveFromGlobalClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RemoveFromGlobalClusterOutcomeCallable NeptuneClient::RemoveFromGlobalClusterCallable(const RemoveFromGlobalClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveFromGlobalClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveFromGlobalCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientRemoveFromGlobalClusterAsyncHelper(NeptuneClient const * const clientThis, const RemoveFromGlobalClusterRequest& request, const RemoveFromGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveFromGlobalCluster(request), context);
}

void NeptuneClient::RemoveFromGlobalClusterAsync(const RemoveFromGlobalClusterRequest& request, const RemoveFromGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientRemoveFromGlobalClusterAsyncHelper( this, request, handler, context ); } );
}

RemoveRoleFromDBClusterOutcome NeptuneClient::RemoveRoleFromDBCluster(const RemoveRoleFromDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveRoleFromDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RemoveRoleFromDBClusterOutcomeCallable NeptuneClient::RemoveRoleFromDBClusterCallable(const RemoveRoleFromDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveRoleFromDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveRoleFromDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientRemoveRoleFromDBClusterAsyncHelper(NeptuneClient const * const clientThis, const RemoveRoleFromDBClusterRequest& request, const RemoveRoleFromDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveRoleFromDBCluster(request), context);
}

void NeptuneClient::RemoveRoleFromDBClusterAsync(const RemoveRoleFromDBClusterRequest& request, const RemoveRoleFromDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientRemoveRoleFromDBClusterAsyncHelper( this, request, handler, context ); } );
}

RemoveSourceIdentifierFromSubscriptionOutcome NeptuneClient::RemoveSourceIdentifierFromSubscription(const RemoveSourceIdentifierFromSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveSourceIdentifierFromSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RemoveSourceIdentifierFromSubscriptionOutcomeCallable NeptuneClient::RemoveSourceIdentifierFromSubscriptionCallable(const RemoveSourceIdentifierFromSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveSourceIdentifierFromSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveSourceIdentifierFromSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientRemoveSourceIdentifierFromSubscriptionAsyncHelper(NeptuneClient const * const clientThis, const RemoveSourceIdentifierFromSubscriptionRequest& request, const RemoveSourceIdentifierFromSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveSourceIdentifierFromSubscription(request), context);
}

void NeptuneClient::RemoveSourceIdentifierFromSubscriptionAsync(const RemoveSourceIdentifierFromSubscriptionRequest& request, const RemoveSourceIdentifierFromSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientRemoveSourceIdentifierFromSubscriptionAsyncHelper( this, request, handler, context ); } );
}

RemoveTagsFromResourceOutcome NeptuneClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveTagsFromResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RemoveTagsFromResourceOutcomeCallable NeptuneClient::RemoveTagsFromResourceCallable(const RemoveTagsFromResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsFromResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTagsFromResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientRemoveTagsFromResourceAsyncHelper(NeptuneClient const * const clientThis, const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveTagsFromResource(request), context);
}

void NeptuneClient::RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientRemoveTagsFromResourceAsyncHelper( this, request, handler, context ); } );
}

ResetDBClusterParameterGroupOutcome NeptuneClient::ResetDBClusterParameterGroup(const ResetDBClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ResetDBClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ResetDBClusterParameterGroupOutcomeCallable NeptuneClient::ResetDBClusterParameterGroupCallable(const ResetDBClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetDBClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetDBClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientResetDBClusterParameterGroupAsyncHelper(NeptuneClient const * const clientThis, const ResetDBClusterParameterGroupRequest& request, const ResetDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ResetDBClusterParameterGroup(request), context);
}

void NeptuneClient::ResetDBClusterParameterGroupAsync(const ResetDBClusterParameterGroupRequest& request, const ResetDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientResetDBClusterParameterGroupAsyncHelper( this, request, handler, context ); } );
}

ResetDBParameterGroupOutcome NeptuneClient::ResetDBParameterGroup(const ResetDBParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ResetDBParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ResetDBParameterGroupOutcomeCallable NeptuneClient::ResetDBParameterGroupCallable(const ResetDBParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetDBParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetDBParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientResetDBParameterGroupAsyncHelper(NeptuneClient const * const clientThis, const ResetDBParameterGroupRequest& request, const ResetDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ResetDBParameterGroup(request), context);
}

void NeptuneClient::ResetDBParameterGroupAsync(const ResetDBParameterGroupRequest& request, const ResetDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientResetDBParameterGroupAsyncHelper( this, request, handler, context ); } );
}

RestoreDBClusterFromSnapshotOutcome NeptuneClient::RestoreDBClusterFromSnapshot(const RestoreDBClusterFromSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RestoreDBClusterFromSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RestoreDBClusterFromSnapshotOutcomeCallable NeptuneClient::RestoreDBClusterFromSnapshotCallable(const RestoreDBClusterFromSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreDBClusterFromSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreDBClusterFromSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientRestoreDBClusterFromSnapshotAsyncHelper(NeptuneClient const * const clientThis, const RestoreDBClusterFromSnapshotRequest& request, const RestoreDBClusterFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RestoreDBClusterFromSnapshot(request), context);
}

void NeptuneClient::RestoreDBClusterFromSnapshotAsync(const RestoreDBClusterFromSnapshotRequest& request, const RestoreDBClusterFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientRestoreDBClusterFromSnapshotAsyncHelper( this, request, handler, context ); } );
}

RestoreDBClusterToPointInTimeOutcome NeptuneClient::RestoreDBClusterToPointInTime(const RestoreDBClusterToPointInTimeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RestoreDBClusterToPointInTimeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RestoreDBClusterToPointInTimeOutcomeCallable NeptuneClient::RestoreDBClusterToPointInTimeCallable(const RestoreDBClusterToPointInTimeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreDBClusterToPointInTimeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreDBClusterToPointInTime(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientRestoreDBClusterToPointInTimeAsyncHelper(NeptuneClient const * const clientThis, const RestoreDBClusterToPointInTimeRequest& request, const RestoreDBClusterToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RestoreDBClusterToPointInTime(request), context);
}

void NeptuneClient::RestoreDBClusterToPointInTimeAsync(const RestoreDBClusterToPointInTimeRequest& request, const RestoreDBClusterToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientRestoreDBClusterToPointInTimeAsyncHelper( this, request, handler, context ); } );
}

StartDBClusterOutcome NeptuneClient::StartDBCluster(const StartDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

StartDBClusterOutcomeCallable NeptuneClient::StartDBClusterCallable(const StartDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientStartDBClusterAsyncHelper(NeptuneClient const * const clientThis, const StartDBClusterRequest& request, const StartDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartDBCluster(request), context);
}

void NeptuneClient::StartDBClusterAsync(const StartDBClusterRequest& request, const StartDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientStartDBClusterAsyncHelper( this, request, handler, context ); } );
}

StopDBClusterOutcome NeptuneClient::StopDBCluster(const StopDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

StopDBClusterOutcomeCallable NeptuneClient::StopDBClusterCallable(const StopDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NeptuneClientStopDBClusterAsyncHelper(NeptuneClient const * const clientThis, const StopDBClusterRequest& request, const StopDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopDBCluster(request), context);
}

void NeptuneClient::StopDBClusterAsync(const StopDBClusterRequest& request, const StopDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NeptuneClientStopDBClusterAsyncHelper( this, request, handler, context ); } );
}

