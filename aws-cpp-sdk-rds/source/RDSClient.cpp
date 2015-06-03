/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/rds/model/CopyDBParameterGroupRequest.h>
#include <aws/rds/model/CopyDBSnapshotRequest.h>
#include <aws/rds/model/CopyOptionGroupRequest.h>
#include <aws/rds/model/CreateDBInstanceRequest.h>
#include <aws/rds/model/CreateDBInstanceReadReplicaRequest.h>
#include <aws/rds/model/CreateDBParameterGroupRequest.h>
#include <aws/rds/model/CreateDBSecurityGroupRequest.h>
#include <aws/rds/model/CreateDBSnapshotRequest.h>
#include <aws/rds/model/CreateDBSubnetGroupRequest.h>
#include <aws/rds/model/CreateEventSubscriptionRequest.h>
#include <aws/rds/model/CreateOptionGroupRequest.h>
#include <aws/rds/model/DeleteDBInstanceRequest.h>
#include <aws/rds/model/DeleteDBParameterGroupRequest.h>
#include <aws/rds/model/DeleteDBSecurityGroupRequest.h>
#include <aws/rds/model/DeleteDBSnapshotRequest.h>
#include <aws/rds/model/DeleteDBSubnetGroupRequest.h>
#include <aws/rds/model/DeleteEventSubscriptionRequest.h>
#include <aws/rds/model/DeleteOptionGroupRequest.h>
#include <aws/rds/model/DescribeAccountAttributesRequest.h>
#include <aws/rds/model/DescribeCertificatesRequest.h>
#include <aws/rds/model/DescribeDBEngineVersionsRequest.h>
#include <aws/rds/model/DescribeDBInstancesRequest.h>
#include <aws/rds/model/DescribeDBLogFilesRequest.h>
#include <aws/rds/model/DescribeDBParameterGroupsRequest.h>
#include <aws/rds/model/DescribeDBParametersRequest.h>
#include <aws/rds/model/DescribeDBSecurityGroupsRequest.h>
#include <aws/rds/model/DescribeDBSnapshotsRequest.h>
#include <aws/rds/model/DescribeDBSubnetGroupsRequest.h>
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
#include <aws/rds/model/ListTagsForResourceRequest.h>
#include <aws/rds/model/ModifyDBInstanceRequest.h>
#include <aws/rds/model/ModifyDBParameterGroupRequest.h>
#include <aws/rds/model/ModifyDBSubnetGroupRequest.h>
#include <aws/rds/model/ModifyEventSubscriptionRequest.h>
#include <aws/rds/model/ModifyOptionGroupRequest.h>
#include <aws/rds/model/PromoteReadReplicaRequest.h>
#include <aws/rds/model/PurchaseReservedDBInstancesOfferingRequest.h>
#include <aws/rds/model/RebootDBInstanceRequest.h>
#include <aws/rds/model/RemoveSourceIdentifierFromSubscriptionRequest.h>
#include <aws/rds/model/RemoveTagsFromResourceRequest.h>
#include <aws/rds/model/ResetDBParameterGroupRequest.h>
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<RDSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RDSClient::RDSClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<RDSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RDSClient::RDSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME, clientConfiguration.region),
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

  if(config.endpointOverride.empty())
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

void RDSClient::AddSourceIdentifierToSubscriptionAsync(const AddSourceIdentifierToSubscriptionRequest& request) const
{
  m_executor->Submit(&RDSClient::AddSourceIdentifierToSubscriptionAsyncHelper, this, request);
}

void RDSClient::AddSourceIdentifierToSubscriptionAsyncHelper(const AddSourceIdentifierToSubscriptionRequest& request) const
{
  m_onAddSourceIdentifierToSubscriptionOutcomeReceived(this, request, AddSourceIdentifierToSubscription(request));
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

void RDSClient::AddTagsToResourceAsync(const AddTagsToResourceRequest& request) const
{
  m_executor->Submit(&RDSClient::AddTagsToResourceAsyncHelper, this, request);
}

void RDSClient::AddTagsToResourceAsyncHelper(const AddTagsToResourceRequest& request) const
{
  m_onAddTagsToResourceOutcomeReceived(this, request, AddTagsToResource(request));
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

void RDSClient::ApplyPendingMaintenanceActionAsync(const ApplyPendingMaintenanceActionRequest& request) const
{
  m_executor->Submit(&RDSClient::ApplyPendingMaintenanceActionAsyncHelper, this, request);
}

void RDSClient::ApplyPendingMaintenanceActionAsyncHelper(const ApplyPendingMaintenanceActionRequest& request) const
{
  m_onApplyPendingMaintenanceActionOutcomeReceived(this, request, ApplyPendingMaintenanceAction(request));
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

void RDSClient::AuthorizeDBSecurityGroupIngressAsync(const AuthorizeDBSecurityGroupIngressRequest& request) const
{
  m_executor->Submit(&RDSClient::AuthorizeDBSecurityGroupIngressAsyncHelper, this, request);
}

void RDSClient::AuthorizeDBSecurityGroupIngressAsyncHelper(const AuthorizeDBSecurityGroupIngressRequest& request) const
{
  m_onAuthorizeDBSecurityGroupIngressOutcomeReceived(this, request, AuthorizeDBSecurityGroupIngress(request));
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

void RDSClient::CopyDBParameterGroupAsync(const CopyDBParameterGroupRequest& request) const
{
  m_executor->Submit(&RDSClient::CopyDBParameterGroupAsyncHelper, this, request);
}

void RDSClient::CopyDBParameterGroupAsyncHelper(const CopyDBParameterGroupRequest& request) const
{
  m_onCopyDBParameterGroupOutcomeReceived(this, request, CopyDBParameterGroup(request));
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

void RDSClient::CopyDBSnapshotAsync(const CopyDBSnapshotRequest& request) const
{
  m_executor->Submit(&RDSClient::CopyDBSnapshotAsyncHelper, this, request);
}

void RDSClient::CopyDBSnapshotAsyncHelper(const CopyDBSnapshotRequest& request) const
{
  m_onCopyDBSnapshotOutcomeReceived(this, request, CopyDBSnapshot(request));
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

void RDSClient::CopyOptionGroupAsync(const CopyOptionGroupRequest& request) const
{
  m_executor->Submit(&RDSClient::CopyOptionGroupAsyncHelper, this, request);
}

void RDSClient::CopyOptionGroupAsyncHelper(const CopyOptionGroupRequest& request) const
{
  m_onCopyOptionGroupOutcomeReceived(this, request, CopyOptionGroup(request));
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

void RDSClient::CreateDBInstanceAsync(const CreateDBInstanceRequest& request) const
{
  m_executor->Submit(&RDSClient::CreateDBInstanceAsyncHelper, this, request);
}

void RDSClient::CreateDBInstanceAsyncHelper(const CreateDBInstanceRequest& request) const
{
  m_onCreateDBInstanceOutcomeReceived(this, request, CreateDBInstance(request));
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

void RDSClient::CreateDBInstanceReadReplicaAsync(const CreateDBInstanceReadReplicaRequest& request) const
{
  m_executor->Submit(&RDSClient::CreateDBInstanceReadReplicaAsyncHelper, this, request);
}

void RDSClient::CreateDBInstanceReadReplicaAsyncHelper(const CreateDBInstanceReadReplicaRequest& request) const
{
  m_onCreateDBInstanceReadReplicaOutcomeReceived(this, request, CreateDBInstanceReadReplica(request));
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

void RDSClient::CreateDBParameterGroupAsync(const CreateDBParameterGroupRequest& request) const
{
  m_executor->Submit(&RDSClient::CreateDBParameterGroupAsyncHelper, this, request);
}

void RDSClient::CreateDBParameterGroupAsyncHelper(const CreateDBParameterGroupRequest& request) const
{
  m_onCreateDBParameterGroupOutcomeReceived(this, request, CreateDBParameterGroup(request));
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

void RDSClient::CreateDBSecurityGroupAsync(const CreateDBSecurityGroupRequest& request) const
{
  m_executor->Submit(&RDSClient::CreateDBSecurityGroupAsyncHelper, this, request);
}

void RDSClient::CreateDBSecurityGroupAsyncHelper(const CreateDBSecurityGroupRequest& request) const
{
  m_onCreateDBSecurityGroupOutcomeReceived(this, request, CreateDBSecurityGroup(request));
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

void RDSClient::CreateDBSnapshotAsync(const CreateDBSnapshotRequest& request) const
{
  m_executor->Submit(&RDSClient::CreateDBSnapshotAsyncHelper, this, request);
}

void RDSClient::CreateDBSnapshotAsyncHelper(const CreateDBSnapshotRequest& request) const
{
  m_onCreateDBSnapshotOutcomeReceived(this, request, CreateDBSnapshot(request));
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

void RDSClient::CreateDBSubnetGroupAsync(const CreateDBSubnetGroupRequest& request) const
{
  m_executor->Submit(&RDSClient::CreateDBSubnetGroupAsyncHelper, this, request);
}

void RDSClient::CreateDBSubnetGroupAsyncHelper(const CreateDBSubnetGroupRequest& request) const
{
  m_onCreateDBSubnetGroupOutcomeReceived(this, request, CreateDBSubnetGroup(request));
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

void RDSClient::CreateEventSubscriptionAsync(const CreateEventSubscriptionRequest& request) const
{
  m_executor->Submit(&RDSClient::CreateEventSubscriptionAsyncHelper, this, request);
}

void RDSClient::CreateEventSubscriptionAsyncHelper(const CreateEventSubscriptionRequest& request) const
{
  m_onCreateEventSubscriptionOutcomeReceived(this, request, CreateEventSubscription(request));
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

void RDSClient::CreateOptionGroupAsync(const CreateOptionGroupRequest& request) const
{
  m_executor->Submit(&RDSClient::CreateOptionGroupAsyncHelper, this, request);
}

void RDSClient::CreateOptionGroupAsyncHelper(const CreateOptionGroupRequest& request) const
{
  m_onCreateOptionGroupOutcomeReceived(this, request, CreateOptionGroup(request));
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

void RDSClient::DeleteDBInstanceAsync(const DeleteDBInstanceRequest& request) const
{
  m_executor->Submit(&RDSClient::DeleteDBInstanceAsyncHelper, this, request);
}

void RDSClient::DeleteDBInstanceAsyncHelper(const DeleteDBInstanceRequest& request) const
{
  m_onDeleteDBInstanceOutcomeReceived(this, request, DeleteDBInstance(request));
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

void RDSClient::DeleteDBParameterGroupAsync(const DeleteDBParameterGroupRequest& request) const
{
  m_executor->Submit(&RDSClient::DeleteDBParameterGroupAsyncHelper, this, request);
}

void RDSClient::DeleteDBParameterGroupAsyncHelper(const DeleteDBParameterGroupRequest& request) const
{
  m_onDeleteDBParameterGroupOutcomeReceived(this, request, DeleteDBParameterGroup(request));
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

void RDSClient::DeleteDBSecurityGroupAsync(const DeleteDBSecurityGroupRequest& request) const
{
  m_executor->Submit(&RDSClient::DeleteDBSecurityGroupAsyncHelper, this, request);
}

void RDSClient::DeleteDBSecurityGroupAsyncHelper(const DeleteDBSecurityGroupRequest& request) const
{
  m_onDeleteDBSecurityGroupOutcomeReceived(this, request, DeleteDBSecurityGroup(request));
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

void RDSClient::DeleteDBSnapshotAsync(const DeleteDBSnapshotRequest& request) const
{
  m_executor->Submit(&RDSClient::DeleteDBSnapshotAsyncHelper, this, request);
}

void RDSClient::DeleteDBSnapshotAsyncHelper(const DeleteDBSnapshotRequest& request) const
{
  m_onDeleteDBSnapshotOutcomeReceived(this, request, DeleteDBSnapshot(request));
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

void RDSClient::DeleteDBSubnetGroupAsync(const DeleteDBSubnetGroupRequest& request) const
{
  m_executor->Submit(&RDSClient::DeleteDBSubnetGroupAsyncHelper, this, request);
}

void RDSClient::DeleteDBSubnetGroupAsyncHelper(const DeleteDBSubnetGroupRequest& request) const
{
  m_onDeleteDBSubnetGroupOutcomeReceived(this, request, DeleteDBSubnetGroup(request));
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

void RDSClient::DeleteEventSubscriptionAsync(const DeleteEventSubscriptionRequest& request) const
{
  m_executor->Submit(&RDSClient::DeleteEventSubscriptionAsyncHelper, this, request);
}

void RDSClient::DeleteEventSubscriptionAsyncHelper(const DeleteEventSubscriptionRequest& request) const
{
  m_onDeleteEventSubscriptionOutcomeReceived(this, request, DeleteEventSubscription(request));
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

void RDSClient::DeleteOptionGroupAsync(const DeleteOptionGroupRequest& request) const
{
  m_executor->Submit(&RDSClient::DeleteOptionGroupAsyncHelper, this, request);
}

void RDSClient::DeleteOptionGroupAsyncHelper(const DeleteOptionGroupRequest& request) const
{
  m_onDeleteOptionGroupOutcomeReceived(this, request, DeleteOptionGroup(request));
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

void RDSClient::DescribeAccountAttributesAsync(const DescribeAccountAttributesRequest& request) const
{
  m_executor->Submit(&RDSClient::DescribeAccountAttributesAsyncHelper, this, request);
}

void RDSClient::DescribeAccountAttributesAsyncHelper(const DescribeAccountAttributesRequest& request) const
{
  m_onDescribeAccountAttributesOutcomeReceived(this, request, DescribeAccountAttributes(request));
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

void RDSClient::DescribeCertificatesAsync(const DescribeCertificatesRequest& request) const
{
  m_executor->Submit(&RDSClient::DescribeCertificatesAsyncHelper, this, request);
}

void RDSClient::DescribeCertificatesAsyncHelper(const DescribeCertificatesRequest& request) const
{
  m_onDescribeCertificatesOutcomeReceived(this, request, DescribeCertificates(request));
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

void RDSClient::DescribeDBEngineVersionsAsync(const DescribeDBEngineVersionsRequest& request) const
{
  m_executor->Submit(&RDSClient::DescribeDBEngineVersionsAsyncHelper, this, request);
}

void RDSClient::DescribeDBEngineVersionsAsyncHelper(const DescribeDBEngineVersionsRequest& request) const
{
  m_onDescribeDBEngineVersionsOutcomeReceived(this, request, DescribeDBEngineVersions(request));
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

void RDSClient::DescribeDBInstancesAsync(const DescribeDBInstancesRequest& request) const
{
  m_executor->Submit(&RDSClient::DescribeDBInstancesAsyncHelper, this, request);
}

void RDSClient::DescribeDBInstancesAsyncHelper(const DescribeDBInstancesRequest& request) const
{
  m_onDescribeDBInstancesOutcomeReceived(this, request, DescribeDBInstances(request));
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

void RDSClient::DescribeDBLogFilesAsync(const DescribeDBLogFilesRequest& request) const
{
  m_executor->Submit(&RDSClient::DescribeDBLogFilesAsyncHelper, this, request);
}

void RDSClient::DescribeDBLogFilesAsyncHelper(const DescribeDBLogFilesRequest& request) const
{
  m_onDescribeDBLogFilesOutcomeReceived(this, request, DescribeDBLogFiles(request));
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

void RDSClient::DescribeDBParameterGroupsAsync(const DescribeDBParameterGroupsRequest& request) const
{
  m_executor->Submit(&RDSClient::DescribeDBParameterGroupsAsyncHelper, this, request);
}

void RDSClient::DescribeDBParameterGroupsAsyncHelper(const DescribeDBParameterGroupsRequest& request) const
{
  m_onDescribeDBParameterGroupsOutcomeReceived(this, request, DescribeDBParameterGroups(request));
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

void RDSClient::DescribeDBParametersAsync(const DescribeDBParametersRequest& request) const
{
  m_executor->Submit(&RDSClient::DescribeDBParametersAsyncHelper, this, request);
}

void RDSClient::DescribeDBParametersAsyncHelper(const DescribeDBParametersRequest& request) const
{
  m_onDescribeDBParametersOutcomeReceived(this, request, DescribeDBParameters(request));
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

void RDSClient::DescribeDBSecurityGroupsAsync(const DescribeDBSecurityGroupsRequest& request) const
{
  m_executor->Submit(&RDSClient::DescribeDBSecurityGroupsAsyncHelper, this, request);
}

void RDSClient::DescribeDBSecurityGroupsAsyncHelper(const DescribeDBSecurityGroupsRequest& request) const
{
  m_onDescribeDBSecurityGroupsOutcomeReceived(this, request, DescribeDBSecurityGroups(request));
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

void RDSClient::DescribeDBSnapshotsAsync(const DescribeDBSnapshotsRequest& request) const
{
  m_executor->Submit(&RDSClient::DescribeDBSnapshotsAsyncHelper, this, request);
}

void RDSClient::DescribeDBSnapshotsAsyncHelper(const DescribeDBSnapshotsRequest& request) const
{
  m_onDescribeDBSnapshotsOutcomeReceived(this, request, DescribeDBSnapshots(request));
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

void RDSClient::DescribeDBSubnetGroupsAsync(const DescribeDBSubnetGroupsRequest& request) const
{
  m_executor->Submit(&RDSClient::DescribeDBSubnetGroupsAsyncHelper, this, request);
}

void RDSClient::DescribeDBSubnetGroupsAsyncHelper(const DescribeDBSubnetGroupsRequest& request) const
{
  m_onDescribeDBSubnetGroupsOutcomeReceived(this, request, DescribeDBSubnetGroups(request));
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

void RDSClient::DescribeEngineDefaultParametersAsync(const DescribeEngineDefaultParametersRequest& request) const
{
  m_executor->Submit(&RDSClient::DescribeEngineDefaultParametersAsyncHelper, this, request);
}

void RDSClient::DescribeEngineDefaultParametersAsyncHelper(const DescribeEngineDefaultParametersRequest& request) const
{
  m_onDescribeEngineDefaultParametersOutcomeReceived(this, request, DescribeEngineDefaultParameters(request));
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

void RDSClient::DescribeEventCategoriesAsync(const DescribeEventCategoriesRequest& request) const
{
  m_executor->Submit(&RDSClient::DescribeEventCategoriesAsyncHelper, this, request);
}

void RDSClient::DescribeEventCategoriesAsyncHelper(const DescribeEventCategoriesRequest& request) const
{
  m_onDescribeEventCategoriesOutcomeReceived(this, request, DescribeEventCategories(request));
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

void RDSClient::DescribeEventSubscriptionsAsync(const DescribeEventSubscriptionsRequest& request) const
{
  m_executor->Submit(&RDSClient::DescribeEventSubscriptionsAsyncHelper, this, request);
}

void RDSClient::DescribeEventSubscriptionsAsyncHelper(const DescribeEventSubscriptionsRequest& request) const
{
  m_onDescribeEventSubscriptionsOutcomeReceived(this, request, DescribeEventSubscriptions(request));
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

void RDSClient::DescribeEventsAsync(const DescribeEventsRequest& request) const
{
  m_executor->Submit(&RDSClient::DescribeEventsAsyncHelper, this, request);
}

void RDSClient::DescribeEventsAsyncHelper(const DescribeEventsRequest& request) const
{
  m_onDescribeEventsOutcomeReceived(this, request, DescribeEvents(request));
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

void RDSClient::DescribeOptionGroupOptionsAsync(const DescribeOptionGroupOptionsRequest& request) const
{
  m_executor->Submit(&RDSClient::DescribeOptionGroupOptionsAsyncHelper, this, request);
}

void RDSClient::DescribeOptionGroupOptionsAsyncHelper(const DescribeOptionGroupOptionsRequest& request) const
{
  m_onDescribeOptionGroupOptionsOutcomeReceived(this, request, DescribeOptionGroupOptions(request));
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

void RDSClient::DescribeOptionGroupsAsync(const DescribeOptionGroupsRequest& request) const
{
  m_executor->Submit(&RDSClient::DescribeOptionGroupsAsyncHelper, this, request);
}

void RDSClient::DescribeOptionGroupsAsyncHelper(const DescribeOptionGroupsRequest& request) const
{
  m_onDescribeOptionGroupsOutcomeReceived(this, request, DescribeOptionGroups(request));
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

void RDSClient::DescribeOrderableDBInstanceOptionsAsync(const DescribeOrderableDBInstanceOptionsRequest& request) const
{
  m_executor->Submit(&RDSClient::DescribeOrderableDBInstanceOptionsAsyncHelper, this, request);
}

void RDSClient::DescribeOrderableDBInstanceOptionsAsyncHelper(const DescribeOrderableDBInstanceOptionsRequest& request) const
{
  m_onDescribeOrderableDBInstanceOptionsOutcomeReceived(this, request, DescribeOrderableDBInstanceOptions(request));
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

void RDSClient::DescribePendingMaintenanceActionsAsync(const DescribePendingMaintenanceActionsRequest& request) const
{
  m_executor->Submit(&RDSClient::DescribePendingMaintenanceActionsAsyncHelper, this, request);
}

void RDSClient::DescribePendingMaintenanceActionsAsyncHelper(const DescribePendingMaintenanceActionsRequest& request) const
{
  m_onDescribePendingMaintenanceActionsOutcomeReceived(this, request, DescribePendingMaintenanceActions(request));
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

void RDSClient::DescribeReservedDBInstancesAsync(const DescribeReservedDBInstancesRequest& request) const
{
  m_executor->Submit(&RDSClient::DescribeReservedDBInstancesAsyncHelper, this, request);
}

void RDSClient::DescribeReservedDBInstancesAsyncHelper(const DescribeReservedDBInstancesRequest& request) const
{
  m_onDescribeReservedDBInstancesOutcomeReceived(this, request, DescribeReservedDBInstances(request));
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

void RDSClient::DescribeReservedDBInstancesOfferingsAsync(const DescribeReservedDBInstancesOfferingsRequest& request) const
{
  m_executor->Submit(&RDSClient::DescribeReservedDBInstancesOfferingsAsyncHelper, this, request);
}

void RDSClient::DescribeReservedDBInstancesOfferingsAsyncHelper(const DescribeReservedDBInstancesOfferingsRequest& request) const
{
  m_onDescribeReservedDBInstancesOfferingsOutcomeReceived(this, request, DescribeReservedDBInstancesOfferings(request));
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

void RDSClient::DownloadDBLogFilePortionAsync(const DownloadDBLogFilePortionRequest& request) const
{
  m_executor->Submit(&RDSClient::DownloadDBLogFilePortionAsyncHelper, this, request);
}

void RDSClient::DownloadDBLogFilePortionAsyncHelper(const DownloadDBLogFilePortionRequest& request) const
{
  m_onDownloadDBLogFilePortionOutcomeReceived(this, request, DownloadDBLogFilePortion(request));
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

void RDSClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request) const
{
  m_executor->Submit(&RDSClient::ListTagsForResourceAsyncHelper, this, request);
}

void RDSClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request) const
{
  m_onListTagsForResourceOutcomeReceived(this, request, ListTagsForResource(request));
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

void RDSClient::ModifyDBInstanceAsync(const ModifyDBInstanceRequest& request) const
{
  m_executor->Submit(&RDSClient::ModifyDBInstanceAsyncHelper, this, request);
}

void RDSClient::ModifyDBInstanceAsyncHelper(const ModifyDBInstanceRequest& request) const
{
  m_onModifyDBInstanceOutcomeReceived(this, request, ModifyDBInstance(request));
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

void RDSClient::ModifyDBParameterGroupAsync(const ModifyDBParameterGroupRequest& request) const
{
  m_executor->Submit(&RDSClient::ModifyDBParameterGroupAsyncHelper, this, request);
}

void RDSClient::ModifyDBParameterGroupAsyncHelper(const ModifyDBParameterGroupRequest& request) const
{
  m_onModifyDBParameterGroupOutcomeReceived(this, request, ModifyDBParameterGroup(request));
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

void RDSClient::ModifyDBSubnetGroupAsync(const ModifyDBSubnetGroupRequest& request) const
{
  m_executor->Submit(&RDSClient::ModifyDBSubnetGroupAsyncHelper, this, request);
}

void RDSClient::ModifyDBSubnetGroupAsyncHelper(const ModifyDBSubnetGroupRequest& request) const
{
  m_onModifyDBSubnetGroupOutcomeReceived(this, request, ModifyDBSubnetGroup(request));
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

void RDSClient::ModifyEventSubscriptionAsync(const ModifyEventSubscriptionRequest& request) const
{
  m_executor->Submit(&RDSClient::ModifyEventSubscriptionAsyncHelper, this, request);
}

void RDSClient::ModifyEventSubscriptionAsyncHelper(const ModifyEventSubscriptionRequest& request) const
{
  m_onModifyEventSubscriptionOutcomeReceived(this, request, ModifyEventSubscription(request));
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

void RDSClient::ModifyOptionGroupAsync(const ModifyOptionGroupRequest& request) const
{
  m_executor->Submit(&RDSClient::ModifyOptionGroupAsyncHelper, this, request);
}

void RDSClient::ModifyOptionGroupAsyncHelper(const ModifyOptionGroupRequest& request) const
{
  m_onModifyOptionGroupOutcomeReceived(this, request, ModifyOptionGroup(request));
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

void RDSClient::PromoteReadReplicaAsync(const PromoteReadReplicaRequest& request) const
{
  m_executor->Submit(&RDSClient::PromoteReadReplicaAsyncHelper, this, request);
}

void RDSClient::PromoteReadReplicaAsyncHelper(const PromoteReadReplicaRequest& request) const
{
  m_onPromoteReadReplicaOutcomeReceived(this, request, PromoteReadReplica(request));
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

void RDSClient::PurchaseReservedDBInstancesOfferingAsync(const PurchaseReservedDBInstancesOfferingRequest& request) const
{
  m_executor->Submit(&RDSClient::PurchaseReservedDBInstancesOfferingAsyncHelper, this, request);
}

void RDSClient::PurchaseReservedDBInstancesOfferingAsyncHelper(const PurchaseReservedDBInstancesOfferingRequest& request) const
{
  m_onPurchaseReservedDBInstancesOfferingOutcomeReceived(this, request, PurchaseReservedDBInstancesOffering(request));
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

void RDSClient::RebootDBInstanceAsync(const RebootDBInstanceRequest& request) const
{
  m_executor->Submit(&RDSClient::RebootDBInstanceAsyncHelper, this, request);
}

void RDSClient::RebootDBInstanceAsyncHelper(const RebootDBInstanceRequest& request) const
{
  m_onRebootDBInstanceOutcomeReceived(this, request, RebootDBInstance(request));
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

void RDSClient::RemoveSourceIdentifierFromSubscriptionAsync(const RemoveSourceIdentifierFromSubscriptionRequest& request) const
{
  m_executor->Submit(&RDSClient::RemoveSourceIdentifierFromSubscriptionAsyncHelper, this, request);
}

void RDSClient::RemoveSourceIdentifierFromSubscriptionAsyncHelper(const RemoveSourceIdentifierFromSubscriptionRequest& request) const
{
  m_onRemoveSourceIdentifierFromSubscriptionOutcomeReceived(this, request, RemoveSourceIdentifierFromSubscription(request));
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

void RDSClient::RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequest& request) const
{
  m_executor->Submit(&RDSClient::RemoveTagsFromResourceAsyncHelper, this, request);
}

void RDSClient::RemoveTagsFromResourceAsyncHelper(const RemoveTagsFromResourceRequest& request) const
{
  m_onRemoveTagsFromResourceOutcomeReceived(this, request, RemoveTagsFromResource(request));
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

void RDSClient::ResetDBParameterGroupAsync(const ResetDBParameterGroupRequest& request) const
{
  m_executor->Submit(&RDSClient::ResetDBParameterGroupAsyncHelper, this, request);
}

void RDSClient::ResetDBParameterGroupAsyncHelper(const ResetDBParameterGroupRequest& request) const
{
  m_onResetDBParameterGroupOutcomeReceived(this, request, ResetDBParameterGroup(request));
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

void RDSClient::RestoreDBInstanceFromDBSnapshotAsync(const RestoreDBInstanceFromDBSnapshotRequest& request) const
{
  m_executor->Submit(&RDSClient::RestoreDBInstanceFromDBSnapshotAsyncHelper, this, request);
}

void RDSClient::RestoreDBInstanceFromDBSnapshotAsyncHelper(const RestoreDBInstanceFromDBSnapshotRequest& request) const
{
  m_onRestoreDBInstanceFromDBSnapshotOutcomeReceived(this, request, RestoreDBInstanceFromDBSnapshot(request));
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

void RDSClient::RestoreDBInstanceToPointInTimeAsync(const RestoreDBInstanceToPointInTimeRequest& request) const
{
  m_executor->Submit(&RDSClient::RestoreDBInstanceToPointInTimeAsyncHelper, this, request);
}

void RDSClient::RestoreDBInstanceToPointInTimeAsyncHelper(const RestoreDBInstanceToPointInTimeRequest& request) const
{
  m_onRestoreDBInstanceToPointInTimeOutcomeReceived(this, request, RestoreDBInstanceToPointInTime(request));
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

void RDSClient::RevokeDBSecurityGroupIngressAsync(const RevokeDBSecurityGroupIngressRequest& request) const
{
  m_executor->Submit(&RDSClient::RevokeDBSecurityGroupIngressAsyncHelper, this, request);
}

void RDSClient::RevokeDBSecurityGroupIngressAsyncHelper(const RevokeDBSecurityGroupIngressRequest& request) const
{
  m_onRevokeDBSecurityGroupIngressOutcomeReceived(this, request, RevokeDBSecurityGroupIngress(request));
}

