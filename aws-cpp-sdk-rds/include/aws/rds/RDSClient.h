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
#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/Event.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rds/model/AddSourceIdentifierToSubscriptionResult.h>
#include <aws/rds/model/ApplyPendingMaintenanceActionResult.h>
#include <aws/rds/model/AuthorizeDBSecurityGroupIngressResult.h>
#include <aws/rds/model/CopyDBParameterGroupResult.h>
#include <aws/rds/model/CopyDBSnapshotResult.h>
#include <aws/rds/model/CopyOptionGroupResult.h>
#include <aws/rds/model/CreateDBInstanceResult.h>
#include <aws/rds/model/CreateDBInstanceReadReplicaResult.h>
#include <aws/rds/model/CreateDBParameterGroupResult.h>
#include <aws/rds/model/CreateDBSecurityGroupResult.h>
#include <aws/rds/model/CreateDBSnapshotResult.h>
#include <aws/rds/model/CreateDBSubnetGroupResult.h>
#include <aws/rds/model/CreateEventSubscriptionResult.h>
#include <aws/rds/model/CreateOptionGroupResult.h>
#include <aws/rds/model/DeleteDBInstanceResult.h>
#include <aws/rds/model/DeleteDBSnapshotResult.h>
#include <aws/rds/model/DeleteEventSubscriptionResult.h>
#include <aws/rds/model/DescribeAccountAttributesResult.h>
#include <aws/rds/model/DescribeCertificatesResult.h>
#include <aws/rds/model/DescribeDBEngineVersionsResult.h>
#include <aws/rds/model/DescribeDBInstancesResult.h>
#include <aws/rds/model/DescribeDBLogFilesResult.h>
#include <aws/rds/model/DescribeDBParameterGroupsResult.h>
#include <aws/rds/model/DescribeDBParametersResult.h>
#include <aws/rds/model/DescribeDBSecurityGroupsResult.h>
#include <aws/rds/model/DescribeDBSnapshotsResult.h>
#include <aws/rds/model/DescribeDBSubnetGroupsResult.h>
#include <aws/rds/model/DescribeEngineDefaultParametersResult.h>
#include <aws/rds/model/DescribeEventCategoriesResult.h>
#include <aws/rds/model/DescribeEventSubscriptionsResult.h>
#include <aws/rds/model/DescribeEventsResult.h>
#include <aws/rds/model/DescribeOptionGroupOptionsResult.h>
#include <aws/rds/model/DescribeOptionGroupsResult.h>
#include <aws/rds/model/DescribeOrderableDBInstanceOptionsResult.h>
#include <aws/rds/model/DescribePendingMaintenanceActionsResult.h>
#include <aws/rds/model/DescribeReservedDBInstancesResult.h>
#include <aws/rds/model/DescribeReservedDBInstancesOfferingsResult.h>
#include <aws/rds/model/DownloadDBLogFilePortionResult.h>
#include <aws/rds/model/ListTagsForResourceResult.h>
#include <aws/rds/model/ModifyDBInstanceResult.h>
#include <aws/rds/model/ModifyDBParameterGroupResult.h>
#include <aws/rds/model/ModifyDBSubnetGroupResult.h>
#include <aws/rds/model/ModifyEventSubscriptionResult.h>
#include <aws/rds/model/ModifyOptionGroupResult.h>
#include <aws/rds/model/PromoteReadReplicaResult.h>
#include <aws/rds/model/PurchaseReservedDBInstancesOfferingResult.h>
#include <aws/rds/model/RebootDBInstanceResult.h>
#include <aws/rds/model/RemoveSourceIdentifierFromSubscriptionResult.h>
#include <aws/rds/model/ResetDBParameterGroupResult.h>
#include <aws/rds/model/RestoreDBInstanceFromDBSnapshotResult.h>
#include <aws/rds/model/RestoreDBInstanceToPointInTimeResult.h>
#include <aws/rds/model/RevokeDBSecurityGroupIngressResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <future>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;

namespace Threading
{
  class Executor;
} // namespace Threading

namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace RDS
{

namespace Model
{
  class AddSourceIdentifierToSubscriptionRequest;
  class AddTagsToResourceRequest;
  class ApplyPendingMaintenanceActionRequest;
  class AuthorizeDBSecurityGroupIngressRequest;
  class CopyDBParameterGroupRequest;
  class CopyDBSnapshotRequest;
  class CopyOptionGroupRequest;
  class CreateDBInstanceRequest;
  class CreateDBInstanceReadReplicaRequest;
  class CreateDBParameterGroupRequest;
  class CreateDBSecurityGroupRequest;
  class CreateDBSnapshotRequest;
  class CreateDBSubnetGroupRequest;
  class CreateEventSubscriptionRequest;
  class CreateOptionGroupRequest;
  class DeleteDBInstanceRequest;
  class DeleteDBParameterGroupRequest;
  class DeleteDBSecurityGroupRequest;
  class DeleteDBSnapshotRequest;
  class DeleteDBSubnetGroupRequest;
  class DeleteEventSubscriptionRequest;
  class DeleteOptionGroupRequest;
  class DescribeAccountAttributesRequest;
  class DescribeCertificatesRequest;
  class DescribeDBEngineVersionsRequest;
  class DescribeDBInstancesRequest;
  class DescribeDBLogFilesRequest;
  class DescribeDBParameterGroupsRequest;
  class DescribeDBParametersRequest;
  class DescribeDBSecurityGroupsRequest;
  class DescribeDBSnapshotsRequest;
  class DescribeDBSubnetGroupsRequest;
  class DescribeEngineDefaultParametersRequest;
  class DescribeEventCategoriesRequest;
  class DescribeEventSubscriptionsRequest;
  class DescribeEventsRequest;
  class DescribeOptionGroupOptionsRequest;
  class DescribeOptionGroupsRequest;
  class DescribeOrderableDBInstanceOptionsRequest;
  class DescribePendingMaintenanceActionsRequest;
  class DescribeReservedDBInstancesRequest;
  class DescribeReservedDBInstancesOfferingsRequest;
  class DownloadDBLogFilePortionRequest;
  class ListTagsForResourceRequest;
  class ModifyDBInstanceRequest;
  class ModifyDBParameterGroupRequest;
  class ModifyDBSubnetGroupRequest;
  class ModifyEventSubscriptionRequest;
  class ModifyOptionGroupRequest;
  class PromoteReadReplicaRequest;
  class PurchaseReservedDBInstancesOfferingRequest;
  class RebootDBInstanceRequest;
  class RemoveSourceIdentifierFromSubscriptionRequest;
  class RemoveTagsFromResourceRequest;
  class ResetDBParameterGroupRequest;
  class RestoreDBInstanceFromDBSnapshotRequest;
  class RestoreDBInstanceToPointInTimeRequest;
  class RevokeDBSecurityGroupIngressRequest;

  typedef Utils::Outcome<AddSourceIdentifierToSubscriptionResult, Client::AWSError<RDSErrors>> AddSourceIdentifierToSubscriptionOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<RDSErrors>> AddTagsToResourceOutcome;
  typedef Utils::Outcome<ApplyPendingMaintenanceActionResult, Client::AWSError<RDSErrors>> ApplyPendingMaintenanceActionOutcome;
  typedef Utils::Outcome<AuthorizeDBSecurityGroupIngressResult, Client::AWSError<RDSErrors>> AuthorizeDBSecurityGroupIngressOutcome;
  typedef Utils::Outcome<CopyDBParameterGroupResult, Client::AWSError<RDSErrors>> CopyDBParameterGroupOutcome;
  typedef Utils::Outcome<CopyDBSnapshotResult, Client::AWSError<RDSErrors>> CopyDBSnapshotOutcome;
  typedef Utils::Outcome<CopyOptionGroupResult, Client::AWSError<RDSErrors>> CopyOptionGroupOutcome;
  typedef Utils::Outcome<CreateDBInstanceResult, Client::AWSError<RDSErrors>> CreateDBInstanceOutcome;
  typedef Utils::Outcome<CreateDBInstanceReadReplicaResult, Client::AWSError<RDSErrors>> CreateDBInstanceReadReplicaOutcome;
  typedef Utils::Outcome<CreateDBParameterGroupResult, Client::AWSError<RDSErrors>> CreateDBParameterGroupOutcome;
  typedef Utils::Outcome<CreateDBSecurityGroupResult, Client::AWSError<RDSErrors>> CreateDBSecurityGroupOutcome;
  typedef Utils::Outcome<CreateDBSnapshotResult, Client::AWSError<RDSErrors>> CreateDBSnapshotOutcome;
  typedef Utils::Outcome<CreateDBSubnetGroupResult, Client::AWSError<RDSErrors>> CreateDBSubnetGroupOutcome;
  typedef Utils::Outcome<CreateEventSubscriptionResult, Client::AWSError<RDSErrors>> CreateEventSubscriptionOutcome;
  typedef Utils::Outcome<CreateOptionGroupResult, Client::AWSError<RDSErrors>> CreateOptionGroupOutcome;
  typedef Utils::Outcome<DeleteDBInstanceResult, Client::AWSError<RDSErrors>> DeleteDBInstanceOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<RDSErrors>> DeleteDBParameterGroupOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<RDSErrors>> DeleteDBSecurityGroupOutcome;
  typedef Utils::Outcome<DeleteDBSnapshotResult, Client::AWSError<RDSErrors>> DeleteDBSnapshotOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<RDSErrors>> DeleteDBSubnetGroupOutcome;
  typedef Utils::Outcome<DeleteEventSubscriptionResult, Client::AWSError<RDSErrors>> DeleteEventSubscriptionOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<RDSErrors>> DeleteOptionGroupOutcome;
  typedef Utils::Outcome<DescribeAccountAttributesResult, Client::AWSError<RDSErrors>> DescribeAccountAttributesOutcome;
  typedef Utils::Outcome<DescribeCertificatesResult, Client::AWSError<RDSErrors>> DescribeCertificatesOutcome;
  typedef Utils::Outcome<DescribeDBEngineVersionsResult, Client::AWSError<RDSErrors>> DescribeDBEngineVersionsOutcome;
  typedef Utils::Outcome<DescribeDBInstancesResult, Client::AWSError<RDSErrors>> DescribeDBInstancesOutcome;
  typedef Utils::Outcome<DescribeDBLogFilesResult, Client::AWSError<RDSErrors>> DescribeDBLogFilesOutcome;
  typedef Utils::Outcome<DescribeDBParameterGroupsResult, Client::AWSError<RDSErrors>> DescribeDBParameterGroupsOutcome;
  typedef Utils::Outcome<DescribeDBParametersResult, Client::AWSError<RDSErrors>> DescribeDBParametersOutcome;
  typedef Utils::Outcome<DescribeDBSecurityGroupsResult, Client::AWSError<RDSErrors>> DescribeDBSecurityGroupsOutcome;
  typedef Utils::Outcome<DescribeDBSnapshotsResult, Client::AWSError<RDSErrors>> DescribeDBSnapshotsOutcome;
  typedef Utils::Outcome<DescribeDBSubnetGroupsResult, Client::AWSError<RDSErrors>> DescribeDBSubnetGroupsOutcome;
  typedef Utils::Outcome<DescribeEngineDefaultParametersResult, Client::AWSError<RDSErrors>> DescribeEngineDefaultParametersOutcome;
  typedef Utils::Outcome<DescribeEventCategoriesResult, Client::AWSError<RDSErrors>> DescribeEventCategoriesOutcome;
  typedef Utils::Outcome<DescribeEventSubscriptionsResult, Client::AWSError<RDSErrors>> DescribeEventSubscriptionsOutcome;
  typedef Utils::Outcome<DescribeEventsResult, Client::AWSError<RDSErrors>> DescribeEventsOutcome;
  typedef Utils::Outcome<DescribeOptionGroupOptionsResult, Client::AWSError<RDSErrors>> DescribeOptionGroupOptionsOutcome;
  typedef Utils::Outcome<DescribeOptionGroupsResult, Client::AWSError<RDSErrors>> DescribeOptionGroupsOutcome;
  typedef Utils::Outcome<DescribeOrderableDBInstanceOptionsResult, Client::AWSError<RDSErrors>> DescribeOrderableDBInstanceOptionsOutcome;
  typedef Utils::Outcome<DescribePendingMaintenanceActionsResult, Client::AWSError<RDSErrors>> DescribePendingMaintenanceActionsOutcome;
  typedef Utils::Outcome<DescribeReservedDBInstancesResult, Client::AWSError<RDSErrors>> DescribeReservedDBInstancesOutcome;
  typedef Utils::Outcome<DescribeReservedDBInstancesOfferingsResult, Client::AWSError<RDSErrors>> DescribeReservedDBInstancesOfferingsOutcome;
  typedef Utils::Outcome<DownloadDBLogFilePortionResult, Client::AWSError<RDSErrors>> DownloadDBLogFilePortionOutcome;
  typedef Utils::Outcome<ListTagsForResourceResult, Client::AWSError<RDSErrors>> ListTagsForResourceOutcome;
  typedef Utils::Outcome<ModifyDBInstanceResult, Client::AWSError<RDSErrors>> ModifyDBInstanceOutcome;
  typedef Utils::Outcome<ModifyDBParameterGroupResult, Client::AWSError<RDSErrors>> ModifyDBParameterGroupOutcome;
  typedef Utils::Outcome<ModifyDBSubnetGroupResult, Client::AWSError<RDSErrors>> ModifyDBSubnetGroupOutcome;
  typedef Utils::Outcome<ModifyEventSubscriptionResult, Client::AWSError<RDSErrors>> ModifyEventSubscriptionOutcome;
  typedef Utils::Outcome<ModifyOptionGroupResult, Client::AWSError<RDSErrors>> ModifyOptionGroupOutcome;
  typedef Utils::Outcome<PromoteReadReplicaResult, Client::AWSError<RDSErrors>> PromoteReadReplicaOutcome;
  typedef Utils::Outcome<PurchaseReservedDBInstancesOfferingResult, Client::AWSError<RDSErrors>> PurchaseReservedDBInstancesOfferingOutcome;
  typedef Utils::Outcome<RebootDBInstanceResult, Client::AWSError<RDSErrors>> RebootDBInstanceOutcome;
  typedef Utils::Outcome<RemoveSourceIdentifierFromSubscriptionResult, Client::AWSError<RDSErrors>> RemoveSourceIdentifierFromSubscriptionOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<RDSErrors>> RemoveTagsFromResourceOutcome;
  typedef Utils::Outcome<ResetDBParameterGroupResult, Client::AWSError<RDSErrors>> ResetDBParameterGroupOutcome;
  typedef Utils::Outcome<RestoreDBInstanceFromDBSnapshotResult, Client::AWSError<RDSErrors>> RestoreDBInstanceFromDBSnapshotOutcome;
  typedef Utils::Outcome<RestoreDBInstanceToPointInTimeResult, Client::AWSError<RDSErrors>> RestoreDBInstanceToPointInTimeOutcome;
  typedef Utils::Outcome<RevokeDBSecurityGroupIngressResult, Client::AWSError<RDSErrors>> RevokeDBSecurityGroupIngressOutcome;

  typedef std::future<AddSourceIdentifierToSubscriptionOutcome> AddSourceIdentifierToSubscriptionOutcomeCallable;
  typedef std::future<AddTagsToResourceOutcome> AddTagsToResourceOutcomeCallable;
  typedef std::future<ApplyPendingMaintenanceActionOutcome> ApplyPendingMaintenanceActionOutcomeCallable;
  typedef std::future<AuthorizeDBSecurityGroupIngressOutcome> AuthorizeDBSecurityGroupIngressOutcomeCallable;
  typedef std::future<CopyDBParameterGroupOutcome> CopyDBParameterGroupOutcomeCallable;
  typedef std::future<CopyDBSnapshotOutcome> CopyDBSnapshotOutcomeCallable;
  typedef std::future<CopyOptionGroupOutcome> CopyOptionGroupOutcomeCallable;
  typedef std::future<CreateDBInstanceOutcome> CreateDBInstanceOutcomeCallable;
  typedef std::future<CreateDBInstanceReadReplicaOutcome> CreateDBInstanceReadReplicaOutcomeCallable;
  typedef std::future<CreateDBParameterGroupOutcome> CreateDBParameterGroupOutcomeCallable;
  typedef std::future<CreateDBSecurityGroupOutcome> CreateDBSecurityGroupOutcomeCallable;
  typedef std::future<CreateDBSnapshotOutcome> CreateDBSnapshotOutcomeCallable;
  typedef std::future<CreateDBSubnetGroupOutcome> CreateDBSubnetGroupOutcomeCallable;
  typedef std::future<CreateEventSubscriptionOutcome> CreateEventSubscriptionOutcomeCallable;
  typedef std::future<CreateOptionGroupOutcome> CreateOptionGroupOutcomeCallable;
  typedef std::future<DeleteDBInstanceOutcome> DeleteDBInstanceOutcomeCallable;
  typedef std::future<DeleteDBParameterGroupOutcome> DeleteDBParameterGroupOutcomeCallable;
  typedef std::future<DeleteDBSecurityGroupOutcome> DeleteDBSecurityGroupOutcomeCallable;
  typedef std::future<DeleteDBSnapshotOutcome> DeleteDBSnapshotOutcomeCallable;
  typedef std::future<DeleteDBSubnetGroupOutcome> DeleteDBSubnetGroupOutcomeCallable;
  typedef std::future<DeleteEventSubscriptionOutcome> DeleteEventSubscriptionOutcomeCallable;
  typedef std::future<DeleteOptionGroupOutcome> DeleteOptionGroupOutcomeCallable;
  typedef std::future<DescribeAccountAttributesOutcome> DescribeAccountAttributesOutcomeCallable;
  typedef std::future<DescribeCertificatesOutcome> DescribeCertificatesOutcomeCallable;
  typedef std::future<DescribeDBEngineVersionsOutcome> DescribeDBEngineVersionsOutcomeCallable;
  typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
  typedef std::future<DescribeDBLogFilesOutcome> DescribeDBLogFilesOutcomeCallable;
  typedef std::future<DescribeDBParameterGroupsOutcome> DescribeDBParameterGroupsOutcomeCallable;
  typedef std::future<DescribeDBParametersOutcome> DescribeDBParametersOutcomeCallable;
  typedef std::future<DescribeDBSecurityGroupsOutcome> DescribeDBSecurityGroupsOutcomeCallable;
  typedef std::future<DescribeDBSnapshotsOutcome> DescribeDBSnapshotsOutcomeCallable;
  typedef std::future<DescribeDBSubnetGroupsOutcome> DescribeDBSubnetGroupsOutcomeCallable;
  typedef std::future<DescribeEngineDefaultParametersOutcome> DescribeEngineDefaultParametersOutcomeCallable;
  typedef std::future<DescribeEventCategoriesOutcome> DescribeEventCategoriesOutcomeCallable;
  typedef std::future<DescribeEventSubscriptionsOutcome> DescribeEventSubscriptionsOutcomeCallable;
  typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
  typedef std::future<DescribeOptionGroupOptionsOutcome> DescribeOptionGroupOptionsOutcomeCallable;
  typedef std::future<DescribeOptionGroupsOutcome> DescribeOptionGroupsOutcomeCallable;
  typedef std::future<DescribeOrderableDBInstanceOptionsOutcome> DescribeOrderableDBInstanceOptionsOutcomeCallable;
  typedef std::future<DescribePendingMaintenanceActionsOutcome> DescribePendingMaintenanceActionsOutcomeCallable;
  typedef std::future<DescribeReservedDBInstancesOutcome> DescribeReservedDBInstancesOutcomeCallable;
  typedef std::future<DescribeReservedDBInstancesOfferingsOutcome> DescribeReservedDBInstancesOfferingsOutcomeCallable;
  typedef std::future<DownloadDBLogFilePortionOutcome> DownloadDBLogFilePortionOutcomeCallable;
  typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
  typedef std::future<ModifyDBInstanceOutcome> ModifyDBInstanceOutcomeCallable;
  typedef std::future<ModifyDBParameterGroupOutcome> ModifyDBParameterGroupOutcomeCallable;
  typedef std::future<ModifyDBSubnetGroupOutcome> ModifyDBSubnetGroupOutcomeCallable;
  typedef std::future<ModifyEventSubscriptionOutcome> ModifyEventSubscriptionOutcomeCallable;
  typedef std::future<ModifyOptionGroupOutcome> ModifyOptionGroupOutcomeCallable;
  typedef std::future<PromoteReadReplicaOutcome> PromoteReadReplicaOutcomeCallable;
  typedef std::future<PurchaseReservedDBInstancesOfferingOutcome> PurchaseReservedDBInstancesOfferingOutcomeCallable;
  typedef std::future<RebootDBInstanceOutcome> RebootDBInstanceOutcomeCallable;
  typedef std::future<RemoveSourceIdentifierFromSubscriptionOutcome> RemoveSourceIdentifierFromSubscriptionOutcomeCallable;
  typedef std::future<RemoveTagsFromResourceOutcome> RemoveTagsFromResourceOutcomeCallable;
  typedef std::future<ResetDBParameterGroupOutcome> ResetDBParameterGroupOutcomeCallable;
  typedef std::future<RestoreDBInstanceFromDBSnapshotOutcome> RestoreDBInstanceFromDBSnapshotOutcomeCallable;
  typedef std::future<RestoreDBInstanceToPointInTimeOutcome> RestoreDBInstanceToPointInTimeOutcomeCallable;
  typedef std::future<RevokeDBSecurityGroupIngressOutcome> RevokeDBSecurityGroupIngressOutcomeCallable;
} // namespace Model

  class RDSClient;

  typedef Aws::Utils::Event<RDSClient, const Model::AddSourceIdentifierToSubscriptionRequest&, const Model::AddSourceIdentifierToSubscriptionOutcome&, const Aws::Client::AsyncCallerContext*> AddSourceIdentifierToSubscriptionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::AddTagsToResourceRequest&, const Model::AddTagsToResourceOutcome&, const Aws::Client::AsyncCallerContext*> AddTagsToResourceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::ApplyPendingMaintenanceActionRequest&, const Model::ApplyPendingMaintenanceActionOutcome&, const Aws::Client::AsyncCallerContext*> ApplyPendingMaintenanceActionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::AuthorizeDBSecurityGroupIngressRequest&, const Model::AuthorizeDBSecurityGroupIngressOutcome&, const Aws::Client::AsyncCallerContext*> AuthorizeDBSecurityGroupIngressOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::CopyDBParameterGroupRequest&, const Model::CopyDBParameterGroupOutcome&, const Aws::Client::AsyncCallerContext*> CopyDBParameterGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::CopyDBSnapshotRequest&, const Model::CopyDBSnapshotOutcome&, const Aws::Client::AsyncCallerContext*> CopyDBSnapshotOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::CopyOptionGroupRequest&, const Model::CopyOptionGroupOutcome&, const Aws::Client::AsyncCallerContext*> CopyOptionGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::CreateDBInstanceRequest&, const Model::CreateDBInstanceOutcome&, const Aws::Client::AsyncCallerContext*> CreateDBInstanceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::CreateDBInstanceReadReplicaRequest&, const Model::CreateDBInstanceReadReplicaOutcome&, const Aws::Client::AsyncCallerContext*> CreateDBInstanceReadReplicaOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::CreateDBParameterGroupRequest&, const Model::CreateDBParameterGroupOutcome&, const Aws::Client::AsyncCallerContext*> CreateDBParameterGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::CreateDBSecurityGroupRequest&, const Model::CreateDBSecurityGroupOutcome&, const Aws::Client::AsyncCallerContext*> CreateDBSecurityGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::CreateDBSnapshotRequest&, const Model::CreateDBSnapshotOutcome&, const Aws::Client::AsyncCallerContext*> CreateDBSnapshotOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::CreateDBSubnetGroupRequest&, const Model::CreateDBSubnetGroupOutcome&, const Aws::Client::AsyncCallerContext*> CreateDBSubnetGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::CreateEventSubscriptionRequest&, const Model::CreateEventSubscriptionOutcome&, const Aws::Client::AsyncCallerContext*> CreateEventSubscriptionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::CreateOptionGroupRequest&, const Model::CreateOptionGroupOutcome&, const Aws::Client::AsyncCallerContext*> CreateOptionGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::DeleteDBInstanceRequest&, const Model::DeleteDBInstanceOutcome&, const Aws::Client::AsyncCallerContext*> DeleteDBInstanceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::DeleteDBParameterGroupRequest&, const Model::DeleteDBParameterGroupOutcome&, const Aws::Client::AsyncCallerContext*> DeleteDBParameterGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::DeleteDBSecurityGroupRequest&, const Model::DeleteDBSecurityGroupOutcome&, const Aws::Client::AsyncCallerContext*> DeleteDBSecurityGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::DeleteDBSnapshotRequest&, const Model::DeleteDBSnapshotOutcome&, const Aws::Client::AsyncCallerContext*> DeleteDBSnapshotOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::DeleteDBSubnetGroupRequest&, const Model::DeleteDBSubnetGroupOutcome&, const Aws::Client::AsyncCallerContext*> DeleteDBSubnetGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::DeleteEventSubscriptionRequest&, const Model::DeleteEventSubscriptionOutcome&, const Aws::Client::AsyncCallerContext*> DeleteEventSubscriptionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::DeleteOptionGroupRequest&, const Model::DeleteOptionGroupOutcome&, const Aws::Client::AsyncCallerContext*> DeleteOptionGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::DescribeAccountAttributesRequest&, const Model::DescribeAccountAttributesOutcome&, const Aws::Client::AsyncCallerContext*> DescribeAccountAttributesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::DescribeCertificatesRequest&, const Model::DescribeCertificatesOutcome&, const Aws::Client::AsyncCallerContext*> DescribeCertificatesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::DescribeDBEngineVersionsRequest&, const Model::DescribeDBEngineVersionsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeDBEngineVersionsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::DescribeDBInstancesRequest&, const Model::DescribeDBInstancesOutcome&, const Aws::Client::AsyncCallerContext*> DescribeDBInstancesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::DescribeDBLogFilesRequest&, const Model::DescribeDBLogFilesOutcome&, const Aws::Client::AsyncCallerContext*> DescribeDBLogFilesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::DescribeDBParameterGroupsRequest&, const Model::DescribeDBParameterGroupsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeDBParameterGroupsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::DescribeDBParametersRequest&, const Model::DescribeDBParametersOutcome&, const Aws::Client::AsyncCallerContext*> DescribeDBParametersOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::DescribeDBSecurityGroupsRequest&, const Model::DescribeDBSecurityGroupsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeDBSecurityGroupsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::DescribeDBSnapshotsRequest&, const Model::DescribeDBSnapshotsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeDBSnapshotsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::DescribeDBSubnetGroupsRequest&, const Model::DescribeDBSubnetGroupsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeDBSubnetGroupsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::DescribeEngineDefaultParametersRequest&, const Model::DescribeEngineDefaultParametersOutcome&, const Aws::Client::AsyncCallerContext*> DescribeEngineDefaultParametersOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::DescribeEventCategoriesRequest&, const Model::DescribeEventCategoriesOutcome&, const Aws::Client::AsyncCallerContext*> DescribeEventCategoriesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::DescribeEventSubscriptionsRequest&, const Model::DescribeEventSubscriptionsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeEventSubscriptionsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::DescribeEventsRequest&, const Model::DescribeEventsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeEventsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::DescribeOptionGroupOptionsRequest&, const Model::DescribeOptionGroupOptionsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeOptionGroupOptionsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::DescribeOptionGroupsRequest&, const Model::DescribeOptionGroupsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeOptionGroupsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::DescribeOrderableDBInstanceOptionsRequest&, const Model::DescribeOrderableDBInstanceOptionsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeOrderableDBInstanceOptionsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::DescribePendingMaintenanceActionsRequest&, const Model::DescribePendingMaintenanceActionsOutcome&, const Aws::Client::AsyncCallerContext*> DescribePendingMaintenanceActionsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::DescribeReservedDBInstancesRequest&, const Model::DescribeReservedDBInstancesOutcome&, const Aws::Client::AsyncCallerContext*> DescribeReservedDBInstancesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::DescribeReservedDBInstancesOfferingsRequest&, const Model::DescribeReservedDBInstancesOfferingsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeReservedDBInstancesOfferingsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::DownloadDBLogFilePortionRequest&, const Model::DownloadDBLogFilePortionOutcome&, const Aws::Client::AsyncCallerContext*> DownloadDBLogFilePortionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const Aws::Client::AsyncCallerContext*> ListTagsForResourceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::ModifyDBInstanceRequest&, const Model::ModifyDBInstanceOutcome&, const Aws::Client::AsyncCallerContext*> ModifyDBInstanceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::ModifyDBParameterGroupRequest&, const Model::ModifyDBParameterGroupOutcome&, const Aws::Client::AsyncCallerContext*> ModifyDBParameterGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::ModifyDBSubnetGroupRequest&, const Model::ModifyDBSubnetGroupOutcome&, const Aws::Client::AsyncCallerContext*> ModifyDBSubnetGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::ModifyEventSubscriptionRequest&, const Model::ModifyEventSubscriptionOutcome&, const Aws::Client::AsyncCallerContext*> ModifyEventSubscriptionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::ModifyOptionGroupRequest&, const Model::ModifyOptionGroupOutcome&, const Aws::Client::AsyncCallerContext*> ModifyOptionGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::PromoteReadReplicaRequest&, const Model::PromoteReadReplicaOutcome&, const Aws::Client::AsyncCallerContext*> PromoteReadReplicaOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::PurchaseReservedDBInstancesOfferingRequest&, const Model::PurchaseReservedDBInstancesOfferingOutcome&, const Aws::Client::AsyncCallerContext*> PurchaseReservedDBInstancesOfferingOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::RebootDBInstanceRequest&, const Model::RebootDBInstanceOutcome&, const Aws::Client::AsyncCallerContext*> RebootDBInstanceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::RemoveSourceIdentifierFromSubscriptionRequest&, const Model::RemoveSourceIdentifierFromSubscriptionOutcome&, const Aws::Client::AsyncCallerContext*> RemoveSourceIdentifierFromSubscriptionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::RemoveTagsFromResourceRequest&, const Model::RemoveTagsFromResourceOutcome&, const Aws::Client::AsyncCallerContext*> RemoveTagsFromResourceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::ResetDBParameterGroupRequest&, const Model::ResetDBParameterGroupOutcome&, const Aws::Client::AsyncCallerContext*> ResetDBParameterGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::RestoreDBInstanceFromDBSnapshotRequest&, const Model::RestoreDBInstanceFromDBSnapshotOutcome&, const Aws::Client::AsyncCallerContext*> RestoreDBInstanceFromDBSnapshotOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::RestoreDBInstanceToPointInTimeRequest&, const Model::RestoreDBInstanceToPointInTimeOutcome&, const Aws::Client::AsyncCallerContext*> RestoreDBInstanceToPointInTimeOutcomeReceivedEvent;
  typedef Aws::Utils::Event<RDSClient, const Model::RevokeDBSecurityGroupIngressRequest&, const Model::RevokeDBSecurityGroupIngressOutcome&, const Aws::Client::AsyncCallerContext*> RevokeDBSecurityGroupIngressOutcomeReceivedEvent;

  /*
    <fullname>Amazon Relational Database Service</fullname> <p> Amazon Relational Database Service (Amazon RDS) is a web service that makes it easier to set up, operate, and scale a relational database in the cloud. It provides cost-efficient, resizable capacity for an industry-standard relational database and manages common database administration tasks, freeing up developers to focus on what makes their applications and businesses unique. </p> <p> Amazon RDS gives you access to the capabilities of a MySQL, PostgreSQL, Microsoft SQL Server, Oracle, or Aurora database server. This means the code, applications, and tools you already use today with your existing databases work with Amazon RDS without modification. Amazon RDS automatically backs up your database and maintains the database software that powers your DB instance. Amazon RDS is flexible: you can scale your database instance's compute resources and storage capacity to meet your application's demand. As with all Amazon Web Services, there are no up-front investments, and you pay only for the resources you use. </p> <p> This is an interface reference for Amazon RDS. It contains documentation for a programming or command line interface you can use to manage Amazon RDS. Note that Amazon RDS is asynchronous, which means that some interfaces may require techniques such as polling or callback functions to determine when a command has been applied. In this reference, the parameter descriptions indicate whether a command is applied immediately, on the next instance reboot, or during the maintenance window. For a summary of the Amazon RDS interfaces, go to <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Welcome.html#Welcome.Interfaces">Available RDS Interfaces</a>. </p>
  */
  class AWS_RDS_API RDSClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

     /**
      * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      RDSClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      RDSClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
      * the default http client factory will be used
      */
      RDSClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
        const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
        const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

      ~RDSClient();

     /*
       <p>Adds a source identifier to an existing RDS event notification subscription.</p>
     */
     Model::AddSourceIdentifierToSubscriptionOutcome AddSourceIdentifierToSubscription(const Model::AddSourceIdentifierToSubscriptionRequest& request) const;

     /*
       <p>Adds a source identifier to an existing RDS event notification subscription.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::AddSourceIdentifierToSubscriptionOutcomeCallable AddSourceIdentifierToSubscriptionCallable(const Model::AddSourceIdentifierToSubscriptionRequest& request) const;

     /*
       <p>Adds a source identifier to an existing RDS event notification subscription.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void AddSourceIdentifierToSubscriptionAsync(const Model::AddSourceIdentifierToSubscriptionRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Adds metadata tags to an Amazon RDS resource. These tags can also be used with cost allocation reporting to track cost associated with Amazon RDS resources, or used in Condition statement in IAM policy for Amazon RDS.</p> <p>For an overview on tagging Amazon RDS resources, see <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging Amazon RDS Resources</a>.</p>
     */
     Model::AddTagsToResourceOutcome AddTagsToResource(const Model::AddTagsToResourceRequest& request) const;

     /*
       <p> Adds metadata tags to an Amazon RDS resource. These tags can also be used with cost allocation reporting to track cost associated with Amazon RDS resources, or used in Condition statement in IAM policy for Amazon RDS.</p> <p>For an overview on tagging Amazon RDS resources, see <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging Amazon RDS Resources</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const Model::AddTagsToResourceRequest& request) const;

     /*
       <p> Adds metadata tags to an Amazon RDS resource. These tags can also be used with cost allocation reporting to track cost associated with Amazon RDS resources, or used in Condition statement in IAM policy for Amazon RDS.</p> <p>For an overview on tagging Amazon RDS resources, see <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging Amazon RDS Resources</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void AddTagsToResourceAsync(const Model::AddTagsToResourceRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Applies a pending maintenance action to a resource (for example, a DB instance).</p>
     */
     Model::ApplyPendingMaintenanceActionOutcome ApplyPendingMaintenanceAction(const Model::ApplyPendingMaintenanceActionRequest& request) const;

     /*
       <p>Applies a pending maintenance action to a resource (for example, a DB instance).</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ApplyPendingMaintenanceActionOutcomeCallable ApplyPendingMaintenanceActionCallable(const Model::ApplyPendingMaintenanceActionRequest& request) const;

     /*
       <p>Applies a pending maintenance action to a resource (for example, a DB instance).</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ApplyPendingMaintenanceActionAsync(const Model::ApplyPendingMaintenanceActionRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Enables ingress to a DBSecurityGroup using one of two forms of authorization. First, EC2 or VPC security groups can be added to the DBSecurityGroup if the application using the database is running on EC2 or VPC instances. Second, IP ranges are available if the application accessing your database is running on the Internet. Required parameters for this API are one of CIDR range, EC2SecurityGroupId for VPC, or (EC2SecurityGroupOwnerId and either EC2SecurityGroupName or EC2SecurityGroupId for non-VPC). </p> <note> You cannot authorize ingress from an EC2 security group in one Region to an Amazon RDS DB instance in another. You cannot authorize ingress from a VPC security group in one VPC to an Amazon RDS DB instance in another. </note> <p>For an overview of CIDR ranges, go to the <a href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia Tutorial</a>. </p>
     */
     Model::AuthorizeDBSecurityGroupIngressOutcome AuthorizeDBSecurityGroupIngress(const Model::AuthorizeDBSecurityGroupIngressRequest& request) const;

     /*
       <p> Enables ingress to a DBSecurityGroup using one of two forms of authorization. First, EC2 or VPC security groups can be added to the DBSecurityGroup if the application using the database is running on EC2 or VPC instances. Second, IP ranges are available if the application accessing your database is running on the Internet. Required parameters for this API are one of CIDR range, EC2SecurityGroupId for VPC, or (EC2SecurityGroupOwnerId and either EC2SecurityGroupName or EC2SecurityGroupId for non-VPC). </p> <note> You cannot authorize ingress from an EC2 security group in one Region to an Amazon RDS DB instance in another. You cannot authorize ingress from a VPC security group in one VPC to an Amazon RDS DB instance in another. </note> <p>For an overview of CIDR ranges, go to the <a href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia Tutorial</a>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::AuthorizeDBSecurityGroupIngressOutcomeCallable AuthorizeDBSecurityGroupIngressCallable(const Model::AuthorizeDBSecurityGroupIngressRequest& request) const;

     /*
       <p> Enables ingress to a DBSecurityGroup using one of two forms of authorization. First, EC2 or VPC security groups can be added to the DBSecurityGroup if the application using the database is running on EC2 or VPC instances. Second, IP ranges are available if the application accessing your database is running on the Internet. Required parameters for this API are one of CIDR range, EC2SecurityGroupId for VPC, or (EC2SecurityGroupOwnerId and either EC2SecurityGroupName or EC2SecurityGroupId for non-VPC). </p> <note> You cannot authorize ingress from an EC2 security group in one Region to an Amazon RDS DB instance in another. You cannot authorize ingress from a VPC security group in one VPC to an Amazon RDS DB instance in another. </note> <p>For an overview of CIDR ranges, go to the <a href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia Tutorial</a>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void AuthorizeDBSecurityGroupIngressAsync(const Model::AuthorizeDBSecurityGroupIngressRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Copies the specified DB parameter group. </p>
     */
     Model::CopyDBParameterGroupOutcome CopyDBParameterGroup(const Model::CopyDBParameterGroupRequest& request) const;

     /*
       <p> Copies the specified DB parameter group. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CopyDBParameterGroupOutcomeCallable CopyDBParameterGroupCallable(const Model::CopyDBParameterGroupRequest& request) const;

     /*
       <p> Copies the specified DB parameter group. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CopyDBParameterGroupAsync(const Model::CopyDBParameterGroupRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Copies the specified DBSnapshot. The source DBSnapshot must be in the "available" state. </p>
     */
     Model::CopyDBSnapshotOutcome CopyDBSnapshot(const Model::CopyDBSnapshotRequest& request) const;

     /*
       <p> Copies the specified DBSnapshot. The source DBSnapshot must be in the "available" state. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CopyDBSnapshotOutcomeCallable CopyDBSnapshotCallable(const Model::CopyDBSnapshotRequest& request) const;

     /*
       <p> Copies the specified DBSnapshot. The source DBSnapshot must be in the "available" state. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CopyDBSnapshotAsync(const Model::CopyDBSnapshotRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Copies the specified option group. </p>
     */
     Model::CopyOptionGroupOutcome CopyOptionGroup(const Model::CopyOptionGroupRequest& request) const;

     /*
       <p>Copies the specified option group. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CopyOptionGroupOutcomeCallable CopyOptionGroupCallable(const Model::CopyOptionGroupRequest& request) const;

     /*
       <p>Copies the specified option group. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CopyOptionGroupAsync(const Model::CopyOptionGroupRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Creates a new DB instance. </p>
     */
     Model::CreateDBInstanceOutcome CreateDBInstance(const Model::CreateDBInstanceRequest& request) const;

     /*
       <p> Creates a new DB instance. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateDBInstanceOutcomeCallable CreateDBInstanceCallable(const Model::CreateDBInstanceRequest& request) const;

     /*
       <p> Creates a new DB instance. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateDBInstanceAsync(const Model::CreateDBInstanceRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Creates a DB instance that acts as a Read Replica of a source DB instance. </p> <p> All Read Replica DB instances are created as Single-AZ deployments with backups disabled. All other DB instance attributes (including DB security groups and DB parameter groups) are inherited from the source DB instance, except as specified below. </p> <important> <p> The source DB instance must have backup retention enabled. </p> </important>
     */
     Model::CreateDBInstanceReadReplicaOutcome CreateDBInstanceReadReplica(const Model::CreateDBInstanceReadReplicaRequest& request) const;

     /*
       <p> Creates a DB instance that acts as a Read Replica of a source DB instance. </p> <p> All Read Replica DB instances are created as Single-AZ deployments with backups disabled. All other DB instance attributes (including DB security groups and DB parameter groups) are inherited from the source DB instance, except as specified below. </p> <important> <p> The source DB instance must have backup retention enabled. </p> </important>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateDBInstanceReadReplicaOutcomeCallable CreateDBInstanceReadReplicaCallable(const Model::CreateDBInstanceReadReplicaRequest& request) const;

     /*
       <p> Creates a DB instance that acts as a Read Replica of a source DB instance. </p> <p> All Read Replica DB instances are created as Single-AZ deployments with backups disabled. All other DB instance attributes (including DB security groups and DB parameter groups) are inherited from the source DB instance, except as specified below. </p> <important> <p> The source DB instance must have backup retention enabled. </p> </important>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateDBInstanceReadReplicaAsync(const Model::CreateDBInstanceReadReplicaRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Creates a new DB parameter group. </p> <p> A DB parameter group is initially created with the default parameters for the database engine used by the DB instance. To provide custom values for any of the parameters, you must modify the group after creating it using <i>ModifyDBParameterGroup</i>. Once you've created a DB parameter group, you need to associate it with your DB instance using <i>ModifyDBInstance</i>. When you associate a new DB parameter group with a running DB instance, you need to reboot the DB instance without failover for the new DB parameter group and associated settings to take effect. </p> <important> <p>After you create a DB parameter group, you should wait at least 5 minutes before creating your first DB instance that uses that DB parameter group as the default parameter group. This allows Amazon RDS to fully complete the create action before the parameter group is used as the default for a new DB instance. This is especially important for parameters that are critical when creating the default database for a DB instance, such as the character set for the default database defined by the <code>character_set_database</code> parameter. You can use the <i>Parameter Groups</i> option of the <a href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the <i>DescribeDBParameters</i> command to verify that your DB parameter group has been created or modified.</p> </important>
     */
     Model::CreateDBParameterGroupOutcome CreateDBParameterGroup(const Model::CreateDBParameterGroupRequest& request) const;

     /*
       <p> Creates a new DB parameter group. </p> <p> A DB parameter group is initially created with the default parameters for the database engine used by the DB instance. To provide custom values for any of the parameters, you must modify the group after creating it using <i>ModifyDBParameterGroup</i>. Once you've created a DB parameter group, you need to associate it with your DB instance using <i>ModifyDBInstance</i>. When you associate a new DB parameter group with a running DB instance, you need to reboot the DB instance without failover for the new DB parameter group and associated settings to take effect. </p> <important> <p>After you create a DB parameter group, you should wait at least 5 minutes before creating your first DB instance that uses that DB parameter group as the default parameter group. This allows Amazon RDS to fully complete the create action before the parameter group is used as the default for a new DB instance. This is especially important for parameters that are critical when creating the default database for a DB instance, such as the character set for the default database defined by the <code>character_set_database</code> parameter. You can use the <i>Parameter Groups</i> option of the <a href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the <i>DescribeDBParameters</i> command to verify that your DB parameter group has been created or modified.</p> </important>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateDBParameterGroupOutcomeCallable CreateDBParameterGroupCallable(const Model::CreateDBParameterGroupRequest& request) const;

     /*
       <p> Creates a new DB parameter group. </p> <p> A DB parameter group is initially created with the default parameters for the database engine used by the DB instance. To provide custom values for any of the parameters, you must modify the group after creating it using <i>ModifyDBParameterGroup</i>. Once you've created a DB parameter group, you need to associate it with your DB instance using <i>ModifyDBInstance</i>. When you associate a new DB parameter group with a running DB instance, you need to reboot the DB instance without failover for the new DB parameter group and associated settings to take effect. </p> <important> <p>After you create a DB parameter group, you should wait at least 5 minutes before creating your first DB instance that uses that DB parameter group as the default parameter group. This allows Amazon RDS to fully complete the create action before the parameter group is used as the default for a new DB instance. This is especially important for parameters that are critical when creating the default database for a DB instance, such as the character set for the default database defined by the <code>character_set_database</code> parameter. You can use the <i>Parameter Groups</i> option of the <a href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the <i>DescribeDBParameters</i> command to verify that your DB parameter group has been created or modified.</p> </important>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateDBParameterGroupAsync(const Model::CreateDBParameterGroupRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Creates a new DB security group. DB security groups control access to a DB instance. </p>
     */
     Model::CreateDBSecurityGroupOutcome CreateDBSecurityGroup(const Model::CreateDBSecurityGroupRequest& request) const;

     /*
       <p> Creates a new DB security group. DB security groups control access to a DB instance. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateDBSecurityGroupOutcomeCallable CreateDBSecurityGroupCallable(const Model::CreateDBSecurityGroupRequest& request) const;

     /*
       <p> Creates a new DB security group. DB security groups control access to a DB instance. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateDBSecurityGroupAsync(const Model::CreateDBSecurityGroupRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Creates a DBSnapshot. The source DBInstance must be in "available" state. </p>
     */
     Model::CreateDBSnapshotOutcome CreateDBSnapshot(const Model::CreateDBSnapshotRequest& request) const;

     /*
       <p> Creates a DBSnapshot. The source DBInstance must be in "available" state. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateDBSnapshotOutcomeCallable CreateDBSnapshotCallable(const Model::CreateDBSnapshotRequest& request) const;

     /*
       <p> Creates a DBSnapshot. The source DBInstance must be in "available" state. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateDBSnapshotAsync(const Model::CreateDBSnapshotRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Creates a new DB subnet group. DB subnet groups must contain at least one subnet in at least two AZs in the region. </p>
     */
     Model::CreateDBSubnetGroupOutcome CreateDBSubnetGroup(const Model::CreateDBSubnetGroupRequest& request) const;

     /*
       <p> Creates a new DB subnet group. DB subnet groups must contain at least one subnet in at least two AZs in the region. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateDBSubnetGroupOutcomeCallable CreateDBSubnetGroupCallable(const Model::CreateDBSubnetGroupRequest& request) const;

     /*
       <p> Creates a new DB subnet group. DB subnet groups must contain at least one subnet in at least two AZs in the region. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateDBSubnetGroupAsync(const Model::CreateDBSubnetGroupRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Creates an RDS event notification subscription. This action requires a topic ARN (Amazon Resource Name) created by either the RDS console, the SNS console, or the SNS API. To obtain an ARN with SNS, you must create a topic in Amazon SNS and subscribe to the topic. The ARN is displayed in the SNS console.</p> <p>You can specify the type of source (SourceType) you want to be notified of, provide a list of RDS sources (SourceIds) that triggers the events, and provide a list of event categories (EventCategories) for events you want to be notified of. For example, you can specify SourceType = db-instance, SourceIds = mydbinstance1, mydbinstance2 and EventCategories = Availability, Backup.</p> <p>If you specify both the SourceType and SourceIds, such as SourceType = db-instance and SourceIdentifier = myDBInstance1, you will be notified of all the db-instance events for the specified source. If you specify a SourceType but do not specify a SourceIdentifier, you will receive notice of the events for that source type for all your RDS sources. If you do not specify either the SourceType nor the SourceIdentifier, you will be notified of events generated from all RDS sources belonging to your customer account.</p>
     */
     Model::CreateEventSubscriptionOutcome CreateEventSubscription(const Model::CreateEventSubscriptionRequest& request) const;

     /*
       <p>Creates an RDS event notification subscription. This action requires a topic ARN (Amazon Resource Name) created by either the RDS console, the SNS console, or the SNS API. To obtain an ARN with SNS, you must create a topic in Amazon SNS and subscribe to the topic. The ARN is displayed in the SNS console.</p> <p>You can specify the type of source (SourceType) you want to be notified of, provide a list of RDS sources (SourceIds) that triggers the events, and provide a list of event categories (EventCategories) for events you want to be notified of. For example, you can specify SourceType = db-instance, SourceIds = mydbinstance1, mydbinstance2 and EventCategories = Availability, Backup.</p> <p>If you specify both the SourceType and SourceIds, such as SourceType = db-instance and SourceIdentifier = myDBInstance1, you will be notified of all the db-instance events for the specified source. If you specify a SourceType but do not specify a SourceIdentifier, you will receive notice of the events for that source type for all your RDS sources. If you do not specify either the SourceType nor the SourceIdentifier, you will be notified of events generated from all RDS sources belonging to your customer account.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateEventSubscriptionOutcomeCallable CreateEventSubscriptionCallable(const Model::CreateEventSubscriptionRequest& request) const;

     /*
       <p>Creates an RDS event notification subscription. This action requires a topic ARN (Amazon Resource Name) created by either the RDS console, the SNS console, or the SNS API. To obtain an ARN with SNS, you must create a topic in Amazon SNS and subscribe to the topic. The ARN is displayed in the SNS console.</p> <p>You can specify the type of source (SourceType) you want to be notified of, provide a list of RDS sources (SourceIds) that triggers the events, and provide a list of event categories (EventCategories) for events you want to be notified of. For example, you can specify SourceType = db-instance, SourceIds = mydbinstance1, mydbinstance2 and EventCategories = Availability, Backup.</p> <p>If you specify both the SourceType and SourceIds, such as SourceType = db-instance and SourceIdentifier = myDBInstance1, you will be notified of all the db-instance events for the specified source. If you specify a SourceType but do not specify a SourceIdentifier, you will receive notice of the events for that source type for all your RDS sources. If you do not specify either the SourceType nor the SourceIdentifier, you will be notified of events generated from all RDS sources belonging to your customer account.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateEventSubscriptionAsync(const Model::CreateEventSubscriptionRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Creates a new option group. You can create up to 20 option groups. </p>
     */
     Model::CreateOptionGroupOutcome CreateOptionGroup(const Model::CreateOptionGroupRequest& request) const;

     /*
       <p> Creates a new option group. You can create up to 20 option groups. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateOptionGroupOutcomeCallable CreateOptionGroupCallable(const Model::CreateOptionGroupRequest& request) const;

     /*
       <p> Creates a new option group. You can create up to 20 option groups. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateOptionGroupAsync(const Model::CreateOptionGroupRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> The DeleteDBInstance action deletes a previously provisioned DB instance. A successful response from the web service indicates the request was received correctly. When you delete a DB instance, all automated backups for that instance are deleted and cannot be recovered. Manual DB snapshots of the DB instance to be deleted are not deleted. </p> <p> If a final DB snapshot is requested the status of the RDS instance will be "deleting" until the DB snapshot is created. The API action <code>DescribeDBInstance</code> is used to monitor the status of this operation. The action cannot be canceled or reverted once submitted. </p>
     */
     Model::DeleteDBInstanceOutcome DeleteDBInstance(const Model::DeleteDBInstanceRequest& request) const;

     /*
       <p> The DeleteDBInstance action deletes a previously provisioned DB instance. A successful response from the web service indicates the request was received correctly. When you delete a DB instance, all automated backups for that instance are deleted and cannot be recovered. Manual DB snapshots of the DB instance to be deleted are not deleted. </p> <p> If a final DB snapshot is requested the status of the RDS instance will be "deleting" until the DB snapshot is created. The API action <code>DescribeDBInstance</code> is used to monitor the status of this operation. The action cannot be canceled or reverted once submitted. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteDBInstanceOutcomeCallable DeleteDBInstanceCallable(const Model::DeleteDBInstanceRequest& request) const;

     /*
       <p> The DeleteDBInstance action deletes a previously provisioned DB instance. A successful response from the web service indicates the request was received correctly. When you delete a DB instance, all automated backups for that instance are deleted and cannot be recovered. Manual DB snapshots of the DB instance to be deleted are not deleted. </p> <p> If a final DB snapshot is requested the status of the RDS instance will be "deleting" until the DB snapshot is created. The API action <code>DescribeDBInstance</code> is used to monitor the status of this operation. The action cannot be canceled or reverted once submitted. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteDBInstanceAsync(const Model::DeleteDBInstanceRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Deletes a specified DBParameterGroup. The DBParameterGroup to be deleted cannot be associated with any DB instances. </p>
     */
     Model::DeleteDBParameterGroupOutcome DeleteDBParameterGroup(const Model::DeleteDBParameterGroupRequest& request) const;

     /*
       <p> Deletes a specified DBParameterGroup. The DBParameterGroup to be deleted cannot be associated with any DB instances. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteDBParameterGroupOutcomeCallable DeleteDBParameterGroupCallable(const Model::DeleteDBParameterGroupRequest& request) const;

     /*
       <p> Deletes a specified DBParameterGroup. The DBParameterGroup to be deleted cannot be associated with any DB instances. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteDBParameterGroupAsync(const Model::DeleteDBParameterGroupRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Deletes a DB security group. </p> <note>The specified DB security group must not be associated with any DB instances.</note>
     */
     Model::DeleteDBSecurityGroupOutcome DeleteDBSecurityGroup(const Model::DeleteDBSecurityGroupRequest& request) const;

     /*
       <p> Deletes a DB security group. </p> <note>The specified DB security group must not be associated with any DB instances.</note>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteDBSecurityGroupOutcomeCallable DeleteDBSecurityGroupCallable(const Model::DeleteDBSecurityGroupRequest& request) const;

     /*
       <p> Deletes a DB security group. </p> <note>The specified DB security group must not be associated with any DB instances.</note>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteDBSecurityGroupAsync(const Model::DeleteDBSecurityGroupRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Deletes a DBSnapshot. If the snapshot is being copied, the copy operation is terminated. </p> <note>The DBSnapshot must be in the <code>available</code> state to be deleted.</note>
     */
     Model::DeleteDBSnapshotOutcome DeleteDBSnapshot(const Model::DeleteDBSnapshotRequest& request) const;

     /*
       <p> Deletes a DBSnapshot. If the snapshot is being copied, the copy operation is terminated. </p> <note>The DBSnapshot must be in the <code>available</code> state to be deleted.</note>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteDBSnapshotOutcomeCallable DeleteDBSnapshotCallable(const Model::DeleteDBSnapshotRequest& request) const;

     /*
       <p> Deletes a DBSnapshot. If the snapshot is being copied, the copy operation is terminated. </p> <note>The DBSnapshot must be in the <code>available</code> state to be deleted.</note>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteDBSnapshotAsync(const Model::DeleteDBSnapshotRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Deletes a DB subnet group. </p> <note>The specified database subnet group must not be associated with any DB instances.</note>
     */
     Model::DeleteDBSubnetGroupOutcome DeleteDBSubnetGroup(const Model::DeleteDBSubnetGroupRequest& request) const;

     /*
       <p> Deletes a DB subnet group. </p> <note>The specified database subnet group must not be associated with any DB instances.</note>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteDBSubnetGroupOutcomeCallable DeleteDBSubnetGroupCallable(const Model::DeleteDBSubnetGroupRequest& request) const;

     /*
       <p> Deletes a DB subnet group. </p> <note>The specified database subnet group must not be associated with any DB instances.</note>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteDBSubnetGroupAsync(const Model::DeleteDBSubnetGroupRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Deletes an RDS event notification subscription.</p>
     */
     Model::DeleteEventSubscriptionOutcome DeleteEventSubscription(const Model::DeleteEventSubscriptionRequest& request) const;

     /*
       <p>Deletes an RDS event notification subscription.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteEventSubscriptionOutcomeCallable DeleteEventSubscriptionCallable(const Model::DeleteEventSubscriptionRequest& request) const;

     /*
       <p>Deletes an RDS event notification subscription.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteEventSubscriptionAsync(const Model::DeleteEventSubscriptionRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Deletes an existing option group. </p>
     */
     Model::DeleteOptionGroupOutcome DeleteOptionGroup(const Model::DeleteOptionGroupRequest& request) const;

     /*
       <p> Deletes an existing option group. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteOptionGroupOutcomeCallable DeleteOptionGroupCallable(const Model::DeleteOptionGroupRequest& request) const;

     /*
       <p> Deletes an existing option group. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteOptionGroupAsync(const Model::DeleteOptionGroupRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Lists all of the attributes for a customer account. The attributes include Amazon RDS quotas for the account, such as the number of DB instances allowed. The description for a quota includes the quota name, current usage toward that quota, and the quota's maximum value. </p> <p>This command does not take any parameters.</p>
     */
     Model::DescribeAccountAttributesOutcome DescribeAccountAttributes(const Model::DescribeAccountAttributesRequest& request) const;

     /*
       <p>Lists all of the attributes for a customer account. The attributes include Amazon RDS quotas for the account, such as the number of DB instances allowed. The description for a quota includes the quota name, current usage toward that quota, and the quota's maximum value. </p> <p>This command does not take any parameters.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeAccountAttributesOutcomeCallable DescribeAccountAttributesCallable(const Model::DescribeAccountAttributesRequest& request) const;

     /*
       <p>Lists all of the attributes for a customer account. The attributes include Amazon RDS quotas for the account, such as the number of DB instances allowed. The description for a quota includes the quota name, current usage toward that quota, and the quota's maximum value. </p> <p>This command does not take any parameters.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeAccountAttributesAsync(const Model::DescribeAccountAttributesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Lists the set of CA certificates provided by Amazon RDS for this AWS account. </p>
     */
     Model::DescribeCertificatesOutcome DescribeCertificates(const Model::DescribeCertificatesRequest& request) const;

     /*
       <p> Lists the set of CA certificates provided by Amazon RDS for this AWS account. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeCertificatesOutcomeCallable DescribeCertificatesCallable(const Model::DescribeCertificatesRequest& request) const;

     /*
       <p> Lists the set of CA certificates provided by Amazon RDS for this AWS account. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeCertificatesAsync(const Model::DescribeCertificatesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Returns a list of the available DB engines. </p>
     */
     Model::DescribeDBEngineVersionsOutcome DescribeDBEngineVersions(const Model::DescribeDBEngineVersionsRequest& request) const;

     /*
       <p> Returns a list of the available DB engines. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeDBEngineVersionsOutcomeCallable DescribeDBEngineVersionsCallable(const Model::DescribeDBEngineVersionsRequest& request) const;

     /*
       <p> Returns a list of the available DB engines. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeDBEngineVersionsAsync(const Model::DescribeDBEngineVersionsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Returns information about provisioned RDS instances. This API supports pagination. </p>
     */
     Model::DescribeDBInstancesOutcome DescribeDBInstances(const Model::DescribeDBInstancesRequest& request) const;

     /*
       <p> Returns information about provisioned RDS instances. This API supports pagination. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeDBInstancesOutcomeCallable DescribeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request) const;

     /*
       <p> Returns information about provisioned RDS instances. This API supports pagination. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Returns a list of DB log files for the DB instance. </p>
     */
     Model::DescribeDBLogFilesOutcome DescribeDBLogFiles(const Model::DescribeDBLogFilesRequest& request) const;

     /*
       <p> Returns a list of DB log files for the DB instance. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeDBLogFilesOutcomeCallable DescribeDBLogFilesCallable(const Model::DescribeDBLogFilesRequest& request) const;

     /*
       <p> Returns a list of DB log files for the DB instance. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeDBLogFilesAsync(const Model::DescribeDBLogFilesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Returns a list of <code>DBParameterGroup</code> descriptions. If a <code>DBParameterGroupName</code> is specified, the list will contain only the description of the specified DB parameter group. </p>
     */
     Model::DescribeDBParameterGroupsOutcome DescribeDBParameterGroups(const Model::DescribeDBParameterGroupsRequest& request) const;

     /*
       <p> Returns a list of <code>DBParameterGroup</code> descriptions. If a <code>DBParameterGroupName</code> is specified, the list will contain only the description of the specified DB parameter group. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeDBParameterGroupsOutcomeCallable DescribeDBParameterGroupsCallable(const Model::DescribeDBParameterGroupsRequest& request) const;

     /*
       <p> Returns a list of <code>DBParameterGroup</code> descriptions. If a <code>DBParameterGroupName</code> is specified, the list will contain only the description of the specified DB parameter group. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeDBParameterGroupsAsync(const Model::DescribeDBParameterGroupsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Returns the detailed parameter list for a particular DB parameter group. </p>
     */
     Model::DescribeDBParametersOutcome DescribeDBParameters(const Model::DescribeDBParametersRequest& request) const;

     /*
       <p> Returns the detailed parameter list for a particular DB parameter group. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeDBParametersOutcomeCallable DescribeDBParametersCallable(const Model::DescribeDBParametersRequest& request) const;

     /*
       <p> Returns the detailed parameter list for a particular DB parameter group. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeDBParametersAsync(const Model::DescribeDBParametersRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Returns a list of <code>DBSecurityGroup</code> descriptions. If a <code>DBSecurityGroupName</code> is specified, the list will contain only the descriptions of the specified DB security group. </p>
     */
     Model::DescribeDBSecurityGroupsOutcome DescribeDBSecurityGroups(const Model::DescribeDBSecurityGroupsRequest& request) const;

     /*
       <p> Returns a list of <code>DBSecurityGroup</code> descriptions. If a <code>DBSecurityGroupName</code> is specified, the list will contain only the descriptions of the specified DB security group. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeDBSecurityGroupsOutcomeCallable DescribeDBSecurityGroupsCallable(const Model::DescribeDBSecurityGroupsRequest& request) const;

     /*
       <p> Returns a list of <code>DBSecurityGroup</code> descriptions. If a <code>DBSecurityGroupName</code> is specified, the list will contain only the descriptions of the specified DB security group. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeDBSecurityGroupsAsync(const Model::DescribeDBSecurityGroupsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Returns information about DB snapshots. This API supports pagination. </p>
     */
     Model::DescribeDBSnapshotsOutcome DescribeDBSnapshots(const Model::DescribeDBSnapshotsRequest& request) const;

     /*
       <p> Returns information about DB snapshots. This API supports pagination. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeDBSnapshotsOutcomeCallable DescribeDBSnapshotsCallable(const Model::DescribeDBSnapshotsRequest& request) const;

     /*
       <p> Returns information about DB snapshots. This API supports pagination. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeDBSnapshotsAsync(const Model::DescribeDBSnapshotsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Returns a list of DBSubnetGroup descriptions. If a DBSubnetGroupName is specified, the list will contain only the descriptions of the specified DBSubnetGroup. </p> <p>For an overview of CIDR ranges, go to the <a href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia Tutorial</a>. </p>
     */
     Model::DescribeDBSubnetGroupsOutcome DescribeDBSubnetGroups(const Model::DescribeDBSubnetGroupsRequest& request) const;

     /*
       <p> Returns a list of DBSubnetGroup descriptions. If a DBSubnetGroupName is specified, the list will contain only the descriptions of the specified DBSubnetGroup. </p> <p>For an overview of CIDR ranges, go to the <a href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia Tutorial</a>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeDBSubnetGroupsOutcomeCallable DescribeDBSubnetGroupsCallable(const Model::DescribeDBSubnetGroupsRequest& request) const;

     /*
       <p> Returns a list of DBSubnetGroup descriptions. If a DBSubnetGroupName is specified, the list will contain only the descriptions of the specified DBSubnetGroup. </p> <p>For an overview of CIDR ranges, go to the <a href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia Tutorial</a>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeDBSubnetGroupsAsync(const Model::DescribeDBSubnetGroupsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Returns the default engine and system parameter information for the specified database engine. </p>
     */
     Model::DescribeEngineDefaultParametersOutcome DescribeEngineDefaultParameters(const Model::DescribeEngineDefaultParametersRequest& request) const;

     /*
       <p> Returns the default engine and system parameter information for the specified database engine. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeEngineDefaultParametersOutcomeCallable DescribeEngineDefaultParametersCallable(const Model::DescribeEngineDefaultParametersRequest& request) const;

     /*
       <p> Returns the default engine and system parameter information for the specified database engine. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeEngineDefaultParametersAsync(const Model::DescribeEngineDefaultParametersRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Displays a list of categories for all event source types, or, if specified, for a specified source type. You can see a list of the event categories and source types in the <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.html"> Events</a> topic in the Amazon RDS User Guide.</p>
     */
     Model::DescribeEventCategoriesOutcome DescribeEventCategories(const Model::DescribeEventCategoriesRequest& request) const;

     /*
       <p>Displays a list of categories for all event source types, or, if specified, for a specified source type. You can see a list of the event categories and source types in the <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.html"> Events</a> topic in the Amazon RDS User Guide.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeEventCategoriesOutcomeCallable DescribeEventCategoriesCallable(const Model::DescribeEventCategoriesRequest& request) const;

     /*
       <p>Displays a list of categories for all event source types, or, if specified, for a specified source type. You can see a list of the event categories and source types in the <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.html"> Events</a> topic in the Amazon RDS User Guide.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeEventCategoriesAsync(const Model::DescribeEventCategoriesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Lists all the subscription descriptions for a customer account. The description for a subscription includes SubscriptionName, SNSTopicARN, CustomerID, SourceType, SourceID, CreationTime, and Status. </p> <p>If you specify a SubscriptionName, lists the description for that subscription.</p>
     */
     Model::DescribeEventSubscriptionsOutcome DescribeEventSubscriptions(const Model::DescribeEventSubscriptionsRequest& request) const;

     /*
       <p>Lists all the subscription descriptions for a customer account. The description for a subscription includes SubscriptionName, SNSTopicARN, CustomerID, SourceType, SourceID, CreationTime, and Status. </p> <p>If you specify a SubscriptionName, lists the description for that subscription.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeEventSubscriptionsOutcomeCallable DescribeEventSubscriptionsCallable(const Model::DescribeEventSubscriptionsRequest& request) const;

     /*
       <p>Lists all the subscription descriptions for a customer account. The description for a subscription includes SubscriptionName, SNSTopicARN, CustomerID, SourceType, SourceID, CreationTime, and Status. </p> <p>If you specify a SubscriptionName, lists the description for that subscription.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeEventSubscriptionsAsync(const Model::DescribeEventSubscriptionsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Returns events related to DB instances, DB security groups, DB snapshots, and DB parameter groups for the past 14 days. Events specific to a particular DB instance, DB security group, database snapshot, or DB parameter group can be obtained by providing the name as a parameter. By default, the past hour of events are returned. </p>
     */
     Model::DescribeEventsOutcome DescribeEvents(const Model::DescribeEventsRequest& request) const;

     /*
       <p> Returns events related to DB instances, DB security groups, DB snapshots, and DB parameter groups for the past 14 days. Events specific to a particular DB instance, DB security group, database snapshot, or DB parameter group can be obtained by providing the name as a parameter. By default, the past hour of events are returned. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeEventsOutcomeCallable DescribeEventsCallable(const Model::DescribeEventsRequest& request) const;

     /*
       <p> Returns events related to DB instances, DB security groups, DB snapshots, and DB parameter groups for the past 14 days. Events specific to a particular DB instance, DB security group, database snapshot, or DB parameter group can be obtained by providing the name as a parameter. By default, the past hour of events are returned. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeEventsAsync(const Model::DescribeEventsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Describes all available options. </p>
     */
     Model::DescribeOptionGroupOptionsOutcome DescribeOptionGroupOptions(const Model::DescribeOptionGroupOptionsRequest& request) const;

     /*
       <p> Describes all available options. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeOptionGroupOptionsOutcomeCallable DescribeOptionGroupOptionsCallable(const Model::DescribeOptionGroupOptionsRequest& request) const;

     /*
       <p> Describes all available options. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeOptionGroupOptionsAsync(const Model::DescribeOptionGroupOptionsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Describes the available option groups. </p>
     */
     Model::DescribeOptionGroupsOutcome DescribeOptionGroups(const Model::DescribeOptionGroupsRequest& request) const;

     /*
       <p> Describes the available option groups. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeOptionGroupsOutcomeCallable DescribeOptionGroupsCallable(const Model::DescribeOptionGroupsRequest& request) const;

     /*
       <p> Describes the available option groups. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeOptionGroupsAsync(const Model::DescribeOptionGroupsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Returns a list of orderable DB instance options for the specified engine. </p>
     */
     Model::DescribeOrderableDBInstanceOptionsOutcome DescribeOrderableDBInstanceOptions(const Model::DescribeOrderableDBInstanceOptionsRequest& request) const;

     /*
       <p> Returns a list of orderable DB instance options for the specified engine. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeOrderableDBInstanceOptionsOutcomeCallable DescribeOrderableDBInstanceOptionsCallable(const Model::DescribeOrderableDBInstanceOptionsRequest& request) const;

     /*
       <p> Returns a list of orderable DB instance options for the specified engine. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeOrderableDBInstanceOptionsAsync(const Model::DescribeOrderableDBInstanceOptionsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Returns a list of resources (for example, DB instances) that have at least one pending maintenance action.</p>
     */
     Model::DescribePendingMaintenanceActionsOutcome DescribePendingMaintenanceActions(const Model::DescribePendingMaintenanceActionsRequest& request) const;

     /*
       <p>Returns a list of resources (for example, DB instances) that have at least one pending maintenance action.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribePendingMaintenanceActionsOutcomeCallable DescribePendingMaintenanceActionsCallable(const Model::DescribePendingMaintenanceActionsRequest& request) const;

     /*
       <p>Returns a list of resources (for example, DB instances) that have at least one pending maintenance action.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribePendingMaintenanceActionsAsync(const Model::DescribePendingMaintenanceActionsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Returns information about reserved DB instances for this account, or about a specified reserved DB instance. </p>
     */
     Model::DescribeReservedDBInstancesOutcome DescribeReservedDBInstances(const Model::DescribeReservedDBInstancesRequest& request) const;

     /*
       <p> Returns information about reserved DB instances for this account, or about a specified reserved DB instance. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeReservedDBInstancesOutcomeCallable DescribeReservedDBInstancesCallable(const Model::DescribeReservedDBInstancesRequest& request) const;

     /*
       <p> Returns information about reserved DB instances for this account, or about a specified reserved DB instance. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeReservedDBInstancesAsync(const Model::DescribeReservedDBInstancesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Lists available reserved DB instance offerings. </p>
     */
     Model::DescribeReservedDBInstancesOfferingsOutcome DescribeReservedDBInstancesOfferings(const Model::DescribeReservedDBInstancesOfferingsRequest& request) const;

     /*
       <p> Lists available reserved DB instance offerings. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeReservedDBInstancesOfferingsOutcomeCallable DescribeReservedDBInstancesOfferingsCallable(const Model::DescribeReservedDBInstancesOfferingsRequest& request) const;

     /*
       <p> Lists available reserved DB instance offerings. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeReservedDBInstancesOfferingsAsync(const Model::DescribeReservedDBInstancesOfferingsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Downloads all or a portion of the specified log file. </p>
     */
     Model::DownloadDBLogFilePortionOutcome DownloadDBLogFilePortion(const Model::DownloadDBLogFilePortionRequest& request) const;

     /*
       <p> Downloads all or a portion of the specified log file. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DownloadDBLogFilePortionOutcomeCallable DownloadDBLogFilePortionCallable(const Model::DownloadDBLogFilePortionRequest& request) const;

     /*
       <p> Downloads all or a portion of the specified log file. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DownloadDBLogFilePortionAsync(const Model::DownloadDBLogFilePortionRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Lists all tags on an Amazon RDS resource.</p> <p>For an overview on tagging an Amazon RDS resource, see <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging Amazon RDS Resources</a>.</p>
     */
     Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

     /*
       <p> Lists all tags on an Amazon RDS resource.</p> <p>For an overview on tagging an Amazon RDS resource, see <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging Amazon RDS Resources</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

     /*
       <p> Lists all tags on an Amazon RDS resource.</p> <p>For an overview on tagging an Amazon RDS resource, see <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging Amazon RDS Resources</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Modify settings for a DB instance. You can change one or more database configuration parameters by specifying these parameters and the new values in the request. </p>
     */
     Model::ModifyDBInstanceOutcome ModifyDBInstance(const Model::ModifyDBInstanceRequest& request) const;

     /*
       <p> Modify settings for a DB instance. You can change one or more database configuration parameters by specifying these parameters and the new values in the request. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ModifyDBInstanceOutcomeCallable ModifyDBInstanceCallable(const Model::ModifyDBInstanceRequest& request) const;

     /*
       <p> Modify settings for a DB instance. You can change one or more database configuration parameters by specifying these parameters and the new values in the request. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ModifyDBInstanceAsync(const Model::ModifyDBInstanceRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Modifies the parameters of a DB parameter group. To modify more than one parameter, submit a list of the following: <code>ParameterName</code>, <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20 parameters can be modified in a single request. </p> <note> <p> Changes to dynamic parameters are applied immediately. Changes to static parameters require a reboot without failover to the DB instance associated with the parameter group before the change can take effect. </p> </note> <important> <p>After you modify a DB parameter group, you should wait at least 5 minutes before creating your first DB instance that uses that DB parameter group as the default parameter group. This allows Amazon RDS to fully complete the modify action before the parameter group is used as the default for a new DB instance. This is especially important for parameters that are critical when creating the default database for a DB instance, such as the character set for the default database defined by the <code>character_set_database</code> parameter. You can use the <i>Parameter Groups</i> option of the <a href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the <i>DescribeDBParameters</i> command to verify that your DB parameter group has been created or modified.</p> </important>
     */
     Model::ModifyDBParameterGroupOutcome ModifyDBParameterGroup(const Model::ModifyDBParameterGroupRequest& request) const;

     /*
       <p> Modifies the parameters of a DB parameter group. To modify more than one parameter, submit a list of the following: <code>ParameterName</code>, <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20 parameters can be modified in a single request. </p> <note> <p> Changes to dynamic parameters are applied immediately. Changes to static parameters require a reboot without failover to the DB instance associated with the parameter group before the change can take effect. </p> </note> <important> <p>After you modify a DB parameter group, you should wait at least 5 minutes before creating your first DB instance that uses that DB parameter group as the default parameter group. This allows Amazon RDS to fully complete the modify action before the parameter group is used as the default for a new DB instance. This is especially important for parameters that are critical when creating the default database for a DB instance, such as the character set for the default database defined by the <code>character_set_database</code> parameter. You can use the <i>Parameter Groups</i> option of the <a href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the <i>DescribeDBParameters</i> command to verify that your DB parameter group has been created or modified.</p> </important>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ModifyDBParameterGroupOutcomeCallable ModifyDBParameterGroupCallable(const Model::ModifyDBParameterGroupRequest& request) const;

     /*
       <p> Modifies the parameters of a DB parameter group. To modify more than one parameter, submit a list of the following: <code>ParameterName</code>, <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20 parameters can be modified in a single request. </p> <note> <p> Changes to dynamic parameters are applied immediately. Changes to static parameters require a reboot without failover to the DB instance associated with the parameter group before the change can take effect. </p> </note> <important> <p>After you modify a DB parameter group, you should wait at least 5 minutes before creating your first DB instance that uses that DB parameter group as the default parameter group. This allows Amazon RDS to fully complete the modify action before the parameter group is used as the default for a new DB instance. This is especially important for parameters that are critical when creating the default database for a DB instance, such as the character set for the default database defined by the <code>character_set_database</code> parameter. You can use the <i>Parameter Groups</i> option of the <a href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the <i>DescribeDBParameters</i> command to verify that your DB parameter group has been created or modified.</p> </important>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ModifyDBParameterGroupAsync(const Model::ModifyDBParameterGroupRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Modifies an existing DB subnet group. DB subnet groups must contain at least one subnet in at least two AZs in the region. </p>
     */
     Model::ModifyDBSubnetGroupOutcome ModifyDBSubnetGroup(const Model::ModifyDBSubnetGroupRequest& request) const;

     /*
       <p> Modifies an existing DB subnet group. DB subnet groups must contain at least one subnet in at least two AZs in the region. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ModifyDBSubnetGroupOutcomeCallable ModifyDBSubnetGroupCallable(const Model::ModifyDBSubnetGroupRequest& request) const;

     /*
       <p> Modifies an existing DB subnet group. DB subnet groups must contain at least one subnet in at least two AZs in the region. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ModifyDBSubnetGroupAsync(const Model::ModifyDBSubnetGroupRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Modifies an existing RDS event notification subscription. Note that you cannot modify the source identifiers using this call; to change source identifiers for a subscription, use the <a>AddSourceIdentifierToSubscription</a> and <a>RemoveSourceIdentifierFromSubscription</a> calls.</p> <p>You can see a list of the event categories for a given SourceType in the <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.html">Events</a> topic in the Amazon RDS User Guide or by using the <b>DescribeEventCategories</b> action.</p>
     */
     Model::ModifyEventSubscriptionOutcome ModifyEventSubscription(const Model::ModifyEventSubscriptionRequest& request) const;

     /*
       <p>Modifies an existing RDS event notification subscription. Note that you cannot modify the source identifiers using this call; to change source identifiers for a subscription, use the <a>AddSourceIdentifierToSubscription</a> and <a>RemoveSourceIdentifierFromSubscription</a> calls.</p> <p>You can see a list of the event categories for a given SourceType in the <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.html">Events</a> topic in the Amazon RDS User Guide or by using the <b>DescribeEventCategories</b> action.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ModifyEventSubscriptionOutcomeCallable ModifyEventSubscriptionCallable(const Model::ModifyEventSubscriptionRequest& request) const;

     /*
       <p>Modifies an existing RDS event notification subscription. Note that you cannot modify the source identifiers using this call; to change source identifiers for a subscription, use the <a>AddSourceIdentifierToSubscription</a> and <a>RemoveSourceIdentifierFromSubscription</a> calls.</p> <p>You can see a list of the event categories for a given SourceType in the <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.html">Events</a> topic in the Amazon RDS User Guide or by using the <b>DescribeEventCategories</b> action.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ModifyEventSubscriptionAsync(const Model::ModifyEventSubscriptionRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Modifies an existing option group. </p>
     */
     Model::ModifyOptionGroupOutcome ModifyOptionGroup(const Model::ModifyOptionGroupRequest& request) const;

     /*
       <p> Modifies an existing option group. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ModifyOptionGroupOutcomeCallable ModifyOptionGroupCallable(const Model::ModifyOptionGroupRequest& request) const;

     /*
       <p> Modifies an existing option group. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ModifyOptionGroupAsync(const Model::ModifyOptionGroupRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Promotes a Read Replica DB instance to a standalone DB instance. </p> <note> <p>We recommend that you enable automated backups on your Read Replica before promoting the Read Replica. This ensures that no backup is taken during the promotion process. Once the instance is promoted to a primary instance, backups are taken based on your backup settings.</p> </note>
     */
     Model::PromoteReadReplicaOutcome PromoteReadReplica(const Model::PromoteReadReplicaRequest& request) const;

     /*
       <p> Promotes a Read Replica DB instance to a standalone DB instance. </p> <note> <p>We recommend that you enable automated backups on your Read Replica before promoting the Read Replica. This ensures that no backup is taken during the promotion process. Once the instance is promoted to a primary instance, backups are taken based on your backup settings.</p> </note>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PromoteReadReplicaOutcomeCallable PromoteReadReplicaCallable(const Model::PromoteReadReplicaRequest& request) const;

     /*
       <p> Promotes a Read Replica DB instance to a standalone DB instance. </p> <note> <p>We recommend that you enable automated backups on your Read Replica before promoting the Read Replica. This ensures that no backup is taken during the promotion process. Once the instance is promoted to a primary instance, backups are taken based on your backup settings.</p> </note>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PromoteReadReplicaAsync(const Model::PromoteReadReplicaRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Purchases a reserved DB instance offering. </p>
     */
     Model::PurchaseReservedDBInstancesOfferingOutcome PurchaseReservedDBInstancesOffering(const Model::PurchaseReservedDBInstancesOfferingRequest& request) const;

     /*
       <p> Purchases a reserved DB instance offering. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PurchaseReservedDBInstancesOfferingOutcomeCallable PurchaseReservedDBInstancesOfferingCallable(const Model::PurchaseReservedDBInstancesOfferingRequest& request) const;

     /*
       <p> Purchases a reserved DB instance offering. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PurchaseReservedDBInstancesOfferingAsync(const Model::PurchaseReservedDBInstancesOfferingRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Rebooting a DB instance restarts the database engine service. A reboot also applies to the DB instance any modifications to the associated DB parameter group that were pending. Rebooting a DB instance results in a momentary outage of the instance, during which the DB instance status is set to rebooting. If the RDS instance is configured for MultiAZ, it is possible that the reboot will be conducted through a failover. An Amazon RDS event is created when the reboot is completed. </p> <p> If your DB instance is deployed in multiple Availability Zones, you can force a failover from one AZ to the other during the reboot. You might force a failover to test the availability of your DB instance deployment or to restore operations to the original AZ after a failover occurs. </p> <p> The time required to reboot is a function of the specific database engine's crash recovery process. To improve the reboot time, we recommend that you reduce database activities as much as possible during the reboot process to reduce rollback activity for in-transit transactions. </p>
     */
     Model::RebootDBInstanceOutcome RebootDBInstance(const Model::RebootDBInstanceRequest& request) const;

     /*
       <p> Rebooting a DB instance restarts the database engine service. A reboot also applies to the DB instance any modifications to the associated DB parameter group that were pending. Rebooting a DB instance results in a momentary outage of the instance, during which the DB instance status is set to rebooting. If the RDS instance is configured for MultiAZ, it is possible that the reboot will be conducted through a failover. An Amazon RDS event is created when the reboot is completed. </p> <p> If your DB instance is deployed in multiple Availability Zones, you can force a failover from one AZ to the other during the reboot. You might force a failover to test the availability of your DB instance deployment or to restore operations to the original AZ after a failover occurs. </p> <p> The time required to reboot is a function of the specific database engine's crash recovery process. To improve the reboot time, we recommend that you reduce database activities as much as possible during the reboot process to reduce rollback activity for in-transit transactions. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RebootDBInstanceOutcomeCallable RebootDBInstanceCallable(const Model::RebootDBInstanceRequest& request) const;

     /*
       <p> Rebooting a DB instance restarts the database engine service. A reboot also applies to the DB instance any modifications to the associated DB parameter group that were pending. Rebooting a DB instance results in a momentary outage of the instance, during which the DB instance status is set to rebooting. If the RDS instance is configured for MultiAZ, it is possible that the reboot will be conducted through a failover. An Amazon RDS event is created when the reboot is completed. </p> <p> If your DB instance is deployed in multiple Availability Zones, you can force a failover from one AZ to the other during the reboot. You might force a failover to test the availability of your DB instance deployment or to restore operations to the original AZ after a failover occurs. </p> <p> The time required to reboot is a function of the specific database engine's crash recovery process. To improve the reboot time, we recommend that you reduce database activities as much as possible during the reboot process to reduce rollback activity for in-transit transactions. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RebootDBInstanceAsync(const Model::RebootDBInstanceRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Removes a source identifier from an existing RDS event notification subscription.</p>
     */
     Model::RemoveSourceIdentifierFromSubscriptionOutcome RemoveSourceIdentifierFromSubscription(const Model::RemoveSourceIdentifierFromSubscriptionRequest& request) const;

     /*
       <p>Removes a source identifier from an existing RDS event notification subscription.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RemoveSourceIdentifierFromSubscriptionOutcomeCallable RemoveSourceIdentifierFromSubscriptionCallable(const Model::RemoveSourceIdentifierFromSubscriptionRequest& request) const;

     /*
       <p>Removes a source identifier from an existing RDS event notification subscription.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RemoveSourceIdentifierFromSubscriptionAsync(const Model::RemoveSourceIdentifierFromSubscriptionRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Removes metadata tags from an Amazon RDS resource.</p> <p>For an overview on tagging an Amazon RDS resource, see <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging Amazon RDS Resources</a>.</p>
     */
     Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;

     /*
       <p> Removes metadata tags from an Amazon RDS resource.</p> <p>For an overview on tagging an Amazon RDS resource, see <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging Amazon RDS Resources</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const Model::RemoveTagsFromResourceRequest& request) const;

     /*
       <p> Removes metadata tags from an Amazon RDS resource.</p> <p>For an overview on tagging an Amazon RDS resource, see <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging Amazon RDS Resources</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RemoveTagsFromResourceAsync(const Model::RemoveTagsFromResourceRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Modifies the parameters of a DB parameter group to the engine/system default value. To reset specific parameters submit a list of the following: <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB parameter group, specify the <code>DBParameterGroup</code> name and <code>ResetAllParameters</code> parameters. When resetting the entire group, dynamic parameters are updated immediately and static parameters are set to <code>pending-reboot</code> to take effect on the next DB instance restart or <code>RebootDBInstance</code> request. </p>
     */
     Model::ResetDBParameterGroupOutcome ResetDBParameterGroup(const Model::ResetDBParameterGroupRequest& request) const;

     /*
       <p> Modifies the parameters of a DB parameter group to the engine/system default value. To reset specific parameters submit a list of the following: <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB parameter group, specify the <code>DBParameterGroup</code> name and <code>ResetAllParameters</code> parameters. When resetting the entire group, dynamic parameters are updated immediately and static parameters are set to <code>pending-reboot</code> to take effect on the next DB instance restart or <code>RebootDBInstance</code> request. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ResetDBParameterGroupOutcomeCallable ResetDBParameterGroupCallable(const Model::ResetDBParameterGroupRequest& request) const;

     /*
       <p> Modifies the parameters of a DB parameter group to the engine/system default value. To reset specific parameters submit a list of the following: <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB parameter group, specify the <code>DBParameterGroup</code> name and <code>ResetAllParameters</code> parameters. When resetting the entire group, dynamic parameters are updated immediately and static parameters are set to <code>pending-reboot</code> to take effect on the next DB instance restart or <code>RebootDBInstance</code> request. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ResetDBParameterGroupAsync(const Model::ResetDBParameterGroupRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Creates a new DB instance from a DB snapshot. The target database is created from the source database restore point with the same configuration as the original source database, except that the new RDS instance is created with the default security group. </p> <p>If your intent is to replace your original DB instance with the new, restored DB instance, then rename your original DB instance before you call the RestoreDBInstanceFromDBSnapshot action. RDS does not allow two DB instances with the same name. Once you have renamed your original DB instance with a different identifier, then you can pass the original name of the DB instance as the DBInstanceIdentifier in the call to the RestoreDBInstanceFromDBSnapshot action. The result is that you will replace the original DB instance with the DB instance created from the snapshot.</p>
     */
     Model::RestoreDBInstanceFromDBSnapshotOutcome RestoreDBInstanceFromDBSnapshot(const Model::RestoreDBInstanceFromDBSnapshotRequest& request) const;

     /*
       <p>Creates a new DB instance from a DB snapshot. The target database is created from the source database restore point with the same configuration as the original source database, except that the new RDS instance is created with the default security group. </p> <p>If your intent is to replace your original DB instance with the new, restored DB instance, then rename your original DB instance before you call the RestoreDBInstanceFromDBSnapshot action. RDS does not allow two DB instances with the same name. Once you have renamed your original DB instance with a different identifier, then you can pass the original name of the DB instance as the DBInstanceIdentifier in the call to the RestoreDBInstanceFromDBSnapshot action. The result is that you will replace the original DB instance with the DB instance created from the snapshot.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RestoreDBInstanceFromDBSnapshotOutcomeCallable RestoreDBInstanceFromDBSnapshotCallable(const Model::RestoreDBInstanceFromDBSnapshotRequest& request) const;

     /*
       <p>Creates a new DB instance from a DB snapshot. The target database is created from the source database restore point with the same configuration as the original source database, except that the new RDS instance is created with the default security group. </p> <p>If your intent is to replace your original DB instance with the new, restored DB instance, then rename your original DB instance before you call the RestoreDBInstanceFromDBSnapshot action. RDS does not allow two DB instances with the same name. Once you have renamed your original DB instance with a different identifier, then you can pass the original name of the DB instance as the DBInstanceIdentifier in the call to the RestoreDBInstanceFromDBSnapshot action. The result is that you will replace the original DB instance with the DB instance created from the snapshot.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RestoreDBInstanceFromDBSnapshotAsync(const Model::RestoreDBInstanceFromDBSnapshotRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Restores a DB instance to an arbitrary point-in-time. Users can restore to any point in time before the LatestRestorableTime for up to BackupRetentionPeriod days. The target database is created from the source database with the same configuration as the original database except that the DB instance is created with the default DB security group. </p>
     */
     Model::RestoreDBInstanceToPointInTimeOutcome RestoreDBInstanceToPointInTime(const Model::RestoreDBInstanceToPointInTimeRequest& request) const;

     /*
       <p> Restores a DB instance to an arbitrary point-in-time. Users can restore to any point in time before the LatestRestorableTime for up to BackupRetentionPeriod days. The target database is created from the source database with the same configuration as the original database except that the DB instance is created with the default DB security group. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RestoreDBInstanceToPointInTimeOutcomeCallable RestoreDBInstanceToPointInTimeCallable(const Model::RestoreDBInstanceToPointInTimeRequest& request) const;

     /*
       <p> Restores a DB instance to an arbitrary point-in-time. Users can restore to any point in time before the LatestRestorableTime for up to BackupRetentionPeriod days. The target database is created from the source database with the same configuration as the original database except that the DB instance is created with the default DB security group. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RestoreDBInstanceToPointInTimeAsync(const Model::RestoreDBInstanceToPointInTimeRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Revokes ingress from a DBSecurityGroup for previously authorized IP ranges or EC2 or VPC Security Groups. Required parameters for this API are one of CIDRIP, EC2SecurityGroupId for VPC, or (EC2SecurityGroupOwnerId and either EC2SecurityGroupName or EC2SecurityGroupId). </p>
     */
     Model::RevokeDBSecurityGroupIngressOutcome RevokeDBSecurityGroupIngress(const Model::RevokeDBSecurityGroupIngressRequest& request) const;

     /*
       <p> Revokes ingress from a DBSecurityGroup for previously authorized IP ranges or EC2 or VPC Security Groups. Required parameters for this API are one of CIDRIP, EC2SecurityGroupId for VPC, or (EC2SecurityGroupOwnerId and either EC2SecurityGroupName or EC2SecurityGroupId). </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RevokeDBSecurityGroupIngressOutcomeCallable RevokeDBSecurityGroupIngressCallable(const Model::RevokeDBSecurityGroupIngressRequest& request) const;

     /*
       <p> Revokes ingress from a DBSecurityGroup for previously authorized IP ranges or EC2 or VPC Security Groups. Required parameters for this API are one of CIDRIP, EC2SecurityGroupId for VPC, or (EC2SecurityGroupOwnerId and either EC2SecurityGroupName or EC2SecurityGroupId). </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RevokeDBSecurityGroupIngressAsync(const Model::RevokeDBSecurityGroupIngressRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

   /**
    * Adds an event handler for AddSourceIdentifierToSubscriptionAsync to call upon completion to the handler chain. You need to call this to
    * use AddSourceIdentifierToSubscriptionAsync.
    */
    inline void RegisterAddSourceIdentifierToSubscriptionOutcomeReceivedHandler(const AddSourceIdentifierToSubscriptionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onAddSourceIdentifierToSubscriptionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for AddSourceIdentifierToSubscription.
    */
    inline void ClearAllAddSourceIdentifierToSubscriptionOutcomeReceivedHandlers()
    {
      m_onAddSourceIdentifierToSubscriptionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for AddTagsToResourceAsync to call upon completion to the handler chain. You need to call this to
    * use AddTagsToResourceAsync.
    */
    inline void RegisterAddTagsToResourceOutcomeReceivedHandler(const AddTagsToResourceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onAddTagsToResourceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for AddTagsToResource.
    */
    inline void ClearAllAddTagsToResourceOutcomeReceivedHandlers()
    {
      m_onAddTagsToResourceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ApplyPendingMaintenanceActionAsync to call upon completion to the handler chain. You need to call this to
    * use ApplyPendingMaintenanceActionAsync.
    */
    inline void RegisterApplyPendingMaintenanceActionOutcomeReceivedHandler(const ApplyPendingMaintenanceActionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onApplyPendingMaintenanceActionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ApplyPendingMaintenanceAction.
    */
    inline void ClearAllApplyPendingMaintenanceActionOutcomeReceivedHandlers()
    {
      m_onApplyPendingMaintenanceActionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for AuthorizeDBSecurityGroupIngressAsync to call upon completion to the handler chain. You need to call this to
    * use AuthorizeDBSecurityGroupIngressAsync.
    */
    inline void RegisterAuthorizeDBSecurityGroupIngressOutcomeReceivedHandler(const AuthorizeDBSecurityGroupIngressOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onAuthorizeDBSecurityGroupIngressOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for AuthorizeDBSecurityGroupIngress.
    */
    inline void ClearAllAuthorizeDBSecurityGroupIngressOutcomeReceivedHandlers()
    {
      m_onAuthorizeDBSecurityGroupIngressOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CopyDBParameterGroupAsync to call upon completion to the handler chain. You need to call this to
    * use CopyDBParameterGroupAsync.
    */
    inline void RegisterCopyDBParameterGroupOutcomeReceivedHandler(const CopyDBParameterGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCopyDBParameterGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CopyDBParameterGroup.
    */
    inline void ClearAllCopyDBParameterGroupOutcomeReceivedHandlers()
    {
      m_onCopyDBParameterGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CopyDBSnapshotAsync to call upon completion to the handler chain. You need to call this to
    * use CopyDBSnapshotAsync.
    */
    inline void RegisterCopyDBSnapshotOutcomeReceivedHandler(const CopyDBSnapshotOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCopyDBSnapshotOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CopyDBSnapshot.
    */
    inline void ClearAllCopyDBSnapshotOutcomeReceivedHandlers()
    {
      m_onCopyDBSnapshotOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CopyOptionGroupAsync to call upon completion to the handler chain. You need to call this to
    * use CopyOptionGroupAsync.
    */
    inline void RegisterCopyOptionGroupOutcomeReceivedHandler(const CopyOptionGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCopyOptionGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CopyOptionGroup.
    */
    inline void ClearAllCopyOptionGroupOutcomeReceivedHandlers()
    {
      m_onCopyOptionGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateDBInstanceAsync to call upon completion to the handler chain. You need to call this to
    * use CreateDBInstanceAsync.
    */
    inline void RegisterCreateDBInstanceOutcomeReceivedHandler(const CreateDBInstanceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateDBInstanceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateDBInstance.
    */
    inline void ClearAllCreateDBInstanceOutcomeReceivedHandlers()
    {
      m_onCreateDBInstanceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateDBInstanceReadReplicaAsync to call upon completion to the handler chain. You need to call this to
    * use CreateDBInstanceReadReplicaAsync.
    */
    inline void RegisterCreateDBInstanceReadReplicaOutcomeReceivedHandler(const CreateDBInstanceReadReplicaOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateDBInstanceReadReplicaOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateDBInstanceReadReplica.
    */
    inline void ClearAllCreateDBInstanceReadReplicaOutcomeReceivedHandlers()
    {
      m_onCreateDBInstanceReadReplicaOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateDBParameterGroupAsync to call upon completion to the handler chain. You need to call this to
    * use CreateDBParameterGroupAsync.
    */
    inline void RegisterCreateDBParameterGroupOutcomeReceivedHandler(const CreateDBParameterGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateDBParameterGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateDBParameterGroup.
    */
    inline void ClearAllCreateDBParameterGroupOutcomeReceivedHandlers()
    {
      m_onCreateDBParameterGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateDBSecurityGroupAsync to call upon completion to the handler chain. You need to call this to
    * use CreateDBSecurityGroupAsync.
    */
    inline void RegisterCreateDBSecurityGroupOutcomeReceivedHandler(const CreateDBSecurityGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateDBSecurityGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateDBSecurityGroup.
    */
    inline void ClearAllCreateDBSecurityGroupOutcomeReceivedHandlers()
    {
      m_onCreateDBSecurityGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateDBSnapshotAsync to call upon completion to the handler chain. You need to call this to
    * use CreateDBSnapshotAsync.
    */
    inline void RegisterCreateDBSnapshotOutcomeReceivedHandler(const CreateDBSnapshotOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateDBSnapshotOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateDBSnapshot.
    */
    inline void ClearAllCreateDBSnapshotOutcomeReceivedHandlers()
    {
      m_onCreateDBSnapshotOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateDBSubnetGroupAsync to call upon completion to the handler chain. You need to call this to
    * use CreateDBSubnetGroupAsync.
    */
    inline void RegisterCreateDBSubnetGroupOutcomeReceivedHandler(const CreateDBSubnetGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateDBSubnetGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateDBSubnetGroup.
    */
    inline void ClearAllCreateDBSubnetGroupOutcomeReceivedHandlers()
    {
      m_onCreateDBSubnetGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateEventSubscriptionAsync to call upon completion to the handler chain. You need to call this to
    * use CreateEventSubscriptionAsync.
    */
    inline void RegisterCreateEventSubscriptionOutcomeReceivedHandler(const CreateEventSubscriptionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateEventSubscriptionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateEventSubscription.
    */
    inline void ClearAllCreateEventSubscriptionOutcomeReceivedHandlers()
    {
      m_onCreateEventSubscriptionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateOptionGroupAsync to call upon completion to the handler chain. You need to call this to
    * use CreateOptionGroupAsync.
    */
    inline void RegisterCreateOptionGroupOutcomeReceivedHandler(const CreateOptionGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateOptionGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateOptionGroup.
    */
    inline void ClearAllCreateOptionGroupOutcomeReceivedHandlers()
    {
      m_onCreateOptionGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteDBInstanceAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteDBInstanceAsync.
    */
    inline void RegisterDeleteDBInstanceOutcomeReceivedHandler(const DeleteDBInstanceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteDBInstanceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteDBInstance.
    */
    inline void ClearAllDeleteDBInstanceOutcomeReceivedHandlers()
    {
      m_onDeleteDBInstanceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteDBParameterGroupAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteDBParameterGroupAsync.
    */
    inline void RegisterDeleteDBParameterGroupOutcomeReceivedHandler(const DeleteDBParameterGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteDBParameterGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteDBParameterGroup.
    */
    inline void ClearAllDeleteDBParameterGroupOutcomeReceivedHandlers()
    {
      m_onDeleteDBParameterGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteDBSecurityGroupAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteDBSecurityGroupAsync.
    */
    inline void RegisterDeleteDBSecurityGroupOutcomeReceivedHandler(const DeleteDBSecurityGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteDBSecurityGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteDBSecurityGroup.
    */
    inline void ClearAllDeleteDBSecurityGroupOutcomeReceivedHandlers()
    {
      m_onDeleteDBSecurityGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteDBSnapshotAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteDBSnapshotAsync.
    */
    inline void RegisterDeleteDBSnapshotOutcomeReceivedHandler(const DeleteDBSnapshotOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteDBSnapshotOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteDBSnapshot.
    */
    inline void ClearAllDeleteDBSnapshotOutcomeReceivedHandlers()
    {
      m_onDeleteDBSnapshotOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteDBSubnetGroupAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteDBSubnetGroupAsync.
    */
    inline void RegisterDeleteDBSubnetGroupOutcomeReceivedHandler(const DeleteDBSubnetGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteDBSubnetGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteDBSubnetGroup.
    */
    inline void ClearAllDeleteDBSubnetGroupOutcomeReceivedHandlers()
    {
      m_onDeleteDBSubnetGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteEventSubscriptionAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteEventSubscriptionAsync.
    */
    inline void RegisterDeleteEventSubscriptionOutcomeReceivedHandler(const DeleteEventSubscriptionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteEventSubscriptionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteEventSubscription.
    */
    inline void ClearAllDeleteEventSubscriptionOutcomeReceivedHandlers()
    {
      m_onDeleteEventSubscriptionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteOptionGroupAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteOptionGroupAsync.
    */
    inline void RegisterDeleteOptionGroupOutcomeReceivedHandler(const DeleteOptionGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteOptionGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteOptionGroup.
    */
    inline void ClearAllDeleteOptionGroupOutcomeReceivedHandlers()
    {
      m_onDeleteOptionGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeAccountAttributesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeAccountAttributesAsync.
    */
    inline void RegisterDescribeAccountAttributesOutcomeReceivedHandler(const DescribeAccountAttributesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeAccountAttributesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeAccountAttributes.
    */
    inline void ClearAllDescribeAccountAttributesOutcomeReceivedHandlers()
    {
      m_onDescribeAccountAttributesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeCertificatesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeCertificatesAsync.
    */
    inline void RegisterDescribeCertificatesOutcomeReceivedHandler(const DescribeCertificatesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeCertificatesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeCertificates.
    */
    inline void ClearAllDescribeCertificatesOutcomeReceivedHandlers()
    {
      m_onDescribeCertificatesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeDBEngineVersionsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeDBEngineVersionsAsync.
    */
    inline void RegisterDescribeDBEngineVersionsOutcomeReceivedHandler(const DescribeDBEngineVersionsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeDBEngineVersionsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeDBEngineVersions.
    */
    inline void ClearAllDescribeDBEngineVersionsOutcomeReceivedHandlers()
    {
      m_onDescribeDBEngineVersionsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeDBInstancesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeDBInstancesAsync.
    */
    inline void RegisterDescribeDBInstancesOutcomeReceivedHandler(const DescribeDBInstancesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeDBInstancesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeDBInstances.
    */
    inline void ClearAllDescribeDBInstancesOutcomeReceivedHandlers()
    {
      m_onDescribeDBInstancesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeDBLogFilesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeDBLogFilesAsync.
    */
    inline void RegisterDescribeDBLogFilesOutcomeReceivedHandler(const DescribeDBLogFilesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeDBLogFilesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeDBLogFiles.
    */
    inline void ClearAllDescribeDBLogFilesOutcomeReceivedHandlers()
    {
      m_onDescribeDBLogFilesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeDBParameterGroupsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeDBParameterGroupsAsync.
    */
    inline void RegisterDescribeDBParameterGroupsOutcomeReceivedHandler(const DescribeDBParameterGroupsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeDBParameterGroupsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeDBParameterGroups.
    */
    inline void ClearAllDescribeDBParameterGroupsOutcomeReceivedHandlers()
    {
      m_onDescribeDBParameterGroupsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeDBParametersAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeDBParametersAsync.
    */
    inline void RegisterDescribeDBParametersOutcomeReceivedHandler(const DescribeDBParametersOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeDBParametersOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeDBParameters.
    */
    inline void ClearAllDescribeDBParametersOutcomeReceivedHandlers()
    {
      m_onDescribeDBParametersOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeDBSecurityGroupsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeDBSecurityGroupsAsync.
    */
    inline void RegisterDescribeDBSecurityGroupsOutcomeReceivedHandler(const DescribeDBSecurityGroupsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeDBSecurityGroupsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeDBSecurityGroups.
    */
    inline void ClearAllDescribeDBSecurityGroupsOutcomeReceivedHandlers()
    {
      m_onDescribeDBSecurityGroupsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeDBSnapshotsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeDBSnapshotsAsync.
    */
    inline void RegisterDescribeDBSnapshotsOutcomeReceivedHandler(const DescribeDBSnapshotsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeDBSnapshotsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeDBSnapshots.
    */
    inline void ClearAllDescribeDBSnapshotsOutcomeReceivedHandlers()
    {
      m_onDescribeDBSnapshotsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeDBSubnetGroupsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeDBSubnetGroupsAsync.
    */
    inline void RegisterDescribeDBSubnetGroupsOutcomeReceivedHandler(const DescribeDBSubnetGroupsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeDBSubnetGroupsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeDBSubnetGroups.
    */
    inline void ClearAllDescribeDBSubnetGroupsOutcomeReceivedHandlers()
    {
      m_onDescribeDBSubnetGroupsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeEngineDefaultParametersAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeEngineDefaultParametersAsync.
    */
    inline void RegisterDescribeEngineDefaultParametersOutcomeReceivedHandler(const DescribeEngineDefaultParametersOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeEngineDefaultParametersOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeEngineDefaultParameters.
    */
    inline void ClearAllDescribeEngineDefaultParametersOutcomeReceivedHandlers()
    {
      m_onDescribeEngineDefaultParametersOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeEventCategoriesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeEventCategoriesAsync.
    */
    inline void RegisterDescribeEventCategoriesOutcomeReceivedHandler(const DescribeEventCategoriesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeEventCategoriesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeEventCategories.
    */
    inline void ClearAllDescribeEventCategoriesOutcomeReceivedHandlers()
    {
      m_onDescribeEventCategoriesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeEventSubscriptionsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeEventSubscriptionsAsync.
    */
    inline void RegisterDescribeEventSubscriptionsOutcomeReceivedHandler(const DescribeEventSubscriptionsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeEventSubscriptionsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeEventSubscriptions.
    */
    inline void ClearAllDescribeEventSubscriptionsOutcomeReceivedHandlers()
    {
      m_onDescribeEventSubscriptionsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeEventsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeEventsAsync.
    */
    inline void RegisterDescribeEventsOutcomeReceivedHandler(const DescribeEventsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeEventsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeEvents.
    */
    inline void ClearAllDescribeEventsOutcomeReceivedHandlers()
    {
      m_onDescribeEventsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeOptionGroupOptionsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeOptionGroupOptionsAsync.
    */
    inline void RegisterDescribeOptionGroupOptionsOutcomeReceivedHandler(const DescribeOptionGroupOptionsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeOptionGroupOptionsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeOptionGroupOptions.
    */
    inline void ClearAllDescribeOptionGroupOptionsOutcomeReceivedHandlers()
    {
      m_onDescribeOptionGroupOptionsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeOptionGroupsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeOptionGroupsAsync.
    */
    inline void RegisterDescribeOptionGroupsOutcomeReceivedHandler(const DescribeOptionGroupsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeOptionGroupsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeOptionGroups.
    */
    inline void ClearAllDescribeOptionGroupsOutcomeReceivedHandlers()
    {
      m_onDescribeOptionGroupsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeOrderableDBInstanceOptionsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeOrderableDBInstanceOptionsAsync.
    */
    inline void RegisterDescribeOrderableDBInstanceOptionsOutcomeReceivedHandler(const DescribeOrderableDBInstanceOptionsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeOrderableDBInstanceOptionsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeOrderableDBInstanceOptions.
    */
    inline void ClearAllDescribeOrderableDBInstanceOptionsOutcomeReceivedHandlers()
    {
      m_onDescribeOrderableDBInstanceOptionsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribePendingMaintenanceActionsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribePendingMaintenanceActionsAsync.
    */
    inline void RegisterDescribePendingMaintenanceActionsOutcomeReceivedHandler(const DescribePendingMaintenanceActionsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribePendingMaintenanceActionsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribePendingMaintenanceActions.
    */
    inline void ClearAllDescribePendingMaintenanceActionsOutcomeReceivedHandlers()
    {
      m_onDescribePendingMaintenanceActionsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeReservedDBInstancesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeReservedDBInstancesAsync.
    */
    inline void RegisterDescribeReservedDBInstancesOutcomeReceivedHandler(const DescribeReservedDBInstancesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeReservedDBInstancesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeReservedDBInstances.
    */
    inline void ClearAllDescribeReservedDBInstancesOutcomeReceivedHandlers()
    {
      m_onDescribeReservedDBInstancesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeReservedDBInstancesOfferingsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeReservedDBInstancesOfferingsAsync.
    */
    inline void RegisterDescribeReservedDBInstancesOfferingsOutcomeReceivedHandler(const DescribeReservedDBInstancesOfferingsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeReservedDBInstancesOfferingsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeReservedDBInstancesOfferings.
    */
    inline void ClearAllDescribeReservedDBInstancesOfferingsOutcomeReceivedHandlers()
    {
      m_onDescribeReservedDBInstancesOfferingsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DownloadDBLogFilePortionAsync to call upon completion to the handler chain. You need to call this to
    * use DownloadDBLogFilePortionAsync.
    */
    inline void RegisterDownloadDBLogFilePortionOutcomeReceivedHandler(const DownloadDBLogFilePortionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDownloadDBLogFilePortionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DownloadDBLogFilePortion.
    */
    inline void ClearAllDownloadDBLogFilePortionOutcomeReceivedHandlers()
    {
      m_onDownloadDBLogFilePortionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListTagsForResourceAsync to call upon completion to the handler chain. You need to call this to
    * use ListTagsForResourceAsync.
    */
    inline void RegisterListTagsForResourceOutcomeReceivedHandler(const ListTagsForResourceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListTagsForResourceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListTagsForResource.
    */
    inline void ClearAllListTagsForResourceOutcomeReceivedHandlers()
    {
      m_onListTagsForResourceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ModifyDBInstanceAsync to call upon completion to the handler chain. You need to call this to
    * use ModifyDBInstanceAsync.
    */
    inline void RegisterModifyDBInstanceOutcomeReceivedHandler(const ModifyDBInstanceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onModifyDBInstanceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ModifyDBInstance.
    */
    inline void ClearAllModifyDBInstanceOutcomeReceivedHandlers()
    {
      m_onModifyDBInstanceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ModifyDBParameterGroupAsync to call upon completion to the handler chain. You need to call this to
    * use ModifyDBParameterGroupAsync.
    */
    inline void RegisterModifyDBParameterGroupOutcomeReceivedHandler(const ModifyDBParameterGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onModifyDBParameterGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ModifyDBParameterGroup.
    */
    inline void ClearAllModifyDBParameterGroupOutcomeReceivedHandlers()
    {
      m_onModifyDBParameterGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ModifyDBSubnetGroupAsync to call upon completion to the handler chain. You need to call this to
    * use ModifyDBSubnetGroupAsync.
    */
    inline void RegisterModifyDBSubnetGroupOutcomeReceivedHandler(const ModifyDBSubnetGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onModifyDBSubnetGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ModifyDBSubnetGroup.
    */
    inline void ClearAllModifyDBSubnetGroupOutcomeReceivedHandlers()
    {
      m_onModifyDBSubnetGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ModifyEventSubscriptionAsync to call upon completion to the handler chain. You need to call this to
    * use ModifyEventSubscriptionAsync.
    */
    inline void RegisterModifyEventSubscriptionOutcomeReceivedHandler(const ModifyEventSubscriptionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onModifyEventSubscriptionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ModifyEventSubscription.
    */
    inline void ClearAllModifyEventSubscriptionOutcomeReceivedHandlers()
    {
      m_onModifyEventSubscriptionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ModifyOptionGroupAsync to call upon completion to the handler chain. You need to call this to
    * use ModifyOptionGroupAsync.
    */
    inline void RegisterModifyOptionGroupOutcomeReceivedHandler(const ModifyOptionGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onModifyOptionGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ModifyOptionGroup.
    */
    inline void ClearAllModifyOptionGroupOutcomeReceivedHandlers()
    {
      m_onModifyOptionGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PromoteReadReplicaAsync to call upon completion to the handler chain. You need to call this to
    * use PromoteReadReplicaAsync.
    */
    inline void RegisterPromoteReadReplicaOutcomeReceivedHandler(const PromoteReadReplicaOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPromoteReadReplicaOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for PromoteReadReplica.
    */
    inline void ClearAllPromoteReadReplicaOutcomeReceivedHandlers()
    {
      m_onPromoteReadReplicaOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PurchaseReservedDBInstancesOfferingAsync to call upon completion to the handler chain. You need to call this to
    * use PurchaseReservedDBInstancesOfferingAsync.
    */
    inline void RegisterPurchaseReservedDBInstancesOfferingOutcomeReceivedHandler(const PurchaseReservedDBInstancesOfferingOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPurchaseReservedDBInstancesOfferingOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for PurchaseReservedDBInstancesOffering.
    */
    inline void ClearAllPurchaseReservedDBInstancesOfferingOutcomeReceivedHandlers()
    {
      m_onPurchaseReservedDBInstancesOfferingOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RebootDBInstanceAsync to call upon completion to the handler chain. You need to call this to
    * use RebootDBInstanceAsync.
    */
    inline void RegisterRebootDBInstanceOutcomeReceivedHandler(const RebootDBInstanceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRebootDBInstanceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RebootDBInstance.
    */
    inline void ClearAllRebootDBInstanceOutcomeReceivedHandlers()
    {
      m_onRebootDBInstanceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RemoveSourceIdentifierFromSubscriptionAsync to call upon completion to the handler chain. You need to call this to
    * use RemoveSourceIdentifierFromSubscriptionAsync.
    */
    inline void RegisterRemoveSourceIdentifierFromSubscriptionOutcomeReceivedHandler(const RemoveSourceIdentifierFromSubscriptionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRemoveSourceIdentifierFromSubscriptionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RemoveSourceIdentifierFromSubscription.
    */
    inline void ClearAllRemoveSourceIdentifierFromSubscriptionOutcomeReceivedHandlers()
    {
      m_onRemoveSourceIdentifierFromSubscriptionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RemoveTagsFromResourceAsync to call upon completion to the handler chain. You need to call this to
    * use RemoveTagsFromResourceAsync.
    */
    inline void RegisterRemoveTagsFromResourceOutcomeReceivedHandler(const RemoveTagsFromResourceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRemoveTagsFromResourceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RemoveTagsFromResource.
    */
    inline void ClearAllRemoveTagsFromResourceOutcomeReceivedHandlers()
    {
      m_onRemoveTagsFromResourceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ResetDBParameterGroupAsync to call upon completion to the handler chain. You need to call this to
    * use ResetDBParameterGroupAsync.
    */
    inline void RegisterResetDBParameterGroupOutcomeReceivedHandler(const ResetDBParameterGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onResetDBParameterGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ResetDBParameterGroup.
    */
    inline void ClearAllResetDBParameterGroupOutcomeReceivedHandlers()
    {
      m_onResetDBParameterGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RestoreDBInstanceFromDBSnapshotAsync to call upon completion to the handler chain. You need to call this to
    * use RestoreDBInstanceFromDBSnapshotAsync.
    */
    inline void RegisterRestoreDBInstanceFromDBSnapshotOutcomeReceivedHandler(const RestoreDBInstanceFromDBSnapshotOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRestoreDBInstanceFromDBSnapshotOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RestoreDBInstanceFromDBSnapshot.
    */
    inline void ClearAllRestoreDBInstanceFromDBSnapshotOutcomeReceivedHandlers()
    {
      m_onRestoreDBInstanceFromDBSnapshotOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RestoreDBInstanceToPointInTimeAsync to call upon completion to the handler chain. You need to call this to
    * use RestoreDBInstanceToPointInTimeAsync.
    */
    inline void RegisterRestoreDBInstanceToPointInTimeOutcomeReceivedHandler(const RestoreDBInstanceToPointInTimeOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRestoreDBInstanceToPointInTimeOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RestoreDBInstanceToPointInTime.
    */
    inline void ClearAllRestoreDBInstanceToPointInTimeOutcomeReceivedHandlers()
    {
      m_onRestoreDBInstanceToPointInTimeOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RevokeDBSecurityGroupIngressAsync to call upon completion to the handler chain. You need to call this to
    * use RevokeDBSecurityGroupIngressAsync.
    */
    inline void RegisterRevokeDBSecurityGroupIngressOutcomeReceivedHandler(const RevokeDBSecurityGroupIngressOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRevokeDBSecurityGroupIngressOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RevokeDBSecurityGroupIngress.
    */
    inline void ClearAllRevokeDBSecurityGroupIngressOutcomeReceivedHandlers()
    {
      m_onRevokeDBSecurityGroupIngressOutcomeReceived.Clear();
    }

  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

    /**Async helpers**/
    void AddSourceIdentifierToSubscriptionAsyncHelper(const Model::AddSourceIdentifierToSubscriptionRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void AddTagsToResourceAsyncHelper(const Model::AddTagsToResourceRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ApplyPendingMaintenanceActionAsyncHelper(const Model::ApplyPendingMaintenanceActionRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void AuthorizeDBSecurityGroupIngressAsyncHelper(const Model::AuthorizeDBSecurityGroupIngressRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CopyDBParameterGroupAsyncHelper(const Model::CopyDBParameterGroupRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CopyDBSnapshotAsyncHelper(const Model::CopyDBSnapshotRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CopyOptionGroupAsyncHelper(const Model::CopyOptionGroupRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateDBInstanceAsyncHelper(const Model::CreateDBInstanceRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateDBInstanceReadReplicaAsyncHelper(const Model::CreateDBInstanceReadReplicaRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateDBParameterGroupAsyncHelper(const Model::CreateDBParameterGroupRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateDBSecurityGroupAsyncHelper(const Model::CreateDBSecurityGroupRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateDBSnapshotAsyncHelper(const Model::CreateDBSnapshotRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateDBSubnetGroupAsyncHelper(const Model::CreateDBSubnetGroupRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateEventSubscriptionAsyncHelper(const Model::CreateEventSubscriptionRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateOptionGroupAsyncHelper(const Model::CreateOptionGroupRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteDBInstanceAsyncHelper(const Model::DeleteDBInstanceRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteDBParameterGroupAsyncHelper(const Model::DeleteDBParameterGroupRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteDBSecurityGroupAsyncHelper(const Model::DeleteDBSecurityGroupRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteDBSnapshotAsyncHelper(const Model::DeleteDBSnapshotRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteDBSubnetGroupAsyncHelper(const Model::DeleteDBSubnetGroupRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteEventSubscriptionAsyncHelper(const Model::DeleteEventSubscriptionRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteOptionGroupAsyncHelper(const Model::DeleteOptionGroupRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeAccountAttributesAsyncHelper(const Model::DescribeAccountAttributesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeCertificatesAsyncHelper(const Model::DescribeCertificatesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeDBEngineVersionsAsyncHelper(const Model::DescribeDBEngineVersionsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeDBInstancesAsyncHelper(const Model::DescribeDBInstancesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeDBLogFilesAsyncHelper(const Model::DescribeDBLogFilesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeDBParameterGroupsAsyncHelper(const Model::DescribeDBParameterGroupsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeDBParametersAsyncHelper(const Model::DescribeDBParametersRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeDBSecurityGroupsAsyncHelper(const Model::DescribeDBSecurityGroupsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeDBSnapshotsAsyncHelper(const Model::DescribeDBSnapshotsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeDBSubnetGroupsAsyncHelper(const Model::DescribeDBSubnetGroupsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeEngineDefaultParametersAsyncHelper(const Model::DescribeEngineDefaultParametersRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeEventCategoriesAsyncHelper(const Model::DescribeEventCategoriesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeEventSubscriptionsAsyncHelper(const Model::DescribeEventSubscriptionsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeEventsAsyncHelper(const Model::DescribeEventsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeOptionGroupOptionsAsyncHelper(const Model::DescribeOptionGroupOptionsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeOptionGroupsAsyncHelper(const Model::DescribeOptionGroupsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeOrderableDBInstanceOptionsAsyncHelper(const Model::DescribeOrderableDBInstanceOptionsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribePendingMaintenanceActionsAsyncHelper(const Model::DescribePendingMaintenanceActionsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeReservedDBInstancesAsyncHelper(const Model::DescribeReservedDBInstancesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeReservedDBInstancesOfferingsAsyncHelper(const Model::DescribeReservedDBInstancesOfferingsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DownloadDBLogFilePortionAsyncHelper(const Model::DownloadDBLogFilePortionRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ModifyDBInstanceAsyncHelper(const Model::ModifyDBInstanceRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ModifyDBParameterGroupAsyncHelper(const Model::ModifyDBParameterGroupRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ModifyDBSubnetGroupAsyncHelper(const Model::ModifyDBSubnetGroupRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ModifyEventSubscriptionAsyncHelper(const Model::ModifyEventSubscriptionRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ModifyOptionGroupAsyncHelper(const Model::ModifyOptionGroupRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void PromoteReadReplicaAsyncHelper(const Model::PromoteReadReplicaRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void PurchaseReservedDBInstancesOfferingAsyncHelper(const Model::PurchaseReservedDBInstancesOfferingRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RebootDBInstanceAsyncHelper(const Model::RebootDBInstanceRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RemoveSourceIdentifierFromSubscriptionAsyncHelper(const Model::RemoveSourceIdentifierFromSubscriptionRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RemoveTagsFromResourceAsyncHelper(const Model::RemoveTagsFromResourceRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ResetDBParameterGroupAsyncHelper(const Model::ResetDBParameterGroupRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RestoreDBInstanceFromDBSnapshotAsyncHelper(const Model::RestoreDBInstanceFromDBSnapshotRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RestoreDBInstanceToPointInTimeAsyncHelper(const Model::RestoreDBInstanceToPointInTimeRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RevokeDBSecurityGroupIngressAsyncHelper(const Model::RevokeDBSecurityGroupIngressRequest& request, const Aws::Client::AsyncCallerContext* context) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;

    /** events **/
    AddSourceIdentifierToSubscriptionOutcomeReceivedEvent m_onAddSourceIdentifierToSubscriptionOutcomeReceived;
    AddTagsToResourceOutcomeReceivedEvent m_onAddTagsToResourceOutcomeReceived;
    ApplyPendingMaintenanceActionOutcomeReceivedEvent m_onApplyPendingMaintenanceActionOutcomeReceived;
    AuthorizeDBSecurityGroupIngressOutcomeReceivedEvent m_onAuthorizeDBSecurityGroupIngressOutcomeReceived;
    CopyDBParameterGroupOutcomeReceivedEvent m_onCopyDBParameterGroupOutcomeReceived;
    CopyDBSnapshotOutcomeReceivedEvent m_onCopyDBSnapshotOutcomeReceived;
    CopyOptionGroupOutcomeReceivedEvent m_onCopyOptionGroupOutcomeReceived;
    CreateDBInstanceOutcomeReceivedEvent m_onCreateDBInstanceOutcomeReceived;
    CreateDBInstanceReadReplicaOutcomeReceivedEvent m_onCreateDBInstanceReadReplicaOutcomeReceived;
    CreateDBParameterGroupOutcomeReceivedEvent m_onCreateDBParameterGroupOutcomeReceived;
    CreateDBSecurityGroupOutcomeReceivedEvent m_onCreateDBSecurityGroupOutcomeReceived;
    CreateDBSnapshotOutcomeReceivedEvent m_onCreateDBSnapshotOutcomeReceived;
    CreateDBSubnetGroupOutcomeReceivedEvent m_onCreateDBSubnetGroupOutcomeReceived;
    CreateEventSubscriptionOutcomeReceivedEvent m_onCreateEventSubscriptionOutcomeReceived;
    CreateOptionGroupOutcomeReceivedEvent m_onCreateOptionGroupOutcomeReceived;
    DeleteDBInstanceOutcomeReceivedEvent m_onDeleteDBInstanceOutcomeReceived;
    DeleteDBParameterGroupOutcomeReceivedEvent m_onDeleteDBParameterGroupOutcomeReceived;
    DeleteDBSecurityGroupOutcomeReceivedEvent m_onDeleteDBSecurityGroupOutcomeReceived;
    DeleteDBSnapshotOutcomeReceivedEvent m_onDeleteDBSnapshotOutcomeReceived;
    DeleteDBSubnetGroupOutcomeReceivedEvent m_onDeleteDBSubnetGroupOutcomeReceived;
    DeleteEventSubscriptionOutcomeReceivedEvent m_onDeleteEventSubscriptionOutcomeReceived;
    DeleteOptionGroupOutcomeReceivedEvent m_onDeleteOptionGroupOutcomeReceived;
    DescribeAccountAttributesOutcomeReceivedEvent m_onDescribeAccountAttributesOutcomeReceived;
    DescribeCertificatesOutcomeReceivedEvent m_onDescribeCertificatesOutcomeReceived;
    DescribeDBEngineVersionsOutcomeReceivedEvent m_onDescribeDBEngineVersionsOutcomeReceived;
    DescribeDBInstancesOutcomeReceivedEvent m_onDescribeDBInstancesOutcomeReceived;
    DescribeDBLogFilesOutcomeReceivedEvent m_onDescribeDBLogFilesOutcomeReceived;
    DescribeDBParameterGroupsOutcomeReceivedEvent m_onDescribeDBParameterGroupsOutcomeReceived;
    DescribeDBParametersOutcomeReceivedEvent m_onDescribeDBParametersOutcomeReceived;
    DescribeDBSecurityGroupsOutcomeReceivedEvent m_onDescribeDBSecurityGroupsOutcomeReceived;
    DescribeDBSnapshotsOutcomeReceivedEvent m_onDescribeDBSnapshotsOutcomeReceived;
    DescribeDBSubnetGroupsOutcomeReceivedEvent m_onDescribeDBSubnetGroupsOutcomeReceived;
    DescribeEngineDefaultParametersOutcomeReceivedEvent m_onDescribeEngineDefaultParametersOutcomeReceived;
    DescribeEventCategoriesOutcomeReceivedEvent m_onDescribeEventCategoriesOutcomeReceived;
    DescribeEventSubscriptionsOutcomeReceivedEvent m_onDescribeEventSubscriptionsOutcomeReceived;
    DescribeEventsOutcomeReceivedEvent m_onDescribeEventsOutcomeReceived;
    DescribeOptionGroupOptionsOutcomeReceivedEvent m_onDescribeOptionGroupOptionsOutcomeReceived;
    DescribeOptionGroupsOutcomeReceivedEvent m_onDescribeOptionGroupsOutcomeReceived;
    DescribeOrderableDBInstanceOptionsOutcomeReceivedEvent m_onDescribeOrderableDBInstanceOptionsOutcomeReceived;
    DescribePendingMaintenanceActionsOutcomeReceivedEvent m_onDescribePendingMaintenanceActionsOutcomeReceived;
    DescribeReservedDBInstancesOutcomeReceivedEvent m_onDescribeReservedDBInstancesOutcomeReceived;
    DescribeReservedDBInstancesOfferingsOutcomeReceivedEvent m_onDescribeReservedDBInstancesOfferingsOutcomeReceived;
    DownloadDBLogFilePortionOutcomeReceivedEvent m_onDownloadDBLogFilePortionOutcomeReceived;
    ListTagsForResourceOutcomeReceivedEvent m_onListTagsForResourceOutcomeReceived;
    ModifyDBInstanceOutcomeReceivedEvent m_onModifyDBInstanceOutcomeReceived;
    ModifyDBParameterGroupOutcomeReceivedEvent m_onModifyDBParameterGroupOutcomeReceived;
    ModifyDBSubnetGroupOutcomeReceivedEvent m_onModifyDBSubnetGroupOutcomeReceived;
    ModifyEventSubscriptionOutcomeReceivedEvent m_onModifyEventSubscriptionOutcomeReceived;
    ModifyOptionGroupOutcomeReceivedEvent m_onModifyOptionGroupOutcomeReceived;
    PromoteReadReplicaOutcomeReceivedEvent m_onPromoteReadReplicaOutcomeReceived;
    PurchaseReservedDBInstancesOfferingOutcomeReceivedEvent m_onPurchaseReservedDBInstancesOfferingOutcomeReceived;
    RebootDBInstanceOutcomeReceivedEvent m_onRebootDBInstanceOutcomeReceived;
    RemoveSourceIdentifierFromSubscriptionOutcomeReceivedEvent m_onRemoveSourceIdentifierFromSubscriptionOutcomeReceived;
    RemoveTagsFromResourceOutcomeReceivedEvent m_onRemoveTagsFromResourceOutcomeReceived;
    ResetDBParameterGroupOutcomeReceivedEvent m_onResetDBParameterGroupOutcomeReceived;
    RestoreDBInstanceFromDBSnapshotOutcomeReceivedEvent m_onRestoreDBInstanceFromDBSnapshotOutcomeReceived;
    RestoreDBInstanceToPointInTimeOutcomeReceivedEvent m_onRestoreDBInstanceToPointInTimeOutcomeReceived;
    RevokeDBSecurityGroupIngressOutcomeReceivedEvent m_onRevokeDBSecurityGroupIngressOutcomeReceived;
  };

} // namespace RDS
} // namespace Aws
