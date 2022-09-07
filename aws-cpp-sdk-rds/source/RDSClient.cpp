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

#include <aws/rds/RDSClient.h>
#include <aws/rds/RDSEndpoint.h>
#include <aws/rds/RDSErrorMarshaller.h>
#include <aws/rds/model/AddRoleToDBClusterRequest.h>
#include <aws/rds/model/AddRoleToDBInstanceRequest.h>
#include <aws/rds/model/AddSourceIdentifierToSubscriptionRequest.h>
#include <aws/rds/model/AddTagsToResourceRequest.h>
#include <aws/rds/model/ApplyPendingMaintenanceActionRequest.h>
#include <aws/rds/model/AuthorizeDBSecurityGroupIngressRequest.h>
#include <aws/rds/model/BacktrackDBClusterRequest.h>
#include <aws/rds/model/CancelExportTaskRequest.h>
#include <aws/rds/model/CopyDBClusterParameterGroupRequest.h>
#include <aws/rds/model/CopyDBClusterSnapshotRequest.h>
#include <aws/rds/model/CopyDBParameterGroupRequest.h>
#include <aws/rds/model/CopyDBSnapshotRequest.h>
#include <aws/rds/model/CopyOptionGroupRequest.h>
#include <aws/rds/model/CreateCustomDBEngineVersionRequest.h>
#include <aws/rds/model/CreateDBClusterRequest.h>
#include <aws/rds/model/CreateDBClusterEndpointRequest.h>
#include <aws/rds/model/CreateDBClusterParameterGroupRequest.h>
#include <aws/rds/model/CreateDBClusterSnapshotRequest.h>
#include <aws/rds/model/CreateDBInstanceRequest.h>
#include <aws/rds/model/CreateDBInstanceReadReplicaRequest.h>
#include <aws/rds/model/CreateDBParameterGroupRequest.h>
#include <aws/rds/model/CreateDBProxyRequest.h>
#include <aws/rds/model/CreateDBProxyEndpointRequest.h>
#include <aws/rds/model/CreateDBSecurityGroupRequest.h>
#include <aws/rds/model/CreateDBSnapshotRequest.h>
#include <aws/rds/model/CreateDBSubnetGroupRequest.h>
#include <aws/rds/model/CreateEventSubscriptionRequest.h>
#include <aws/rds/model/CreateGlobalClusterRequest.h>
#include <aws/rds/model/CreateOptionGroupRequest.h>
#include <aws/rds/model/DeleteCustomDBEngineVersionRequest.h>
#include <aws/rds/model/DeleteDBClusterRequest.h>
#include <aws/rds/model/DeleteDBClusterEndpointRequest.h>
#include <aws/rds/model/DeleteDBClusterParameterGroupRequest.h>
#include <aws/rds/model/DeleteDBClusterSnapshotRequest.h>
#include <aws/rds/model/DeleteDBInstanceRequest.h>
#include <aws/rds/model/DeleteDBInstanceAutomatedBackupRequest.h>
#include <aws/rds/model/DeleteDBParameterGroupRequest.h>
#include <aws/rds/model/DeleteDBProxyRequest.h>
#include <aws/rds/model/DeleteDBProxyEndpointRequest.h>
#include <aws/rds/model/DeleteDBSecurityGroupRequest.h>
#include <aws/rds/model/DeleteDBSnapshotRequest.h>
#include <aws/rds/model/DeleteDBSubnetGroupRequest.h>
#include <aws/rds/model/DeleteEventSubscriptionRequest.h>
#include <aws/rds/model/DeleteGlobalClusterRequest.h>
#include <aws/rds/model/DeleteOptionGroupRequest.h>
#include <aws/rds/model/DeregisterDBProxyTargetsRequest.h>
#include <aws/rds/model/DescribeAccountAttributesRequest.h>
#include <aws/rds/model/DescribeCertificatesRequest.h>
#include <aws/rds/model/DescribeDBClusterBacktracksRequest.h>
#include <aws/rds/model/DescribeDBClusterEndpointsRequest.h>
#include <aws/rds/model/DescribeDBClusterParameterGroupsRequest.h>
#include <aws/rds/model/DescribeDBClusterParametersRequest.h>
#include <aws/rds/model/DescribeDBClusterSnapshotAttributesRequest.h>
#include <aws/rds/model/DescribeDBClusterSnapshotsRequest.h>
#include <aws/rds/model/DescribeDBClustersRequest.h>
#include <aws/rds/model/DescribeDBEngineVersionsRequest.h>
#include <aws/rds/model/DescribeDBInstanceAutomatedBackupsRequest.h>
#include <aws/rds/model/DescribeDBInstancesRequest.h>
#include <aws/rds/model/DescribeDBLogFilesRequest.h>
#include <aws/rds/model/DescribeDBParameterGroupsRequest.h>
#include <aws/rds/model/DescribeDBParametersRequest.h>
#include <aws/rds/model/DescribeDBProxiesRequest.h>
#include <aws/rds/model/DescribeDBProxyEndpointsRequest.h>
#include <aws/rds/model/DescribeDBProxyTargetGroupsRequest.h>
#include <aws/rds/model/DescribeDBProxyTargetsRequest.h>
#include <aws/rds/model/DescribeDBSecurityGroupsRequest.h>
#include <aws/rds/model/DescribeDBSnapshotAttributesRequest.h>
#include <aws/rds/model/DescribeDBSnapshotsRequest.h>
#include <aws/rds/model/DescribeDBSubnetGroupsRequest.h>
#include <aws/rds/model/DescribeEngineDefaultClusterParametersRequest.h>
#include <aws/rds/model/DescribeEngineDefaultParametersRequest.h>
#include <aws/rds/model/DescribeEventCategoriesRequest.h>
#include <aws/rds/model/DescribeEventSubscriptionsRequest.h>
#include <aws/rds/model/DescribeEventsRequest.h>
#include <aws/rds/model/DescribeExportTasksRequest.h>
#include <aws/rds/model/DescribeGlobalClustersRequest.h>
#include <aws/rds/model/DescribeOptionGroupOptionsRequest.h>
#include <aws/rds/model/DescribeOptionGroupsRequest.h>
#include <aws/rds/model/DescribeOrderableDBInstanceOptionsRequest.h>
#include <aws/rds/model/DescribePendingMaintenanceActionsRequest.h>
#include <aws/rds/model/DescribeReservedDBInstancesRequest.h>
#include <aws/rds/model/DescribeReservedDBInstancesOfferingsRequest.h>
#include <aws/rds/model/DescribeSourceRegionsRequest.h>
#include <aws/rds/model/DescribeValidDBInstanceModificationsRequest.h>
#include <aws/rds/model/DownloadDBLogFilePortionRequest.h>
#include <aws/rds/model/FailoverDBClusterRequest.h>
#include <aws/rds/model/FailoverGlobalClusterRequest.h>
#include <aws/rds/model/ListTagsForResourceRequest.h>
#include <aws/rds/model/ModifyActivityStreamRequest.h>
#include <aws/rds/model/ModifyCertificatesRequest.h>
#include <aws/rds/model/ModifyCurrentDBClusterCapacityRequest.h>
#include <aws/rds/model/ModifyCustomDBEngineVersionRequest.h>
#include <aws/rds/model/ModifyDBClusterRequest.h>
#include <aws/rds/model/ModifyDBClusterEndpointRequest.h>
#include <aws/rds/model/ModifyDBClusterParameterGroupRequest.h>
#include <aws/rds/model/ModifyDBClusterSnapshotAttributeRequest.h>
#include <aws/rds/model/ModifyDBInstanceRequest.h>
#include <aws/rds/model/ModifyDBParameterGroupRequest.h>
#include <aws/rds/model/ModifyDBProxyRequest.h>
#include <aws/rds/model/ModifyDBProxyEndpointRequest.h>
#include <aws/rds/model/ModifyDBProxyTargetGroupRequest.h>
#include <aws/rds/model/ModifyDBSnapshotRequest.h>
#include <aws/rds/model/ModifyDBSnapshotAttributeRequest.h>
#include <aws/rds/model/ModifyDBSubnetGroupRequest.h>
#include <aws/rds/model/ModifyEventSubscriptionRequest.h>
#include <aws/rds/model/ModifyGlobalClusterRequest.h>
#include <aws/rds/model/ModifyOptionGroupRequest.h>
#include <aws/rds/model/PromoteReadReplicaRequest.h>
#include <aws/rds/model/PromoteReadReplicaDBClusterRequest.h>
#include <aws/rds/model/PurchaseReservedDBInstancesOfferingRequest.h>
#include <aws/rds/model/RebootDBClusterRequest.h>
#include <aws/rds/model/RebootDBInstanceRequest.h>
#include <aws/rds/model/RegisterDBProxyTargetsRequest.h>
#include <aws/rds/model/RemoveFromGlobalClusterRequest.h>
#include <aws/rds/model/RemoveRoleFromDBClusterRequest.h>
#include <aws/rds/model/RemoveRoleFromDBInstanceRequest.h>
#include <aws/rds/model/RemoveSourceIdentifierFromSubscriptionRequest.h>
#include <aws/rds/model/RemoveTagsFromResourceRequest.h>
#include <aws/rds/model/ResetDBClusterParameterGroupRequest.h>
#include <aws/rds/model/ResetDBParameterGroupRequest.h>
#include <aws/rds/model/RestoreDBClusterFromS3Request.h>
#include <aws/rds/model/RestoreDBClusterFromSnapshotRequest.h>
#include <aws/rds/model/RestoreDBClusterToPointInTimeRequest.h>
#include <aws/rds/model/RestoreDBInstanceFromDBSnapshotRequest.h>
#include <aws/rds/model/RestoreDBInstanceFromS3Request.h>
#include <aws/rds/model/RestoreDBInstanceToPointInTimeRequest.h>
#include <aws/rds/model/RevokeDBSecurityGroupIngressRequest.h>
#include <aws/rds/model/StartActivityStreamRequest.h>
#include <aws/rds/model/StartDBClusterRequest.h>
#include <aws/rds/model/StartDBInstanceRequest.h>
#include <aws/rds/model/StartDBInstanceAutomatedBackupsReplicationRequest.h>
#include <aws/rds/model/StartExportTaskRequest.h>
#include <aws/rds/model/StopActivityStreamRequest.h>
#include <aws/rds/model/StopDBClusterRequest.h>
#include <aws/rds/model/StopDBInstanceRequest.h>
#include <aws/rds/model/StopDBInstanceAutomatedBackupsReplicationRequest.h>
#include <aws/rds/model/SwitchoverReadReplicaRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::RDS;
using namespace Aws::RDS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


static const char* SERVICE_NAME = "rds";
static const char* ALLOCATION_TAG = "RDSClient";

RDSClient::RDSClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RDSErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RDSClient::RDSClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RDSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RDSClient::RDSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RDSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RDSClient::~RDSClient()
{
}

void RDSClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("RDS");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  m_useDualStack = config.useDualStack;
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + RDSEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void RDSClient::OverrideEndpoint(const Aws::String& endpoint)
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

Aws::String RDSClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const
{
  Aws::StringStream ss;
  ss << "https://" << RDSEndpoint::ForRegion(region);
  ss << "?" << requestToConvert.SerializePayload();

  URI uri(ss.str());
  return GeneratePresignedUrl(uri, Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

AddRoleToDBClusterOutcome RDSClient::AddRoleToDBCluster(const AddRoleToDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddRoleToDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AddRoleToDBClusterOutcomeCallable RDSClient::AddRoleToDBClusterCallable(const AddRoleToDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddRoleToDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddRoleToDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientAddRoleToDBClusterAsyncHelper(RDSClient const * const clientThis, const AddRoleToDBClusterRequest& request, const AddRoleToDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddRoleToDBCluster(request), context);
}

void RDSClient::AddRoleToDBClusterAsync(const AddRoleToDBClusterRequest& request, const AddRoleToDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientAddRoleToDBClusterAsyncHelper( this, request, handler, context ); } );
}

AddRoleToDBInstanceOutcome RDSClient::AddRoleToDBInstance(const AddRoleToDBInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddRoleToDBInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AddRoleToDBInstanceOutcomeCallable RDSClient::AddRoleToDBInstanceCallable(const AddRoleToDBInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddRoleToDBInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddRoleToDBInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientAddRoleToDBInstanceAsyncHelper(RDSClient const * const clientThis, const AddRoleToDBInstanceRequest& request, const AddRoleToDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddRoleToDBInstance(request), context);
}

void RDSClient::AddRoleToDBInstanceAsync(const AddRoleToDBInstanceRequest& request, const AddRoleToDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientAddRoleToDBInstanceAsyncHelper( this, request, handler, context ); } );
}

AddSourceIdentifierToSubscriptionOutcome RDSClient::AddSourceIdentifierToSubscription(const AddSourceIdentifierToSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddSourceIdentifierToSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AddSourceIdentifierToSubscriptionOutcomeCallable RDSClient::AddSourceIdentifierToSubscriptionCallable(const AddSourceIdentifierToSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddSourceIdentifierToSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddSourceIdentifierToSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientAddSourceIdentifierToSubscriptionAsyncHelper(RDSClient const * const clientThis, const AddSourceIdentifierToSubscriptionRequest& request, const AddSourceIdentifierToSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddSourceIdentifierToSubscription(request), context);
}

void RDSClient::AddSourceIdentifierToSubscriptionAsync(const AddSourceIdentifierToSubscriptionRequest& request, const AddSourceIdentifierToSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientAddSourceIdentifierToSubscriptionAsyncHelper( this, request, handler, context ); } );
}

AddTagsToResourceOutcome RDSClient::AddTagsToResource(const AddTagsToResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddTagsToResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AddTagsToResourceOutcomeCallable RDSClient::AddTagsToResourceCallable(const AddTagsToResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsToResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTagsToResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientAddTagsToResourceAsyncHelper(RDSClient const * const clientThis, const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddTagsToResource(request), context);
}

void RDSClient::AddTagsToResourceAsync(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientAddTagsToResourceAsyncHelper( this, request, handler, context ); } );
}

ApplyPendingMaintenanceActionOutcome RDSClient::ApplyPendingMaintenanceAction(const ApplyPendingMaintenanceActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ApplyPendingMaintenanceActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ApplyPendingMaintenanceActionOutcomeCallable RDSClient::ApplyPendingMaintenanceActionCallable(const ApplyPendingMaintenanceActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ApplyPendingMaintenanceActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ApplyPendingMaintenanceAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientApplyPendingMaintenanceActionAsyncHelper(RDSClient const * const clientThis, const ApplyPendingMaintenanceActionRequest& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ApplyPendingMaintenanceAction(request), context);
}

void RDSClient::ApplyPendingMaintenanceActionAsync(const ApplyPendingMaintenanceActionRequest& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientApplyPendingMaintenanceActionAsyncHelper( this, request, handler, context ); } );
}

AuthorizeDBSecurityGroupIngressOutcome RDSClient::AuthorizeDBSecurityGroupIngress(const AuthorizeDBSecurityGroupIngressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AuthorizeDBSecurityGroupIngressOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AuthorizeDBSecurityGroupIngressOutcomeCallable RDSClient::AuthorizeDBSecurityGroupIngressCallable(const AuthorizeDBSecurityGroupIngressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AuthorizeDBSecurityGroupIngressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AuthorizeDBSecurityGroupIngress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientAuthorizeDBSecurityGroupIngressAsyncHelper(RDSClient const * const clientThis, const AuthorizeDBSecurityGroupIngressRequest& request, const AuthorizeDBSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AuthorizeDBSecurityGroupIngress(request), context);
}

void RDSClient::AuthorizeDBSecurityGroupIngressAsync(const AuthorizeDBSecurityGroupIngressRequest& request, const AuthorizeDBSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientAuthorizeDBSecurityGroupIngressAsyncHelper( this, request, handler, context ); } );
}

BacktrackDBClusterOutcome RDSClient::BacktrackDBCluster(const BacktrackDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BacktrackDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

BacktrackDBClusterOutcomeCallable RDSClient::BacktrackDBClusterCallable(const BacktrackDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BacktrackDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BacktrackDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientBacktrackDBClusterAsyncHelper(RDSClient const * const clientThis, const BacktrackDBClusterRequest& request, const BacktrackDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BacktrackDBCluster(request), context);
}

void RDSClient::BacktrackDBClusterAsync(const BacktrackDBClusterRequest& request, const BacktrackDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientBacktrackDBClusterAsyncHelper( this, request, handler, context ); } );
}

CancelExportTaskOutcome RDSClient::CancelExportTask(const CancelExportTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelExportTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CancelExportTaskOutcomeCallable RDSClient::CancelExportTaskCallable(const CancelExportTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelExportTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelExportTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientCancelExportTaskAsyncHelper(RDSClient const * const clientThis, const CancelExportTaskRequest& request, const CancelExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelExportTask(request), context);
}

void RDSClient::CancelExportTaskAsync(const CancelExportTaskRequest& request, const CancelExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientCancelExportTaskAsyncHelper( this, request, handler, context ); } );
}

CopyDBClusterParameterGroupOutcome RDSClient::CopyDBClusterParameterGroup(const CopyDBClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CopyDBClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CopyDBClusterParameterGroupOutcomeCallable RDSClient::CopyDBClusterParameterGroupCallable(const CopyDBClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyDBClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyDBClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientCopyDBClusterParameterGroupAsyncHelper(RDSClient const * const clientThis, const CopyDBClusterParameterGroupRequest& request, const CopyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CopyDBClusterParameterGroup(request), context);
}

void RDSClient::CopyDBClusterParameterGroupAsync(const CopyDBClusterParameterGroupRequest& request, const CopyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientCopyDBClusterParameterGroupAsyncHelper( this, request, handler, context ); } );
}

CopyDBClusterSnapshotOutcome RDSClient::CopyDBClusterSnapshot(const CopyDBClusterSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  CopyDBClusterSnapshotRequest newRequest = request;
  if (request.SourceRegionHasBeenSet() && !request.PreSignedUrlHasBeenSet())
  {
    Aws::Http::URI sourceUri(m_configScheme + "://" + RDSEndpoint::ForRegion(request.GetSourceRegion(), m_useDualStack));
    newRequest.SetPreSignedUrl(GeneratePresignedUrl(request, sourceUri, Aws::Http::HttpMethod::HTTP_GET, request.GetSourceRegion().c_str(), {{ "DestinationRegion", m_region }}, 3600));
  }
  return CopyDBClusterSnapshotOutcome(MakeRequest(uri, newRequest, Aws::Http::HttpMethod::HTTP_POST));
}

CopyDBClusterSnapshotOutcomeCallable RDSClient::CopyDBClusterSnapshotCallable(const CopyDBClusterSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyDBClusterSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyDBClusterSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientCopyDBClusterSnapshotAsyncHelper(RDSClient const * const clientThis, const CopyDBClusterSnapshotRequest& request, const CopyDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CopyDBClusterSnapshot(request), context);
}

void RDSClient::CopyDBClusterSnapshotAsync(const CopyDBClusterSnapshotRequest& request, const CopyDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientCopyDBClusterSnapshotAsyncHelper( this, request, handler, context ); } );
}

CopyDBParameterGroupOutcome RDSClient::CopyDBParameterGroup(const CopyDBParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CopyDBParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CopyDBParameterGroupOutcomeCallable RDSClient::CopyDBParameterGroupCallable(const CopyDBParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyDBParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyDBParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientCopyDBParameterGroupAsyncHelper(RDSClient const * const clientThis, const CopyDBParameterGroupRequest& request, const CopyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CopyDBParameterGroup(request), context);
}

void RDSClient::CopyDBParameterGroupAsync(const CopyDBParameterGroupRequest& request, const CopyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientCopyDBParameterGroupAsyncHelper( this, request, handler, context ); } );
}

CopyDBSnapshotOutcome RDSClient::CopyDBSnapshot(const CopyDBSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  CopyDBSnapshotRequest newRequest = request;
  if (request.SourceRegionHasBeenSet() && !request.PreSignedUrlHasBeenSet())
  {
    Aws::Http::URI sourceUri(m_configScheme + "://" + RDSEndpoint::ForRegion(request.GetSourceRegion(), m_useDualStack));
    newRequest.SetPreSignedUrl(GeneratePresignedUrl(request, sourceUri, Aws::Http::HttpMethod::HTTP_GET, request.GetSourceRegion().c_str(), {{ "DestinationRegion", m_region }}, 3600));
  }
  return CopyDBSnapshotOutcome(MakeRequest(uri, newRequest, Aws::Http::HttpMethod::HTTP_POST));
}

CopyDBSnapshotOutcomeCallable RDSClient::CopyDBSnapshotCallable(const CopyDBSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyDBSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyDBSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientCopyDBSnapshotAsyncHelper(RDSClient const * const clientThis, const CopyDBSnapshotRequest& request, const CopyDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CopyDBSnapshot(request), context);
}

void RDSClient::CopyDBSnapshotAsync(const CopyDBSnapshotRequest& request, const CopyDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientCopyDBSnapshotAsyncHelper( this, request, handler, context ); } );
}

CopyOptionGroupOutcome RDSClient::CopyOptionGroup(const CopyOptionGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CopyOptionGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CopyOptionGroupOutcomeCallable RDSClient::CopyOptionGroupCallable(const CopyOptionGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyOptionGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyOptionGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientCopyOptionGroupAsyncHelper(RDSClient const * const clientThis, const CopyOptionGroupRequest& request, const CopyOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CopyOptionGroup(request), context);
}

void RDSClient::CopyOptionGroupAsync(const CopyOptionGroupRequest& request, const CopyOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientCopyOptionGroupAsyncHelper( this, request, handler, context ); } );
}

CreateCustomDBEngineVersionOutcome RDSClient::CreateCustomDBEngineVersion(const CreateCustomDBEngineVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateCustomDBEngineVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateCustomDBEngineVersionOutcomeCallable RDSClient::CreateCustomDBEngineVersionCallable(const CreateCustomDBEngineVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCustomDBEngineVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCustomDBEngineVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientCreateCustomDBEngineVersionAsyncHelper(RDSClient const * const clientThis, const CreateCustomDBEngineVersionRequest& request, const CreateCustomDBEngineVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCustomDBEngineVersion(request), context);
}

void RDSClient::CreateCustomDBEngineVersionAsync(const CreateCustomDBEngineVersionRequest& request, const CreateCustomDBEngineVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientCreateCustomDBEngineVersionAsyncHelper( this, request, handler, context ); } );
}

CreateDBClusterOutcome RDSClient::CreateDBCluster(const CreateDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  CreateDBClusterRequest newRequest = request;
  if (request.SourceRegionHasBeenSet() && !request.PreSignedUrlHasBeenSet())
  {
    Aws::Http::URI sourceUri(m_configScheme + "://" + RDSEndpoint::ForRegion(request.GetSourceRegion(), m_useDualStack));
    newRequest.SetPreSignedUrl(GeneratePresignedUrl(request, sourceUri, Aws::Http::HttpMethod::HTTP_GET, request.GetSourceRegion().c_str(), {{ "DestinationRegion", m_region }}, 3600));
  }
  return CreateDBClusterOutcome(MakeRequest(uri, newRequest, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBClusterOutcomeCallable RDSClient::CreateDBClusterCallable(const CreateDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientCreateDBClusterAsyncHelper(RDSClient const * const clientThis, const CreateDBClusterRequest& request, const CreateDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDBCluster(request), context);
}

void RDSClient::CreateDBClusterAsync(const CreateDBClusterRequest& request, const CreateDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientCreateDBClusterAsyncHelper( this, request, handler, context ); } );
}

CreateDBClusterEndpointOutcome RDSClient::CreateDBClusterEndpoint(const CreateDBClusterEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDBClusterEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBClusterEndpointOutcomeCallable RDSClient::CreateDBClusterEndpointCallable(const CreateDBClusterEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBClusterEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBClusterEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientCreateDBClusterEndpointAsyncHelper(RDSClient const * const clientThis, const CreateDBClusterEndpointRequest& request, const CreateDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDBClusterEndpoint(request), context);
}

void RDSClient::CreateDBClusterEndpointAsync(const CreateDBClusterEndpointRequest& request, const CreateDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientCreateDBClusterEndpointAsyncHelper( this, request, handler, context ); } );
}

CreateDBClusterParameterGroupOutcome RDSClient::CreateDBClusterParameterGroup(const CreateDBClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDBClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBClusterParameterGroupOutcomeCallable RDSClient::CreateDBClusterParameterGroupCallable(const CreateDBClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientCreateDBClusterParameterGroupAsyncHelper(RDSClient const * const clientThis, const CreateDBClusterParameterGroupRequest& request, const CreateDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDBClusterParameterGroup(request), context);
}

void RDSClient::CreateDBClusterParameterGroupAsync(const CreateDBClusterParameterGroupRequest& request, const CreateDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientCreateDBClusterParameterGroupAsyncHelper( this, request, handler, context ); } );
}

CreateDBClusterSnapshotOutcome RDSClient::CreateDBClusterSnapshot(const CreateDBClusterSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDBClusterSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBClusterSnapshotOutcomeCallable RDSClient::CreateDBClusterSnapshotCallable(const CreateDBClusterSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBClusterSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBClusterSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientCreateDBClusterSnapshotAsyncHelper(RDSClient const * const clientThis, const CreateDBClusterSnapshotRequest& request, const CreateDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDBClusterSnapshot(request), context);
}

void RDSClient::CreateDBClusterSnapshotAsync(const CreateDBClusterSnapshotRequest& request, const CreateDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientCreateDBClusterSnapshotAsyncHelper( this, request, handler, context ); } );
}

CreateDBInstanceOutcome RDSClient::CreateDBInstance(const CreateDBInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDBInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBInstanceOutcomeCallable RDSClient::CreateDBInstanceCallable(const CreateDBInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientCreateDBInstanceAsyncHelper(RDSClient const * const clientThis, const CreateDBInstanceRequest& request, const CreateDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDBInstance(request), context);
}

void RDSClient::CreateDBInstanceAsync(const CreateDBInstanceRequest& request, const CreateDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientCreateDBInstanceAsyncHelper( this, request, handler, context ); } );
}

CreateDBInstanceReadReplicaOutcome RDSClient::CreateDBInstanceReadReplica(const CreateDBInstanceReadReplicaRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  CreateDBInstanceReadReplicaRequest newRequest = request;
  if (request.SourceRegionHasBeenSet() && !request.PreSignedUrlHasBeenSet())
  {
    Aws::Http::URI sourceUri(m_configScheme + "://" + RDSEndpoint::ForRegion(request.GetSourceRegion(), m_useDualStack));
    newRequest.SetPreSignedUrl(GeneratePresignedUrl(request, sourceUri, Aws::Http::HttpMethod::HTTP_GET, request.GetSourceRegion().c_str(), {{ "DestinationRegion", m_region }}, 3600));
  }
  return CreateDBInstanceReadReplicaOutcome(MakeRequest(uri, newRequest, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBInstanceReadReplicaOutcomeCallable RDSClient::CreateDBInstanceReadReplicaCallable(const CreateDBInstanceReadReplicaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBInstanceReadReplicaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBInstanceReadReplica(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientCreateDBInstanceReadReplicaAsyncHelper(RDSClient const * const clientThis, const CreateDBInstanceReadReplicaRequest& request, const CreateDBInstanceReadReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDBInstanceReadReplica(request), context);
}

void RDSClient::CreateDBInstanceReadReplicaAsync(const CreateDBInstanceReadReplicaRequest& request, const CreateDBInstanceReadReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientCreateDBInstanceReadReplicaAsyncHelper( this, request, handler, context ); } );
}

CreateDBParameterGroupOutcome RDSClient::CreateDBParameterGroup(const CreateDBParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDBParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBParameterGroupOutcomeCallable RDSClient::CreateDBParameterGroupCallable(const CreateDBParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientCreateDBParameterGroupAsyncHelper(RDSClient const * const clientThis, const CreateDBParameterGroupRequest& request, const CreateDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDBParameterGroup(request), context);
}

void RDSClient::CreateDBParameterGroupAsync(const CreateDBParameterGroupRequest& request, const CreateDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientCreateDBParameterGroupAsyncHelper( this, request, handler, context ); } );
}

CreateDBProxyOutcome RDSClient::CreateDBProxy(const CreateDBProxyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDBProxyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBProxyOutcomeCallable RDSClient::CreateDBProxyCallable(const CreateDBProxyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBProxyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBProxy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientCreateDBProxyAsyncHelper(RDSClient const * const clientThis, const CreateDBProxyRequest& request, const CreateDBProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDBProxy(request), context);
}

void RDSClient::CreateDBProxyAsync(const CreateDBProxyRequest& request, const CreateDBProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientCreateDBProxyAsyncHelper( this, request, handler, context ); } );
}

CreateDBProxyEndpointOutcome RDSClient::CreateDBProxyEndpoint(const CreateDBProxyEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDBProxyEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBProxyEndpointOutcomeCallable RDSClient::CreateDBProxyEndpointCallable(const CreateDBProxyEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBProxyEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBProxyEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientCreateDBProxyEndpointAsyncHelper(RDSClient const * const clientThis, const CreateDBProxyEndpointRequest& request, const CreateDBProxyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDBProxyEndpoint(request), context);
}

void RDSClient::CreateDBProxyEndpointAsync(const CreateDBProxyEndpointRequest& request, const CreateDBProxyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientCreateDBProxyEndpointAsyncHelper( this, request, handler, context ); } );
}

CreateDBSecurityGroupOutcome RDSClient::CreateDBSecurityGroup(const CreateDBSecurityGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDBSecurityGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBSecurityGroupOutcomeCallable RDSClient::CreateDBSecurityGroupCallable(const CreateDBSecurityGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBSecurityGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBSecurityGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientCreateDBSecurityGroupAsyncHelper(RDSClient const * const clientThis, const CreateDBSecurityGroupRequest& request, const CreateDBSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDBSecurityGroup(request), context);
}

void RDSClient::CreateDBSecurityGroupAsync(const CreateDBSecurityGroupRequest& request, const CreateDBSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientCreateDBSecurityGroupAsyncHelper( this, request, handler, context ); } );
}

CreateDBSnapshotOutcome RDSClient::CreateDBSnapshot(const CreateDBSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDBSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBSnapshotOutcomeCallable RDSClient::CreateDBSnapshotCallable(const CreateDBSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientCreateDBSnapshotAsyncHelper(RDSClient const * const clientThis, const CreateDBSnapshotRequest& request, const CreateDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDBSnapshot(request), context);
}

void RDSClient::CreateDBSnapshotAsync(const CreateDBSnapshotRequest& request, const CreateDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientCreateDBSnapshotAsyncHelper( this, request, handler, context ); } );
}

CreateDBSubnetGroupOutcome RDSClient::CreateDBSubnetGroup(const CreateDBSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDBSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBSubnetGroupOutcomeCallable RDSClient::CreateDBSubnetGroupCallable(const CreateDBSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientCreateDBSubnetGroupAsyncHelper(RDSClient const * const clientThis, const CreateDBSubnetGroupRequest& request, const CreateDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDBSubnetGroup(request), context);
}

void RDSClient::CreateDBSubnetGroupAsync(const CreateDBSubnetGroupRequest& request, const CreateDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientCreateDBSubnetGroupAsyncHelper( this, request, handler, context ); } );
}

CreateEventSubscriptionOutcome RDSClient::CreateEventSubscription(const CreateEventSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEventSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateEventSubscriptionOutcomeCallable RDSClient::CreateEventSubscriptionCallable(const CreateEventSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEventSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEventSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientCreateEventSubscriptionAsyncHelper(RDSClient const * const clientThis, const CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEventSubscription(request), context);
}

void RDSClient::CreateEventSubscriptionAsync(const CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientCreateEventSubscriptionAsyncHelper( this, request, handler, context ); } );
}

CreateGlobalClusterOutcome RDSClient::CreateGlobalCluster(const CreateGlobalClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateGlobalClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateGlobalClusterOutcomeCallable RDSClient::CreateGlobalClusterCallable(const CreateGlobalClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGlobalClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGlobalCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientCreateGlobalClusterAsyncHelper(RDSClient const * const clientThis, const CreateGlobalClusterRequest& request, const CreateGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGlobalCluster(request), context);
}

void RDSClient::CreateGlobalClusterAsync(const CreateGlobalClusterRequest& request, const CreateGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientCreateGlobalClusterAsyncHelper( this, request, handler, context ); } );
}

CreateOptionGroupOutcome RDSClient::CreateOptionGroup(const CreateOptionGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateOptionGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateOptionGroupOutcomeCallable RDSClient::CreateOptionGroupCallable(const CreateOptionGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateOptionGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateOptionGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientCreateOptionGroupAsyncHelper(RDSClient const * const clientThis, const CreateOptionGroupRequest& request, const CreateOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateOptionGroup(request), context);
}

void RDSClient::CreateOptionGroupAsync(const CreateOptionGroupRequest& request, const CreateOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientCreateOptionGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteCustomDBEngineVersionOutcome RDSClient::DeleteCustomDBEngineVersion(const DeleteCustomDBEngineVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteCustomDBEngineVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteCustomDBEngineVersionOutcomeCallable RDSClient::DeleteCustomDBEngineVersionCallable(const DeleteCustomDBEngineVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCustomDBEngineVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCustomDBEngineVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDeleteCustomDBEngineVersionAsyncHelper(RDSClient const * const clientThis, const DeleteCustomDBEngineVersionRequest& request, const DeleteCustomDBEngineVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCustomDBEngineVersion(request), context);
}

void RDSClient::DeleteCustomDBEngineVersionAsync(const DeleteCustomDBEngineVersionRequest& request, const DeleteCustomDBEngineVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDeleteCustomDBEngineVersionAsyncHelper( this, request, handler, context ); } );
}

DeleteDBClusterOutcome RDSClient::DeleteDBCluster(const DeleteDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBClusterOutcomeCallable RDSClient::DeleteDBClusterCallable(const DeleteDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDeleteDBClusterAsyncHelper(RDSClient const * const clientThis, const DeleteDBClusterRequest& request, const DeleteDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDBCluster(request), context);
}

void RDSClient::DeleteDBClusterAsync(const DeleteDBClusterRequest& request, const DeleteDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDeleteDBClusterAsyncHelper( this, request, handler, context ); } );
}

DeleteDBClusterEndpointOutcome RDSClient::DeleteDBClusterEndpoint(const DeleteDBClusterEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDBClusterEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBClusterEndpointOutcomeCallable RDSClient::DeleteDBClusterEndpointCallable(const DeleteDBClusterEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBClusterEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBClusterEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDeleteDBClusterEndpointAsyncHelper(RDSClient const * const clientThis, const DeleteDBClusterEndpointRequest& request, const DeleteDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDBClusterEndpoint(request), context);
}

void RDSClient::DeleteDBClusterEndpointAsync(const DeleteDBClusterEndpointRequest& request, const DeleteDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDeleteDBClusterEndpointAsyncHelper( this, request, handler, context ); } );
}

DeleteDBClusterParameterGroupOutcome RDSClient::DeleteDBClusterParameterGroup(const DeleteDBClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDBClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBClusterParameterGroupOutcomeCallable RDSClient::DeleteDBClusterParameterGroupCallable(const DeleteDBClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDeleteDBClusterParameterGroupAsyncHelper(RDSClient const * const clientThis, const DeleteDBClusterParameterGroupRequest& request, const DeleteDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDBClusterParameterGroup(request), context);
}

void RDSClient::DeleteDBClusterParameterGroupAsync(const DeleteDBClusterParameterGroupRequest& request, const DeleteDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDeleteDBClusterParameterGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteDBClusterSnapshotOutcome RDSClient::DeleteDBClusterSnapshot(const DeleteDBClusterSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDBClusterSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBClusterSnapshotOutcomeCallable RDSClient::DeleteDBClusterSnapshotCallable(const DeleteDBClusterSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBClusterSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBClusterSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDeleteDBClusterSnapshotAsyncHelper(RDSClient const * const clientThis, const DeleteDBClusterSnapshotRequest& request, const DeleteDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDBClusterSnapshot(request), context);
}

void RDSClient::DeleteDBClusterSnapshotAsync(const DeleteDBClusterSnapshotRequest& request, const DeleteDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDeleteDBClusterSnapshotAsyncHelper( this, request, handler, context ); } );
}

DeleteDBInstanceOutcome RDSClient::DeleteDBInstance(const DeleteDBInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDBInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBInstanceOutcomeCallable RDSClient::DeleteDBInstanceCallable(const DeleteDBInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDeleteDBInstanceAsyncHelper(RDSClient const * const clientThis, const DeleteDBInstanceRequest& request, const DeleteDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDBInstance(request), context);
}

void RDSClient::DeleteDBInstanceAsync(const DeleteDBInstanceRequest& request, const DeleteDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDeleteDBInstanceAsyncHelper( this, request, handler, context ); } );
}

DeleteDBInstanceAutomatedBackupOutcome RDSClient::DeleteDBInstanceAutomatedBackup(const DeleteDBInstanceAutomatedBackupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDBInstanceAutomatedBackupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBInstanceAutomatedBackupOutcomeCallable RDSClient::DeleteDBInstanceAutomatedBackupCallable(const DeleteDBInstanceAutomatedBackupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBInstanceAutomatedBackupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBInstanceAutomatedBackup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDeleteDBInstanceAutomatedBackupAsyncHelper(RDSClient const * const clientThis, const DeleteDBInstanceAutomatedBackupRequest& request, const DeleteDBInstanceAutomatedBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDBInstanceAutomatedBackup(request), context);
}

void RDSClient::DeleteDBInstanceAutomatedBackupAsync(const DeleteDBInstanceAutomatedBackupRequest& request, const DeleteDBInstanceAutomatedBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDeleteDBInstanceAutomatedBackupAsyncHelper( this, request, handler, context ); } );
}

DeleteDBParameterGroupOutcome RDSClient::DeleteDBParameterGroup(const DeleteDBParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDBParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBParameterGroupOutcomeCallable RDSClient::DeleteDBParameterGroupCallable(const DeleteDBParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDeleteDBParameterGroupAsyncHelper(RDSClient const * const clientThis, const DeleteDBParameterGroupRequest& request, const DeleteDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDBParameterGroup(request), context);
}

void RDSClient::DeleteDBParameterGroupAsync(const DeleteDBParameterGroupRequest& request, const DeleteDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDeleteDBParameterGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteDBProxyOutcome RDSClient::DeleteDBProxy(const DeleteDBProxyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDBProxyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBProxyOutcomeCallable RDSClient::DeleteDBProxyCallable(const DeleteDBProxyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBProxyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBProxy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDeleteDBProxyAsyncHelper(RDSClient const * const clientThis, const DeleteDBProxyRequest& request, const DeleteDBProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDBProxy(request), context);
}

void RDSClient::DeleteDBProxyAsync(const DeleteDBProxyRequest& request, const DeleteDBProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDeleteDBProxyAsyncHelper( this, request, handler, context ); } );
}

DeleteDBProxyEndpointOutcome RDSClient::DeleteDBProxyEndpoint(const DeleteDBProxyEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDBProxyEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBProxyEndpointOutcomeCallable RDSClient::DeleteDBProxyEndpointCallable(const DeleteDBProxyEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBProxyEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBProxyEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDeleteDBProxyEndpointAsyncHelper(RDSClient const * const clientThis, const DeleteDBProxyEndpointRequest& request, const DeleteDBProxyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDBProxyEndpoint(request), context);
}

void RDSClient::DeleteDBProxyEndpointAsync(const DeleteDBProxyEndpointRequest& request, const DeleteDBProxyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDeleteDBProxyEndpointAsyncHelper( this, request, handler, context ); } );
}

DeleteDBSecurityGroupOutcome RDSClient::DeleteDBSecurityGroup(const DeleteDBSecurityGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDBSecurityGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBSecurityGroupOutcomeCallable RDSClient::DeleteDBSecurityGroupCallable(const DeleteDBSecurityGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBSecurityGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBSecurityGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDeleteDBSecurityGroupAsyncHelper(RDSClient const * const clientThis, const DeleteDBSecurityGroupRequest& request, const DeleteDBSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDBSecurityGroup(request), context);
}

void RDSClient::DeleteDBSecurityGroupAsync(const DeleteDBSecurityGroupRequest& request, const DeleteDBSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDeleteDBSecurityGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteDBSnapshotOutcome RDSClient::DeleteDBSnapshot(const DeleteDBSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDBSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBSnapshotOutcomeCallable RDSClient::DeleteDBSnapshotCallable(const DeleteDBSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDeleteDBSnapshotAsyncHelper(RDSClient const * const clientThis, const DeleteDBSnapshotRequest& request, const DeleteDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDBSnapshot(request), context);
}

void RDSClient::DeleteDBSnapshotAsync(const DeleteDBSnapshotRequest& request, const DeleteDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDeleteDBSnapshotAsyncHelper( this, request, handler, context ); } );
}

DeleteDBSubnetGroupOutcome RDSClient::DeleteDBSubnetGroup(const DeleteDBSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDBSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBSubnetGroupOutcomeCallable RDSClient::DeleteDBSubnetGroupCallable(const DeleteDBSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDeleteDBSubnetGroupAsyncHelper(RDSClient const * const clientThis, const DeleteDBSubnetGroupRequest& request, const DeleteDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDBSubnetGroup(request), context);
}

void RDSClient::DeleteDBSubnetGroupAsync(const DeleteDBSubnetGroupRequest& request, const DeleteDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDeleteDBSubnetGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteEventSubscriptionOutcome RDSClient::DeleteEventSubscription(const DeleteEventSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEventSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteEventSubscriptionOutcomeCallable RDSClient::DeleteEventSubscriptionCallable(const DeleteEventSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEventSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDeleteEventSubscriptionAsyncHelper(RDSClient const * const clientThis, const DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEventSubscription(request), context);
}

void RDSClient::DeleteEventSubscriptionAsync(const DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDeleteEventSubscriptionAsyncHelper( this, request, handler, context ); } );
}

DeleteGlobalClusterOutcome RDSClient::DeleteGlobalCluster(const DeleteGlobalClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteGlobalClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteGlobalClusterOutcomeCallable RDSClient::DeleteGlobalClusterCallable(const DeleteGlobalClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGlobalClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGlobalCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDeleteGlobalClusterAsyncHelper(RDSClient const * const clientThis, const DeleteGlobalClusterRequest& request, const DeleteGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGlobalCluster(request), context);
}

void RDSClient::DeleteGlobalClusterAsync(const DeleteGlobalClusterRequest& request, const DeleteGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDeleteGlobalClusterAsyncHelper( this, request, handler, context ); } );
}

DeleteOptionGroupOutcome RDSClient::DeleteOptionGroup(const DeleteOptionGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteOptionGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteOptionGroupOutcomeCallable RDSClient::DeleteOptionGroupCallable(const DeleteOptionGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteOptionGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteOptionGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDeleteOptionGroupAsyncHelper(RDSClient const * const clientThis, const DeleteOptionGroupRequest& request, const DeleteOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteOptionGroup(request), context);
}

void RDSClient::DeleteOptionGroupAsync(const DeleteOptionGroupRequest& request, const DeleteOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDeleteOptionGroupAsyncHelper( this, request, handler, context ); } );
}

DeregisterDBProxyTargetsOutcome RDSClient::DeregisterDBProxyTargets(const DeregisterDBProxyTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeregisterDBProxyTargetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeregisterDBProxyTargetsOutcomeCallable RDSClient::DeregisterDBProxyTargetsCallable(const DeregisterDBProxyTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterDBProxyTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterDBProxyTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDeregisterDBProxyTargetsAsyncHelper(RDSClient const * const clientThis, const DeregisterDBProxyTargetsRequest& request, const DeregisterDBProxyTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterDBProxyTargets(request), context);
}

void RDSClient::DeregisterDBProxyTargetsAsync(const DeregisterDBProxyTargetsRequest& request, const DeregisterDBProxyTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDeregisterDBProxyTargetsAsyncHelper( this, request, handler, context ); } );
}

DescribeAccountAttributesOutcome RDSClient::DescribeAccountAttributes(const DescribeAccountAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAccountAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAccountAttributesOutcomeCallable RDSClient::DescribeAccountAttributesCallable(const DescribeAccountAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeAccountAttributesAsyncHelper(RDSClient const * const clientThis, const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAccountAttributes(request), context);
}

void RDSClient::DescribeAccountAttributesAsync(const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeAccountAttributesAsyncHelper( this, request, handler, context ); } );
}

DescribeCertificatesOutcome RDSClient::DescribeCertificates(const DescribeCertificatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCertificatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeCertificatesOutcomeCallable RDSClient::DescribeCertificatesCallable(const DescribeCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeCertificatesAsyncHelper(RDSClient const * const clientThis, const DescribeCertificatesRequest& request, const DescribeCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCertificates(request), context);
}

void RDSClient::DescribeCertificatesAsync(const DescribeCertificatesRequest& request, const DescribeCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeCertificatesAsyncHelper( this, request, handler, context ); } );
}

DescribeDBClusterBacktracksOutcome RDSClient::DescribeDBClusterBacktracks(const DescribeDBClusterBacktracksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBClusterBacktracksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClusterBacktracksOutcomeCallable RDSClient::DescribeDBClusterBacktracksCallable(const DescribeDBClusterBacktracksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClusterBacktracksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusterBacktracks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeDBClusterBacktracksAsyncHelper(RDSClient const * const clientThis, const DescribeDBClusterBacktracksRequest& request, const DescribeDBClusterBacktracksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBClusterBacktracks(request), context);
}

void RDSClient::DescribeDBClusterBacktracksAsync(const DescribeDBClusterBacktracksRequest& request, const DescribeDBClusterBacktracksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeDBClusterBacktracksAsyncHelper( this, request, handler, context ); } );
}

DescribeDBClusterEndpointsOutcome RDSClient::DescribeDBClusterEndpoints(const DescribeDBClusterEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBClusterEndpointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClusterEndpointsOutcomeCallable RDSClient::DescribeDBClusterEndpointsCallable(const DescribeDBClusterEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClusterEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusterEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeDBClusterEndpointsAsyncHelper(RDSClient const * const clientThis, const DescribeDBClusterEndpointsRequest& request, const DescribeDBClusterEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBClusterEndpoints(request), context);
}

void RDSClient::DescribeDBClusterEndpointsAsync(const DescribeDBClusterEndpointsRequest& request, const DescribeDBClusterEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeDBClusterEndpointsAsyncHelper( this, request, handler, context ); } );
}

DescribeDBClusterParameterGroupsOutcome RDSClient::DescribeDBClusterParameterGroups(const DescribeDBClusterParameterGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBClusterParameterGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClusterParameterGroupsOutcomeCallable RDSClient::DescribeDBClusterParameterGroupsCallable(const DescribeDBClusterParameterGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClusterParameterGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusterParameterGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeDBClusterParameterGroupsAsyncHelper(RDSClient const * const clientThis, const DescribeDBClusterParameterGroupsRequest& request, const DescribeDBClusterParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBClusterParameterGroups(request), context);
}

void RDSClient::DescribeDBClusterParameterGroupsAsync(const DescribeDBClusterParameterGroupsRequest& request, const DescribeDBClusterParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeDBClusterParameterGroupsAsyncHelper( this, request, handler, context ); } );
}

DescribeDBClusterParametersOutcome RDSClient::DescribeDBClusterParameters(const DescribeDBClusterParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBClusterParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClusterParametersOutcomeCallable RDSClient::DescribeDBClusterParametersCallable(const DescribeDBClusterParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClusterParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusterParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeDBClusterParametersAsyncHelper(RDSClient const * const clientThis, const DescribeDBClusterParametersRequest& request, const DescribeDBClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBClusterParameters(request), context);
}

void RDSClient::DescribeDBClusterParametersAsync(const DescribeDBClusterParametersRequest& request, const DescribeDBClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeDBClusterParametersAsyncHelper( this, request, handler, context ); } );
}

DescribeDBClusterSnapshotAttributesOutcome RDSClient::DescribeDBClusterSnapshotAttributes(const DescribeDBClusterSnapshotAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBClusterSnapshotAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClusterSnapshotAttributesOutcomeCallable RDSClient::DescribeDBClusterSnapshotAttributesCallable(const DescribeDBClusterSnapshotAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClusterSnapshotAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusterSnapshotAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeDBClusterSnapshotAttributesAsyncHelper(RDSClient const * const clientThis, const DescribeDBClusterSnapshotAttributesRequest& request, const DescribeDBClusterSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBClusterSnapshotAttributes(request), context);
}

void RDSClient::DescribeDBClusterSnapshotAttributesAsync(const DescribeDBClusterSnapshotAttributesRequest& request, const DescribeDBClusterSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeDBClusterSnapshotAttributesAsyncHelper( this, request, handler, context ); } );
}

DescribeDBClusterSnapshotsOutcome RDSClient::DescribeDBClusterSnapshots(const DescribeDBClusterSnapshotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBClusterSnapshotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClusterSnapshotsOutcomeCallable RDSClient::DescribeDBClusterSnapshotsCallable(const DescribeDBClusterSnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClusterSnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusterSnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeDBClusterSnapshotsAsyncHelper(RDSClient const * const clientThis, const DescribeDBClusterSnapshotsRequest& request, const DescribeDBClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBClusterSnapshots(request), context);
}

void RDSClient::DescribeDBClusterSnapshotsAsync(const DescribeDBClusterSnapshotsRequest& request, const DescribeDBClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeDBClusterSnapshotsAsyncHelper( this, request, handler, context ); } );
}

DescribeDBClustersOutcome RDSClient::DescribeDBClusters(const DescribeDBClustersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBClustersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClustersOutcomeCallable RDSClient::DescribeDBClustersCallable(const DescribeDBClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeDBClustersAsyncHelper(RDSClient const * const clientThis, const DescribeDBClustersRequest& request, const DescribeDBClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBClusters(request), context);
}

void RDSClient::DescribeDBClustersAsync(const DescribeDBClustersRequest& request, const DescribeDBClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeDBClustersAsyncHelper( this, request, handler, context ); } );
}

DescribeDBEngineVersionsOutcome RDSClient::DescribeDBEngineVersions(const DescribeDBEngineVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBEngineVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBEngineVersionsOutcomeCallable RDSClient::DescribeDBEngineVersionsCallable(const DescribeDBEngineVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBEngineVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBEngineVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeDBEngineVersionsAsyncHelper(RDSClient const * const clientThis, const DescribeDBEngineVersionsRequest& request, const DescribeDBEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBEngineVersions(request), context);
}

void RDSClient::DescribeDBEngineVersionsAsync(const DescribeDBEngineVersionsRequest& request, const DescribeDBEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeDBEngineVersionsAsyncHelper( this, request, handler, context ); } );
}

DescribeDBInstanceAutomatedBackupsOutcome RDSClient::DescribeDBInstanceAutomatedBackups(const DescribeDBInstanceAutomatedBackupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBInstanceAutomatedBackupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBInstanceAutomatedBackupsOutcomeCallable RDSClient::DescribeDBInstanceAutomatedBackupsCallable(const DescribeDBInstanceAutomatedBackupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBInstanceAutomatedBackupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBInstanceAutomatedBackups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeDBInstanceAutomatedBackupsAsyncHelper(RDSClient const * const clientThis, const DescribeDBInstanceAutomatedBackupsRequest& request, const DescribeDBInstanceAutomatedBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBInstanceAutomatedBackups(request), context);
}

void RDSClient::DescribeDBInstanceAutomatedBackupsAsync(const DescribeDBInstanceAutomatedBackupsRequest& request, const DescribeDBInstanceAutomatedBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeDBInstanceAutomatedBackupsAsyncHelper( this, request, handler, context ); } );
}

DescribeDBInstancesOutcome RDSClient::DescribeDBInstances(const DescribeDBInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBInstancesOutcomeCallable RDSClient::DescribeDBInstancesCallable(const DescribeDBInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeDBInstancesAsyncHelper(RDSClient const * const clientThis, const DescribeDBInstancesRequest& request, const DescribeDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBInstances(request), context);
}

void RDSClient::DescribeDBInstancesAsync(const DescribeDBInstancesRequest& request, const DescribeDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeDBInstancesAsyncHelper( this, request, handler, context ); } );
}

DescribeDBLogFilesOutcome RDSClient::DescribeDBLogFiles(const DescribeDBLogFilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBLogFilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBLogFilesOutcomeCallable RDSClient::DescribeDBLogFilesCallable(const DescribeDBLogFilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBLogFilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBLogFiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeDBLogFilesAsyncHelper(RDSClient const * const clientThis, const DescribeDBLogFilesRequest& request, const DescribeDBLogFilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBLogFiles(request), context);
}

void RDSClient::DescribeDBLogFilesAsync(const DescribeDBLogFilesRequest& request, const DescribeDBLogFilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeDBLogFilesAsyncHelper( this, request, handler, context ); } );
}

DescribeDBParameterGroupsOutcome RDSClient::DescribeDBParameterGroups(const DescribeDBParameterGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBParameterGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBParameterGroupsOutcomeCallable RDSClient::DescribeDBParameterGroupsCallable(const DescribeDBParameterGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBParameterGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBParameterGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeDBParameterGroupsAsyncHelper(RDSClient const * const clientThis, const DescribeDBParameterGroupsRequest& request, const DescribeDBParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBParameterGroups(request), context);
}

void RDSClient::DescribeDBParameterGroupsAsync(const DescribeDBParameterGroupsRequest& request, const DescribeDBParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeDBParameterGroupsAsyncHelper( this, request, handler, context ); } );
}

DescribeDBParametersOutcome RDSClient::DescribeDBParameters(const DescribeDBParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBParametersOutcomeCallable RDSClient::DescribeDBParametersCallable(const DescribeDBParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeDBParametersAsyncHelper(RDSClient const * const clientThis, const DescribeDBParametersRequest& request, const DescribeDBParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBParameters(request), context);
}

void RDSClient::DescribeDBParametersAsync(const DescribeDBParametersRequest& request, const DescribeDBParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeDBParametersAsyncHelper( this, request, handler, context ); } );
}

DescribeDBProxiesOutcome RDSClient::DescribeDBProxies(const DescribeDBProxiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBProxiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBProxiesOutcomeCallable RDSClient::DescribeDBProxiesCallable(const DescribeDBProxiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBProxiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBProxies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeDBProxiesAsyncHelper(RDSClient const * const clientThis, const DescribeDBProxiesRequest& request, const DescribeDBProxiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBProxies(request), context);
}

void RDSClient::DescribeDBProxiesAsync(const DescribeDBProxiesRequest& request, const DescribeDBProxiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeDBProxiesAsyncHelper( this, request, handler, context ); } );
}

DescribeDBProxyEndpointsOutcome RDSClient::DescribeDBProxyEndpoints(const DescribeDBProxyEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBProxyEndpointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBProxyEndpointsOutcomeCallable RDSClient::DescribeDBProxyEndpointsCallable(const DescribeDBProxyEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBProxyEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBProxyEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeDBProxyEndpointsAsyncHelper(RDSClient const * const clientThis, const DescribeDBProxyEndpointsRequest& request, const DescribeDBProxyEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBProxyEndpoints(request), context);
}

void RDSClient::DescribeDBProxyEndpointsAsync(const DescribeDBProxyEndpointsRequest& request, const DescribeDBProxyEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeDBProxyEndpointsAsyncHelper( this, request, handler, context ); } );
}

DescribeDBProxyTargetGroupsOutcome RDSClient::DescribeDBProxyTargetGroups(const DescribeDBProxyTargetGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBProxyTargetGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBProxyTargetGroupsOutcomeCallable RDSClient::DescribeDBProxyTargetGroupsCallable(const DescribeDBProxyTargetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBProxyTargetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBProxyTargetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeDBProxyTargetGroupsAsyncHelper(RDSClient const * const clientThis, const DescribeDBProxyTargetGroupsRequest& request, const DescribeDBProxyTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBProxyTargetGroups(request), context);
}

void RDSClient::DescribeDBProxyTargetGroupsAsync(const DescribeDBProxyTargetGroupsRequest& request, const DescribeDBProxyTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeDBProxyTargetGroupsAsyncHelper( this, request, handler, context ); } );
}

DescribeDBProxyTargetsOutcome RDSClient::DescribeDBProxyTargets(const DescribeDBProxyTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBProxyTargetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBProxyTargetsOutcomeCallable RDSClient::DescribeDBProxyTargetsCallable(const DescribeDBProxyTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBProxyTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBProxyTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeDBProxyTargetsAsyncHelper(RDSClient const * const clientThis, const DescribeDBProxyTargetsRequest& request, const DescribeDBProxyTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBProxyTargets(request), context);
}

void RDSClient::DescribeDBProxyTargetsAsync(const DescribeDBProxyTargetsRequest& request, const DescribeDBProxyTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeDBProxyTargetsAsyncHelper( this, request, handler, context ); } );
}

DescribeDBSecurityGroupsOutcome RDSClient::DescribeDBSecurityGroups(const DescribeDBSecurityGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBSecurityGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBSecurityGroupsOutcomeCallable RDSClient::DescribeDBSecurityGroupsCallable(const DescribeDBSecurityGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBSecurityGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBSecurityGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeDBSecurityGroupsAsyncHelper(RDSClient const * const clientThis, const DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBSecurityGroups(request), context);
}

void RDSClient::DescribeDBSecurityGroupsAsync(const DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeDBSecurityGroupsAsyncHelper( this, request, handler, context ); } );
}

DescribeDBSnapshotAttributesOutcome RDSClient::DescribeDBSnapshotAttributes(const DescribeDBSnapshotAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBSnapshotAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBSnapshotAttributesOutcomeCallable RDSClient::DescribeDBSnapshotAttributesCallable(const DescribeDBSnapshotAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBSnapshotAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBSnapshotAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeDBSnapshotAttributesAsyncHelper(RDSClient const * const clientThis, const DescribeDBSnapshotAttributesRequest& request, const DescribeDBSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBSnapshotAttributes(request), context);
}

void RDSClient::DescribeDBSnapshotAttributesAsync(const DescribeDBSnapshotAttributesRequest& request, const DescribeDBSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeDBSnapshotAttributesAsyncHelper( this, request, handler, context ); } );
}

DescribeDBSnapshotsOutcome RDSClient::DescribeDBSnapshots(const DescribeDBSnapshotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBSnapshotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBSnapshotsOutcomeCallable RDSClient::DescribeDBSnapshotsCallable(const DescribeDBSnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBSnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBSnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeDBSnapshotsAsyncHelper(RDSClient const * const clientThis, const DescribeDBSnapshotsRequest& request, const DescribeDBSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBSnapshots(request), context);
}

void RDSClient::DescribeDBSnapshotsAsync(const DescribeDBSnapshotsRequest& request, const DescribeDBSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeDBSnapshotsAsyncHelper( this, request, handler, context ); } );
}

DescribeDBSubnetGroupsOutcome RDSClient::DescribeDBSubnetGroups(const DescribeDBSubnetGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDBSubnetGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBSubnetGroupsOutcomeCallable RDSClient::DescribeDBSubnetGroupsCallable(const DescribeDBSubnetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBSubnetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBSubnetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeDBSubnetGroupsAsyncHelper(RDSClient const * const clientThis, const DescribeDBSubnetGroupsRequest& request, const DescribeDBSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDBSubnetGroups(request), context);
}

void RDSClient::DescribeDBSubnetGroupsAsync(const DescribeDBSubnetGroupsRequest& request, const DescribeDBSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeDBSubnetGroupsAsyncHelper( this, request, handler, context ); } );
}

DescribeEngineDefaultClusterParametersOutcome RDSClient::DescribeEngineDefaultClusterParameters(const DescribeEngineDefaultClusterParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEngineDefaultClusterParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEngineDefaultClusterParametersOutcomeCallable RDSClient::DescribeEngineDefaultClusterParametersCallable(const DescribeEngineDefaultClusterParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEngineDefaultClusterParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEngineDefaultClusterParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeEngineDefaultClusterParametersAsyncHelper(RDSClient const * const clientThis, const DescribeEngineDefaultClusterParametersRequest& request, const DescribeEngineDefaultClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEngineDefaultClusterParameters(request), context);
}

void RDSClient::DescribeEngineDefaultClusterParametersAsync(const DescribeEngineDefaultClusterParametersRequest& request, const DescribeEngineDefaultClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeEngineDefaultClusterParametersAsyncHelper( this, request, handler, context ); } );
}

DescribeEngineDefaultParametersOutcome RDSClient::DescribeEngineDefaultParameters(const DescribeEngineDefaultParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEngineDefaultParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEngineDefaultParametersOutcomeCallable RDSClient::DescribeEngineDefaultParametersCallable(const DescribeEngineDefaultParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEngineDefaultParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEngineDefaultParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeEngineDefaultParametersAsyncHelper(RDSClient const * const clientThis, const DescribeEngineDefaultParametersRequest& request, const DescribeEngineDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEngineDefaultParameters(request), context);
}

void RDSClient::DescribeEngineDefaultParametersAsync(const DescribeEngineDefaultParametersRequest& request, const DescribeEngineDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeEngineDefaultParametersAsyncHelper( this, request, handler, context ); } );
}

DescribeEventCategoriesOutcome RDSClient::DescribeEventCategories(const DescribeEventCategoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEventCategoriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEventCategoriesOutcomeCallable RDSClient::DescribeEventCategoriesCallable(const DescribeEventCategoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventCategoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventCategories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeEventCategoriesAsyncHelper(RDSClient const * const clientThis, const DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEventCategories(request), context);
}

void RDSClient::DescribeEventCategoriesAsync(const DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeEventCategoriesAsyncHelper( this, request, handler, context ); } );
}

DescribeEventSubscriptionsOutcome RDSClient::DescribeEventSubscriptions(const DescribeEventSubscriptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEventSubscriptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEventSubscriptionsOutcomeCallable RDSClient::DescribeEventSubscriptionsCallable(const DescribeEventSubscriptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventSubscriptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventSubscriptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeEventSubscriptionsAsyncHelper(RDSClient const * const clientThis, const DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEventSubscriptions(request), context);
}

void RDSClient::DescribeEventSubscriptionsAsync(const DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeEventSubscriptionsAsyncHelper( this, request, handler, context ); } );
}

DescribeEventsOutcome RDSClient::DescribeEvents(const DescribeEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEventsOutcomeCallable RDSClient::DescribeEventsCallable(const DescribeEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeEventsAsyncHelper(RDSClient const * const clientThis, const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEvents(request), context);
}

void RDSClient::DescribeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeEventsAsyncHelper( this, request, handler, context ); } );
}

DescribeExportTasksOutcome RDSClient::DescribeExportTasks(const DescribeExportTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeExportTasksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeExportTasksOutcomeCallable RDSClient::DescribeExportTasksCallable(const DescribeExportTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeExportTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeExportTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeExportTasksAsyncHelper(RDSClient const * const clientThis, const DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeExportTasks(request), context);
}

void RDSClient::DescribeExportTasksAsync(const DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeExportTasksAsyncHelper( this, request, handler, context ); } );
}

DescribeGlobalClustersOutcome RDSClient::DescribeGlobalClusters(const DescribeGlobalClustersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeGlobalClustersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeGlobalClustersOutcomeCallable RDSClient::DescribeGlobalClustersCallable(const DescribeGlobalClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGlobalClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGlobalClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeGlobalClustersAsyncHelper(RDSClient const * const clientThis, const DescribeGlobalClustersRequest& request, const DescribeGlobalClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeGlobalClusters(request), context);
}

void RDSClient::DescribeGlobalClustersAsync(const DescribeGlobalClustersRequest& request, const DescribeGlobalClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeGlobalClustersAsyncHelper( this, request, handler, context ); } );
}

DescribeOptionGroupOptionsOutcome RDSClient::DescribeOptionGroupOptions(const DescribeOptionGroupOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeOptionGroupOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeOptionGroupOptionsOutcomeCallable RDSClient::DescribeOptionGroupOptionsCallable(const DescribeOptionGroupOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOptionGroupOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOptionGroupOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeOptionGroupOptionsAsyncHelper(RDSClient const * const clientThis, const DescribeOptionGroupOptionsRequest& request, const DescribeOptionGroupOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeOptionGroupOptions(request), context);
}

void RDSClient::DescribeOptionGroupOptionsAsync(const DescribeOptionGroupOptionsRequest& request, const DescribeOptionGroupOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeOptionGroupOptionsAsyncHelper( this, request, handler, context ); } );
}

DescribeOptionGroupsOutcome RDSClient::DescribeOptionGroups(const DescribeOptionGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeOptionGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeOptionGroupsOutcomeCallable RDSClient::DescribeOptionGroupsCallable(const DescribeOptionGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOptionGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOptionGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeOptionGroupsAsyncHelper(RDSClient const * const clientThis, const DescribeOptionGroupsRequest& request, const DescribeOptionGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeOptionGroups(request), context);
}

void RDSClient::DescribeOptionGroupsAsync(const DescribeOptionGroupsRequest& request, const DescribeOptionGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeOptionGroupsAsyncHelper( this, request, handler, context ); } );
}

DescribeOrderableDBInstanceOptionsOutcome RDSClient::DescribeOrderableDBInstanceOptions(const DescribeOrderableDBInstanceOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeOrderableDBInstanceOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeOrderableDBInstanceOptionsOutcomeCallable RDSClient::DescribeOrderableDBInstanceOptionsCallable(const DescribeOrderableDBInstanceOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrderableDBInstanceOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrderableDBInstanceOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeOrderableDBInstanceOptionsAsyncHelper(RDSClient const * const clientThis, const DescribeOrderableDBInstanceOptionsRequest& request, const DescribeOrderableDBInstanceOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeOrderableDBInstanceOptions(request), context);
}

void RDSClient::DescribeOrderableDBInstanceOptionsAsync(const DescribeOrderableDBInstanceOptionsRequest& request, const DescribeOrderableDBInstanceOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeOrderableDBInstanceOptionsAsyncHelper( this, request, handler, context ); } );
}

DescribePendingMaintenanceActionsOutcome RDSClient::DescribePendingMaintenanceActions(const DescribePendingMaintenanceActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePendingMaintenanceActionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribePendingMaintenanceActionsOutcomeCallable RDSClient::DescribePendingMaintenanceActionsCallable(const DescribePendingMaintenanceActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePendingMaintenanceActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePendingMaintenanceActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribePendingMaintenanceActionsAsyncHelper(RDSClient const * const clientThis, const DescribePendingMaintenanceActionsRequest& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePendingMaintenanceActions(request), context);
}

void RDSClient::DescribePendingMaintenanceActionsAsync(const DescribePendingMaintenanceActionsRequest& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribePendingMaintenanceActionsAsyncHelper( this, request, handler, context ); } );
}

DescribeReservedDBInstancesOutcome RDSClient::DescribeReservedDBInstances(const DescribeReservedDBInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeReservedDBInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeReservedDBInstancesOutcomeCallable RDSClient::DescribeReservedDBInstancesCallable(const DescribeReservedDBInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservedDBInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReservedDBInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeReservedDBInstancesAsyncHelper(RDSClient const * const clientThis, const DescribeReservedDBInstancesRequest& request, const DescribeReservedDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeReservedDBInstances(request), context);
}

void RDSClient::DescribeReservedDBInstancesAsync(const DescribeReservedDBInstancesRequest& request, const DescribeReservedDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeReservedDBInstancesAsyncHelper( this, request, handler, context ); } );
}

DescribeReservedDBInstancesOfferingsOutcome RDSClient::DescribeReservedDBInstancesOfferings(const DescribeReservedDBInstancesOfferingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeReservedDBInstancesOfferingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeReservedDBInstancesOfferingsOutcomeCallable RDSClient::DescribeReservedDBInstancesOfferingsCallable(const DescribeReservedDBInstancesOfferingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservedDBInstancesOfferingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReservedDBInstancesOfferings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeReservedDBInstancesOfferingsAsyncHelper(RDSClient const * const clientThis, const DescribeReservedDBInstancesOfferingsRequest& request, const DescribeReservedDBInstancesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeReservedDBInstancesOfferings(request), context);
}

void RDSClient::DescribeReservedDBInstancesOfferingsAsync(const DescribeReservedDBInstancesOfferingsRequest& request, const DescribeReservedDBInstancesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeReservedDBInstancesOfferingsAsyncHelper( this, request, handler, context ); } );
}

DescribeSourceRegionsOutcome RDSClient::DescribeSourceRegions(const DescribeSourceRegionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSourceRegionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSourceRegionsOutcomeCallable RDSClient::DescribeSourceRegionsCallable(const DescribeSourceRegionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSourceRegionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSourceRegions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeSourceRegionsAsyncHelper(RDSClient const * const clientThis, const DescribeSourceRegionsRequest& request, const DescribeSourceRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSourceRegions(request), context);
}

void RDSClient::DescribeSourceRegionsAsync(const DescribeSourceRegionsRequest& request, const DescribeSourceRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeSourceRegionsAsyncHelper( this, request, handler, context ); } );
}

DescribeValidDBInstanceModificationsOutcome RDSClient::DescribeValidDBInstanceModifications(const DescribeValidDBInstanceModificationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeValidDBInstanceModificationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeValidDBInstanceModificationsOutcomeCallable RDSClient::DescribeValidDBInstanceModificationsCallable(const DescribeValidDBInstanceModificationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeValidDBInstanceModificationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeValidDBInstanceModifications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDescribeValidDBInstanceModificationsAsyncHelper(RDSClient const * const clientThis, const DescribeValidDBInstanceModificationsRequest& request, const DescribeValidDBInstanceModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeValidDBInstanceModifications(request), context);
}

void RDSClient::DescribeValidDBInstanceModificationsAsync(const DescribeValidDBInstanceModificationsRequest& request, const DescribeValidDBInstanceModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDescribeValidDBInstanceModificationsAsyncHelper( this, request, handler, context ); } );
}

DownloadDBLogFilePortionOutcome RDSClient::DownloadDBLogFilePortion(const DownloadDBLogFilePortionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DownloadDBLogFilePortionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DownloadDBLogFilePortionOutcomeCallable RDSClient::DownloadDBLogFilePortionCallable(const DownloadDBLogFilePortionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DownloadDBLogFilePortionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DownloadDBLogFilePortion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientDownloadDBLogFilePortionAsyncHelper(RDSClient const * const clientThis, const DownloadDBLogFilePortionRequest& request, const DownloadDBLogFilePortionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DownloadDBLogFilePortion(request), context);
}

void RDSClient::DownloadDBLogFilePortionAsync(const DownloadDBLogFilePortionRequest& request, const DownloadDBLogFilePortionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientDownloadDBLogFilePortionAsyncHelper( this, request, handler, context ); } );
}

FailoverDBClusterOutcome RDSClient::FailoverDBCluster(const FailoverDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return FailoverDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

FailoverDBClusterOutcomeCallable RDSClient::FailoverDBClusterCallable(const FailoverDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< FailoverDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->FailoverDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientFailoverDBClusterAsyncHelper(RDSClient const * const clientThis, const FailoverDBClusterRequest& request, const FailoverDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->FailoverDBCluster(request), context);
}

void RDSClient::FailoverDBClusterAsync(const FailoverDBClusterRequest& request, const FailoverDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientFailoverDBClusterAsyncHelper( this, request, handler, context ); } );
}

FailoverGlobalClusterOutcome RDSClient::FailoverGlobalCluster(const FailoverGlobalClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return FailoverGlobalClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

FailoverGlobalClusterOutcomeCallable RDSClient::FailoverGlobalClusterCallable(const FailoverGlobalClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< FailoverGlobalClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->FailoverGlobalCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientFailoverGlobalClusterAsyncHelper(RDSClient const * const clientThis, const FailoverGlobalClusterRequest& request, const FailoverGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->FailoverGlobalCluster(request), context);
}

void RDSClient::FailoverGlobalClusterAsync(const FailoverGlobalClusterRequest& request, const FailoverGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientFailoverGlobalClusterAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome RDSClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListTagsForResourceOutcomeCallable RDSClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientListTagsForResourceAsyncHelper(RDSClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void RDSClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ModifyActivityStreamOutcome RDSClient::ModifyActivityStream(const ModifyActivityStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyActivityStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyActivityStreamOutcomeCallable RDSClient::ModifyActivityStreamCallable(const ModifyActivityStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyActivityStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyActivityStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientModifyActivityStreamAsyncHelper(RDSClient const * const clientThis, const ModifyActivityStreamRequest& request, const ModifyActivityStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyActivityStream(request), context);
}

void RDSClient::ModifyActivityStreamAsync(const ModifyActivityStreamRequest& request, const ModifyActivityStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientModifyActivityStreamAsyncHelper( this, request, handler, context ); } );
}

ModifyCertificatesOutcome RDSClient::ModifyCertificates(const ModifyCertificatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyCertificatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyCertificatesOutcomeCallable RDSClient::ModifyCertificatesCallable(const ModifyCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientModifyCertificatesAsyncHelper(RDSClient const * const clientThis, const ModifyCertificatesRequest& request, const ModifyCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyCertificates(request), context);
}

void RDSClient::ModifyCertificatesAsync(const ModifyCertificatesRequest& request, const ModifyCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientModifyCertificatesAsyncHelper( this, request, handler, context ); } );
}

ModifyCurrentDBClusterCapacityOutcome RDSClient::ModifyCurrentDBClusterCapacity(const ModifyCurrentDBClusterCapacityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyCurrentDBClusterCapacityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyCurrentDBClusterCapacityOutcomeCallable RDSClient::ModifyCurrentDBClusterCapacityCallable(const ModifyCurrentDBClusterCapacityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyCurrentDBClusterCapacityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyCurrentDBClusterCapacity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientModifyCurrentDBClusterCapacityAsyncHelper(RDSClient const * const clientThis, const ModifyCurrentDBClusterCapacityRequest& request, const ModifyCurrentDBClusterCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyCurrentDBClusterCapacity(request), context);
}

void RDSClient::ModifyCurrentDBClusterCapacityAsync(const ModifyCurrentDBClusterCapacityRequest& request, const ModifyCurrentDBClusterCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientModifyCurrentDBClusterCapacityAsyncHelper( this, request, handler, context ); } );
}

ModifyCustomDBEngineVersionOutcome RDSClient::ModifyCustomDBEngineVersion(const ModifyCustomDBEngineVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyCustomDBEngineVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyCustomDBEngineVersionOutcomeCallable RDSClient::ModifyCustomDBEngineVersionCallable(const ModifyCustomDBEngineVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyCustomDBEngineVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyCustomDBEngineVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientModifyCustomDBEngineVersionAsyncHelper(RDSClient const * const clientThis, const ModifyCustomDBEngineVersionRequest& request, const ModifyCustomDBEngineVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyCustomDBEngineVersion(request), context);
}

void RDSClient::ModifyCustomDBEngineVersionAsync(const ModifyCustomDBEngineVersionRequest& request, const ModifyCustomDBEngineVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientModifyCustomDBEngineVersionAsyncHelper( this, request, handler, context ); } );
}

ModifyDBClusterOutcome RDSClient::ModifyDBCluster(const ModifyDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBClusterOutcomeCallable RDSClient::ModifyDBClusterCallable(const ModifyDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientModifyDBClusterAsyncHelper(RDSClient const * const clientThis, const ModifyDBClusterRequest& request, const ModifyDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyDBCluster(request), context);
}

void RDSClient::ModifyDBClusterAsync(const ModifyDBClusterRequest& request, const ModifyDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientModifyDBClusterAsyncHelper( this, request, handler, context ); } );
}

ModifyDBClusterEndpointOutcome RDSClient::ModifyDBClusterEndpoint(const ModifyDBClusterEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyDBClusterEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBClusterEndpointOutcomeCallable RDSClient::ModifyDBClusterEndpointCallable(const ModifyDBClusterEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBClusterEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBClusterEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientModifyDBClusterEndpointAsyncHelper(RDSClient const * const clientThis, const ModifyDBClusterEndpointRequest& request, const ModifyDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyDBClusterEndpoint(request), context);
}

void RDSClient::ModifyDBClusterEndpointAsync(const ModifyDBClusterEndpointRequest& request, const ModifyDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientModifyDBClusterEndpointAsyncHelper( this, request, handler, context ); } );
}

ModifyDBClusterParameterGroupOutcome RDSClient::ModifyDBClusterParameterGroup(const ModifyDBClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyDBClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBClusterParameterGroupOutcomeCallable RDSClient::ModifyDBClusterParameterGroupCallable(const ModifyDBClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientModifyDBClusterParameterGroupAsyncHelper(RDSClient const * const clientThis, const ModifyDBClusterParameterGroupRequest& request, const ModifyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyDBClusterParameterGroup(request), context);
}

void RDSClient::ModifyDBClusterParameterGroupAsync(const ModifyDBClusterParameterGroupRequest& request, const ModifyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientModifyDBClusterParameterGroupAsyncHelper( this, request, handler, context ); } );
}

ModifyDBClusterSnapshotAttributeOutcome RDSClient::ModifyDBClusterSnapshotAttribute(const ModifyDBClusterSnapshotAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyDBClusterSnapshotAttributeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBClusterSnapshotAttributeOutcomeCallable RDSClient::ModifyDBClusterSnapshotAttributeCallable(const ModifyDBClusterSnapshotAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBClusterSnapshotAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBClusterSnapshotAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientModifyDBClusterSnapshotAttributeAsyncHelper(RDSClient const * const clientThis, const ModifyDBClusterSnapshotAttributeRequest& request, const ModifyDBClusterSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyDBClusterSnapshotAttribute(request), context);
}

void RDSClient::ModifyDBClusterSnapshotAttributeAsync(const ModifyDBClusterSnapshotAttributeRequest& request, const ModifyDBClusterSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientModifyDBClusterSnapshotAttributeAsyncHelper( this, request, handler, context ); } );
}

ModifyDBInstanceOutcome RDSClient::ModifyDBInstance(const ModifyDBInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyDBInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBInstanceOutcomeCallable RDSClient::ModifyDBInstanceCallable(const ModifyDBInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientModifyDBInstanceAsyncHelper(RDSClient const * const clientThis, const ModifyDBInstanceRequest& request, const ModifyDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyDBInstance(request), context);
}

void RDSClient::ModifyDBInstanceAsync(const ModifyDBInstanceRequest& request, const ModifyDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientModifyDBInstanceAsyncHelper( this, request, handler, context ); } );
}

ModifyDBParameterGroupOutcome RDSClient::ModifyDBParameterGroup(const ModifyDBParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyDBParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBParameterGroupOutcomeCallable RDSClient::ModifyDBParameterGroupCallable(const ModifyDBParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientModifyDBParameterGroupAsyncHelper(RDSClient const * const clientThis, const ModifyDBParameterGroupRequest& request, const ModifyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyDBParameterGroup(request), context);
}

void RDSClient::ModifyDBParameterGroupAsync(const ModifyDBParameterGroupRequest& request, const ModifyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientModifyDBParameterGroupAsyncHelper( this, request, handler, context ); } );
}

ModifyDBProxyOutcome RDSClient::ModifyDBProxy(const ModifyDBProxyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyDBProxyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBProxyOutcomeCallable RDSClient::ModifyDBProxyCallable(const ModifyDBProxyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBProxyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBProxy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientModifyDBProxyAsyncHelper(RDSClient const * const clientThis, const ModifyDBProxyRequest& request, const ModifyDBProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyDBProxy(request), context);
}

void RDSClient::ModifyDBProxyAsync(const ModifyDBProxyRequest& request, const ModifyDBProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientModifyDBProxyAsyncHelper( this, request, handler, context ); } );
}

ModifyDBProxyEndpointOutcome RDSClient::ModifyDBProxyEndpoint(const ModifyDBProxyEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyDBProxyEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBProxyEndpointOutcomeCallable RDSClient::ModifyDBProxyEndpointCallable(const ModifyDBProxyEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBProxyEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBProxyEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientModifyDBProxyEndpointAsyncHelper(RDSClient const * const clientThis, const ModifyDBProxyEndpointRequest& request, const ModifyDBProxyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyDBProxyEndpoint(request), context);
}

void RDSClient::ModifyDBProxyEndpointAsync(const ModifyDBProxyEndpointRequest& request, const ModifyDBProxyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientModifyDBProxyEndpointAsyncHelper( this, request, handler, context ); } );
}

ModifyDBProxyTargetGroupOutcome RDSClient::ModifyDBProxyTargetGroup(const ModifyDBProxyTargetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyDBProxyTargetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBProxyTargetGroupOutcomeCallable RDSClient::ModifyDBProxyTargetGroupCallable(const ModifyDBProxyTargetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBProxyTargetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBProxyTargetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientModifyDBProxyTargetGroupAsyncHelper(RDSClient const * const clientThis, const ModifyDBProxyTargetGroupRequest& request, const ModifyDBProxyTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyDBProxyTargetGroup(request), context);
}

void RDSClient::ModifyDBProxyTargetGroupAsync(const ModifyDBProxyTargetGroupRequest& request, const ModifyDBProxyTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientModifyDBProxyTargetGroupAsyncHelper( this, request, handler, context ); } );
}

ModifyDBSnapshotOutcome RDSClient::ModifyDBSnapshot(const ModifyDBSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyDBSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBSnapshotOutcomeCallable RDSClient::ModifyDBSnapshotCallable(const ModifyDBSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientModifyDBSnapshotAsyncHelper(RDSClient const * const clientThis, const ModifyDBSnapshotRequest& request, const ModifyDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyDBSnapshot(request), context);
}

void RDSClient::ModifyDBSnapshotAsync(const ModifyDBSnapshotRequest& request, const ModifyDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientModifyDBSnapshotAsyncHelper( this, request, handler, context ); } );
}

ModifyDBSnapshotAttributeOutcome RDSClient::ModifyDBSnapshotAttribute(const ModifyDBSnapshotAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyDBSnapshotAttributeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBSnapshotAttributeOutcomeCallable RDSClient::ModifyDBSnapshotAttributeCallable(const ModifyDBSnapshotAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBSnapshotAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBSnapshotAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientModifyDBSnapshotAttributeAsyncHelper(RDSClient const * const clientThis, const ModifyDBSnapshotAttributeRequest& request, const ModifyDBSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyDBSnapshotAttribute(request), context);
}

void RDSClient::ModifyDBSnapshotAttributeAsync(const ModifyDBSnapshotAttributeRequest& request, const ModifyDBSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientModifyDBSnapshotAttributeAsyncHelper( this, request, handler, context ); } );
}

ModifyDBSubnetGroupOutcome RDSClient::ModifyDBSubnetGroup(const ModifyDBSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyDBSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBSubnetGroupOutcomeCallable RDSClient::ModifyDBSubnetGroupCallable(const ModifyDBSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientModifyDBSubnetGroupAsyncHelper(RDSClient const * const clientThis, const ModifyDBSubnetGroupRequest& request, const ModifyDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyDBSubnetGroup(request), context);
}

void RDSClient::ModifyDBSubnetGroupAsync(const ModifyDBSubnetGroupRequest& request, const ModifyDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientModifyDBSubnetGroupAsyncHelper( this, request, handler, context ); } );
}

ModifyEventSubscriptionOutcome RDSClient::ModifyEventSubscription(const ModifyEventSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyEventSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyEventSubscriptionOutcomeCallable RDSClient::ModifyEventSubscriptionCallable(const ModifyEventSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyEventSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyEventSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientModifyEventSubscriptionAsyncHelper(RDSClient const * const clientThis, const ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyEventSubscription(request), context);
}

void RDSClient::ModifyEventSubscriptionAsync(const ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientModifyEventSubscriptionAsyncHelper( this, request, handler, context ); } );
}

ModifyGlobalClusterOutcome RDSClient::ModifyGlobalCluster(const ModifyGlobalClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyGlobalClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyGlobalClusterOutcomeCallable RDSClient::ModifyGlobalClusterCallable(const ModifyGlobalClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyGlobalClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyGlobalCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientModifyGlobalClusterAsyncHelper(RDSClient const * const clientThis, const ModifyGlobalClusterRequest& request, const ModifyGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyGlobalCluster(request), context);
}

void RDSClient::ModifyGlobalClusterAsync(const ModifyGlobalClusterRequest& request, const ModifyGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientModifyGlobalClusterAsyncHelper( this, request, handler, context ); } );
}

ModifyOptionGroupOutcome RDSClient::ModifyOptionGroup(const ModifyOptionGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyOptionGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyOptionGroupOutcomeCallable RDSClient::ModifyOptionGroupCallable(const ModifyOptionGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyOptionGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyOptionGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientModifyOptionGroupAsyncHelper(RDSClient const * const clientThis, const ModifyOptionGroupRequest& request, const ModifyOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyOptionGroup(request), context);
}

void RDSClient::ModifyOptionGroupAsync(const ModifyOptionGroupRequest& request, const ModifyOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientModifyOptionGroupAsyncHelper( this, request, handler, context ); } );
}

PromoteReadReplicaOutcome RDSClient::PromoteReadReplica(const PromoteReadReplicaRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PromoteReadReplicaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PromoteReadReplicaOutcomeCallable RDSClient::PromoteReadReplicaCallable(const PromoteReadReplicaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PromoteReadReplicaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PromoteReadReplica(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientPromoteReadReplicaAsyncHelper(RDSClient const * const clientThis, const PromoteReadReplicaRequest& request, const PromoteReadReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PromoteReadReplica(request), context);
}

void RDSClient::PromoteReadReplicaAsync(const PromoteReadReplicaRequest& request, const PromoteReadReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientPromoteReadReplicaAsyncHelper( this, request, handler, context ); } );
}

PromoteReadReplicaDBClusterOutcome RDSClient::PromoteReadReplicaDBCluster(const PromoteReadReplicaDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PromoteReadReplicaDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PromoteReadReplicaDBClusterOutcomeCallable RDSClient::PromoteReadReplicaDBClusterCallable(const PromoteReadReplicaDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PromoteReadReplicaDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PromoteReadReplicaDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientPromoteReadReplicaDBClusterAsyncHelper(RDSClient const * const clientThis, const PromoteReadReplicaDBClusterRequest& request, const PromoteReadReplicaDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PromoteReadReplicaDBCluster(request), context);
}

void RDSClient::PromoteReadReplicaDBClusterAsync(const PromoteReadReplicaDBClusterRequest& request, const PromoteReadReplicaDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientPromoteReadReplicaDBClusterAsyncHelper( this, request, handler, context ); } );
}

PurchaseReservedDBInstancesOfferingOutcome RDSClient::PurchaseReservedDBInstancesOffering(const PurchaseReservedDBInstancesOfferingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PurchaseReservedDBInstancesOfferingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PurchaseReservedDBInstancesOfferingOutcomeCallable RDSClient::PurchaseReservedDBInstancesOfferingCallable(const PurchaseReservedDBInstancesOfferingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PurchaseReservedDBInstancesOfferingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PurchaseReservedDBInstancesOffering(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientPurchaseReservedDBInstancesOfferingAsyncHelper(RDSClient const * const clientThis, const PurchaseReservedDBInstancesOfferingRequest& request, const PurchaseReservedDBInstancesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PurchaseReservedDBInstancesOffering(request), context);
}

void RDSClient::PurchaseReservedDBInstancesOfferingAsync(const PurchaseReservedDBInstancesOfferingRequest& request, const PurchaseReservedDBInstancesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientPurchaseReservedDBInstancesOfferingAsyncHelper( this, request, handler, context ); } );
}

RebootDBClusterOutcome RDSClient::RebootDBCluster(const RebootDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RebootDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RebootDBClusterOutcomeCallable RDSClient::RebootDBClusterCallable(const RebootDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebootDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebootDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientRebootDBClusterAsyncHelper(RDSClient const * const clientThis, const RebootDBClusterRequest& request, const RebootDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RebootDBCluster(request), context);
}

void RDSClient::RebootDBClusterAsync(const RebootDBClusterRequest& request, const RebootDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientRebootDBClusterAsyncHelper( this, request, handler, context ); } );
}

RebootDBInstanceOutcome RDSClient::RebootDBInstance(const RebootDBInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RebootDBInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RebootDBInstanceOutcomeCallable RDSClient::RebootDBInstanceCallable(const RebootDBInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebootDBInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebootDBInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientRebootDBInstanceAsyncHelper(RDSClient const * const clientThis, const RebootDBInstanceRequest& request, const RebootDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RebootDBInstance(request), context);
}

void RDSClient::RebootDBInstanceAsync(const RebootDBInstanceRequest& request, const RebootDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientRebootDBInstanceAsyncHelper( this, request, handler, context ); } );
}

RegisterDBProxyTargetsOutcome RDSClient::RegisterDBProxyTargets(const RegisterDBProxyTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterDBProxyTargetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RegisterDBProxyTargetsOutcomeCallable RDSClient::RegisterDBProxyTargetsCallable(const RegisterDBProxyTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterDBProxyTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterDBProxyTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientRegisterDBProxyTargetsAsyncHelper(RDSClient const * const clientThis, const RegisterDBProxyTargetsRequest& request, const RegisterDBProxyTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterDBProxyTargets(request), context);
}

void RDSClient::RegisterDBProxyTargetsAsync(const RegisterDBProxyTargetsRequest& request, const RegisterDBProxyTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientRegisterDBProxyTargetsAsyncHelper( this, request, handler, context ); } );
}

RemoveFromGlobalClusterOutcome RDSClient::RemoveFromGlobalCluster(const RemoveFromGlobalClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveFromGlobalClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RemoveFromGlobalClusterOutcomeCallable RDSClient::RemoveFromGlobalClusterCallable(const RemoveFromGlobalClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveFromGlobalClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveFromGlobalCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientRemoveFromGlobalClusterAsyncHelper(RDSClient const * const clientThis, const RemoveFromGlobalClusterRequest& request, const RemoveFromGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveFromGlobalCluster(request), context);
}

void RDSClient::RemoveFromGlobalClusterAsync(const RemoveFromGlobalClusterRequest& request, const RemoveFromGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientRemoveFromGlobalClusterAsyncHelper( this, request, handler, context ); } );
}

RemoveRoleFromDBClusterOutcome RDSClient::RemoveRoleFromDBCluster(const RemoveRoleFromDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveRoleFromDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RemoveRoleFromDBClusterOutcomeCallable RDSClient::RemoveRoleFromDBClusterCallable(const RemoveRoleFromDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveRoleFromDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveRoleFromDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientRemoveRoleFromDBClusterAsyncHelper(RDSClient const * const clientThis, const RemoveRoleFromDBClusterRequest& request, const RemoveRoleFromDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveRoleFromDBCluster(request), context);
}

void RDSClient::RemoveRoleFromDBClusterAsync(const RemoveRoleFromDBClusterRequest& request, const RemoveRoleFromDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientRemoveRoleFromDBClusterAsyncHelper( this, request, handler, context ); } );
}

RemoveRoleFromDBInstanceOutcome RDSClient::RemoveRoleFromDBInstance(const RemoveRoleFromDBInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveRoleFromDBInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RemoveRoleFromDBInstanceOutcomeCallable RDSClient::RemoveRoleFromDBInstanceCallable(const RemoveRoleFromDBInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveRoleFromDBInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveRoleFromDBInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientRemoveRoleFromDBInstanceAsyncHelper(RDSClient const * const clientThis, const RemoveRoleFromDBInstanceRequest& request, const RemoveRoleFromDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveRoleFromDBInstance(request), context);
}

void RDSClient::RemoveRoleFromDBInstanceAsync(const RemoveRoleFromDBInstanceRequest& request, const RemoveRoleFromDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientRemoveRoleFromDBInstanceAsyncHelper( this, request, handler, context ); } );
}

RemoveSourceIdentifierFromSubscriptionOutcome RDSClient::RemoveSourceIdentifierFromSubscription(const RemoveSourceIdentifierFromSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveSourceIdentifierFromSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RemoveSourceIdentifierFromSubscriptionOutcomeCallable RDSClient::RemoveSourceIdentifierFromSubscriptionCallable(const RemoveSourceIdentifierFromSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveSourceIdentifierFromSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveSourceIdentifierFromSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientRemoveSourceIdentifierFromSubscriptionAsyncHelper(RDSClient const * const clientThis, const RemoveSourceIdentifierFromSubscriptionRequest& request, const RemoveSourceIdentifierFromSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveSourceIdentifierFromSubscription(request), context);
}

void RDSClient::RemoveSourceIdentifierFromSubscriptionAsync(const RemoveSourceIdentifierFromSubscriptionRequest& request, const RemoveSourceIdentifierFromSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientRemoveSourceIdentifierFromSubscriptionAsyncHelper( this, request, handler, context ); } );
}

RemoveTagsFromResourceOutcome RDSClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveTagsFromResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RemoveTagsFromResourceOutcomeCallable RDSClient::RemoveTagsFromResourceCallable(const RemoveTagsFromResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsFromResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTagsFromResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientRemoveTagsFromResourceAsyncHelper(RDSClient const * const clientThis, const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveTagsFromResource(request), context);
}

void RDSClient::RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientRemoveTagsFromResourceAsyncHelper( this, request, handler, context ); } );
}

ResetDBClusterParameterGroupOutcome RDSClient::ResetDBClusterParameterGroup(const ResetDBClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ResetDBClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ResetDBClusterParameterGroupOutcomeCallable RDSClient::ResetDBClusterParameterGroupCallable(const ResetDBClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetDBClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetDBClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientResetDBClusterParameterGroupAsyncHelper(RDSClient const * const clientThis, const ResetDBClusterParameterGroupRequest& request, const ResetDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ResetDBClusterParameterGroup(request), context);
}

void RDSClient::ResetDBClusterParameterGroupAsync(const ResetDBClusterParameterGroupRequest& request, const ResetDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientResetDBClusterParameterGroupAsyncHelper( this, request, handler, context ); } );
}

ResetDBParameterGroupOutcome RDSClient::ResetDBParameterGroup(const ResetDBParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ResetDBParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ResetDBParameterGroupOutcomeCallable RDSClient::ResetDBParameterGroupCallable(const ResetDBParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetDBParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetDBParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientResetDBParameterGroupAsyncHelper(RDSClient const * const clientThis, const ResetDBParameterGroupRequest& request, const ResetDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ResetDBParameterGroup(request), context);
}

void RDSClient::ResetDBParameterGroupAsync(const ResetDBParameterGroupRequest& request, const ResetDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientResetDBParameterGroupAsyncHelper( this, request, handler, context ); } );
}

RestoreDBClusterFromS3Outcome RDSClient::RestoreDBClusterFromS3(const RestoreDBClusterFromS3Request& request) const
{
  Aws::Http::URI uri = m_uri;
  return RestoreDBClusterFromS3Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RestoreDBClusterFromS3OutcomeCallable RDSClient::RestoreDBClusterFromS3Callable(const RestoreDBClusterFromS3Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreDBClusterFromS3Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreDBClusterFromS3(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientRestoreDBClusterFromS3AsyncHelper(RDSClient const * const clientThis, const RestoreDBClusterFromS3Request& request, const RestoreDBClusterFromS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RestoreDBClusterFromS3(request), context);
}

void RDSClient::RestoreDBClusterFromS3Async(const RestoreDBClusterFromS3Request& request, const RestoreDBClusterFromS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientRestoreDBClusterFromS3AsyncHelper( this, request, handler, context ); } );
}

RestoreDBClusterFromSnapshotOutcome RDSClient::RestoreDBClusterFromSnapshot(const RestoreDBClusterFromSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RestoreDBClusterFromSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RestoreDBClusterFromSnapshotOutcomeCallable RDSClient::RestoreDBClusterFromSnapshotCallable(const RestoreDBClusterFromSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreDBClusterFromSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreDBClusterFromSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientRestoreDBClusterFromSnapshotAsyncHelper(RDSClient const * const clientThis, const RestoreDBClusterFromSnapshotRequest& request, const RestoreDBClusterFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RestoreDBClusterFromSnapshot(request), context);
}

void RDSClient::RestoreDBClusterFromSnapshotAsync(const RestoreDBClusterFromSnapshotRequest& request, const RestoreDBClusterFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientRestoreDBClusterFromSnapshotAsyncHelper( this, request, handler, context ); } );
}

RestoreDBClusterToPointInTimeOutcome RDSClient::RestoreDBClusterToPointInTime(const RestoreDBClusterToPointInTimeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RestoreDBClusterToPointInTimeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RestoreDBClusterToPointInTimeOutcomeCallable RDSClient::RestoreDBClusterToPointInTimeCallable(const RestoreDBClusterToPointInTimeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreDBClusterToPointInTimeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreDBClusterToPointInTime(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientRestoreDBClusterToPointInTimeAsyncHelper(RDSClient const * const clientThis, const RestoreDBClusterToPointInTimeRequest& request, const RestoreDBClusterToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RestoreDBClusterToPointInTime(request), context);
}

void RDSClient::RestoreDBClusterToPointInTimeAsync(const RestoreDBClusterToPointInTimeRequest& request, const RestoreDBClusterToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientRestoreDBClusterToPointInTimeAsyncHelper( this, request, handler, context ); } );
}

RestoreDBInstanceFromDBSnapshotOutcome RDSClient::RestoreDBInstanceFromDBSnapshot(const RestoreDBInstanceFromDBSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RestoreDBInstanceFromDBSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RestoreDBInstanceFromDBSnapshotOutcomeCallable RDSClient::RestoreDBInstanceFromDBSnapshotCallable(const RestoreDBInstanceFromDBSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreDBInstanceFromDBSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreDBInstanceFromDBSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientRestoreDBInstanceFromDBSnapshotAsyncHelper(RDSClient const * const clientThis, const RestoreDBInstanceFromDBSnapshotRequest& request, const RestoreDBInstanceFromDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RestoreDBInstanceFromDBSnapshot(request), context);
}

void RDSClient::RestoreDBInstanceFromDBSnapshotAsync(const RestoreDBInstanceFromDBSnapshotRequest& request, const RestoreDBInstanceFromDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientRestoreDBInstanceFromDBSnapshotAsyncHelper( this, request, handler, context ); } );
}

RestoreDBInstanceFromS3Outcome RDSClient::RestoreDBInstanceFromS3(const RestoreDBInstanceFromS3Request& request) const
{
  Aws::Http::URI uri = m_uri;
  return RestoreDBInstanceFromS3Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RestoreDBInstanceFromS3OutcomeCallable RDSClient::RestoreDBInstanceFromS3Callable(const RestoreDBInstanceFromS3Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreDBInstanceFromS3Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreDBInstanceFromS3(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientRestoreDBInstanceFromS3AsyncHelper(RDSClient const * const clientThis, const RestoreDBInstanceFromS3Request& request, const RestoreDBInstanceFromS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RestoreDBInstanceFromS3(request), context);
}

void RDSClient::RestoreDBInstanceFromS3Async(const RestoreDBInstanceFromS3Request& request, const RestoreDBInstanceFromS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientRestoreDBInstanceFromS3AsyncHelper( this, request, handler, context ); } );
}

RestoreDBInstanceToPointInTimeOutcome RDSClient::RestoreDBInstanceToPointInTime(const RestoreDBInstanceToPointInTimeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RestoreDBInstanceToPointInTimeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RestoreDBInstanceToPointInTimeOutcomeCallable RDSClient::RestoreDBInstanceToPointInTimeCallable(const RestoreDBInstanceToPointInTimeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreDBInstanceToPointInTimeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreDBInstanceToPointInTime(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientRestoreDBInstanceToPointInTimeAsyncHelper(RDSClient const * const clientThis, const RestoreDBInstanceToPointInTimeRequest& request, const RestoreDBInstanceToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RestoreDBInstanceToPointInTime(request), context);
}

void RDSClient::RestoreDBInstanceToPointInTimeAsync(const RestoreDBInstanceToPointInTimeRequest& request, const RestoreDBInstanceToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientRestoreDBInstanceToPointInTimeAsyncHelper( this, request, handler, context ); } );
}

RevokeDBSecurityGroupIngressOutcome RDSClient::RevokeDBSecurityGroupIngress(const RevokeDBSecurityGroupIngressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RevokeDBSecurityGroupIngressOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RevokeDBSecurityGroupIngressOutcomeCallable RDSClient::RevokeDBSecurityGroupIngressCallable(const RevokeDBSecurityGroupIngressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokeDBSecurityGroupIngressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokeDBSecurityGroupIngress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientRevokeDBSecurityGroupIngressAsyncHelper(RDSClient const * const clientThis, const RevokeDBSecurityGroupIngressRequest& request, const RevokeDBSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RevokeDBSecurityGroupIngress(request), context);
}

void RDSClient::RevokeDBSecurityGroupIngressAsync(const RevokeDBSecurityGroupIngressRequest& request, const RevokeDBSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientRevokeDBSecurityGroupIngressAsyncHelper( this, request, handler, context ); } );
}

StartActivityStreamOutcome RDSClient::StartActivityStream(const StartActivityStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartActivityStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

StartActivityStreamOutcomeCallable RDSClient::StartActivityStreamCallable(const StartActivityStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartActivityStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartActivityStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientStartActivityStreamAsyncHelper(RDSClient const * const clientThis, const StartActivityStreamRequest& request, const StartActivityStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartActivityStream(request), context);
}

void RDSClient::StartActivityStreamAsync(const StartActivityStreamRequest& request, const StartActivityStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientStartActivityStreamAsyncHelper( this, request, handler, context ); } );
}

StartDBClusterOutcome RDSClient::StartDBCluster(const StartDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

StartDBClusterOutcomeCallable RDSClient::StartDBClusterCallable(const StartDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientStartDBClusterAsyncHelper(RDSClient const * const clientThis, const StartDBClusterRequest& request, const StartDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartDBCluster(request), context);
}

void RDSClient::StartDBClusterAsync(const StartDBClusterRequest& request, const StartDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientStartDBClusterAsyncHelper( this, request, handler, context ); } );
}

StartDBInstanceOutcome RDSClient::StartDBInstance(const StartDBInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartDBInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

StartDBInstanceOutcomeCallable RDSClient::StartDBInstanceCallable(const StartDBInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDBInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDBInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientStartDBInstanceAsyncHelper(RDSClient const * const clientThis, const StartDBInstanceRequest& request, const StartDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartDBInstance(request), context);
}

void RDSClient::StartDBInstanceAsync(const StartDBInstanceRequest& request, const StartDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientStartDBInstanceAsyncHelper( this, request, handler, context ); } );
}

StartDBInstanceAutomatedBackupsReplicationOutcome RDSClient::StartDBInstanceAutomatedBackupsReplication(const StartDBInstanceAutomatedBackupsReplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  StartDBInstanceAutomatedBackupsReplicationRequest newRequest = request;
  if (request.SourceRegionHasBeenSet() && !request.PreSignedUrlHasBeenSet())
  {
    Aws::Http::URI sourceUri(m_configScheme + "://" + RDSEndpoint::ForRegion(request.GetSourceRegion(), m_useDualStack));
    newRequest.SetPreSignedUrl(GeneratePresignedUrl(request, sourceUri, Aws::Http::HttpMethod::HTTP_GET, request.GetSourceRegion().c_str(), {{ "DestinationRegion", m_region }}, 3600));
  }
  return StartDBInstanceAutomatedBackupsReplicationOutcome(MakeRequest(uri, newRequest, Aws::Http::HttpMethod::HTTP_POST));
}

StartDBInstanceAutomatedBackupsReplicationOutcomeCallable RDSClient::StartDBInstanceAutomatedBackupsReplicationCallable(const StartDBInstanceAutomatedBackupsReplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDBInstanceAutomatedBackupsReplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDBInstanceAutomatedBackupsReplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientStartDBInstanceAutomatedBackupsReplicationAsyncHelper(RDSClient const * const clientThis, const StartDBInstanceAutomatedBackupsReplicationRequest& request, const StartDBInstanceAutomatedBackupsReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartDBInstanceAutomatedBackupsReplication(request), context);
}

void RDSClient::StartDBInstanceAutomatedBackupsReplicationAsync(const StartDBInstanceAutomatedBackupsReplicationRequest& request, const StartDBInstanceAutomatedBackupsReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientStartDBInstanceAutomatedBackupsReplicationAsyncHelper( this, request, handler, context ); } );
}

StartExportTaskOutcome RDSClient::StartExportTask(const StartExportTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartExportTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

StartExportTaskOutcomeCallable RDSClient::StartExportTaskCallable(const StartExportTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartExportTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartExportTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientStartExportTaskAsyncHelper(RDSClient const * const clientThis, const StartExportTaskRequest& request, const StartExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartExportTask(request), context);
}

void RDSClient::StartExportTaskAsync(const StartExportTaskRequest& request, const StartExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientStartExportTaskAsyncHelper( this, request, handler, context ); } );
}

StopActivityStreamOutcome RDSClient::StopActivityStream(const StopActivityStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopActivityStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

StopActivityStreamOutcomeCallable RDSClient::StopActivityStreamCallable(const StopActivityStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopActivityStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopActivityStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientStopActivityStreamAsyncHelper(RDSClient const * const clientThis, const StopActivityStreamRequest& request, const StopActivityStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopActivityStream(request), context);
}

void RDSClient::StopActivityStreamAsync(const StopActivityStreamRequest& request, const StopActivityStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientStopActivityStreamAsyncHelper( this, request, handler, context ); } );
}

StopDBClusterOutcome RDSClient::StopDBCluster(const StopDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

StopDBClusterOutcomeCallable RDSClient::StopDBClusterCallable(const StopDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientStopDBClusterAsyncHelper(RDSClient const * const clientThis, const StopDBClusterRequest& request, const StopDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopDBCluster(request), context);
}

void RDSClient::StopDBClusterAsync(const StopDBClusterRequest& request, const StopDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientStopDBClusterAsyncHelper( this, request, handler, context ); } );
}

StopDBInstanceOutcome RDSClient::StopDBInstance(const StopDBInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopDBInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

StopDBInstanceOutcomeCallable RDSClient::StopDBInstanceCallable(const StopDBInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopDBInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopDBInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientStopDBInstanceAsyncHelper(RDSClient const * const clientThis, const StopDBInstanceRequest& request, const StopDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopDBInstance(request), context);
}

void RDSClient::StopDBInstanceAsync(const StopDBInstanceRequest& request, const StopDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientStopDBInstanceAsyncHelper( this, request, handler, context ); } );
}

StopDBInstanceAutomatedBackupsReplicationOutcome RDSClient::StopDBInstanceAutomatedBackupsReplication(const StopDBInstanceAutomatedBackupsReplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopDBInstanceAutomatedBackupsReplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

StopDBInstanceAutomatedBackupsReplicationOutcomeCallable RDSClient::StopDBInstanceAutomatedBackupsReplicationCallable(const StopDBInstanceAutomatedBackupsReplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopDBInstanceAutomatedBackupsReplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopDBInstanceAutomatedBackupsReplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientStopDBInstanceAutomatedBackupsReplicationAsyncHelper(RDSClient const * const clientThis, const StopDBInstanceAutomatedBackupsReplicationRequest& request, const StopDBInstanceAutomatedBackupsReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopDBInstanceAutomatedBackupsReplication(request), context);
}

void RDSClient::StopDBInstanceAutomatedBackupsReplicationAsync(const StopDBInstanceAutomatedBackupsReplicationRequest& request, const StopDBInstanceAutomatedBackupsReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientStopDBInstanceAutomatedBackupsReplicationAsyncHelper( this, request, handler, context ); } );
}

SwitchoverReadReplicaOutcome RDSClient::SwitchoverReadReplica(const SwitchoverReadReplicaRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SwitchoverReadReplicaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SwitchoverReadReplicaOutcomeCallable RDSClient::SwitchoverReadReplicaCallable(const SwitchoverReadReplicaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SwitchoverReadReplicaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SwitchoverReadReplica(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClientSwitchoverReadReplicaAsyncHelper(RDSClient const * const clientThis, const SwitchoverReadReplicaRequest& request, const SwitchoverReadReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SwitchoverReadReplica(request), context);
}

void RDSClient::SwitchoverReadReplicaAsync(const SwitchoverReadReplicaRequest& request, const SwitchoverReadReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RDSClientSwitchoverReadReplicaAsyncHelper( this, request, handler, context ); } );
}

Aws::String RDSClient::GenerateConnectAuthToken(const char* dbHostName, const char* dbRegion, unsigned port, const char* dbUserName) const
{
    Aws::StringStream ss;
    ss << "http://" << dbHostName << ":" << port;
    URI uri(ss.str());
    uri.AddQueryStringParameter("Action", "connect");
    uri.AddQueryStringParameter("DBUser", dbUserName);
    auto url = GeneratePresignedUrl(uri, Aws::Http::HttpMethod::HTTP_GET, dbRegion, "rds-db", 900/*15 minutes*/);
    Aws::Utils::StringUtils::Replace(url, "http://", "");

    return url;
}
