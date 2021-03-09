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
#include <aws/rds/model/CreateCustomAvailabilityZoneRequest.h>
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
#include <aws/rds/model/DeleteCustomAvailabilityZoneRequest.h>
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
#include <aws/rds/model/DeleteInstallationMediaRequest.h>
#include <aws/rds/model/DeleteOptionGroupRequest.h>
#include <aws/rds/model/DeregisterDBProxyTargetsRequest.h>
#include <aws/rds/model/DescribeAccountAttributesRequest.h>
#include <aws/rds/model/DescribeCertificatesRequest.h>
#include <aws/rds/model/DescribeCustomAvailabilityZonesRequest.h>
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
#include <aws/rds/model/DescribeInstallationMediaRequest.h>
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
#include <aws/rds/model/ImportInstallationMediaRequest.h>
#include <aws/rds/model/ListTagsForResourceRequest.h>
#include <aws/rds/model/ModifyCertificatesRequest.h>
#include <aws/rds/model/ModifyCurrentDBClusterCapacityRequest.h>
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<RDSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RDSClient::RDSClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<RDSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RDSClient::RDSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<RDSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RDSClient::~RDSClient()
{
}

void RDSClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("RDS");
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
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return AddRoleToDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AddRoleToDBClusterOutcomeCallable RDSClient::AddRoleToDBClusterCallable(const AddRoleToDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddRoleToDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddRoleToDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::AddRoleToDBClusterAsync(const AddRoleToDBClusterRequest& request, const AddRoleToDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddRoleToDBClusterAsyncHelper( request, handler, context ); } );
}

void RDSClient::AddRoleToDBClusterAsyncHelper(const AddRoleToDBClusterRequest& request, const AddRoleToDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddRoleToDBCluster(request), context);
}

AddRoleToDBInstanceOutcome RDSClient::AddRoleToDBInstance(const AddRoleToDBInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return AddRoleToDBInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AddRoleToDBInstanceOutcomeCallable RDSClient::AddRoleToDBInstanceCallable(const AddRoleToDBInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddRoleToDBInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddRoleToDBInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::AddRoleToDBInstanceAsync(const AddRoleToDBInstanceRequest& request, const AddRoleToDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddRoleToDBInstanceAsyncHelper( request, handler, context ); } );
}

void RDSClient::AddRoleToDBInstanceAsyncHelper(const AddRoleToDBInstanceRequest& request, const AddRoleToDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddRoleToDBInstance(request), context);
}

AddSourceIdentifierToSubscriptionOutcome RDSClient::AddSourceIdentifierToSubscription(const AddSourceIdentifierToSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return AddSourceIdentifierToSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AddSourceIdentifierToSubscriptionOutcomeCallable RDSClient::AddSourceIdentifierToSubscriptionCallable(const AddSourceIdentifierToSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddSourceIdentifierToSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddSourceIdentifierToSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::AddSourceIdentifierToSubscriptionAsync(const AddSourceIdentifierToSubscriptionRequest& request, const AddSourceIdentifierToSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddSourceIdentifierToSubscriptionAsyncHelper( request, handler, context ); } );
}

void RDSClient::AddSourceIdentifierToSubscriptionAsyncHelper(const AddSourceIdentifierToSubscriptionRequest& request, const AddSourceIdentifierToSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddSourceIdentifierToSubscription(request), context);
}

AddTagsToResourceOutcome RDSClient::AddTagsToResource(const AddTagsToResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return AddTagsToResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AddTagsToResourceOutcomeCallable RDSClient::AddTagsToResourceCallable(const AddTagsToResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsToResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTagsToResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::AddTagsToResourceAsync(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddTagsToResourceAsyncHelper( request, handler, context ); } );
}

void RDSClient::AddTagsToResourceAsyncHelper(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTagsToResource(request), context);
}

ApplyPendingMaintenanceActionOutcome RDSClient::ApplyPendingMaintenanceAction(const ApplyPendingMaintenanceActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ApplyPendingMaintenanceActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ApplyPendingMaintenanceActionOutcomeCallable RDSClient::ApplyPendingMaintenanceActionCallable(const ApplyPendingMaintenanceActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ApplyPendingMaintenanceActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ApplyPendingMaintenanceAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::ApplyPendingMaintenanceActionAsync(const ApplyPendingMaintenanceActionRequest& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ApplyPendingMaintenanceActionAsyncHelper( request, handler, context ); } );
}

void RDSClient::ApplyPendingMaintenanceActionAsyncHelper(const ApplyPendingMaintenanceActionRequest& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ApplyPendingMaintenanceAction(request), context);
}

AuthorizeDBSecurityGroupIngressOutcome RDSClient::AuthorizeDBSecurityGroupIngress(const AuthorizeDBSecurityGroupIngressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return AuthorizeDBSecurityGroupIngressOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AuthorizeDBSecurityGroupIngressOutcomeCallable RDSClient::AuthorizeDBSecurityGroupIngressCallable(const AuthorizeDBSecurityGroupIngressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AuthorizeDBSecurityGroupIngressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AuthorizeDBSecurityGroupIngress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::AuthorizeDBSecurityGroupIngressAsync(const AuthorizeDBSecurityGroupIngressRequest& request, const AuthorizeDBSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AuthorizeDBSecurityGroupIngressAsyncHelper( request, handler, context ); } );
}

void RDSClient::AuthorizeDBSecurityGroupIngressAsyncHelper(const AuthorizeDBSecurityGroupIngressRequest& request, const AuthorizeDBSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AuthorizeDBSecurityGroupIngress(request), context);
}

BacktrackDBClusterOutcome RDSClient::BacktrackDBCluster(const BacktrackDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return BacktrackDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

BacktrackDBClusterOutcomeCallable RDSClient::BacktrackDBClusterCallable(const BacktrackDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BacktrackDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BacktrackDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::BacktrackDBClusterAsync(const BacktrackDBClusterRequest& request, const BacktrackDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BacktrackDBClusterAsyncHelper( request, handler, context ); } );
}

void RDSClient::BacktrackDBClusterAsyncHelper(const BacktrackDBClusterRequest& request, const BacktrackDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BacktrackDBCluster(request), context);
}

CancelExportTaskOutcome RDSClient::CancelExportTask(const CancelExportTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CancelExportTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CancelExportTaskOutcomeCallable RDSClient::CancelExportTaskCallable(const CancelExportTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelExportTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelExportTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::CancelExportTaskAsync(const CancelExportTaskRequest& request, const CancelExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelExportTaskAsyncHelper( request, handler, context ); } );
}

void RDSClient::CancelExportTaskAsyncHelper(const CancelExportTaskRequest& request, const CancelExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelExportTask(request), context);
}

CopyDBClusterParameterGroupOutcome RDSClient::CopyDBClusterParameterGroup(const CopyDBClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CopyDBClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CopyDBClusterParameterGroupOutcomeCallable RDSClient::CopyDBClusterParameterGroupCallable(const CopyDBClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyDBClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyDBClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::CopyDBClusterParameterGroupAsync(const CopyDBClusterParameterGroupRequest& request, const CopyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CopyDBClusterParameterGroupAsyncHelper( request, handler, context ); } );
}

void RDSClient::CopyDBClusterParameterGroupAsyncHelper(const CopyDBClusterParameterGroupRequest& request, const CopyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CopyDBClusterParameterGroup(request), context);
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
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CopyDBClusterSnapshotOutcome(MakeRequest(uri, newRequest, Aws::Http::HttpMethod::HTTP_POST));
}

CopyDBClusterSnapshotOutcomeCallable RDSClient::CopyDBClusterSnapshotCallable(const CopyDBClusterSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyDBClusterSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyDBClusterSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::CopyDBClusterSnapshotAsync(const CopyDBClusterSnapshotRequest& request, const CopyDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CopyDBClusterSnapshotAsyncHelper( request, handler, context ); } );
}

void RDSClient::CopyDBClusterSnapshotAsyncHelper(const CopyDBClusterSnapshotRequest& request, const CopyDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CopyDBClusterSnapshot(request), context);
}

CopyDBParameterGroupOutcome RDSClient::CopyDBParameterGroup(const CopyDBParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CopyDBParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CopyDBParameterGroupOutcomeCallable RDSClient::CopyDBParameterGroupCallable(const CopyDBParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyDBParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyDBParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::CopyDBParameterGroupAsync(const CopyDBParameterGroupRequest& request, const CopyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CopyDBParameterGroupAsyncHelper( request, handler, context ); } );
}

void RDSClient::CopyDBParameterGroupAsyncHelper(const CopyDBParameterGroupRequest& request, const CopyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CopyDBParameterGroup(request), context);
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
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CopyDBSnapshotOutcome(MakeRequest(uri, newRequest, Aws::Http::HttpMethod::HTTP_POST));
}

CopyDBSnapshotOutcomeCallable RDSClient::CopyDBSnapshotCallable(const CopyDBSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyDBSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyDBSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::CopyDBSnapshotAsync(const CopyDBSnapshotRequest& request, const CopyDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CopyDBSnapshotAsyncHelper( request, handler, context ); } );
}

void RDSClient::CopyDBSnapshotAsyncHelper(const CopyDBSnapshotRequest& request, const CopyDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CopyDBSnapshot(request), context);
}

CopyOptionGroupOutcome RDSClient::CopyOptionGroup(const CopyOptionGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CopyOptionGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CopyOptionGroupOutcomeCallable RDSClient::CopyOptionGroupCallable(const CopyOptionGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyOptionGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyOptionGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::CopyOptionGroupAsync(const CopyOptionGroupRequest& request, const CopyOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CopyOptionGroupAsyncHelper( request, handler, context ); } );
}

void RDSClient::CopyOptionGroupAsyncHelper(const CopyOptionGroupRequest& request, const CopyOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CopyOptionGroup(request), context);
}

CreateCustomAvailabilityZoneOutcome RDSClient::CreateCustomAvailabilityZone(const CreateCustomAvailabilityZoneRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateCustomAvailabilityZoneOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateCustomAvailabilityZoneOutcomeCallable RDSClient::CreateCustomAvailabilityZoneCallable(const CreateCustomAvailabilityZoneRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCustomAvailabilityZoneOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCustomAvailabilityZone(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::CreateCustomAvailabilityZoneAsync(const CreateCustomAvailabilityZoneRequest& request, const CreateCustomAvailabilityZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCustomAvailabilityZoneAsyncHelper( request, handler, context ); } );
}

void RDSClient::CreateCustomAvailabilityZoneAsyncHelper(const CreateCustomAvailabilityZoneRequest& request, const CreateCustomAvailabilityZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCustomAvailabilityZone(request), context);
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
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateDBClusterOutcome(MakeRequest(uri, newRequest, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBClusterOutcomeCallable RDSClient::CreateDBClusterCallable(const CreateDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::CreateDBClusterAsync(const CreateDBClusterRequest& request, const CreateDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDBClusterAsyncHelper( request, handler, context ); } );
}

void RDSClient::CreateDBClusterAsyncHelper(const CreateDBClusterRequest& request, const CreateDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDBCluster(request), context);
}

CreateDBClusterEndpointOutcome RDSClient::CreateDBClusterEndpoint(const CreateDBClusterEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateDBClusterEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBClusterEndpointOutcomeCallable RDSClient::CreateDBClusterEndpointCallable(const CreateDBClusterEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBClusterEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBClusterEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::CreateDBClusterEndpointAsync(const CreateDBClusterEndpointRequest& request, const CreateDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDBClusterEndpointAsyncHelper( request, handler, context ); } );
}

void RDSClient::CreateDBClusterEndpointAsyncHelper(const CreateDBClusterEndpointRequest& request, const CreateDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDBClusterEndpoint(request), context);
}

CreateDBClusterParameterGroupOutcome RDSClient::CreateDBClusterParameterGroup(const CreateDBClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateDBClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBClusterParameterGroupOutcomeCallable RDSClient::CreateDBClusterParameterGroupCallable(const CreateDBClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::CreateDBClusterParameterGroupAsync(const CreateDBClusterParameterGroupRequest& request, const CreateDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDBClusterParameterGroupAsyncHelper( request, handler, context ); } );
}

void RDSClient::CreateDBClusterParameterGroupAsyncHelper(const CreateDBClusterParameterGroupRequest& request, const CreateDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDBClusterParameterGroup(request), context);
}

CreateDBClusterSnapshotOutcome RDSClient::CreateDBClusterSnapshot(const CreateDBClusterSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateDBClusterSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBClusterSnapshotOutcomeCallable RDSClient::CreateDBClusterSnapshotCallable(const CreateDBClusterSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBClusterSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBClusterSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::CreateDBClusterSnapshotAsync(const CreateDBClusterSnapshotRequest& request, const CreateDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDBClusterSnapshotAsyncHelper( request, handler, context ); } );
}

void RDSClient::CreateDBClusterSnapshotAsyncHelper(const CreateDBClusterSnapshotRequest& request, const CreateDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDBClusterSnapshot(request), context);
}

CreateDBInstanceOutcome RDSClient::CreateDBInstance(const CreateDBInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateDBInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBInstanceOutcomeCallable RDSClient::CreateDBInstanceCallable(const CreateDBInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::CreateDBInstanceAsync(const CreateDBInstanceRequest& request, const CreateDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDBInstanceAsyncHelper( request, handler, context ); } );
}

void RDSClient::CreateDBInstanceAsyncHelper(const CreateDBInstanceRequest& request, const CreateDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDBInstance(request), context);
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
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateDBInstanceReadReplicaOutcome(MakeRequest(uri, newRequest, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBInstanceReadReplicaOutcomeCallable RDSClient::CreateDBInstanceReadReplicaCallable(const CreateDBInstanceReadReplicaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBInstanceReadReplicaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBInstanceReadReplica(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::CreateDBInstanceReadReplicaAsync(const CreateDBInstanceReadReplicaRequest& request, const CreateDBInstanceReadReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDBInstanceReadReplicaAsyncHelper( request, handler, context ); } );
}

void RDSClient::CreateDBInstanceReadReplicaAsyncHelper(const CreateDBInstanceReadReplicaRequest& request, const CreateDBInstanceReadReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDBInstanceReadReplica(request), context);
}

CreateDBParameterGroupOutcome RDSClient::CreateDBParameterGroup(const CreateDBParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateDBParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBParameterGroupOutcomeCallable RDSClient::CreateDBParameterGroupCallable(const CreateDBParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::CreateDBParameterGroupAsync(const CreateDBParameterGroupRequest& request, const CreateDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDBParameterGroupAsyncHelper( request, handler, context ); } );
}

void RDSClient::CreateDBParameterGroupAsyncHelper(const CreateDBParameterGroupRequest& request, const CreateDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDBParameterGroup(request), context);
}

CreateDBProxyOutcome RDSClient::CreateDBProxy(const CreateDBProxyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateDBProxyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBProxyOutcomeCallable RDSClient::CreateDBProxyCallable(const CreateDBProxyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBProxyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBProxy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::CreateDBProxyAsync(const CreateDBProxyRequest& request, const CreateDBProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDBProxyAsyncHelper( request, handler, context ); } );
}

void RDSClient::CreateDBProxyAsyncHelper(const CreateDBProxyRequest& request, const CreateDBProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDBProxy(request), context);
}

CreateDBProxyEndpointOutcome RDSClient::CreateDBProxyEndpoint(const CreateDBProxyEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateDBProxyEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBProxyEndpointOutcomeCallable RDSClient::CreateDBProxyEndpointCallable(const CreateDBProxyEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBProxyEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBProxyEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::CreateDBProxyEndpointAsync(const CreateDBProxyEndpointRequest& request, const CreateDBProxyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDBProxyEndpointAsyncHelper( request, handler, context ); } );
}

void RDSClient::CreateDBProxyEndpointAsyncHelper(const CreateDBProxyEndpointRequest& request, const CreateDBProxyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDBProxyEndpoint(request), context);
}

CreateDBSecurityGroupOutcome RDSClient::CreateDBSecurityGroup(const CreateDBSecurityGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateDBSecurityGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBSecurityGroupOutcomeCallable RDSClient::CreateDBSecurityGroupCallable(const CreateDBSecurityGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBSecurityGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBSecurityGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::CreateDBSecurityGroupAsync(const CreateDBSecurityGroupRequest& request, const CreateDBSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDBSecurityGroupAsyncHelper( request, handler, context ); } );
}

void RDSClient::CreateDBSecurityGroupAsyncHelper(const CreateDBSecurityGroupRequest& request, const CreateDBSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDBSecurityGroup(request), context);
}

CreateDBSnapshotOutcome RDSClient::CreateDBSnapshot(const CreateDBSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateDBSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBSnapshotOutcomeCallable RDSClient::CreateDBSnapshotCallable(const CreateDBSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::CreateDBSnapshotAsync(const CreateDBSnapshotRequest& request, const CreateDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDBSnapshotAsyncHelper( request, handler, context ); } );
}

void RDSClient::CreateDBSnapshotAsyncHelper(const CreateDBSnapshotRequest& request, const CreateDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDBSnapshot(request), context);
}

CreateDBSubnetGroupOutcome RDSClient::CreateDBSubnetGroup(const CreateDBSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateDBSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDBSubnetGroupOutcomeCallable RDSClient::CreateDBSubnetGroupCallable(const CreateDBSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDBSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDBSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::CreateDBSubnetGroupAsync(const CreateDBSubnetGroupRequest& request, const CreateDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDBSubnetGroupAsyncHelper( request, handler, context ); } );
}

void RDSClient::CreateDBSubnetGroupAsyncHelper(const CreateDBSubnetGroupRequest& request, const CreateDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDBSubnetGroup(request), context);
}

CreateEventSubscriptionOutcome RDSClient::CreateEventSubscription(const CreateEventSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateEventSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateEventSubscriptionOutcomeCallable RDSClient::CreateEventSubscriptionCallable(const CreateEventSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEventSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEventSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::CreateEventSubscriptionAsync(const CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateEventSubscriptionAsyncHelper( request, handler, context ); } );
}

void RDSClient::CreateEventSubscriptionAsyncHelper(const CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateEventSubscription(request), context);
}

CreateGlobalClusterOutcome RDSClient::CreateGlobalCluster(const CreateGlobalClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateGlobalClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateGlobalClusterOutcomeCallable RDSClient::CreateGlobalClusterCallable(const CreateGlobalClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGlobalClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGlobalCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::CreateGlobalClusterAsync(const CreateGlobalClusterRequest& request, const CreateGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateGlobalClusterAsyncHelper( request, handler, context ); } );
}

void RDSClient::CreateGlobalClusterAsyncHelper(const CreateGlobalClusterRequest& request, const CreateGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateGlobalCluster(request), context);
}

CreateOptionGroupOutcome RDSClient::CreateOptionGroup(const CreateOptionGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateOptionGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateOptionGroupOutcomeCallable RDSClient::CreateOptionGroupCallable(const CreateOptionGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateOptionGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateOptionGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::CreateOptionGroupAsync(const CreateOptionGroupRequest& request, const CreateOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateOptionGroupAsyncHelper( request, handler, context ); } );
}

void RDSClient::CreateOptionGroupAsyncHelper(const CreateOptionGroupRequest& request, const CreateOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateOptionGroup(request), context);
}

DeleteCustomAvailabilityZoneOutcome RDSClient::DeleteCustomAvailabilityZone(const DeleteCustomAvailabilityZoneRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteCustomAvailabilityZoneOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteCustomAvailabilityZoneOutcomeCallable RDSClient::DeleteCustomAvailabilityZoneCallable(const DeleteCustomAvailabilityZoneRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCustomAvailabilityZoneOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCustomAvailabilityZone(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DeleteCustomAvailabilityZoneAsync(const DeleteCustomAvailabilityZoneRequest& request, const DeleteCustomAvailabilityZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCustomAvailabilityZoneAsyncHelper( request, handler, context ); } );
}

void RDSClient::DeleteCustomAvailabilityZoneAsyncHelper(const DeleteCustomAvailabilityZoneRequest& request, const DeleteCustomAvailabilityZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCustomAvailabilityZone(request), context);
}

DeleteDBClusterOutcome RDSClient::DeleteDBCluster(const DeleteDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBClusterOutcomeCallable RDSClient::DeleteDBClusterCallable(const DeleteDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DeleteDBClusterAsync(const DeleteDBClusterRequest& request, const DeleteDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDBClusterAsyncHelper( request, handler, context ); } );
}

void RDSClient::DeleteDBClusterAsyncHelper(const DeleteDBClusterRequest& request, const DeleteDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDBCluster(request), context);
}

DeleteDBClusterEndpointOutcome RDSClient::DeleteDBClusterEndpoint(const DeleteDBClusterEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteDBClusterEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBClusterEndpointOutcomeCallable RDSClient::DeleteDBClusterEndpointCallable(const DeleteDBClusterEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBClusterEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBClusterEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DeleteDBClusterEndpointAsync(const DeleteDBClusterEndpointRequest& request, const DeleteDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDBClusterEndpointAsyncHelper( request, handler, context ); } );
}

void RDSClient::DeleteDBClusterEndpointAsyncHelper(const DeleteDBClusterEndpointRequest& request, const DeleteDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDBClusterEndpoint(request), context);
}

DeleteDBClusterParameterGroupOutcome RDSClient::DeleteDBClusterParameterGroup(const DeleteDBClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteDBClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBClusterParameterGroupOutcomeCallable RDSClient::DeleteDBClusterParameterGroupCallable(const DeleteDBClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DeleteDBClusterParameterGroupAsync(const DeleteDBClusterParameterGroupRequest& request, const DeleteDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDBClusterParameterGroupAsyncHelper( request, handler, context ); } );
}

void RDSClient::DeleteDBClusterParameterGroupAsyncHelper(const DeleteDBClusterParameterGroupRequest& request, const DeleteDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDBClusterParameterGroup(request), context);
}

DeleteDBClusterSnapshotOutcome RDSClient::DeleteDBClusterSnapshot(const DeleteDBClusterSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteDBClusterSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBClusterSnapshotOutcomeCallable RDSClient::DeleteDBClusterSnapshotCallable(const DeleteDBClusterSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBClusterSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBClusterSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DeleteDBClusterSnapshotAsync(const DeleteDBClusterSnapshotRequest& request, const DeleteDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDBClusterSnapshotAsyncHelper( request, handler, context ); } );
}

void RDSClient::DeleteDBClusterSnapshotAsyncHelper(const DeleteDBClusterSnapshotRequest& request, const DeleteDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDBClusterSnapshot(request), context);
}

DeleteDBInstanceOutcome RDSClient::DeleteDBInstance(const DeleteDBInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteDBInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBInstanceOutcomeCallable RDSClient::DeleteDBInstanceCallable(const DeleteDBInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DeleteDBInstanceAsync(const DeleteDBInstanceRequest& request, const DeleteDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDBInstanceAsyncHelper( request, handler, context ); } );
}

void RDSClient::DeleteDBInstanceAsyncHelper(const DeleteDBInstanceRequest& request, const DeleteDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDBInstance(request), context);
}

DeleteDBInstanceAutomatedBackupOutcome RDSClient::DeleteDBInstanceAutomatedBackup(const DeleteDBInstanceAutomatedBackupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteDBInstanceAutomatedBackupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBInstanceAutomatedBackupOutcomeCallable RDSClient::DeleteDBInstanceAutomatedBackupCallable(const DeleteDBInstanceAutomatedBackupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBInstanceAutomatedBackupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBInstanceAutomatedBackup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DeleteDBInstanceAutomatedBackupAsync(const DeleteDBInstanceAutomatedBackupRequest& request, const DeleteDBInstanceAutomatedBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDBInstanceAutomatedBackupAsyncHelper( request, handler, context ); } );
}

void RDSClient::DeleteDBInstanceAutomatedBackupAsyncHelper(const DeleteDBInstanceAutomatedBackupRequest& request, const DeleteDBInstanceAutomatedBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDBInstanceAutomatedBackup(request), context);
}

DeleteDBParameterGroupOutcome RDSClient::DeleteDBParameterGroup(const DeleteDBParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteDBParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBParameterGroupOutcomeCallable RDSClient::DeleteDBParameterGroupCallable(const DeleteDBParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DeleteDBParameterGroupAsync(const DeleteDBParameterGroupRequest& request, const DeleteDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDBParameterGroupAsyncHelper( request, handler, context ); } );
}

void RDSClient::DeleteDBParameterGroupAsyncHelper(const DeleteDBParameterGroupRequest& request, const DeleteDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDBParameterGroup(request), context);
}

DeleteDBProxyOutcome RDSClient::DeleteDBProxy(const DeleteDBProxyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteDBProxyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBProxyOutcomeCallable RDSClient::DeleteDBProxyCallable(const DeleteDBProxyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBProxyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBProxy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DeleteDBProxyAsync(const DeleteDBProxyRequest& request, const DeleteDBProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDBProxyAsyncHelper( request, handler, context ); } );
}

void RDSClient::DeleteDBProxyAsyncHelper(const DeleteDBProxyRequest& request, const DeleteDBProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDBProxy(request), context);
}

DeleteDBProxyEndpointOutcome RDSClient::DeleteDBProxyEndpoint(const DeleteDBProxyEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteDBProxyEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBProxyEndpointOutcomeCallable RDSClient::DeleteDBProxyEndpointCallable(const DeleteDBProxyEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBProxyEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBProxyEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DeleteDBProxyEndpointAsync(const DeleteDBProxyEndpointRequest& request, const DeleteDBProxyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDBProxyEndpointAsyncHelper( request, handler, context ); } );
}

void RDSClient::DeleteDBProxyEndpointAsyncHelper(const DeleteDBProxyEndpointRequest& request, const DeleteDBProxyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDBProxyEndpoint(request), context);
}

DeleteDBSecurityGroupOutcome RDSClient::DeleteDBSecurityGroup(const DeleteDBSecurityGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteDBSecurityGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBSecurityGroupOutcomeCallable RDSClient::DeleteDBSecurityGroupCallable(const DeleteDBSecurityGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBSecurityGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBSecurityGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DeleteDBSecurityGroupAsync(const DeleteDBSecurityGroupRequest& request, const DeleteDBSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDBSecurityGroupAsyncHelper( request, handler, context ); } );
}

void RDSClient::DeleteDBSecurityGroupAsyncHelper(const DeleteDBSecurityGroupRequest& request, const DeleteDBSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDBSecurityGroup(request), context);
}

DeleteDBSnapshotOutcome RDSClient::DeleteDBSnapshot(const DeleteDBSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteDBSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBSnapshotOutcomeCallable RDSClient::DeleteDBSnapshotCallable(const DeleteDBSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DeleteDBSnapshotAsync(const DeleteDBSnapshotRequest& request, const DeleteDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDBSnapshotAsyncHelper( request, handler, context ); } );
}

void RDSClient::DeleteDBSnapshotAsyncHelper(const DeleteDBSnapshotRequest& request, const DeleteDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDBSnapshot(request), context);
}

DeleteDBSubnetGroupOutcome RDSClient::DeleteDBSubnetGroup(const DeleteDBSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteDBSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDBSubnetGroupOutcomeCallable RDSClient::DeleteDBSubnetGroupCallable(const DeleteDBSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDBSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDBSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DeleteDBSubnetGroupAsync(const DeleteDBSubnetGroupRequest& request, const DeleteDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDBSubnetGroupAsyncHelper( request, handler, context ); } );
}

void RDSClient::DeleteDBSubnetGroupAsyncHelper(const DeleteDBSubnetGroupRequest& request, const DeleteDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDBSubnetGroup(request), context);
}

DeleteEventSubscriptionOutcome RDSClient::DeleteEventSubscription(const DeleteEventSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteEventSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteEventSubscriptionOutcomeCallable RDSClient::DeleteEventSubscriptionCallable(const DeleteEventSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEventSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DeleteEventSubscriptionAsync(const DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEventSubscriptionAsyncHelper( request, handler, context ); } );
}

void RDSClient::DeleteEventSubscriptionAsyncHelper(const DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEventSubscription(request), context);
}

DeleteGlobalClusterOutcome RDSClient::DeleteGlobalCluster(const DeleteGlobalClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteGlobalClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteGlobalClusterOutcomeCallable RDSClient::DeleteGlobalClusterCallable(const DeleteGlobalClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGlobalClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGlobalCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DeleteGlobalClusterAsync(const DeleteGlobalClusterRequest& request, const DeleteGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteGlobalClusterAsyncHelper( request, handler, context ); } );
}

void RDSClient::DeleteGlobalClusterAsyncHelper(const DeleteGlobalClusterRequest& request, const DeleteGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteGlobalCluster(request), context);
}

DeleteInstallationMediaOutcome RDSClient::DeleteInstallationMedia(const DeleteInstallationMediaRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteInstallationMediaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteInstallationMediaOutcomeCallable RDSClient::DeleteInstallationMediaCallable(const DeleteInstallationMediaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInstallationMediaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInstallationMedia(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DeleteInstallationMediaAsync(const DeleteInstallationMediaRequest& request, const DeleteInstallationMediaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteInstallationMediaAsyncHelper( request, handler, context ); } );
}

void RDSClient::DeleteInstallationMediaAsyncHelper(const DeleteInstallationMediaRequest& request, const DeleteInstallationMediaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteInstallationMedia(request), context);
}

DeleteOptionGroupOutcome RDSClient::DeleteOptionGroup(const DeleteOptionGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteOptionGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteOptionGroupOutcomeCallable RDSClient::DeleteOptionGroupCallable(const DeleteOptionGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteOptionGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteOptionGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DeleteOptionGroupAsync(const DeleteOptionGroupRequest& request, const DeleteOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteOptionGroupAsyncHelper( request, handler, context ); } );
}

void RDSClient::DeleteOptionGroupAsyncHelper(const DeleteOptionGroupRequest& request, const DeleteOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteOptionGroup(request), context);
}

DeregisterDBProxyTargetsOutcome RDSClient::DeregisterDBProxyTargets(const DeregisterDBProxyTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeregisterDBProxyTargetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeregisterDBProxyTargetsOutcomeCallable RDSClient::DeregisterDBProxyTargetsCallable(const DeregisterDBProxyTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterDBProxyTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterDBProxyTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DeregisterDBProxyTargetsAsync(const DeregisterDBProxyTargetsRequest& request, const DeregisterDBProxyTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeregisterDBProxyTargetsAsyncHelper( request, handler, context ); } );
}

void RDSClient::DeregisterDBProxyTargetsAsyncHelper(const DeregisterDBProxyTargetsRequest& request, const DeregisterDBProxyTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterDBProxyTargets(request), context);
}

DescribeAccountAttributesOutcome RDSClient::DescribeAccountAttributes(const DescribeAccountAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeAccountAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAccountAttributesOutcomeCallable RDSClient::DescribeAccountAttributesCallable(const DescribeAccountAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeAccountAttributesAsync(const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAccountAttributesAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeAccountAttributesAsyncHelper(const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAccountAttributes(request), context);
}

DescribeCertificatesOutcome RDSClient::DescribeCertificates(const DescribeCertificatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeCertificatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeCertificatesOutcomeCallable RDSClient::DescribeCertificatesCallable(const DescribeCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeCertificatesAsync(const DescribeCertificatesRequest& request, const DescribeCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCertificatesAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeCertificatesAsyncHelper(const DescribeCertificatesRequest& request, const DescribeCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCertificates(request), context);
}

DescribeCustomAvailabilityZonesOutcome RDSClient::DescribeCustomAvailabilityZones(const DescribeCustomAvailabilityZonesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeCustomAvailabilityZonesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeCustomAvailabilityZonesOutcomeCallable RDSClient::DescribeCustomAvailabilityZonesCallable(const DescribeCustomAvailabilityZonesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCustomAvailabilityZonesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCustomAvailabilityZones(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeCustomAvailabilityZonesAsync(const DescribeCustomAvailabilityZonesRequest& request, const DescribeCustomAvailabilityZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCustomAvailabilityZonesAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeCustomAvailabilityZonesAsyncHelper(const DescribeCustomAvailabilityZonesRequest& request, const DescribeCustomAvailabilityZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCustomAvailabilityZones(request), context);
}

DescribeDBClusterBacktracksOutcome RDSClient::DescribeDBClusterBacktracks(const DescribeDBClusterBacktracksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBClusterBacktracksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClusterBacktracksOutcomeCallable RDSClient::DescribeDBClusterBacktracksCallable(const DescribeDBClusterBacktracksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClusterBacktracksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusterBacktracks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeDBClusterBacktracksAsync(const DescribeDBClusterBacktracksRequest& request, const DescribeDBClusterBacktracksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBClusterBacktracksAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeDBClusterBacktracksAsyncHelper(const DescribeDBClusterBacktracksRequest& request, const DescribeDBClusterBacktracksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBClusterBacktracks(request), context);
}

DescribeDBClusterEndpointsOutcome RDSClient::DescribeDBClusterEndpoints(const DescribeDBClusterEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBClusterEndpointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClusterEndpointsOutcomeCallable RDSClient::DescribeDBClusterEndpointsCallable(const DescribeDBClusterEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClusterEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusterEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeDBClusterEndpointsAsync(const DescribeDBClusterEndpointsRequest& request, const DescribeDBClusterEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBClusterEndpointsAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeDBClusterEndpointsAsyncHelper(const DescribeDBClusterEndpointsRequest& request, const DescribeDBClusterEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBClusterEndpoints(request), context);
}

DescribeDBClusterParameterGroupsOutcome RDSClient::DescribeDBClusterParameterGroups(const DescribeDBClusterParameterGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBClusterParameterGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClusterParameterGroupsOutcomeCallable RDSClient::DescribeDBClusterParameterGroupsCallable(const DescribeDBClusterParameterGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClusterParameterGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusterParameterGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeDBClusterParameterGroupsAsync(const DescribeDBClusterParameterGroupsRequest& request, const DescribeDBClusterParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBClusterParameterGroupsAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeDBClusterParameterGroupsAsyncHelper(const DescribeDBClusterParameterGroupsRequest& request, const DescribeDBClusterParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBClusterParameterGroups(request), context);
}

DescribeDBClusterParametersOutcome RDSClient::DescribeDBClusterParameters(const DescribeDBClusterParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBClusterParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClusterParametersOutcomeCallable RDSClient::DescribeDBClusterParametersCallable(const DescribeDBClusterParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClusterParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusterParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeDBClusterParametersAsync(const DescribeDBClusterParametersRequest& request, const DescribeDBClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBClusterParametersAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeDBClusterParametersAsyncHelper(const DescribeDBClusterParametersRequest& request, const DescribeDBClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBClusterParameters(request), context);
}

DescribeDBClusterSnapshotAttributesOutcome RDSClient::DescribeDBClusterSnapshotAttributes(const DescribeDBClusterSnapshotAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBClusterSnapshotAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClusterSnapshotAttributesOutcomeCallable RDSClient::DescribeDBClusterSnapshotAttributesCallable(const DescribeDBClusterSnapshotAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClusterSnapshotAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusterSnapshotAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeDBClusterSnapshotAttributesAsync(const DescribeDBClusterSnapshotAttributesRequest& request, const DescribeDBClusterSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBClusterSnapshotAttributesAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeDBClusterSnapshotAttributesAsyncHelper(const DescribeDBClusterSnapshotAttributesRequest& request, const DescribeDBClusterSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBClusterSnapshotAttributes(request), context);
}

DescribeDBClusterSnapshotsOutcome RDSClient::DescribeDBClusterSnapshots(const DescribeDBClusterSnapshotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBClusterSnapshotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClusterSnapshotsOutcomeCallable RDSClient::DescribeDBClusterSnapshotsCallable(const DescribeDBClusterSnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClusterSnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusterSnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeDBClusterSnapshotsAsync(const DescribeDBClusterSnapshotsRequest& request, const DescribeDBClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBClusterSnapshotsAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeDBClusterSnapshotsAsyncHelper(const DescribeDBClusterSnapshotsRequest& request, const DescribeDBClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBClusterSnapshots(request), context);
}

DescribeDBClustersOutcome RDSClient::DescribeDBClusters(const DescribeDBClustersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBClustersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBClustersOutcomeCallable RDSClient::DescribeDBClustersCallable(const DescribeDBClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeDBClustersAsync(const DescribeDBClustersRequest& request, const DescribeDBClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBClustersAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeDBClustersAsyncHelper(const DescribeDBClustersRequest& request, const DescribeDBClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBClusters(request), context);
}

DescribeDBEngineVersionsOutcome RDSClient::DescribeDBEngineVersions(const DescribeDBEngineVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBEngineVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBEngineVersionsOutcomeCallable RDSClient::DescribeDBEngineVersionsCallable(const DescribeDBEngineVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBEngineVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBEngineVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeDBEngineVersionsAsync(const DescribeDBEngineVersionsRequest& request, const DescribeDBEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBEngineVersionsAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeDBEngineVersionsAsyncHelper(const DescribeDBEngineVersionsRequest& request, const DescribeDBEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBEngineVersions(request), context);
}

DescribeDBInstanceAutomatedBackupsOutcome RDSClient::DescribeDBInstanceAutomatedBackups(const DescribeDBInstanceAutomatedBackupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBInstanceAutomatedBackupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBInstanceAutomatedBackupsOutcomeCallable RDSClient::DescribeDBInstanceAutomatedBackupsCallable(const DescribeDBInstanceAutomatedBackupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBInstanceAutomatedBackupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBInstanceAutomatedBackups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeDBInstanceAutomatedBackupsAsync(const DescribeDBInstanceAutomatedBackupsRequest& request, const DescribeDBInstanceAutomatedBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBInstanceAutomatedBackupsAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeDBInstanceAutomatedBackupsAsyncHelper(const DescribeDBInstanceAutomatedBackupsRequest& request, const DescribeDBInstanceAutomatedBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBInstanceAutomatedBackups(request), context);
}

DescribeDBInstancesOutcome RDSClient::DescribeDBInstances(const DescribeDBInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBInstancesOutcomeCallable RDSClient::DescribeDBInstancesCallable(const DescribeDBInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeDBInstancesAsync(const DescribeDBInstancesRequest& request, const DescribeDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBInstancesAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeDBInstancesAsyncHelper(const DescribeDBInstancesRequest& request, const DescribeDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBInstances(request), context);
}

DescribeDBLogFilesOutcome RDSClient::DescribeDBLogFiles(const DescribeDBLogFilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBLogFilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBLogFilesOutcomeCallable RDSClient::DescribeDBLogFilesCallable(const DescribeDBLogFilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBLogFilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBLogFiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeDBLogFilesAsync(const DescribeDBLogFilesRequest& request, const DescribeDBLogFilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBLogFilesAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeDBLogFilesAsyncHelper(const DescribeDBLogFilesRequest& request, const DescribeDBLogFilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBLogFiles(request), context);
}

DescribeDBParameterGroupsOutcome RDSClient::DescribeDBParameterGroups(const DescribeDBParameterGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBParameterGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBParameterGroupsOutcomeCallable RDSClient::DescribeDBParameterGroupsCallable(const DescribeDBParameterGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBParameterGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBParameterGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeDBParameterGroupsAsync(const DescribeDBParameterGroupsRequest& request, const DescribeDBParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBParameterGroupsAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeDBParameterGroupsAsyncHelper(const DescribeDBParameterGroupsRequest& request, const DescribeDBParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBParameterGroups(request), context);
}

DescribeDBParametersOutcome RDSClient::DescribeDBParameters(const DescribeDBParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBParametersOutcomeCallable RDSClient::DescribeDBParametersCallable(const DescribeDBParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeDBParametersAsync(const DescribeDBParametersRequest& request, const DescribeDBParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBParametersAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeDBParametersAsyncHelper(const DescribeDBParametersRequest& request, const DescribeDBParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBParameters(request), context);
}

DescribeDBProxiesOutcome RDSClient::DescribeDBProxies(const DescribeDBProxiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBProxiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBProxiesOutcomeCallable RDSClient::DescribeDBProxiesCallable(const DescribeDBProxiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBProxiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBProxies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeDBProxiesAsync(const DescribeDBProxiesRequest& request, const DescribeDBProxiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBProxiesAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeDBProxiesAsyncHelper(const DescribeDBProxiesRequest& request, const DescribeDBProxiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBProxies(request), context);
}

DescribeDBProxyEndpointsOutcome RDSClient::DescribeDBProxyEndpoints(const DescribeDBProxyEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBProxyEndpointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBProxyEndpointsOutcomeCallable RDSClient::DescribeDBProxyEndpointsCallable(const DescribeDBProxyEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBProxyEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBProxyEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeDBProxyEndpointsAsync(const DescribeDBProxyEndpointsRequest& request, const DescribeDBProxyEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBProxyEndpointsAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeDBProxyEndpointsAsyncHelper(const DescribeDBProxyEndpointsRequest& request, const DescribeDBProxyEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBProxyEndpoints(request), context);
}

DescribeDBProxyTargetGroupsOutcome RDSClient::DescribeDBProxyTargetGroups(const DescribeDBProxyTargetGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBProxyTargetGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBProxyTargetGroupsOutcomeCallable RDSClient::DescribeDBProxyTargetGroupsCallable(const DescribeDBProxyTargetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBProxyTargetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBProxyTargetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeDBProxyTargetGroupsAsync(const DescribeDBProxyTargetGroupsRequest& request, const DescribeDBProxyTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBProxyTargetGroupsAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeDBProxyTargetGroupsAsyncHelper(const DescribeDBProxyTargetGroupsRequest& request, const DescribeDBProxyTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBProxyTargetGroups(request), context);
}

DescribeDBProxyTargetsOutcome RDSClient::DescribeDBProxyTargets(const DescribeDBProxyTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBProxyTargetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBProxyTargetsOutcomeCallable RDSClient::DescribeDBProxyTargetsCallable(const DescribeDBProxyTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBProxyTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBProxyTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeDBProxyTargetsAsync(const DescribeDBProxyTargetsRequest& request, const DescribeDBProxyTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBProxyTargetsAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeDBProxyTargetsAsyncHelper(const DescribeDBProxyTargetsRequest& request, const DescribeDBProxyTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBProxyTargets(request), context);
}

DescribeDBSecurityGroupsOutcome RDSClient::DescribeDBSecurityGroups(const DescribeDBSecurityGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBSecurityGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBSecurityGroupsOutcomeCallable RDSClient::DescribeDBSecurityGroupsCallable(const DescribeDBSecurityGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBSecurityGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBSecurityGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeDBSecurityGroupsAsync(const DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBSecurityGroupsAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeDBSecurityGroupsAsyncHelper(const DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBSecurityGroups(request), context);
}

DescribeDBSnapshotAttributesOutcome RDSClient::DescribeDBSnapshotAttributes(const DescribeDBSnapshotAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBSnapshotAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBSnapshotAttributesOutcomeCallable RDSClient::DescribeDBSnapshotAttributesCallable(const DescribeDBSnapshotAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBSnapshotAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBSnapshotAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeDBSnapshotAttributesAsync(const DescribeDBSnapshotAttributesRequest& request, const DescribeDBSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBSnapshotAttributesAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeDBSnapshotAttributesAsyncHelper(const DescribeDBSnapshotAttributesRequest& request, const DescribeDBSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBSnapshotAttributes(request), context);
}

DescribeDBSnapshotsOutcome RDSClient::DescribeDBSnapshots(const DescribeDBSnapshotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBSnapshotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBSnapshotsOutcomeCallable RDSClient::DescribeDBSnapshotsCallable(const DescribeDBSnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBSnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBSnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeDBSnapshotsAsync(const DescribeDBSnapshotsRequest& request, const DescribeDBSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBSnapshotsAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeDBSnapshotsAsyncHelper(const DescribeDBSnapshotsRequest& request, const DescribeDBSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBSnapshots(request), context);
}

DescribeDBSubnetGroupsOutcome RDSClient::DescribeDBSubnetGroups(const DescribeDBSubnetGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDBSubnetGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDBSubnetGroupsOutcomeCallable RDSClient::DescribeDBSubnetGroupsCallable(const DescribeDBSubnetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDBSubnetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDBSubnetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeDBSubnetGroupsAsync(const DescribeDBSubnetGroupsRequest& request, const DescribeDBSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDBSubnetGroupsAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeDBSubnetGroupsAsyncHelper(const DescribeDBSubnetGroupsRequest& request, const DescribeDBSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBSubnetGroups(request), context);
}

DescribeEngineDefaultClusterParametersOutcome RDSClient::DescribeEngineDefaultClusterParameters(const DescribeEngineDefaultClusterParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeEngineDefaultClusterParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEngineDefaultClusterParametersOutcomeCallable RDSClient::DescribeEngineDefaultClusterParametersCallable(const DescribeEngineDefaultClusterParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEngineDefaultClusterParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEngineDefaultClusterParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeEngineDefaultClusterParametersAsync(const DescribeEngineDefaultClusterParametersRequest& request, const DescribeEngineDefaultClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEngineDefaultClusterParametersAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeEngineDefaultClusterParametersAsyncHelper(const DescribeEngineDefaultClusterParametersRequest& request, const DescribeEngineDefaultClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEngineDefaultClusterParameters(request), context);
}

DescribeEngineDefaultParametersOutcome RDSClient::DescribeEngineDefaultParameters(const DescribeEngineDefaultParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeEngineDefaultParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEngineDefaultParametersOutcomeCallable RDSClient::DescribeEngineDefaultParametersCallable(const DescribeEngineDefaultParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEngineDefaultParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEngineDefaultParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeEngineDefaultParametersAsync(const DescribeEngineDefaultParametersRequest& request, const DescribeEngineDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEngineDefaultParametersAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeEngineDefaultParametersAsyncHelper(const DescribeEngineDefaultParametersRequest& request, const DescribeEngineDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEngineDefaultParameters(request), context);
}

DescribeEventCategoriesOutcome RDSClient::DescribeEventCategories(const DescribeEventCategoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeEventCategoriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEventCategoriesOutcomeCallable RDSClient::DescribeEventCategoriesCallable(const DescribeEventCategoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventCategoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventCategories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeEventCategoriesAsync(const DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEventCategoriesAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeEventCategoriesAsyncHelper(const DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEventCategories(request), context);
}

DescribeEventSubscriptionsOutcome RDSClient::DescribeEventSubscriptions(const DescribeEventSubscriptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeEventSubscriptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEventSubscriptionsOutcomeCallable RDSClient::DescribeEventSubscriptionsCallable(const DescribeEventSubscriptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventSubscriptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventSubscriptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeEventSubscriptionsAsync(const DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEventSubscriptionsAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeEventSubscriptionsAsyncHelper(const DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEventSubscriptions(request), context);
}

DescribeEventsOutcome RDSClient::DescribeEvents(const DescribeEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEventsOutcomeCallable RDSClient::DescribeEventsCallable(const DescribeEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEventsAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeEventsAsyncHelper(const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEvents(request), context);
}

DescribeExportTasksOutcome RDSClient::DescribeExportTasks(const DescribeExportTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeExportTasksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeExportTasksOutcomeCallable RDSClient::DescribeExportTasksCallable(const DescribeExportTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeExportTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeExportTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeExportTasksAsync(const DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeExportTasksAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeExportTasksAsyncHelper(const DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeExportTasks(request), context);
}

DescribeGlobalClustersOutcome RDSClient::DescribeGlobalClusters(const DescribeGlobalClustersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeGlobalClustersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeGlobalClustersOutcomeCallable RDSClient::DescribeGlobalClustersCallable(const DescribeGlobalClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGlobalClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGlobalClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeGlobalClustersAsync(const DescribeGlobalClustersRequest& request, const DescribeGlobalClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeGlobalClustersAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeGlobalClustersAsyncHelper(const DescribeGlobalClustersRequest& request, const DescribeGlobalClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeGlobalClusters(request), context);
}

DescribeInstallationMediaOutcome RDSClient::DescribeInstallationMedia(const DescribeInstallationMediaRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeInstallationMediaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeInstallationMediaOutcomeCallable RDSClient::DescribeInstallationMediaCallable(const DescribeInstallationMediaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstallationMediaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstallationMedia(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeInstallationMediaAsync(const DescribeInstallationMediaRequest& request, const DescribeInstallationMediaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeInstallationMediaAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeInstallationMediaAsyncHelper(const DescribeInstallationMediaRequest& request, const DescribeInstallationMediaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeInstallationMedia(request), context);
}

DescribeOptionGroupOptionsOutcome RDSClient::DescribeOptionGroupOptions(const DescribeOptionGroupOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeOptionGroupOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeOptionGroupOptionsOutcomeCallable RDSClient::DescribeOptionGroupOptionsCallable(const DescribeOptionGroupOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOptionGroupOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOptionGroupOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeOptionGroupOptionsAsync(const DescribeOptionGroupOptionsRequest& request, const DescribeOptionGroupOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeOptionGroupOptionsAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeOptionGroupOptionsAsyncHelper(const DescribeOptionGroupOptionsRequest& request, const DescribeOptionGroupOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeOptionGroupOptions(request), context);
}

DescribeOptionGroupsOutcome RDSClient::DescribeOptionGroups(const DescribeOptionGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeOptionGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeOptionGroupsOutcomeCallable RDSClient::DescribeOptionGroupsCallable(const DescribeOptionGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOptionGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOptionGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeOptionGroupsAsync(const DescribeOptionGroupsRequest& request, const DescribeOptionGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeOptionGroupsAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeOptionGroupsAsyncHelper(const DescribeOptionGroupsRequest& request, const DescribeOptionGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeOptionGroups(request), context);
}

DescribeOrderableDBInstanceOptionsOutcome RDSClient::DescribeOrderableDBInstanceOptions(const DescribeOrderableDBInstanceOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeOrderableDBInstanceOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeOrderableDBInstanceOptionsOutcomeCallable RDSClient::DescribeOrderableDBInstanceOptionsCallable(const DescribeOrderableDBInstanceOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrderableDBInstanceOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrderableDBInstanceOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeOrderableDBInstanceOptionsAsync(const DescribeOrderableDBInstanceOptionsRequest& request, const DescribeOrderableDBInstanceOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeOrderableDBInstanceOptionsAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeOrderableDBInstanceOptionsAsyncHelper(const DescribeOrderableDBInstanceOptionsRequest& request, const DescribeOrderableDBInstanceOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeOrderableDBInstanceOptions(request), context);
}

DescribePendingMaintenanceActionsOutcome RDSClient::DescribePendingMaintenanceActions(const DescribePendingMaintenanceActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribePendingMaintenanceActionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribePendingMaintenanceActionsOutcomeCallable RDSClient::DescribePendingMaintenanceActionsCallable(const DescribePendingMaintenanceActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePendingMaintenanceActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePendingMaintenanceActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribePendingMaintenanceActionsAsync(const DescribePendingMaintenanceActionsRequest& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePendingMaintenanceActionsAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribePendingMaintenanceActionsAsyncHelper(const DescribePendingMaintenanceActionsRequest& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePendingMaintenanceActions(request), context);
}

DescribeReservedDBInstancesOutcome RDSClient::DescribeReservedDBInstances(const DescribeReservedDBInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeReservedDBInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeReservedDBInstancesOutcomeCallable RDSClient::DescribeReservedDBInstancesCallable(const DescribeReservedDBInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservedDBInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReservedDBInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeReservedDBInstancesAsync(const DescribeReservedDBInstancesRequest& request, const DescribeReservedDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeReservedDBInstancesAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeReservedDBInstancesAsyncHelper(const DescribeReservedDBInstancesRequest& request, const DescribeReservedDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReservedDBInstances(request), context);
}

DescribeReservedDBInstancesOfferingsOutcome RDSClient::DescribeReservedDBInstancesOfferings(const DescribeReservedDBInstancesOfferingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeReservedDBInstancesOfferingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeReservedDBInstancesOfferingsOutcomeCallable RDSClient::DescribeReservedDBInstancesOfferingsCallable(const DescribeReservedDBInstancesOfferingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservedDBInstancesOfferingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReservedDBInstancesOfferings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeReservedDBInstancesOfferingsAsync(const DescribeReservedDBInstancesOfferingsRequest& request, const DescribeReservedDBInstancesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeReservedDBInstancesOfferingsAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeReservedDBInstancesOfferingsAsyncHelper(const DescribeReservedDBInstancesOfferingsRequest& request, const DescribeReservedDBInstancesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReservedDBInstancesOfferings(request), context);
}

DescribeSourceRegionsOutcome RDSClient::DescribeSourceRegions(const DescribeSourceRegionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeSourceRegionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSourceRegionsOutcomeCallable RDSClient::DescribeSourceRegionsCallable(const DescribeSourceRegionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSourceRegionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSourceRegions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeSourceRegionsAsync(const DescribeSourceRegionsRequest& request, const DescribeSourceRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSourceRegionsAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeSourceRegionsAsyncHelper(const DescribeSourceRegionsRequest& request, const DescribeSourceRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSourceRegions(request), context);
}

DescribeValidDBInstanceModificationsOutcome RDSClient::DescribeValidDBInstanceModifications(const DescribeValidDBInstanceModificationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeValidDBInstanceModificationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeValidDBInstanceModificationsOutcomeCallable RDSClient::DescribeValidDBInstanceModificationsCallable(const DescribeValidDBInstanceModificationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeValidDBInstanceModificationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeValidDBInstanceModifications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DescribeValidDBInstanceModificationsAsync(const DescribeValidDBInstanceModificationsRequest& request, const DescribeValidDBInstanceModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeValidDBInstanceModificationsAsyncHelper( request, handler, context ); } );
}

void RDSClient::DescribeValidDBInstanceModificationsAsyncHelper(const DescribeValidDBInstanceModificationsRequest& request, const DescribeValidDBInstanceModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeValidDBInstanceModifications(request), context);
}

DownloadDBLogFilePortionOutcome RDSClient::DownloadDBLogFilePortion(const DownloadDBLogFilePortionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DownloadDBLogFilePortionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DownloadDBLogFilePortionOutcomeCallable RDSClient::DownloadDBLogFilePortionCallable(const DownloadDBLogFilePortionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DownloadDBLogFilePortionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DownloadDBLogFilePortion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::DownloadDBLogFilePortionAsync(const DownloadDBLogFilePortionRequest& request, const DownloadDBLogFilePortionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DownloadDBLogFilePortionAsyncHelper( request, handler, context ); } );
}

void RDSClient::DownloadDBLogFilePortionAsyncHelper(const DownloadDBLogFilePortionRequest& request, const DownloadDBLogFilePortionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DownloadDBLogFilePortion(request), context);
}

FailoverDBClusterOutcome RDSClient::FailoverDBCluster(const FailoverDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return FailoverDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

FailoverDBClusterOutcomeCallable RDSClient::FailoverDBClusterCallable(const FailoverDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< FailoverDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->FailoverDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::FailoverDBClusterAsync(const FailoverDBClusterRequest& request, const FailoverDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->FailoverDBClusterAsyncHelper( request, handler, context ); } );
}

void RDSClient::FailoverDBClusterAsyncHelper(const FailoverDBClusterRequest& request, const FailoverDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, FailoverDBCluster(request), context);
}

FailoverGlobalClusterOutcome RDSClient::FailoverGlobalCluster(const FailoverGlobalClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return FailoverGlobalClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

FailoverGlobalClusterOutcomeCallable RDSClient::FailoverGlobalClusterCallable(const FailoverGlobalClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< FailoverGlobalClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->FailoverGlobalCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::FailoverGlobalClusterAsync(const FailoverGlobalClusterRequest& request, const FailoverGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->FailoverGlobalClusterAsyncHelper( request, handler, context ); } );
}

void RDSClient::FailoverGlobalClusterAsyncHelper(const FailoverGlobalClusterRequest& request, const FailoverGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, FailoverGlobalCluster(request), context);
}

ImportInstallationMediaOutcome RDSClient::ImportInstallationMedia(const ImportInstallationMediaRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ImportInstallationMediaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ImportInstallationMediaOutcomeCallable RDSClient::ImportInstallationMediaCallable(const ImportInstallationMediaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportInstallationMediaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportInstallationMedia(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::ImportInstallationMediaAsync(const ImportInstallationMediaRequest& request, const ImportInstallationMediaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportInstallationMediaAsyncHelper( request, handler, context ); } );
}

void RDSClient::ImportInstallationMediaAsyncHelper(const ImportInstallationMediaRequest& request, const ImportInstallationMediaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportInstallationMedia(request), context);
}

ListTagsForResourceOutcome RDSClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListTagsForResourceOutcomeCallable RDSClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void RDSClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ModifyCertificatesOutcome RDSClient::ModifyCertificates(const ModifyCertificatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ModifyCertificatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyCertificatesOutcomeCallable RDSClient::ModifyCertificatesCallable(const ModifyCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::ModifyCertificatesAsync(const ModifyCertificatesRequest& request, const ModifyCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyCertificatesAsyncHelper( request, handler, context ); } );
}

void RDSClient::ModifyCertificatesAsyncHelper(const ModifyCertificatesRequest& request, const ModifyCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyCertificates(request), context);
}

ModifyCurrentDBClusterCapacityOutcome RDSClient::ModifyCurrentDBClusterCapacity(const ModifyCurrentDBClusterCapacityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ModifyCurrentDBClusterCapacityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyCurrentDBClusterCapacityOutcomeCallable RDSClient::ModifyCurrentDBClusterCapacityCallable(const ModifyCurrentDBClusterCapacityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyCurrentDBClusterCapacityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyCurrentDBClusterCapacity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::ModifyCurrentDBClusterCapacityAsync(const ModifyCurrentDBClusterCapacityRequest& request, const ModifyCurrentDBClusterCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyCurrentDBClusterCapacityAsyncHelper( request, handler, context ); } );
}

void RDSClient::ModifyCurrentDBClusterCapacityAsyncHelper(const ModifyCurrentDBClusterCapacityRequest& request, const ModifyCurrentDBClusterCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyCurrentDBClusterCapacity(request), context);
}

ModifyDBClusterOutcome RDSClient::ModifyDBCluster(const ModifyDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ModifyDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBClusterOutcomeCallable RDSClient::ModifyDBClusterCallable(const ModifyDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::ModifyDBClusterAsync(const ModifyDBClusterRequest& request, const ModifyDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyDBClusterAsyncHelper( request, handler, context ); } );
}

void RDSClient::ModifyDBClusterAsyncHelper(const ModifyDBClusterRequest& request, const ModifyDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyDBCluster(request), context);
}

ModifyDBClusterEndpointOutcome RDSClient::ModifyDBClusterEndpoint(const ModifyDBClusterEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ModifyDBClusterEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBClusterEndpointOutcomeCallable RDSClient::ModifyDBClusterEndpointCallable(const ModifyDBClusterEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBClusterEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBClusterEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::ModifyDBClusterEndpointAsync(const ModifyDBClusterEndpointRequest& request, const ModifyDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyDBClusterEndpointAsyncHelper( request, handler, context ); } );
}

void RDSClient::ModifyDBClusterEndpointAsyncHelper(const ModifyDBClusterEndpointRequest& request, const ModifyDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyDBClusterEndpoint(request), context);
}

ModifyDBClusterParameterGroupOutcome RDSClient::ModifyDBClusterParameterGroup(const ModifyDBClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ModifyDBClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBClusterParameterGroupOutcomeCallable RDSClient::ModifyDBClusterParameterGroupCallable(const ModifyDBClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::ModifyDBClusterParameterGroupAsync(const ModifyDBClusterParameterGroupRequest& request, const ModifyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyDBClusterParameterGroupAsyncHelper( request, handler, context ); } );
}

void RDSClient::ModifyDBClusterParameterGroupAsyncHelper(const ModifyDBClusterParameterGroupRequest& request, const ModifyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyDBClusterParameterGroup(request), context);
}

ModifyDBClusterSnapshotAttributeOutcome RDSClient::ModifyDBClusterSnapshotAttribute(const ModifyDBClusterSnapshotAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ModifyDBClusterSnapshotAttributeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBClusterSnapshotAttributeOutcomeCallable RDSClient::ModifyDBClusterSnapshotAttributeCallable(const ModifyDBClusterSnapshotAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBClusterSnapshotAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBClusterSnapshotAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::ModifyDBClusterSnapshotAttributeAsync(const ModifyDBClusterSnapshotAttributeRequest& request, const ModifyDBClusterSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyDBClusterSnapshotAttributeAsyncHelper( request, handler, context ); } );
}

void RDSClient::ModifyDBClusterSnapshotAttributeAsyncHelper(const ModifyDBClusterSnapshotAttributeRequest& request, const ModifyDBClusterSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyDBClusterSnapshotAttribute(request), context);
}

ModifyDBInstanceOutcome RDSClient::ModifyDBInstance(const ModifyDBInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ModifyDBInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBInstanceOutcomeCallable RDSClient::ModifyDBInstanceCallable(const ModifyDBInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::ModifyDBInstanceAsync(const ModifyDBInstanceRequest& request, const ModifyDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyDBInstanceAsyncHelper( request, handler, context ); } );
}

void RDSClient::ModifyDBInstanceAsyncHelper(const ModifyDBInstanceRequest& request, const ModifyDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyDBInstance(request), context);
}

ModifyDBParameterGroupOutcome RDSClient::ModifyDBParameterGroup(const ModifyDBParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ModifyDBParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBParameterGroupOutcomeCallable RDSClient::ModifyDBParameterGroupCallable(const ModifyDBParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::ModifyDBParameterGroupAsync(const ModifyDBParameterGroupRequest& request, const ModifyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyDBParameterGroupAsyncHelper( request, handler, context ); } );
}

void RDSClient::ModifyDBParameterGroupAsyncHelper(const ModifyDBParameterGroupRequest& request, const ModifyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyDBParameterGroup(request), context);
}

ModifyDBProxyOutcome RDSClient::ModifyDBProxy(const ModifyDBProxyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ModifyDBProxyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBProxyOutcomeCallable RDSClient::ModifyDBProxyCallable(const ModifyDBProxyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBProxyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBProxy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::ModifyDBProxyAsync(const ModifyDBProxyRequest& request, const ModifyDBProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyDBProxyAsyncHelper( request, handler, context ); } );
}

void RDSClient::ModifyDBProxyAsyncHelper(const ModifyDBProxyRequest& request, const ModifyDBProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyDBProxy(request), context);
}

ModifyDBProxyEndpointOutcome RDSClient::ModifyDBProxyEndpoint(const ModifyDBProxyEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ModifyDBProxyEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBProxyEndpointOutcomeCallable RDSClient::ModifyDBProxyEndpointCallable(const ModifyDBProxyEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBProxyEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBProxyEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::ModifyDBProxyEndpointAsync(const ModifyDBProxyEndpointRequest& request, const ModifyDBProxyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyDBProxyEndpointAsyncHelper( request, handler, context ); } );
}

void RDSClient::ModifyDBProxyEndpointAsyncHelper(const ModifyDBProxyEndpointRequest& request, const ModifyDBProxyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyDBProxyEndpoint(request), context);
}

ModifyDBProxyTargetGroupOutcome RDSClient::ModifyDBProxyTargetGroup(const ModifyDBProxyTargetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ModifyDBProxyTargetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBProxyTargetGroupOutcomeCallable RDSClient::ModifyDBProxyTargetGroupCallable(const ModifyDBProxyTargetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBProxyTargetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBProxyTargetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::ModifyDBProxyTargetGroupAsync(const ModifyDBProxyTargetGroupRequest& request, const ModifyDBProxyTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyDBProxyTargetGroupAsyncHelper( request, handler, context ); } );
}

void RDSClient::ModifyDBProxyTargetGroupAsyncHelper(const ModifyDBProxyTargetGroupRequest& request, const ModifyDBProxyTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyDBProxyTargetGroup(request), context);
}

ModifyDBSnapshotOutcome RDSClient::ModifyDBSnapshot(const ModifyDBSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ModifyDBSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBSnapshotOutcomeCallable RDSClient::ModifyDBSnapshotCallable(const ModifyDBSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::ModifyDBSnapshotAsync(const ModifyDBSnapshotRequest& request, const ModifyDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyDBSnapshotAsyncHelper( request, handler, context ); } );
}

void RDSClient::ModifyDBSnapshotAsyncHelper(const ModifyDBSnapshotRequest& request, const ModifyDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyDBSnapshot(request), context);
}

ModifyDBSnapshotAttributeOutcome RDSClient::ModifyDBSnapshotAttribute(const ModifyDBSnapshotAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ModifyDBSnapshotAttributeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBSnapshotAttributeOutcomeCallable RDSClient::ModifyDBSnapshotAttributeCallable(const ModifyDBSnapshotAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBSnapshotAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBSnapshotAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::ModifyDBSnapshotAttributeAsync(const ModifyDBSnapshotAttributeRequest& request, const ModifyDBSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyDBSnapshotAttributeAsyncHelper( request, handler, context ); } );
}

void RDSClient::ModifyDBSnapshotAttributeAsyncHelper(const ModifyDBSnapshotAttributeRequest& request, const ModifyDBSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyDBSnapshotAttribute(request), context);
}

ModifyDBSubnetGroupOutcome RDSClient::ModifyDBSubnetGroup(const ModifyDBSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ModifyDBSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDBSubnetGroupOutcomeCallable RDSClient::ModifyDBSubnetGroupCallable(const ModifyDBSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDBSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDBSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::ModifyDBSubnetGroupAsync(const ModifyDBSubnetGroupRequest& request, const ModifyDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyDBSubnetGroupAsyncHelper( request, handler, context ); } );
}

void RDSClient::ModifyDBSubnetGroupAsyncHelper(const ModifyDBSubnetGroupRequest& request, const ModifyDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyDBSubnetGroup(request), context);
}

ModifyEventSubscriptionOutcome RDSClient::ModifyEventSubscription(const ModifyEventSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ModifyEventSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyEventSubscriptionOutcomeCallable RDSClient::ModifyEventSubscriptionCallable(const ModifyEventSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyEventSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyEventSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::ModifyEventSubscriptionAsync(const ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyEventSubscriptionAsyncHelper( request, handler, context ); } );
}

void RDSClient::ModifyEventSubscriptionAsyncHelper(const ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyEventSubscription(request), context);
}

ModifyGlobalClusterOutcome RDSClient::ModifyGlobalCluster(const ModifyGlobalClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ModifyGlobalClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyGlobalClusterOutcomeCallable RDSClient::ModifyGlobalClusterCallable(const ModifyGlobalClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyGlobalClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyGlobalCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::ModifyGlobalClusterAsync(const ModifyGlobalClusterRequest& request, const ModifyGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyGlobalClusterAsyncHelper( request, handler, context ); } );
}

void RDSClient::ModifyGlobalClusterAsyncHelper(const ModifyGlobalClusterRequest& request, const ModifyGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyGlobalCluster(request), context);
}

ModifyOptionGroupOutcome RDSClient::ModifyOptionGroup(const ModifyOptionGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ModifyOptionGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyOptionGroupOutcomeCallable RDSClient::ModifyOptionGroupCallable(const ModifyOptionGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyOptionGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyOptionGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::ModifyOptionGroupAsync(const ModifyOptionGroupRequest& request, const ModifyOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyOptionGroupAsyncHelper( request, handler, context ); } );
}

void RDSClient::ModifyOptionGroupAsyncHelper(const ModifyOptionGroupRequest& request, const ModifyOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyOptionGroup(request), context);
}

PromoteReadReplicaOutcome RDSClient::PromoteReadReplica(const PromoteReadReplicaRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return PromoteReadReplicaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PromoteReadReplicaOutcomeCallable RDSClient::PromoteReadReplicaCallable(const PromoteReadReplicaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PromoteReadReplicaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PromoteReadReplica(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::PromoteReadReplicaAsync(const PromoteReadReplicaRequest& request, const PromoteReadReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PromoteReadReplicaAsyncHelper( request, handler, context ); } );
}

void RDSClient::PromoteReadReplicaAsyncHelper(const PromoteReadReplicaRequest& request, const PromoteReadReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PromoteReadReplica(request), context);
}

PromoteReadReplicaDBClusterOutcome RDSClient::PromoteReadReplicaDBCluster(const PromoteReadReplicaDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return PromoteReadReplicaDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PromoteReadReplicaDBClusterOutcomeCallable RDSClient::PromoteReadReplicaDBClusterCallable(const PromoteReadReplicaDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PromoteReadReplicaDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PromoteReadReplicaDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::PromoteReadReplicaDBClusterAsync(const PromoteReadReplicaDBClusterRequest& request, const PromoteReadReplicaDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PromoteReadReplicaDBClusterAsyncHelper( request, handler, context ); } );
}

void RDSClient::PromoteReadReplicaDBClusterAsyncHelper(const PromoteReadReplicaDBClusterRequest& request, const PromoteReadReplicaDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PromoteReadReplicaDBCluster(request), context);
}

PurchaseReservedDBInstancesOfferingOutcome RDSClient::PurchaseReservedDBInstancesOffering(const PurchaseReservedDBInstancesOfferingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return PurchaseReservedDBInstancesOfferingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PurchaseReservedDBInstancesOfferingOutcomeCallable RDSClient::PurchaseReservedDBInstancesOfferingCallable(const PurchaseReservedDBInstancesOfferingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PurchaseReservedDBInstancesOfferingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PurchaseReservedDBInstancesOffering(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::PurchaseReservedDBInstancesOfferingAsync(const PurchaseReservedDBInstancesOfferingRequest& request, const PurchaseReservedDBInstancesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PurchaseReservedDBInstancesOfferingAsyncHelper( request, handler, context ); } );
}

void RDSClient::PurchaseReservedDBInstancesOfferingAsyncHelper(const PurchaseReservedDBInstancesOfferingRequest& request, const PurchaseReservedDBInstancesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PurchaseReservedDBInstancesOffering(request), context);
}

RebootDBInstanceOutcome RDSClient::RebootDBInstance(const RebootDBInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RebootDBInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RebootDBInstanceOutcomeCallable RDSClient::RebootDBInstanceCallable(const RebootDBInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebootDBInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebootDBInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::RebootDBInstanceAsync(const RebootDBInstanceRequest& request, const RebootDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RebootDBInstanceAsyncHelper( request, handler, context ); } );
}

void RDSClient::RebootDBInstanceAsyncHelper(const RebootDBInstanceRequest& request, const RebootDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RebootDBInstance(request), context);
}

RegisterDBProxyTargetsOutcome RDSClient::RegisterDBProxyTargets(const RegisterDBProxyTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RegisterDBProxyTargetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RegisterDBProxyTargetsOutcomeCallable RDSClient::RegisterDBProxyTargetsCallable(const RegisterDBProxyTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterDBProxyTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterDBProxyTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::RegisterDBProxyTargetsAsync(const RegisterDBProxyTargetsRequest& request, const RegisterDBProxyTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterDBProxyTargetsAsyncHelper( request, handler, context ); } );
}

void RDSClient::RegisterDBProxyTargetsAsyncHelper(const RegisterDBProxyTargetsRequest& request, const RegisterDBProxyTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterDBProxyTargets(request), context);
}

RemoveFromGlobalClusterOutcome RDSClient::RemoveFromGlobalCluster(const RemoveFromGlobalClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RemoveFromGlobalClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RemoveFromGlobalClusterOutcomeCallable RDSClient::RemoveFromGlobalClusterCallable(const RemoveFromGlobalClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveFromGlobalClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveFromGlobalCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::RemoveFromGlobalClusterAsync(const RemoveFromGlobalClusterRequest& request, const RemoveFromGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveFromGlobalClusterAsyncHelper( request, handler, context ); } );
}

void RDSClient::RemoveFromGlobalClusterAsyncHelper(const RemoveFromGlobalClusterRequest& request, const RemoveFromGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveFromGlobalCluster(request), context);
}

RemoveRoleFromDBClusterOutcome RDSClient::RemoveRoleFromDBCluster(const RemoveRoleFromDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RemoveRoleFromDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RemoveRoleFromDBClusterOutcomeCallable RDSClient::RemoveRoleFromDBClusterCallable(const RemoveRoleFromDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveRoleFromDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveRoleFromDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::RemoveRoleFromDBClusterAsync(const RemoveRoleFromDBClusterRequest& request, const RemoveRoleFromDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveRoleFromDBClusterAsyncHelper( request, handler, context ); } );
}

void RDSClient::RemoveRoleFromDBClusterAsyncHelper(const RemoveRoleFromDBClusterRequest& request, const RemoveRoleFromDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveRoleFromDBCluster(request), context);
}

RemoveRoleFromDBInstanceOutcome RDSClient::RemoveRoleFromDBInstance(const RemoveRoleFromDBInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RemoveRoleFromDBInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RemoveRoleFromDBInstanceOutcomeCallable RDSClient::RemoveRoleFromDBInstanceCallable(const RemoveRoleFromDBInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveRoleFromDBInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveRoleFromDBInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::RemoveRoleFromDBInstanceAsync(const RemoveRoleFromDBInstanceRequest& request, const RemoveRoleFromDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveRoleFromDBInstanceAsyncHelper( request, handler, context ); } );
}

void RDSClient::RemoveRoleFromDBInstanceAsyncHelper(const RemoveRoleFromDBInstanceRequest& request, const RemoveRoleFromDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveRoleFromDBInstance(request), context);
}

RemoveSourceIdentifierFromSubscriptionOutcome RDSClient::RemoveSourceIdentifierFromSubscription(const RemoveSourceIdentifierFromSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RemoveSourceIdentifierFromSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RemoveSourceIdentifierFromSubscriptionOutcomeCallable RDSClient::RemoveSourceIdentifierFromSubscriptionCallable(const RemoveSourceIdentifierFromSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveSourceIdentifierFromSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveSourceIdentifierFromSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::RemoveSourceIdentifierFromSubscriptionAsync(const RemoveSourceIdentifierFromSubscriptionRequest& request, const RemoveSourceIdentifierFromSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveSourceIdentifierFromSubscriptionAsyncHelper( request, handler, context ); } );
}

void RDSClient::RemoveSourceIdentifierFromSubscriptionAsyncHelper(const RemoveSourceIdentifierFromSubscriptionRequest& request, const RemoveSourceIdentifierFromSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveSourceIdentifierFromSubscription(request), context);
}

RemoveTagsFromResourceOutcome RDSClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RemoveTagsFromResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RemoveTagsFromResourceOutcomeCallable RDSClient::RemoveTagsFromResourceCallable(const RemoveTagsFromResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsFromResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTagsFromResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveTagsFromResourceAsyncHelper( request, handler, context ); } );
}

void RDSClient::RemoveTagsFromResourceAsyncHelper(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTagsFromResource(request), context);
}

ResetDBClusterParameterGroupOutcome RDSClient::ResetDBClusterParameterGroup(const ResetDBClusterParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ResetDBClusterParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ResetDBClusterParameterGroupOutcomeCallable RDSClient::ResetDBClusterParameterGroupCallable(const ResetDBClusterParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetDBClusterParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetDBClusterParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::ResetDBClusterParameterGroupAsync(const ResetDBClusterParameterGroupRequest& request, const ResetDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResetDBClusterParameterGroupAsyncHelper( request, handler, context ); } );
}

void RDSClient::ResetDBClusterParameterGroupAsyncHelper(const ResetDBClusterParameterGroupRequest& request, const ResetDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResetDBClusterParameterGroup(request), context);
}

ResetDBParameterGroupOutcome RDSClient::ResetDBParameterGroup(const ResetDBParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ResetDBParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ResetDBParameterGroupOutcomeCallable RDSClient::ResetDBParameterGroupCallable(const ResetDBParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetDBParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetDBParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::ResetDBParameterGroupAsync(const ResetDBParameterGroupRequest& request, const ResetDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResetDBParameterGroupAsyncHelper( request, handler, context ); } );
}

void RDSClient::ResetDBParameterGroupAsyncHelper(const ResetDBParameterGroupRequest& request, const ResetDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResetDBParameterGroup(request), context);
}

RestoreDBClusterFromS3Outcome RDSClient::RestoreDBClusterFromS3(const RestoreDBClusterFromS3Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RestoreDBClusterFromS3Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RestoreDBClusterFromS3OutcomeCallable RDSClient::RestoreDBClusterFromS3Callable(const RestoreDBClusterFromS3Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreDBClusterFromS3Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreDBClusterFromS3(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::RestoreDBClusterFromS3Async(const RestoreDBClusterFromS3Request& request, const RestoreDBClusterFromS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RestoreDBClusterFromS3AsyncHelper( request, handler, context ); } );
}

void RDSClient::RestoreDBClusterFromS3AsyncHelper(const RestoreDBClusterFromS3Request& request, const RestoreDBClusterFromS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestoreDBClusterFromS3(request), context);
}

RestoreDBClusterFromSnapshotOutcome RDSClient::RestoreDBClusterFromSnapshot(const RestoreDBClusterFromSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RestoreDBClusterFromSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RestoreDBClusterFromSnapshotOutcomeCallable RDSClient::RestoreDBClusterFromSnapshotCallable(const RestoreDBClusterFromSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreDBClusterFromSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreDBClusterFromSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::RestoreDBClusterFromSnapshotAsync(const RestoreDBClusterFromSnapshotRequest& request, const RestoreDBClusterFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RestoreDBClusterFromSnapshotAsyncHelper( request, handler, context ); } );
}

void RDSClient::RestoreDBClusterFromSnapshotAsyncHelper(const RestoreDBClusterFromSnapshotRequest& request, const RestoreDBClusterFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestoreDBClusterFromSnapshot(request), context);
}

RestoreDBClusterToPointInTimeOutcome RDSClient::RestoreDBClusterToPointInTime(const RestoreDBClusterToPointInTimeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RestoreDBClusterToPointInTimeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RestoreDBClusterToPointInTimeOutcomeCallable RDSClient::RestoreDBClusterToPointInTimeCallable(const RestoreDBClusterToPointInTimeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreDBClusterToPointInTimeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreDBClusterToPointInTime(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::RestoreDBClusterToPointInTimeAsync(const RestoreDBClusterToPointInTimeRequest& request, const RestoreDBClusterToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RestoreDBClusterToPointInTimeAsyncHelper( request, handler, context ); } );
}

void RDSClient::RestoreDBClusterToPointInTimeAsyncHelper(const RestoreDBClusterToPointInTimeRequest& request, const RestoreDBClusterToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestoreDBClusterToPointInTime(request), context);
}

RestoreDBInstanceFromDBSnapshotOutcome RDSClient::RestoreDBInstanceFromDBSnapshot(const RestoreDBInstanceFromDBSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RestoreDBInstanceFromDBSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RestoreDBInstanceFromDBSnapshotOutcomeCallable RDSClient::RestoreDBInstanceFromDBSnapshotCallable(const RestoreDBInstanceFromDBSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreDBInstanceFromDBSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreDBInstanceFromDBSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::RestoreDBInstanceFromDBSnapshotAsync(const RestoreDBInstanceFromDBSnapshotRequest& request, const RestoreDBInstanceFromDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RestoreDBInstanceFromDBSnapshotAsyncHelper( request, handler, context ); } );
}

void RDSClient::RestoreDBInstanceFromDBSnapshotAsyncHelper(const RestoreDBInstanceFromDBSnapshotRequest& request, const RestoreDBInstanceFromDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestoreDBInstanceFromDBSnapshot(request), context);
}

RestoreDBInstanceFromS3Outcome RDSClient::RestoreDBInstanceFromS3(const RestoreDBInstanceFromS3Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RestoreDBInstanceFromS3Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RestoreDBInstanceFromS3OutcomeCallable RDSClient::RestoreDBInstanceFromS3Callable(const RestoreDBInstanceFromS3Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreDBInstanceFromS3Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreDBInstanceFromS3(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::RestoreDBInstanceFromS3Async(const RestoreDBInstanceFromS3Request& request, const RestoreDBInstanceFromS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RestoreDBInstanceFromS3AsyncHelper( request, handler, context ); } );
}

void RDSClient::RestoreDBInstanceFromS3AsyncHelper(const RestoreDBInstanceFromS3Request& request, const RestoreDBInstanceFromS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestoreDBInstanceFromS3(request), context);
}

RestoreDBInstanceToPointInTimeOutcome RDSClient::RestoreDBInstanceToPointInTime(const RestoreDBInstanceToPointInTimeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RestoreDBInstanceToPointInTimeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RestoreDBInstanceToPointInTimeOutcomeCallable RDSClient::RestoreDBInstanceToPointInTimeCallable(const RestoreDBInstanceToPointInTimeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreDBInstanceToPointInTimeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreDBInstanceToPointInTime(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::RestoreDBInstanceToPointInTimeAsync(const RestoreDBInstanceToPointInTimeRequest& request, const RestoreDBInstanceToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RestoreDBInstanceToPointInTimeAsyncHelper( request, handler, context ); } );
}

void RDSClient::RestoreDBInstanceToPointInTimeAsyncHelper(const RestoreDBInstanceToPointInTimeRequest& request, const RestoreDBInstanceToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestoreDBInstanceToPointInTime(request), context);
}

RevokeDBSecurityGroupIngressOutcome RDSClient::RevokeDBSecurityGroupIngress(const RevokeDBSecurityGroupIngressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RevokeDBSecurityGroupIngressOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RevokeDBSecurityGroupIngressOutcomeCallable RDSClient::RevokeDBSecurityGroupIngressCallable(const RevokeDBSecurityGroupIngressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokeDBSecurityGroupIngressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokeDBSecurityGroupIngress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::RevokeDBSecurityGroupIngressAsync(const RevokeDBSecurityGroupIngressRequest& request, const RevokeDBSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RevokeDBSecurityGroupIngressAsyncHelper( request, handler, context ); } );
}

void RDSClient::RevokeDBSecurityGroupIngressAsyncHelper(const RevokeDBSecurityGroupIngressRequest& request, const RevokeDBSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RevokeDBSecurityGroupIngress(request), context);
}

StartActivityStreamOutcome RDSClient::StartActivityStream(const StartActivityStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return StartActivityStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

StartActivityStreamOutcomeCallable RDSClient::StartActivityStreamCallable(const StartActivityStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartActivityStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartActivityStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::StartActivityStreamAsync(const StartActivityStreamRequest& request, const StartActivityStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartActivityStreamAsyncHelper( request, handler, context ); } );
}

void RDSClient::StartActivityStreamAsyncHelper(const StartActivityStreamRequest& request, const StartActivityStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartActivityStream(request), context);
}

StartDBClusterOutcome RDSClient::StartDBCluster(const StartDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return StartDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

StartDBClusterOutcomeCallable RDSClient::StartDBClusterCallable(const StartDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::StartDBClusterAsync(const StartDBClusterRequest& request, const StartDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartDBClusterAsyncHelper( request, handler, context ); } );
}

void RDSClient::StartDBClusterAsyncHelper(const StartDBClusterRequest& request, const StartDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartDBCluster(request), context);
}

StartDBInstanceOutcome RDSClient::StartDBInstance(const StartDBInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return StartDBInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

StartDBInstanceOutcomeCallable RDSClient::StartDBInstanceCallable(const StartDBInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDBInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDBInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::StartDBInstanceAsync(const StartDBInstanceRequest& request, const StartDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartDBInstanceAsyncHelper( request, handler, context ); } );
}

void RDSClient::StartDBInstanceAsyncHelper(const StartDBInstanceRequest& request, const StartDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartDBInstance(request), context);
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
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return StartDBInstanceAutomatedBackupsReplicationOutcome(MakeRequest(uri, newRequest, Aws::Http::HttpMethod::HTTP_POST));
}

StartDBInstanceAutomatedBackupsReplicationOutcomeCallable RDSClient::StartDBInstanceAutomatedBackupsReplicationCallable(const StartDBInstanceAutomatedBackupsReplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDBInstanceAutomatedBackupsReplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDBInstanceAutomatedBackupsReplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::StartDBInstanceAutomatedBackupsReplicationAsync(const StartDBInstanceAutomatedBackupsReplicationRequest& request, const StartDBInstanceAutomatedBackupsReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartDBInstanceAutomatedBackupsReplicationAsyncHelper( request, handler, context ); } );
}

void RDSClient::StartDBInstanceAutomatedBackupsReplicationAsyncHelper(const StartDBInstanceAutomatedBackupsReplicationRequest& request, const StartDBInstanceAutomatedBackupsReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartDBInstanceAutomatedBackupsReplication(request), context);
}

StartExportTaskOutcome RDSClient::StartExportTask(const StartExportTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return StartExportTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

StartExportTaskOutcomeCallable RDSClient::StartExportTaskCallable(const StartExportTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartExportTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartExportTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::StartExportTaskAsync(const StartExportTaskRequest& request, const StartExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartExportTaskAsyncHelper( request, handler, context ); } );
}

void RDSClient::StartExportTaskAsyncHelper(const StartExportTaskRequest& request, const StartExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartExportTask(request), context);
}

StopActivityStreamOutcome RDSClient::StopActivityStream(const StopActivityStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return StopActivityStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

StopActivityStreamOutcomeCallable RDSClient::StopActivityStreamCallable(const StopActivityStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopActivityStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopActivityStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::StopActivityStreamAsync(const StopActivityStreamRequest& request, const StopActivityStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopActivityStreamAsyncHelper( request, handler, context ); } );
}

void RDSClient::StopActivityStreamAsyncHelper(const StopActivityStreamRequest& request, const StopActivityStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopActivityStream(request), context);
}

StopDBClusterOutcome RDSClient::StopDBCluster(const StopDBClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return StopDBClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

StopDBClusterOutcomeCallable RDSClient::StopDBClusterCallable(const StopDBClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopDBClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopDBCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::StopDBClusterAsync(const StopDBClusterRequest& request, const StopDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopDBClusterAsyncHelper( request, handler, context ); } );
}

void RDSClient::StopDBClusterAsyncHelper(const StopDBClusterRequest& request, const StopDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopDBCluster(request), context);
}

StopDBInstanceOutcome RDSClient::StopDBInstance(const StopDBInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return StopDBInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

StopDBInstanceOutcomeCallable RDSClient::StopDBInstanceCallable(const StopDBInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopDBInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopDBInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::StopDBInstanceAsync(const StopDBInstanceRequest& request, const StopDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopDBInstanceAsyncHelper( request, handler, context ); } );
}

void RDSClient::StopDBInstanceAsyncHelper(const StopDBInstanceRequest& request, const StopDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopDBInstance(request), context);
}

StopDBInstanceAutomatedBackupsReplicationOutcome RDSClient::StopDBInstanceAutomatedBackupsReplication(const StopDBInstanceAutomatedBackupsReplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return StopDBInstanceAutomatedBackupsReplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

StopDBInstanceAutomatedBackupsReplicationOutcomeCallable RDSClient::StopDBInstanceAutomatedBackupsReplicationCallable(const StopDBInstanceAutomatedBackupsReplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopDBInstanceAutomatedBackupsReplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopDBInstanceAutomatedBackupsReplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSClient::StopDBInstanceAutomatedBackupsReplicationAsync(const StopDBInstanceAutomatedBackupsReplicationRequest& request, const StopDBInstanceAutomatedBackupsReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopDBInstanceAutomatedBackupsReplicationAsyncHelper( request, handler, context ); } );
}

void RDSClient::StopDBInstanceAutomatedBackupsReplicationAsyncHelper(const StopDBInstanceAutomatedBackupsReplicationRequest& request, const StopDBInstanceAutomatedBackupsReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopDBInstanceAutomatedBackupsReplication(request), context);
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
