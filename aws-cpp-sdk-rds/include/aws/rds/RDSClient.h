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
#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rds/model/AddSourceIdentifierToSubscriptionResult.h>
#include <aws/rds/model/ApplyPendingMaintenanceActionResult.h>
#include <aws/rds/model/AuthorizeDBSecurityGroupIngressResult.h>
#include <aws/rds/model/CopyDBClusterSnapshotResult.h>
#include <aws/rds/model/CopyDBParameterGroupResult.h>
#include <aws/rds/model/CopyDBSnapshotResult.h>
#include <aws/rds/model/CopyOptionGroupResult.h>
#include <aws/rds/model/CreateDBClusterResult.h>
#include <aws/rds/model/CreateDBClusterParameterGroupResult.h>
#include <aws/rds/model/CreateDBClusterSnapshotResult.h>
#include <aws/rds/model/CreateDBInstanceResult.h>
#include <aws/rds/model/CreateDBInstanceReadReplicaResult.h>
#include <aws/rds/model/CreateDBParameterGroupResult.h>
#include <aws/rds/model/CreateDBSecurityGroupResult.h>
#include <aws/rds/model/CreateDBSnapshotResult.h>
#include <aws/rds/model/CreateDBSubnetGroupResult.h>
#include <aws/rds/model/CreateEventSubscriptionResult.h>
#include <aws/rds/model/CreateOptionGroupResult.h>
#include <aws/rds/model/DeleteDBClusterResult.h>
#include <aws/rds/model/DeleteDBClusterSnapshotResult.h>
#include <aws/rds/model/DeleteDBInstanceResult.h>
#include <aws/rds/model/DeleteDBSnapshotResult.h>
#include <aws/rds/model/DeleteEventSubscriptionResult.h>
#include <aws/rds/model/DescribeAccountAttributesResult.h>
#include <aws/rds/model/DescribeCertificatesResult.h>
#include <aws/rds/model/DescribeDBClusterParameterGroupsResult.h>
#include <aws/rds/model/DescribeDBClusterParametersResult.h>
#include <aws/rds/model/DescribeDBClusterSnapshotAttributesResult.h>
#include <aws/rds/model/DescribeDBClusterSnapshotsResult.h>
#include <aws/rds/model/DescribeDBClustersResult.h>
#include <aws/rds/model/DescribeDBEngineVersionsResult.h>
#include <aws/rds/model/DescribeDBInstancesResult.h>
#include <aws/rds/model/DescribeDBLogFilesResult.h>
#include <aws/rds/model/DescribeDBParameterGroupsResult.h>
#include <aws/rds/model/DescribeDBParametersResult.h>
#include <aws/rds/model/DescribeDBSecurityGroupsResult.h>
#include <aws/rds/model/DescribeDBSnapshotAttributesResult.h>
#include <aws/rds/model/DescribeDBSnapshotsResult.h>
#include <aws/rds/model/DescribeDBSubnetGroupsResult.h>
#include <aws/rds/model/DescribeEngineDefaultClusterParametersResult.h>
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
#include <aws/rds/model/FailoverDBClusterResult.h>
#include <aws/rds/model/ListTagsForResourceResult.h>
#include <aws/rds/model/ModifyDBClusterResult.h>
#include <aws/rds/model/ModifyDBClusterParameterGroupResult.h>
#include <aws/rds/model/ModifyDBClusterSnapshotAttributeResult.h>
#include <aws/rds/model/ModifyDBInstanceResult.h>
#include <aws/rds/model/ModifyDBParameterGroupResult.h>
#include <aws/rds/model/ModifyDBSnapshotAttributeResult.h>
#include <aws/rds/model/ModifyDBSubnetGroupResult.h>
#include <aws/rds/model/ModifyEventSubscriptionResult.h>
#include <aws/rds/model/ModifyOptionGroupResult.h>
#include <aws/rds/model/PromoteReadReplicaResult.h>
#include <aws/rds/model/PurchaseReservedDBInstancesOfferingResult.h>
#include <aws/rds/model/RebootDBInstanceResult.h>
#include <aws/rds/model/RemoveSourceIdentifierFromSubscriptionResult.h>
#include <aws/rds/model/ResetDBClusterParameterGroupResult.h>
#include <aws/rds/model/ResetDBParameterGroupResult.h>
#include <aws/rds/model/RestoreDBClusterFromSnapshotResult.h>
#include <aws/rds/model/RestoreDBClusterToPointInTimeResult.h>
#include <aws/rds/model/RestoreDBInstanceFromDBSnapshotResult.h>
#include <aws/rds/model/RestoreDBInstanceToPointInTimeResult.h>
#include <aws/rds/model/RevokeDBSecurityGroupIngressResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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
        class CopyDBClusterSnapshotRequest;
        class CopyDBParameterGroupRequest;
        class CopyDBSnapshotRequest;
        class CopyOptionGroupRequest;
        class CreateDBClusterRequest;
        class CreateDBClusterParameterGroupRequest;
        class CreateDBClusterSnapshotRequest;
        class CreateDBInstanceRequest;
        class CreateDBInstanceReadReplicaRequest;
        class CreateDBParameterGroupRequest;
        class CreateDBSecurityGroupRequest;
        class CreateDBSnapshotRequest;
        class CreateDBSubnetGroupRequest;
        class CreateEventSubscriptionRequest;
        class CreateOptionGroupRequest;
        class DeleteDBClusterRequest;
        class DeleteDBClusterParameterGroupRequest;
        class DeleteDBClusterSnapshotRequest;
        class DeleteDBInstanceRequest;
        class DeleteDBParameterGroupRequest;
        class DeleteDBSecurityGroupRequest;
        class DeleteDBSnapshotRequest;
        class DeleteDBSubnetGroupRequest;
        class DeleteEventSubscriptionRequest;
        class DeleteOptionGroupRequest;
        class DescribeAccountAttributesRequest;
        class DescribeCertificatesRequest;
        class DescribeDBClusterParameterGroupsRequest;
        class DescribeDBClusterParametersRequest;
        class DescribeDBClusterSnapshotAttributesRequest;
        class DescribeDBClusterSnapshotsRequest;
        class DescribeDBClustersRequest;
        class DescribeDBEngineVersionsRequest;
        class DescribeDBInstancesRequest;
        class DescribeDBLogFilesRequest;
        class DescribeDBParameterGroupsRequest;
        class DescribeDBParametersRequest;
        class DescribeDBSecurityGroupsRequest;
        class DescribeDBSnapshotAttributesRequest;
        class DescribeDBSnapshotsRequest;
        class DescribeDBSubnetGroupsRequest;
        class DescribeEngineDefaultClusterParametersRequest;
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
        class FailoverDBClusterRequest;
        class ListTagsForResourceRequest;
        class ModifyDBClusterRequest;
        class ModifyDBClusterParameterGroupRequest;
        class ModifyDBClusterSnapshotAttributeRequest;
        class ModifyDBInstanceRequest;
        class ModifyDBParameterGroupRequest;
        class ModifyDBSnapshotAttributeRequest;
        class ModifyDBSubnetGroupRequest;
        class ModifyEventSubscriptionRequest;
        class ModifyOptionGroupRequest;
        class PromoteReadReplicaRequest;
        class PurchaseReservedDBInstancesOfferingRequest;
        class RebootDBInstanceRequest;
        class RemoveSourceIdentifierFromSubscriptionRequest;
        class RemoveTagsFromResourceRequest;
        class ResetDBClusterParameterGroupRequest;
        class ResetDBParameterGroupRequest;
        class RestoreDBClusterFromSnapshotRequest;
        class RestoreDBClusterToPointInTimeRequest;
        class RestoreDBInstanceFromDBSnapshotRequest;
        class RestoreDBInstanceToPointInTimeRequest;
        class RevokeDBSecurityGroupIngressRequest;

        typedef Aws::Utils::Outcome<AddSourceIdentifierToSubscriptionResult, Aws::Client::AWSError<RDSErrors>> AddSourceIdentifierToSubscriptionOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<RDSErrors>> AddTagsToResourceOutcome;
        typedef Aws::Utils::Outcome<ApplyPendingMaintenanceActionResult, Aws::Client::AWSError<RDSErrors>> ApplyPendingMaintenanceActionOutcome;
        typedef Aws::Utils::Outcome<AuthorizeDBSecurityGroupIngressResult, Aws::Client::AWSError<RDSErrors>> AuthorizeDBSecurityGroupIngressOutcome;
        typedef Aws::Utils::Outcome<CopyDBClusterSnapshotResult, Aws::Client::AWSError<RDSErrors>> CopyDBClusterSnapshotOutcome;
        typedef Aws::Utils::Outcome<CopyDBParameterGroupResult, Aws::Client::AWSError<RDSErrors>> CopyDBParameterGroupOutcome;
        typedef Aws::Utils::Outcome<CopyDBSnapshotResult, Aws::Client::AWSError<RDSErrors>> CopyDBSnapshotOutcome;
        typedef Aws::Utils::Outcome<CopyOptionGroupResult, Aws::Client::AWSError<RDSErrors>> CopyOptionGroupOutcome;
        typedef Aws::Utils::Outcome<CreateDBClusterResult, Aws::Client::AWSError<RDSErrors>> CreateDBClusterOutcome;
        typedef Aws::Utils::Outcome<CreateDBClusterParameterGroupResult, Aws::Client::AWSError<RDSErrors>> CreateDBClusterParameterGroupOutcome;
        typedef Aws::Utils::Outcome<CreateDBClusterSnapshotResult, Aws::Client::AWSError<RDSErrors>> CreateDBClusterSnapshotOutcome;
        typedef Aws::Utils::Outcome<CreateDBInstanceResult, Aws::Client::AWSError<RDSErrors>> CreateDBInstanceOutcome;
        typedef Aws::Utils::Outcome<CreateDBInstanceReadReplicaResult, Aws::Client::AWSError<RDSErrors>> CreateDBInstanceReadReplicaOutcome;
        typedef Aws::Utils::Outcome<CreateDBParameterGroupResult, Aws::Client::AWSError<RDSErrors>> CreateDBParameterGroupOutcome;
        typedef Aws::Utils::Outcome<CreateDBSecurityGroupResult, Aws::Client::AWSError<RDSErrors>> CreateDBSecurityGroupOutcome;
        typedef Aws::Utils::Outcome<CreateDBSnapshotResult, Aws::Client::AWSError<RDSErrors>> CreateDBSnapshotOutcome;
        typedef Aws::Utils::Outcome<CreateDBSubnetGroupResult, Aws::Client::AWSError<RDSErrors>> CreateDBSubnetGroupOutcome;
        typedef Aws::Utils::Outcome<CreateEventSubscriptionResult, Aws::Client::AWSError<RDSErrors>> CreateEventSubscriptionOutcome;
        typedef Aws::Utils::Outcome<CreateOptionGroupResult, Aws::Client::AWSError<RDSErrors>> CreateOptionGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteDBClusterResult, Aws::Client::AWSError<RDSErrors>> DeleteDBClusterOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<RDSErrors>> DeleteDBClusterParameterGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteDBClusterSnapshotResult, Aws::Client::AWSError<RDSErrors>> DeleteDBClusterSnapshotOutcome;
        typedef Aws::Utils::Outcome<DeleteDBInstanceResult, Aws::Client::AWSError<RDSErrors>> DeleteDBInstanceOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<RDSErrors>> DeleteDBParameterGroupOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<RDSErrors>> DeleteDBSecurityGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteDBSnapshotResult, Aws::Client::AWSError<RDSErrors>> DeleteDBSnapshotOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<RDSErrors>> DeleteDBSubnetGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteEventSubscriptionResult, Aws::Client::AWSError<RDSErrors>> DeleteEventSubscriptionOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<RDSErrors>> DeleteOptionGroupOutcome;
        typedef Aws::Utils::Outcome<DescribeAccountAttributesResult, Aws::Client::AWSError<RDSErrors>> DescribeAccountAttributesOutcome;
        typedef Aws::Utils::Outcome<DescribeCertificatesResult, Aws::Client::AWSError<RDSErrors>> DescribeCertificatesOutcome;
        typedef Aws::Utils::Outcome<DescribeDBClusterParameterGroupsResult, Aws::Client::AWSError<RDSErrors>> DescribeDBClusterParameterGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeDBClusterParametersResult, Aws::Client::AWSError<RDSErrors>> DescribeDBClusterParametersOutcome;
        typedef Aws::Utils::Outcome<DescribeDBClusterSnapshotAttributesResult, Aws::Client::AWSError<RDSErrors>> DescribeDBClusterSnapshotAttributesOutcome;
        typedef Aws::Utils::Outcome<DescribeDBClusterSnapshotsResult, Aws::Client::AWSError<RDSErrors>> DescribeDBClusterSnapshotsOutcome;
        typedef Aws::Utils::Outcome<DescribeDBClustersResult, Aws::Client::AWSError<RDSErrors>> DescribeDBClustersOutcome;
        typedef Aws::Utils::Outcome<DescribeDBEngineVersionsResult, Aws::Client::AWSError<RDSErrors>> DescribeDBEngineVersionsOutcome;
        typedef Aws::Utils::Outcome<DescribeDBInstancesResult, Aws::Client::AWSError<RDSErrors>> DescribeDBInstancesOutcome;
        typedef Aws::Utils::Outcome<DescribeDBLogFilesResult, Aws::Client::AWSError<RDSErrors>> DescribeDBLogFilesOutcome;
        typedef Aws::Utils::Outcome<DescribeDBParameterGroupsResult, Aws::Client::AWSError<RDSErrors>> DescribeDBParameterGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeDBParametersResult, Aws::Client::AWSError<RDSErrors>> DescribeDBParametersOutcome;
        typedef Aws::Utils::Outcome<DescribeDBSecurityGroupsResult, Aws::Client::AWSError<RDSErrors>> DescribeDBSecurityGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeDBSnapshotAttributesResult, Aws::Client::AWSError<RDSErrors>> DescribeDBSnapshotAttributesOutcome;
        typedef Aws::Utils::Outcome<DescribeDBSnapshotsResult, Aws::Client::AWSError<RDSErrors>> DescribeDBSnapshotsOutcome;
        typedef Aws::Utils::Outcome<DescribeDBSubnetGroupsResult, Aws::Client::AWSError<RDSErrors>> DescribeDBSubnetGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeEngineDefaultClusterParametersResult, Aws::Client::AWSError<RDSErrors>> DescribeEngineDefaultClusterParametersOutcome;
        typedef Aws::Utils::Outcome<DescribeEngineDefaultParametersResult, Aws::Client::AWSError<RDSErrors>> DescribeEngineDefaultParametersOutcome;
        typedef Aws::Utils::Outcome<DescribeEventCategoriesResult, Aws::Client::AWSError<RDSErrors>> DescribeEventCategoriesOutcome;
        typedef Aws::Utils::Outcome<DescribeEventSubscriptionsResult, Aws::Client::AWSError<RDSErrors>> DescribeEventSubscriptionsOutcome;
        typedef Aws::Utils::Outcome<DescribeEventsResult, Aws::Client::AWSError<RDSErrors>> DescribeEventsOutcome;
        typedef Aws::Utils::Outcome<DescribeOptionGroupOptionsResult, Aws::Client::AWSError<RDSErrors>> DescribeOptionGroupOptionsOutcome;
        typedef Aws::Utils::Outcome<DescribeOptionGroupsResult, Aws::Client::AWSError<RDSErrors>> DescribeOptionGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeOrderableDBInstanceOptionsResult, Aws::Client::AWSError<RDSErrors>> DescribeOrderableDBInstanceOptionsOutcome;
        typedef Aws::Utils::Outcome<DescribePendingMaintenanceActionsResult, Aws::Client::AWSError<RDSErrors>> DescribePendingMaintenanceActionsOutcome;
        typedef Aws::Utils::Outcome<DescribeReservedDBInstancesResult, Aws::Client::AWSError<RDSErrors>> DescribeReservedDBInstancesOutcome;
        typedef Aws::Utils::Outcome<DescribeReservedDBInstancesOfferingsResult, Aws::Client::AWSError<RDSErrors>> DescribeReservedDBInstancesOfferingsOutcome;
        typedef Aws::Utils::Outcome<DownloadDBLogFilePortionResult, Aws::Client::AWSError<RDSErrors>> DownloadDBLogFilePortionOutcome;
        typedef Aws::Utils::Outcome<FailoverDBClusterResult, Aws::Client::AWSError<RDSErrors>> FailoverDBClusterOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<RDSErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ModifyDBClusterResult, Aws::Client::AWSError<RDSErrors>> ModifyDBClusterOutcome;
        typedef Aws::Utils::Outcome<ModifyDBClusterParameterGroupResult, Aws::Client::AWSError<RDSErrors>> ModifyDBClusterParameterGroupOutcome;
        typedef Aws::Utils::Outcome<ModifyDBClusterSnapshotAttributeResult, Aws::Client::AWSError<RDSErrors>> ModifyDBClusterSnapshotAttributeOutcome;
        typedef Aws::Utils::Outcome<ModifyDBInstanceResult, Aws::Client::AWSError<RDSErrors>> ModifyDBInstanceOutcome;
        typedef Aws::Utils::Outcome<ModifyDBParameterGroupResult, Aws::Client::AWSError<RDSErrors>> ModifyDBParameterGroupOutcome;
        typedef Aws::Utils::Outcome<ModifyDBSnapshotAttributeResult, Aws::Client::AWSError<RDSErrors>> ModifyDBSnapshotAttributeOutcome;
        typedef Aws::Utils::Outcome<ModifyDBSubnetGroupResult, Aws::Client::AWSError<RDSErrors>> ModifyDBSubnetGroupOutcome;
        typedef Aws::Utils::Outcome<ModifyEventSubscriptionResult, Aws::Client::AWSError<RDSErrors>> ModifyEventSubscriptionOutcome;
        typedef Aws::Utils::Outcome<ModifyOptionGroupResult, Aws::Client::AWSError<RDSErrors>> ModifyOptionGroupOutcome;
        typedef Aws::Utils::Outcome<PromoteReadReplicaResult, Aws::Client::AWSError<RDSErrors>> PromoteReadReplicaOutcome;
        typedef Aws::Utils::Outcome<PurchaseReservedDBInstancesOfferingResult, Aws::Client::AWSError<RDSErrors>> PurchaseReservedDBInstancesOfferingOutcome;
        typedef Aws::Utils::Outcome<RebootDBInstanceResult, Aws::Client::AWSError<RDSErrors>> RebootDBInstanceOutcome;
        typedef Aws::Utils::Outcome<RemoveSourceIdentifierFromSubscriptionResult, Aws::Client::AWSError<RDSErrors>> RemoveSourceIdentifierFromSubscriptionOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<RDSErrors>> RemoveTagsFromResourceOutcome;
        typedef Aws::Utils::Outcome<ResetDBClusterParameterGroupResult, Aws::Client::AWSError<RDSErrors>> ResetDBClusterParameterGroupOutcome;
        typedef Aws::Utils::Outcome<ResetDBParameterGroupResult, Aws::Client::AWSError<RDSErrors>> ResetDBParameterGroupOutcome;
        typedef Aws::Utils::Outcome<RestoreDBClusterFromSnapshotResult, Aws::Client::AWSError<RDSErrors>> RestoreDBClusterFromSnapshotOutcome;
        typedef Aws::Utils::Outcome<RestoreDBClusterToPointInTimeResult, Aws::Client::AWSError<RDSErrors>> RestoreDBClusterToPointInTimeOutcome;
        typedef Aws::Utils::Outcome<RestoreDBInstanceFromDBSnapshotResult, Aws::Client::AWSError<RDSErrors>> RestoreDBInstanceFromDBSnapshotOutcome;
        typedef Aws::Utils::Outcome<RestoreDBInstanceToPointInTimeResult, Aws::Client::AWSError<RDSErrors>> RestoreDBInstanceToPointInTimeOutcome;
        typedef Aws::Utils::Outcome<RevokeDBSecurityGroupIngressResult, Aws::Client::AWSError<RDSErrors>> RevokeDBSecurityGroupIngressOutcome;

        typedef std::future<AddSourceIdentifierToSubscriptionOutcome> AddSourceIdentifierToSubscriptionOutcomeCallable;
        typedef std::future<AddTagsToResourceOutcome> AddTagsToResourceOutcomeCallable;
        typedef std::future<ApplyPendingMaintenanceActionOutcome> ApplyPendingMaintenanceActionOutcomeCallable;
        typedef std::future<AuthorizeDBSecurityGroupIngressOutcome> AuthorizeDBSecurityGroupIngressOutcomeCallable;
        typedef std::future<CopyDBClusterSnapshotOutcome> CopyDBClusterSnapshotOutcomeCallable;
        typedef std::future<CopyDBParameterGroupOutcome> CopyDBParameterGroupOutcomeCallable;
        typedef std::future<CopyDBSnapshotOutcome> CopyDBSnapshotOutcomeCallable;
        typedef std::future<CopyOptionGroupOutcome> CopyOptionGroupOutcomeCallable;
        typedef std::future<CreateDBClusterOutcome> CreateDBClusterOutcomeCallable;
        typedef std::future<CreateDBClusterParameterGroupOutcome> CreateDBClusterParameterGroupOutcomeCallable;
        typedef std::future<CreateDBClusterSnapshotOutcome> CreateDBClusterSnapshotOutcomeCallable;
        typedef std::future<CreateDBInstanceOutcome> CreateDBInstanceOutcomeCallable;
        typedef std::future<CreateDBInstanceReadReplicaOutcome> CreateDBInstanceReadReplicaOutcomeCallable;
        typedef std::future<CreateDBParameterGroupOutcome> CreateDBParameterGroupOutcomeCallable;
        typedef std::future<CreateDBSecurityGroupOutcome> CreateDBSecurityGroupOutcomeCallable;
        typedef std::future<CreateDBSnapshotOutcome> CreateDBSnapshotOutcomeCallable;
        typedef std::future<CreateDBSubnetGroupOutcome> CreateDBSubnetGroupOutcomeCallable;
        typedef std::future<CreateEventSubscriptionOutcome> CreateEventSubscriptionOutcomeCallable;
        typedef std::future<CreateOptionGroupOutcome> CreateOptionGroupOutcomeCallable;
        typedef std::future<DeleteDBClusterOutcome> DeleteDBClusterOutcomeCallable;
        typedef std::future<DeleteDBClusterParameterGroupOutcome> DeleteDBClusterParameterGroupOutcomeCallable;
        typedef std::future<DeleteDBClusterSnapshotOutcome> DeleteDBClusterSnapshotOutcomeCallable;
        typedef std::future<DeleteDBInstanceOutcome> DeleteDBInstanceOutcomeCallable;
        typedef std::future<DeleteDBParameterGroupOutcome> DeleteDBParameterGroupOutcomeCallable;
        typedef std::future<DeleteDBSecurityGroupOutcome> DeleteDBSecurityGroupOutcomeCallable;
        typedef std::future<DeleteDBSnapshotOutcome> DeleteDBSnapshotOutcomeCallable;
        typedef std::future<DeleteDBSubnetGroupOutcome> DeleteDBSubnetGroupOutcomeCallable;
        typedef std::future<DeleteEventSubscriptionOutcome> DeleteEventSubscriptionOutcomeCallable;
        typedef std::future<DeleteOptionGroupOutcome> DeleteOptionGroupOutcomeCallable;
        typedef std::future<DescribeAccountAttributesOutcome> DescribeAccountAttributesOutcomeCallable;
        typedef std::future<DescribeCertificatesOutcome> DescribeCertificatesOutcomeCallable;
        typedef std::future<DescribeDBClusterParameterGroupsOutcome> DescribeDBClusterParameterGroupsOutcomeCallable;
        typedef std::future<DescribeDBClusterParametersOutcome> DescribeDBClusterParametersOutcomeCallable;
        typedef std::future<DescribeDBClusterSnapshotAttributesOutcome> DescribeDBClusterSnapshotAttributesOutcomeCallable;
        typedef std::future<DescribeDBClusterSnapshotsOutcome> DescribeDBClusterSnapshotsOutcomeCallable;
        typedef std::future<DescribeDBClustersOutcome> DescribeDBClustersOutcomeCallable;
        typedef std::future<DescribeDBEngineVersionsOutcome> DescribeDBEngineVersionsOutcomeCallable;
        typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
        typedef std::future<DescribeDBLogFilesOutcome> DescribeDBLogFilesOutcomeCallable;
        typedef std::future<DescribeDBParameterGroupsOutcome> DescribeDBParameterGroupsOutcomeCallable;
        typedef std::future<DescribeDBParametersOutcome> DescribeDBParametersOutcomeCallable;
        typedef std::future<DescribeDBSecurityGroupsOutcome> DescribeDBSecurityGroupsOutcomeCallable;
        typedef std::future<DescribeDBSnapshotAttributesOutcome> DescribeDBSnapshotAttributesOutcomeCallable;
        typedef std::future<DescribeDBSnapshotsOutcome> DescribeDBSnapshotsOutcomeCallable;
        typedef std::future<DescribeDBSubnetGroupsOutcome> DescribeDBSubnetGroupsOutcomeCallable;
        typedef std::future<DescribeEngineDefaultClusterParametersOutcome> DescribeEngineDefaultClusterParametersOutcomeCallable;
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
        typedef std::future<FailoverDBClusterOutcome> FailoverDBClusterOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ModifyDBClusterOutcome> ModifyDBClusterOutcomeCallable;
        typedef std::future<ModifyDBClusterParameterGroupOutcome> ModifyDBClusterParameterGroupOutcomeCallable;
        typedef std::future<ModifyDBClusterSnapshotAttributeOutcome> ModifyDBClusterSnapshotAttributeOutcomeCallable;
        typedef std::future<ModifyDBInstanceOutcome> ModifyDBInstanceOutcomeCallable;
        typedef std::future<ModifyDBParameterGroupOutcome> ModifyDBParameterGroupOutcomeCallable;
        typedef std::future<ModifyDBSnapshotAttributeOutcome> ModifyDBSnapshotAttributeOutcomeCallable;
        typedef std::future<ModifyDBSubnetGroupOutcome> ModifyDBSubnetGroupOutcomeCallable;
        typedef std::future<ModifyEventSubscriptionOutcome> ModifyEventSubscriptionOutcomeCallable;
        typedef std::future<ModifyOptionGroupOutcome> ModifyOptionGroupOutcomeCallable;
        typedef std::future<PromoteReadReplicaOutcome> PromoteReadReplicaOutcomeCallable;
        typedef std::future<PurchaseReservedDBInstancesOfferingOutcome> PurchaseReservedDBInstancesOfferingOutcomeCallable;
        typedef std::future<RebootDBInstanceOutcome> RebootDBInstanceOutcomeCallable;
        typedef std::future<RemoveSourceIdentifierFromSubscriptionOutcome> RemoveSourceIdentifierFromSubscriptionOutcomeCallable;
        typedef std::future<RemoveTagsFromResourceOutcome> RemoveTagsFromResourceOutcomeCallable;
        typedef std::future<ResetDBClusterParameterGroupOutcome> ResetDBClusterParameterGroupOutcomeCallable;
        typedef std::future<ResetDBParameterGroupOutcome> ResetDBParameterGroupOutcomeCallable;
        typedef std::future<RestoreDBClusterFromSnapshotOutcome> RestoreDBClusterFromSnapshotOutcomeCallable;
        typedef std::future<RestoreDBClusterToPointInTimeOutcome> RestoreDBClusterToPointInTimeOutcomeCallable;
        typedef std::future<RestoreDBInstanceFromDBSnapshotOutcome> RestoreDBInstanceFromDBSnapshotOutcomeCallable;
        typedef std::future<RestoreDBInstanceToPointInTimeOutcome> RestoreDBInstanceToPointInTimeOutcomeCallable;
        typedef std::future<RevokeDBSecurityGroupIngressOutcome> RevokeDBSecurityGroupIngressOutcomeCallable;
} // namespace Model

  class RDSClient;

    typedef std::function<void(const RDSClient*, const Model::AddSourceIdentifierToSubscriptionRequest&, const Model::AddSourceIdentifierToSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddSourceIdentifierToSubscriptionResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::AddTagsToResourceRequest&, const Model::AddTagsToResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsToResourceResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ApplyPendingMaintenanceActionRequest&, const Model::ApplyPendingMaintenanceActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ApplyPendingMaintenanceActionResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::AuthorizeDBSecurityGroupIngressRequest&, const Model::AuthorizeDBSecurityGroupIngressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AuthorizeDBSecurityGroupIngressResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CopyDBClusterSnapshotRequest&, const Model::CopyDBClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyDBClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CopyDBParameterGroupRequest&, const Model::CopyDBParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyDBParameterGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CopyDBSnapshotRequest&, const Model::CopyDBSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyDBSnapshotResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CopyOptionGroupRequest&, const Model::CopyOptionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyOptionGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CreateDBClusterRequest&, const Model::CreateDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBClusterResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CreateDBClusterParameterGroupRequest&, const Model::CreateDBClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CreateDBClusterSnapshotRequest&, const Model::CreateDBClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CreateDBInstanceRequest&, const Model::CreateDBInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBInstanceResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CreateDBInstanceReadReplicaRequest&, const Model::CreateDBInstanceReadReplicaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBInstanceReadReplicaResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CreateDBParameterGroupRequest&, const Model::CreateDBParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBParameterGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CreateDBSecurityGroupRequest&, const Model::CreateDBSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CreateDBSnapshotRequest&, const Model::CreateDBSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBSnapshotResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CreateDBSubnetGroupRequest&, const Model::CreateDBSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CreateEventSubscriptionRequest&, const Model::CreateEventSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventSubscriptionResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CreateOptionGroupRequest&, const Model::CreateOptionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOptionGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeleteDBClusterRequest&, const Model::DeleteDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBClusterResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeleteDBClusterParameterGroupRequest&, const Model::DeleteDBClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeleteDBClusterSnapshotRequest&, const Model::DeleteDBClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeleteDBInstanceRequest&, const Model::DeleteDBInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBInstanceResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeleteDBParameterGroupRequest&, const Model::DeleteDBParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBParameterGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeleteDBSecurityGroupRequest&, const Model::DeleteDBSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeleteDBSnapshotRequest&, const Model::DeleteDBSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBSnapshotResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeleteDBSubnetGroupRequest&, const Model::DeleteDBSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeleteEventSubscriptionRequest&, const Model::DeleteEventSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventSubscriptionResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeleteOptionGroupRequest&, const Model::DeleteOptionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOptionGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeAccountAttributesRequest&, const Model::DescribeAccountAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountAttributesResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeCertificatesRequest&, const Model::DescribeCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCertificatesResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBClusterParameterGroupsRequest&, const Model::DescribeDBClusterParameterGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClusterParameterGroupsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBClusterParametersRequest&, const Model::DescribeDBClusterParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClusterParametersResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBClusterSnapshotAttributesRequest&, const Model::DescribeDBClusterSnapshotAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClusterSnapshotAttributesResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBClusterSnapshotsRequest&, const Model::DescribeDBClusterSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClusterSnapshotsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBClustersRequest&, const Model::DescribeDBClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClustersResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBEngineVersionsRequest&, const Model::DescribeDBEngineVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBEngineVersionsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBInstancesRequest&, const Model::DescribeDBInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBInstancesResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBLogFilesRequest&, const Model::DescribeDBLogFilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBLogFilesResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBParameterGroupsRequest&, const Model::DescribeDBParameterGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBParameterGroupsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBParametersRequest&, const Model::DescribeDBParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBParametersResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBSecurityGroupsRequest&, const Model::DescribeDBSecurityGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBSecurityGroupsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBSnapshotAttributesRequest&, const Model::DescribeDBSnapshotAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBSnapshotAttributesResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBSnapshotsRequest&, const Model::DescribeDBSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBSnapshotsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBSubnetGroupsRequest&, const Model::DescribeDBSubnetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBSubnetGroupsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeEngineDefaultClusterParametersRequest&, const Model::DescribeEngineDefaultClusterParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEngineDefaultClusterParametersResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeEngineDefaultParametersRequest&, const Model::DescribeEngineDefaultParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEngineDefaultParametersResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeEventCategoriesRequest&, const Model::DescribeEventCategoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventCategoriesResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeEventSubscriptionsRequest&, const Model::DescribeEventSubscriptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventSubscriptionsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeEventsRequest&, const Model::DescribeEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeOptionGroupOptionsRequest&, const Model::DescribeOptionGroupOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOptionGroupOptionsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeOptionGroupsRequest&, const Model::DescribeOptionGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOptionGroupsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeOrderableDBInstanceOptionsRequest&, const Model::DescribeOrderableDBInstanceOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrderableDBInstanceOptionsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribePendingMaintenanceActionsRequest&, const Model::DescribePendingMaintenanceActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePendingMaintenanceActionsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeReservedDBInstancesRequest&, const Model::DescribeReservedDBInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedDBInstancesResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeReservedDBInstancesOfferingsRequest&, const Model::DescribeReservedDBInstancesOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedDBInstancesOfferingsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DownloadDBLogFilePortionRequest&, const Model::DownloadDBLogFilePortionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DownloadDBLogFilePortionResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::FailoverDBClusterRequest&, const Model::FailoverDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > FailoverDBClusterResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyDBClusterRequest&, const Model::ModifyDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBClusterResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyDBClusterParameterGroupRequest&, const Model::ModifyDBClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyDBClusterSnapshotAttributeRequest&, const Model::ModifyDBClusterSnapshotAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBClusterSnapshotAttributeResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyDBInstanceRequest&, const Model::ModifyDBInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBInstanceResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyDBParameterGroupRequest&, const Model::ModifyDBParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBParameterGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyDBSnapshotAttributeRequest&, const Model::ModifyDBSnapshotAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBSnapshotAttributeResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyDBSubnetGroupRequest&, const Model::ModifyDBSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyEventSubscriptionRequest&, const Model::ModifyEventSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyEventSubscriptionResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyOptionGroupRequest&, const Model::ModifyOptionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyOptionGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::PromoteReadReplicaRequest&, const Model::PromoteReadReplicaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PromoteReadReplicaResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::PurchaseReservedDBInstancesOfferingRequest&, const Model::PurchaseReservedDBInstancesOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurchaseReservedDBInstancesOfferingResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::RebootDBInstanceRequest&, const Model::RebootDBInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootDBInstanceResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::RemoveSourceIdentifierFromSubscriptionRequest&, const Model::RemoveSourceIdentifierFromSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveSourceIdentifierFromSubscriptionResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::RemoveTagsFromResourceRequest&, const Model::RemoveTagsFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsFromResourceResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ResetDBClusterParameterGroupRequest&, const Model::ResetDBClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetDBClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ResetDBParameterGroupRequest&, const Model::ResetDBParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetDBParameterGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::RestoreDBClusterFromSnapshotRequest&, const Model::RestoreDBClusterFromSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreDBClusterFromSnapshotResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::RestoreDBClusterToPointInTimeRequest&, const Model::RestoreDBClusterToPointInTimeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreDBClusterToPointInTimeResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::RestoreDBInstanceFromDBSnapshotRequest&, const Model::RestoreDBInstanceFromDBSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreDBInstanceFromDBSnapshotResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::RestoreDBInstanceToPointInTimeRequest&, const Model::RestoreDBInstanceToPointInTimeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreDBInstanceToPointInTimeResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::RevokeDBSecurityGroupIngressRequest&, const Model::RevokeDBSecurityGroupIngressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeDBSecurityGroupIngressResponseReceivedHandler;

  /**
   * <fullname>Amazon Relational Database Service</fullname> <p>Amazon Relational
   * Database Service (Amazon RDS) is a web service that makes it easier to set up,
   * operate, and scale a relational database in the cloud. It provides
   * cost-efficient, resizeable capacity for an industry-standard relational database
   * and manages common database administration tasks, freeing up developers to focus
   * on what makes their applications and businesses unique.</p> <p>Amazon RDS gives
   * you access to the capabilities of a MySQL, MariaDB, PostgreSQL, Microsoft SQL
   * Server, Oracle, or Amazon Aurora database server. These capabilities mean that
   * the code, applications, and tools you already use today with your existing
   * databases work with Amazon RDS without modification. Amazon RDS automatically
   * backs up your database and maintains the database software that powers your DB
   * instance. Amazon RDS is flexible: you can scale your database instance's compute
   * resources and storage capacity to meet your application's demand. As with all
   * Amazon Web Services, there are no up-front investments, and you pay only for the
   * resources you use.</p> <p>This interface reference for Amazon RDS contains
   * documentation for a programming or command line interface you can use to manage
   * Amazon RDS. Note that Amazon RDS is asynchronous, which means that some
   * interfaces might require techniques such as polling or callback functions to
   * determine when a command has been applied. In this reference, the parameter
   * descriptions indicate whether a command is applied immediately, on the next
   * instance reboot, or during the maintenance window. The reference structure is as
   * follows, and we list following some related topics from the user guide.</p> <p>
   * <b>Amazon RDS API Reference</b> </p> <ul> <li> <p>For the alphabetical list of
   * API actions, see <a
   * href="http://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_Operations.html">API
   * Actions</a>.</p> </li> <li> <p>For the alphabetical list of data types, see <a
   * href="http://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_Types.html">Data
   * Types</a>.</p> </li> <li> <p>For a list of common query parameters, see <a
   * href="http://docs.aws.amazon.com/AmazonRDS/latest/APIReference/CommonParameters.html">Common
   * Parameters</a>.</p> </li> <li> <p>For descriptions of the error codes, see <a
   * href="http://docs.aws.amazon.com/AmazonRDS/latest/APIReference/CommonErrors.html">Common
   * Errors</a>.</p> </li> </ul> <p> <b>Amazon RDS User Guide</b> </p> <ul> <li>
   * <p>For a summary of the Amazon RDS interfaces, see <a
   * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Welcome.html#Welcome.Interfaces">Available
   * RDS Interfaces</a>.</p> </li> <li> <p>For more information about how to use the
   * Query API, see <a
   * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Using_the_Query_API.html">Using
   * the Query API</a>.</p> </li> </ul>
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
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~RDSClient();

        /**
         * <p>Adds a source identifier to an existing RDS event notification
         * subscription.</p>
         */
        virtual Model::AddSourceIdentifierToSubscriptionOutcome AddSourceIdentifierToSubscription(const Model::AddSourceIdentifierToSubscriptionRequest& request) const;

        /**
         * <p>Adds a source identifier to an existing RDS event notification
         * subscription.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddSourceIdentifierToSubscriptionOutcomeCallable AddSourceIdentifierToSubscriptionCallable(const Model::AddSourceIdentifierToSubscriptionRequest& request) const;

        /**
         * <p>Adds a source identifier to an existing RDS event notification
         * subscription.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddSourceIdentifierToSubscriptionAsync(const Model::AddSourceIdentifierToSubscriptionRequest& request, const AddSourceIdentifierToSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds metadata tags to an Amazon RDS resource. These tags can also be used
         * with cost allocation reporting to track cost associated with Amazon RDS
         * resources, or used in a Condition statement in an IAM policy for Amazon RDS.</p>
         * <p>For an overview on tagging Amazon RDS resources, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging
         * Amazon RDS Resources</a>.</p>
         */
        virtual Model::AddTagsToResourceOutcome AddTagsToResource(const Model::AddTagsToResourceRequest& request) const;

        /**
         * <p>Adds metadata tags to an Amazon RDS resource. These tags can also be used
         * with cost allocation reporting to track cost associated with Amazon RDS
         * resources, or used in a Condition statement in an IAM policy for Amazon RDS.</p>
         * <p>For an overview on tagging Amazon RDS resources, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging
         * Amazon RDS Resources</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const Model::AddTagsToResourceRequest& request) const;

        /**
         * <p>Adds metadata tags to an Amazon RDS resource. These tags can also be used
         * with cost allocation reporting to track cost associated with Amazon RDS
         * resources, or used in a Condition statement in an IAM policy for Amazon RDS.</p>
         * <p>For an overview on tagging Amazon RDS resources, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging
         * Amazon RDS Resources</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsToResourceAsync(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Applies a pending maintenance action to a resource (for example, to a DB
         * instance).</p>
         */
        virtual Model::ApplyPendingMaintenanceActionOutcome ApplyPendingMaintenanceAction(const Model::ApplyPendingMaintenanceActionRequest& request) const;

        /**
         * <p>Applies a pending maintenance action to a resource (for example, to a DB
         * instance).</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ApplyPendingMaintenanceActionOutcomeCallable ApplyPendingMaintenanceActionCallable(const Model::ApplyPendingMaintenanceActionRequest& request) const;

        /**
         * <p>Applies a pending maintenance action to a resource (for example, to a DB
         * instance).</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ApplyPendingMaintenanceActionAsync(const Model::ApplyPendingMaintenanceActionRequest& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables ingress to a DBSecurityGroup using one of two forms of authorization.
         * First, EC2 or VPC security groups can be added to the DBSecurityGroup if the
         * application using the database is running on EC2 or VPC instances. Second, IP
         * ranges are available if the application accessing your database is running on
         * the Internet. Required parameters for this API are one of CIDR range,
         * EC2SecurityGroupId for VPC, or (EC2SecurityGroupOwnerId and either
         * EC2SecurityGroupName or EC2SecurityGroupId for non-VPC).</p> <note> <p>You
         * cannot authorize ingress from an EC2 security group in one region to an Amazon
         * RDS DB instance in another. You cannot authorize ingress from a VPC security
         * group in one VPC to an Amazon RDS DB instance in another.</p> </note> <p>For an
         * overview of CIDR ranges, go to the <a
         * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia
         * Tutorial</a>. </p>
         */
        virtual Model::AuthorizeDBSecurityGroupIngressOutcome AuthorizeDBSecurityGroupIngress(const Model::AuthorizeDBSecurityGroupIngressRequest& request) const;

        /**
         * <p>Enables ingress to a DBSecurityGroup using one of two forms of authorization.
         * First, EC2 or VPC security groups can be added to the DBSecurityGroup if the
         * application using the database is running on EC2 or VPC instances. Second, IP
         * ranges are available if the application accessing your database is running on
         * the Internet. Required parameters for this API are one of CIDR range,
         * EC2SecurityGroupId for VPC, or (EC2SecurityGroupOwnerId and either
         * EC2SecurityGroupName or EC2SecurityGroupId for non-VPC).</p> <note> <p>You
         * cannot authorize ingress from an EC2 security group in one region to an Amazon
         * RDS DB instance in another. You cannot authorize ingress from a VPC security
         * group in one VPC to an Amazon RDS DB instance in another.</p> </note> <p>For an
         * overview of CIDR ranges, go to the <a
         * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia
         * Tutorial</a>. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AuthorizeDBSecurityGroupIngressOutcomeCallable AuthorizeDBSecurityGroupIngressCallable(const Model::AuthorizeDBSecurityGroupIngressRequest& request) const;

        /**
         * <p>Enables ingress to a DBSecurityGroup using one of two forms of authorization.
         * First, EC2 or VPC security groups can be added to the DBSecurityGroup if the
         * application using the database is running on EC2 or VPC instances. Second, IP
         * ranges are available if the application accessing your database is running on
         * the Internet. Required parameters for this API are one of CIDR range,
         * EC2SecurityGroupId for VPC, or (EC2SecurityGroupOwnerId and either
         * EC2SecurityGroupName or EC2SecurityGroupId for non-VPC).</p> <note> <p>You
         * cannot authorize ingress from an EC2 security group in one region to an Amazon
         * RDS DB instance in another. You cannot authorize ingress from a VPC security
         * group in one VPC to an Amazon RDS DB instance in another.</p> </note> <p>For an
         * overview of CIDR ranges, go to the <a
         * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia
         * Tutorial</a>. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AuthorizeDBSecurityGroupIngressAsync(const Model::AuthorizeDBSecurityGroupIngressRequest& request, const AuthorizeDBSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a snapshot of a DB cluster. For more information on Amazon Aurora,
         * see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         */
        virtual Model::CopyDBClusterSnapshotOutcome CopyDBClusterSnapshot(const Model::CopyDBClusterSnapshotRequest& request) const;

        /**
         * <p>Creates a snapshot of a DB cluster. For more information on Amazon Aurora,
         * see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyDBClusterSnapshotOutcomeCallable CopyDBClusterSnapshotCallable(const Model::CopyDBClusterSnapshotRequest& request) const;

        /**
         * <p>Creates a snapshot of a DB cluster. For more information on Amazon Aurora,
         * see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyDBClusterSnapshotAsync(const Model::CopyDBClusterSnapshotRequest& request, const CopyDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Copies the specified DB parameter group.</p>
         */
        virtual Model::CopyDBParameterGroupOutcome CopyDBParameterGroup(const Model::CopyDBParameterGroupRequest& request) const;

        /**
         * <p>Copies the specified DB parameter group.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyDBParameterGroupOutcomeCallable CopyDBParameterGroupCallable(const Model::CopyDBParameterGroupRequest& request) const;

        /**
         * <p>Copies the specified DB parameter group.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyDBParameterGroupAsync(const Model::CopyDBParameterGroupRequest& request, const CopyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Copies the specified DB snapshot. The source DB snapshot must be in the
         * "available" state.</p> <p>If you are copying from a shared manual DB snapshot,
         * the <code>SourceDBSnapshotIdentifier</code> must be the ARN of the shared DB
         * snapshot.</p>
         */
        virtual Model::CopyDBSnapshotOutcome CopyDBSnapshot(const Model::CopyDBSnapshotRequest& request) const;

        /**
         * <p>Copies the specified DB snapshot. The source DB snapshot must be in the
         * "available" state.</p> <p>If you are copying from a shared manual DB snapshot,
         * the <code>SourceDBSnapshotIdentifier</code> must be the ARN of the shared DB
         * snapshot.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyDBSnapshotOutcomeCallable CopyDBSnapshotCallable(const Model::CopyDBSnapshotRequest& request) const;

        /**
         * <p>Copies the specified DB snapshot. The source DB snapshot must be in the
         * "available" state.</p> <p>If you are copying from a shared manual DB snapshot,
         * the <code>SourceDBSnapshotIdentifier</code> must be the ARN of the shared DB
         * snapshot.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyDBSnapshotAsync(const Model::CopyDBSnapshotRequest& request, const CopyDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Copies the specified option group.</p>
         */
        virtual Model::CopyOptionGroupOutcome CopyOptionGroup(const Model::CopyOptionGroupRequest& request) const;

        /**
         * <p>Copies the specified option group.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyOptionGroupOutcomeCallable CopyOptionGroupCallable(const Model::CopyOptionGroupRequest& request) const;

        /**
         * <p>Copies the specified option group.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyOptionGroupAsync(const Model::CopyOptionGroupRequest& request, const CopyOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Amazon Aurora DB cluster.</p> <p>You can use the
         * <code>ReplicationSourceIdentifier</code> parameter to create the DB cluster as a
         * Read Replica of another DB cluster.</p> <p>For more information on Amazon
         * Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         */
        virtual Model::CreateDBClusterOutcome CreateDBCluster(const Model::CreateDBClusterRequest& request) const;

        /**
         * <p>Creates a new Amazon Aurora DB cluster.</p> <p>You can use the
         * <code>ReplicationSourceIdentifier</code> parameter to create the DB cluster as a
         * Read Replica of another DB cluster.</p> <p>For more information on Amazon
         * Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBClusterOutcomeCallable CreateDBClusterCallable(const Model::CreateDBClusterRequest& request) const;

        /**
         * <p>Creates a new Amazon Aurora DB cluster.</p> <p>You can use the
         * <code>ReplicationSourceIdentifier</code> parameter to create the DB cluster as a
         * Read Replica of another DB cluster.</p> <p>For more information on Amazon
         * Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBClusterAsync(const Model::CreateDBClusterRequest& request, const CreateDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new DB cluster parameter group.</p> <p>Parameters in a DB cluster
         * parameter group apply to all of the instances in a DB cluster.</p> <p> A DB
         * cluster parameter group is initially created with the default parameters for the
         * database engine used by instances in the DB cluster. To provide custom values
         * for any of the parameters, you must modify the group after creating it using
         * <a>ModifyDBClusterParameterGroup</a>. Once you've created a DB cluster parameter
         * group, you need to associate it with your DB cluster using
         * <a>ModifyDBCluster</a>. When you associate a new DB cluster parameter group with
         * a running DB cluster, you need to reboot the DB instances in the DB cluster
         * without failover for the new DB cluster parameter group and associated settings
         * to take effect. </p> <important> <p>After you create a DB cluster parameter
         * group, you should wait at least 5 minutes before creating your first DB cluster
         * that uses that DB cluster parameter group as the default parameter group. This
         * allows Amazon RDS to fully complete the create action before the DB cluster
         * parameter group is used as the default for a new DB cluster. This is especially
         * important for parameters that are critical when creating the default database
         * for a DB cluster, such as the character set for the default database defined by
         * the <code>character_set_database</code> parameter. You can use the <i>Parameter
         * Groups</i> option of the <a href="https://console.aws.amazon.com/rds/">Amazon
         * RDS console</a> or the <a>DescribeDBClusterParameters</a> command to verify that
         * your DB cluster parameter group has been created or modified.</p> </important>
         * <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         */
        virtual Model::CreateDBClusterParameterGroupOutcome CreateDBClusterParameterGroup(const Model::CreateDBClusterParameterGroupRequest& request) const;

        /**
         * <p>Creates a new DB cluster parameter group.</p> <p>Parameters in a DB cluster
         * parameter group apply to all of the instances in a DB cluster.</p> <p> A DB
         * cluster parameter group is initially created with the default parameters for the
         * database engine used by instances in the DB cluster. To provide custom values
         * for any of the parameters, you must modify the group after creating it using
         * <a>ModifyDBClusterParameterGroup</a>. Once you've created a DB cluster parameter
         * group, you need to associate it with your DB cluster using
         * <a>ModifyDBCluster</a>. When you associate a new DB cluster parameter group with
         * a running DB cluster, you need to reboot the DB instances in the DB cluster
         * without failover for the new DB cluster parameter group and associated settings
         * to take effect. </p> <important> <p>After you create a DB cluster parameter
         * group, you should wait at least 5 minutes before creating your first DB cluster
         * that uses that DB cluster parameter group as the default parameter group. This
         * allows Amazon RDS to fully complete the create action before the DB cluster
         * parameter group is used as the default for a new DB cluster. This is especially
         * important for parameters that are critical when creating the default database
         * for a DB cluster, such as the character set for the default database defined by
         * the <code>character_set_database</code> parameter. You can use the <i>Parameter
         * Groups</i> option of the <a href="https://console.aws.amazon.com/rds/">Amazon
         * RDS console</a> or the <a>DescribeDBClusterParameters</a> command to verify that
         * your DB cluster parameter group has been created or modified.</p> </important>
         * <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBClusterParameterGroupOutcomeCallable CreateDBClusterParameterGroupCallable(const Model::CreateDBClusterParameterGroupRequest& request) const;

        /**
         * <p>Creates a new DB cluster parameter group.</p> <p>Parameters in a DB cluster
         * parameter group apply to all of the instances in a DB cluster.</p> <p> A DB
         * cluster parameter group is initially created with the default parameters for the
         * database engine used by instances in the DB cluster. To provide custom values
         * for any of the parameters, you must modify the group after creating it using
         * <a>ModifyDBClusterParameterGroup</a>. Once you've created a DB cluster parameter
         * group, you need to associate it with your DB cluster using
         * <a>ModifyDBCluster</a>. When you associate a new DB cluster parameter group with
         * a running DB cluster, you need to reboot the DB instances in the DB cluster
         * without failover for the new DB cluster parameter group and associated settings
         * to take effect. </p> <important> <p>After you create a DB cluster parameter
         * group, you should wait at least 5 minutes before creating your first DB cluster
         * that uses that DB cluster parameter group as the default parameter group. This
         * allows Amazon RDS to fully complete the create action before the DB cluster
         * parameter group is used as the default for a new DB cluster. This is especially
         * important for parameters that are critical when creating the default database
         * for a DB cluster, such as the character set for the default database defined by
         * the <code>character_set_database</code> parameter. You can use the <i>Parameter
         * Groups</i> option of the <a href="https://console.aws.amazon.com/rds/">Amazon
         * RDS console</a> or the <a>DescribeDBClusterParameters</a> command to verify that
         * your DB cluster parameter group has been created or modified.</p> </important>
         * <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBClusterParameterGroupAsync(const Model::CreateDBClusterParameterGroupRequest& request, const CreateDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a snapshot of a DB cluster. For more information on Amazon Aurora,
         * see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         */
        virtual Model::CreateDBClusterSnapshotOutcome CreateDBClusterSnapshot(const Model::CreateDBClusterSnapshotRequest& request) const;

        /**
         * <p>Creates a snapshot of a DB cluster. For more information on Amazon Aurora,
         * see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBClusterSnapshotOutcomeCallable CreateDBClusterSnapshotCallable(const Model::CreateDBClusterSnapshotRequest& request) const;

        /**
         * <p>Creates a snapshot of a DB cluster. For more information on Amazon Aurora,
         * see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBClusterSnapshotAsync(const Model::CreateDBClusterSnapshotRequest& request, const CreateDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new DB instance.</p>
         */
        virtual Model::CreateDBInstanceOutcome CreateDBInstance(const Model::CreateDBInstanceRequest& request) const;

        /**
         * <p>Creates a new DB instance.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBInstanceOutcomeCallable CreateDBInstanceCallable(const Model::CreateDBInstanceRequest& request) const;

        /**
         * <p>Creates a new DB instance.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBInstanceAsync(const Model::CreateDBInstanceRequest& request, const CreateDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a DB instance for a DB instance running MySQL, MariaDB, or PostgreSQL
         * that acts as a Read Replica of a source DB instance.</p> <p>All Read Replica DB
         * instances are created as Single-AZ deployments with backups disabled. All other
         * DB instance attributes (including DB security groups and DB parameter groups)
         * are inherited from the source DB instance, except as specified below.</p>
         * <important> <p>The source DB instance must have backup retention enabled.</p>
         * </important>
         */
        virtual Model::CreateDBInstanceReadReplicaOutcome CreateDBInstanceReadReplica(const Model::CreateDBInstanceReadReplicaRequest& request) const;

        /**
         * <p>Creates a DB instance for a DB instance running MySQL, MariaDB, or PostgreSQL
         * that acts as a Read Replica of a source DB instance.</p> <p>All Read Replica DB
         * instances are created as Single-AZ deployments with backups disabled. All other
         * DB instance attributes (including DB security groups and DB parameter groups)
         * are inherited from the source DB instance, except as specified below.</p>
         * <important> <p>The source DB instance must have backup retention enabled.</p>
         * </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBInstanceReadReplicaOutcomeCallable CreateDBInstanceReadReplicaCallable(const Model::CreateDBInstanceReadReplicaRequest& request) const;

        /**
         * <p>Creates a DB instance for a DB instance running MySQL, MariaDB, or PostgreSQL
         * that acts as a Read Replica of a source DB instance.</p> <p>All Read Replica DB
         * instances are created as Single-AZ deployments with backups disabled. All other
         * DB instance attributes (including DB security groups and DB parameter groups)
         * are inherited from the source DB instance, except as specified below.</p>
         * <important> <p>The source DB instance must have backup retention enabled.</p>
         * </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBInstanceReadReplicaAsync(const Model::CreateDBInstanceReadReplicaRequest& request, const CreateDBInstanceReadReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new DB parameter group.</p> <p> A DB parameter group is initially
         * created with the default parameters for the database engine used by the DB
         * instance. To provide custom values for any of the parameters, you must modify
         * the group after creating it using <i>ModifyDBParameterGroup</i>. Once you've
         * created a DB parameter group, you need to associate it with your DB instance
         * using <i>ModifyDBInstance</i>. When you associate a new DB parameter group with
         * a running DB instance, you need to reboot the DB instance without failover for
         * the new DB parameter group and associated settings to take effect. </p>
         * <important> <p>After you create a DB parameter group, you should wait at least 5
         * minutes before creating your first DB instance that uses that DB parameter group
         * as the default parameter group. This allows Amazon RDS to fully complete the
         * create action before the parameter group is used as the default for a new DB
         * instance. This is especially important for parameters that are critical when
         * creating the default database for a DB instance, such as the character set for
         * the default database defined by the <code>character_set_database</code>
         * parameter. You can use the <i>Parameter Groups</i> option of the <a
         * href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the
         * <i>DescribeDBParameters</i> command to verify that your DB parameter group has
         * been created or modified.</p> </important>
         */
        virtual Model::CreateDBParameterGroupOutcome CreateDBParameterGroup(const Model::CreateDBParameterGroupRequest& request) const;

        /**
         * <p>Creates a new DB parameter group.</p> <p> A DB parameter group is initially
         * created with the default parameters for the database engine used by the DB
         * instance. To provide custom values for any of the parameters, you must modify
         * the group after creating it using <i>ModifyDBParameterGroup</i>. Once you've
         * created a DB parameter group, you need to associate it with your DB instance
         * using <i>ModifyDBInstance</i>. When you associate a new DB parameter group with
         * a running DB instance, you need to reboot the DB instance without failover for
         * the new DB parameter group and associated settings to take effect. </p>
         * <important> <p>After you create a DB parameter group, you should wait at least 5
         * minutes before creating your first DB instance that uses that DB parameter group
         * as the default parameter group. This allows Amazon RDS to fully complete the
         * create action before the parameter group is used as the default for a new DB
         * instance. This is especially important for parameters that are critical when
         * creating the default database for a DB instance, such as the character set for
         * the default database defined by the <code>character_set_database</code>
         * parameter. You can use the <i>Parameter Groups</i> option of the <a
         * href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the
         * <i>DescribeDBParameters</i> command to verify that your DB parameter group has
         * been created or modified.</p> </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBParameterGroupOutcomeCallable CreateDBParameterGroupCallable(const Model::CreateDBParameterGroupRequest& request) const;

        /**
         * <p>Creates a new DB parameter group.</p> <p> A DB parameter group is initially
         * created with the default parameters for the database engine used by the DB
         * instance. To provide custom values for any of the parameters, you must modify
         * the group after creating it using <i>ModifyDBParameterGroup</i>. Once you've
         * created a DB parameter group, you need to associate it with your DB instance
         * using <i>ModifyDBInstance</i>. When you associate a new DB parameter group with
         * a running DB instance, you need to reboot the DB instance without failover for
         * the new DB parameter group and associated settings to take effect. </p>
         * <important> <p>After you create a DB parameter group, you should wait at least 5
         * minutes before creating your first DB instance that uses that DB parameter group
         * as the default parameter group. This allows Amazon RDS to fully complete the
         * create action before the parameter group is used as the default for a new DB
         * instance. This is especially important for parameters that are critical when
         * creating the default database for a DB instance, such as the character set for
         * the default database defined by the <code>character_set_database</code>
         * parameter. You can use the <i>Parameter Groups</i> option of the <a
         * href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the
         * <i>DescribeDBParameters</i> command to verify that your DB parameter group has
         * been created or modified.</p> </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBParameterGroupAsync(const Model::CreateDBParameterGroupRequest& request, const CreateDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new DB security group. DB security groups control access to a DB
         * instance.</p>
         */
        virtual Model::CreateDBSecurityGroupOutcome CreateDBSecurityGroup(const Model::CreateDBSecurityGroupRequest& request) const;

        /**
         * <p>Creates a new DB security group. DB security groups control access to a DB
         * instance.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBSecurityGroupOutcomeCallable CreateDBSecurityGroupCallable(const Model::CreateDBSecurityGroupRequest& request) const;

        /**
         * <p>Creates a new DB security group. DB security groups control access to a DB
         * instance.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBSecurityGroupAsync(const Model::CreateDBSecurityGroupRequest& request, const CreateDBSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a DBSnapshot. The source DBInstance must be in "available" state.</p>
         */
        virtual Model::CreateDBSnapshotOutcome CreateDBSnapshot(const Model::CreateDBSnapshotRequest& request) const;

        /**
         * <p>Creates a DBSnapshot. The source DBInstance must be in "available" state.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBSnapshotOutcomeCallable CreateDBSnapshotCallable(const Model::CreateDBSnapshotRequest& request) const;

        /**
         * <p>Creates a DBSnapshot. The source DBInstance must be in "available" state.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBSnapshotAsync(const Model::CreateDBSnapshotRequest& request, const CreateDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new DB subnet group. DB subnet groups must contain at least one
         * subnet in at least two AZs in the region.</p>
         */
        virtual Model::CreateDBSubnetGroupOutcome CreateDBSubnetGroup(const Model::CreateDBSubnetGroupRequest& request) const;

        /**
         * <p>Creates a new DB subnet group. DB subnet groups must contain at least one
         * subnet in at least two AZs in the region.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBSubnetGroupOutcomeCallable CreateDBSubnetGroupCallable(const Model::CreateDBSubnetGroupRequest& request) const;

        /**
         * <p>Creates a new DB subnet group. DB subnet groups must contain at least one
         * subnet in at least two AZs in the region.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBSubnetGroupAsync(const Model::CreateDBSubnetGroupRequest& request, const CreateDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an RDS event notification subscription. This action requires a topic
         * ARN (Amazon Resource Name) created by either the RDS console, the SNS console,
         * or the SNS API. To obtain an ARN with SNS, you must create a topic in Amazon SNS
         * and subscribe to the topic. The ARN is displayed in the SNS console.</p> <p>You
         * can specify the type of source (SourceType) you want to be notified of, provide
         * a list of RDS sources (SourceIds) that triggers the events, and provide a list
         * of event categories (EventCategories) for events you want to be notified of. For
         * example, you can specify SourceType = db-instance, SourceIds = mydbinstance1,
         * mydbinstance2 and EventCategories = Availability, Backup.</p> <p>If you specify
         * both the SourceType and SourceIds, such as SourceType = db-instance and
         * SourceIdentifier = myDBInstance1, you will be notified of all the db-instance
         * events for the specified source. If you specify a SourceType but do not specify
         * a SourceIdentifier, you will receive notice of the events for that source type
         * for all your RDS sources. If you do not specify either the SourceType nor the
         * SourceIdentifier, you will be notified of events generated from all RDS sources
         * belonging to your customer account.</p>
         */
        virtual Model::CreateEventSubscriptionOutcome CreateEventSubscription(const Model::CreateEventSubscriptionRequest& request) const;

        /**
         * <p>Creates an RDS event notification subscription. This action requires a topic
         * ARN (Amazon Resource Name) created by either the RDS console, the SNS console,
         * or the SNS API. To obtain an ARN with SNS, you must create a topic in Amazon SNS
         * and subscribe to the topic. The ARN is displayed in the SNS console.</p> <p>You
         * can specify the type of source (SourceType) you want to be notified of, provide
         * a list of RDS sources (SourceIds) that triggers the events, and provide a list
         * of event categories (EventCategories) for events you want to be notified of. For
         * example, you can specify SourceType = db-instance, SourceIds = mydbinstance1,
         * mydbinstance2 and EventCategories = Availability, Backup.</p> <p>If you specify
         * both the SourceType and SourceIds, such as SourceType = db-instance and
         * SourceIdentifier = myDBInstance1, you will be notified of all the db-instance
         * events for the specified source. If you specify a SourceType but do not specify
         * a SourceIdentifier, you will receive notice of the events for that source type
         * for all your RDS sources. If you do not specify either the SourceType nor the
         * SourceIdentifier, you will be notified of events generated from all RDS sources
         * belonging to your customer account.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEventSubscriptionOutcomeCallable CreateEventSubscriptionCallable(const Model::CreateEventSubscriptionRequest& request) const;

        /**
         * <p>Creates an RDS event notification subscription. This action requires a topic
         * ARN (Amazon Resource Name) created by either the RDS console, the SNS console,
         * or the SNS API. To obtain an ARN with SNS, you must create a topic in Amazon SNS
         * and subscribe to the topic. The ARN is displayed in the SNS console.</p> <p>You
         * can specify the type of source (SourceType) you want to be notified of, provide
         * a list of RDS sources (SourceIds) that triggers the events, and provide a list
         * of event categories (EventCategories) for events you want to be notified of. For
         * example, you can specify SourceType = db-instance, SourceIds = mydbinstance1,
         * mydbinstance2 and EventCategories = Availability, Backup.</p> <p>If you specify
         * both the SourceType and SourceIds, such as SourceType = db-instance and
         * SourceIdentifier = myDBInstance1, you will be notified of all the db-instance
         * events for the specified source. If you specify a SourceType but do not specify
         * a SourceIdentifier, you will receive notice of the events for that source type
         * for all your RDS sources. If you do not specify either the SourceType nor the
         * SourceIdentifier, you will be notified of events generated from all RDS sources
         * belonging to your customer account.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEventSubscriptionAsync(const Model::CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new option group. You can create up to 20 option groups.</p>
         */
        virtual Model::CreateOptionGroupOutcome CreateOptionGroup(const Model::CreateOptionGroupRequest& request) const;

        /**
         * <p>Creates a new option group. You can create up to 20 option groups.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateOptionGroupOutcomeCallable CreateOptionGroupCallable(const Model::CreateOptionGroupRequest& request) const;

        /**
         * <p>Creates a new option group. You can create up to 20 option groups.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateOptionGroupAsync(const Model::CreateOptionGroupRequest& request, const CreateOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The DeleteDBCluster action deletes a previously provisioned DB cluster. When
         * you delete a DB cluster, all automated backups for that DB cluster are deleted
         * and cannot be recovered. Manual DB cluster snapshots of the specified DB cluster
         * are not deleted.</p> <p/> <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         */
        virtual Model::DeleteDBClusterOutcome DeleteDBCluster(const Model::DeleteDBClusterRequest& request) const;

        /**
         * <p>The DeleteDBCluster action deletes a previously provisioned DB cluster. When
         * you delete a DB cluster, all automated backups for that DB cluster are deleted
         * and cannot be recovered. Manual DB cluster snapshots of the specified DB cluster
         * are not deleted.</p> <p/> <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBClusterOutcomeCallable DeleteDBClusterCallable(const Model::DeleteDBClusterRequest& request) const;

        /**
         * <p>The DeleteDBCluster action deletes a previously provisioned DB cluster. When
         * you delete a DB cluster, all automated backups for that DB cluster are deleted
         * and cannot be recovered. Manual DB cluster snapshots of the specified DB cluster
         * are not deleted.</p> <p/> <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBClusterAsync(const Model::DeleteDBClusterRequest& request, const DeleteDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified DB cluster parameter group. The DB cluster parameter
         * group to be deleted cannot be associated with any DB clusters.</p> <p>For more
         * information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         */
        virtual Model::DeleteDBClusterParameterGroupOutcome DeleteDBClusterParameterGroup(const Model::DeleteDBClusterParameterGroupRequest& request) const;

        /**
         * <p>Deletes a specified DB cluster parameter group. The DB cluster parameter
         * group to be deleted cannot be associated with any DB clusters.</p> <p>For more
         * information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBClusterParameterGroupOutcomeCallable DeleteDBClusterParameterGroupCallable(const Model::DeleteDBClusterParameterGroupRequest& request) const;

        /**
         * <p>Deletes a specified DB cluster parameter group. The DB cluster parameter
         * group to be deleted cannot be associated with any DB clusters.</p> <p>For more
         * information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBClusterParameterGroupAsync(const Model::DeleteDBClusterParameterGroupRequest& request, const DeleteDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a DB cluster snapshot. If the snapshot is being copied, the copy
         * operation is terminated.</p> <note> <p>The DB cluster snapshot must be in the
         * <code>available</code> state to be deleted.</p> </note> <p>For more information
         * on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         */
        virtual Model::DeleteDBClusterSnapshotOutcome DeleteDBClusterSnapshot(const Model::DeleteDBClusterSnapshotRequest& request) const;

        /**
         * <p>Deletes a DB cluster snapshot. If the snapshot is being copied, the copy
         * operation is terminated.</p> <note> <p>The DB cluster snapshot must be in the
         * <code>available</code> state to be deleted.</p> </note> <p>For more information
         * on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBClusterSnapshotOutcomeCallable DeleteDBClusterSnapshotCallable(const Model::DeleteDBClusterSnapshotRequest& request) const;

        /**
         * <p>Deletes a DB cluster snapshot. If the snapshot is being copied, the copy
         * operation is terminated.</p> <note> <p>The DB cluster snapshot must be in the
         * <code>available</code> state to be deleted.</p> </note> <p>For more information
         * on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBClusterSnapshotAsync(const Model::DeleteDBClusterSnapshotRequest& request, const DeleteDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The DeleteDBInstance action deletes a previously provisioned DB instance.
         * When you delete a DB instance, all automated backups for that instance are
         * deleted and cannot be recovered. Manual DB snapshots of the DB instance to be
         * deleted are not deleted.</p> <p> If a final DB snapshot is requested the status
         * of the RDS instance will be <code>deleting</code> until the DB snapshot is
         * created. The API action <code>DescribeDBInstance</code> is used to monitor the
         * status of this operation. The action cannot be canceled or reverted once
         * submitted. </p> <p>Note that when a DB instance is in a failure state and has a
         * status of <code>failed</code>, <code>incompatible-restore</code>, or
         * <code>incompatible-network</code>, it can only be deleted when the
         * <code>SkipFinalSnapshot</code> parameter is set to <code>true</code>.</p>
         */
        virtual Model::DeleteDBInstanceOutcome DeleteDBInstance(const Model::DeleteDBInstanceRequest& request) const;

        /**
         * <p>The DeleteDBInstance action deletes a previously provisioned DB instance.
         * When you delete a DB instance, all automated backups for that instance are
         * deleted and cannot be recovered. Manual DB snapshots of the DB instance to be
         * deleted are not deleted.</p> <p> If a final DB snapshot is requested the status
         * of the RDS instance will be <code>deleting</code> until the DB snapshot is
         * created. The API action <code>DescribeDBInstance</code> is used to monitor the
         * status of this operation. The action cannot be canceled or reverted once
         * submitted. </p> <p>Note that when a DB instance is in a failure state and has a
         * status of <code>failed</code>, <code>incompatible-restore</code>, or
         * <code>incompatible-network</code>, it can only be deleted when the
         * <code>SkipFinalSnapshot</code> parameter is set to <code>true</code>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBInstanceOutcomeCallable DeleteDBInstanceCallable(const Model::DeleteDBInstanceRequest& request) const;

        /**
         * <p>The DeleteDBInstance action deletes a previously provisioned DB instance.
         * When you delete a DB instance, all automated backups for that instance are
         * deleted and cannot be recovered. Manual DB snapshots of the DB instance to be
         * deleted are not deleted.</p> <p> If a final DB snapshot is requested the status
         * of the RDS instance will be <code>deleting</code> until the DB snapshot is
         * created. The API action <code>DescribeDBInstance</code> is used to monitor the
         * status of this operation. The action cannot be canceled or reverted once
         * submitted. </p> <p>Note that when a DB instance is in a failure state and has a
         * status of <code>failed</code>, <code>incompatible-restore</code>, or
         * <code>incompatible-network</code>, it can only be deleted when the
         * <code>SkipFinalSnapshot</code> parameter is set to <code>true</code>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBInstanceAsync(const Model::DeleteDBInstanceRequest& request, const DeleteDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified DBParameterGroup. The DBParameterGroup to be deleted
         * cannot be associated with any DB instances.</p>
         */
        virtual Model::DeleteDBParameterGroupOutcome DeleteDBParameterGroup(const Model::DeleteDBParameterGroupRequest& request) const;

        /**
         * <p>Deletes a specified DBParameterGroup. The DBParameterGroup to be deleted
         * cannot be associated with any DB instances.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBParameterGroupOutcomeCallable DeleteDBParameterGroupCallable(const Model::DeleteDBParameterGroupRequest& request) const;

        /**
         * <p>Deletes a specified DBParameterGroup. The DBParameterGroup to be deleted
         * cannot be associated with any DB instances.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBParameterGroupAsync(const Model::DeleteDBParameterGroupRequest& request, const DeleteDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a DB security group.</p> <note> <p>The specified DB security group
         * must not be associated with any DB instances.</p> </note>
         */
        virtual Model::DeleteDBSecurityGroupOutcome DeleteDBSecurityGroup(const Model::DeleteDBSecurityGroupRequest& request) const;

        /**
         * <p>Deletes a DB security group.</p> <note> <p>The specified DB security group
         * must not be associated with any DB instances.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBSecurityGroupOutcomeCallable DeleteDBSecurityGroupCallable(const Model::DeleteDBSecurityGroupRequest& request) const;

        /**
         * <p>Deletes a DB security group.</p> <note> <p>The specified DB security group
         * must not be associated with any DB instances.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBSecurityGroupAsync(const Model::DeleteDBSecurityGroupRequest& request, const DeleteDBSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a DBSnapshot. If the snapshot is being copied, the copy operation is
         * terminated.</p> <note> <p>The DBSnapshot must be in the <code>available</code>
         * state to be deleted.</p> </note>
         */
        virtual Model::DeleteDBSnapshotOutcome DeleteDBSnapshot(const Model::DeleteDBSnapshotRequest& request) const;

        /**
         * <p>Deletes a DBSnapshot. If the snapshot is being copied, the copy operation is
         * terminated.</p> <note> <p>The DBSnapshot must be in the <code>available</code>
         * state to be deleted.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBSnapshotOutcomeCallable DeleteDBSnapshotCallable(const Model::DeleteDBSnapshotRequest& request) const;

        /**
         * <p>Deletes a DBSnapshot. If the snapshot is being copied, the copy operation is
         * terminated.</p> <note> <p>The DBSnapshot must be in the <code>available</code>
         * state to be deleted.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBSnapshotAsync(const Model::DeleteDBSnapshotRequest& request, const DeleteDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a DB subnet group.</p> <note> <p>The specified database subnet group
         * must not be associated with any DB instances.</p> </note>
         */
        virtual Model::DeleteDBSubnetGroupOutcome DeleteDBSubnetGroup(const Model::DeleteDBSubnetGroupRequest& request) const;

        /**
         * <p>Deletes a DB subnet group.</p> <note> <p>The specified database subnet group
         * must not be associated with any DB instances.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBSubnetGroupOutcomeCallable DeleteDBSubnetGroupCallable(const Model::DeleteDBSubnetGroupRequest& request) const;

        /**
         * <p>Deletes a DB subnet group.</p> <note> <p>The specified database subnet group
         * must not be associated with any DB instances.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBSubnetGroupAsync(const Model::DeleteDBSubnetGroupRequest& request, const DeleteDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an RDS event notification subscription.</p>
         */
        virtual Model::DeleteEventSubscriptionOutcome DeleteEventSubscription(const Model::DeleteEventSubscriptionRequest& request) const;

        /**
         * <p>Deletes an RDS event notification subscription.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventSubscriptionOutcomeCallable DeleteEventSubscriptionCallable(const Model::DeleteEventSubscriptionRequest& request) const;

        /**
         * <p>Deletes an RDS event notification subscription.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventSubscriptionAsync(const Model::DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing option group.</p>
         */
        virtual Model::DeleteOptionGroupOutcome DeleteOptionGroup(const Model::DeleteOptionGroupRequest& request) const;

        /**
         * <p>Deletes an existing option group.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteOptionGroupOutcomeCallable DeleteOptionGroupCallable(const Model::DeleteOptionGroupRequest& request) const;

        /**
         * <p>Deletes an existing option group.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteOptionGroupAsync(const Model::DeleteOptionGroupRequest& request, const DeleteOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the attributes for a customer account. The attributes include
         * Amazon RDS quotas for the account, such as the number of DB instances allowed.
         * The description for a quota includes the quota name, current usage toward that
         * quota, and the quota's maximum value.</p> <p>This command does not take any
         * parameters.</p>
         */
        virtual Model::DescribeAccountAttributesOutcome DescribeAccountAttributes(const Model::DescribeAccountAttributesRequest& request) const;

        /**
         * <p>Lists all of the attributes for a customer account. The attributes include
         * Amazon RDS quotas for the account, such as the number of DB instances allowed.
         * The description for a quota includes the quota name, current usage toward that
         * quota, and the quota's maximum value.</p> <p>This command does not take any
         * parameters.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountAttributesOutcomeCallable DescribeAccountAttributesCallable(const Model::DescribeAccountAttributesRequest& request) const;

        /**
         * <p>Lists all of the attributes for a customer account. The attributes include
         * Amazon RDS quotas for the account, such as the number of DB instances allowed.
         * The description for a quota includes the quota name, current usage toward that
         * quota, and the quota's maximum value.</p> <p>This command does not take any
         * parameters.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountAttributesAsync(const Model::DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the set of CA certificates provided by Amazon RDS for this AWS
         * account.</p>
         */
        virtual Model::DescribeCertificatesOutcome DescribeCertificates(const Model::DescribeCertificatesRequest& request) const;

        /**
         * <p>Lists the set of CA certificates provided by Amazon RDS for this AWS
         * account.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCertificatesOutcomeCallable DescribeCertificatesCallable(const Model::DescribeCertificatesRequest& request) const;

        /**
         * <p>Lists the set of CA certificates provided by Amazon RDS for this AWS
         * account.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCertificatesAsync(const Model::DescribeCertificatesRequest& request, const DescribeCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of <code>DBClusterParameterGroup</code> descriptions. If a
         * <code>DBClusterParameterGroupName</code> parameter is specified, the list will
         * contain only the description of the specified DB cluster parameter group. </p>
         * <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         */
        virtual Model::DescribeDBClusterParameterGroupsOutcome DescribeDBClusterParameterGroups(const Model::DescribeDBClusterParameterGroupsRequest& request) const;

        /**
         * <p> Returns a list of <code>DBClusterParameterGroup</code> descriptions. If a
         * <code>DBClusterParameterGroupName</code> parameter is specified, the list will
         * contain only the description of the specified DB cluster parameter group. </p>
         * <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBClusterParameterGroupsOutcomeCallable DescribeDBClusterParameterGroupsCallable(const Model::DescribeDBClusterParameterGroupsRequest& request) const;

        /**
         * <p> Returns a list of <code>DBClusterParameterGroup</code> descriptions. If a
         * <code>DBClusterParameterGroupName</code> parameter is specified, the list will
         * contain only the description of the specified DB cluster parameter group. </p>
         * <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBClusterParameterGroupsAsync(const Model::DescribeDBClusterParameterGroupsRequest& request, const DescribeDBClusterParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the detailed parameter list for a particular DB cluster parameter
         * group.</p> <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         */
        virtual Model::DescribeDBClusterParametersOutcome DescribeDBClusterParameters(const Model::DescribeDBClusterParametersRequest& request) const;

        /**
         * <p>Returns the detailed parameter list for a particular DB cluster parameter
         * group.</p> <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBClusterParametersOutcomeCallable DescribeDBClusterParametersCallable(const Model::DescribeDBClusterParametersRequest& request) const;

        /**
         * <p>Returns the detailed parameter list for a particular DB cluster parameter
         * group.</p> <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBClusterParametersAsync(const Model::DescribeDBClusterParametersRequest& request, const DescribeDBClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of DB cluster snapshot attribute names and values for a manual
         * DB cluster snapshot.</p> <p>When sharing snapshots with other AWS accounts,
         * <code>DescribeDBClusterSnapshotAttributes</code> returns the
         * <code>restore</code> attribute and a list of IDs for the AWS accounts that are
         * authorized to copy or restore the manual DB cluster snapshot. If
         * <code>all</code> is included in the list of values for the <code>restore</code>
         * attribute, then the manual DB cluster snapshot is public and can be copied or
         * restored by all AWS accounts.</p> <p>To add or remove access for an AWS account
         * to copy or restore a manual DB cluster snapshot, or to make the manual DB
         * cluster snapshot public or private, use the
         * <a>ModifyDBClusterSnapshotAttribute</a> API action.</p>
         */
        virtual Model::DescribeDBClusterSnapshotAttributesOutcome DescribeDBClusterSnapshotAttributes(const Model::DescribeDBClusterSnapshotAttributesRequest& request) const;

        /**
         * <p>Returns a list of DB cluster snapshot attribute names and values for a manual
         * DB cluster snapshot.</p> <p>When sharing snapshots with other AWS accounts,
         * <code>DescribeDBClusterSnapshotAttributes</code> returns the
         * <code>restore</code> attribute and a list of IDs for the AWS accounts that are
         * authorized to copy or restore the manual DB cluster snapshot. If
         * <code>all</code> is included in the list of values for the <code>restore</code>
         * attribute, then the manual DB cluster snapshot is public and can be copied or
         * restored by all AWS accounts.</p> <p>To add or remove access for an AWS account
         * to copy or restore a manual DB cluster snapshot, or to make the manual DB
         * cluster snapshot public or private, use the
         * <a>ModifyDBClusterSnapshotAttribute</a> API action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBClusterSnapshotAttributesOutcomeCallable DescribeDBClusterSnapshotAttributesCallable(const Model::DescribeDBClusterSnapshotAttributesRequest& request) const;

        /**
         * <p>Returns a list of DB cluster snapshot attribute names and values for a manual
         * DB cluster snapshot.</p> <p>When sharing snapshots with other AWS accounts,
         * <code>DescribeDBClusterSnapshotAttributes</code> returns the
         * <code>restore</code> attribute and a list of IDs for the AWS accounts that are
         * authorized to copy or restore the manual DB cluster snapshot. If
         * <code>all</code> is included in the list of values for the <code>restore</code>
         * attribute, then the manual DB cluster snapshot is public and can be copied or
         * restored by all AWS accounts.</p> <p>To add or remove access for an AWS account
         * to copy or restore a manual DB cluster snapshot, or to make the manual DB
         * cluster snapshot public or private, use the
         * <a>ModifyDBClusterSnapshotAttribute</a> API action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBClusterSnapshotAttributesAsync(const Model::DescribeDBClusterSnapshotAttributesRequest& request, const DescribeDBClusterSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about DB cluster snapshots. This API action supports
         * pagination.</p> <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         */
        virtual Model::DescribeDBClusterSnapshotsOutcome DescribeDBClusterSnapshots(const Model::DescribeDBClusterSnapshotsRequest& request) const;

        /**
         * <p>Returns information about DB cluster snapshots. This API action supports
         * pagination.</p> <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBClusterSnapshotsOutcomeCallable DescribeDBClusterSnapshotsCallable(const Model::DescribeDBClusterSnapshotsRequest& request) const;

        /**
         * <p>Returns information about DB cluster snapshots. This API action supports
         * pagination.</p> <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBClusterSnapshotsAsync(const Model::DescribeDBClusterSnapshotsRequest& request, const DescribeDBClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about provisioned Aurora DB clusters. This API supports
         * pagination.</p> <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         */
        virtual Model::DescribeDBClustersOutcome DescribeDBClusters(const Model::DescribeDBClustersRequest& request) const;

        /**
         * <p>Returns information about provisioned Aurora DB clusters. This API supports
         * pagination.</p> <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBClustersOutcomeCallable DescribeDBClustersCallable(const Model::DescribeDBClustersRequest& request) const;

        /**
         * <p>Returns information about provisioned Aurora DB clusters. This API supports
         * pagination.</p> <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBClustersAsync(const Model::DescribeDBClustersRequest& request, const DescribeDBClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the available DB engines.</p>
         */
        virtual Model::DescribeDBEngineVersionsOutcome DescribeDBEngineVersions(const Model::DescribeDBEngineVersionsRequest& request) const;

        /**
         * <p>Returns a list of the available DB engines.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBEngineVersionsOutcomeCallable DescribeDBEngineVersionsCallable(const Model::DescribeDBEngineVersionsRequest& request) const;

        /**
         * <p>Returns a list of the available DB engines.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBEngineVersionsAsync(const Model::DescribeDBEngineVersionsRequest& request, const DescribeDBEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about provisioned RDS instances. This API supports
         * pagination.</p>
         */
        virtual Model::DescribeDBInstancesOutcome DescribeDBInstances(const Model::DescribeDBInstancesRequest& request) const;

        /**
         * <p>Returns information about provisioned RDS instances. This API supports
         * pagination.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBInstancesOutcomeCallable DescribeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request) const;

        /**
         * <p>Returns information about provisioned RDS instances. This API supports
         * pagination.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of DB log files for the DB instance.</p>
         */
        virtual Model::DescribeDBLogFilesOutcome DescribeDBLogFiles(const Model::DescribeDBLogFilesRequest& request) const;

        /**
         * <p>Returns a list of DB log files for the DB instance.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBLogFilesOutcomeCallable DescribeDBLogFilesCallable(const Model::DescribeDBLogFilesRequest& request) const;

        /**
         * <p>Returns a list of DB log files for the DB instance.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBLogFilesAsync(const Model::DescribeDBLogFilesRequest& request, const DescribeDBLogFilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of <code>DBParameterGroup</code> descriptions. If a
         * <code>DBParameterGroupName</code> is specified, the list will contain only the
         * description of the specified DB parameter group. </p>
         */
        virtual Model::DescribeDBParameterGroupsOutcome DescribeDBParameterGroups(const Model::DescribeDBParameterGroupsRequest& request) const;

        /**
         * <p> Returns a list of <code>DBParameterGroup</code> descriptions. If a
         * <code>DBParameterGroupName</code> is specified, the list will contain only the
         * description of the specified DB parameter group. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBParameterGroupsOutcomeCallable DescribeDBParameterGroupsCallable(const Model::DescribeDBParameterGroupsRequest& request) const;

        /**
         * <p> Returns a list of <code>DBParameterGroup</code> descriptions. If a
         * <code>DBParameterGroupName</code> is specified, the list will contain only the
         * description of the specified DB parameter group. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBParameterGroupsAsync(const Model::DescribeDBParameterGroupsRequest& request, const DescribeDBParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the detailed parameter list for a particular DB parameter group.</p>
         */
        virtual Model::DescribeDBParametersOutcome DescribeDBParameters(const Model::DescribeDBParametersRequest& request) const;

        /**
         * <p>Returns the detailed parameter list for a particular DB parameter group.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBParametersOutcomeCallable DescribeDBParametersCallable(const Model::DescribeDBParametersRequest& request) const;

        /**
         * <p>Returns the detailed parameter list for a particular DB parameter group.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBParametersAsync(const Model::DescribeDBParametersRequest& request, const DescribeDBParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of <code>DBSecurityGroup</code> descriptions. If a
         * <code>DBSecurityGroupName</code> is specified, the list will contain only the
         * descriptions of the specified DB security group. </p>
         */
        virtual Model::DescribeDBSecurityGroupsOutcome DescribeDBSecurityGroups(const Model::DescribeDBSecurityGroupsRequest& request) const;

        /**
         * <p> Returns a list of <code>DBSecurityGroup</code> descriptions. If a
         * <code>DBSecurityGroupName</code> is specified, the list will contain only the
         * descriptions of the specified DB security group. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBSecurityGroupsOutcomeCallable DescribeDBSecurityGroupsCallable(const Model::DescribeDBSecurityGroupsRequest& request) const;

        /**
         * <p> Returns a list of <code>DBSecurityGroup</code> descriptions. If a
         * <code>DBSecurityGroupName</code> is specified, the list will contain only the
         * descriptions of the specified DB security group. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBSecurityGroupsAsync(const Model::DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of DB snapshot attribute names and values for a manual DB
         * snapshot.</p> <p>When sharing snapshots with other AWS accounts,
         * <code>DescribeDBSnapshotAttributes</code> returns the <code>restore</code>
         * attribute and a list of IDs for the AWS accounts that are authorized to copy or
         * restore the manual DB snapshot. If <code>all</code> is included in the list of
         * values for the <code>restore</code> attribute, then the manual DB snapshot is
         * public and can be copied or restored by all AWS accounts.</p> <p>To add or
         * remove access for an AWS account to copy or restore a manual DB snapshot, or to
         * make the manual DB snapshot public or private, use the
         * <a>ModifyDBSnapshotAttribute</a> API action.</p>
         */
        virtual Model::DescribeDBSnapshotAttributesOutcome DescribeDBSnapshotAttributes(const Model::DescribeDBSnapshotAttributesRequest& request) const;

        /**
         * <p>Returns a list of DB snapshot attribute names and values for a manual DB
         * snapshot.</p> <p>When sharing snapshots with other AWS accounts,
         * <code>DescribeDBSnapshotAttributes</code> returns the <code>restore</code>
         * attribute and a list of IDs for the AWS accounts that are authorized to copy or
         * restore the manual DB snapshot. If <code>all</code> is included in the list of
         * values for the <code>restore</code> attribute, then the manual DB snapshot is
         * public and can be copied or restored by all AWS accounts.</p> <p>To add or
         * remove access for an AWS account to copy or restore a manual DB snapshot, or to
         * make the manual DB snapshot public or private, use the
         * <a>ModifyDBSnapshotAttribute</a> API action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBSnapshotAttributesOutcomeCallable DescribeDBSnapshotAttributesCallable(const Model::DescribeDBSnapshotAttributesRequest& request) const;

        /**
         * <p>Returns a list of DB snapshot attribute names and values for a manual DB
         * snapshot.</p> <p>When sharing snapshots with other AWS accounts,
         * <code>DescribeDBSnapshotAttributes</code> returns the <code>restore</code>
         * attribute and a list of IDs for the AWS accounts that are authorized to copy or
         * restore the manual DB snapshot. If <code>all</code> is included in the list of
         * values for the <code>restore</code> attribute, then the manual DB snapshot is
         * public and can be copied or restored by all AWS accounts.</p> <p>To add or
         * remove access for an AWS account to copy or restore a manual DB snapshot, or to
         * make the manual DB snapshot public or private, use the
         * <a>ModifyDBSnapshotAttribute</a> API action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBSnapshotAttributesAsync(const Model::DescribeDBSnapshotAttributesRequest& request, const DescribeDBSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about DB snapshots. This API action supports
         * pagination.</p>
         */
        virtual Model::DescribeDBSnapshotsOutcome DescribeDBSnapshots(const Model::DescribeDBSnapshotsRequest& request) const;

        /**
         * <p>Returns information about DB snapshots. This API action supports
         * pagination.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBSnapshotsOutcomeCallable DescribeDBSnapshotsCallable(const Model::DescribeDBSnapshotsRequest& request) const;

        /**
         * <p>Returns information about DB snapshots. This API action supports
         * pagination.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBSnapshotsAsync(const Model::DescribeDBSnapshotsRequest& request, const DescribeDBSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of DBSubnetGroup descriptions. If a DBSubnetGroupName is
         * specified, the list will contain only the descriptions of the specified
         * DBSubnetGroup.</p> <p>For an overview of CIDR ranges, go to the <a
         * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia
         * Tutorial</a>. </p>
         */
        virtual Model::DescribeDBSubnetGroupsOutcome DescribeDBSubnetGroups(const Model::DescribeDBSubnetGroupsRequest& request) const;

        /**
         * <p>Returns a list of DBSubnetGroup descriptions. If a DBSubnetGroupName is
         * specified, the list will contain only the descriptions of the specified
         * DBSubnetGroup.</p> <p>For an overview of CIDR ranges, go to the <a
         * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia
         * Tutorial</a>. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBSubnetGroupsOutcomeCallable DescribeDBSubnetGroupsCallable(const Model::DescribeDBSubnetGroupsRequest& request) const;

        /**
         * <p>Returns a list of DBSubnetGroup descriptions. If a DBSubnetGroupName is
         * specified, the list will contain only the descriptions of the specified
         * DBSubnetGroup.</p> <p>For an overview of CIDR ranges, go to the <a
         * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia
         * Tutorial</a>. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBSubnetGroupsAsync(const Model::DescribeDBSubnetGroupsRequest& request, const DescribeDBSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the default engine and system parameter information for the cluster
         * database engine.</p> <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         */
        virtual Model::DescribeEngineDefaultClusterParametersOutcome DescribeEngineDefaultClusterParameters(const Model::DescribeEngineDefaultClusterParametersRequest& request) const;

        /**
         * <p>Returns the default engine and system parameter information for the cluster
         * database engine.</p> <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEngineDefaultClusterParametersOutcomeCallable DescribeEngineDefaultClusterParametersCallable(const Model::DescribeEngineDefaultClusterParametersRequest& request) const;

        /**
         * <p>Returns the default engine and system parameter information for the cluster
         * database engine.</p> <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEngineDefaultClusterParametersAsync(const Model::DescribeEngineDefaultClusterParametersRequest& request, const DescribeEngineDefaultClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the default engine and system parameter information for the specified
         * database engine.</p>
         */
        virtual Model::DescribeEngineDefaultParametersOutcome DescribeEngineDefaultParameters(const Model::DescribeEngineDefaultParametersRequest& request) const;

        /**
         * <p>Returns the default engine and system parameter information for the specified
         * database engine.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEngineDefaultParametersOutcomeCallable DescribeEngineDefaultParametersCallable(const Model::DescribeEngineDefaultParametersRequest& request) const;

        /**
         * <p>Returns the default engine and system parameter information for the specified
         * database engine.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEngineDefaultParametersAsync(const Model::DescribeEngineDefaultParametersRequest& request, const DescribeEngineDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays a list of categories for all event source types, or, if specified,
         * for a specified source type. You can see a list of the event categories and
         * source types in the <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.html">
         * Events</a> topic in the <i>Amazon RDS User Guide.</i> </p>
         */
        virtual Model::DescribeEventCategoriesOutcome DescribeEventCategories(const Model::DescribeEventCategoriesRequest& request) const;

        /**
         * <p>Displays a list of categories for all event source types, or, if specified,
         * for a specified source type. You can see a list of the event categories and
         * source types in the <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.html">
         * Events</a> topic in the <i>Amazon RDS User Guide.</i> </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventCategoriesOutcomeCallable DescribeEventCategoriesCallable(const Model::DescribeEventCategoriesRequest& request) const;

        /**
         * <p>Displays a list of categories for all event source types, or, if specified,
         * for a specified source type. You can see a list of the event categories and
         * source types in the <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.html">
         * Events</a> topic in the <i>Amazon RDS User Guide.</i> </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventCategoriesAsync(const Model::DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the subscription descriptions for a customer account. The
         * description for a subscription includes SubscriptionName, SNSTopicARN,
         * CustomerID, SourceType, SourceID, CreationTime, and Status.</p> <p>If you
         * specify a SubscriptionName, lists the description for that subscription.</p>
         */
        virtual Model::DescribeEventSubscriptionsOutcome DescribeEventSubscriptions(const Model::DescribeEventSubscriptionsRequest& request) const;

        /**
         * <p>Lists all the subscription descriptions for a customer account. The
         * description for a subscription includes SubscriptionName, SNSTopicARN,
         * CustomerID, SourceType, SourceID, CreationTime, and Status.</p> <p>If you
         * specify a SubscriptionName, lists the description for that subscription.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventSubscriptionsOutcomeCallable DescribeEventSubscriptionsCallable(const Model::DescribeEventSubscriptionsRequest& request) const;

        /**
         * <p>Lists all the subscription descriptions for a customer account. The
         * description for a subscription includes SubscriptionName, SNSTopicARN,
         * CustomerID, SourceType, SourceID, CreationTime, and Status.</p> <p>If you
         * specify a SubscriptionName, lists the description for that subscription.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventSubscriptionsAsync(const Model::DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns events related to DB instances, DB security groups, DB snapshots, and
         * DB parameter groups for the past 14 days. Events specific to a particular DB
         * instance, DB security group, database snapshot, or DB parameter group can be
         * obtained by providing the name as a parameter. By default, the past hour of
         * events are returned.</p>
         */
        virtual Model::DescribeEventsOutcome DescribeEvents(const Model::DescribeEventsRequest& request) const;

        /**
         * <p>Returns events related to DB instances, DB security groups, DB snapshots, and
         * DB parameter groups for the past 14 days. Events specific to a particular DB
         * instance, DB security group, database snapshot, or DB parameter group can be
         * obtained by providing the name as a parameter. By default, the past hour of
         * events are returned.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventsOutcomeCallable DescribeEventsCallable(const Model::DescribeEventsRequest& request) const;

        /**
         * <p>Returns events related to DB instances, DB security groups, DB snapshots, and
         * DB parameter groups for the past 14 days. Events specific to a particular DB
         * instance, DB security group, database snapshot, or DB parameter group can be
         * obtained by providing the name as a parameter. By default, the past hour of
         * events are returned.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventsAsync(const Model::DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes all available options.</p>
         */
        virtual Model::DescribeOptionGroupOptionsOutcome DescribeOptionGroupOptions(const Model::DescribeOptionGroupOptionsRequest& request) const;

        /**
         * <p>Describes all available options.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOptionGroupOptionsOutcomeCallable DescribeOptionGroupOptionsCallable(const Model::DescribeOptionGroupOptionsRequest& request) const;

        /**
         * <p>Describes all available options.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOptionGroupOptionsAsync(const Model::DescribeOptionGroupOptionsRequest& request, const DescribeOptionGroupOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the available option groups.</p>
         */
        virtual Model::DescribeOptionGroupsOutcome DescribeOptionGroups(const Model::DescribeOptionGroupsRequest& request) const;

        /**
         * <p>Describes the available option groups.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOptionGroupsOutcomeCallable DescribeOptionGroupsCallable(const Model::DescribeOptionGroupsRequest& request) const;

        /**
         * <p>Describes the available option groups.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOptionGroupsAsync(const Model::DescribeOptionGroupsRequest& request, const DescribeOptionGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of orderable DB instance options for the specified engine.</p>
         */
        virtual Model::DescribeOrderableDBInstanceOptionsOutcome DescribeOrderableDBInstanceOptions(const Model::DescribeOrderableDBInstanceOptionsRequest& request) const;

        /**
         * <p>Returns a list of orderable DB instance options for the specified engine.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOrderableDBInstanceOptionsOutcomeCallable DescribeOrderableDBInstanceOptionsCallable(const Model::DescribeOrderableDBInstanceOptionsRequest& request) const;

        /**
         * <p>Returns a list of orderable DB instance options for the specified engine.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOrderableDBInstanceOptionsAsync(const Model::DescribeOrderableDBInstanceOptionsRequest& request, const DescribeOrderableDBInstanceOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of resources (for example, DB instances) that have at least
         * one pending maintenance action.</p>
         */
        virtual Model::DescribePendingMaintenanceActionsOutcome DescribePendingMaintenanceActions(const Model::DescribePendingMaintenanceActionsRequest& request) const;

        /**
         * <p>Returns a list of resources (for example, DB instances) that have at least
         * one pending maintenance action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePendingMaintenanceActionsOutcomeCallable DescribePendingMaintenanceActionsCallable(const Model::DescribePendingMaintenanceActionsRequest& request) const;

        /**
         * <p>Returns a list of resources (for example, DB instances) that have at least
         * one pending maintenance action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePendingMaintenanceActionsAsync(const Model::DescribePendingMaintenanceActionsRequest& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about reserved DB instances for this account, or about a
         * specified reserved DB instance.</p>
         */
        virtual Model::DescribeReservedDBInstancesOutcome DescribeReservedDBInstances(const Model::DescribeReservedDBInstancesRequest& request) const;

        /**
         * <p>Returns information about reserved DB instances for this account, or about a
         * specified reserved DB instance.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedDBInstancesOutcomeCallable DescribeReservedDBInstancesCallable(const Model::DescribeReservedDBInstancesRequest& request) const;

        /**
         * <p>Returns information about reserved DB instances for this account, or about a
         * specified reserved DB instance.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedDBInstancesAsync(const Model::DescribeReservedDBInstancesRequest& request, const DescribeReservedDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists available reserved DB instance offerings.</p>
         */
        virtual Model::DescribeReservedDBInstancesOfferingsOutcome DescribeReservedDBInstancesOfferings(const Model::DescribeReservedDBInstancesOfferingsRequest& request) const;

        /**
         * <p>Lists available reserved DB instance offerings.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedDBInstancesOfferingsOutcomeCallable DescribeReservedDBInstancesOfferingsCallable(const Model::DescribeReservedDBInstancesOfferingsRequest& request) const;

        /**
         * <p>Lists available reserved DB instance offerings.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedDBInstancesOfferingsAsync(const Model::DescribeReservedDBInstancesOfferingsRequest& request, const DescribeReservedDBInstancesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Downloads all or a portion of the specified log file, up to 1 MB in size.</p>
         */
        virtual Model::DownloadDBLogFilePortionOutcome DownloadDBLogFilePortion(const Model::DownloadDBLogFilePortionRequest& request) const;

        /**
         * <p>Downloads all or a portion of the specified log file, up to 1 MB in size.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DownloadDBLogFilePortionOutcomeCallable DownloadDBLogFilePortionCallable(const Model::DownloadDBLogFilePortionRequest& request) const;

        /**
         * <p>Downloads all or a portion of the specified log file, up to 1 MB in size.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DownloadDBLogFilePortionAsync(const Model::DownloadDBLogFilePortionRequest& request, const DownloadDBLogFilePortionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Forces a failover for a DB cluster.</p> <p>A failover for a DB cluster
         * promotes one of the read-only instances in the DB cluster to the master DB
         * instance (the cluster writer) and deletes the current primary instance.</p>
         * <p>Amazon Aurora will automatically fail over to a read-only instance, if one
         * exists, when the primary instance fails. You can force a failover when you want
         * to simulate a failure of a DB instance for testing. Because each instance in a
         * DB cluster has its own endpoint address, you will need to clean up and
         * re-establish any existing connections that use those endpoint addresses when the
         * failover is complete.</p> <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         */
        virtual Model::FailoverDBClusterOutcome FailoverDBCluster(const Model::FailoverDBClusterRequest& request) const;

        /**
         * <p>Forces a failover for a DB cluster.</p> <p>A failover for a DB cluster
         * promotes one of the read-only instances in the DB cluster to the master DB
         * instance (the cluster writer) and deletes the current primary instance.</p>
         * <p>Amazon Aurora will automatically fail over to a read-only instance, if one
         * exists, when the primary instance fails. You can force a failover when you want
         * to simulate a failure of a DB instance for testing. Because each instance in a
         * DB cluster has its own endpoint address, you will need to clean up and
         * re-establish any existing connections that use those endpoint addresses when the
         * failover is complete.</p> <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::FailoverDBClusterOutcomeCallable FailoverDBClusterCallable(const Model::FailoverDBClusterRequest& request) const;

        /**
         * <p>Forces a failover for a DB cluster.</p> <p>A failover for a DB cluster
         * promotes one of the read-only instances in the DB cluster to the master DB
         * instance (the cluster writer) and deletes the current primary instance.</p>
         * <p>Amazon Aurora will automatically fail over to a read-only instance, if one
         * exists, when the primary instance fails. You can force a failover when you want
         * to simulate a failure of a DB instance for testing. Because each instance in a
         * DB cluster has its own endpoint address, you will need to clean up and
         * re-establish any existing connections that use those endpoint addresses when the
         * failover is complete.</p> <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void FailoverDBClusterAsync(const Model::FailoverDBClusterRequest& request, const FailoverDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all tags on an Amazon RDS resource.</p> <p>For an overview on tagging
         * an Amazon RDS resource, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging
         * Amazon RDS Resources</a>.</p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists all tags on an Amazon RDS resource.</p> <p>For an overview on tagging
         * an Amazon RDS resource, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging
         * Amazon RDS Resources</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists all tags on an Amazon RDS resource.</p> <p>For an overview on tagging
         * an Amazon RDS resource, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging
         * Amazon RDS Resources</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modify a setting for an Amazon Aurora DB cluster. You can change one or more
         * database configuration parameters by specifying these parameters and the new
         * values in the request. For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         */
        virtual Model::ModifyDBClusterOutcome ModifyDBCluster(const Model::ModifyDBClusterRequest& request) const;

        /**
         * <p>Modify a setting for an Amazon Aurora DB cluster. You can change one or more
         * database configuration parameters by specifying these parameters and the new
         * values in the request. For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBClusterOutcomeCallable ModifyDBClusterCallable(const Model::ModifyDBClusterRequest& request) const;

        /**
         * <p>Modify a setting for an Amazon Aurora DB cluster. You can change one or more
         * database configuration parameters by specifying these parameters and the new
         * values in the request. For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBClusterAsync(const Model::ModifyDBClusterRequest& request, const ModifyDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Modifies the parameters of a DB cluster parameter group. To modify more than
         * one parameter, submit a list of the following: <code>ParameterName</code>,
         * <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20
         * parameters can be modified in a single request. </p> <p>For more information on
         * Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p> <note> <p>Changes to
         * dynamic parameters are applied immediately. Changes to static parameters require
         * a reboot without failover to the DB cluster associated with the parameter group
         * before the change can take effect.</p> </note> <important> <p>After you create a
         * DB cluster parameter group, you should wait at least 5 minutes before creating
         * your first DB cluster that uses that DB cluster parameter group as the default
         * parameter group. This allows Amazon RDS to fully complete the create action
         * before the parameter group is used as the default for a new DB cluster. This is
         * especially important for parameters that are critical when creating the default
         * database for a DB cluster, such as the character set for the default database
         * defined by the <code>character_set_database</code> parameter. You can use the
         * <i>Parameter Groups</i> option of the <a
         * href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the
         * <a>DescribeDBClusterParameters</a> command to verify that your DB cluster
         * parameter group has been created or modified.</p> </important>
         */
        virtual Model::ModifyDBClusterParameterGroupOutcome ModifyDBClusterParameterGroup(const Model::ModifyDBClusterParameterGroupRequest& request) const;

        /**
         * <p> Modifies the parameters of a DB cluster parameter group. To modify more than
         * one parameter, submit a list of the following: <code>ParameterName</code>,
         * <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20
         * parameters can be modified in a single request. </p> <p>For more information on
         * Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p> <note> <p>Changes to
         * dynamic parameters are applied immediately. Changes to static parameters require
         * a reboot without failover to the DB cluster associated with the parameter group
         * before the change can take effect.</p> </note> <important> <p>After you create a
         * DB cluster parameter group, you should wait at least 5 minutes before creating
         * your first DB cluster that uses that DB cluster parameter group as the default
         * parameter group. This allows Amazon RDS to fully complete the create action
         * before the parameter group is used as the default for a new DB cluster. This is
         * especially important for parameters that are critical when creating the default
         * database for a DB cluster, such as the character set for the default database
         * defined by the <code>character_set_database</code> parameter. You can use the
         * <i>Parameter Groups</i> option of the <a
         * href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the
         * <a>DescribeDBClusterParameters</a> command to verify that your DB cluster
         * parameter group has been created or modified.</p> </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBClusterParameterGroupOutcomeCallable ModifyDBClusterParameterGroupCallable(const Model::ModifyDBClusterParameterGroupRequest& request) const;

        /**
         * <p> Modifies the parameters of a DB cluster parameter group. To modify more than
         * one parameter, submit a list of the following: <code>ParameterName</code>,
         * <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20
         * parameters can be modified in a single request. </p> <p>For more information on
         * Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p> <note> <p>Changes to
         * dynamic parameters are applied immediately. Changes to static parameters require
         * a reboot without failover to the DB cluster associated with the parameter group
         * before the change can take effect.</p> </note> <important> <p>After you create a
         * DB cluster parameter group, you should wait at least 5 minutes before creating
         * your first DB cluster that uses that DB cluster parameter group as the default
         * parameter group. This allows Amazon RDS to fully complete the create action
         * before the parameter group is used as the default for a new DB cluster. This is
         * especially important for parameters that are critical when creating the default
         * database for a DB cluster, such as the character set for the default database
         * defined by the <code>character_set_database</code> parameter. You can use the
         * <i>Parameter Groups</i> option of the <a
         * href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the
         * <a>DescribeDBClusterParameters</a> command to verify that your DB cluster
         * parameter group has been created or modified.</p> </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBClusterParameterGroupAsync(const Model::ModifyDBClusterParameterGroupRequest& request, const ModifyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds an attribute and values to, or removes an attribute and values from, a
         * manual DB cluster snapshot.</p> <p>To share a manual DB cluster snapshot with
         * other AWS accounts, specify <code>restore</code> as the
         * <code>AttributeName</code> and use the <code>ValuesToAdd</code> parameter to add
         * a list of IDs of the AWS accounts that are authorized to restore the manual DB
         * cluster snapshot. Use the value <code>all</code> to make the manual DB cluster
         * snapshot public, which means that it can be copied or restored by all AWS
         * accounts. Do not add the <code>all</code> value for any manual DB cluster
         * snapshots that contain private information that you don't want available to all
         * AWS accounts.</p> <p>To view which AWS accounts have access to copy or restore a
         * manual DB cluster snapshot, or whether a manual DB cluster snapshot public or
         * private, use the <a>DescribeDBClusterSnapshotAttributes</a> API action.</p>
         * <p>If a manual DB cluster snapshot is encrypted, it cannot be shared.</p>
         */
        virtual Model::ModifyDBClusterSnapshotAttributeOutcome ModifyDBClusterSnapshotAttribute(const Model::ModifyDBClusterSnapshotAttributeRequest& request) const;

        /**
         * <p>Adds an attribute and values to, or removes an attribute and values from, a
         * manual DB cluster snapshot.</p> <p>To share a manual DB cluster snapshot with
         * other AWS accounts, specify <code>restore</code> as the
         * <code>AttributeName</code> and use the <code>ValuesToAdd</code> parameter to add
         * a list of IDs of the AWS accounts that are authorized to restore the manual DB
         * cluster snapshot. Use the value <code>all</code> to make the manual DB cluster
         * snapshot public, which means that it can be copied or restored by all AWS
         * accounts. Do not add the <code>all</code> value for any manual DB cluster
         * snapshots that contain private information that you don't want available to all
         * AWS accounts.</p> <p>To view which AWS accounts have access to copy or restore a
         * manual DB cluster snapshot, or whether a manual DB cluster snapshot public or
         * private, use the <a>DescribeDBClusterSnapshotAttributes</a> API action.</p>
         * <p>If a manual DB cluster snapshot is encrypted, it cannot be shared.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBClusterSnapshotAttributeOutcomeCallable ModifyDBClusterSnapshotAttributeCallable(const Model::ModifyDBClusterSnapshotAttributeRequest& request) const;

        /**
         * <p>Adds an attribute and values to, or removes an attribute and values from, a
         * manual DB cluster snapshot.</p> <p>To share a manual DB cluster snapshot with
         * other AWS accounts, specify <code>restore</code> as the
         * <code>AttributeName</code> and use the <code>ValuesToAdd</code> parameter to add
         * a list of IDs of the AWS accounts that are authorized to restore the manual DB
         * cluster snapshot. Use the value <code>all</code> to make the manual DB cluster
         * snapshot public, which means that it can be copied or restored by all AWS
         * accounts. Do not add the <code>all</code> value for any manual DB cluster
         * snapshots that contain private information that you don't want available to all
         * AWS accounts.</p> <p>To view which AWS accounts have access to copy or restore a
         * manual DB cluster snapshot, or whether a manual DB cluster snapshot public or
         * private, use the <a>DescribeDBClusterSnapshotAttributes</a> API action.</p>
         * <p>If a manual DB cluster snapshot is encrypted, it cannot be shared.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBClusterSnapshotAttributeAsync(const Model::ModifyDBClusterSnapshotAttributeRequest& request, const ModifyDBClusterSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modify settings for a DB instance. You can change one or more database
         * configuration parameters by specifying these parameters and the new values in
         * the request.</p>
         */
        virtual Model::ModifyDBInstanceOutcome ModifyDBInstance(const Model::ModifyDBInstanceRequest& request) const;

        /**
         * <p>Modify settings for a DB instance. You can change one or more database
         * configuration parameters by specifying these parameters and the new values in
         * the request.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBInstanceOutcomeCallable ModifyDBInstanceCallable(const Model::ModifyDBInstanceRequest& request) const;

        /**
         * <p>Modify settings for a DB instance. You can change one or more database
         * configuration parameters by specifying these parameters and the new values in
         * the request.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBInstanceAsync(const Model::ModifyDBInstanceRequest& request, const ModifyDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Modifies the parameters of a DB parameter group. To modify more than one
         * parameter, submit a list of the following: <code>ParameterName</code>,
         * <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20
         * parameters can be modified in a single request. </p> <note> <p>Changes to
         * dynamic parameters are applied immediately. Changes to static parameters require
         * a reboot without failover to the DB instance associated with the parameter group
         * before the change can take effect.</p> </note> <important> <p>After you modify a
         * DB parameter group, you should wait at least 5 minutes before creating your
         * first DB instance that uses that DB parameter group as the default parameter
         * group. This allows Amazon RDS to fully complete the modify action before the
         * parameter group is used as the default for a new DB instance. This is especially
         * important for parameters that are critical when creating the default database
         * for a DB instance, such as the character set for the default database defined by
         * the <code>character_set_database</code> parameter. You can use the <i>Parameter
         * Groups</i> option of the <a href="https://console.aws.amazon.com/rds/">Amazon
         * RDS console</a> or the <i>DescribeDBParameters</i> command to verify that your
         * DB parameter group has been created or modified.</p> </important>
         */
        virtual Model::ModifyDBParameterGroupOutcome ModifyDBParameterGroup(const Model::ModifyDBParameterGroupRequest& request) const;

        /**
         * <p> Modifies the parameters of a DB parameter group. To modify more than one
         * parameter, submit a list of the following: <code>ParameterName</code>,
         * <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20
         * parameters can be modified in a single request. </p> <note> <p>Changes to
         * dynamic parameters are applied immediately. Changes to static parameters require
         * a reboot without failover to the DB instance associated with the parameter group
         * before the change can take effect.</p> </note> <important> <p>After you modify a
         * DB parameter group, you should wait at least 5 minutes before creating your
         * first DB instance that uses that DB parameter group as the default parameter
         * group. This allows Amazon RDS to fully complete the modify action before the
         * parameter group is used as the default for a new DB instance. This is especially
         * important for parameters that are critical when creating the default database
         * for a DB instance, such as the character set for the default database defined by
         * the <code>character_set_database</code> parameter. You can use the <i>Parameter
         * Groups</i> option of the <a href="https://console.aws.amazon.com/rds/">Amazon
         * RDS console</a> or the <i>DescribeDBParameters</i> command to verify that your
         * DB parameter group has been created or modified.</p> </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBParameterGroupOutcomeCallable ModifyDBParameterGroupCallable(const Model::ModifyDBParameterGroupRequest& request) const;

        /**
         * <p> Modifies the parameters of a DB parameter group. To modify more than one
         * parameter, submit a list of the following: <code>ParameterName</code>,
         * <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20
         * parameters can be modified in a single request. </p> <note> <p>Changes to
         * dynamic parameters are applied immediately. Changes to static parameters require
         * a reboot without failover to the DB instance associated with the parameter group
         * before the change can take effect.</p> </note> <important> <p>After you modify a
         * DB parameter group, you should wait at least 5 minutes before creating your
         * first DB instance that uses that DB parameter group as the default parameter
         * group. This allows Amazon RDS to fully complete the modify action before the
         * parameter group is used as the default for a new DB instance. This is especially
         * important for parameters that are critical when creating the default database
         * for a DB instance, such as the character set for the default database defined by
         * the <code>character_set_database</code> parameter. You can use the <i>Parameter
         * Groups</i> option of the <a href="https://console.aws.amazon.com/rds/">Amazon
         * RDS console</a> or the <i>DescribeDBParameters</i> command to verify that your
         * DB parameter group has been created or modified.</p> </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBParameterGroupAsync(const Model::ModifyDBParameterGroupRequest& request, const ModifyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds an attribute and values to, or removes an attribute and values from, a
         * manual DB snapshot.</p> <p>To share a manual DB snapshot with other AWS
         * accounts, specify <code>restore</code> as the <code>AttributeName</code> and use
         * the <code>ValuesToAdd</code> parameter to add a list of IDs of the AWS accounts
         * that are authorized to restore the manual DB snapshot. Uses the value
         * <code>all</code> to make the manual DB snapshot public, which means it can be
         * copied or restored by all AWS accounts. Do not add the <code>all</code> value
         * for any manual DB snapshots that contain private information that you don't want
         * available to all AWS accounts.</p> <p>To view which AWS accounts have access to
         * copy or restore a manual DB snapshot, or whether a manual DB snapshot public or
         * private, use the <a>DescribeDBSnapshotAttributes</a> API action.</p> <p>If the
         * manual DB snapshot is encrypted, it cannot be shared.</p>
         */
        virtual Model::ModifyDBSnapshotAttributeOutcome ModifyDBSnapshotAttribute(const Model::ModifyDBSnapshotAttributeRequest& request) const;

        /**
         * <p>Adds an attribute and values to, or removes an attribute and values from, a
         * manual DB snapshot.</p> <p>To share a manual DB snapshot with other AWS
         * accounts, specify <code>restore</code> as the <code>AttributeName</code> and use
         * the <code>ValuesToAdd</code> parameter to add a list of IDs of the AWS accounts
         * that are authorized to restore the manual DB snapshot. Uses the value
         * <code>all</code> to make the manual DB snapshot public, which means it can be
         * copied or restored by all AWS accounts. Do not add the <code>all</code> value
         * for any manual DB snapshots that contain private information that you don't want
         * available to all AWS accounts.</p> <p>To view which AWS accounts have access to
         * copy or restore a manual DB snapshot, or whether a manual DB snapshot public or
         * private, use the <a>DescribeDBSnapshotAttributes</a> API action.</p> <p>If the
         * manual DB snapshot is encrypted, it cannot be shared.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBSnapshotAttributeOutcomeCallable ModifyDBSnapshotAttributeCallable(const Model::ModifyDBSnapshotAttributeRequest& request) const;

        /**
         * <p>Adds an attribute and values to, or removes an attribute and values from, a
         * manual DB snapshot.</p> <p>To share a manual DB snapshot with other AWS
         * accounts, specify <code>restore</code> as the <code>AttributeName</code> and use
         * the <code>ValuesToAdd</code> parameter to add a list of IDs of the AWS accounts
         * that are authorized to restore the manual DB snapshot. Uses the value
         * <code>all</code> to make the manual DB snapshot public, which means it can be
         * copied or restored by all AWS accounts. Do not add the <code>all</code> value
         * for any manual DB snapshots that contain private information that you don't want
         * available to all AWS accounts.</p> <p>To view which AWS accounts have access to
         * copy or restore a manual DB snapshot, or whether a manual DB snapshot public or
         * private, use the <a>DescribeDBSnapshotAttributes</a> API action.</p> <p>If the
         * manual DB snapshot is encrypted, it cannot be shared.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBSnapshotAttributeAsync(const Model::ModifyDBSnapshotAttributeRequest& request, const ModifyDBSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies an existing DB subnet group. DB subnet groups must contain at least
         * one subnet in at least two AZs in the region.</p>
         */
        virtual Model::ModifyDBSubnetGroupOutcome ModifyDBSubnetGroup(const Model::ModifyDBSubnetGroupRequest& request) const;

        /**
         * <p>Modifies an existing DB subnet group. DB subnet groups must contain at least
         * one subnet in at least two AZs in the region.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBSubnetGroupOutcomeCallable ModifyDBSubnetGroupCallable(const Model::ModifyDBSubnetGroupRequest& request) const;

        /**
         * <p>Modifies an existing DB subnet group. DB subnet groups must contain at least
         * one subnet in at least two AZs in the region.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBSubnetGroupAsync(const Model::ModifyDBSubnetGroupRequest& request, const ModifyDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies an existing RDS event notification subscription. Note that you
         * cannot modify the source identifiers using this call; to change source
         * identifiers for a subscription, use the <a>AddSourceIdentifierToSubscription</a>
         * and <a>RemoveSourceIdentifierFromSubscription</a> calls.</p> <p>You can see a
         * list of the event categories for a given SourceType in the <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.html">Events</a>
         * topic in the Amazon RDS User Guide or by using the
         * <b>DescribeEventCategories</b> action.</p>
         */
        virtual Model::ModifyEventSubscriptionOutcome ModifyEventSubscription(const Model::ModifyEventSubscriptionRequest& request) const;

        /**
         * <p>Modifies an existing RDS event notification subscription. Note that you
         * cannot modify the source identifiers using this call; to change source
         * identifiers for a subscription, use the <a>AddSourceIdentifierToSubscription</a>
         * and <a>RemoveSourceIdentifierFromSubscription</a> calls.</p> <p>You can see a
         * list of the event categories for a given SourceType in the <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.html">Events</a>
         * topic in the Amazon RDS User Guide or by using the
         * <b>DescribeEventCategories</b> action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyEventSubscriptionOutcomeCallable ModifyEventSubscriptionCallable(const Model::ModifyEventSubscriptionRequest& request) const;

        /**
         * <p>Modifies an existing RDS event notification subscription. Note that you
         * cannot modify the source identifiers using this call; to change source
         * identifiers for a subscription, use the <a>AddSourceIdentifierToSubscription</a>
         * and <a>RemoveSourceIdentifierFromSubscription</a> calls.</p> <p>You can see a
         * list of the event categories for a given SourceType in the <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.html">Events</a>
         * topic in the Amazon RDS User Guide or by using the
         * <b>DescribeEventCategories</b> action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyEventSubscriptionAsync(const Model::ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies an existing option group.</p>
         */
        virtual Model::ModifyOptionGroupOutcome ModifyOptionGroup(const Model::ModifyOptionGroupRequest& request) const;

        /**
         * <p>Modifies an existing option group.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyOptionGroupOutcomeCallable ModifyOptionGroupCallable(const Model::ModifyOptionGroupRequest& request) const;

        /**
         * <p>Modifies an existing option group.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyOptionGroupAsync(const Model::ModifyOptionGroupRequest& request, const ModifyOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Promotes a Read Replica DB instance to a standalone DB instance.</p> <note>
         * <p>We recommend that you enable automated backups on your Read Replica before
         * promoting the Read Replica. This ensures that no backup is taken during the
         * promotion process. Once the instance is promoted to a primary instance, backups
         * are taken based on your backup settings.</p> </note>
         */
        virtual Model::PromoteReadReplicaOutcome PromoteReadReplica(const Model::PromoteReadReplicaRequest& request) const;

        /**
         * <p>Promotes a Read Replica DB instance to a standalone DB instance.</p> <note>
         * <p>We recommend that you enable automated backups on your Read Replica before
         * promoting the Read Replica. This ensures that no backup is taken during the
         * promotion process. Once the instance is promoted to a primary instance, backups
         * are taken based on your backup settings.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PromoteReadReplicaOutcomeCallable PromoteReadReplicaCallable(const Model::PromoteReadReplicaRequest& request) const;

        /**
         * <p>Promotes a Read Replica DB instance to a standalone DB instance.</p> <note>
         * <p>We recommend that you enable automated backups on your Read Replica before
         * promoting the Read Replica. This ensures that no backup is taken during the
         * promotion process. Once the instance is promoted to a primary instance, backups
         * are taken based on your backup settings.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PromoteReadReplicaAsync(const Model::PromoteReadReplicaRequest& request, const PromoteReadReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Purchases a reserved DB instance offering.</p>
         */
        virtual Model::PurchaseReservedDBInstancesOfferingOutcome PurchaseReservedDBInstancesOffering(const Model::PurchaseReservedDBInstancesOfferingRequest& request) const;

        /**
         * <p>Purchases a reserved DB instance offering.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PurchaseReservedDBInstancesOfferingOutcomeCallable PurchaseReservedDBInstancesOfferingCallable(const Model::PurchaseReservedDBInstancesOfferingRequest& request) const;

        /**
         * <p>Purchases a reserved DB instance offering.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PurchaseReservedDBInstancesOfferingAsync(const Model::PurchaseReservedDBInstancesOfferingRequest& request, const PurchaseReservedDBInstancesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Rebooting a DB instance restarts the database engine service. A reboot also
         * applies to the DB instance any modifications to the associated DB parameter
         * group that were pending. Rebooting a DB instance results in a momentary outage
         * of the instance, during which the DB instance status is set to rebooting. If the
         * RDS instance is configured for MultiAZ, it is possible that the reboot will be
         * conducted through a failover. An Amazon RDS event is created when the reboot is
         * completed.</p> <p>If your DB instance is deployed in multiple Availability
         * Zones, you can force a failover from one AZ to the other during the reboot. You
         * might force a failover to test the availability of your DB instance deployment
         * or to restore operations to the original AZ after a failover occurs.</p> <p>The
         * time required to reboot is a function of the specific database engine's crash
         * recovery process. To improve the reboot time, we recommend that you reduce
         * database activities as much as possible during the reboot process to reduce
         * rollback activity for in-transit transactions.</p>
         */
        virtual Model::RebootDBInstanceOutcome RebootDBInstance(const Model::RebootDBInstanceRequest& request) const;

        /**
         * <p>Rebooting a DB instance restarts the database engine service. A reboot also
         * applies to the DB instance any modifications to the associated DB parameter
         * group that were pending. Rebooting a DB instance results in a momentary outage
         * of the instance, during which the DB instance status is set to rebooting. If the
         * RDS instance is configured for MultiAZ, it is possible that the reboot will be
         * conducted through a failover. An Amazon RDS event is created when the reboot is
         * completed.</p> <p>If your DB instance is deployed in multiple Availability
         * Zones, you can force a failover from one AZ to the other during the reboot. You
         * might force a failover to test the availability of your DB instance deployment
         * or to restore operations to the original AZ after a failover occurs.</p> <p>The
         * time required to reboot is a function of the specific database engine's crash
         * recovery process. To improve the reboot time, we recommend that you reduce
         * database activities as much as possible during the reboot process to reduce
         * rollback activity for in-transit transactions.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RebootDBInstanceOutcomeCallable RebootDBInstanceCallable(const Model::RebootDBInstanceRequest& request) const;

        /**
         * <p>Rebooting a DB instance restarts the database engine service. A reboot also
         * applies to the DB instance any modifications to the associated DB parameter
         * group that were pending. Rebooting a DB instance results in a momentary outage
         * of the instance, during which the DB instance status is set to rebooting. If the
         * RDS instance is configured for MultiAZ, it is possible that the reboot will be
         * conducted through a failover. An Amazon RDS event is created when the reboot is
         * completed.</p> <p>If your DB instance is deployed in multiple Availability
         * Zones, you can force a failover from one AZ to the other during the reboot. You
         * might force a failover to test the availability of your DB instance deployment
         * or to restore operations to the original AZ after a failover occurs.</p> <p>The
         * time required to reboot is a function of the specific database engine's crash
         * recovery process. To improve the reboot time, we recommend that you reduce
         * database activities as much as possible during the reboot process to reduce
         * rollback activity for in-transit transactions.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebootDBInstanceAsync(const Model::RebootDBInstanceRequest& request, const RebootDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a source identifier from an existing RDS event notification
         * subscription.</p>
         */
        virtual Model::RemoveSourceIdentifierFromSubscriptionOutcome RemoveSourceIdentifierFromSubscription(const Model::RemoveSourceIdentifierFromSubscriptionRequest& request) const;

        /**
         * <p>Removes a source identifier from an existing RDS event notification
         * subscription.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveSourceIdentifierFromSubscriptionOutcomeCallable RemoveSourceIdentifierFromSubscriptionCallable(const Model::RemoveSourceIdentifierFromSubscriptionRequest& request) const;

        /**
         * <p>Removes a source identifier from an existing RDS event notification
         * subscription.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveSourceIdentifierFromSubscriptionAsync(const Model::RemoveSourceIdentifierFromSubscriptionRequest& request, const RemoveSourceIdentifierFromSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes metadata tags from an Amazon RDS resource.</p> <p>For an overview on
         * tagging an Amazon RDS resource, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging
         * Amazon RDS Resources</a>.</p>
         */
        virtual Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * <p>Removes metadata tags from an Amazon RDS resource.</p> <p>For an overview on
         * tagging an Amazon RDS resource, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging
         * Amazon RDS Resources</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * <p>Removes metadata tags from an Amazon RDS resource.</p> <p>For an overview on
         * tagging an Amazon RDS resource, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging
         * Amazon RDS Resources</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsFromResourceAsync(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Modifies the parameters of a DB cluster parameter group to the default
         * value. To reset specific parameters submit a list of the following:
         * <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB
         * cluster parameter group, specify the <code>DBClusterParameterGroupName</code>
         * and <code>ResetAllParameters</code> parameters. </p> <p> When resetting the
         * entire group, dynamic parameters are updated immediately and static parameters
         * are set to <code>pending-reboot</code> to take effect on the next DB instance
         * restart or <a>RebootDBInstance</a> request. You must call
         * <a>RebootDBInstance</a> for every DB instance in your DB cluster that you want
         * the updated static parameter to apply to.</p> <p>For more information on Amazon
         * Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         */
        virtual Model::ResetDBClusterParameterGroupOutcome ResetDBClusterParameterGroup(const Model::ResetDBClusterParameterGroupRequest& request) const;

        /**
         * <p> Modifies the parameters of a DB cluster parameter group to the default
         * value. To reset specific parameters submit a list of the following:
         * <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB
         * cluster parameter group, specify the <code>DBClusterParameterGroupName</code>
         * and <code>ResetAllParameters</code> parameters. </p> <p> When resetting the
         * entire group, dynamic parameters are updated immediately and static parameters
         * are set to <code>pending-reboot</code> to take effect on the next DB instance
         * restart or <a>RebootDBInstance</a> request. You must call
         * <a>RebootDBInstance</a> for every DB instance in your DB cluster that you want
         * the updated static parameter to apply to.</p> <p>For more information on Amazon
         * Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetDBClusterParameterGroupOutcomeCallable ResetDBClusterParameterGroupCallable(const Model::ResetDBClusterParameterGroupRequest& request) const;

        /**
         * <p> Modifies the parameters of a DB cluster parameter group to the default
         * value. To reset specific parameters submit a list of the following:
         * <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB
         * cluster parameter group, specify the <code>DBClusterParameterGroupName</code>
         * and <code>ResetAllParameters</code> parameters. </p> <p> When resetting the
         * entire group, dynamic parameters are updated immediately and static parameters
         * are set to <code>pending-reboot</code> to take effect on the next DB instance
         * restart or <a>RebootDBInstance</a> request. You must call
         * <a>RebootDBInstance</a> for every DB instance in your DB cluster that you want
         * the updated static parameter to apply to.</p> <p>For more information on Amazon
         * Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetDBClusterParameterGroupAsync(const Model::ResetDBClusterParameterGroupRequest& request, const ResetDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Modifies the parameters of a DB parameter group to the engine/system default
         * value. To reset specific parameters submit a list of the following:
         * <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB
         * parameter group, specify the <code>DBParameterGroup</code> name and
         * <code>ResetAllParameters</code> parameters. When resetting the entire group,
         * dynamic parameters are updated immediately and static parameters are set to
         * <code>pending-reboot</code> to take effect on the next DB instance restart or
         * <code>RebootDBInstance</code> request. </p>
         */
        virtual Model::ResetDBParameterGroupOutcome ResetDBParameterGroup(const Model::ResetDBParameterGroupRequest& request) const;

        /**
         * <p> Modifies the parameters of a DB parameter group to the engine/system default
         * value. To reset specific parameters submit a list of the following:
         * <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB
         * parameter group, specify the <code>DBParameterGroup</code> name and
         * <code>ResetAllParameters</code> parameters. When resetting the entire group,
         * dynamic parameters are updated immediately and static parameters are set to
         * <code>pending-reboot</code> to take effect on the next DB instance restart or
         * <code>RebootDBInstance</code> request. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetDBParameterGroupOutcomeCallable ResetDBParameterGroupCallable(const Model::ResetDBParameterGroupRequest& request) const;

        /**
         * <p> Modifies the parameters of a DB parameter group to the engine/system default
         * value. To reset specific parameters submit a list of the following:
         * <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB
         * parameter group, specify the <code>DBParameterGroup</code> name and
         * <code>ResetAllParameters</code> parameters. When resetting the entire group,
         * dynamic parameters are updated immediately and static parameters are set to
         * <code>pending-reboot</code> to take effect on the next DB instance restart or
         * <code>RebootDBInstance</code> request. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetDBParameterGroupAsync(const Model::ResetDBParameterGroupRequest& request, const ResetDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new DB cluster from a DB cluster snapshot. The target DB cluster is
         * created from the source DB cluster restore point with the same configuration as
         * the original source DB cluster, except that the new DB cluster is created with
         * the default security group.</p> <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         */
        virtual Model::RestoreDBClusterFromSnapshotOutcome RestoreDBClusterFromSnapshot(const Model::RestoreDBClusterFromSnapshotRequest& request) const;

        /**
         * <p>Creates a new DB cluster from a DB cluster snapshot. The target DB cluster is
         * created from the source DB cluster restore point with the same configuration as
         * the original source DB cluster, except that the new DB cluster is created with
         * the default security group.</p> <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreDBClusterFromSnapshotOutcomeCallable RestoreDBClusterFromSnapshotCallable(const Model::RestoreDBClusterFromSnapshotRequest& request) const;

        /**
         * <p>Creates a new DB cluster from a DB cluster snapshot. The target DB cluster is
         * created from the source DB cluster restore point with the same configuration as
         * the original source DB cluster, except that the new DB cluster is created with
         * the default security group.</p> <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreDBClusterFromSnapshotAsync(const Model::RestoreDBClusterFromSnapshotRequest& request, const RestoreDBClusterFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Restores a DB cluster to an arbitrary point in time. Users can restore to
         * any point in time before <code>LatestRestorableTime</code> for up to
         * <code>BackupRetentionPeriod</code> days. The target DB cluster is created from
         * the source DB cluster with the same configuration as the original DB cluster,
         * except that the new DB cluster is created with the default DB security group.
         * </p> <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         */
        virtual Model::RestoreDBClusterToPointInTimeOutcome RestoreDBClusterToPointInTime(const Model::RestoreDBClusterToPointInTimeRequest& request) const;

        /**
         * <p> Restores a DB cluster to an arbitrary point in time. Users can restore to
         * any point in time before <code>LatestRestorableTime</code> for up to
         * <code>BackupRetentionPeriod</code> days. The target DB cluster is created from
         * the source DB cluster with the same configuration as the original DB cluster,
         * except that the new DB cluster is created with the default DB security group.
         * </p> <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreDBClusterToPointInTimeOutcomeCallable RestoreDBClusterToPointInTimeCallable(const Model::RestoreDBClusterToPointInTimeRequest& request) const;

        /**
         * <p> Restores a DB cluster to an arbitrary point in time. Users can restore to
         * any point in time before <code>LatestRestorableTime</code> for up to
         * <code>BackupRetentionPeriod</code> days. The target DB cluster is created from
         * the source DB cluster with the same configuration as the original DB cluster,
         * except that the new DB cluster is created with the default DB security group.
         * </p> <p>For more information on Amazon Aurora, see <a
         * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora
         * on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreDBClusterToPointInTimeAsync(const Model::RestoreDBClusterToPointInTimeRequest& request, const RestoreDBClusterToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new DB instance from a DB snapshot. The target database is created
         * from the source database restore point with the most of original configuration
         * with the default security group and the default DB parameter group. By default,
         * the new DB instance is created as a single-AZ deployment except when the
         * instance is a SQL Server instance that has an option group that is associated
         * with mirroring; in this case, the instance becomes a mirrored AZ deployment and
         * not a single-AZ deployment.</p> <p>If your intent is to replace your original DB
         * instance with the new, restored DB instance, then rename your original DB
         * instance before you call the RestoreDBInstanceFromDBSnapshot action. RDS does
         * not allow two DB instances with the same name. Once you have renamed your
         * original DB instance with a different identifier, then you can pass the original
         * name of the DB instance as the DBInstanceIdentifier in the call to the
         * RestoreDBInstanceFromDBSnapshot action. The result is that you will replace the
         * original DB instance with the DB instance created from the snapshot.</p> <p>If
         * you are restoring from a shared manual DB snapshot, the
         * <code>DBSnapshotIdentifier</code> must be the ARN of the shared DB snapshot.</p>
         */
        virtual Model::RestoreDBInstanceFromDBSnapshotOutcome RestoreDBInstanceFromDBSnapshot(const Model::RestoreDBInstanceFromDBSnapshotRequest& request) const;

        /**
         * <p>Creates a new DB instance from a DB snapshot. The target database is created
         * from the source database restore point with the most of original configuration
         * with the default security group and the default DB parameter group. By default,
         * the new DB instance is created as a single-AZ deployment except when the
         * instance is a SQL Server instance that has an option group that is associated
         * with mirroring; in this case, the instance becomes a mirrored AZ deployment and
         * not a single-AZ deployment.</p> <p>If your intent is to replace your original DB
         * instance with the new, restored DB instance, then rename your original DB
         * instance before you call the RestoreDBInstanceFromDBSnapshot action. RDS does
         * not allow two DB instances with the same name. Once you have renamed your
         * original DB instance with a different identifier, then you can pass the original
         * name of the DB instance as the DBInstanceIdentifier in the call to the
         * RestoreDBInstanceFromDBSnapshot action. The result is that you will replace the
         * original DB instance with the DB instance created from the snapshot.</p> <p>If
         * you are restoring from a shared manual DB snapshot, the
         * <code>DBSnapshotIdentifier</code> must be the ARN of the shared DB snapshot.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreDBInstanceFromDBSnapshotOutcomeCallable RestoreDBInstanceFromDBSnapshotCallable(const Model::RestoreDBInstanceFromDBSnapshotRequest& request) const;

        /**
         * <p>Creates a new DB instance from a DB snapshot. The target database is created
         * from the source database restore point with the most of original configuration
         * with the default security group and the default DB parameter group. By default,
         * the new DB instance is created as a single-AZ deployment except when the
         * instance is a SQL Server instance that has an option group that is associated
         * with mirroring; in this case, the instance becomes a mirrored AZ deployment and
         * not a single-AZ deployment.</p> <p>If your intent is to replace your original DB
         * instance with the new, restored DB instance, then rename your original DB
         * instance before you call the RestoreDBInstanceFromDBSnapshot action. RDS does
         * not allow two DB instances with the same name. Once you have renamed your
         * original DB instance with a different identifier, then you can pass the original
         * name of the DB instance as the DBInstanceIdentifier in the call to the
         * RestoreDBInstanceFromDBSnapshot action. The result is that you will replace the
         * original DB instance with the DB instance created from the snapshot.</p> <p>If
         * you are restoring from a shared manual DB snapshot, the
         * <code>DBSnapshotIdentifier</code> must be the ARN of the shared DB snapshot.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreDBInstanceFromDBSnapshotAsync(const Model::RestoreDBInstanceFromDBSnapshotRequest& request, const RestoreDBInstanceFromDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restores a DB instance to an arbitrary point in time. You can restore to any
         * point in time before the time identified by the LatestRestorableTime property.
         * You can restore to a point up to the number of days specified by the
         * BackupRetentionPeriod property.</p> <p>The target database is created with most
         * of the original configuration, but in a system-selected availability zone, with
         * the default security group, the default subnet group, and the default DB
         * parameter group. By default, the new DB instance is created as a single-AZ
         * deployment except when the instance is a SQL Server instance that has an option
         * group that is associated with mirroring; in this case, the instance becomes a
         * mirrored deployment and not a single-AZ deployment.</p>
         */
        virtual Model::RestoreDBInstanceToPointInTimeOutcome RestoreDBInstanceToPointInTime(const Model::RestoreDBInstanceToPointInTimeRequest& request) const;

        /**
         * <p>Restores a DB instance to an arbitrary point in time. You can restore to any
         * point in time before the time identified by the LatestRestorableTime property.
         * You can restore to a point up to the number of days specified by the
         * BackupRetentionPeriod property.</p> <p>The target database is created with most
         * of the original configuration, but in a system-selected availability zone, with
         * the default security group, the default subnet group, and the default DB
         * parameter group. By default, the new DB instance is created as a single-AZ
         * deployment except when the instance is a SQL Server instance that has an option
         * group that is associated with mirroring; in this case, the instance becomes a
         * mirrored deployment and not a single-AZ deployment.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreDBInstanceToPointInTimeOutcomeCallable RestoreDBInstanceToPointInTimeCallable(const Model::RestoreDBInstanceToPointInTimeRequest& request) const;

        /**
         * <p>Restores a DB instance to an arbitrary point in time. You can restore to any
         * point in time before the time identified by the LatestRestorableTime property.
         * You can restore to a point up to the number of days specified by the
         * BackupRetentionPeriod property.</p> <p>The target database is created with most
         * of the original configuration, but in a system-selected availability zone, with
         * the default security group, the default subnet group, and the default DB
         * parameter group. By default, the new DB instance is created as a single-AZ
         * deployment except when the instance is a SQL Server instance that has an option
         * group that is associated with mirroring; in this case, the instance becomes a
         * mirrored deployment and not a single-AZ deployment.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreDBInstanceToPointInTimeAsync(const Model::RestoreDBInstanceToPointInTimeRequest& request, const RestoreDBInstanceToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Revokes ingress from a DBSecurityGroup for previously authorized IP ranges or
         * EC2 or VPC Security Groups. Required parameters for this API are one of CIDRIP,
         * EC2SecurityGroupId for VPC, or (EC2SecurityGroupOwnerId and either
         * EC2SecurityGroupName or EC2SecurityGroupId).</p>
         */
        virtual Model::RevokeDBSecurityGroupIngressOutcome RevokeDBSecurityGroupIngress(const Model::RevokeDBSecurityGroupIngressRequest& request) const;

        /**
         * <p>Revokes ingress from a DBSecurityGroup for previously authorized IP ranges or
         * EC2 or VPC Security Groups. Required parameters for this API are one of CIDRIP,
         * EC2SecurityGroupId for VPC, or (EC2SecurityGroupOwnerId and either
         * EC2SecurityGroupName or EC2SecurityGroupId).</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokeDBSecurityGroupIngressOutcomeCallable RevokeDBSecurityGroupIngressCallable(const Model::RevokeDBSecurityGroupIngressRequest& request) const;

        /**
         * <p>Revokes ingress from a DBSecurityGroup for previously authorized IP ranges or
         * EC2 or VPC Security Groups. Required parameters for this API are one of CIDRIP,
         * EC2SecurityGroupId for VPC, or (EC2SecurityGroupOwnerId and either
         * EC2SecurityGroupName or EC2SecurityGroupId).</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeDBSecurityGroupIngressAsync(const Model::RevokeDBSecurityGroupIngressRequest& request, const RevokeDBSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AddSourceIdentifierToSubscriptionAsyncHelper(const Model::AddSourceIdentifierToSubscriptionRequest& request, const AddSourceIdentifierToSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddTagsToResourceAsyncHelper(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ApplyPendingMaintenanceActionAsyncHelper(const Model::ApplyPendingMaintenanceActionRequest& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AuthorizeDBSecurityGroupIngressAsyncHelper(const Model::AuthorizeDBSecurityGroupIngressRequest& request, const AuthorizeDBSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopyDBClusterSnapshotAsyncHelper(const Model::CopyDBClusterSnapshotRequest& request, const CopyDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopyDBParameterGroupAsyncHelper(const Model::CopyDBParameterGroupRequest& request, const CopyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopyDBSnapshotAsyncHelper(const Model::CopyDBSnapshotRequest& request, const CopyDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopyOptionGroupAsyncHelper(const Model::CopyOptionGroupRequest& request, const CopyOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDBClusterAsyncHelper(const Model::CreateDBClusterRequest& request, const CreateDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDBClusterParameterGroupAsyncHelper(const Model::CreateDBClusterParameterGroupRequest& request, const CreateDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDBClusterSnapshotAsyncHelper(const Model::CreateDBClusterSnapshotRequest& request, const CreateDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDBInstanceAsyncHelper(const Model::CreateDBInstanceRequest& request, const CreateDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDBInstanceReadReplicaAsyncHelper(const Model::CreateDBInstanceReadReplicaRequest& request, const CreateDBInstanceReadReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDBParameterGroupAsyncHelper(const Model::CreateDBParameterGroupRequest& request, const CreateDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDBSecurityGroupAsyncHelper(const Model::CreateDBSecurityGroupRequest& request, const CreateDBSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDBSnapshotAsyncHelper(const Model::CreateDBSnapshotRequest& request, const CreateDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDBSubnetGroupAsyncHelper(const Model::CreateDBSubnetGroupRequest& request, const CreateDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEventSubscriptionAsyncHelper(const Model::CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateOptionGroupAsyncHelper(const Model::CreateOptionGroupRequest& request, const CreateOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDBClusterAsyncHelper(const Model::DeleteDBClusterRequest& request, const DeleteDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDBClusterParameterGroupAsyncHelper(const Model::DeleteDBClusterParameterGroupRequest& request, const DeleteDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDBClusterSnapshotAsyncHelper(const Model::DeleteDBClusterSnapshotRequest& request, const DeleteDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDBInstanceAsyncHelper(const Model::DeleteDBInstanceRequest& request, const DeleteDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDBParameterGroupAsyncHelper(const Model::DeleteDBParameterGroupRequest& request, const DeleteDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDBSecurityGroupAsyncHelper(const Model::DeleteDBSecurityGroupRequest& request, const DeleteDBSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDBSnapshotAsyncHelper(const Model::DeleteDBSnapshotRequest& request, const DeleteDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDBSubnetGroupAsyncHelper(const Model::DeleteDBSubnetGroupRequest& request, const DeleteDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEventSubscriptionAsyncHelper(const Model::DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteOptionGroupAsyncHelper(const Model::DeleteOptionGroupRequest& request, const DeleteOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAccountAttributesAsyncHelper(const Model::DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCertificatesAsyncHelper(const Model::DescribeCertificatesRequest& request, const DescribeCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBClusterParameterGroupsAsyncHelper(const Model::DescribeDBClusterParameterGroupsRequest& request, const DescribeDBClusterParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBClusterParametersAsyncHelper(const Model::DescribeDBClusterParametersRequest& request, const DescribeDBClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBClusterSnapshotAttributesAsyncHelper(const Model::DescribeDBClusterSnapshotAttributesRequest& request, const DescribeDBClusterSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBClusterSnapshotsAsyncHelper(const Model::DescribeDBClusterSnapshotsRequest& request, const DescribeDBClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBClustersAsyncHelper(const Model::DescribeDBClustersRequest& request, const DescribeDBClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBEngineVersionsAsyncHelper(const Model::DescribeDBEngineVersionsRequest& request, const DescribeDBEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBInstancesAsyncHelper(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBLogFilesAsyncHelper(const Model::DescribeDBLogFilesRequest& request, const DescribeDBLogFilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBParameterGroupsAsyncHelper(const Model::DescribeDBParameterGroupsRequest& request, const DescribeDBParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBParametersAsyncHelper(const Model::DescribeDBParametersRequest& request, const DescribeDBParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBSecurityGroupsAsyncHelper(const Model::DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBSnapshotAttributesAsyncHelper(const Model::DescribeDBSnapshotAttributesRequest& request, const DescribeDBSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBSnapshotsAsyncHelper(const Model::DescribeDBSnapshotsRequest& request, const DescribeDBSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBSubnetGroupsAsyncHelper(const Model::DescribeDBSubnetGroupsRequest& request, const DescribeDBSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEngineDefaultClusterParametersAsyncHelper(const Model::DescribeEngineDefaultClusterParametersRequest& request, const DescribeEngineDefaultClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEngineDefaultParametersAsyncHelper(const Model::DescribeEngineDefaultParametersRequest& request, const DescribeEngineDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventCategoriesAsyncHelper(const Model::DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventSubscriptionsAsyncHelper(const Model::DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventsAsyncHelper(const Model::DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOptionGroupOptionsAsyncHelper(const Model::DescribeOptionGroupOptionsRequest& request, const DescribeOptionGroupOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOptionGroupsAsyncHelper(const Model::DescribeOptionGroupsRequest& request, const DescribeOptionGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOrderableDBInstanceOptionsAsyncHelper(const Model::DescribeOrderableDBInstanceOptionsRequest& request, const DescribeOrderableDBInstanceOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePendingMaintenanceActionsAsyncHelper(const Model::DescribePendingMaintenanceActionsRequest& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReservedDBInstancesAsyncHelper(const Model::DescribeReservedDBInstancesRequest& request, const DescribeReservedDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReservedDBInstancesOfferingsAsyncHelper(const Model::DescribeReservedDBInstancesOfferingsRequest& request, const DescribeReservedDBInstancesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DownloadDBLogFilePortionAsyncHelper(const Model::DownloadDBLogFilePortionRequest& request, const DownloadDBLogFilePortionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void FailoverDBClusterAsyncHelper(const Model::FailoverDBClusterRequest& request, const FailoverDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDBClusterAsyncHelper(const Model::ModifyDBClusterRequest& request, const ModifyDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDBClusterParameterGroupAsyncHelper(const Model::ModifyDBClusterParameterGroupRequest& request, const ModifyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDBClusterSnapshotAttributeAsyncHelper(const Model::ModifyDBClusterSnapshotAttributeRequest& request, const ModifyDBClusterSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDBInstanceAsyncHelper(const Model::ModifyDBInstanceRequest& request, const ModifyDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDBParameterGroupAsyncHelper(const Model::ModifyDBParameterGroupRequest& request, const ModifyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDBSnapshotAttributeAsyncHelper(const Model::ModifyDBSnapshotAttributeRequest& request, const ModifyDBSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDBSubnetGroupAsyncHelper(const Model::ModifyDBSubnetGroupRequest& request, const ModifyDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyEventSubscriptionAsyncHelper(const Model::ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyOptionGroupAsyncHelper(const Model::ModifyOptionGroupRequest& request, const ModifyOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PromoteReadReplicaAsyncHelper(const Model::PromoteReadReplicaRequest& request, const PromoteReadReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PurchaseReservedDBInstancesOfferingAsyncHelper(const Model::PurchaseReservedDBInstancesOfferingRequest& request, const PurchaseReservedDBInstancesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RebootDBInstanceAsyncHelper(const Model::RebootDBInstanceRequest& request, const RebootDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveSourceIdentifierFromSubscriptionAsyncHelper(const Model::RemoveSourceIdentifierFromSubscriptionRequest& request, const RemoveSourceIdentifierFromSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveTagsFromResourceAsyncHelper(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetDBClusterParameterGroupAsyncHelper(const Model::ResetDBClusterParameterGroupRequest& request, const ResetDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetDBParameterGroupAsyncHelper(const Model::ResetDBParameterGroupRequest& request, const ResetDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreDBClusterFromSnapshotAsyncHelper(const Model::RestoreDBClusterFromSnapshotRequest& request, const RestoreDBClusterFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreDBClusterToPointInTimeAsyncHelper(const Model::RestoreDBClusterToPointInTimeRequest& request, const RestoreDBClusterToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreDBInstanceFromDBSnapshotAsyncHelper(const Model::RestoreDBInstanceFromDBSnapshotRequest& request, const RestoreDBInstanceFromDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreDBInstanceToPointInTimeAsyncHelper(const Model::RestoreDBInstanceToPointInTimeRequest& request, const RestoreDBInstanceToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RevokeDBSecurityGroupIngressAsyncHelper(const Model::RevokeDBSecurityGroupIngressRequest& request, const RevokeDBSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace RDS
} // namespace Aws
