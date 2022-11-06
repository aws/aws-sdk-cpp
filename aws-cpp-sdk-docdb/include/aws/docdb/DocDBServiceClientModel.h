/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/docdb/DocDBErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/docdb/DocDBEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in DocDBClient header */
#include <aws/docdb/model/AddSourceIdentifierToSubscriptionResult.h>
#include <aws/docdb/model/ApplyPendingMaintenanceActionResult.h>
#include <aws/docdb/model/CopyDBClusterParameterGroupResult.h>
#include <aws/docdb/model/CopyDBClusterSnapshotResult.h>
#include <aws/docdb/model/CreateDBClusterResult.h>
#include <aws/docdb/model/CreateDBClusterParameterGroupResult.h>
#include <aws/docdb/model/CreateDBClusterSnapshotResult.h>
#include <aws/docdb/model/CreateDBInstanceResult.h>
#include <aws/docdb/model/CreateDBSubnetGroupResult.h>
#include <aws/docdb/model/CreateEventSubscriptionResult.h>
#include <aws/docdb/model/CreateGlobalClusterResult.h>
#include <aws/docdb/model/DeleteDBClusterResult.h>
#include <aws/docdb/model/DeleteDBClusterSnapshotResult.h>
#include <aws/docdb/model/DeleteDBInstanceResult.h>
#include <aws/docdb/model/DeleteEventSubscriptionResult.h>
#include <aws/docdb/model/DeleteGlobalClusterResult.h>
#include <aws/docdb/model/DescribeCertificatesResult.h>
#include <aws/docdb/model/DescribeDBClusterParameterGroupsResult.h>
#include <aws/docdb/model/DescribeDBClusterParametersResult.h>
#include <aws/docdb/model/DescribeDBClusterSnapshotAttributesResult.h>
#include <aws/docdb/model/DescribeDBClusterSnapshotsResult.h>
#include <aws/docdb/model/DescribeDBClustersResult.h>
#include <aws/docdb/model/DescribeDBEngineVersionsResult.h>
#include <aws/docdb/model/DescribeDBInstancesResult.h>
#include <aws/docdb/model/DescribeDBSubnetGroupsResult.h>
#include <aws/docdb/model/DescribeEngineDefaultClusterParametersResult.h>
#include <aws/docdb/model/DescribeEventCategoriesResult.h>
#include <aws/docdb/model/DescribeEventSubscriptionsResult.h>
#include <aws/docdb/model/DescribeEventsResult.h>
#include <aws/docdb/model/DescribeGlobalClustersResult.h>
#include <aws/docdb/model/DescribeOrderableDBInstanceOptionsResult.h>
#include <aws/docdb/model/DescribePendingMaintenanceActionsResult.h>
#include <aws/docdb/model/FailoverDBClusterResult.h>
#include <aws/docdb/model/ListTagsForResourceResult.h>
#include <aws/docdb/model/ModifyDBClusterResult.h>
#include <aws/docdb/model/ModifyDBClusterParameterGroupResult.h>
#include <aws/docdb/model/ModifyDBClusterSnapshotAttributeResult.h>
#include <aws/docdb/model/ModifyDBInstanceResult.h>
#include <aws/docdb/model/ModifyDBSubnetGroupResult.h>
#include <aws/docdb/model/ModifyEventSubscriptionResult.h>
#include <aws/docdb/model/ModifyGlobalClusterResult.h>
#include <aws/docdb/model/RebootDBInstanceResult.h>
#include <aws/docdb/model/RemoveFromGlobalClusterResult.h>
#include <aws/docdb/model/RemoveSourceIdentifierFromSubscriptionResult.h>
#include <aws/docdb/model/ResetDBClusterParameterGroupResult.h>
#include <aws/docdb/model/RestoreDBClusterFromSnapshotResult.h>
#include <aws/docdb/model/RestoreDBClusterToPointInTimeResult.h>
#include <aws/docdb/model/StartDBClusterResult.h>
#include <aws/docdb/model/StopDBClusterResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in DocDBClient header */

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

  namespace DocDB
  {
    using DocDBClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using DocDBEndpointProviderBase = Aws::DocDB::Endpoint::DocDBEndpointProviderBase;
    using DocDBEndpointProvider = Aws::DocDB::Endpoint::DocDBEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in DocDBClient header */
      class AddSourceIdentifierToSubscriptionRequest;
      class AddTagsToResourceRequest;
      class ApplyPendingMaintenanceActionRequest;
      class CopyDBClusterParameterGroupRequest;
      class CopyDBClusterSnapshotRequest;
      class CreateDBClusterRequest;
      class CreateDBClusterParameterGroupRequest;
      class CreateDBClusterSnapshotRequest;
      class CreateDBInstanceRequest;
      class CreateDBSubnetGroupRequest;
      class CreateEventSubscriptionRequest;
      class CreateGlobalClusterRequest;
      class DeleteDBClusterRequest;
      class DeleteDBClusterParameterGroupRequest;
      class DeleteDBClusterSnapshotRequest;
      class DeleteDBInstanceRequest;
      class DeleteDBSubnetGroupRequest;
      class DeleteEventSubscriptionRequest;
      class DeleteGlobalClusterRequest;
      class DescribeCertificatesRequest;
      class DescribeDBClusterParameterGroupsRequest;
      class DescribeDBClusterParametersRequest;
      class DescribeDBClusterSnapshotAttributesRequest;
      class DescribeDBClusterSnapshotsRequest;
      class DescribeDBClustersRequest;
      class DescribeDBEngineVersionsRequest;
      class DescribeDBInstancesRequest;
      class DescribeDBSubnetGroupsRequest;
      class DescribeEngineDefaultClusterParametersRequest;
      class DescribeEventCategoriesRequest;
      class DescribeEventSubscriptionsRequest;
      class DescribeEventsRequest;
      class DescribeGlobalClustersRequest;
      class DescribeOrderableDBInstanceOptionsRequest;
      class DescribePendingMaintenanceActionsRequest;
      class FailoverDBClusterRequest;
      class ListTagsForResourceRequest;
      class ModifyDBClusterRequest;
      class ModifyDBClusterParameterGroupRequest;
      class ModifyDBClusterSnapshotAttributeRequest;
      class ModifyDBInstanceRequest;
      class ModifyDBSubnetGroupRequest;
      class ModifyEventSubscriptionRequest;
      class ModifyGlobalClusterRequest;
      class RebootDBInstanceRequest;
      class RemoveFromGlobalClusterRequest;
      class RemoveSourceIdentifierFromSubscriptionRequest;
      class RemoveTagsFromResourceRequest;
      class ResetDBClusterParameterGroupRequest;
      class RestoreDBClusterFromSnapshotRequest;
      class RestoreDBClusterToPointInTimeRequest;
      class StartDBClusterRequest;
      class StopDBClusterRequest;
      /* End of service model forward declarations required in DocDBClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AddSourceIdentifierToSubscriptionResult, DocDBError> AddSourceIdentifierToSubscriptionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DocDBError> AddTagsToResourceOutcome;
      typedef Aws::Utils::Outcome<ApplyPendingMaintenanceActionResult, DocDBError> ApplyPendingMaintenanceActionOutcome;
      typedef Aws::Utils::Outcome<CopyDBClusterParameterGroupResult, DocDBError> CopyDBClusterParameterGroupOutcome;
      typedef Aws::Utils::Outcome<CopyDBClusterSnapshotResult, DocDBError> CopyDBClusterSnapshotOutcome;
      typedef Aws::Utils::Outcome<CreateDBClusterResult, DocDBError> CreateDBClusterOutcome;
      typedef Aws::Utils::Outcome<CreateDBClusterParameterGroupResult, DocDBError> CreateDBClusterParameterGroupOutcome;
      typedef Aws::Utils::Outcome<CreateDBClusterSnapshotResult, DocDBError> CreateDBClusterSnapshotOutcome;
      typedef Aws::Utils::Outcome<CreateDBInstanceResult, DocDBError> CreateDBInstanceOutcome;
      typedef Aws::Utils::Outcome<CreateDBSubnetGroupResult, DocDBError> CreateDBSubnetGroupOutcome;
      typedef Aws::Utils::Outcome<CreateEventSubscriptionResult, DocDBError> CreateEventSubscriptionOutcome;
      typedef Aws::Utils::Outcome<CreateGlobalClusterResult, DocDBError> CreateGlobalClusterOutcome;
      typedef Aws::Utils::Outcome<DeleteDBClusterResult, DocDBError> DeleteDBClusterOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DocDBError> DeleteDBClusterParameterGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteDBClusterSnapshotResult, DocDBError> DeleteDBClusterSnapshotOutcome;
      typedef Aws::Utils::Outcome<DeleteDBInstanceResult, DocDBError> DeleteDBInstanceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DocDBError> DeleteDBSubnetGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteEventSubscriptionResult, DocDBError> DeleteEventSubscriptionOutcome;
      typedef Aws::Utils::Outcome<DeleteGlobalClusterResult, DocDBError> DeleteGlobalClusterOutcome;
      typedef Aws::Utils::Outcome<DescribeCertificatesResult, DocDBError> DescribeCertificatesOutcome;
      typedef Aws::Utils::Outcome<DescribeDBClusterParameterGroupsResult, DocDBError> DescribeDBClusterParameterGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeDBClusterParametersResult, DocDBError> DescribeDBClusterParametersOutcome;
      typedef Aws::Utils::Outcome<DescribeDBClusterSnapshotAttributesResult, DocDBError> DescribeDBClusterSnapshotAttributesOutcome;
      typedef Aws::Utils::Outcome<DescribeDBClusterSnapshotsResult, DocDBError> DescribeDBClusterSnapshotsOutcome;
      typedef Aws::Utils::Outcome<DescribeDBClustersResult, DocDBError> DescribeDBClustersOutcome;
      typedef Aws::Utils::Outcome<DescribeDBEngineVersionsResult, DocDBError> DescribeDBEngineVersionsOutcome;
      typedef Aws::Utils::Outcome<DescribeDBInstancesResult, DocDBError> DescribeDBInstancesOutcome;
      typedef Aws::Utils::Outcome<DescribeDBSubnetGroupsResult, DocDBError> DescribeDBSubnetGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeEngineDefaultClusterParametersResult, DocDBError> DescribeEngineDefaultClusterParametersOutcome;
      typedef Aws::Utils::Outcome<DescribeEventCategoriesResult, DocDBError> DescribeEventCategoriesOutcome;
      typedef Aws::Utils::Outcome<DescribeEventSubscriptionsResult, DocDBError> DescribeEventSubscriptionsOutcome;
      typedef Aws::Utils::Outcome<DescribeEventsResult, DocDBError> DescribeEventsOutcome;
      typedef Aws::Utils::Outcome<DescribeGlobalClustersResult, DocDBError> DescribeGlobalClustersOutcome;
      typedef Aws::Utils::Outcome<DescribeOrderableDBInstanceOptionsResult, DocDBError> DescribeOrderableDBInstanceOptionsOutcome;
      typedef Aws::Utils::Outcome<DescribePendingMaintenanceActionsResult, DocDBError> DescribePendingMaintenanceActionsOutcome;
      typedef Aws::Utils::Outcome<FailoverDBClusterResult, DocDBError> FailoverDBClusterOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, DocDBError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ModifyDBClusterResult, DocDBError> ModifyDBClusterOutcome;
      typedef Aws::Utils::Outcome<ModifyDBClusterParameterGroupResult, DocDBError> ModifyDBClusterParameterGroupOutcome;
      typedef Aws::Utils::Outcome<ModifyDBClusterSnapshotAttributeResult, DocDBError> ModifyDBClusterSnapshotAttributeOutcome;
      typedef Aws::Utils::Outcome<ModifyDBInstanceResult, DocDBError> ModifyDBInstanceOutcome;
      typedef Aws::Utils::Outcome<ModifyDBSubnetGroupResult, DocDBError> ModifyDBSubnetGroupOutcome;
      typedef Aws::Utils::Outcome<ModifyEventSubscriptionResult, DocDBError> ModifyEventSubscriptionOutcome;
      typedef Aws::Utils::Outcome<ModifyGlobalClusterResult, DocDBError> ModifyGlobalClusterOutcome;
      typedef Aws::Utils::Outcome<RebootDBInstanceResult, DocDBError> RebootDBInstanceOutcome;
      typedef Aws::Utils::Outcome<RemoveFromGlobalClusterResult, DocDBError> RemoveFromGlobalClusterOutcome;
      typedef Aws::Utils::Outcome<RemoveSourceIdentifierFromSubscriptionResult, DocDBError> RemoveSourceIdentifierFromSubscriptionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DocDBError> RemoveTagsFromResourceOutcome;
      typedef Aws::Utils::Outcome<ResetDBClusterParameterGroupResult, DocDBError> ResetDBClusterParameterGroupOutcome;
      typedef Aws::Utils::Outcome<RestoreDBClusterFromSnapshotResult, DocDBError> RestoreDBClusterFromSnapshotOutcome;
      typedef Aws::Utils::Outcome<RestoreDBClusterToPointInTimeResult, DocDBError> RestoreDBClusterToPointInTimeOutcome;
      typedef Aws::Utils::Outcome<StartDBClusterResult, DocDBError> StartDBClusterOutcome;
      typedef Aws::Utils::Outcome<StopDBClusterResult, DocDBError> StopDBClusterOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddSourceIdentifierToSubscriptionOutcome> AddSourceIdentifierToSubscriptionOutcomeCallable;
      typedef std::future<AddTagsToResourceOutcome> AddTagsToResourceOutcomeCallable;
      typedef std::future<ApplyPendingMaintenanceActionOutcome> ApplyPendingMaintenanceActionOutcomeCallable;
      typedef std::future<CopyDBClusterParameterGroupOutcome> CopyDBClusterParameterGroupOutcomeCallable;
      typedef std::future<CopyDBClusterSnapshotOutcome> CopyDBClusterSnapshotOutcomeCallable;
      typedef std::future<CreateDBClusterOutcome> CreateDBClusterOutcomeCallable;
      typedef std::future<CreateDBClusterParameterGroupOutcome> CreateDBClusterParameterGroupOutcomeCallable;
      typedef std::future<CreateDBClusterSnapshotOutcome> CreateDBClusterSnapshotOutcomeCallable;
      typedef std::future<CreateDBInstanceOutcome> CreateDBInstanceOutcomeCallable;
      typedef std::future<CreateDBSubnetGroupOutcome> CreateDBSubnetGroupOutcomeCallable;
      typedef std::future<CreateEventSubscriptionOutcome> CreateEventSubscriptionOutcomeCallable;
      typedef std::future<CreateGlobalClusterOutcome> CreateGlobalClusterOutcomeCallable;
      typedef std::future<DeleteDBClusterOutcome> DeleteDBClusterOutcomeCallable;
      typedef std::future<DeleteDBClusterParameterGroupOutcome> DeleteDBClusterParameterGroupOutcomeCallable;
      typedef std::future<DeleteDBClusterSnapshotOutcome> DeleteDBClusterSnapshotOutcomeCallable;
      typedef std::future<DeleteDBInstanceOutcome> DeleteDBInstanceOutcomeCallable;
      typedef std::future<DeleteDBSubnetGroupOutcome> DeleteDBSubnetGroupOutcomeCallable;
      typedef std::future<DeleteEventSubscriptionOutcome> DeleteEventSubscriptionOutcomeCallable;
      typedef std::future<DeleteGlobalClusterOutcome> DeleteGlobalClusterOutcomeCallable;
      typedef std::future<DescribeCertificatesOutcome> DescribeCertificatesOutcomeCallable;
      typedef std::future<DescribeDBClusterParameterGroupsOutcome> DescribeDBClusterParameterGroupsOutcomeCallable;
      typedef std::future<DescribeDBClusterParametersOutcome> DescribeDBClusterParametersOutcomeCallable;
      typedef std::future<DescribeDBClusterSnapshotAttributesOutcome> DescribeDBClusterSnapshotAttributesOutcomeCallable;
      typedef std::future<DescribeDBClusterSnapshotsOutcome> DescribeDBClusterSnapshotsOutcomeCallable;
      typedef std::future<DescribeDBClustersOutcome> DescribeDBClustersOutcomeCallable;
      typedef std::future<DescribeDBEngineVersionsOutcome> DescribeDBEngineVersionsOutcomeCallable;
      typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
      typedef std::future<DescribeDBSubnetGroupsOutcome> DescribeDBSubnetGroupsOutcomeCallable;
      typedef std::future<DescribeEngineDefaultClusterParametersOutcome> DescribeEngineDefaultClusterParametersOutcomeCallable;
      typedef std::future<DescribeEventCategoriesOutcome> DescribeEventCategoriesOutcomeCallable;
      typedef std::future<DescribeEventSubscriptionsOutcome> DescribeEventSubscriptionsOutcomeCallable;
      typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
      typedef std::future<DescribeGlobalClustersOutcome> DescribeGlobalClustersOutcomeCallable;
      typedef std::future<DescribeOrderableDBInstanceOptionsOutcome> DescribeOrderableDBInstanceOptionsOutcomeCallable;
      typedef std::future<DescribePendingMaintenanceActionsOutcome> DescribePendingMaintenanceActionsOutcomeCallable;
      typedef std::future<FailoverDBClusterOutcome> FailoverDBClusterOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ModifyDBClusterOutcome> ModifyDBClusterOutcomeCallable;
      typedef std::future<ModifyDBClusterParameterGroupOutcome> ModifyDBClusterParameterGroupOutcomeCallable;
      typedef std::future<ModifyDBClusterSnapshotAttributeOutcome> ModifyDBClusterSnapshotAttributeOutcomeCallable;
      typedef std::future<ModifyDBInstanceOutcome> ModifyDBInstanceOutcomeCallable;
      typedef std::future<ModifyDBSubnetGroupOutcome> ModifyDBSubnetGroupOutcomeCallable;
      typedef std::future<ModifyEventSubscriptionOutcome> ModifyEventSubscriptionOutcomeCallable;
      typedef std::future<ModifyGlobalClusterOutcome> ModifyGlobalClusterOutcomeCallable;
      typedef std::future<RebootDBInstanceOutcome> RebootDBInstanceOutcomeCallable;
      typedef std::future<RemoveFromGlobalClusterOutcome> RemoveFromGlobalClusterOutcomeCallable;
      typedef std::future<RemoveSourceIdentifierFromSubscriptionOutcome> RemoveSourceIdentifierFromSubscriptionOutcomeCallable;
      typedef std::future<RemoveTagsFromResourceOutcome> RemoveTagsFromResourceOutcomeCallable;
      typedef std::future<ResetDBClusterParameterGroupOutcome> ResetDBClusterParameterGroupOutcomeCallable;
      typedef std::future<RestoreDBClusterFromSnapshotOutcome> RestoreDBClusterFromSnapshotOutcomeCallable;
      typedef std::future<RestoreDBClusterToPointInTimeOutcome> RestoreDBClusterToPointInTimeOutcomeCallable;
      typedef std::future<StartDBClusterOutcome> StartDBClusterOutcomeCallable;
      typedef std::future<StopDBClusterOutcome> StopDBClusterOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class DocDBClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const DocDBClient*, const Model::AddSourceIdentifierToSubscriptionRequest&, const Model::AddSourceIdentifierToSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddSourceIdentifierToSubscriptionResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::AddTagsToResourceRequest&, const Model::AddTagsToResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsToResourceResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::ApplyPendingMaintenanceActionRequest&, const Model::ApplyPendingMaintenanceActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ApplyPendingMaintenanceActionResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::CopyDBClusterParameterGroupRequest&, const Model::CopyDBClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyDBClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::CopyDBClusterSnapshotRequest&, const Model::CopyDBClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyDBClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::CreateDBClusterRequest&, const Model::CreateDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBClusterResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::CreateDBClusterParameterGroupRequest&, const Model::CreateDBClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::CreateDBClusterSnapshotRequest&, const Model::CreateDBClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::CreateDBInstanceRequest&, const Model::CreateDBInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBInstanceResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::CreateDBSubnetGroupRequest&, const Model::CreateDBSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::CreateEventSubscriptionRequest&, const Model::CreateEventSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventSubscriptionResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::CreateGlobalClusterRequest&, const Model::CreateGlobalClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGlobalClusterResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::DeleteDBClusterRequest&, const Model::DeleteDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBClusterResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::DeleteDBClusterParameterGroupRequest&, const Model::DeleteDBClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::DeleteDBClusterSnapshotRequest&, const Model::DeleteDBClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::DeleteDBInstanceRequest&, const Model::DeleteDBInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBInstanceResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::DeleteDBSubnetGroupRequest&, const Model::DeleteDBSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::DeleteEventSubscriptionRequest&, const Model::DeleteEventSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventSubscriptionResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::DeleteGlobalClusterRequest&, const Model::DeleteGlobalClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGlobalClusterResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::DescribeCertificatesRequest&, const Model::DescribeCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCertificatesResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::DescribeDBClusterParameterGroupsRequest&, const Model::DescribeDBClusterParameterGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClusterParameterGroupsResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::DescribeDBClusterParametersRequest&, const Model::DescribeDBClusterParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClusterParametersResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::DescribeDBClusterSnapshotAttributesRequest&, const Model::DescribeDBClusterSnapshotAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClusterSnapshotAttributesResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::DescribeDBClusterSnapshotsRequest&, const Model::DescribeDBClusterSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClusterSnapshotsResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::DescribeDBClustersRequest&, const Model::DescribeDBClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClustersResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::DescribeDBEngineVersionsRequest&, const Model::DescribeDBEngineVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBEngineVersionsResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::DescribeDBInstancesRequest&, const Model::DescribeDBInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBInstancesResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::DescribeDBSubnetGroupsRequest&, const Model::DescribeDBSubnetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBSubnetGroupsResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::DescribeEngineDefaultClusterParametersRequest&, const Model::DescribeEngineDefaultClusterParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEngineDefaultClusterParametersResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::DescribeEventCategoriesRequest&, const Model::DescribeEventCategoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventCategoriesResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::DescribeEventSubscriptionsRequest&, const Model::DescribeEventSubscriptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventSubscriptionsResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::DescribeEventsRequest&, const Model::DescribeEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventsResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::DescribeGlobalClustersRequest&, const Model::DescribeGlobalClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGlobalClustersResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::DescribeOrderableDBInstanceOptionsRequest&, const Model::DescribeOrderableDBInstanceOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrderableDBInstanceOptionsResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::DescribePendingMaintenanceActionsRequest&, const Model::DescribePendingMaintenanceActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePendingMaintenanceActionsResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::FailoverDBClusterRequest&, const Model::FailoverDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > FailoverDBClusterResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::ModifyDBClusterRequest&, const Model::ModifyDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBClusterResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::ModifyDBClusterParameterGroupRequest&, const Model::ModifyDBClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::ModifyDBClusterSnapshotAttributeRequest&, const Model::ModifyDBClusterSnapshotAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBClusterSnapshotAttributeResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::ModifyDBInstanceRequest&, const Model::ModifyDBInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBInstanceResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::ModifyDBSubnetGroupRequest&, const Model::ModifyDBSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::ModifyEventSubscriptionRequest&, const Model::ModifyEventSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyEventSubscriptionResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::ModifyGlobalClusterRequest&, const Model::ModifyGlobalClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyGlobalClusterResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::RebootDBInstanceRequest&, const Model::RebootDBInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootDBInstanceResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::RemoveFromGlobalClusterRequest&, const Model::RemoveFromGlobalClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveFromGlobalClusterResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::RemoveSourceIdentifierFromSubscriptionRequest&, const Model::RemoveSourceIdentifierFromSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveSourceIdentifierFromSubscriptionResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::RemoveTagsFromResourceRequest&, const Model::RemoveTagsFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsFromResourceResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::ResetDBClusterParameterGroupRequest&, const Model::ResetDBClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetDBClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::RestoreDBClusterFromSnapshotRequest&, const Model::RestoreDBClusterFromSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreDBClusterFromSnapshotResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::RestoreDBClusterToPointInTimeRequest&, const Model::RestoreDBClusterToPointInTimeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreDBClusterToPointInTimeResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::StartDBClusterRequest&, const Model::StartDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDBClusterResponseReceivedHandler;
    typedef std::function<void(const DocDBClient*, const Model::StopDBClusterRequest&, const Model::StopDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopDBClusterResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace DocDB
} // namespace Aws
