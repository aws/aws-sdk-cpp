﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/neptune/model/AddSourceIdentifierToSubscriptionResult.h>
#include <aws/neptune/model/ApplyPendingMaintenanceActionResult.h>
#include <aws/neptune/model/CopyDBClusterParameterGroupResult.h>
#include <aws/neptune/model/CopyDBClusterSnapshotResult.h>
#include <aws/neptune/model/CopyDBParameterGroupResult.h>
#include <aws/neptune/model/CreateDBClusterResult.h>
#include <aws/neptune/model/CreateDBClusterEndpointResult.h>
#include <aws/neptune/model/CreateDBClusterParameterGroupResult.h>
#include <aws/neptune/model/CreateDBClusterSnapshotResult.h>
#include <aws/neptune/model/CreateDBInstanceResult.h>
#include <aws/neptune/model/CreateDBParameterGroupResult.h>
#include <aws/neptune/model/CreateDBSubnetGroupResult.h>
#include <aws/neptune/model/CreateEventSubscriptionResult.h>
#include <aws/neptune/model/DeleteDBClusterResult.h>
#include <aws/neptune/model/DeleteDBClusterEndpointResult.h>
#include <aws/neptune/model/DeleteDBClusterSnapshotResult.h>
#include <aws/neptune/model/DeleteDBInstanceResult.h>
#include <aws/neptune/model/DeleteEventSubscriptionResult.h>
#include <aws/neptune/model/DescribeDBClusterEndpointsResult.h>
#include <aws/neptune/model/DescribeDBClusterParameterGroupsResult.h>
#include <aws/neptune/model/DescribeDBClusterParametersResult.h>
#include <aws/neptune/model/DescribeDBClusterSnapshotAttributesResult.h>
#include <aws/neptune/model/DescribeDBClusterSnapshotsResult.h>
#include <aws/neptune/model/DescribeDBClustersResult.h>
#include <aws/neptune/model/DescribeDBEngineVersionsResult.h>
#include <aws/neptune/model/DescribeDBInstancesResult.h>
#include <aws/neptune/model/DescribeDBParameterGroupsResult.h>
#include <aws/neptune/model/DescribeDBParametersResult.h>
#include <aws/neptune/model/DescribeDBSubnetGroupsResult.h>
#include <aws/neptune/model/DescribeEngineDefaultClusterParametersResult.h>
#include <aws/neptune/model/DescribeEngineDefaultParametersResult.h>
#include <aws/neptune/model/DescribeEventCategoriesResult.h>
#include <aws/neptune/model/DescribeEventSubscriptionsResult.h>
#include <aws/neptune/model/DescribeEventsResult.h>
#include <aws/neptune/model/DescribeOrderableDBInstanceOptionsResult.h>
#include <aws/neptune/model/DescribePendingMaintenanceActionsResult.h>
#include <aws/neptune/model/DescribeValidDBInstanceModificationsResult.h>
#include <aws/neptune/model/FailoverDBClusterResult.h>
#include <aws/neptune/model/ListTagsForResourceResult.h>
#include <aws/neptune/model/ModifyDBClusterResult.h>
#include <aws/neptune/model/ModifyDBClusterEndpointResult.h>
#include <aws/neptune/model/ModifyDBClusterParameterGroupResult.h>
#include <aws/neptune/model/ModifyDBClusterSnapshotAttributeResult.h>
#include <aws/neptune/model/ModifyDBInstanceResult.h>
#include <aws/neptune/model/ModifyDBParameterGroupResult.h>
#include <aws/neptune/model/ModifyDBSubnetGroupResult.h>
#include <aws/neptune/model/ModifyEventSubscriptionResult.h>
#include <aws/neptune/model/PromoteReadReplicaDBClusterResult.h>
#include <aws/neptune/model/RebootDBInstanceResult.h>
#include <aws/neptune/model/RemoveSourceIdentifierFromSubscriptionResult.h>
#include <aws/neptune/model/ResetDBClusterParameterGroupResult.h>
#include <aws/neptune/model/ResetDBParameterGroupResult.h>
#include <aws/neptune/model/RestoreDBClusterFromSnapshotResult.h>
#include <aws/neptune/model/RestoreDBClusterToPointInTimeResult.h>
#include <aws/neptune/model/StartDBClusterResult.h>
#include <aws/neptune/model/StopDBClusterResult.h>
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

namespace Neptune
{

namespace Model
{
        class AddRoleToDBClusterRequest;
        class AddSourceIdentifierToSubscriptionRequest;
        class AddTagsToResourceRequest;
        class ApplyPendingMaintenanceActionRequest;
        class CopyDBClusterParameterGroupRequest;
        class CopyDBClusterSnapshotRequest;
        class CopyDBParameterGroupRequest;
        class CreateDBClusterRequest;
        class CreateDBClusterEndpointRequest;
        class CreateDBClusterParameterGroupRequest;
        class CreateDBClusterSnapshotRequest;
        class CreateDBInstanceRequest;
        class CreateDBParameterGroupRequest;
        class CreateDBSubnetGroupRequest;
        class CreateEventSubscriptionRequest;
        class DeleteDBClusterRequest;
        class DeleteDBClusterEndpointRequest;
        class DeleteDBClusterParameterGroupRequest;
        class DeleteDBClusterSnapshotRequest;
        class DeleteDBInstanceRequest;
        class DeleteDBParameterGroupRequest;
        class DeleteDBSubnetGroupRequest;
        class DeleteEventSubscriptionRequest;
        class DescribeDBClusterEndpointsRequest;
        class DescribeDBClusterParameterGroupsRequest;
        class DescribeDBClusterParametersRequest;
        class DescribeDBClusterSnapshotAttributesRequest;
        class DescribeDBClusterSnapshotsRequest;
        class DescribeDBClustersRequest;
        class DescribeDBEngineVersionsRequest;
        class DescribeDBInstancesRequest;
        class DescribeDBParameterGroupsRequest;
        class DescribeDBParametersRequest;
        class DescribeDBSubnetGroupsRequest;
        class DescribeEngineDefaultClusterParametersRequest;
        class DescribeEngineDefaultParametersRequest;
        class DescribeEventCategoriesRequest;
        class DescribeEventSubscriptionsRequest;
        class DescribeEventsRequest;
        class DescribeOrderableDBInstanceOptionsRequest;
        class DescribePendingMaintenanceActionsRequest;
        class DescribeValidDBInstanceModificationsRequest;
        class FailoverDBClusterRequest;
        class ListTagsForResourceRequest;
        class ModifyDBClusterRequest;
        class ModifyDBClusterEndpointRequest;
        class ModifyDBClusterParameterGroupRequest;
        class ModifyDBClusterSnapshotAttributeRequest;
        class ModifyDBInstanceRequest;
        class ModifyDBParameterGroupRequest;
        class ModifyDBSubnetGroupRequest;
        class ModifyEventSubscriptionRequest;
        class PromoteReadReplicaDBClusterRequest;
        class RebootDBInstanceRequest;
        class RemoveRoleFromDBClusterRequest;
        class RemoveSourceIdentifierFromSubscriptionRequest;
        class RemoveTagsFromResourceRequest;
        class ResetDBClusterParameterGroupRequest;
        class ResetDBParameterGroupRequest;
        class RestoreDBClusterFromSnapshotRequest;
        class RestoreDBClusterToPointInTimeRequest;
        class StartDBClusterRequest;
        class StopDBClusterRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, NeptuneError> AddRoleToDBClusterOutcome;
        typedef Aws::Utils::Outcome<AddSourceIdentifierToSubscriptionResult, NeptuneError> AddSourceIdentifierToSubscriptionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, NeptuneError> AddTagsToResourceOutcome;
        typedef Aws::Utils::Outcome<ApplyPendingMaintenanceActionResult, NeptuneError> ApplyPendingMaintenanceActionOutcome;
        typedef Aws::Utils::Outcome<CopyDBClusterParameterGroupResult, NeptuneError> CopyDBClusterParameterGroupOutcome;
        typedef Aws::Utils::Outcome<CopyDBClusterSnapshotResult, NeptuneError> CopyDBClusterSnapshotOutcome;
        typedef Aws::Utils::Outcome<CopyDBParameterGroupResult, NeptuneError> CopyDBParameterGroupOutcome;
        typedef Aws::Utils::Outcome<CreateDBClusterResult, NeptuneError> CreateDBClusterOutcome;
        typedef Aws::Utils::Outcome<CreateDBClusterEndpointResult, NeptuneError> CreateDBClusterEndpointOutcome;
        typedef Aws::Utils::Outcome<CreateDBClusterParameterGroupResult, NeptuneError> CreateDBClusterParameterGroupOutcome;
        typedef Aws::Utils::Outcome<CreateDBClusterSnapshotResult, NeptuneError> CreateDBClusterSnapshotOutcome;
        typedef Aws::Utils::Outcome<CreateDBInstanceResult, NeptuneError> CreateDBInstanceOutcome;
        typedef Aws::Utils::Outcome<CreateDBParameterGroupResult, NeptuneError> CreateDBParameterGroupOutcome;
        typedef Aws::Utils::Outcome<CreateDBSubnetGroupResult, NeptuneError> CreateDBSubnetGroupOutcome;
        typedef Aws::Utils::Outcome<CreateEventSubscriptionResult, NeptuneError> CreateEventSubscriptionOutcome;
        typedef Aws::Utils::Outcome<DeleteDBClusterResult, NeptuneError> DeleteDBClusterOutcome;
        typedef Aws::Utils::Outcome<DeleteDBClusterEndpointResult, NeptuneError> DeleteDBClusterEndpointOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, NeptuneError> DeleteDBClusterParameterGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteDBClusterSnapshotResult, NeptuneError> DeleteDBClusterSnapshotOutcome;
        typedef Aws::Utils::Outcome<DeleteDBInstanceResult, NeptuneError> DeleteDBInstanceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, NeptuneError> DeleteDBParameterGroupOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, NeptuneError> DeleteDBSubnetGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteEventSubscriptionResult, NeptuneError> DeleteEventSubscriptionOutcome;
        typedef Aws::Utils::Outcome<DescribeDBClusterEndpointsResult, NeptuneError> DescribeDBClusterEndpointsOutcome;
        typedef Aws::Utils::Outcome<DescribeDBClusterParameterGroupsResult, NeptuneError> DescribeDBClusterParameterGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeDBClusterParametersResult, NeptuneError> DescribeDBClusterParametersOutcome;
        typedef Aws::Utils::Outcome<DescribeDBClusterSnapshotAttributesResult, NeptuneError> DescribeDBClusterSnapshotAttributesOutcome;
        typedef Aws::Utils::Outcome<DescribeDBClusterSnapshotsResult, NeptuneError> DescribeDBClusterSnapshotsOutcome;
        typedef Aws::Utils::Outcome<DescribeDBClustersResult, NeptuneError> DescribeDBClustersOutcome;
        typedef Aws::Utils::Outcome<DescribeDBEngineVersionsResult, NeptuneError> DescribeDBEngineVersionsOutcome;
        typedef Aws::Utils::Outcome<DescribeDBInstancesResult, NeptuneError> DescribeDBInstancesOutcome;
        typedef Aws::Utils::Outcome<DescribeDBParameterGroupsResult, NeptuneError> DescribeDBParameterGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeDBParametersResult, NeptuneError> DescribeDBParametersOutcome;
        typedef Aws::Utils::Outcome<DescribeDBSubnetGroupsResult, NeptuneError> DescribeDBSubnetGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeEngineDefaultClusterParametersResult, NeptuneError> DescribeEngineDefaultClusterParametersOutcome;
        typedef Aws::Utils::Outcome<DescribeEngineDefaultParametersResult, NeptuneError> DescribeEngineDefaultParametersOutcome;
        typedef Aws::Utils::Outcome<DescribeEventCategoriesResult, NeptuneError> DescribeEventCategoriesOutcome;
        typedef Aws::Utils::Outcome<DescribeEventSubscriptionsResult, NeptuneError> DescribeEventSubscriptionsOutcome;
        typedef Aws::Utils::Outcome<DescribeEventsResult, NeptuneError> DescribeEventsOutcome;
        typedef Aws::Utils::Outcome<DescribeOrderableDBInstanceOptionsResult, NeptuneError> DescribeOrderableDBInstanceOptionsOutcome;
        typedef Aws::Utils::Outcome<DescribePendingMaintenanceActionsResult, NeptuneError> DescribePendingMaintenanceActionsOutcome;
        typedef Aws::Utils::Outcome<DescribeValidDBInstanceModificationsResult, NeptuneError> DescribeValidDBInstanceModificationsOutcome;
        typedef Aws::Utils::Outcome<FailoverDBClusterResult, NeptuneError> FailoverDBClusterOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, NeptuneError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ModifyDBClusterResult, NeptuneError> ModifyDBClusterOutcome;
        typedef Aws::Utils::Outcome<ModifyDBClusterEndpointResult, NeptuneError> ModifyDBClusterEndpointOutcome;
        typedef Aws::Utils::Outcome<ModifyDBClusterParameterGroupResult, NeptuneError> ModifyDBClusterParameterGroupOutcome;
        typedef Aws::Utils::Outcome<ModifyDBClusterSnapshotAttributeResult, NeptuneError> ModifyDBClusterSnapshotAttributeOutcome;
        typedef Aws::Utils::Outcome<ModifyDBInstanceResult, NeptuneError> ModifyDBInstanceOutcome;
        typedef Aws::Utils::Outcome<ModifyDBParameterGroupResult, NeptuneError> ModifyDBParameterGroupOutcome;
        typedef Aws::Utils::Outcome<ModifyDBSubnetGroupResult, NeptuneError> ModifyDBSubnetGroupOutcome;
        typedef Aws::Utils::Outcome<ModifyEventSubscriptionResult, NeptuneError> ModifyEventSubscriptionOutcome;
        typedef Aws::Utils::Outcome<PromoteReadReplicaDBClusterResult, NeptuneError> PromoteReadReplicaDBClusterOutcome;
        typedef Aws::Utils::Outcome<RebootDBInstanceResult, NeptuneError> RebootDBInstanceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, NeptuneError> RemoveRoleFromDBClusterOutcome;
        typedef Aws::Utils::Outcome<RemoveSourceIdentifierFromSubscriptionResult, NeptuneError> RemoveSourceIdentifierFromSubscriptionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, NeptuneError> RemoveTagsFromResourceOutcome;
        typedef Aws::Utils::Outcome<ResetDBClusterParameterGroupResult, NeptuneError> ResetDBClusterParameterGroupOutcome;
        typedef Aws::Utils::Outcome<ResetDBParameterGroupResult, NeptuneError> ResetDBParameterGroupOutcome;
        typedef Aws::Utils::Outcome<RestoreDBClusterFromSnapshotResult, NeptuneError> RestoreDBClusterFromSnapshotOutcome;
        typedef Aws::Utils::Outcome<RestoreDBClusterToPointInTimeResult, NeptuneError> RestoreDBClusterToPointInTimeOutcome;
        typedef Aws::Utils::Outcome<StartDBClusterResult, NeptuneError> StartDBClusterOutcome;
        typedef Aws::Utils::Outcome<StopDBClusterResult, NeptuneError> StopDBClusterOutcome;

        typedef std::future<AddRoleToDBClusterOutcome> AddRoleToDBClusterOutcomeCallable;
        typedef std::future<AddSourceIdentifierToSubscriptionOutcome> AddSourceIdentifierToSubscriptionOutcomeCallable;
        typedef std::future<AddTagsToResourceOutcome> AddTagsToResourceOutcomeCallable;
        typedef std::future<ApplyPendingMaintenanceActionOutcome> ApplyPendingMaintenanceActionOutcomeCallable;
        typedef std::future<CopyDBClusterParameterGroupOutcome> CopyDBClusterParameterGroupOutcomeCallable;
        typedef std::future<CopyDBClusterSnapshotOutcome> CopyDBClusterSnapshotOutcomeCallable;
        typedef std::future<CopyDBParameterGroupOutcome> CopyDBParameterGroupOutcomeCallable;
        typedef std::future<CreateDBClusterOutcome> CreateDBClusterOutcomeCallable;
        typedef std::future<CreateDBClusterEndpointOutcome> CreateDBClusterEndpointOutcomeCallable;
        typedef std::future<CreateDBClusterParameterGroupOutcome> CreateDBClusterParameterGroupOutcomeCallable;
        typedef std::future<CreateDBClusterSnapshotOutcome> CreateDBClusterSnapshotOutcomeCallable;
        typedef std::future<CreateDBInstanceOutcome> CreateDBInstanceOutcomeCallable;
        typedef std::future<CreateDBParameterGroupOutcome> CreateDBParameterGroupOutcomeCallable;
        typedef std::future<CreateDBSubnetGroupOutcome> CreateDBSubnetGroupOutcomeCallable;
        typedef std::future<CreateEventSubscriptionOutcome> CreateEventSubscriptionOutcomeCallable;
        typedef std::future<DeleteDBClusterOutcome> DeleteDBClusterOutcomeCallable;
        typedef std::future<DeleteDBClusterEndpointOutcome> DeleteDBClusterEndpointOutcomeCallable;
        typedef std::future<DeleteDBClusterParameterGroupOutcome> DeleteDBClusterParameterGroupOutcomeCallable;
        typedef std::future<DeleteDBClusterSnapshotOutcome> DeleteDBClusterSnapshotOutcomeCallable;
        typedef std::future<DeleteDBInstanceOutcome> DeleteDBInstanceOutcomeCallable;
        typedef std::future<DeleteDBParameterGroupOutcome> DeleteDBParameterGroupOutcomeCallable;
        typedef std::future<DeleteDBSubnetGroupOutcome> DeleteDBSubnetGroupOutcomeCallable;
        typedef std::future<DeleteEventSubscriptionOutcome> DeleteEventSubscriptionOutcomeCallable;
        typedef std::future<DescribeDBClusterEndpointsOutcome> DescribeDBClusterEndpointsOutcomeCallable;
        typedef std::future<DescribeDBClusterParameterGroupsOutcome> DescribeDBClusterParameterGroupsOutcomeCallable;
        typedef std::future<DescribeDBClusterParametersOutcome> DescribeDBClusterParametersOutcomeCallable;
        typedef std::future<DescribeDBClusterSnapshotAttributesOutcome> DescribeDBClusterSnapshotAttributesOutcomeCallable;
        typedef std::future<DescribeDBClusterSnapshotsOutcome> DescribeDBClusterSnapshotsOutcomeCallable;
        typedef std::future<DescribeDBClustersOutcome> DescribeDBClustersOutcomeCallable;
        typedef std::future<DescribeDBEngineVersionsOutcome> DescribeDBEngineVersionsOutcomeCallable;
        typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
        typedef std::future<DescribeDBParameterGroupsOutcome> DescribeDBParameterGroupsOutcomeCallable;
        typedef std::future<DescribeDBParametersOutcome> DescribeDBParametersOutcomeCallable;
        typedef std::future<DescribeDBSubnetGroupsOutcome> DescribeDBSubnetGroupsOutcomeCallable;
        typedef std::future<DescribeEngineDefaultClusterParametersOutcome> DescribeEngineDefaultClusterParametersOutcomeCallable;
        typedef std::future<DescribeEngineDefaultParametersOutcome> DescribeEngineDefaultParametersOutcomeCallable;
        typedef std::future<DescribeEventCategoriesOutcome> DescribeEventCategoriesOutcomeCallable;
        typedef std::future<DescribeEventSubscriptionsOutcome> DescribeEventSubscriptionsOutcomeCallable;
        typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
        typedef std::future<DescribeOrderableDBInstanceOptionsOutcome> DescribeOrderableDBInstanceOptionsOutcomeCallable;
        typedef std::future<DescribePendingMaintenanceActionsOutcome> DescribePendingMaintenanceActionsOutcomeCallable;
        typedef std::future<DescribeValidDBInstanceModificationsOutcome> DescribeValidDBInstanceModificationsOutcomeCallable;
        typedef std::future<FailoverDBClusterOutcome> FailoverDBClusterOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ModifyDBClusterOutcome> ModifyDBClusterOutcomeCallable;
        typedef std::future<ModifyDBClusterEndpointOutcome> ModifyDBClusterEndpointOutcomeCallable;
        typedef std::future<ModifyDBClusterParameterGroupOutcome> ModifyDBClusterParameterGroupOutcomeCallable;
        typedef std::future<ModifyDBClusterSnapshotAttributeOutcome> ModifyDBClusterSnapshotAttributeOutcomeCallable;
        typedef std::future<ModifyDBInstanceOutcome> ModifyDBInstanceOutcomeCallable;
        typedef std::future<ModifyDBParameterGroupOutcome> ModifyDBParameterGroupOutcomeCallable;
        typedef std::future<ModifyDBSubnetGroupOutcome> ModifyDBSubnetGroupOutcomeCallable;
        typedef std::future<ModifyEventSubscriptionOutcome> ModifyEventSubscriptionOutcomeCallable;
        typedef std::future<PromoteReadReplicaDBClusterOutcome> PromoteReadReplicaDBClusterOutcomeCallable;
        typedef std::future<RebootDBInstanceOutcome> RebootDBInstanceOutcomeCallable;
        typedef std::future<RemoveRoleFromDBClusterOutcome> RemoveRoleFromDBClusterOutcomeCallable;
        typedef std::future<RemoveSourceIdentifierFromSubscriptionOutcome> RemoveSourceIdentifierFromSubscriptionOutcomeCallable;
        typedef std::future<RemoveTagsFromResourceOutcome> RemoveTagsFromResourceOutcomeCallable;
        typedef std::future<ResetDBClusterParameterGroupOutcome> ResetDBClusterParameterGroupOutcomeCallable;
        typedef std::future<ResetDBParameterGroupOutcome> ResetDBParameterGroupOutcomeCallable;
        typedef std::future<RestoreDBClusterFromSnapshotOutcome> RestoreDBClusterFromSnapshotOutcomeCallable;
        typedef std::future<RestoreDBClusterToPointInTimeOutcome> RestoreDBClusterToPointInTimeOutcomeCallable;
        typedef std::future<StartDBClusterOutcome> StartDBClusterOutcomeCallable;
        typedef std::future<StopDBClusterOutcome> StopDBClusterOutcomeCallable;
} // namespace Model

  class NeptuneClient;

    typedef std::function<void(const NeptuneClient*, const Model::AddRoleToDBClusterRequest&, const Model::AddRoleToDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddRoleToDBClusterResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::AddSourceIdentifierToSubscriptionRequest&, const Model::AddSourceIdentifierToSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddSourceIdentifierToSubscriptionResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::AddTagsToResourceRequest&, const Model::AddTagsToResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsToResourceResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::ApplyPendingMaintenanceActionRequest&, const Model::ApplyPendingMaintenanceActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ApplyPendingMaintenanceActionResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::CopyDBClusterParameterGroupRequest&, const Model::CopyDBClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyDBClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::CopyDBClusterSnapshotRequest&, const Model::CopyDBClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyDBClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::CopyDBParameterGroupRequest&, const Model::CopyDBParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyDBParameterGroupResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::CreateDBClusterRequest&, const Model::CreateDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBClusterResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::CreateDBClusterEndpointRequest&, const Model::CreateDBClusterEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBClusterEndpointResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::CreateDBClusterParameterGroupRequest&, const Model::CreateDBClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::CreateDBClusterSnapshotRequest&, const Model::CreateDBClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::CreateDBInstanceRequest&, const Model::CreateDBInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBInstanceResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::CreateDBParameterGroupRequest&, const Model::CreateDBParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBParameterGroupResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::CreateDBSubnetGroupRequest&, const Model::CreateDBSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::CreateEventSubscriptionRequest&, const Model::CreateEventSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventSubscriptionResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DeleteDBClusterRequest&, const Model::DeleteDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBClusterResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DeleteDBClusterEndpointRequest&, const Model::DeleteDBClusterEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBClusterEndpointResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DeleteDBClusterParameterGroupRequest&, const Model::DeleteDBClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DeleteDBClusterSnapshotRequest&, const Model::DeleteDBClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DeleteDBInstanceRequest&, const Model::DeleteDBInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBInstanceResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DeleteDBParameterGroupRequest&, const Model::DeleteDBParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBParameterGroupResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DeleteDBSubnetGroupRequest&, const Model::DeleteDBSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DeleteEventSubscriptionRequest&, const Model::DeleteEventSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventSubscriptionResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeDBClusterEndpointsRequest&, const Model::DescribeDBClusterEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClusterEndpointsResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeDBClusterParameterGroupsRequest&, const Model::DescribeDBClusterParameterGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClusterParameterGroupsResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeDBClusterParametersRequest&, const Model::DescribeDBClusterParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClusterParametersResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeDBClusterSnapshotAttributesRequest&, const Model::DescribeDBClusterSnapshotAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClusterSnapshotAttributesResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeDBClusterSnapshotsRequest&, const Model::DescribeDBClusterSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClusterSnapshotsResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeDBClustersRequest&, const Model::DescribeDBClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClustersResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeDBEngineVersionsRequest&, const Model::DescribeDBEngineVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBEngineVersionsResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeDBInstancesRequest&, const Model::DescribeDBInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBInstancesResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeDBParameterGroupsRequest&, const Model::DescribeDBParameterGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBParameterGroupsResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeDBParametersRequest&, const Model::DescribeDBParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBParametersResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeDBSubnetGroupsRequest&, const Model::DescribeDBSubnetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBSubnetGroupsResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeEngineDefaultClusterParametersRequest&, const Model::DescribeEngineDefaultClusterParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEngineDefaultClusterParametersResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeEngineDefaultParametersRequest&, const Model::DescribeEngineDefaultParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEngineDefaultParametersResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeEventCategoriesRequest&, const Model::DescribeEventCategoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventCategoriesResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeEventSubscriptionsRequest&, const Model::DescribeEventSubscriptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventSubscriptionsResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeEventsRequest&, const Model::DescribeEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventsResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeOrderableDBInstanceOptionsRequest&, const Model::DescribeOrderableDBInstanceOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrderableDBInstanceOptionsResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribePendingMaintenanceActionsRequest&, const Model::DescribePendingMaintenanceActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePendingMaintenanceActionsResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeValidDBInstanceModificationsRequest&, const Model::DescribeValidDBInstanceModificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeValidDBInstanceModificationsResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::FailoverDBClusterRequest&, const Model::FailoverDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > FailoverDBClusterResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::ModifyDBClusterRequest&, const Model::ModifyDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBClusterResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::ModifyDBClusterEndpointRequest&, const Model::ModifyDBClusterEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBClusterEndpointResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::ModifyDBClusterParameterGroupRequest&, const Model::ModifyDBClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::ModifyDBClusterSnapshotAttributeRequest&, const Model::ModifyDBClusterSnapshotAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBClusterSnapshotAttributeResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::ModifyDBInstanceRequest&, const Model::ModifyDBInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBInstanceResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::ModifyDBParameterGroupRequest&, const Model::ModifyDBParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBParameterGroupResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::ModifyDBSubnetGroupRequest&, const Model::ModifyDBSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::ModifyEventSubscriptionRequest&, const Model::ModifyEventSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyEventSubscriptionResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::PromoteReadReplicaDBClusterRequest&, const Model::PromoteReadReplicaDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PromoteReadReplicaDBClusterResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::RebootDBInstanceRequest&, const Model::RebootDBInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootDBInstanceResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::RemoveRoleFromDBClusterRequest&, const Model::RemoveRoleFromDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveRoleFromDBClusterResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::RemoveSourceIdentifierFromSubscriptionRequest&, const Model::RemoveSourceIdentifierFromSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveSourceIdentifierFromSubscriptionResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::RemoveTagsFromResourceRequest&, const Model::RemoveTagsFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsFromResourceResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::ResetDBClusterParameterGroupRequest&, const Model::ResetDBClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetDBClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::ResetDBParameterGroupRequest&, const Model::ResetDBParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetDBParameterGroupResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::RestoreDBClusterFromSnapshotRequest&, const Model::RestoreDBClusterFromSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreDBClusterFromSnapshotResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::RestoreDBClusterToPointInTimeRequest&, const Model::RestoreDBClusterToPointInTimeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreDBClusterToPointInTimeResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::StartDBClusterRequest&, const Model::StartDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDBClusterResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::StopDBClusterRequest&, const Model::StopDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopDBClusterResponseReceivedHandler;

  /**
   * <fullname>Amazon Neptune</fullname> <p>Amazon Neptune is a fast, reliable,
   * fully-managed graph database service that makes it easy to build and run
   * applications that work with highly connected datasets. The core of Amazon
   * Neptune is a purpose-built, high-performance graph database engine optimized for
   * storing billions of relationships and querying the graph with milliseconds
   * latency. Amazon Neptune supports popular graph models Property Graph and W3C's
   * RDF, and their respective query languages Apache TinkerPop Gremlin and SPARQL,
   * allowing you to easily build queries that efficiently navigate highly connected
   * datasets. Neptune powers graph use cases such as recommendation engines, fraud
   * detection, knowledge graphs, drug discovery, and network security.</p> <p>This
   * interface reference for Amazon Neptune contains documentation for a programming
   * or command line interface you can use to manage Amazon Neptune. Note that Amazon
   * Neptune is asynchronous, which means that some interfaces might require
   * techniques such as polling or callback functions to determine when a command has
   * been applied. In this reference, the parameter descriptions indicate whether a
   * command is applied immediately, on the next instance reboot, or during the
   * maintenance window. The reference structure is as follows, and we list following
   * some related topics from the user guide.</p>
   */
  class AWS_NEPTUNE_API NeptuneClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NeptuneClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NeptuneClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NeptuneClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~NeptuneClient();


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>Associates an Identity and Access Management (IAM) role with an Neptune DB
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/AddRoleToDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::AddRoleToDBClusterOutcome AddRoleToDBCluster(const Model::AddRoleToDBClusterRequest& request) const;

        /**
         * <p>Associates an Identity and Access Management (IAM) role with an Neptune DB
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/AddRoleToDBCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddRoleToDBClusterOutcomeCallable AddRoleToDBClusterCallable(const Model::AddRoleToDBClusterRequest& request) const;

        /**
         * <p>Associates an Identity and Access Management (IAM) role with an Neptune DB
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/AddRoleToDBCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddRoleToDBClusterAsync(const Model::AddRoleToDBClusterRequest& request, const AddRoleToDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a source identifier to an existing event notification
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/AddSourceIdentifierToSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::AddSourceIdentifierToSubscriptionOutcome AddSourceIdentifierToSubscription(const Model::AddSourceIdentifierToSubscriptionRequest& request) const;

        /**
         * <p>Adds a source identifier to an existing event notification
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/AddSourceIdentifierToSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddSourceIdentifierToSubscriptionOutcomeCallable AddSourceIdentifierToSubscriptionCallable(const Model::AddSourceIdentifierToSubscriptionRequest& request) const;

        /**
         * <p>Adds a source identifier to an existing event notification
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/AddSourceIdentifierToSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddSourceIdentifierToSubscriptionAsync(const Model::AddSourceIdentifierToSubscriptionRequest& request, const AddSourceIdentifierToSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds metadata tags to an Amazon Neptune resource. These tags can also be used
         * with cost allocation reporting to track cost associated with Amazon Neptune
         * resources, or used in a Condition statement in an IAM policy for Amazon
         * Neptune.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/AddTagsToResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsToResourceOutcome AddTagsToResource(const Model::AddTagsToResourceRequest& request) const;

        /**
         * <p>Adds metadata tags to an Amazon Neptune resource. These tags can also be used
         * with cost allocation reporting to track cost associated with Amazon Neptune
         * resources, or used in a Condition statement in an IAM policy for Amazon
         * Neptune.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/AddTagsToResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const Model::AddTagsToResourceRequest& request) const;

        /**
         * <p>Adds metadata tags to an Amazon Neptune resource. These tags can also be used
         * with cost allocation reporting to track cost associated with Amazon Neptune
         * resources, or used in a Condition statement in an IAM policy for Amazon
         * Neptune.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/AddTagsToResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsToResourceAsync(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Applies a pending maintenance action to a resource (for example, to a DB
         * instance).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ApplyPendingMaintenanceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::ApplyPendingMaintenanceActionOutcome ApplyPendingMaintenanceAction(const Model::ApplyPendingMaintenanceActionRequest& request) const;

        /**
         * <p>Applies a pending maintenance action to a resource (for example, to a DB
         * instance).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ApplyPendingMaintenanceAction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ApplyPendingMaintenanceActionOutcomeCallable ApplyPendingMaintenanceActionCallable(const Model::ApplyPendingMaintenanceActionRequest& request) const;

        /**
         * <p>Applies a pending maintenance action to a resource (for example, to a DB
         * instance).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ApplyPendingMaintenanceAction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ApplyPendingMaintenanceActionAsync(const Model::ApplyPendingMaintenanceActionRequest& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Copies the specified DB cluster parameter group.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CopyDBClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyDBClusterParameterGroupOutcome CopyDBClusterParameterGroup(const Model::CopyDBClusterParameterGroupRequest& request) const;

        /**
         * <p>Copies the specified DB cluster parameter group.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CopyDBClusterParameterGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyDBClusterParameterGroupOutcomeCallable CopyDBClusterParameterGroupCallable(const Model::CopyDBClusterParameterGroupRequest& request) const;

        /**
         * <p>Copies the specified DB cluster parameter group.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CopyDBClusterParameterGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyDBClusterParameterGroupAsync(const Model::CopyDBClusterParameterGroupRequest& request, const CopyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Copies a snapshot of a DB cluster.</p> <p>To copy a DB cluster snapshot from
         * a shared manual DB cluster snapshot,
         * <code>SourceDBClusterSnapshotIdentifier</code> must be the Amazon Resource Name
         * (ARN) of the shared DB cluster snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CopyDBClusterSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyDBClusterSnapshotOutcome CopyDBClusterSnapshot(const Model::CopyDBClusterSnapshotRequest& request) const;

        /**
         * <p>Copies a snapshot of a DB cluster.</p> <p>To copy a DB cluster snapshot from
         * a shared manual DB cluster snapshot,
         * <code>SourceDBClusterSnapshotIdentifier</code> must be the Amazon Resource Name
         * (ARN) of the shared DB cluster snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CopyDBClusterSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyDBClusterSnapshotOutcomeCallable CopyDBClusterSnapshotCallable(const Model::CopyDBClusterSnapshotRequest& request) const;

        /**
         * <p>Copies a snapshot of a DB cluster.</p> <p>To copy a DB cluster snapshot from
         * a shared manual DB cluster snapshot,
         * <code>SourceDBClusterSnapshotIdentifier</code> must be the Amazon Resource Name
         * (ARN) of the shared DB cluster snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CopyDBClusterSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyDBClusterSnapshotAsync(const Model::CopyDBClusterSnapshotRequest& request, const CopyDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Copies the specified DB parameter group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CopyDBParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyDBParameterGroupOutcome CopyDBParameterGroup(const Model::CopyDBParameterGroupRequest& request) const;

        /**
         * <p>Copies the specified DB parameter group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CopyDBParameterGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyDBParameterGroupOutcomeCallable CopyDBParameterGroupCallable(const Model::CopyDBParameterGroupRequest& request) const;

        /**
         * <p>Copies the specified DB parameter group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CopyDBParameterGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyDBParameterGroupAsync(const Model::CopyDBParameterGroupRequest& request, const CopyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Amazon Neptune DB cluster.</p> <p>You can use the
         * <code>ReplicationSourceIdentifier</code> parameter to create the DB cluster as a
         * Read Replica of another DB cluster or Amazon Neptune DB instance.</p> <p>Note
         * that when you create a new cluster using <code>CreateDBCluster</code> directly,
         * deletion protection is disabled by default (when you create a new production
         * cluster in the console, deletion protection is enabled by default). You can only
         * delete a DB cluster if its <code>DeletionProtection</code> field is set to
         * <code>false</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBClusterOutcome CreateDBCluster(const Model::CreateDBClusterRequest& request) const;

        /**
         * <p>Creates a new Amazon Neptune DB cluster.</p> <p>You can use the
         * <code>ReplicationSourceIdentifier</code> parameter to create the DB cluster as a
         * Read Replica of another DB cluster or Amazon Neptune DB instance.</p> <p>Note
         * that when you create a new cluster using <code>CreateDBCluster</code> directly,
         * deletion protection is disabled by default (when you create a new production
         * cluster in the console, deletion protection is enabled by default). You can only
         * delete a DB cluster if its <code>DeletionProtection</code> field is set to
         * <code>false</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateDBCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBClusterOutcomeCallable CreateDBClusterCallable(const Model::CreateDBClusterRequest& request) const;

        /**
         * <p>Creates a new Amazon Neptune DB cluster.</p> <p>You can use the
         * <code>ReplicationSourceIdentifier</code> parameter to create the DB cluster as a
         * Read Replica of another DB cluster or Amazon Neptune DB instance.</p> <p>Note
         * that when you create a new cluster using <code>CreateDBCluster</code> directly,
         * deletion protection is disabled by default (when you create a new production
         * cluster in the console, deletion protection is enabled by default). You can only
         * delete a DB cluster if its <code>DeletionProtection</code> field is set to
         * <code>false</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateDBCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBClusterAsync(const Model::CreateDBClusterRequest& request, const CreateDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new custom endpoint and associates it with an Amazon Neptune DB
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateDBClusterEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBClusterEndpointOutcome CreateDBClusterEndpoint(const Model::CreateDBClusterEndpointRequest& request) const;

        /**
         * <p>Creates a new custom endpoint and associates it with an Amazon Neptune DB
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateDBClusterEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBClusterEndpointOutcomeCallable CreateDBClusterEndpointCallable(const Model::CreateDBClusterEndpointRequest& request) const;

        /**
         * <p>Creates a new custom endpoint and associates it with an Amazon Neptune DB
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateDBClusterEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBClusterEndpointAsync(const Model::CreateDBClusterEndpointRequest& request, const CreateDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * to take effect.</p>  <p>After you create a DB cluster parameter
         * group, you should wait at least 5 minutes before creating your first DB cluster
         * that uses that DB cluster parameter group as the default parameter group. This
         * allows Amazon Neptune to fully complete the create action before the DB cluster
         * parameter group is used as the default for a new DB cluster. This is especially
         * important for parameters that are critical when creating the default database
         * for a DB cluster, such as the character set for the default database defined by
         * the <code>character_set_database</code> parameter. You can use the <i>Parameter
         * Groups</i> option of the <a href="https://console.aws.amazon.com/rds/">Amazon
         * Neptune console</a> or the <a>DescribeDBClusterParameters</a> command to verify
         * that your DB cluster parameter group has been created or modified.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateDBClusterParameterGroup">AWS
         * API Reference</a></p>
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
         * to take effect.</p>  <p>After you create a DB cluster parameter
         * group, you should wait at least 5 minutes before creating your first DB cluster
         * that uses that DB cluster parameter group as the default parameter group. This
         * allows Amazon Neptune to fully complete the create action before the DB cluster
         * parameter group is used as the default for a new DB cluster. This is especially
         * important for parameters that are critical when creating the default database
         * for a DB cluster, such as the character set for the default database defined by
         * the <code>character_set_database</code> parameter. You can use the <i>Parameter
         * Groups</i> option of the <a href="https://console.aws.amazon.com/rds/">Amazon
         * Neptune console</a> or the <a>DescribeDBClusterParameters</a> command to verify
         * that your DB cluster parameter group has been created or modified.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateDBClusterParameterGroup">AWS
         * API Reference</a></p>
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
         * to take effect.</p>  <p>After you create a DB cluster parameter
         * group, you should wait at least 5 minutes before creating your first DB cluster
         * that uses that DB cluster parameter group as the default parameter group. This
         * allows Amazon Neptune to fully complete the create action before the DB cluster
         * parameter group is used as the default for a new DB cluster. This is especially
         * important for parameters that are critical when creating the default database
         * for a DB cluster, such as the character set for the default database defined by
         * the <code>character_set_database</code> parameter. You can use the <i>Parameter
         * Groups</i> option of the <a href="https://console.aws.amazon.com/rds/">Amazon
         * Neptune console</a> or the <a>DescribeDBClusterParameters</a> command to verify
         * that your DB cluster parameter group has been created or modified.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateDBClusterParameterGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBClusterParameterGroupAsync(const Model::CreateDBClusterParameterGroupRequest& request, const CreateDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a snapshot of a DB cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateDBClusterSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBClusterSnapshotOutcome CreateDBClusterSnapshot(const Model::CreateDBClusterSnapshotRequest& request) const;

        /**
         * <p>Creates a snapshot of a DB cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateDBClusterSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBClusterSnapshotOutcomeCallable CreateDBClusterSnapshotCallable(const Model::CreateDBClusterSnapshotRequest& request) const;

        /**
         * <p>Creates a snapshot of a DB cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateDBClusterSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBClusterSnapshotAsync(const Model::CreateDBClusterSnapshotRequest& request, const CreateDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new DB instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBInstanceOutcome CreateDBInstance(const Model::CreateDBInstanceRequest& request) const;

        /**
         * <p>Creates a new DB instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateDBInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBInstanceOutcomeCallable CreateDBInstanceCallable(const Model::CreateDBInstanceRequest& request) const;

        /**
         * <p>Creates a new DB instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateDBInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBInstanceAsync(const Model::CreateDBInstanceRequest& request, const CreateDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new DB parameter group.</p> <p>A DB parameter group is initially
         * created with the default parameters for the database engine used by the DB
         * instance. To provide custom values for any of the parameters, you must modify
         * the group after creating it using <i>ModifyDBParameterGroup</i>. Once you've
         * created a DB parameter group, you need to associate it with your DB instance
         * using <i>ModifyDBInstance</i>. When you associate a new DB parameter group with
         * a running DB instance, you need to reboot the DB instance without failover for
         * the new DB parameter group and associated settings to take effect.</p>
         *  <p>After you create a DB parameter group, you should wait at least 5
         * minutes before creating your first DB instance that uses that DB parameter group
         * as the default parameter group. This allows Amazon Neptune to fully complete the
         * create action before the parameter group is used as the default for a new DB
         * instance. This is especially important for parameters that are critical when
         * creating the default database for a DB instance, such as the character set for
         * the default database defined by the <code>character_set_database</code>
         * parameter. You can use the <i>Parameter Groups</i> option of the Amazon Neptune
         * console or the <i>DescribeDBParameters</i> command to verify that your DB
         * parameter group has been created or modified.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateDBParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBParameterGroupOutcome CreateDBParameterGroup(const Model::CreateDBParameterGroupRequest& request) const;

        /**
         * <p>Creates a new DB parameter group.</p> <p>A DB parameter group is initially
         * created with the default parameters for the database engine used by the DB
         * instance. To provide custom values for any of the parameters, you must modify
         * the group after creating it using <i>ModifyDBParameterGroup</i>. Once you've
         * created a DB parameter group, you need to associate it with your DB instance
         * using <i>ModifyDBInstance</i>. When you associate a new DB parameter group with
         * a running DB instance, you need to reboot the DB instance without failover for
         * the new DB parameter group and associated settings to take effect.</p>
         *  <p>After you create a DB parameter group, you should wait at least 5
         * minutes before creating your first DB instance that uses that DB parameter group
         * as the default parameter group. This allows Amazon Neptune to fully complete the
         * create action before the parameter group is used as the default for a new DB
         * instance. This is especially important for parameters that are critical when
         * creating the default database for a DB instance, such as the character set for
         * the default database defined by the <code>character_set_database</code>
         * parameter. You can use the <i>Parameter Groups</i> option of the Amazon Neptune
         * console or the <i>DescribeDBParameters</i> command to verify that your DB
         * parameter group has been created or modified.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateDBParameterGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBParameterGroupOutcomeCallable CreateDBParameterGroupCallable(const Model::CreateDBParameterGroupRequest& request) const;

        /**
         * <p>Creates a new DB parameter group.</p> <p>A DB parameter group is initially
         * created with the default parameters for the database engine used by the DB
         * instance. To provide custom values for any of the parameters, you must modify
         * the group after creating it using <i>ModifyDBParameterGroup</i>. Once you've
         * created a DB parameter group, you need to associate it with your DB instance
         * using <i>ModifyDBInstance</i>. When you associate a new DB parameter group with
         * a running DB instance, you need to reboot the DB instance without failover for
         * the new DB parameter group and associated settings to take effect.</p>
         *  <p>After you create a DB parameter group, you should wait at least 5
         * minutes before creating your first DB instance that uses that DB parameter group
         * as the default parameter group. This allows Amazon Neptune to fully complete the
         * create action before the parameter group is used as the default for a new DB
         * instance. This is especially important for parameters that are critical when
         * creating the default database for a DB instance, such as the character set for
         * the default database defined by the <code>character_set_database</code>
         * parameter. You can use the <i>Parameter Groups</i> option of the Amazon Neptune
         * console or the <i>DescribeDBParameters</i> command to verify that your DB
         * parameter group has been created or modified.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateDBParameterGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBParameterGroupAsync(const Model::CreateDBParameterGroupRequest& request, const CreateDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new DB subnet group. DB subnet groups must contain at least one
         * subnet in at least two AZs in the Amazon Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateDBSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBSubnetGroupOutcome CreateDBSubnetGroup(const Model::CreateDBSubnetGroupRequest& request) const;

        /**
         * <p>Creates a new DB subnet group. DB subnet groups must contain at least one
         * subnet in at least two AZs in the Amazon Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateDBSubnetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBSubnetGroupOutcomeCallable CreateDBSubnetGroupCallable(const Model::CreateDBSubnetGroupRequest& request) const;

        /**
         * <p>Creates a new DB subnet group. DB subnet groups must contain at least one
         * subnet in at least two AZs in the Amazon Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateDBSubnetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBSubnetGroupAsync(const Model::CreateDBSubnetGroupRequest& request, const CreateDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an event notification subscription. This action requires a topic ARN
         * (Amazon Resource Name) created by either the Neptune console, the SNS console,
         * or the SNS API. To obtain an ARN with SNS, you must create a topic in Amazon SNS
         * and subscribe to the topic. The ARN is displayed in the SNS console.</p> <p>You
         * can specify the type of source (SourceType) you want to be notified of, provide
         * a list of Neptune sources (SourceIds) that triggers the events, and provide a
         * list of event categories (EventCategories) for events you want to be notified
         * of. For example, you can specify SourceType = db-instance, SourceIds =
         * mydbinstance1, mydbinstance2 and EventCategories = Availability, Backup.</p>
         * <p>If you specify both the SourceType and SourceIds, such as SourceType =
         * db-instance and SourceIdentifier = myDBInstance1, you are notified of all the
         * db-instance events for the specified source. If you specify a SourceType but do
         * not specify a SourceIdentifier, you receive notice of the events for that source
         * type for all your Neptune sources. If you do not specify either the SourceType
         * nor the SourceIdentifier, you are notified of events generated from all Neptune
         * sources belonging to your customer account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateEventSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventSubscriptionOutcome CreateEventSubscription(const Model::CreateEventSubscriptionRequest& request) const;

        /**
         * <p>Creates an event notification subscription. This action requires a topic ARN
         * (Amazon Resource Name) created by either the Neptune console, the SNS console,
         * or the SNS API. To obtain an ARN with SNS, you must create a topic in Amazon SNS
         * and subscribe to the topic. The ARN is displayed in the SNS console.</p> <p>You
         * can specify the type of source (SourceType) you want to be notified of, provide
         * a list of Neptune sources (SourceIds) that triggers the events, and provide a
         * list of event categories (EventCategories) for events you want to be notified
         * of. For example, you can specify SourceType = db-instance, SourceIds =
         * mydbinstance1, mydbinstance2 and EventCategories = Availability, Backup.</p>
         * <p>If you specify both the SourceType and SourceIds, such as SourceType =
         * db-instance and SourceIdentifier = myDBInstance1, you are notified of all the
         * db-instance events for the specified source. If you specify a SourceType but do
         * not specify a SourceIdentifier, you receive notice of the events for that source
         * type for all your Neptune sources. If you do not specify either the SourceType
         * nor the SourceIdentifier, you are notified of events generated from all Neptune
         * sources belonging to your customer account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateEventSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEventSubscriptionOutcomeCallable CreateEventSubscriptionCallable(const Model::CreateEventSubscriptionRequest& request) const;

        /**
         * <p>Creates an event notification subscription. This action requires a topic ARN
         * (Amazon Resource Name) created by either the Neptune console, the SNS console,
         * or the SNS API. To obtain an ARN with SNS, you must create a topic in Amazon SNS
         * and subscribe to the topic. The ARN is displayed in the SNS console.</p> <p>You
         * can specify the type of source (SourceType) you want to be notified of, provide
         * a list of Neptune sources (SourceIds) that triggers the events, and provide a
         * list of event categories (EventCategories) for events you want to be notified
         * of. For example, you can specify SourceType = db-instance, SourceIds =
         * mydbinstance1, mydbinstance2 and EventCategories = Availability, Backup.</p>
         * <p>If you specify both the SourceType and SourceIds, such as SourceType =
         * db-instance and SourceIdentifier = myDBInstance1, you are notified of all the
         * db-instance events for the specified source. If you specify a SourceType but do
         * not specify a SourceIdentifier, you receive notice of the events for that source
         * type for all your Neptune sources. If you do not specify either the SourceType
         * nor the SourceIdentifier, you are notified of events generated from all Neptune
         * sources belonging to your customer account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateEventSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEventSubscriptionAsync(const Model::CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The DeleteDBCluster action deletes a previously provisioned DB cluster. When
         * you delete a DB cluster, all automated backups for that DB cluster are deleted
         * and can't be recovered. Manual DB cluster snapshots of the specified DB cluster
         * are not deleted.</p> <p>Note that the DB Cluster cannot be deleted if deletion
         * protection is enabled. To delete it, you must first set its
         * <code>DeletionProtection</code> field to <code>False</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBClusterOutcome DeleteDBCluster(const Model::DeleteDBClusterRequest& request) const;

        /**
         * <p>The DeleteDBCluster action deletes a previously provisioned DB cluster. When
         * you delete a DB cluster, all automated backups for that DB cluster are deleted
         * and can't be recovered. Manual DB cluster snapshots of the specified DB cluster
         * are not deleted.</p> <p>Note that the DB Cluster cannot be deleted if deletion
         * protection is enabled. To delete it, you must first set its
         * <code>DeletionProtection</code> field to <code>False</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteDBCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBClusterOutcomeCallable DeleteDBClusterCallable(const Model::DeleteDBClusterRequest& request) const;

        /**
         * <p>The DeleteDBCluster action deletes a previously provisioned DB cluster. When
         * you delete a DB cluster, all automated backups for that DB cluster are deleted
         * and can't be recovered. Manual DB cluster snapshots of the specified DB cluster
         * are not deleted.</p> <p>Note that the DB Cluster cannot be deleted if deletion
         * protection is enabled. To delete it, you must first set its
         * <code>DeletionProtection</code> field to <code>False</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteDBCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBClusterAsync(const Model::DeleteDBClusterRequest& request, const DeleteDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a custom endpoint and removes it from an Amazon Neptune DB
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteDBClusterEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBClusterEndpointOutcome DeleteDBClusterEndpoint(const Model::DeleteDBClusterEndpointRequest& request) const;

        /**
         * <p>Deletes a custom endpoint and removes it from an Amazon Neptune DB
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteDBClusterEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBClusterEndpointOutcomeCallable DeleteDBClusterEndpointCallable(const Model::DeleteDBClusterEndpointRequest& request) const;

        /**
         * <p>Deletes a custom endpoint and removes it from an Amazon Neptune DB
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteDBClusterEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBClusterEndpointAsync(const Model::DeleteDBClusterEndpointRequest& request, const DeleteDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified DB cluster parameter group. The DB cluster parameter
         * group to be deleted can't be associated with any DB clusters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteDBClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBClusterParameterGroupOutcome DeleteDBClusterParameterGroup(const Model::DeleteDBClusterParameterGroupRequest& request) const;

        /**
         * <p>Deletes a specified DB cluster parameter group. The DB cluster parameter
         * group to be deleted can't be associated with any DB clusters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteDBClusterParameterGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBClusterParameterGroupOutcomeCallable DeleteDBClusterParameterGroupCallable(const Model::DeleteDBClusterParameterGroupRequest& request) const;

        /**
         * <p>Deletes a specified DB cluster parameter group. The DB cluster parameter
         * group to be deleted can't be associated with any DB clusters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteDBClusterParameterGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBClusterParameterGroupAsync(const Model::DeleteDBClusterParameterGroupRequest& request, const DeleteDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a DB cluster snapshot. If the snapshot is being copied, the copy
         * operation is terminated.</p>  <p>The DB cluster snapshot must be in the
         * <code>available</code> state to be deleted.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteDBClusterSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBClusterSnapshotOutcome DeleteDBClusterSnapshot(const Model::DeleteDBClusterSnapshotRequest& request) const;

        /**
         * <p>Deletes a DB cluster snapshot. If the snapshot is being copied, the copy
         * operation is terminated.</p>  <p>The DB cluster snapshot must be in the
         * <code>available</code> state to be deleted.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteDBClusterSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBClusterSnapshotOutcomeCallable DeleteDBClusterSnapshotCallable(const Model::DeleteDBClusterSnapshotRequest& request) const;

        /**
         * <p>Deletes a DB cluster snapshot. If the snapshot is being copied, the copy
         * operation is terminated.</p>  <p>The DB cluster snapshot must be in the
         * <code>available</code> state to be deleted.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteDBClusterSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBClusterSnapshotAsync(const Model::DeleteDBClusterSnapshotRequest& request, const DeleteDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The DeleteDBInstance action deletes a previously provisioned DB instance.
         * When you delete a DB instance, all automated backups for that instance are
         * deleted and can't be recovered. Manual DB snapshots of the DB instance to be
         * deleted by <code>DeleteDBInstance</code> are not deleted.</p> <p> If you request
         * a final DB snapshot the status of the Amazon Neptune DB instance is
         * <code>deleting</code> until the DB snapshot is created. The API action
         * <code>DescribeDBInstance</code> is used to monitor the status of this operation.
         * The action can't be canceled or reverted once submitted.</p> <p>Note that when a
         * DB instance is in a failure state and has a status of <code>failed</code>,
         * <code>incompatible-restore</code>, or <code>incompatible-network</code>, you can
         * only delete it when the <code>SkipFinalSnapshot</code> parameter is set to
         * <code>true</code>.</p> <p>You can't delete a DB instance if it is the only
         * instance in the DB cluster, or if it has deletion protection
         * enabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBInstanceOutcome DeleteDBInstance(const Model::DeleteDBInstanceRequest& request) const;

        /**
         * <p>The DeleteDBInstance action deletes a previously provisioned DB instance.
         * When you delete a DB instance, all automated backups for that instance are
         * deleted and can't be recovered. Manual DB snapshots of the DB instance to be
         * deleted by <code>DeleteDBInstance</code> are not deleted.</p> <p> If you request
         * a final DB snapshot the status of the Amazon Neptune DB instance is
         * <code>deleting</code> until the DB snapshot is created. The API action
         * <code>DescribeDBInstance</code> is used to monitor the status of this operation.
         * The action can't be canceled or reverted once submitted.</p> <p>Note that when a
         * DB instance is in a failure state and has a status of <code>failed</code>,
         * <code>incompatible-restore</code>, or <code>incompatible-network</code>, you can
         * only delete it when the <code>SkipFinalSnapshot</code> parameter is set to
         * <code>true</code>.</p> <p>You can't delete a DB instance if it is the only
         * instance in the DB cluster, or if it has deletion protection
         * enabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteDBInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBInstanceOutcomeCallable DeleteDBInstanceCallable(const Model::DeleteDBInstanceRequest& request) const;

        /**
         * <p>The DeleteDBInstance action deletes a previously provisioned DB instance.
         * When you delete a DB instance, all automated backups for that instance are
         * deleted and can't be recovered. Manual DB snapshots of the DB instance to be
         * deleted by <code>DeleteDBInstance</code> are not deleted.</p> <p> If you request
         * a final DB snapshot the status of the Amazon Neptune DB instance is
         * <code>deleting</code> until the DB snapshot is created. The API action
         * <code>DescribeDBInstance</code> is used to monitor the status of this operation.
         * The action can't be canceled or reverted once submitted.</p> <p>Note that when a
         * DB instance is in a failure state and has a status of <code>failed</code>,
         * <code>incompatible-restore</code>, or <code>incompatible-network</code>, you can
         * only delete it when the <code>SkipFinalSnapshot</code> parameter is set to
         * <code>true</code>.</p> <p>You can't delete a DB instance if it is the only
         * instance in the DB cluster, or if it has deletion protection
         * enabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteDBInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBInstanceAsync(const Model::DeleteDBInstanceRequest& request, const DeleteDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified DBParameterGroup. The DBParameterGroup to be deleted
         * can't be associated with any DB instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteDBParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBParameterGroupOutcome DeleteDBParameterGroup(const Model::DeleteDBParameterGroupRequest& request) const;

        /**
         * <p>Deletes a specified DBParameterGroup. The DBParameterGroup to be deleted
         * can't be associated with any DB instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteDBParameterGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBParameterGroupOutcomeCallable DeleteDBParameterGroupCallable(const Model::DeleteDBParameterGroupRequest& request) const;

        /**
         * <p>Deletes a specified DBParameterGroup. The DBParameterGroup to be deleted
         * can't be associated with any DB instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteDBParameterGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBParameterGroupAsync(const Model::DeleteDBParameterGroupRequest& request, const DeleteDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a DB subnet group.</p>  <p>The specified database subnet group
         * must not be associated with any DB instances.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteDBSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBSubnetGroupOutcome DeleteDBSubnetGroup(const Model::DeleteDBSubnetGroupRequest& request) const;

        /**
         * <p>Deletes a DB subnet group.</p>  <p>The specified database subnet group
         * must not be associated with any DB instances.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteDBSubnetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBSubnetGroupOutcomeCallable DeleteDBSubnetGroupCallable(const Model::DeleteDBSubnetGroupRequest& request) const;

        /**
         * <p>Deletes a DB subnet group.</p>  <p>The specified database subnet group
         * must not be associated with any DB instances.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteDBSubnetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBSubnetGroupAsync(const Model::DeleteDBSubnetGroupRequest& request, const DeleteDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an event notification subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteEventSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventSubscriptionOutcome DeleteEventSubscription(const Model::DeleteEventSubscriptionRequest& request) const;

        /**
         * <p>Deletes an event notification subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteEventSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventSubscriptionOutcomeCallable DeleteEventSubscriptionCallable(const Model::DeleteEventSubscriptionRequest& request) const;

        /**
         * <p>Deletes an event notification subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteEventSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventSubscriptionAsync(const Model::DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about endpoints for an Amazon Neptune DB cluster.</p>
         *  <p>This operation can also return information for Amazon RDS clusters and
         * Amazon DocDB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBClusterEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterEndpointsOutcome DescribeDBClusterEndpoints(const Model::DescribeDBClusterEndpointsRequest& request) const;

        /**
         * <p>Returns information about endpoints for an Amazon Neptune DB cluster.</p>
         *  <p>This operation can also return information for Amazon RDS clusters and
         * Amazon DocDB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBClusterEndpoints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBClusterEndpointsOutcomeCallable DescribeDBClusterEndpointsCallable(const Model::DescribeDBClusterEndpointsRequest& request) const;

        /**
         * <p>Returns information about endpoints for an Amazon Neptune DB cluster.</p>
         *  <p>This operation can also return information for Amazon RDS clusters and
         * Amazon DocDB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBClusterEndpoints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBClusterEndpointsAsync(const Model::DescribeDBClusterEndpointsRequest& request, const DescribeDBClusterEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of <code>DBClusterParameterGroup</code> descriptions. If a
         * <code>DBClusterParameterGroupName</code> parameter is specified, the list will
         * contain only the description of the specified DB cluster parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBClusterParameterGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterParameterGroupsOutcome DescribeDBClusterParameterGroups(const Model::DescribeDBClusterParameterGroupsRequest& request) const;

        /**
         * <p> Returns a list of <code>DBClusterParameterGroup</code> descriptions. If a
         * <code>DBClusterParameterGroupName</code> parameter is specified, the list will
         * contain only the description of the specified DB cluster parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBClusterParameterGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBClusterParameterGroupsOutcomeCallable DescribeDBClusterParameterGroupsCallable(const Model::DescribeDBClusterParameterGroupsRequest& request) const;

        /**
         * <p> Returns a list of <code>DBClusterParameterGroup</code> descriptions. If a
         * <code>DBClusterParameterGroupName</code> parameter is specified, the list will
         * contain only the description of the specified DB cluster parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBClusterParameterGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBClusterParameterGroupsAsync(const Model::DescribeDBClusterParameterGroupsRequest& request, const DescribeDBClusterParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the detailed parameter list for a particular DB cluster parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBClusterParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterParametersOutcome DescribeDBClusterParameters(const Model::DescribeDBClusterParametersRequest& request) const;

        /**
         * <p>Returns the detailed parameter list for a particular DB cluster parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBClusterParameters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBClusterParametersOutcomeCallable DescribeDBClusterParametersCallable(const Model::DescribeDBClusterParametersRequest& request) const;

        /**
         * <p>Returns the detailed parameter list for a particular DB cluster parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBClusterParameters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBClusterParametersAsync(const Model::DescribeDBClusterParametersRequest& request, const DescribeDBClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of DB cluster snapshot attribute names and values for a manual
         * DB cluster snapshot.</p> <p>When sharing snapshots with other Amazon accounts,
         * <code>DescribeDBClusterSnapshotAttributes</code> returns the
         * <code>restore</code> attribute and a list of IDs for the Amazon accounts that
         * are authorized to copy or restore the manual DB cluster snapshot. If
         * <code>all</code> is included in the list of values for the <code>restore</code>
         * attribute, then the manual DB cluster snapshot is public and can be copied or
         * restored by all Amazon accounts.</p> <p>To add or remove access for an Amazon
         * account to copy or restore a manual DB cluster snapshot, or to make the manual
         * DB cluster snapshot public or private, use the
         * <a>ModifyDBClusterSnapshotAttribute</a> API action.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBClusterSnapshotAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterSnapshotAttributesOutcome DescribeDBClusterSnapshotAttributes(const Model::DescribeDBClusterSnapshotAttributesRequest& request) const;

        /**
         * <p>Returns a list of DB cluster snapshot attribute names and values for a manual
         * DB cluster snapshot.</p> <p>When sharing snapshots with other Amazon accounts,
         * <code>DescribeDBClusterSnapshotAttributes</code> returns the
         * <code>restore</code> attribute and a list of IDs for the Amazon accounts that
         * are authorized to copy or restore the manual DB cluster snapshot. If
         * <code>all</code> is included in the list of values for the <code>restore</code>
         * attribute, then the manual DB cluster snapshot is public and can be copied or
         * restored by all Amazon accounts.</p> <p>To add or remove access for an Amazon
         * account to copy or restore a manual DB cluster snapshot, or to make the manual
         * DB cluster snapshot public or private, use the
         * <a>ModifyDBClusterSnapshotAttribute</a> API action.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBClusterSnapshotAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBClusterSnapshotAttributesOutcomeCallable DescribeDBClusterSnapshotAttributesCallable(const Model::DescribeDBClusterSnapshotAttributesRequest& request) const;

        /**
         * <p>Returns a list of DB cluster snapshot attribute names and values for a manual
         * DB cluster snapshot.</p> <p>When sharing snapshots with other Amazon accounts,
         * <code>DescribeDBClusterSnapshotAttributes</code> returns the
         * <code>restore</code> attribute and a list of IDs for the Amazon accounts that
         * are authorized to copy or restore the manual DB cluster snapshot. If
         * <code>all</code> is included in the list of values for the <code>restore</code>
         * attribute, then the manual DB cluster snapshot is public and can be copied or
         * restored by all Amazon accounts.</p> <p>To add or remove access for an Amazon
         * account to copy or restore a manual DB cluster snapshot, or to make the manual
         * DB cluster snapshot public or private, use the
         * <a>ModifyDBClusterSnapshotAttribute</a> API action.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBClusterSnapshotAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBClusterSnapshotAttributesAsync(const Model::DescribeDBClusterSnapshotAttributesRequest& request, const DescribeDBClusterSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about DB cluster snapshots. This API action supports
         * pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBClusterSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterSnapshotsOutcome DescribeDBClusterSnapshots(const Model::DescribeDBClusterSnapshotsRequest& request) const;

        /**
         * <p>Returns information about DB cluster snapshots. This API action supports
         * pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBClusterSnapshots">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBClusterSnapshotsOutcomeCallable DescribeDBClusterSnapshotsCallable(const Model::DescribeDBClusterSnapshotsRequest& request) const;

        /**
         * <p>Returns information about DB cluster snapshots. This API action supports
         * pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBClusterSnapshots">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBClusterSnapshotsAsync(const Model::DescribeDBClusterSnapshotsRequest& request, const DescribeDBClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about provisioned DB clusters, and supports
         * pagination.</p>  <p>This operation can also return information for Amazon
         * RDS clusters and Amazon DocDB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClustersOutcome DescribeDBClusters(const Model::DescribeDBClustersRequest& request) const;

        /**
         * <p>Returns information about provisioned DB clusters, and supports
         * pagination.</p>  <p>This operation can also return information for Amazon
         * RDS clusters and Amazon DocDB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBClusters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBClustersOutcomeCallable DescribeDBClustersCallable(const Model::DescribeDBClustersRequest& request) const;

        /**
         * <p>Returns information about provisioned DB clusters, and supports
         * pagination.</p>  <p>This operation can also return information for Amazon
         * RDS clusters and Amazon DocDB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBClusters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBClustersAsync(const Model::DescribeDBClustersRequest& request, const DescribeDBClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the available DB engines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBEngineVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBEngineVersionsOutcome DescribeDBEngineVersions(const Model::DescribeDBEngineVersionsRequest& request) const;

        /**
         * <p>Returns a list of the available DB engines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBEngineVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBEngineVersionsOutcomeCallable DescribeDBEngineVersionsCallable(const Model::DescribeDBEngineVersionsRequest& request) const;

        /**
         * <p>Returns a list of the available DB engines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBEngineVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBEngineVersionsAsync(const Model::DescribeDBEngineVersionsRequest& request, const DescribeDBEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about provisioned instances, and supports pagination.</p>
         *  <p>This operation can also return information for Amazon RDS instances
         * and Amazon DocDB instances.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBInstancesOutcome DescribeDBInstances(const Model::DescribeDBInstancesRequest& request) const;

        /**
         * <p>Returns information about provisioned instances, and supports pagination.</p>
         *  <p>This operation can also return information for Amazon RDS instances
         * and Amazon DocDB instances.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBInstancesOutcomeCallable DescribeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request) const;

        /**
         * <p>Returns information about provisioned instances, and supports pagination.</p>
         *  <p>This operation can also return information for Amazon RDS instances
         * and Amazon DocDB instances.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of <code>DBParameterGroup</code> descriptions. If a
         * <code>DBParameterGroupName</code> is specified, the list will contain only the
         * description of the specified DB parameter group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBParameterGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBParameterGroupsOutcome DescribeDBParameterGroups(const Model::DescribeDBParameterGroupsRequest& request) const;

        /**
         * <p>Returns a list of <code>DBParameterGroup</code> descriptions. If a
         * <code>DBParameterGroupName</code> is specified, the list will contain only the
         * description of the specified DB parameter group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBParameterGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBParameterGroupsOutcomeCallable DescribeDBParameterGroupsCallable(const Model::DescribeDBParameterGroupsRequest& request) const;

        /**
         * <p>Returns a list of <code>DBParameterGroup</code> descriptions. If a
         * <code>DBParameterGroupName</code> is specified, the list will contain only the
         * description of the specified DB parameter group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBParameterGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBParameterGroupsAsync(const Model::DescribeDBParameterGroupsRequest& request, const DescribeDBParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the detailed parameter list for a particular DB parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBParametersOutcome DescribeDBParameters(const Model::DescribeDBParametersRequest& request) const;

        /**
         * <p>Returns the detailed parameter list for a particular DB parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBParameters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBParametersOutcomeCallable DescribeDBParametersCallable(const Model::DescribeDBParametersRequest& request) const;

        /**
         * <p>Returns the detailed parameter list for a particular DB parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBParameters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBParametersAsync(const Model::DescribeDBParametersRequest& request, const DescribeDBParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of DBSubnetGroup descriptions. If a DBSubnetGroupName is
         * specified, the list will contain only the descriptions of the specified
         * DBSubnetGroup.</p> <p>For an overview of CIDR ranges, go to the <a
         * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia
         * Tutorial</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBSubnetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBSubnetGroupsOutcome DescribeDBSubnetGroups(const Model::DescribeDBSubnetGroupsRequest& request) const;

        /**
         * <p>Returns a list of DBSubnetGroup descriptions. If a DBSubnetGroupName is
         * specified, the list will contain only the descriptions of the specified
         * DBSubnetGroup.</p> <p>For an overview of CIDR ranges, go to the <a
         * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia
         * Tutorial</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBSubnetGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBSubnetGroupsOutcomeCallable DescribeDBSubnetGroupsCallable(const Model::DescribeDBSubnetGroupsRequest& request) const;

        /**
         * <p>Returns a list of DBSubnetGroup descriptions. If a DBSubnetGroupName is
         * specified, the list will contain only the descriptions of the specified
         * DBSubnetGroup.</p> <p>For an overview of CIDR ranges, go to the <a
         * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia
         * Tutorial</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBSubnetGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBSubnetGroupsAsync(const Model::DescribeDBSubnetGroupsRequest& request, const DescribeDBSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the default engine and system parameter information for the cluster
         * database engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeEngineDefaultClusterParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEngineDefaultClusterParametersOutcome DescribeEngineDefaultClusterParameters(const Model::DescribeEngineDefaultClusterParametersRequest& request) const;

        /**
         * <p>Returns the default engine and system parameter information for the cluster
         * database engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeEngineDefaultClusterParameters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEngineDefaultClusterParametersOutcomeCallable DescribeEngineDefaultClusterParametersCallable(const Model::DescribeEngineDefaultClusterParametersRequest& request) const;

        /**
         * <p>Returns the default engine and system parameter information for the cluster
         * database engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeEngineDefaultClusterParameters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEngineDefaultClusterParametersAsync(const Model::DescribeEngineDefaultClusterParametersRequest& request, const DescribeEngineDefaultClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the default engine and system parameter information for the specified
         * database engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeEngineDefaultParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEngineDefaultParametersOutcome DescribeEngineDefaultParameters(const Model::DescribeEngineDefaultParametersRequest& request) const;

        /**
         * <p>Returns the default engine and system parameter information for the specified
         * database engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeEngineDefaultParameters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEngineDefaultParametersOutcomeCallable DescribeEngineDefaultParametersCallable(const Model::DescribeEngineDefaultParametersRequest& request) const;

        /**
         * <p>Returns the default engine and system parameter information for the specified
         * database engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeEngineDefaultParameters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEngineDefaultParametersAsync(const Model::DescribeEngineDefaultParametersRequest& request, const DescribeEngineDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays a list of categories for all event source types, or, if specified,
         * for a specified source type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeEventCategories">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventCategoriesOutcome DescribeEventCategories(const Model::DescribeEventCategoriesRequest& request) const;

        /**
         * <p>Displays a list of categories for all event source types, or, if specified,
         * for a specified source type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeEventCategories">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventCategoriesOutcomeCallable DescribeEventCategoriesCallable(const Model::DescribeEventCategoriesRequest& request) const;

        /**
         * <p>Displays a list of categories for all event source types, or, if specified,
         * for a specified source type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeEventCategories">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventCategoriesAsync(const Model::DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the subscription descriptions for a customer account. The
         * description for a subscription includes SubscriptionName, SNSTopicARN,
         * CustomerID, SourceType, SourceID, CreationTime, and Status.</p> <p>If you
         * specify a SubscriptionName, lists the description for that
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeEventSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventSubscriptionsOutcome DescribeEventSubscriptions(const Model::DescribeEventSubscriptionsRequest& request) const;

        /**
         * <p>Lists all the subscription descriptions for a customer account. The
         * description for a subscription includes SubscriptionName, SNSTopicARN,
         * CustomerID, SourceType, SourceID, CreationTime, and Status.</p> <p>If you
         * specify a SubscriptionName, lists the description for that
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeEventSubscriptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventSubscriptionsOutcomeCallable DescribeEventSubscriptionsCallable(const Model::DescribeEventSubscriptionsRequest& request) const;

        /**
         * <p>Lists all the subscription descriptions for a customer account. The
         * description for a subscription includes SubscriptionName, SNSTopicARN,
         * CustomerID, SourceType, SourceID, CreationTime, and Status.</p> <p>If you
         * specify a SubscriptionName, lists the description for that
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeEventSubscriptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventSubscriptionsAsync(const Model::DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns events related to DB instances, DB security groups, DB snapshots, and
         * DB parameter groups for the past 14 days. Events specific to a particular DB
         * instance, DB security group, database snapshot, or DB parameter group can be
         * obtained by providing the name as a parameter. By default, the past hour of
         * events are returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventsOutcome DescribeEvents(const Model::DescribeEventsRequest& request) const;

        /**
         * <p>Returns events related to DB instances, DB security groups, DB snapshots, and
         * DB parameter groups for the past 14 days. Events specific to a particular DB
         * instance, DB security group, database snapshot, or DB parameter group can be
         * obtained by providing the name as a parameter. By default, the past hour of
         * events are returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventsOutcomeCallable DescribeEventsCallable(const Model::DescribeEventsRequest& request) const;

        /**
         * <p>Returns events related to DB instances, DB security groups, DB snapshots, and
         * DB parameter groups for the past 14 days. Events specific to a particular DB
         * instance, DB security group, database snapshot, or DB parameter group can be
         * obtained by providing the name as a parameter. By default, the past hour of
         * events are returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventsAsync(const Model::DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of orderable DB instance options for the specified
         * engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeOrderableDBInstanceOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrderableDBInstanceOptionsOutcome DescribeOrderableDBInstanceOptions(const Model::DescribeOrderableDBInstanceOptionsRequest& request) const;

        /**
         * <p>Returns a list of orderable DB instance options for the specified
         * engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeOrderableDBInstanceOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOrderableDBInstanceOptionsOutcomeCallable DescribeOrderableDBInstanceOptionsCallable(const Model::DescribeOrderableDBInstanceOptionsRequest& request) const;

        /**
         * <p>Returns a list of orderable DB instance options for the specified
         * engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeOrderableDBInstanceOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOrderableDBInstanceOptionsAsync(const Model::DescribeOrderableDBInstanceOptionsRequest& request, const DescribeOrderableDBInstanceOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of resources (for example, DB instances) that have at least
         * one pending maintenance action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribePendingMaintenanceActions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePendingMaintenanceActionsOutcome DescribePendingMaintenanceActions(const Model::DescribePendingMaintenanceActionsRequest& request) const;

        /**
         * <p>Returns a list of resources (for example, DB instances) that have at least
         * one pending maintenance action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribePendingMaintenanceActions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePendingMaintenanceActionsOutcomeCallable DescribePendingMaintenanceActionsCallable(const Model::DescribePendingMaintenanceActionsRequest& request) const;

        /**
         * <p>Returns a list of resources (for example, DB instances) that have at least
         * one pending maintenance action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribePendingMaintenanceActions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePendingMaintenanceActionsAsync(const Model::DescribePendingMaintenanceActionsRequest& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>You can call <a>DescribeValidDBInstanceModifications</a> to learn what
         * modifications you can make to your DB instance. You can use this information
         * when you call <a>ModifyDBInstance</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeValidDBInstanceModifications">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeValidDBInstanceModificationsOutcome DescribeValidDBInstanceModifications(const Model::DescribeValidDBInstanceModificationsRequest& request) const;

        /**
         * <p>You can call <a>DescribeValidDBInstanceModifications</a> to learn what
         * modifications you can make to your DB instance. You can use this information
         * when you call <a>ModifyDBInstance</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeValidDBInstanceModifications">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeValidDBInstanceModificationsOutcomeCallable DescribeValidDBInstanceModificationsCallable(const Model::DescribeValidDBInstanceModificationsRequest& request) const;

        /**
         * <p>You can call <a>DescribeValidDBInstanceModifications</a> to learn what
         * modifications you can make to your DB instance. You can use this information
         * when you call <a>ModifyDBInstance</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeValidDBInstanceModifications">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeValidDBInstanceModificationsAsync(const Model::DescribeValidDBInstanceModificationsRequest& request, const DescribeValidDBInstanceModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Forces a failover for a DB cluster.</p> <p>A failover for a DB cluster
         * promotes one of the Read Replicas (read-only instances) in the DB cluster to be
         * the primary instance (the cluster writer).</p> <p>Amazon Neptune will
         * automatically fail over to a Read Replica, if one exists, when the primary
         * instance fails. You can force a failover when you want to simulate a failure of
         * a primary instance for testing. Because each instance in a DB cluster has its
         * own endpoint address, you will need to clean up and re-establish any existing
         * connections that use those endpoint addresses when the failover is
         * complete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/FailoverDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::FailoverDBClusterOutcome FailoverDBCluster(const Model::FailoverDBClusterRequest& request) const;

        /**
         * <p>Forces a failover for a DB cluster.</p> <p>A failover for a DB cluster
         * promotes one of the Read Replicas (read-only instances) in the DB cluster to be
         * the primary instance (the cluster writer).</p> <p>Amazon Neptune will
         * automatically fail over to a Read Replica, if one exists, when the primary
         * instance fails. You can force a failover when you want to simulate a failure of
         * a primary instance for testing. Because each instance in a DB cluster has its
         * own endpoint address, you will need to clean up and re-establish any existing
         * connections that use those endpoint addresses when the failover is
         * complete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/FailoverDBCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::FailoverDBClusterOutcomeCallable FailoverDBClusterCallable(const Model::FailoverDBClusterRequest& request) const;

        /**
         * <p>Forces a failover for a DB cluster.</p> <p>A failover for a DB cluster
         * promotes one of the Read Replicas (read-only instances) in the DB cluster to be
         * the primary instance (the cluster writer).</p> <p>Amazon Neptune will
         * automatically fail over to a Read Replica, if one exists, when the primary
         * instance fails. You can force a failover when you want to simulate a failure of
         * a primary instance for testing. Because each instance in a DB cluster has its
         * own endpoint address, you will need to clean up and re-establish any existing
         * connections that use those endpoint addresses when the failover is
         * complete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/FailoverDBCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void FailoverDBClusterAsync(const Model::FailoverDBClusterRequest& request, const FailoverDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all tags on an Amazon Neptune resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists all tags on an Amazon Neptune resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists all tags on an Amazon Neptune resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modify a setting for a DB cluster. You can change one or more database
         * configuration parameters by specifying these parameters and the new values in
         * the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBClusterOutcome ModifyDBCluster(const Model::ModifyDBClusterRequest& request) const;

        /**
         * <p>Modify a setting for a DB cluster. You can change one or more database
         * configuration parameters by specifying these parameters and the new values in
         * the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBClusterOutcomeCallable ModifyDBClusterCallable(const Model::ModifyDBClusterRequest& request) const;

        /**
         * <p>Modify a setting for a DB cluster. You can change one or more database
         * configuration parameters by specifying these parameters and the new values in
         * the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBClusterAsync(const Model::ModifyDBClusterRequest& request, const ModifyDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the properties of an endpoint in an Amazon Neptune DB
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBClusterEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBClusterEndpointOutcome ModifyDBClusterEndpoint(const Model::ModifyDBClusterEndpointRequest& request) const;

        /**
         * <p>Modifies the properties of an endpoint in an Amazon Neptune DB
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBClusterEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBClusterEndpointOutcomeCallable ModifyDBClusterEndpointCallable(const Model::ModifyDBClusterEndpointRequest& request) const;

        /**
         * <p>Modifies the properties of an endpoint in an Amazon Neptune DB
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBClusterEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBClusterEndpointAsync(const Model::ModifyDBClusterEndpointRequest& request, const ModifyDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Modifies the parameters of a DB cluster parameter group. To modify more than
         * one parameter, submit a list of the following: <code>ParameterName</code>,
         * <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20
         * parameters can be modified in a single request.</p>  <p>Changes to dynamic
         * parameters are applied immediately. Changes to static parameters require a
         * reboot without failover to the DB cluster associated with the parameter group
         * before the change can take effect.</p>   <p>After you create a
         * DB cluster parameter group, you should wait at least 5 minutes before creating
         * your first DB cluster that uses that DB cluster parameter group as the default
         * parameter group. This allows Amazon Neptune to fully complete the create action
         * before the parameter group is used as the default for a new DB cluster. This is
         * especially important for parameters that are critical when creating the default
         * database for a DB cluster, such as the character set for the default database
         * defined by the <code>character_set_database</code> parameter. You can use the
         * <i>Parameter Groups</i> option of the Amazon Neptune console or the
         * <a>DescribeDBClusterParameters</a> command to verify that your DB cluster
         * parameter group has been created or modified.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBClusterParameterGroupOutcome ModifyDBClusterParameterGroup(const Model::ModifyDBClusterParameterGroupRequest& request) const;

        /**
         * <p> Modifies the parameters of a DB cluster parameter group. To modify more than
         * one parameter, submit a list of the following: <code>ParameterName</code>,
         * <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20
         * parameters can be modified in a single request.</p>  <p>Changes to dynamic
         * parameters are applied immediately. Changes to static parameters require a
         * reboot without failover to the DB cluster associated with the parameter group
         * before the change can take effect.</p>   <p>After you create a
         * DB cluster parameter group, you should wait at least 5 minutes before creating
         * your first DB cluster that uses that DB cluster parameter group as the default
         * parameter group. This allows Amazon Neptune to fully complete the create action
         * before the parameter group is used as the default for a new DB cluster. This is
         * especially important for parameters that are critical when creating the default
         * database for a DB cluster, such as the character set for the default database
         * defined by the <code>character_set_database</code> parameter. You can use the
         * <i>Parameter Groups</i> option of the Amazon Neptune console or the
         * <a>DescribeDBClusterParameters</a> command to verify that your DB cluster
         * parameter group has been created or modified.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBClusterParameterGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBClusterParameterGroupOutcomeCallable ModifyDBClusterParameterGroupCallable(const Model::ModifyDBClusterParameterGroupRequest& request) const;

        /**
         * <p> Modifies the parameters of a DB cluster parameter group. To modify more than
         * one parameter, submit a list of the following: <code>ParameterName</code>,
         * <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20
         * parameters can be modified in a single request.</p>  <p>Changes to dynamic
         * parameters are applied immediately. Changes to static parameters require a
         * reboot without failover to the DB cluster associated with the parameter group
         * before the change can take effect.</p>   <p>After you create a
         * DB cluster parameter group, you should wait at least 5 minutes before creating
         * your first DB cluster that uses that DB cluster parameter group as the default
         * parameter group. This allows Amazon Neptune to fully complete the create action
         * before the parameter group is used as the default for a new DB cluster. This is
         * especially important for parameters that are critical when creating the default
         * database for a DB cluster, such as the character set for the default database
         * defined by the <code>character_set_database</code> parameter. You can use the
         * <i>Parameter Groups</i> option of the Amazon Neptune console or the
         * <a>DescribeDBClusterParameters</a> command to verify that your DB cluster
         * parameter group has been created or modified.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBClusterParameterGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBClusterParameterGroupAsync(const Model::ModifyDBClusterParameterGroupRequest& request, const ModifyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds an attribute and values to, or removes an attribute and values from, a
         * manual DB cluster snapshot.</p> <p>To share a manual DB cluster snapshot with
         * other Amazon accounts, specify <code>restore</code> as the
         * <code>AttributeName</code> and use the <code>ValuesToAdd</code> parameter to add
         * a list of IDs of the Amazon accounts that are authorized to restore the manual
         * DB cluster snapshot. Use the value <code>all</code> to make the manual DB
         * cluster snapshot public, which means that it can be copied or restored by all
         * Amazon accounts. Do not add the <code>all</code> value for any manual DB cluster
         * snapshots that contain private information that you don't want available to all
         * Amazon accounts. If a manual DB cluster snapshot is encrypted, it can be shared,
         * but only by specifying a list of authorized Amazon account IDs for the
         * <code>ValuesToAdd</code> parameter. You can't use <code>all</code> as a value
         * for that parameter in this case.</p> <p>To view which Amazon accounts have
         * access to copy or restore a manual DB cluster snapshot, or whether a manual DB
         * cluster snapshot public or private, use the
         * <a>DescribeDBClusterSnapshotAttributes</a> API action.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBClusterSnapshotAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBClusterSnapshotAttributeOutcome ModifyDBClusterSnapshotAttribute(const Model::ModifyDBClusterSnapshotAttributeRequest& request) const;

        /**
         * <p>Adds an attribute and values to, or removes an attribute and values from, a
         * manual DB cluster snapshot.</p> <p>To share a manual DB cluster snapshot with
         * other Amazon accounts, specify <code>restore</code> as the
         * <code>AttributeName</code> and use the <code>ValuesToAdd</code> parameter to add
         * a list of IDs of the Amazon accounts that are authorized to restore the manual
         * DB cluster snapshot. Use the value <code>all</code> to make the manual DB
         * cluster snapshot public, which means that it can be copied or restored by all
         * Amazon accounts. Do not add the <code>all</code> value for any manual DB cluster
         * snapshots that contain private information that you don't want available to all
         * Amazon accounts. If a manual DB cluster snapshot is encrypted, it can be shared,
         * but only by specifying a list of authorized Amazon account IDs for the
         * <code>ValuesToAdd</code> parameter. You can't use <code>all</code> as a value
         * for that parameter in this case.</p> <p>To view which Amazon accounts have
         * access to copy or restore a manual DB cluster snapshot, or whether a manual DB
         * cluster snapshot public or private, use the
         * <a>DescribeDBClusterSnapshotAttributes</a> API action.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBClusterSnapshotAttribute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBClusterSnapshotAttributeOutcomeCallable ModifyDBClusterSnapshotAttributeCallable(const Model::ModifyDBClusterSnapshotAttributeRequest& request) const;

        /**
         * <p>Adds an attribute and values to, or removes an attribute and values from, a
         * manual DB cluster snapshot.</p> <p>To share a manual DB cluster snapshot with
         * other Amazon accounts, specify <code>restore</code> as the
         * <code>AttributeName</code> and use the <code>ValuesToAdd</code> parameter to add
         * a list of IDs of the Amazon accounts that are authorized to restore the manual
         * DB cluster snapshot. Use the value <code>all</code> to make the manual DB
         * cluster snapshot public, which means that it can be copied or restored by all
         * Amazon accounts. Do not add the <code>all</code> value for any manual DB cluster
         * snapshots that contain private information that you don't want available to all
         * Amazon accounts. If a manual DB cluster snapshot is encrypted, it can be shared,
         * but only by specifying a list of authorized Amazon account IDs for the
         * <code>ValuesToAdd</code> parameter. You can't use <code>all</code> as a value
         * for that parameter in this case.</p> <p>To view which Amazon accounts have
         * access to copy or restore a manual DB cluster snapshot, or whether a manual DB
         * cluster snapshot public or private, use the
         * <a>DescribeDBClusterSnapshotAttributes</a> API action.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBClusterSnapshotAttribute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBClusterSnapshotAttributeAsync(const Model::ModifyDBClusterSnapshotAttributeRequest& request, const ModifyDBClusterSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies settings for a DB instance. You can change one or more database
         * configuration parameters by specifying these parameters and the new values in
         * the request. To learn what modifications you can make to your DB instance, call
         * <a>DescribeValidDBInstanceModifications</a> before you call
         * <a>ModifyDBInstance</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBInstanceOutcome ModifyDBInstance(const Model::ModifyDBInstanceRequest& request) const;

        /**
         * <p>Modifies settings for a DB instance. You can change one or more database
         * configuration parameters by specifying these parameters and the new values in
         * the request. To learn what modifications you can make to your DB instance, call
         * <a>DescribeValidDBInstanceModifications</a> before you call
         * <a>ModifyDBInstance</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBInstanceOutcomeCallable ModifyDBInstanceCallable(const Model::ModifyDBInstanceRequest& request) const;

        /**
         * <p>Modifies settings for a DB instance. You can change one or more database
         * configuration parameters by specifying these parameters and the new values in
         * the request. To learn what modifications you can make to your DB instance, call
         * <a>DescribeValidDBInstanceModifications</a> before you call
         * <a>ModifyDBInstance</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBInstanceAsync(const Model::ModifyDBInstanceRequest& request, const ModifyDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the parameters of a DB parameter group. To modify more than one
         * parameter, submit a list of the following: <code>ParameterName</code>,
         * <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20
         * parameters can be modified in a single request.</p>  <p>Changes to dynamic
         * parameters are applied immediately. Changes to static parameters require a
         * reboot without failover to the DB instance associated with the parameter group
         * before the change can take effect.</p>   <p>After you modify a
         * DB parameter group, you should wait at least 5 minutes before creating your
         * first DB instance that uses that DB parameter group as the default parameter
         * group. This allows Amazon Neptune to fully complete the modify action before the
         * parameter group is used as the default for a new DB instance. This is especially
         * important for parameters that are critical when creating the default database
         * for a DB instance, such as the character set for the default database defined by
         * the <code>character_set_database</code> parameter. You can use the <i>Parameter
         * Groups</i> option of the Amazon Neptune console or the
         * <i>DescribeDBParameters</i> command to verify that your DB parameter group has
         * been created or modified.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBParameterGroupOutcome ModifyDBParameterGroup(const Model::ModifyDBParameterGroupRequest& request) const;

        /**
         * <p>Modifies the parameters of a DB parameter group. To modify more than one
         * parameter, submit a list of the following: <code>ParameterName</code>,
         * <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20
         * parameters can be modified in a single request.</p>  <p>Changes to dynamic
         * parameters are applied immediately. Changes to static parameters require a
         * reboot without failover to the DB instance associated with the parameter group
         * before the change can take effect.</p>   <p>After you modify a
         * DB parameter group, you should wait at least 5 minutes before creating your
         * first DB instance that uses that DB parameter group as the default parameter
         * group. This allows Amazon Neptune to fully complete the modify action before the
         * parameter group is used as the default for a new DB instance. This is especially
         * important for parameters that are critical when creating the default database
         * for a DB instance, such as the character set for the default database defined by
         * the <code>character_set_database</code> parameter. You can use the <i>Parameter
         * Groups</i> option of the Amazon Neptune console or the
         * <i>DescribeDBParameters</i> command to verify that your DB parameter group has
         * been created or modified.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBParameterGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBParameterGroupOutcomeCallable ModifyDBParameterGroupCallable(const Model::ModifyDBParameterGroupRequest& request) const;

        /**
         * <p>Modifies the parameters of a DB parameter group. To modify more than one
         * parameter, submit a list of the following: <code>ParameterName</code>,
         * <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20
         * parameters can be modified in a single request.</p>  <p>Changes to dynamic
         * parameters are applied immediately. Changes to static parameters require a
         * reboot without failover to the DB instance associated with the parameter group
         * before the change can take effect.</p>   <p>After you modify a
         * DB parameter group, you should wait at least 5 minutes before creating your
         * first DB instance that uses that DB parameter group as the default parameter
         * group. This allows Amazon Neptune to fully complete the modify action before the
         * parameter group is used as the default for a new DB instance. This is especially
         * important for parameters that are critical when creating the default database
         * for a DB instance, such as the character set for the default database defined by
         * the <code>character_set_database</code> parameter. You can use the <i>Parameter
         * Groups</i> option of the Amazon Neptune console or the
         * <i>DescribeDBParameters</i> command to verify that your DB parameter group has
         * been created or modified.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBParameterGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBParameterGroupAsync(const Model::ModifyDBParameterGroupRequest& request, const ModifyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies an existing DB subnet group. DB subnet groups must contain at least
         * one subnet in at least two AZs in the Amazon Region.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBSubnetGroupOutcome ModifyDBSubnetGroup(const Model::ModifyDBSubnetGroupRequest& request) const;

        /**
         * <p>Modifies an existing DB subnet group. DB subnet groups must contain at least
         * one subnet in at least two AZs in the Amazon Region.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBSubnetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBSubnetGroupOutcomeCallable ModifyDBSubnetGroupCallable(const Model::ModifyDBSubnetGroupRequest& request) const;

        /**
         * <p>Modifies an existing DB subnet group. DB subnet groups must contain at least
         * one subnet in at least two AZs in the Amazon Region.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBSubnetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBSubnetGroupAsync(const Model::ModifyDBSubnetGroupRequest& request, const ModifyDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies an existing event notification subscription. Note that you can't
         * modify the source identifiers using this call; to change source identifiers for
         * a subscription, use the <a>AddSourceIdentifierToSubscription</a> and
         * <a>RemoveSourceIdentifierFromSubscription</a> calls.</p> <p>You can see a list
         * of the event categories for a given SourceType by using the
         * <b>DescribeEventCategories</b> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyEventSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyEventSubscriptionOutcome ModifyEventSubscription(const Model::ModifyEventSubscriptionRequest& request) const;

        /**
         * <p>Modifies an existing event notification subscription. Note that you can't
         * modify the source identifiers using this call; to change source identifiers for
         * a subscription, use the <a>AddSourceIdentifierToSubscription</a> and
         * <a>RemoveSourceIdentifierFromSubscription</a> calls.</p> <p>You can see a list
         * of the event categories for a given SourceType by using the
         * <b>DescribeEventCategories</b> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyEventSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyEventSubscriptionOutcomeCallable ModifyEventSubscriptionCallable(const Model::ModifyEventSubscriptionRequest& request) const;

        /**
         * <p>Modifies an existing event notification subscription. Note that you can't
         * modify the source identifiers using this call; to change source identifiers for
         * a subscription, use the <a>AddSourceIdentifierToSubscription</a> and
         * <a>RemoveSourceIdentifierFromSubscription</a> calls.</p> <p>You can see a list
         * of the event categories for a given SourceType by using the
         * <b>DescribeEventCategories</b> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyEventSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyEventSubscriptionAsync(const Model::ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Not supported.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/PromoteReadReplicaDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::PromoteReadReplicaDBClusterOutcome PromoteReadReplicaDBCluster(const Model::PromoteReadReplicaDBClusterRequest& request) const;

        /**
         * <p>Not supported.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/PromoteReadReplicaDBCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PromoteReadReplicaDBClusterOutcomeCallable PromoteReadReplicaDBClusterCallable(const Model::PromoteReadReplicaDBClusterRequest& request) const;

        /**
         * <p>Not supported.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/PromoteReadReplicaDBCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PromoteReadReplicaDBClusterAsync(const Model::PromoteReadReplicaDBClusterRequest& request, const PromoteReadReplicaDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>You might need to reboot your DB instance, usually for maintenance reasons.
         * For example, if you make certain modifications, or if you change the DB
         * parameter group associated with the DB instance, you must reboot the instance
         * for the changes to take effect.</p> <p>Rebooting a DB instance restarts the
         * database engine service. Rebooting a DB instance results in a momentary outage,
         * during which the DB instance status is set to rebooting.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/RebootDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootDBInstanceOutcome RebootDBInstance(const Model::RebootDBInstanceRequest& request) const;

        /**
         * <p>You might need to reboot your DB instance, usually for maintenance reasons.
         * For example, if you make certain modifications, or if you change the DB
         * parameter group associated with the DB instance, you must reboot the instance
         * for the changes to take effect.</p> <p>Rebooting a DB instance restarts the
         * database engine service. Rebooting a DB instance results in a momentary outage,
         * during which the DB instance status is set to rebooting.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/RebootDBInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RebootDBInstanceOutcomeCallable RebootDBInstanceCallable(const Model::RebootDBInstanceRequest& request) const;

        /**
         * <p>You might need to reboot your DB instance, usually for maintenance reasons.
         * For example, if you make certain modifications, or if you change the DB
         * parameter group associated with the DB instance, you must reboot the instance
         * for the changes to take effect.</p> <p>Rebooting a DB instance restarts the
         * database engine service. Rebooting a DB instance results in a momentary outage,
         * during which the DB instance status is set to rebooting.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/RebootDBInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebootDBInstanceAsync(const Model::RebootDBInstanceRequest& request, const RebootDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates an Identity and Access Management (IAM) role from a DB
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/RemoveRoleFromDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveRoleFromDBClusterOutcome RemoveRoleFromDBCluster(const Model::RemoveRoleFromDBClusterRequest& request) const;

        /**
         * <p>Disassociates an Identity and Access Management (IAM) role from a DB
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/RemoveRoleFromDBCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveRoleFromDBClusterOutcomeCallable RemoveRoleFromDBClusterCallable(const Model::RemoveRoleFromDBClusterRequest& request) const;

        /**
         * <p>Disassociates an Identity and Access Management (IAM) role from a DB
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/RemoveRoleFromDBCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveRoleFromDBClusterAsync(const Model::RemoveRoleFromDBClusterRequest& request, const RemoveRoleFromDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a source identifier from an existing event notification
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/RemoveSourceIdentifierFromSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveSourceIdentifierFromSubscriptionOutcome RemoveSourceIdentifierFromSubscription(const Model::RemoveSourceIdentifierFromSubscriptionRequest& request) const;

        /**
         * <p>Removes a source identifier from an existing event notification
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/RemoveSourceIdentifierFromSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveSourceIdentifierFromSubscriptionOutcomeCallable RemoveSourceIdentifierFromSubscriptionCallable(const Model::RemoveSourceIdentifierFromSubscriptionRequest& request) const;

        /**
         * <p>Removes a source identifier from an existing event notification
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/RemoveSourceIdentifierFromSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveSourceIdentifierFromSubscriptionAsync(const Model::RemoveSourceIdentifierFromSubscriptionRequest& request, const RemoveSourceIdentifierFromSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes metadata tags from an Amazon Neptune resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * <p>Removes metadata tags from an Amazon Neptune resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * <p>Removes metadata tags from an Amazon Neptune resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsFromResourceAsync(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Modifies the parameters of a DB cluster parameter group to the default
         * value. To reset specific parameters submit a list of the following:
         * <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB
         * cluster parameter group, specify the <code>DBClusterParameterGroupName</code>
         * and <code>ResetAllParameters</code> parameters.</p> <p> When resetting the
         * entire group, dynamic parameters are updated immediately and static parameters
         * are set to <code>pending-reboot</code> to take effect on the next DB instance
         * restart or <a>RebootDBInstance</a> request. You must call
         * <a>RebootDBInstance</a> for every DB instance in your DB cluster that you want
         * the updated static parameter to apply to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ResetDBClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetDBClusterParameterGroupOutcome ResetDBClusterParameterGroup(const Model::ResetDBClusterParameterGroupRequest& request) const;

        /**
         * <p> Modifies the parameters of a DB cluster parameter group to the default
         * value. To reset specific parameters submit a list of the following:
         * <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB
         * cluster parameter group, specify the <code>DBClusterParameterGroupName</code>
         * and <code>ResetAllParameters</code> parameters.</p> <p> When resetting the
         * entire group, dynamic parameters are updated immediately and static parameters
         * are set to <code>pending-reboot</code> to take effect on the next DB instance
         * restart or <a>RebootDBInstance</a> request. You must call
         * <a>RebootDBInstance</a> for every DB instance in your DB cluster that you want
         * the updated static parameter to apply to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ResetDBClusterParameterGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetDBClusterParameterGroupOutcomeCallable ResetDBClusterParameterGroupCallable(const Model::ResetDBClusterParameterGroupRequest& request) const;

        /**
         * <p> Modifies the parameters of a DB cluster parameter group to the default
         * value. To reset specific parameters submit a list of the following:
         * <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB
         * cluster parameter group, specify the <code>DBClusterParameterGroupName</code>
         * and <code>ResetAllParameters</code> parameters.</p> <p> When resetting the
         * entire group, dynamic parameters are updated immediately and static parameters
         * are set to <code>pending-reboot</code> to take effect on the next DB instance
         * restart or <a>RebootDBInstance</a> request. You must call
         * <a>RebootDBInstance</a> for every DB instance in your DB cluster that you want
         * the updated static parameter to apply to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ResetDBClusterParameterGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetDBClusterParameterGroupAsync(const Model::ResetDBClusterParameterGroupRequest& request, const ResetDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the parameters of a DB parameter group to the engine/system default
         * value. To reset specific parameters, provide a list of the following:
         * <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB
         * parameter group, specify the <code>DBParameterGroup</code> name and
         * <code>ResetAllParameters</code> parameters. When resetting the entire group,
         * dynamic parameters are updated immediately and static parameters are set to
         * <code>pending-reboot</code> to take effect on the next DB instance restart or
         * <code>RebootDBInstance</code> request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ResetDBParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetDBParameterGroupOutcome ResetDBParameterGroup(const Model::ResetDBParameterGroupRequest& request) const;

        /**
         * <p>Modifies the parameters of a DB parameter group to the engine/system default
         * value. To reset specific parameters, provide a list of the following:
         * <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB
         * parameter group, specify the <code>DBParameterGroup</code> name and
         * <code>ResetAllParameters</code> parameters. When resetting the entire group,
         * dynamic parameters are updated immediately and static parameters are set to
         * <code>pending-reboot</code> to take effect on the next DB instance restart or
         * <code>RebootDBInstance</code> request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ResetDBParameterGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetDBParameterGroupOutcomeCallable ResetDBParameterGroupCallable(const Model::ResetDBParameterGroupRequest& request) const;

        /**
         * <p>Modifies the parameters of a DB parameter group to the engine/system default
         * value. To reset specific parameters, provide a list of the following:
         * <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB
         * parameter group, specify the <code>DBParameterGroup</code> name and
         * <code>ResetAllParameters</code> parameters. When resetting the entire group,
         * dynamic parameters are updated immediately and static parameters are set to
         * <code>pending-reboot</code> to take effect on the next DB instance restart or
         * <code>RebootDBInstance</code> request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ResetDBParameterGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetDBParameterGroupAsync(const Model::ResetDBParameterGroupRequest& request, const ResetDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new DB cluster from a DB snapshot or DB cluster snapshot.</p> <p>If
         * a DB snapshot is specified, the target DB cluster is created from the source DB
         * snapshot with a default configuration and default security group.</p> <p>If a DB
         * cluster snapshot is specified, the target DB cluster is created from the source
         * DB cluster restore point with the same configuration as the original source DB
         * cluster, except that the new DB cluster is created with the default security
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/RestoreDBClusterFromSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreDBClusterFromSnapshotOutcome RestoreDBClusterFromSnapshot(const Model::RestoreDBClusterFromSnapshotRequest& request) const;

        /**
         * <p>Creates a new DB cluster from a DB snapshot or DB cluster snapshot.</p> <p>If
         * a DB snapshot is specified, the target DB cluster is created from the source DB
         * snapshot with a default configuration and default security group.</p> <p>If a DB
         * cluster snapshot is specified, the target DB cluster is created from the source
         * DB cluster restore point with the same configuration as the original source DB
         * cluster, except that the new DB cluster is created with the default security
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/RestoreDBClusterFromSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreDBClusterFromSnapshotOutcomeCallable RestoreDBClusterFromSnapshotCallable(const Model::RestoreDBClusterFromSnapshotRequest& request) const;

        /**
         * <p>Creates a new DB cluster from a DB snapshot or DB cluster snapshot.</p> <p>If
         * a DB snapshot is specified, the target DB cluster is created from the source DB
         * snapshot with a default configuration and default security group.</p> <p>If a DB
         * cluster snapshot is specified, the target DB cluster is created from the source
         * DB cluster restore point with the same configuration as the original source DB
         * cluster, except that the new DB cluster is created with the default security
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/RestoreDBClusterFromSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreDBClusterFromSnapshotAsync(const Model::RestoreDBClusterFromSnapshotRequest& request, const RestoreDBClusterFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restores a DB cluster to an arbitrary point in time. Users can restore to any
         * point in time before <code>LatestRestorableTime</code> for up to
         * <code>BackupRetentionPeriod</code> days. The target DB cluster is created from
         * the source DB cluster with the same configuration as the original DB cluster,
         * except that the new DB cluster is created with the default DB security
         * group.</p>  <p>This action only restores the DB cluster, not the DB
         * instances for that DB cluster. You must invoke the <a>CreateDBInstance</a>
         * action to create DB instances for the restored DB cluster, specifying the
         * identifier of the restored DB cluster in <code>DBClusterIdentifier</code>. You
         * can create DB instances only after the
         * <code>RestoreDBClusterToPointInTime</code> action has completed and the DB
         * cluster is available.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/RestoreDBClusterToPointInTime">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreDBClusterToPointInTimeOutcome RestoreDBClusterToPointInTime(const Model::RestoreDBClusterToPointInTimeRequest& request) const;

        /**
         * <p>Restores a DB cluster to an arbitrary point in time. Users can restore to any
         * point in time before <code>LatestRestorableTime</code> for up to
         * <code>BackupRetentionPeriod</code> days. The target DB cluster is created from
         * the source DB cluster with the same configuration as the original DB cluster,
         * except that the new DB cluster is created with the default DB security
         * group.</p>  <p>This action only restores the DB cluster, not the DB
         * instances for that DB cluster. You must invoke the <a>CreateDBInstance</a>
         * action to create DB instances for the restored DB cluster, specifying the
         * identifier of the restored DB cluster in <code>DBClusterIdentifier</code>. You
         * can create DB instances only after the
         * <code>RestoreDBClusterToPointInTime</code> action has completed and the DB
         * cluster is available.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/RestoreDBClusterToPointInTime">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreDBClusterToPointInTimeOutcomeCallable RestoreDBClusterToPointInTimeCallable(const Model::RestoreDBClusterToPointInTimeRequest& request) const;

        /**
         * <p>Restores a DB cluster to an arbitrary point in time. Users can restore to any
         * point in time before <code>LatestRestorableTime</code> for up to
         * <code>BackupRetentionPeriod</code> days. The target DB cluster is created from
         * the source DB cluster with the same configuration as the original DB cluster,
         * except that the new DB cluster is created with the default DB security
         * group.</p>  <p>This action only restores the DB cluster, not the DB
         * instances for that DB cluster. You must invoke the <a>CreateDBInstance</a>
         * action to create DB instances for the restored DB cluster, specifying the
         * identifier of the restored DB cluster in <code>DBClusterIdentifier</code>. You
         * can create DB instances only after the
         * <code>RestoreDBClusterToPointInTime</code> action has completed and the DB
         * cluster is available.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/RestoreDBClusterToPointInTime">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreDBClusterToPointInTimeAsync(const Model::RestoreDBClusterToPointInTimeRequest& request, const RestoreDBClusterToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an Amazon Neptune DB cluster that was stopped using the Amazon
         * console, the Amazon CLI stop-db-cluster command, or the StopDBCluster
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/StartDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDBClusterOutcome StartDBCluster(const Model::StartDBClusterRequest& request) const;

        /**
         * <p>Starts an Amazon Neptune DB cluster that was stopped using the Amazon
         * console, the Amazon CLI stop-db-cluster command, or the StopDBCluster
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/StartDBCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDBClusterOutcomeCallable StartDBClusterCallable(const Model::StartDBClusterRequest& request) const;

        /**
         * <p>Starts an Amazon Neptune DB cluster that was stopped using the Amazon
         * console, the Amazon CLI stop-db-cluster command, or the StopDBCluster
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/StartDBCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDBClusterAsync(const Model::StartDBClusterRequest& request, const StartDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops an Amazon Neptune DB cluster. When you stop a DB cluster, Neptune
         * retains the DB cluster's metadata, including its endpoints and DB parameter
         * groups.</p> <p>Neptune also retains the transaction logs so you can do a
         * point-in-time restore if necessary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/StopDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDBClusterOutcome StopDBCluster(const Model::StopDBClusterRequest& request) const;

        /**
         * <p>Stops an Amazon Neptune DB cluster. When you stop a DB cluster, Neptune
         * retains the DB cluster's metadata, including its endpoints and DB parameter
         * groups.</p> <p>Neptune also retains the transaction logs so you can do a
         * point-in-time restore if necessary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/StopDBCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopDBClusterOutcomeCallable StopDBClusterCallable(const Model::StopDBClusterRequest& request) const;

        /**
         * <p>Stops an Amazon Neptune DB cluster. When you stop a DB cluster, Neptune
         * retains the DB cluster's metadata, including its endpoints and DB parameter
         * groups.</p> <p>Neptune also retains the transaction logs so you can do a
         * point-in-time restore if necessary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/StopDBCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopDBClusterAsync(const Model::StopDBClusterRequest& request, const StopDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


        void OverrideEndpoint(const Aws::String& endpoint);
  private:
        void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddRoleToDBClusterAsyncHelper(const Model::AddRoleToDBClusterRequest& request, const AddRoleToDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddSourceIdentifierToSubscriptionAsyncHelper(const Model::AddSourceIdentifierToSubscriptionRequest& request, const AddSourceIdentifierToSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddTagsToResourceAsyncHelper(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ApplyPendingMaintenanceActionAsyncHelper(const Model::ApplyPendingMaintenanceActionRequest& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopyDBClusterParameterGroupAsyncHelper(const Model::CopyDBClusterParameterGroupRequest& request, const CopyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopyDBClusterSnapshotAsyncHelper(const Model::CopyDBClusterSnapshotRequest& request, const CopyDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopyDBParameterGroupAsyncHelper(const Model::CopyDBParameterGroupRequest& request, const CopyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDBClusterAsyncHelper(const Model::CreateDBClusterRequest& request, const CreateDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDBClusterEndpointAsyncHelper(const Model::CreateDBClusterEndpointRequest& request, const CreateDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDBClusterParameterGroupAsyncHelper(const Model::CreateDBClusterParameterGroupRequest& request, const CreateDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDBClusterSnapshotAsyncHelper(const Model::CreateDBClusterSnapshotRequest& request, const CreateDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDBInstanceAsyncHelper(const Model::CreateDBInstanceRequest& request, const CreateDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDBParameterGroupAsyncHelper(const Model::CreateDBParameterGroupRequest& request, const CreateDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDBSubnetGroupAsyncHelper(const Model::CreateDBSubnetGroupRequest& request, const CreateDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEventSubscriptionAsyncHelper(const Model::CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDBClusterAsyncHelper(const Model::DeleteDBClusterRequest& request, const DeleteDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDBClusterEndpointAsyncHelper(const Model::DeleteDBClusterEndpointRequest& request, const DeleteDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDBClusterParameterGroupAsyncHelper(const Model::DeleteDBClusterParameterGroupRequest& request, const DeleteDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDBClusterSnapshotAsyncHelper(const Model::DeleteDBClusterSnapshotRequest& request, const DeleteDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDBInstanceAsyncHelper(const Model::DeleteDBInstanceRequest& request, const DeleteDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDBParameterGroupAsyncHelper(const Model::DeleteDBParameterGroupRequest& request, const DeleteDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDBSubnetGroupAsyncHelper(const Model::DeleteDBSubnetGroupRequest& request, const DeleteDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEventSubscriptionAsyncHelper(const Model::DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBClusterEndpointsAsyncHelper(const Model::DescribeDBClusterEndpointsRequest& request, const DescribeDBClusterEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBClusterParameterGroupsAsyncHelper(const Model::DescribeDBClusterParameterGroupsRequest& request, const DescribeDBClusterParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBClusterParametersAsyncHelper(const Model::DescribeDBClusterParametersRequest& request, const DescribeDBClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBClusterSnapshotAttributesAsyncHelper(const Model::DescribeDBClusterSnapshotAttributesRequest& request, const DescribeDBClusterSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBClusterSnapshotsAsyncHelper(const Model::DescribeDBClusterSnapshotsRequest& request, const DescribeDBClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBClustersAsyncHelper(const Model::DescribeDBClustersRequest& request, const DescribeDBClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBEngineVersionsAsyncHelper(const Model::DescribeDBEngineVersionsRequest& request, const DescribeDBEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBInstancesAsyncHelper(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBParameterGroupsAsyncHelper(const Model::DescribeDBParameterGroupsRequest& request, const DescribeDBParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBParametersAsyncHelper(const Model::DescribeDBParametersRequest& request, const DescribeDBParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBSubnetGroupsAsyncHelper(const Model::DescribeDBSubnetGroupsRequest& request, const DescribeDBSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEngineDefaultClusterParametersAsyncHelper(const Model::DescribeEngineDefaultClusterParametersRequest& request, const DescribeEngineDefaultClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEngineDefaultParametersAsyncHelper(const Model::DescribeEngineDefaultParametersRequest& request, const DescribeEngineDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventCategoriesAsyncHelper(const Model::DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventSubscriptionsAsyncHelper(const Model::DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventsAsyncHelper(const Model::DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOrderableDBInstanceOptionsAsyncHelper(const Model::DescribeOrderableDBInstanceOptionsRequest& request, const DescribeOrderableDBInstanceOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePendingMaintenanceActionsAsyncHelper(const Model::DescribePendingMaintenanceActionsRequest& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeValidDBInstanceModificationsAsyncHelper(const Model::DescribeValidDBInstanceModificationsRequest& request, const DescribeValidDBInstanceModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void FailoverDBClusterAsyncHelper(const Model::FailoverDBClusterRequest& request, const FailoverDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDBClusterAsyncHelper(const Model::ModifyDBClusterRequest& request, const ModifyDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDBClusterEndpointAsyncHelper(const Model::ModifyDBClusterEndpointRequest& request, const ModifyDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDBClusterParameterGroupAsyncHelper(const Model::ModifyDBClusterParameterGroupRequest& request, const ModifyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDBClusterSnapshotAttributeAsyncHelper(const Model::ModifyDBClusterSnapshotAttributeRequest& request, const ModifyDBClusterSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDBInstanceAsyncHelper(const Model::ModifyDBInstanceRequest& request, const ModifyDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDBParameterGroupAsyncHelper(const Model::ModifyDBParameterGroupRequest& request, const ModifyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDBSubnetGroupAsyncHelper(const Model::ModifyDBSubnetGroupRequest& request, const ModifyDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyEventSubscriptionAsyncHelper(const Model::ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PromoteReadReplicaDBClusterAsyncHelper(const Model::PromoteReadReplicaDBClusterRequest& request, const PromoteReadReplicaDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RebootDBInstanceAsyncHelper(const Model::RebootDBInstanceRequest& request, const RebootDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveRoleFromDBClusterAsyncHelper(const Model::RemoveRoleFromDBClusterRequest& request, const RemoveRoleFromDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveSourceIdentifierFromSubscriptionAsyncHelper(const Model::RemoveSourceIdentifierFromSubscriptionRequest& request, const RemoveSourceIdentifierFromSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveTagsFromResourceAsyncHelper(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetDBClusterParameterGroupAsyncHelper(const Model::ResetDBClusterParameterGroupRequest& request, const ResetDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetDBParameterGroupAsyncHelper(const Model::ResetDBParameterGroupRequest& request, const ResetDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreDBClusterFromSnapshotAsyncHelper(const Model::RestoreDBClusterFromSnapshotRequest& request, const RestoreDBClusterFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreDBClusterToPointInTimeAsyncHelper(const Model::RestoreDBClusterToPointInTimeRequest& request, const RestoreDBClusterToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartDBClusterAsyncHelper(const Model::StartDBClusterRequest& request, const StartDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopDBClusterAsyncHelper(const Model::StopDBClusterRequest& request, const StopDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

        Aws::String m_uri;
        Aws::String m_configScheme;
        bool m_useDualStack;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Neptune
} // namespace Aws
