/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/rds/RDSClient.h>
#include <aws/rds/RDSEndpoint.h>
#include <aws/rds/RDSErrorMarshaller.h>
#include <aws/rds/model/AddSourceIdentifierToSubscriptionRequest.h>
#include <aws/rds/model/AddTagsToResourceRequest.h>
#include <aws/rds/model/ApplyPendingMaintenanceActionRequest.h>
#include <aws/rds/model/AuthorizeDBSecurityGroupIngressRequest.h>
#include <aws/rds/model/CopyDBClusterSnapshotRequest.h>
#include <aws/rds/model/CopyDBParameterGroupRequest.h>
#include <aws/rds/model/CopyDBSnapshotRequest.h>
#include <aws/rds/model/CopyOptionGroupRequest.h>
#include <aws/rds/model/CreateDBClusterRequest.h>
#include <aws/rds/model/CreateDBClusterParameterGroupRequest.h>
#include <aws/rds/model/CreateDBClusterSnapshotRequest.h>
#include <aws/rds/model/CreateDBInstanceRequest.h>
#include <aws/rds/model/CreateDBInstanceReadReplicaRequest.h>
#include <aws/rds/model/CreateDBParameterGroupRequest.h>
#include <aws/rds/model/CreateDBSecurityGroupRequest.h>
#include <aws/rds/model/CreateDBSnapshotRequest.h>
#include <aws/rds/model/CreateDBSubnetGroupRequest.h>
#include <aws/rds/model/CreateEventSubscriptionRequest.h>
#include <aws/rds/model/CreateOptionGroupRequest.h>
#include <aws/rds/model/DeleteDBClusterRequest.h>
#include <aws/rds/model/DeleteDBClusterParameterGroupRequest.h>
#include <aws/rds/model/DeleteDBClusterSnapshotRequest.h>
#include <aws/rds/model/DeleteDBInstanceRequest.h>
#include <aws/rds/model/DeleteDBParameterGroupRequest.h>
#include <aws/rds/model/DeleteDBSecurityGroupRequest.h>
#include <aws/rds/model/DeleteDBSnapshotRequest.h>
#include <aws/rds/model/DeleteDBSubnetGroupRequest.h>
#include <aws/rds/model/DeleteEventSubscriptionRequest.h>
#include <aws/rds/model/DeleteOptionGroupRequest.h>
#include <aws/rds/model/DescribeAccountAttributesRequest.h>
#include <aws/rds/model/DescribeCertificatesRequest.h>
#include <aws/rds/model/DescribeDBClusterParameterGroupsRequest.h>
#include <aws/rds/model/DescribeDBClusterParametersRequest.h>
#include <aws/rds/model/DescribeDBClusterSnapshotsRequest.h>
#include <aws/rds/model/DescribeDBClustersRequest.h>
#include <aws/rds/model/DescribeDBEngineVersionsRequest.h>
#include <aws/rds/model/DescribeDBInstancesRequest.h>
#include <aws/rds/model/DescribeDBLogFilesRequest.h>
#include <aws/rds/model/DescribeDBParameterGroupsRequest.h>
#include <aws/rds/model/DescribeDBParametersRequest.h>
#include <aws/rds/model/DescribeDBSecurityGroupsRequest.h>
#include <aws/rds/model/DescribeDBSnapshotAttributesRequest.h>
#include <aws/rds/model/DescribeDBSnapshotsRequest.h>
#include <aws/rds/model/DescribeDBSubnetGroupsRequest.h>
#include <aws/rds/model/DescribeEngineDefaultClusterParametersRequest.h>
#include <aws/rds/model/DescribeEngineDefaultParametersRequest.h>
#include <aws/rds/model/DescribeEventCategoriesRequest.h>
#include <aws/rds/model/DescribeEventSubscriptionsRequest.h>
#include <aws/rds/model/DescribeEventsRequest.h>
#include <aws/rds/model/DescribeOptionGroupOptionsRequest.h>
#include <aws/rds/model/DescribeOptionGroupsRequest.h>
#include <aws/rds/model/DescribeOrderableDBInstanceOptionsRequest.h>
#include <aws/rds/model/DescribePendingMaintenanceActionsRequest.h>
#include <aws/rds/model/DescribeReservedDBInstancesRequest.h>
#include <aws/rds/model/DescribeReservedDBInstancesOfferingsRequest.h>
#include <aws/rds/model/DownloadDBLogFilePortionRequest.h>
#include <aws/rds/model/FailoverDBClusterRequest.h>
#include <aws/rds/model/ListTagsForResourceRequest.h>
#include <aws/rds/model/ModifyDBClusterRequest.h>
#include <aws/rds/model/ModifyDBClusterParameterGroupRequest.h>
#include <aws/rds/model/ModifyDBInstanceRequest.h>
#include <aws/rds/model/ModifyDBParameterGroupRequest.h>
#include <aws/rds/model/ModifyDBSnapshotAttributeRequest.h>
#include <aws/rds/model/ModifyDBSubnetGroupRequest.h>
#include <aws/rds/model/ModifyEventSubscriptionRequest.h>
#include <aws/rds/model/ModifyOptionGroupRequest.h>
#include <aws/rds/model/PromoteReadReplicaRequest.h>
#include <aws/rds/model/PurchaseReservedDBInstancesOfferingRequest.h>
#include <aws/rds/model/RebootDBInstanceRequest.h>
#include <aws/rds/model/RemoveSourceIdentifierFromSubscriptionRequest.h>
#include <aws/rds/model/RemoveTagsFromResourceRequest.h>
#include <aws/rds/model/ResetDBClusterParameterGroupRequest.h>
#include <aws/rds/model/ResetDBParameterGroupRequest.h>
#include <aws/rds/model/RestoreDBClusterFromSnapshotRequest.h>
#include <aws/rds/model/RestoreDBClusterToPointInTimeRequest.h>
#include <aws/rds/model/RestoreDBInstanceFromDBSnapshotRequest.h>
#include <aws/rds/model/RestoreDBInstanceToPointInTimeRequest.h>
#include <aws/rds/model/RevokeDBSecurityGroupIngressRequest.h>

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
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<RDSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RDSClient::RDSClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<RDSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RDSClient::RDSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
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
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << RDSEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}
AddSourceIdentifierToSubscriptionOutcome RDSClient::AddSourceIdentifierToSubscription(const AddSourceIdentifierToSubscriptionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AddSourceIdentifierToSubscriptionOutcome(AddSourceIdentifierToSubscriptionResult(outcome.GetResult()));
  }
  else
  {
    return AddSourceIdentifierToSubscriptionOutcome(outcome.GetError());
  }
}

AddSourceIdentifierToSubscriptionOutcomeCallable RDSClient::AddSourceIdentifierToSubscriptionCallable(const AddSourceIdentifierToSubscriptionRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::AddSourceIdentifierToSubscription, this, request);
}

void RDSClient::AddSourceIdentifierToSubscriptionAsync(const AddSourceIdentifierToSubscriptionRequest& request, const AddSourceIdentifierToSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::AddSourceIdentifierToSubscriptionAsyncHelper, this, request, handler, context);
}

void RDSClient::AddSourceIdentifierToSubscriptionAsyncHelper(const AddSourceIdentifierToSubscriptionRequest& request, const AddSourceIdentifierToSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddSourceIdentifierToSubscription(request), context);
}

AddTagsToResourceOutcome RDSClient::AddTagsToResource(const AddTagsToResourceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AddTagsToResourceOutcome(NoResult());
  }
  else
  {
    return AddTagsToResourceOutcome(outcome.GetError());
  }
}

AddTagsToResourceOutcomeCallable RDSClient::AddTagsToResourceCallable(const AddTagsToResourceRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::AddTagsToResource, this, request);
}

void RDSClient::AddTagsToResourceAsync(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::AddTagsToResourceAsyncHelper, this, request, handler, context);
}

void RDSClient::AddTagsToResourceAsyncHelper(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTagsToResource(request), context);
}

ApplyPendingMaintenanceActionOutcome RDSClient::ApplyPendingMaintenanceAction(const ApplyPendingMaintenanceActionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ApplyPendingMaintenanceActionOutcome(ApplyPendingMaintenanceActionResult(outcome.GetResult()));
  }
  else
  {
    return ApplyPendingMaintenanceActionOutcome(outcome.GetError());
  }
}

ApplyPendingMaintenanceActionOutcomeCallable RDSClient::ApplyPendingMaintenanceActionCallable(const ApplyPendingMaintenanceActionRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::ApplyPendingMaintenanceAction, this, request);
}

void RDSClient::ApplyPendingMaintenanceActionAsync(const ApplyPendingMaintenanceActionRequest& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::ApplyPendingMaintenanceActionAsyncHelper, this, request, handler, context);
}

void RDSClient::ApplyPendingMaintenanceActionAsyncHelper(const ApplyPendingMaintenanceActionRequest& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ApplyPendingMaintenanceAction(request), context);
}

AuthorizeDBSecurityGroupIngressOutcome RDSClient::AuthorizeDBSecurityGroupIngress(const AuthorizeDBSecurityGroupIngressRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AuthorizeDBSecurityGroupIngressOutcome(AuthorizeDBSecurityGroupIngressResult(outcome.GetResult()));
  }
  else
  {
    return AuthorizeDBSecurityGroupIngressOutcome(outcome.GetError());
  }
}

AuthorizeDBSecurityGroupIngressOutcomeCallable RDSClient::AuthorizeDBSecurityGroupIngressCallable(const AuthorizeDBSecurityGroupIngressRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::AuthorizeDBSecurityGroupIngress, this, request);
}

void RDSClient::AuthorizeDBSecurityGroupIngressAsync(const AuthorizeDBSecurityGroupIngressRequest& request, const AuthorizeDBSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::AuthorizeDBSecurityGroupIngressAsyncHelper, this, request, handler, context);
}

void RDSClient::AuthorizeDBSecurityGroupIngressAsyncHelper(const AuthorizeDBSecurityGroupIngressRequest& request, const AuthorizeDBSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AuthorizeDBSecurityGroupIngress(request), context);
}

CopyDBClusterSnapshotOutcome RDSClient::CopyDBClusterSnapshot(const CopyDBClusterSnapshotRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CopyDBClusterSnapshotOutcome(CopyDBClusterSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return CopyDBClusterSnapshotOutcome(outcome.GetError());
  }
}

CopyDBClusterSnapshotOutcomeCallable RDSClient::CopyDBClusterSnapshotCallable(const CopyDBClusterSnapshotRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::CopyDBClusterSnapshot, this, request);
}

void RDSClient::CopyDBClusterSnapshotAsync(const CopyDBClusterSnapshotRequest& request, const CopyDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::CopyDBClusterSnapshotAsyncHelper, this, request, handler, context);
}

void RDSClient::CopyDBClusterSnapshotAsyncHelper(const CopyDBClusterSnapshotRequest& request, const CopyDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CopyDBClusterSnapshot(request), context);
}

CopyDBParameterGroupOutcome RDSClient::CopyDBParameterGroup(const CopyDBParameterGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CopyDBParameterGroupOutcome(CopyDBParameterGroupResult(outcome.GetResult()));
  }
  else
  {
    return CopyDBParameterGroupOutcome(outcome.GetError());
  }
}

CopyDBParameterGroupOutcomeCallable RDSClient::CopyDBParameterGroupCallable(const CopyDBParameterGroupRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::CopyDBParameterGroup, this, request);
}

void RDSClient::CopyDBParameterGroupAsync(const CopyDBParameterGroupRequest& request, const CopyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::CopyDBParameterGroupAsyncHelper, this, request, handler, context);
}

void RDSClient::CopyDBParameterGroupAsyncHelper(const CopyDBParameterGroupRequest& request, const CopyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CopyDBParameterGroup(request), context);
}

CopyDBSnapshotOutcome RDSClient::CopyDBSnapshot(const CopyDBSnapshotRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CopyDBSnapshotOutcome(CopyDBSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return CopyDBSnapshotOutcome(outcome.GetError());
  }
}

CopyDBSnapshotOutcomeCallable RDSClient::CopyDBSnapshotCallable(const CopyDBSnapshotRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::CopyDBSnapshot, this, request);
}

void RDSClient::CopyDBSnapshotAsync(const CopyDBSnapshotRequest& request, const CopyDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::CopyDBSnapshotAsyncHelper, this, request, handler, context);
}

void RDSClient::CopyDBSnapshotAsyncHelper(const CopyDBSnapshotRequest& request, const CopyDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CopyDBSnapshot(request), context);
}

CopyOptionGroupOutcome RDSClient::CopyOptionGroup(const CopyOptionGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CopyOptionGroupOutcome(CopyOptionGroupResult(outcome.GetResult()));
  }
  else
  {
    return CopyOptionGroupOutcome(outcome.GetError());
  }
}

CopyOptionGroupOutcomeCallable RDSClient::CopyOptionGroupCallable(const CopyOptionGroupRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::CopyOptionGroup, this, request);
}

void RDSClient::CopyOptionGroupAsync(const CopyOptionGroupRequest& request, const CopyOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::CopyOptionGroupAsyncHelper, this, request, handler, context);
}

void RDSClient::CopyOptionGroupAsyncHelper(const CopyOptionGroupRequest& request, const CopyOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CopyOptionGroup(request), context);
}

CreateDBClusterOutcome RDSClient::CreateDBCluster(const CreateDBClusterRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDBClusterOutcome(CreateDBClusterResult(outcome.GetResult()));
  }
  else
  {
    return CreateDBClusterOutcome(outcome.GetError());
  }
}

CreateDBClusterOutcomeCallable RDSClient::CreateDBClusterCallable(const CreateDBClusterRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::CreateDBCluster, this, request);
}

void RDSClient::CreateDBClusterAsync(const CreateDBClusterRequest& request, const CreateDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::CreateDBClusterAsyncHelper, this, request, handler, context);
}

void RDSClient::CreateDBClusterAsyncHelper(const CreateDBClusterRequest& request, const CreateDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDBCluster(request), context);
}

CreateDBClusterParameterGroupOutcome RDSClient::CreateDBClusterParameterGroup(const CreateDBClusterParameterGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDBClusterParameterGroupOutcome(CreateDBClusterParameterGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateDBClusterParameterGroupOutcome(outcome.GetError());
  }
}

CreateDBClusterParameterGroupOutcomeCallable RDSClient::CreateDBClusterParameterGroupCallable(const CreateDBClusterParameterGroupRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::CreateDBClusterParameterGroup, this, request);
}

void RDSClient::CreateDBClusterParameterGroupAsync(const CreateDBClusterParameterGroupRequest& request, const CreateDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::CreateDBClusterParameterGroupAsyncHelper, this, request, handler, context);
}

void RDSClient::CreateDBClusterParameterGroupAsyncHelper(const CreateDBClusterParameterGroupRequest& request, const CreateDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDBClusterParameterGroup(request), context);
}

CreateDBClusterSnapshotOutcome RDSClient::CreateDBClusterSnapshot(const CreateDBClusterSnapshotRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDBClusterSnapshotOutcome(CreateDBClusterSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return CreateDBClusterSnapshotOutcome(outcome.GetError());
  }
}

CreateDBClusterSnapshotOutcomeCallable RDSClient::CreateDBClusterSnapshotCallable(const CreateDBClusterSnapshotRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::CreateDBClusterSnapshot, this, request);
}

void RDSClient::CreateDBClusterSnapshotAsync(const CreateDBClusterSnapshotRequest& request, const CreateDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::CreateDBClusterSnapshotAsyncHelper, this, request, handler, context);
}

void RDSClient::CreateDBClusterSnapshotAsyncHelper(const CreateDBClusterSnapshotRequest& request, const CreateDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDBClusterSnapshot(request), context);
}

CreateDBInstanceOutcome RDSClient::CreateDBInstance(const CreateDBInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDBInstanceOutcome(CreateDBInstanceResult(outcome.GetResult()));
  }
  else
  {
    return CreateDBInstanceOutcome(outcome.GetError());
  }
}

CreateDBInstanceOutcomeCallable RDSClient::CreateDBInstanceCallable(const CreateDBInstanceRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::CreateDBInstance, this, request);
}

void RDSClient::CreateDBInstanceAsync(const CreateDBInstanceRequest& request, const CreateDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::CreateDBInstanceAsyncHelper, this, request, handler, context);
}

void RDSClient::CreateDBInstanceAsyncHelper(const CreateDBInstanceRequest& request, const CreateDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDBInstance(request), context);
}

CreateDBInstanceReadReplicaOutcome RDSClient::CreateDBInstanceReadReplica(const CreateDBInstanceReadReplicaRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDBInstanceReadReplicaOutcome(CreateDBInstanceReadReplicaResult(outcome.GetResult()));
  }
  else
  {
    return CreateDBInstanceReadReplicaOutcome(outcome.GetError());
  }
}

CreateDBInstanceReadReplicaOutcomeCallable RDSClient::CreateDBInstanceReadReplicaCallable(const CreateDBInstanceReadReplicaRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::CreateDBInstanceReadReplica, this, request);
}

void RDSClient::CreateDBInstanceReadReplicaAsync(const CreateDBInstanceReadReplicaRequest& request, const CreateDBInstanceReadReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::CreateDBInstanceReadReplicaAsyncHelper, this, request, handler, context);
}

void RDSClient::CreateDBInstanceReadReplicaAsyncHelper(const CreateDBInstanceReadReplicaRequest& request, const CreateDBInstanceReadReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDBInstanceReadReplica(request), context);
}

CreateDBParameterGroupOutcome RDSClient::CreateDBParameterGroup(const CreateDBParameterGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDBParameterGroupOutcome(CreateDBParameterGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateDBParameterGroupOutcome(outcome.GetError());
  }
}

CreateDBParameterGroupOutcomeCallable RDSClient::CreateDBParameterGroupCallable(const CreateDBParameterGroupRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::CreateDBParameterGroup, this, request);
}

void RDSClient::CreateDBParameterGroupAsync(const CreateDBParameterGroupRequest& request, const CreateDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::CreateDBParameterGroupAsyncHelper, this, request, handler, context);
}

void RDSClient::CreateDBParameterGroupAsyncHelper(const CreateDBParameterGroupRequest& request, const CreateDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDBParameterGroup(request), context);
}

CreateDBSecurityGroupOutcome RDSClient::CreateDBSecurityGroup(const CreateDBSecurityGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDBSecurityGroupOutcome(CreateDBSecurityGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateDBSecurityGroupOutcome(outcome.GetError());
  }
}

CreateDBSecurityGroupOutcomeCallable RDSClient::CreateDBSecurityGroupCallable(const CreateDBSecurityGroupRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::CreateDBSecurityGroup, this, request);
}

void RDSClient::CreateDBSecurityGroupAsync(const CreateDBSecurityGroupRequest& request, const CreateDBSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::CreateDBSecurityGroupAsyncHelper, this, request, handler, context);
}

void RDSClient::CreateDBSecurityGroupAsyncHelper(const CreateDBSecurityGroupRequest& request, const CreateDBSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDBSecurityGroup(request), context);
}

CreateDBSnapshotOutcome RDSClient::CreateDBSnapshot(const CreateDBSnapshotRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDBSnapshotOutcome(CreateDBSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return CreateDBSnapshotOutcome(outcome.GetError());
  }
}

CreateDBSnapshotOutcomeCallable RDSClient::CreateDBSnapshotCallable(const CreateDBSnapshotRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::CreateDBSnapshot, this, request);
}

void RDSClient::CreateDBSnapshotAsync(const CreateDBSnapshotRequest& request, const CreateDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::CreateDBSnapshotAsyncHelper, this, request, handler, context);
}

void RDSClient::CreateDBSnapshotAsyncHelper(const CreateDBSnapshotRequest& request, const CreateDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDBSnapshot(request), context);
}

CreateDBSubnetGroupOutcome RDSClient::CreateDBSubnetGroup(const CreateDBSubnetGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDBSubnetGroupOutcome(CreateDBSubnetGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateDBSubnetGroupOutcome(outcome.GetError());
  }
}

CreateDBSubnetGroupOutcomeCallable RDSClient::CreateDBSubnetGroupCallable(const CreateDBSubnetGroupRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::CreateDBSubnetGroup, this, request);
}

void RDSClient::CreateDBSubnetGroupAsync(const CreateDBSubnetGroupRequest& request, const CreateDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::CreateDBSubnetGroupAsyncHelper, this, request, handler, context);
}

void RDSClient::CreateDBSubnetGroupAsyncHelper(const CreateDBSubnetGroupRequest& request, const CreateDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDBSubnetGroup(request), context);
}

CreateEventSubscriptionOutcome RDSClient::CreateEventSubscription(const CreateEventSubscriptionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateEventSubscriptionOutcome(CreateEventSubscriptionResult(outcome.GetResult()));
  }
  else
  {
    return CreateEventSubscriptionOutcome(outcome.GetError());
  }
}

CreateEventSubscriptionOutcomeCallable RDSClient::CreateEventSubscriptionCallable(const CreateEventSubscriptionRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::CreateEventSubscription, this, request);
}

void RDSClient::CreateEventSubscriptionAsync(const CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::CreateEventSubscriptionAsyncHelper, this, request, handler, context);
}

void RDSClient::CreateEventSubscriptionAsyncHelper(const CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateEventSubscription(request), context);
}

CreateOptionGroupOutcome RDSClient::CreateOptionGroup(const CreateOptionGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateOptionGroupOutcome(CreateOptionGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateOptionGroupOutcome(outcome.GetError());
  }
}

CreateOptionGroupOutcomeCallable RDSClient::CreateOptionGroupCallable(const CreateOptionGroupRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::CreateOptionGroup, this, request);
}

void RDSClient::CreateOptionGroupAsync(const CreateOptionGroupRequest& request, const CreateOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::CreateOptionGroupAsyncHelper, this, request, handler, context);
}

void RDSClient::CreateOptionGroupAsyncHelper(const CreateOptionGroupRequest& request, const CreateOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateOptionGroup(request), context);
}

DeleteDBClusterOutcome RDSClient::DeleteDBCluster(const DeleteDBClusterRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteDBClusterOutcome(DeleteDBClusterResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDBClusterOutcome(outcome.GetError());
  }
}

DeleteDBClusterOutcomeCallable RDSClient::DeleteDBClusterCallable(const DeleteDBClusterRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DeleteDBCluster, this, request);
}

void RDSClient::DeleteDBClusterAsync(const DeleteDBClusterRequest& request, const DeleteDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DeleteDBClusterAsyncHelper, this, request, handler, context);
}

void RDSClient::DeleteDBClusterAsyncHelper(const DeleteDBClusterRequest& request, const DeleteDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDBCluster(request), context);
}

DeleteDBClusterParameterGroupOutcome RDSClient::DeleteDBClusterParameterGroup(const DeleteDBClusterParameterGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteDBClusterParameterGroupOutcome(NoResult());
  }
  else
  {
    return DeleteDBClusterParameterGroupOutcome(outcome.GetError());
  }
}

DeleteDBClusterParameterGroupOutcomeCallable RDSClient::DeleteDBClusterParameterGroupCallable(const DeleteDBClusterParameterGroupRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DeleteDBClusterParameterGroup, this, request);
}

void RDSClient::DeleteDBClusterParameterGroupAsync(const DeleteDBClusterParameterGroupRequest& request, const DeleteDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DeleteDBClusterParameterGroupAsyncHelper, this, request, handler, context);
}

void RDSClient::DeleteDBClusterParameterGroupAsyncHelper(const DeleteDBClusterParameterGroupRequest& request, const DeleteDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDBClusterParameterGroup(request), context);
}

DeleteDBClusterSnapshotOutcome RDSClient::DeleteDBClusterSnapshot(const DeleteDBClusterSnapshotRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteDBClusterSnapshotOutcome(DeleteDBClusterSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDBClusterSnapshotOutcome(outcome.GetError());
  }
}

DeleteDBClusterSnapshotOutcomeCallable RDSClient::DeleteDBClusterSnapshotCallable(const DeleteDBClusterSnapshotRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DeleteDBClusterSnapshot, this, request);
}

void RDSClient::DeleteDBClusterSnapshotAsync(const DeleteDBClusterSnapshotRequest& request, const DeleteDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DeleteDBClusterSnapshotAsyncHelper, this, request, handler, context);
}

void RDSClient::DeleteDBClusterSnapshotAsyncHelper(const DeleteDBClusterSnapshotRequest& request, const DeleteDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDBClusterSnapshot(request), context);
}

DeleteDBInstanceOutcome RDSClient::DeleteDBInstance(const DeleteDBInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteDBInstanceOutcome(DeleteDBInstanceResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDBInstanceOutcome(outcome.GetError());
  }
}

DeleteDBInstanceOutcomeCallable RDSClient::DeleteDBInstanceCallable(const DeleteDBInstanceRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DeleteDBInstance, this, request);
}

void RDSClient::DeleteDBInstanceAsync(const DeleteDBInstanceRequest& request, const DeleteDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DeleteDBInstanceAsyncHelper, this, request, handler, context);
}

void RDSClient::DeleteDBInstanceAsyncHelper(const DeleteDBInstanceRequest& request, const DeleteDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDBInstance(request), context);
}

DeleteDBParameterGroupOutcome RDSClient::DeleteDBParameterGroup(const DeleteDBParameterGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteDBParameterGroupOutcome(NoResult());
  }
  else
  {
    return DeleteDBParameterGroupOutcome(outcome.GetError());
  }
}

DeleteDBParameterGroupOutcomeCallable RDSClient::DeleteDBParameterGroupCallable(const DeleteDBParameterGroupRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DeleteDBParameterGroup, this, request);
}

void RDSClient::DeleteDBParameterGroupAsync(const DeleteDBParameterGroupRequest& request, const DeleteDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DeleteDBParameterGroupAsyncHelper, this, request, handler, context);
}

void RDSClient::DeleteDBParameterGroupAsyncHelper(const DeleteDBParameterGroupRequest& request, const DeleteDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDBParameterGroup(request), context);
}

DeleteDBSecurityGroupOutcome RDSClient::DeleteDBSecurityGroup(const DeleteDBSecurityGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteDBSecurityGroupOutcome(NoResult());
  }
  else
  {
    return DeleteDBSecurityGroupOutcome(outcome.GetError());
  }
}

DeleteDBSecurityGroupOutcomeCallable RDSClient::DeleteDBSecurityGroupCallable(const DeleteDBSecurityGroupRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DeleteDBSecurityGroup, this, request);
}

void RDSClient::DeleteDBSecurityGroupAsync(const DeleteDBSecurityGroupRequest& request, const DeleteDBSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DeleteDBSecurityGroupAsyncHelper, this, request, handler, context);
}

void RDSClient::DeleteDBSecurityGroupAsyncHelper(const DeleteDBSecurityGroupRequest& request, const DeleteDBSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDBSecurityGroup(request), context);
}

DeleteDBSnapshotOutcome RDSClient::DeleteDBSnapshot(const DeleteDBSnapshotRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteDBSnapshotOutcome(DeleteDBSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDBSnapshotOutcome(outcome.GetError());
  }
}

DeleteDBSnapshotOutcomeCallable RDSClient::DeleteDBSnapshotCallable(const DeleteDBSnapshotRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DeleteDBSnapshot, this, request);
}

void RDSClient::DeleteDBSnapshotAsync(const DeleteDBSnapshotRequest& request, const DeleteDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DeleteDBSnapshotAsyncHelper, this, request, handler, context);
}

void RDSClient::DeleteDBSnapshotAsyncHelper(const DeleteDBSnapshotRequest& request, const DeleteDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDBSnapshot(request), context);
}

DeleteDBSubnetGroupOutcome RDSClient::DeleteDBSubnetGroup(const DeleteDBSubnetGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteDBSubnetGroupOutcome(NoResult());
  }
  else
  {
    return DeleteDBSubnetGroupOutcome(outcome.GetError());
  }
}

DeleteDBSubnetGroupOutcomeCallable RDSClient::DeleteDBSubnetGroupCallable(const DeleteDBSubnetGroupRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DeleteDBSubnetGroup, this, request);
}

void RDSClient::DeleteDBSubnetGroupAsync(const DeleteDBSubnetGroupRequest& request, const DeleteDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DeleteDBSubnetGroupAsyncHelper, this, request, handler, context);
}

void RDSClient::DeleteDBSubnetGroupAsyncHelper(const DeleteDBSubnetGroupRequest& request, const DeleteDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDBSubnetGroup(request), context);
}

DeleteEventSubscriptionOutcome RDSClient::DeleteEventSubscription(const DeleteEventSubscriptionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteEventSubscriptionOutcome(DeleteEventSubscriptionResult(outcome.GetResult()));
  }
  else
  {
    return DeleteEventSubscriptionOutcome(outcome.GetError());
  }
}

DeleteEventSubscriptionOutcomeCallable RDSClient::DeleteEventSubscriptionCallable(const DeleteEventSubscriptionRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DeleteEventSubscription, this, request);
}

void RDSClient::DeleteEventSubscriptionAsync(const DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DeleteEventSubscriptionAsyncHelper, this, request, handler, context);
}

void RDSClient::DeleteEventSubscriptionAsyncHelper(const DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEventSubscription(request), context);
}

DeleteOptionGroupOutcome RDSClient::DeleteOptionGroup(const DeleteOptionGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteOptionGroupOutcome(NoResult());
  }
  else
  {
    return DeleteOptionGroupOutcome(outcome.GetError());
  }
}

DeleteOptionGroupOutcomeCallable RDSClient::DeleteOptionGroupCallable(const DeleteOptionGroupRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DeleteOptionGroup, this, request);
}

void RDSClient::DeleteOptionGroupAsync(const DeleteOptionGroupRequest& request, const DeleteOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DeleteOptionGroupAsyncHelper, this, request, handler, context);
}

void RDSClient::DeleteOptionGroupAsyncHelper(const DeleteOptionGroupRequest& request, const DeleteOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteOptionGroup(request), context);
}

DescribeAccountAttributesOutcome RDSClient::DescribeAccountAttributes(const DescribeAccountAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeAccountAttributesOutcome(DescribeAccountAttributesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAccountAttributesOutcome(outcome.GetError());
  }
}

DescribeAccountAttributesOutcomeCallable RDSClient::DescribeAccountAttributesCallable(const DescribeAccountAttributesRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DescribeAccountAttributes, this, request);
}

void RDSClient::DescribeAccountAttributesAsync(const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DescribeAccountAttributesAsyncHelper, this, request, handler, context);
}

void RDSClient::DescribeAccountAttributesAsyncHelper(const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAccountAttributes(request), context);
}

DescribeCertificatesOutcome RDSClient::DescribeCertificates(const DescribeCertificatesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeCertificatesOutcome(DescribeCertificatesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCertificatesOutcome(outcome.GetError());
  }
}

DescribeCertificatesOutcomeCallable RDSClient::DescribeCertificatesCallable(const DescribeCertificatesRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DescribeCertificates, this, request);
}

void RDSClient::DescribeCertificatesAsync(const DescribeCertificatesRequest& request, const DescribeCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DescribeCertificatesAsyncHelper, this, request, handler, context);
}

void RDSClient::DescribeCertificatesAsyncHelper(const DescribeCertificatesRequest& request, const DescribeCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCertificates(request), context);
}

DescribeDBClusterParameterGroupsOutcome RDSClient::DescribeDBClusterParameterGroups(const DescribeDBClusterParameterGroupsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeDBClusterParameterGroupsOutcome(DescribeDBClusterParameterGroupsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDBClusterParameterGroupsOutcome(outcome.GetError());
  }
}

DescribeDBClusterParameterGroupsOutcomeCallable RDSClient::DescribeDBClusterParameterGroupsCallable(const DescribeDBClusterParameterGroupsRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DescribeDBClusterParameterGroups, this, request);
}

void RDSClient::DescribeDBClusterParameterGroupsAsync(const DescribeDBClusterParameterGroupsRequest& request, const DescribeDBClusterParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DescribeDBClusterParameterGroupsAsyncHelper, this, request, handler, context);
}

void RDSClient::DescribeDBClusterParameterGroupsAsyncHelper(const DescribeDBClusterParameterGroupsRequest& request, const DescribeDBClusterParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBClusterParameterGroups(request), context);
}

DescribeDBClusterParametersOutcome RDSClient::DescribeDBClusterParameters(const DescribeDBClusterParametersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeDBClusterParametersOutcome(DescribeDBClusterParametersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDBClusterParametersOutcome(outcome.GetError());
  }
}

DescribeDBClusterParametersOutcomeCallable RDSClient::DescribeDBClusterParametersCallable(const DescribeDBClusterParametersRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DescribeDBClusterParameters, this, request);
}

void RDSClient::DescribeDBClusterParametersAsync(const DescribeDBClusterParametersRequest& request, const DescribeDBClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DescribeDBClusterParametersAsyncHelper, this, request, handler, context);
}

void RDSClient::DescribeDBClusterParametersAsyncHelper(const DescribeDBClusterParametersRequest& request, const DescribeDBClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBClusterParameters(request), context);
}

DescribeDBClusterSnapshotsOutcome RDSClient::DescribeDBClusterSnapshots(const DescribeDBClusterSnapshotsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeDBClusterSnapshotsOutcome(DescribeDBClusterSnapshotsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDBClusterSnapshotsOutcome(outcome.GetError());
  }
}

DescribeDBClusterSnapshotsOutcomeCallable RDSClient::DescribeDBClusterSnapshotsCallable(const DescribeDBClusterSnapshotsRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DescribeDBClusterSnapshots, this, request);
}

void RDSClient::DescribeDBClusterSnapshotsAsync(const DescribeDBClusterSnapshotsRequest& request, const DescribeDBClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DescribeDBClusterSnapshotsAsyncHelper, this, request, handler, context);
}

void RDSClient::DescribeDBClusterSnapshotsAsyncHelper(const DescribeDBClusterSnapshotsRequest& request, const DescribeDBClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBClusterSnapshots(request), context);
}

DescribeDBClustersOutcome RDSClient::DescribeDBClusters(const DescribeDBClustersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeDBClustersOutcome(DescribeDBClustersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDBClustersOutcome(outcome.GetError());
  }
}

DescribeDBClustersOutcomeCallable RDSClient::DescribeDBClustersCallable(const DescribeDBClustersRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DescribeDBClusters, this, request);
}

void RDSClient::DescribeDBClustersAsync(const DescribeDBClustersRequest& request, const DescribeDBClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DescribeDBClustersAsyncHelper, this, request, handler, context);
}

void RDSClient::DescribeDBClustersAsyncHelper(const DescribeDBClustersRequest& request, const DescribeDBClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBClusters(request), context);
}

DescribeDBEngineVersionsOutcome RDSClient::DescribeDBEngineVersions(const DescribeDBEngineVersionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeDBEngineVersionsOutcome(DescribeDBEngineVersionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDBEngineVersionsOutcome(outcome.GetError());
  }
}

DescribeDBEngineVersionsOutcomeCallable RDSClient::DescribeDBEngineVersionsCallable(const DescribeDBEngineVersionsRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DescribeDBEngineVersions, this, request);
}

void RDSClient::DescribeDBEngineVersionsAsync(const DescribeDBEngineVersionsRequest& request, const DescribeDBEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DescribeDBEngineVersionsAsyncHelper, this, request, handler, context);
}

void RDSClient::DescribeDBEngineVersionsAsyncHelper(const DescribeDBEngineVersionsRequest& request, const DescribeDBEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBEngineVersions(request), context);
}

DescribeDBInstancesOutcome RDSClient::DescribeDBInstances(const DescribeDBInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeDBInstancesOutcome(DescribeDBInstancesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDBInstancesOutcome(outcome.GetError());
  }
}

DescribeDBInstancesOutcomeCallable RDSClient::DescribeDBInstancesCallable(const DescribeDBInstancesRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DescribeDBInstances, this, request);
}

void RDSClient::DescribeDBInstancesAsync(const DescribeDBInstancesRequest& request, const DescribeDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DescribeDBInstancesAsyncHelper, this, request, handler, context);
}

void RDSClient::DescribeDBInstancesAsyncHelper(const DescribeDBInstancesRequest& request, const DescribeDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBInstances(request), context);
}

DescribeDBLogFilesOutcome RDSClient::DescribeDBLogFiles(const DescribeDBLogFilesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeDBLogFilesOutcome(DescribeDBLogFilesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDBLogFilesOutcome(outcome.GetError());
  }
}

DescribeDBLogFilesOutcomeCallable RDSClient::DescribeDBLogFilesCallable(const DescribeDBLogFilesRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DescribeDBLogFiles, this, request);
}

void RDSClient::DescribeDBLogFilesAsync(const DescribeDBLogFilesRequest& request, const DescribeDBLogFilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DescribeDBLogFilesAsyncHelper, this, request, handler, context);
}

void RDSClient::DescribeDBLogFilesAsyncHelper(const DescribeDBLogFilesRequest& request, const DescribeDBLogFilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBLogFiles(request), context);
}

DescribeDBParameterGroupsOutcome RDSClient::DescribeDBParameterGroups(const DescribeDBParameterGroupsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeDBParameterGroupsOutcome(DescribeDBParameterGroupsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDBParameterGroupsOutcome(outcome.GetError());
  }
}

DescribeDBParameterGroupsOutcomeCallable RDSClient::DescribeDBParameterGroupsCallable(const DescribeDBParameterGroupsRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DescribeDBParameterGroups, this, request);
}

void RDSClient::DescribeDBParameterGroupsAsync(const DescribeDBParameterGroupsRequest& request, const DescribeDBParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DescribeDBParameterGroupsAsyncHelper, this, request, handler, context);
}

void RDSClient::DescribeDBParameterGroupsAsyncHelper(const DescribeDBParameterGroupsRequest& request, const DescribeDBParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBParameterGroups(request), context);
}

DescribeDBParametersOutcome RDSClient::DescribeDBParameters(const DescribeDBParametersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeDBParametersOutcome(DescribeDBParametersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDBParametersOutcome(outcome.GetError());
  }
}

DescribeDBParametersOutcomeCallable RDSClient::DescribeDBParametersCallable(const DescribeDBParametersRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DescribeDBParameters, this, request);
}

void RDSClient::DescribeDBParametersAsync(const DescribeDBParametersRequest& request, const DescribeDBParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DescribeDBParametersAsyncHelper, this, request, handler, context);
}

void RDSClient::DescribeDBParametersAsyncHelper(const DescribeDBParametersRequest& request, const DescribeDBParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBParameters(request), context);
}

DescribeDBSecurityGroupsOutcome RDSClient::DescribeDBSecurityGroups(const DescribeDBSecurityGroupsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeDBSecurityGroupsOutcome(DescribeDBSecurityGroupsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDBSecurityGroupsOutcome(outcome.GetError());
  }
}

DescribeDBSecurityGroupsOutcomeCallable RDSClient::DescribeDBSecurityGroupsCallable(const DescribeDBSecurityGroupsRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DescribeDBSecurityGroups, this, request);
}

void RDSClient::DescribeDBSecurityGroupsAsync(const DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DescribeDBSecurityGroupsAsyncHelper, this, request, handler, context);
}

void RDSClient::DescribeDBSecurityGroupsAsyncHelper(const DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBSecurityGroups(request), context);
}

DescribeDBSnapshotAttributesOutcome RDSClient::DescribeDBSnapshotAttributes(const DescribeDBSnapshotAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeDBSnapshotAttributesOutcome(DescribeDBSnapshotAttributesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDBSnapshotAttributesOutcome(outcome.GetError());
  }
}

DescribeDBSnapshotAttributesOutcomeCallable RDSClient::DescribeDBSnapshotAttributesCallable(const DescribeDBSnapshotAttributesRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DescribeDBSnapshotAttributes, this, request);
}

void RDSClient::DescribeDBSnapshotAttributesAsync(const DescribeDBSnapshotAttributesRequest& request, const DescribeDBSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DescribeDBSnapshotAttributesAsyncHelper, this, request, handler, context);
}

void RDSClient::DescribeDBSnapshotAttributesAsyncHelper(const DescribeDBSnapshotAttributesRequest& request, const DescribeDBSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBSnapshotAttributes(request), context);
}

DescribeDBSnapshotsOutcome RDSClient::DescribeDBSnapshots(const DescribeDBSnapshotsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeDBSnapshotsOutcome(DescribeDBSnapshotsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDBSnapshotsOutcome(outcome.GetError());
  }
}

DescribeDBSnapshotsOutcomeCallable RDSClient::DescribeDBSnapshotsCallable(const DescribeDBSnapshotsRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DescribeDBSnapshots, this, request);
}

void RDSClient::DescribeDBSnapshotsAsync(const DescribeDBSnapshotsRequest& request, const DescribeDBSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DescribeDBSnapshotsAsyncHelper, this, request, handler, context);
}

void RDSClient::DescribeDBSnapshotsAsyncHelper(const DescribeDBSnapshotsRequest& request, const DescribeDBSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBSnapshots(request), context);
}

DescribeDBSubnetGroupsOutcome RDSClient::DescribeDBSubnetGroups(const DescribeDBSubnetGroupsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeDBSubnetGroupsOutcome(DescribeDBSubnetGroupsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDBSubnetGroupsOutcome(outcome.GetError());
  }
}

DescribeDBSubnetGroupsOutcomeCallable RDSClient::DescribeDBSubnetGroupsCallable(const DescribeDBSubnetGroupsRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DescribeDBSubnetGroups, this, request);
}

void RDSClient::DescribeDBSubnetGroupsAsync(const DescribeDBSubnetGroupsRequest& request, const DescribeDBSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DescribeDBSubnetGroupsAsyncHelper, this, request, handler, context);
}

void RDSClient::DescribeDBSubnetGroupsAsyncHelper(const DescribeDBSubnetGroupsRequest& request, const DescribeDBSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDBSubnetGroups(request), context);
}

DescribeEngineDefaultClusterParametersOutcome RDSClient::DescribeEngineDefaultClusterParameters(const DescribeEngineDefaultClusterParametersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeEngineDefaultClusterParametersOutcome(DescribeEngineDefaultClusterParametersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEngineDefaultClusterParametersOutcome(outcome.GetError());
  }
}

DescribeEngineDefaultClusterParametersOutcomeCallable RDSClient::DescribeEngineDefaultClusterParametersCallable(const DescribeEngineDefaultClusterParametersRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DescribeEngineDefaultClusterParameters, this, request);
}

void RDSClient::DescribeEngineDefaultClusterParametersAsync(const DescribeEngineDefaultClusterParametersRequest& request, const DescribeEngineDefaultClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DescribeEngineDefaultClusterParametersAsyncHelper, this, request, handler, context);
}

void RDSClient::DescribeEngineDefaultClusterParametersAsyncHelper(const DescribeEngineDefaultClusterParametersRequest& request, const DescribeEngineDefaultClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEngineDefaultClusterParameters(request), context);
}

DescribeEngineDefaultParametersOutcome RDSClient::DescribeEngineDefaultParameters(const DescribeEngineDefaultParametersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeEngineDefaultParametersOutcome(DescribeEngineDefaultParametersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEngineDefaultParametersOutcome(outcome.GetError());
  }
}

DescribeEngineDefaultParametersOutcomeCallable RDSClient::DescribeEngineDefaultParametersCallable(const DescribeEngineDefaultParametersRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DescribeEngineDefaultParameters, this, request);
}

void RDSClient::DescribeEngineDefaultParametersAsync(const DescribeEngineDefaultParametersRequest& request, const DescribeEngineDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DescribeEngineDefaultParametersAsyncHelper, this, request, handler, context);
}

void RDSClient::DescribeEngineDefaultParametersAsyncHelper(const DescribeEngineDefaultParametersRequest& request, const DescribeEngineDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEngineDefaultParameters(request), context);
}

DescribeEventCategoriesOutcome RDSClient::DescribeEventCategories(const DescribeEventCategoriesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeEventCategoriesOutcome(DescribeEventCategoriesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEventCategoriesOutcome(outcome.GetError());
  }
}

DescribeEventCategoriesOutcomeCallable RDSClient::DescribeEventCategoriesCallable(const DescribeEventCategoriesRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DescribeEventCategories, this, request);
}

void RDSClient::DescribeEventCategoriesAsync(const DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DescribeEventCategoriesAsyncHelper, this, request, handler, context);
}

void RDSClient::DescribeEventCategoriesAsyncHelper(const DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEventCategories(request), context);
}

DescribeEventSubscriptionsOutcome RDSClient::DescribeEventSubscriptions(const DescribeEventSubscriptionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeEventSubscriptionsOutcome(DescribeEventSubscriptionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEventSubscriptionsOutcome(outcome.GetError());
  }
}

DescribeEventSubscriptionsOutcomeCallable RDSClient::DescribeEventSubscriptionsCallable(const DescribeEventSubscriptionsRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DescribeEventSubscriptions, this, request);
}

void RDSClient::DescribeEventSubscriptionsAsync(const DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DescribeEventSubscriptionsAsyncHelper, this, request, handler, context);
}

void RDSClient::DescribeEventSubscriptionsAsyncHelper(const DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEventSubscriptions(request), context);
}

DescribeEventsOutcome RDSClient::DescribeEvents(const DescribeEventsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeEventsOutcome(DescribeEventsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEventsOutcome(outcome.GetError());
  }
}

DescribeEventsOutcomeCallable RDSClient::DescribeEventsCallable(const DescribeEventsRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DescribeEvents, this, request);
}

void RDSClient::DescribeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DescribeEventsAsyncHelper, this, request, handler, context);
}

void RDSClient::DescribeEventsAsyncHelper(const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEvents(request), context);
}

DescribeOptionGroupOptionsOutcome RDSClient::DescribeOptionGroupOptions(const DescribeOptionGroupOptionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeOptionGroupOptionsOutcome(DescribeOptionGroupOptionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeOptionGroupOptionsOutcome(outcome.GetError());
  }
}

DescribeOptionGroupOptionsOutcomeCallable RDSClient::DescribeOptionGroupOptionsCallable(const DescribeOptionGroupOptionsRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DescribeOptionGroupOptions, this, request);
}

void RDSClient::DescribeOptionGroupOptionsAsync(const DescribeOptionGroupOptionsRequest& request, const DescribeOptionGroupOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DescribeOptionGroupOptionsAsyncHelper, this, request, handler, context);
}

void RDSClient::DescribeOptionGroupOptionsAsyncHelper(const DescribeOptionGroupOptionsRequest& request, const DescribeOptionGroupOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeOptionGroupOptions(request), context);
}

DescribeOptionGroupsOutcome RDSClient::DescribeOptionGroups(const DescribeOptionGroupsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeOptionGroupsOutcome(DescribeOptionGroupsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeOptionGroupsOutcome(outcome.GetError());
  }
}

DescribeOptionGroupsOutcomeCallable RDSClient::DescribeOptionGroupsCallable(const DescribeOptionGroupsRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DescribeOptionGroups, this, request);
}

void RDSClient::DescribeOptionGroupsAsync(const DescribeOptionGroupsRequest& request, const DescribeOptionGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DescribeOptionGroupsAsyncHelper, this, request, handler, context);
}

void RDSClient::DescribeOptionGroupsAsyncHelper(const DescribeOptionGroupsRequest& request, const DescribeOptionGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeOptionGroups(request), context);
}

DescribeOrderableDBInstanceOptionsOutcome RDSClient::DescribeOrderableDBInstanceOptions(const DescribeOrderableDBInstanceOptionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeOrderableDBInstanceOptionsOutcome(DescribeOrderableDBInstanceOptionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeOrderableDBInstanceOptionsOutcome(outcome.GetError());
  }
}

DescribeOrderableDBInstanceOptionsOutcomeCallable RDSClient::DescribeOrderableDBInstanceOptionsCallable(const DescribeOrderableDBInstanceOptionsRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DescribeOrderableDBInstanceOptions, this, request);
}

void RDSClient::DescribeOrderableDBInstanceOptionsAsync(const DescribeOrderableDBInstanceOptionsRequest& request, const DescribeOrderableDBInstanceOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DescribeOrderableDBInstanceOptionsAsyncHelper, this, request, handler, context);
}

void RDSClient::DescribeOrderableDBInstanceOptionsAsyncHelper(const DescribeOrderableDBInstanceOptionsRequest& request, const DescribeOrderableDBInstanceOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeOrderableDBInstanceOptions(request), context);
}

DescribePendingMaintenanceActionsOutcome RDSClient::DescribePendingMaintenanceActions(const DescribePendingMaintenanceActionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribePendingMaintenanceActionsOutcome(DescribePendingMaintenanceActionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribePendingMaintenanceActionsOutcome(outcome.GetError());
  }
}

DescribePendingMaintenanceActionsOutcomeCallable RDSClient::DescribePendingMaintenanceActionsCallable(const DescribePendingMaintenanceActionsRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DescribePendingMaintenanceActions, this, request);
}

void RDSClient::DescribePendingMaintenanceActionsAsync(const DescribePendingMaintenanceActionsRequest& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DescribePendingMaintenanceActionsAsyncHelper, this, request, handler, context);
}

void RDSClient::DescribePendingMaintenanceActionsAsyncHelper(const DescribePendingMaintenanceActionsRequest& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePendingMaintenanceActions(request), context);
}

DescribeReservedDBInstancesOutcome RDSClient::DescribeReservedDBInstances(const DescribeReservedDBInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeReservedDBInstancesOutcome(DescribeReservedDBInstancesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeReservedDBInstancesOutcome(outcome.GetError());
  }
}

DescribeReservedDBInstancesOutcomeCallable RDSClient::DescribeReservedDBInstancesCallable(const DescribeReservedDBInstancesRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DescribeReservedDBInstances, this, request);
}

void RDSClient::DescribeReservedDBInstancesAsync(const DescribeReservedDBInstancesRequest& request, const DescribeReservedDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DescribeReservedDBInstancesAsyncHelper, this, request, handler, context);
}

void RDSClient::DescribeReservedDBInstancesAsyncHelper(const DescribeReservedDBInstancesRequest& request, const DescribeReservedDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReservedDBInstances(request), context);
}

DescribeReservedDBInstancesOfferingsOutcome RDSClient::DescribeReservedDBInstancesOfferings(const DescribeReservedDBInstancesOfferingsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeReservedDBInstancesOfferingsOutcome(DescribeReservedDBInstancesOfferingsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeReservedDBInstancesOfferingsOutcome(outcome.GetError());
  }
}

DescribeReservedDBInstancesOfferingsOutcomeCallable RDSClient::DescribeReservedDBInstancesOfferingsCallable(const DescribeReservedDBInstancesOfferingsRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DescribeReservedDBInstancesOfferings, this, request);
}

void RDSClient::DescribeReservedDBInstancesOfferingsAsync(const DescribeReservedDBInstancesOfferingsRequest& request, const DescribeReservedDBInstancesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DescribeReservedDBInstancesOfferingsAsyncHelper, this, request, handler, context);
}

void RDSClient::DescribeReservedDBInstancesOfferingsAsyncHelper(const DescribeReservedDBInstancesOfferingsRequest& request, const DescribeReservedDBInstancesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReservedDBInstancesOfferings(request), context);
}

DownloadDBLogFilePortionOutcome RDSClient::DownloadDBLogFilePortion(const DownloadDBLogFilePortionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DownloadDBLogFilePortionOutcome(DownloadDBLogFilePortionResult(outcome.GetResult()));
  }
  else
  {
    return DownloadDBLogFilePortionOutcome(outcome.GetError());
  }
}

DownloadDBLogFilePortionOutcomeCallable RDSClient::DownloadDBLogFilePortionCallable(const DownloadDBLogFilePortionRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::DownloadDBLogFilePortion, this, request);
}

void RDSClient::DownloadDBLogFilePortionAsync(const DownloadDBLogFilePortionRequest& request, const DownloadDBLogFilePortionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::DownloadDBLogFilePortionAsyncHelper, this, request, handler, context);
}

void RDSClient::DownloadDBLogFilePortionAsyncHelper(const DownloadDBLogFilePortionRequest& request, const DownloadDBLogFilePortionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DownloadDBLogFilePortion(request), context);
}

FailoverDBClusterOutcome RDSClient::FailoverDBCluster(const FailoverDBClusterRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return FailoverDBClusterOutcome(FailoverDBClusterResult(outcome.GetResult()));
  }
  else
  {
    return FailoverDBClusterOutcome(outcome.GetError());
  }
}

FailoverDBClusterOutcomeCallable RDSClient::FailoverDBClusterCallable(const FailoverDBClusterRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::FailoverDBCluster, this, request);
}

void RDSClient::FailoverDBClusterAsync(const FailoverDBClusterRequest& request, const FailoverDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::FailoverDBClusterAsyncHelper, this, request, handler, context);
}

void RDSClient::FailoverDBClusterAsyncHelper(const FailoverDBClusterRequest& request, const FailoverDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, FailoverDBCluster(request), context);
}

ListTagsForResourceOutcome RDSClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
}

ListTagsForResourceOutcomeCallable RDSClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::ListTagsForResource, this, request);
}

void RDSClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::ListTagsForResourceAsyncHelper, this, request, handler, context);
}

void RDSClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ModifyDBClusterOutcome RDSClient::ModifyDBCluster(const ModifyDBClusterRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyDBClusterOutcome(ModifyDBClusterResult(outcome.GetResult()));
  }
  else
  {
    return ModifyDBClusterOutcome(outcome.GetError());
  }
}

ModifyDBClusterOutcomeCallable RDSClient::ModifyDBClusterCallable(const ModifyDBClusterRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::ModifyDBCluster, this, request);
}

void RDSClient::ModifyDBClusterAsync(const ModifyDBClusterRequest& request, const ModifyDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::ModifyDBClusterAsyncHelper, this, request, handler, context);
}

void RDSClient::ModifyDBClusterAsyncHelper(const ModifyDBClusterRequest& request, const ModifyDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyDBCluster(request), context);
}

ModifyDBClusterParameterGroupOutcome RDSClient::ModifyDBClusterParameterGroup(const ModifyDBClusterParameterGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyDBClusterParameterGroupOutcome(ModifyDBClusterParameterGroupResult(outcome.GetResult()));
  }
  else
  {
    return ModifyDBClusterParameterGroupOutcome(outcome.GetError());
  }
}

ModifyDBClusterParameterGroupOutcomeCallable RDSClient::ModifyDBClusterParameterGroupCallable(const ModifyDBClusterParameterGroupRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::ModifyDBClusterParameterGroup, this, request);
}

void RDSClient::ModifyDBClusterParameterGroupAsync(const ModifyDBClusterParameterGroupRequest& request, const ModifyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::ModifyDBClusterParameterGroupAsyncHelper, this, request, handler, context);
}

void RDSClient::ModifyDBClusterParameterGroupAsyncHelper(const ModifyDBClusterParameterGroupRequest& request, const ModifyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyDBClusterParameterGroup(request), context);
}

ModifyDBInstanceOutcome RDSClient::ModifyDBInstance(const ModifyDBInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyDBInstanceOutcome(ModifyDBInstanceResult(outcome.GetResult()));
  }
  else
  {
    return ModifyDBInstanceOutcome(outcome.GetError());
  }
}

ModifyDBInstanceOutcomeCallable RDSClient::ModifyDBInstanceCallable(const ModifyDBInstanceRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::ModifyDBInstance, this, request);
}

void RDSClient::ModifyDBInstanceAsync(const ModifyDBInstanceRequest& request, const ModifyDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::ModifyDBInstanceAsyncHelper, this, request, handler, context);
}

void RDSClient::ModifyDBInstanceAsyncHelper(const ModifyDBInstanceRequest& request, const ModifyDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyDBInstance(request), context);
}

ModifyDBParameterGroupOutcome RDSClient::ModifyDBParameterGroup(const ModifyDBParameterGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyDBParameterGroupOutcome(ModifyDBParameterGroupResult(outcome.GetResult()));
  }
  else
  {
    return ModifyDBParameterGroupOutcome(outcome.GetError());
  }
}

ModifyDBParameterGroupOutcomeCallable RDSClient::ModifyDBParameterGroupCallable(const ModifyDBParameterGroupRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::ModifyDBParameterGroup, this, request);
}

void RDSClient::ModifyDBParameterGroupAsync(const ModifyDBParameterGroupRequest& request, const ModifyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::ModifyDBParameterGroupAsyncHelper, this, request, handler, context);
}

void RDSClient::ModifyDBParameterGroupAsyncHelper(const ModifyDBParameterGroupRequest& request, const ModifyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyDBParameterGroup(request), context);
}

ModifyDBSnapshotAttributeOutcome RDSClient::ModifyDBSnapshotAttribute(const ModifyDBSnapshotAttributeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyDBSnapshotAttributeOutcome(ModifyDBSnapshotAttributeResult(outcome.GetResult()));
  }
  else
  {
    return ModifyDBSnapshotAttributeOutcome(outcome.GetError());
  }
}

ModifyDBSnapshotAttributeOutcomeCallable RDSClient::ModifyDBSnapshotAttributeCallable(const ModifyDBSnapshotAttributeRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::ModifyDBSnapshotAttribute, this, request);
}

void RDSClient::ModifyDBSnapshotAttributeAsync(const ModifyDBSnapshotAttributeRequest& request, const ModifyDBSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::ModifyDBSnapshotAttributeAsyncHelper, this, request, handler, context);
}

void RDSClient::ModifyDBSnapshotAttributeAsyncHelper(const ModifyDBSnapshotAttributeRequest& request, const ModifyDBSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyDBSnapshotAttribute(request), context);
}

ModifyDBSubnetGroupOutcome RDSClient::ModifyDBSubnetGroup(const ModifyDBSubnetGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyDBSubnetGroupOutcome(ModifyDBSubnetGroupResult(outcome.GetResult()));
  }
  else
  {
    return ModifyDBSubnetGroupOutcome(outcome.GetError());
  }
}

ModifyDBSubnetGroupOutcomeCallable RDSClient::ModifyDBSubnetGroupCallable(const ModifyDBSubnetGroupRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::ModifyDBSubnetGroup, this, request);
}

void RDSClient::ModifyDBSubnetGroupAsync(const ModifyDBSubnetGroupRequest& request, const ModifyDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::ModifyDBSubnetGroupAsyncHelper, this, request, handler, context);
}

void RDSClient::ModifyDBSubnetGroupAsyncHelper(const ModifyDBSubnetGroupRequest& request, const ModifyDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyDBSubnetGroup(request), context);
}

ModifyEventSubscriptionOutcome RDSClient::ModifyEventSubscription(const ModifyEventSubscriptionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyEventSubscriptionOutcome(ModifyEventSubscriptionResult(outcome.GetResult()));
  }
  else
  {
    return ModifyEventSubscriptionOutcome(outcome.GetError());
  }
}

ModifyEventSubscriptionOutcomeCallable RDSClient::ModifyEventSubscriptionCallable(const ModifyEventSubscriptionRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::ModifyEventSubscription, this, request);
}

void RDSClient::ModifyEventSubscriptionAsync(const ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::ModifyEventSubscriptionAsyncHelper, this, request, handler, context);
}

void RDSClient::ModifyEventSubscriptionAsyncHelper(const ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyEventSubscription(request), context);
}

ModifyOptionGroupOutcome RDSClient::ModifyOptionGroup(const ModifyOptionGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyOptionGroupOutcome(ModifyOptionGroupResult(outcome.GetResult()));
  }
  else
  {
    return ModifyOptionGroupOutcome(outcome.GetError());
  }
}

ModifyOptionGroupOutcomeCallable RDSClient::ModifyOptionGroupCallable(const ModifyOptionGroupRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::ModifyOptionGroup, this, request);
}

void RDSClient::ModifyOptionGroupAsync(const ModifyOptionGroupRequest& request, const ModifyOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::ModifyOptionGroupAsyncHelper, this, request, handler, context);
}

void RDSClient::ModifyOptionGroupAsyncHelper(const ModifyOptionGroupRequest& request, const ModifyOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyOptionGroup(request), context);
}

PromoteReadReplicaOutcome RDSClient::PromoteReadReplica(const PromoteReadReplicaRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PromoteReadReplicaOutcome(PromoteReadReplicaResult(outcome.GetResult()));
  }
  else
  {
    return PromoteReadReplicaOutcome(outcome.GetError());
  }
}

PromoteReadReplicaOutcomeCallable RDSClient::PromoteReadReplicaCallable(const PromoteReadReplicaRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::PromoteReadReplica, this, request);
}

void RDSClient::PromoteReadReplicaAsync(const PromoteReadReplicaRequest& request, const PromoteReadReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::PromoteReadReplicaAsyncHelper, this, request, handler, context);
}

void RDSClient::PromoteReadReplicaAsyncHelper(const PromoteReadReplicaRequest& request, const PromoteReadReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PromoteReadReplica(request), context);
}

PurchaseReservedDBInstancesOfferingOutcome RDSClient::PurchaseReservedDBInstancesOffering(const PurchaseReservedDBInstancesOfferingRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PurchaseReservedDBInstancesOfferingOutcome(PurchaseReservedDBInstancesOfferingResult(outcome.GetResult()));
  }
  else
  {
    return PurchaseReservedDBInstancesOfferingOutcome(outcome.GetError());
  }
}

PurchaseReservedDBInstancesOfferingOutcomeCallable RDSClient::PurchaseReservedDBInstancesOfferingCallable(const PurchaseReservedDBInstancesOfferingRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::PurchaseReservedDBInstancesOffering, this, request);
}

void RDSClient::PurchaseReservedDBInstancesOfferingAsync(const PurchaseReservedDBInstancesOfferingRequest& request, const PurchaseReservedDBInstancesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::PurchaseReservedDBInstancesOfferingAsyncHelper, this, request, handler, context);
}

void RDSClient::PurchaseReservedDBInstancesOfferingAsyncHelper(const PurchaseReservedDBInstancesOfferingRequest& request, const PurchaseReservedDBInstancesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PurchaseReservedDBInstancesOffering(request), context);
}

RebootDBInstanceOutcome RDSClient::RebootDBInstance(const RebootDBInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RebootDBInstanceOutcome(RebootDBInstanceResult(outcome.GetResult()));
  }
  else
  {
    return RebootDBInstanceOutcome(outcome.GetError());
  }
}

RebootDBInstanceOutcomeCallable RDSClient::RebootDBInstanceCallable(const RebootDBInstanceRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::RebootDBInstance, this, request);
}

void RDSClient::RebootDBInstanceAsync(const RebootDBInstanceRequest& request, const RebootDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::RebootDBInstanceAsyncHelper, this, request, handler, context);
}

void RDSClient::RebootDBInstanceAsyncHelper(const RebootDBInstanceRequest& request, const RebootDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RebootDBInstance(request), context);
}

RemoveSourceIdentifierFromSubscriptionOutcome RDSClient::RemoveSourceIdentifierFromSubscription(const RemoveSourceIdentifierFromSubscriptionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RemoveSourceIdentifierFromSubscriptionOutcome(RemoveSourceIdentifierFromSubscriptionResult(outcome.GetResult()));
  }
  else
  {
    return RemoveSourceIdentifierFromSubscriptionOutcome(outcome.GetError());
  }
}

RemoveSourceIdentifierFromSubscriptionOutcomeCallable RDSClient::RemoveSourceIdentifierFromSubscriptionCallable(const RemoveSourceIdentifierFromSubscriptionRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::RemoveSourceIdentifierFromSubscription, this, request);
}

void RDSClient::RemoveSourceIdentifierFromSubscriptionAsync(const RemoveSourceIdentifierFromSubscriptionRequest& request, const RemoveSourceIdentifierFromSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::RemoveSourceIdentifierFromSubscriptionAsyncHelper, this, request, handler, context);
}

void RDSClient::RemoveSourceIdentifierFromSubscriptionAsyncHelper(const RemoveSourceIdentifierFromSubscriptionRequest& request, const RemoveSourceIdentifierFromSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveSourceIdentifierFromSubscription(request), context);
}

RemoveTagsFromResourceOutcome RDSClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RemoveTagsFromResourceOutcome(NoResult());
  }
  else
  {
    return RemoveTagsFromResourceOutcome(outcome.GetError());
  }
}

RemoveTagsFromResourceOutcomeCallable RDSClient::RemoveTagsFromResourceCallable(const RemoveTagsFromResourceRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::RemoveTagsFromResource, this, request);
}

void RDSClient::RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::RemoveTagsFromResourceAsyncHelper, this, request, handler, context);
}

void RDSClient::RemoveTagsFromResourceAsyncHelper(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTagsFromResource(request), context);
}

ResetDBClusterParameterGroupOutcome RDSClient::ResetDBClusterParameterGroup(const ResetDBClusterParameterGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ResetDBClusterParameterGroupOutcome(ResetDBClusterParameterGroupResult(outcome.GetResult()));
  }
  else
  {
    return ResetDBClusterParameterGroupOutcome(outcome.GetError());
  }
}

ResetDBClusterParameterGroupOutcomeCallable RDSClient::ResetDBClusterParameterGroupCallable(const ResetDBClusterParameterGroupRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::ResetDBClusterParameterGroup, this, request);
}

void RDSClient::ResetDBClusterParameterGroupAsync(const ResetDBClusterParameterGroupRequest& request, const ResetDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::ResetDBClusterParameterGroupAsyncHelper, this, request, handler, context);
}

void RDSClient::ResetDBClusterParameterGroupAsyncHelper(const ResetDBClusterParameterGroupRequest& request, const ResetDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResetDBClusterParameterGroup(request), context);
}

ResetDBParameterGroupOutcome RDSClient::ResetDBParameterGroup(const ResetDBParameterGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ResetDBParameterGroupOutcome(ResetDBParameterGroupResult(outcome.GetResult()));
  }
  else
  {
    return ResetDBParameterGroupOutcome(outcome.GetError());
  }
}

ResetDBParameterGroupOutcomeCallable RDSClient::ResetDBParameterGroupCallable(const ResetDBParameterGroupRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::ResetDBParameterGroup, this, request);
}

void RDSClient::ResetDBParameterGroupAsync(const ResetDBParameterGroupRequest& request, const ResetDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::ResetDBParameterGroupAsyncHelper, this, request, handler, context);
}

void RDSClient::ResetDBParameterGroupAsyncHelper(const ResetDBParameterGroupRequest& request, const ResetDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResetDBParameterGroup(request), context);
}

RestoreDBClusterFromSnapshotOutcome RDSClient::RestoreDBClusterFromSnapshot(const RestoreDBClusterFromSnapshotRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RestoreDBClusterFromSnapshotOutcome(RestoreDBClusterFromSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return RestoreDBClusterFromSnapshotOutcome(outcome.GetError());
  }
}

RestoreDBClusterFromSnapshotOutcomeCallable RDSClient::RestoreDBClusterFromSnapshotCallable(const RestoreDBClusterFromSnapshotRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::RestoreDBClusterFromSnapshot, this, request);
}

void RDSClient::RestoreDBClusterFromSnapshotAsync(const RestoreDBClusterFromSnapshotRequest& request, const RestoreDBClusterFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::RestoreDBClusterFromSnapshotAsyncHelper, this, request, handler, context);
}

void RDSClient::RestoreDBClusterFromSnapshotAsyncHelper(const RestoreDBClusterFromSnapshotRequest& request, const RestoreDBClusterFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestoreDBClusterFromSnapshot(request), context);
}

RestoreDBClusterToPointInTimeOutcome RDSClient::RestoreDBClusterToPointInTime(const RestoreDBClusterToPointInTimeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RestoreDBClusterToPointInTimeOutcome(RestoreDBClusterToPointInTimeResult(outcome.GetResult()));
  }
  else
  {
    return RestoreDBClusterToPointInTimeOutcome(outcome.GetError());
  }
}

RestoreDBClusterToPointInTimeOutcomeCallable RDSClient::RestoreDBClusterToPointInTimeCallable(const RestoreDBClusterToPointInTimeRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::RestoreDBClusterToPointInTime, this, request);
}

void RDSClient::RestoreDBClusterToPointInTimeAsync(const RestoreDBClusterToPointInTimeRequest& request, const RestoreDBClusterToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::RestoreDBClusterToPointInTimeAsyncHelper, this, request, handler, context);
}

void RDSClient::RestoreDBClusterToPointInTimeAsyncHelper(const RestoreDBClusterToPointInTimeRequest& request, const RestoreDBClusterToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestoreDBClusterToPointInTime(request), context);
}

RestoreDBInstanceFromDBSnapshotOutcome RDSClient::RestoreDBInstanceFromDBSnapshot(const RestoreDBInstanceFromDBSnapshotRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RestoreDBInstanceFromDBSnapshotOutcome(RestoreDBInstanceFromDBSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return RestoreDBInstanceFromDBSnapshotOutcome(outcome.GetError());
  }
}

RestoreDBInstanceFromDBSnapshotOutcomeCallable RDSClient::RestoreDBInstanceFromDBSnapshotCallable(const RestoreDBInstanceFromDBSnapshotRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::RestoreDBInstanceFromDBSnapshot, this, request);
}

void RDSClient::RestoreDBInstanceFromDBSnapshotAsync(const RestoreDBInstanceFromDBSnapshotRequest& request, const RestoreDBInstanceFromDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::RestoreDBInstanceFromDBSnapshotAsyncHelper, this, request, handler, context);
}

void RDSClient::RestoreDBInstanceFromDBSnapshotAsyncHelper(const RestoreDBInstanceFromDBSnapshotRequest& request, const RestoreDBInstanceFromDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestoreDBInstanceFromDBSnapshot(request), context);
}

RestoreDBInstanceToPointInTimeOutcome RDSClient::RestoreDBInstanceToPointInTime(const RestoreDBInstanceToPointInTimeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RestoreDBInstanceToPointInTimeOutcome(RestoreDBInstanceToPointInTimeResult(outcome.GetResult()));
  }
  else
  {
    return RestoreDBInstanceToPointInTimeOutcome(outcome.GetError());
  }
}

RestoreDBInstanceToPointInTimeOutcomeCallable RDSClient::RestoreDBInstanceToPointInTimeCallable(const RestoreDBInstanceToPointInTimeRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::RestoreDBInstanceToPointInTime, this, request);
}

void RDSClient::RestoreDBInstanceToPointInTimeAsync(const RestoreDBInstanceToPointInTimeRequest& request, const RestoreDBInstanceToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::RestoreDBInstanceToPointInTimeAsyncHelper, this, request, handler, context);
}

void RDSClient::RestoreDBInstanceToPointInTimeAsyncHelper(const RestoreDBInstanceToPointInTimeRequest& request, const RestoreDBInstanceToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestoreDBInstanceToPointInTime(request), context);
}

RevokeDBSecurityGroupIngressOutcome RDSClient::RevokeDBSecurityGroupIngress(const RevokeDBSecurityGroupIngressRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RevokeDBSecurityGroupIngressOutcome(RevokeDBSecurityGroupIngressResult(outcome.GetResult()));
  }
  else
  {
    return RevokeDBSecurityGroupIngressOutcome(outcome.GetError());
  }
}

RevokeDBSecurityGroupIngressOutcomeCallable RDSClient::RevokeDBSecurityGroupIngressCallable(const RevokeDBSecurityGroupIngressRequest& request) const
{
  return std::async(std::launch::async, &RDSClient::RevokeDBSecurityGroupIngress, this, request);
}

void RDSClient::RevokeDBSecurityGroupIngressAsync(const RevokeDBSecurityGroupIngressRequest& request, const RevokeDBSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&RDSClient::RevokeDBSecurityGroupIngressAsyncHelper, this, request, handler, context);
}

void RDSClient::RevokeDBSecurityGroupIngressAsyncHelper(const RevokeDBSecurityGroupIngressRequest& request, const RevokeDBSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RevokeDBSecurityGroupIngress(request), context);
}

