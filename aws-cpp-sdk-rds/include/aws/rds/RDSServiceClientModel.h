/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/rds/RDSErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/rds/RDSEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in RDSClient header */
#include <aws/rds/model/AddSourceIdentifierToSubscriptionResult.h>
#include <aws/rds/model/ApplyPendingMaintenanceActionResult.h>
#include <aws/rds/model/AuthorizeDBSecurityGroupIngressResult.h>
#include <aws/rds/model/BacktrackDBClusterResult.h>
#include <aws/rds/model/CancelExportTaskResult.h>
#include <aws/rds/model/CopyDBClusterParameterGroupResult.h>
#include <aws/rds/model/CopyDBClusterSnapshotResult.h>
#include <aws/rds/model/CopyDBParameterGroupResult.h>
#include <aws/rds/model/CopyDBSnapshotResult.h>
#include <aws/rds/model/CopyOptionGroupResult.h>
#include <aws/rds/model/CreateBlueGreenDeploymentResult.h>
#include <aws/rds/model/CreateCustomDBEngineVersionResult.h>
#include <aws/rds/model/CreateDBClusterResult.h>
#include <aws/rds/model/CreateDBClusterEndpointResult.h>
#include <aws/rds/model/CreateDBClusterParameterGroupResult.h>
#include <aws/rds/model/CreateDBClusterSnapshotResult.h>
#include <aws/rds/model/CreateDBInstanceResult.h>
#include <aws/rds/model/CreateDBInstanceReadReplicaResult.h>
#include <aws/rds/model/CreateDBParameterGroupResult.h>
#include <aws/rds/model/CreateDBProxyResult.h>
#include <aws/rds/model/CreateDBProxyEndpointResult.h>
#include <aws/rds/model/CreateDBSecurityGroupResult.h>
#include <aws/rds/model/CreateDBSnapshotResult.h>
#include <aws/rds/model/CreateDBSubnetGroupResult.h>
#include <aws/rds/model/CreateEventSubscriptionResult.h>
#include <aws/rds/model/CreateGlobalClusterResult.h>
#include <aws/rds/model/CreateOptionGroupResult.h>
#include <aws/rds/model/DeleteBlueGreenDeploymentResult.h>
#include <aws/rds/model/DeleteCustomDBEngineVersionResult.h>
#include <aws/rds/model/DeleteDBClusterResult.h>
#include <aws/rds/model/DeleteDBClusterEndpointResult.h>
#include <aws/rds/model/DeleteDBClusterSnapshotResult.h>
#include <aws/rds/model/DeleteDBInstanceResult.h>
#include <aws/rds/model/DeleteDBInstanceAutomatedBackupResult.h>
#include <aws/rds/model/DeleteDBProxyResult.h>
#include <aws/rds/model/DeleteDBProxyEndpointResult.h>
#include <aws/rds/model/DeleteDBSnapshotResult.h>
#include <aws/rds/model/DeleteEventSubscriptionResult.h>
#include <aws/rds/model/DeleteGlobalClusterResult.h>
#include <aws/rds/model/DeregisterDBProxyTargetsResult.h>
#include <aws/rds/model/DescribeAccountAttributesResult.h>
#include <aws/rds/model/DescribeBlueGreenDeploymentsResult.h>
#include <aws/rds/model/DescribeCertificatesResult.h>
#include <aws/rds/model/DescribeDBClusterBacktracksResult.h>
#include <aws/rds/model/DescribeDBClusterEndpointsResult.h>
#include <aws/rds/model/DescribeDBClusterParameterGroupsResult.h>
#include <aws/rds/model/DescribeDBClusterParametersResult.h>
#include <aws/rds/model/DescribeDBClusterSnapshotAttributesResult.h>
#include <aws/rds/model/DescribeDBClusterSnapshotsResult.h>
#include <aws/rds/model/DescribeDBClustersResult.h>
#include <aws/rds/model/DescribeDBEngineVersionsResult.h>
#include <aws/rds/model/DescribeDBInstanceAutomatedBackupsResult.h>
#include <aws/rds/model/DescribeDBInstancesResult.h>
#include <aws/rds/model/DescribeDBLogFilesResult.h>
#include <aws/rds/model/DescribeDBParameterGroupsResult.h>
#include <aws/rds/model/DescribeDBParametersResult.h>
#include <aws/rds/model/DescribeDBProxiesResult.h>
#include <aws/rds/model/DescribeDBProxyEndpointsResult.h>
#include <aws/rds/model/DescribeDBProxyTargetGroupsResult.h>
#include <aws/rds/model/DescribeDBProxyTargetsResult.h>
#include <aws/rds/model/DescribeDBSecurityGroupsResult.h>
#include <aws/rds/model/DescribeDBSnapshotAttributesResult.h>
#include <aws/rds/model/DescribeDBSnapshotsResult.h>
#include <aws/rds/model/DescribeDBSubnetGroupsResult.h>
#include <aws/rds/model/DescribeEngineDefaultClusterParametersResult.h>
#include <aws/rds/model/DescribeEngineDefaultParametersResult.h>
#include <aws/rds/model/DescribeEventCategoriesResult.h>
#include <aws/rds/model/DescribeEventSubscriptionsResult.h>
#include <aws/rds/model/DescribeEventsResult.h>
#include <aws/rds/model/DescribeExportTasksResult.h>
#include <aws/rds/model/DescribeGlobalClustersResult.h>
#include <aws/rds/model/DescribeOptionGroupOptionsResult.h>
#include <aws/rds/model/DescribeOptionGroupsResult.h>
#include <aws/rds/model/DescribeOrderableDBInstanceOptionsResult.h>
#include <aws/rds/model/DescribePendingMaintenanceActionsResult.h>
#include <aws/rds/model/DescribeReservedDBInstancesResult.h>
#include <aws/rds/model/DescribeReservedDBInstancesOfferingsResult.h>
#include <aws/rds/model/DescribeSourceRegionsResult.h>
#include <aws/rds/model/DescribeValidDBInstanceModificationsResult.h>
#include <aws/rds/model/DownloadDBLogFilePortionResult.h>
#include <aws/rds/model/FailoverDBClusterResult.h>
#include <aws/rds/model/FailoverGlobalClusterResult.h>
#include <aws/rds/model/ListTagsForResourceResult.h>
#include <aws/rds/model/ModifyActivityStreamResult.h>
#include <aws/rds/model/ModifyCertificatesResult.h>
#include <aws/rds/model/ModifyCurrentDBClusterCapacityResult.h>
#include <aws/rds/model/ModifyCustomDBEngineVersionResult.h>
#include <aws/rds/model/ModifyDBClusterResult.h>
#include <aws/rds/model/ModifyDBClusterEndpointResult.h>
#include <aws/rds/model/ModifyDBClusterParameterGroupResult.h>
#include <aws/rds/model/ModifyDBClusterSnapshotAttributeResult.h>
#include <aws/rds/model/ModifyDBInstanceResult.h>
#include <aws/rds/model/ModifyDBParameterGroupResult.h>
#include <aws/rds/model/ModifyDBProxyResult.h>
#include <aws/rds/model/ModifyDBProxyEndpointResult.h>
#include <aws/rds/model/ModifyDBProxyTargetGroupResult.h>
#include <aws/rds/model/ModifyDBSnapshotResult.h>
#include <aws/rds/model/ModifyDBSnapshotAttributeResult.h>
#include <aws/rds/model/ModifyDBSubnetGroupResult.h>
#include <aws/rds/model/ModifyEventSubscriptionResult.h>
#include <aws/rds/model/ModifyGlobalClusterResult.h>
#include <aws/rds/model/ModifyOptionGroupResult.h>
#include <aws/rds/model/PromoteReadReplicaResult.h>
#include <aws/rds/model/PromoteReadReplicaDBClusterResult.h>
#include <aws/rds/model/PurchaseReservedDBInstancesOfferingResult.h>
#include <aws/rds/model/RebootDBClusterResult.h>
#include <aws/rds/model/RebootDBInstanceResult.h>
#include <aws/rds/model/RegisterDBProxyTargetsResult.h>
#include <aws/rds/model/RemoveFromGlobalClusterResult.h>
#include <aws/rds/model/RemoveSourceIdentifierFromSubscriptionResult.h>
#include <aws/rds/model/ResetDBClusterParameterGroupResult.h>
#include <aws/rds/model/ResetDBParameterGroupResult.h>
#include <aws/rds/model/RestoreDBClusterFromS3Result.h>
#include <aws/rds/model/RestoreDBClusterFromSnapshotResult.h>
#include <aws/rds/model/RestoreDBClusterToPointInTimeResult.h>
#include <aws/rds/model/RestoreDBInstanceFromDBSnapshotResult.h>
#include <aws/rds/model/RestoreDBInstanceFromS3Result.h>
#include <aws/rds/model/RestoreDBInstanceToPointInTimeResult.h>
#include <aws/rds/model/RevokeDBSecurityGroupIngressResult.h>
#include <aws/rds/model/StartActivityStreamResult.h>
#include <aws/rds/model/StartDBClusterResult.h>
#include <aws/rds/model/StartDBInstanceResult.h>
#include <aws/rds/model/StartDBInstanceAutomatedBackupsReplicationResult.h>
#include <aws/rds/model/StartExportTaskResult.h>
#include <aws/rds/model/StopActivityStreamResult.h>
#include <aws/rds/model/StopDBClusterResult.h>
#include <aws/rds/model/StopDBInstanceResult.h>
#include <aws/rds/model/StopDBInstanceAutomatedBackupsReplicationResult.h>
#include <aws/rds/model/SwitchoverBlueGreenDeploymentResult.h>
#include <aws/rds/model/SwitchoverReadReplicaResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in RDSClient header */

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

  namespace RDS
  {
    using RDSClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using RDSEndpointProviderBase = Aws::RDS::Endpoint::RDSEndpointProviderBase;
    using RDSEndpointProvider = Aws::RDS::Endpoint::RDSEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in RDSClient header */
      class AddRoleToDBClusterRequest;
      class AddRoleToDBInstanceRequest;
      class AddSourceIdentifierToSubscriptionRequest;
      class AddTagsToResourceRequest;
      class ApplyPendingMaintenanceActionRequest;
      class AuthorizeDBSecurityGroupIngressRequest;
      class BacktrackDBClusterRequest;
      class CancelExportTaskRequest;
      class CopyDBClusterParameterGroupRequest;
      class CopyDBClusterSnapshotRequest;
      class CopyDBParameterGroupRequest;
      class CopyDBSnapshotRequest;
      class CopyOptionGroupRequest;
      class CreateBlueGreenDeploymentRequest;
      class CreateCustomDBEngineVersionRequest;
      class CreateDBClusterRequest;
      class CreateDBClusterEndpointRequest;
      class CreateDBClusterParameterGroupRequest;
      class CreateDBClusterSnapshotRequest;
      class CreateDBInstanceRequest;
      class CreateDBInstanceReadReplicaRequest;
      class CreateDBParameterGroupRequest;
      class CreateDBProxyRequest;
      class CreateDBProxyEndpointRequest;
      class CreateDBSecurityGroupRequest;
      class CreateDBSnapshotRequest;
      class CreateDBSubnetGroupRequest;
      class CreateEventSubscriptionRequest;
      class CreateGlobalClusterRequest;
      class CreateOptionGroupRequest;
      class DeleteBlueGreenDeploymentRequest;
      class DeleteCustomDBEngineVersionRequest;
      class DeleteDBClusterRequest;
      class DeleteDBClusterEndpointRequest;
      class DeleteDBClusterParameterGroupRequest;
      class DeleteDBClusterSnapshotRequest;
      class DeleteDBInstanceRequest;
      class DeleteDBInstanceAutomatedBackupRequest;
      class DeleteDBParameterGroupRequest;
      class DeleteDBProxyRequest;
      class DeleteDBProxyEndpointRequest;
      class DeleteDBSecurityGroupRequest;
      class DeleteDBSnapshotRequest;
      class DeleteDBSubnetGroupRequest;
      class DeleteEventSubscriptionRequest;
      class DeleteGlobalClusterRequest;
      class DeleteOptionGroupRequest;
      class DeregisterDBProxyTargetsRequest;
      class DescribeAccountAttributesRequest;
      class DescribeBlueGreenDeploymentsRequest;
      class DescribeCertificatesRequest;
      class DescribeDBClusterBacktracksRequest;
      class DescribeDBClusterEndpointsRequest;
      class DescribeDBClusterParameterGroupsRequest;
      class DescribeDBClusterParametersRequest;
      class DescribeDBClusterSnapshotAttributesRequest;
      class DescribeDBClusterSnapshotsRequest;
      class DescribeDBClustersRequest;
      class DescribeDBEngineVersionsRequest;
      class DescribeDBInstanceAutomatedBackupsRequest;
      class DescribeDBInstancesRequest;
      class DescribeDBLogFilesRequest;
      class DescribeDBParameterGroupsRequest;
      class DescribeDBParametersRequest;
      class DescribeDBProxiesRequest;
      class DescribeDBProxyEndpointsRequest;
      class DescribeDBProxyTargetGroupsRequest;
      class DescribeDBProxyTargetsRequest;
      class DescribeDBSecurityGroupsRequest;
      class DescribeDBSnapshotAttributesRequest;
      class DescribeDBSnapshotsRequest;
      class DescribeDBSubnetGroupsRequest;
      class DescribeEngineDefaultClusterParametersRequest;
      class DescribeEngineDefaultParametersRequest;
      class DescribeEventCategoriesRequest;
      class DescribeEventSubscriptionsRequest;
      class DescribeEventsRequest;
      class DescribeExportTasksRequest;
      class DescribeGlobalClustersRequest;
      class DescribeOptionGroupOptionsRequest;
      class DescribeOptionGroupsRequest;
      class DescribeOrderableDBInstanceOptionsRequest;
      class DescribePendingMaintenanceActionsRequest;
      class DescribeReservedDBInstancesRequest;
      class DescribeReservedDBInstancesOfferingsRequest;
      class DescribeSourceRegionsRequest;
      class DescribeValidDBInstanceModificationsRequest;
      class DownloadDBLogFilePortionRequest;
      class FailoverDBClusterRequest;
      class FailoverGlobalClusterRequest;
      class ListTagsForResourceRequest;
      class ModifyActivityStreamRequest;
      class ModifyCertificatesRequest;
      class ModifyCurrentDBClusterCapacityRequest;
      class ModifyCustomDBEngineVersionRequest;
      class ModifyDBClusterRequest;
      class ModifyDBClusterEndpointRequest;
      class ModifyDBClusterParameterGroupRequest;
      class ModifyDBClusterSnapshotAttributeRequest;
      class ModifyDBInstanceRequest;
      class ModifyDBParameterGroupRequest;
      class ModifyDBProxyRequest;
      class ModifyDBProxyEndpointRequest;
      class ModifyDBProxyTargetGroupRequest;
      class ModifyDBSnapshotRequest;
      class ModifyDBSnapshotAttributeRequest;
      class ModifyDBSubnetGroupRequest;
      class ModifyEventSubscriptionRequest;
      class ModifyGlobalClusterRequest;
      class ModifyOptionGroupRequest;
      class PromoteReadReplicaRequest;
      class PromoteReadReplicaDBClusterRequest;
      class PurchaseReservedDBInstancesOfferingRequest;
      class RebootDBClusterRequest;
      class RebootDBInstanceRequest;
      class RegisterDBProxyTargetsRequest;
      class RemoveFromGlobalClusterRequest;
      class RemoveRoleFromDBClusterRequest;
      class RemoveRoleFromDBInstanceRequest;
      class RemoveSourceIdentifierFromSubscriptionRequest;
      class RemoveTagsFromResourceRequest;
      class ResetDBClusterParameterGroupRequest;
      class ResetDBParameterGroupRequest;
      class RestoreDBClusterFromS3Request;
      class RestoreDBClusterFromSnapshotRequest;
      class RestoreDBClusterToPointInTimeRequest;
      class RestoreDBInstanceFromDBSnapshotRequest;
      class RestoreDBInstanceFromS3Request;
      class RestoreDBInstanceToPointInTimeRequest;
      class RevokeDBSecurityGroupIngressRequest;
      class StartActivityStreamRequest;
      class StartDBClusterRequest;
      class StartDBInstanceRequest;
      class StartDBInstanceAutomatedBackupsReplicationRequest;
      class StartExportTaskRequest;
      class StopActivityStreamRequest;
      class StopDBClusterRequest;
      class StopDBInstanceRequest;
      class StopDBInstanceAutomatedBackupsReplicationRequest;
      class SwitchoverBlueGreenDeploymentRequest;
      class SwitchoverReadReplicaRequest;
      /* End of service model forward declarations required in RDSClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, RDSError> AddRoleToDBClusterOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, RDSError> AddRoleToDBInstanceOutcome;
      typedef Aws::Utils::Outcome<AddSourceIdentifierToSubscriptionResult, RDSError> AddSourceIdentifierToSubscriptionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, RDSError> AddTagsToResourceOutcome;
      typedef Aws::Utils::Outcome<ApplyPendingMaintenanceActionResult, RDSError> ApplyPendingMaintenanceActionOutcome;
      typedef Aws::Utils::Outcome<AuthorizeDBSecurityGroupIngressResult, RDSError> AuthorizeDBSecurityGroupIngressOutcome;
      typedef Aws::Utils::Outcome<BacktrackDBClusterResult, RDSError> BacktrackDBClusterOutcome;
      typedef Aws::Utils::Outcome<CancelExportTaskResult, RDSError> CancelExportTaskOutcome;
      typedef Aws::Utils::Outcome<CopyDBClusterParameterGroupResult, RDSError> CopyDBClusterParameterGroupOutcome;
      typedef Aws::Utils::Outcome<CopyDBClusterSnapshotResult, RDSError> CopyDBClusterSnapshotOutcome;
      typedef Aws::Utils::Outcome<CopyDBParameterGroupResult, RDSError> CopyDBParameterGroupOutcome;
      typedef Aws::Utils::Outcome<CopyDBSnapshotResult, RDSError> CopyDBSnapshotOutcome;
      typedef Aws::Utils::Outcome<CopyOptionGroupResult, RDSError> CopyOptionGroupOutcome;
      typedef Aws::Utils::Outcome<CreateBlueGreenDeploymentResult, RDSError> CreateBlueGreenDeploymentOutcome;
      typedef Aws::Utils::Outcome<CreateCustomDBEngineVersionResult, RDSError> CreateCustomDBEngineVersionOutcome;
      typedef Aws::Utils::Outcome<CreateDBClusterResult, RDSError> CreateDBClusterOutcome;
      typedef Aws::Utils::Outcome<CreateDBClusterEndpointResult, RDSError> CreateDBClusterEndpointOutcome;
      typedef Aws::Utils::Outcome<CreateDBClusterParameterGroupResult, RDSError> CreateDBClusterParameterGroupOutcome;
      typedef Aws::Utils::Outcome<CreateDBClusterSnapshotResult, RDSError> CreateDBClusterSnapshotOutcome;
      typedef Aws::Utils::Outcome<CreateDBInstanceResult, RDSError> CreateDBInstanceOutcome;
      typedef Aws::Utils::Outcome<CreateDBInstanceReadReplicaResult, RDSError> CreateDBInstanceReadReplicaOutcome;
      typedef Aws::Utils::Outcome<CreateDBParameterGroupResult, RDSError> CreateDBParameterGroupOutcome;
      typedef Aws::Utils::Outcome<CreateDBProxyResult, RDSError> CreateDBProxyOutcome;
      typedef Aws::Utils::Outcome<CreateDBProxyEndpointResult, RDSError> CreateDBProxyEndpointOutcome;
      typedef Aws::Utils::Outcome<CreateDBSecurityGroupResult, RDSError> CreateDBSecurityGroupOutcome;
      typedef Aws::Utils::Outcome<CreateDBSnapshotResult, RDSError> CreateDBSnapshotOutcome;
      typedef Aws::Utils::Outcome<CreateDBSubnetGroupResult, RDSError> CreateDBSubnetGroupOutcome;
      typedef Aws::Utils::Outcome<CreateEventSubscriptionResult, RDSError> CreateEventSubscriptionOutcome;
      typedef Aws::Utils::Outcome<CreateGlobalClusterResult, RDSError> CreateGlobalClusterOutcome;
      typedef Aws::Utils::Outcome<CreateOptionGroupResult, RDSError> CreateOptionGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteBlueGreenDeploymentResult, RDSError> DeleteBlueGreenDeploymentOutcome;
      typedef Aws::Utils::Outcome<DeleteCustomDBEngineVersionResult, RDSError> DeleteCustomDBEngineVersionOutcome;
      typedef Aws::Utils::Outcome<DeleteDBClusterResult, RDSError> DeleteDBClusterOutcome;
      typedef Aws::Utils::Outcome<DeleteDBClusterEndpointResult, RDSError> DeleteDBClusterEndpointOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, RDSError> DeleteDBClusterParameterGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteDBClusterSnapshotResult, RDSError> DeleteDBClusterSnapshotOutcome;
      typedef Aws::Utils::Outcome<DeleteDBInstanceResult, RDSError> DeleteDBInstanceOutcome;
      typedef Aws::Utils::Outcome<DeleteDBInstanceAutomatedBackupResult, RDSError> DeleteDBInstanceAutomatedBackupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, RDSError> DeleteDBParameterGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteDBProxyResult, RDSError> DeleteDBProxyOutcome;
      typedef Aws::Utils::Outcome<DeleteDBProxyEndpointResult, RDSError> DeleteDBProxyEndpointOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, RDSError> DeleteDBSecurityGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteDBSnapshotResult, RDSError> DeleteDBSnapshotOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, RDSError> DeleteDBSubnetGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteEventSubscriptionResult, RDSError> DeleteEventSubscriptionOutcome;
      typedef Aws::Utils::Outcome<DeleteGlobalClusterResult, RDSError> DeleteGlobalClusterOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, RDSError> DeleteOptionGroupOutcome;
      typedef Aws::Utils::Outcome<DeregisterDBProxyTargetsResult, RDSError> DeregisterDBProxyTargetsOutcome;
      typedef Aws::Utils::Outcome<DescribeAccountAttributesResult, RDSError> DescribeAccountAttributesOutcome;
      typedef Aws::Utils::Outcome<DescribeBlueGreenDeploymentsResult, RDSError> DescribeBlueGreenDeploymentsOutcome;
      typedef Aws::Utils::Outcome<DescribeCertificatesResult, RDSError> DescribeCertificatesOutcome;
      typedef Aws::Utils::Outcome<DescribeDBClusterBacktracksResult, RDSError> DescribeDBClusterBacktracksOutcome;
      typedef Aws::Utils::Outcome<DescribeDBClusterEndpointsResult, RDSError> DescribeDBClusterEndpointsOutcome;
      typedef Aws::Utils::Outcome<DescribeDBClusterParameterGroupsResult, RDSError> DescribeDBClusterParameterGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeDBClusterParametersResult, RDSError> DescribeDBClusterParametersOutcome;
      typedef Aws::Utils::Outcome<DescribeDBClusterSnapshotAttributesResult, RDSError> DescribeDBClusterSnapshotAttributesOutcome;
      typedef Aws::Utils::Outcome<DescribeDBClusterSnapshotsResult, RDSError> DescribeDBClusterSnapshotsOutcome;
      typedef Aws::Utils::Outcome<DescribeDBClustersResult, RDSError> DescribeDBClustersOutcome;
      typedef Aws::Utils::Outcome<DescribeDBEngineVersionsResult, RDSError> DescribeDBEngineVersionsOutcome;
      typedef Aws::Utils::Outcome<DescribeDBInstanceAutomatedBackupsResult, RDSError> DescribeDBInstanceAutomatedBackupsOutcome;
      typedef Aws::Utils::Outcome<DescribeDBInstancesResult, RDSError> DescribeDBInstancesOutcome;
      typedef Aws::Utils::Outcome<DescribeDBLogFilesResult, RDSError> DescribeDBLogFilesOutcome;
      typedef Aws::Utils::Outcome<DescribeDBParameterGroupsResult, RDSError> DescribeDBParameterGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeDBParametersResult, RDSError> DescribeDBParametersOutcome;
      typedef Aws::Utils::Outcome<DescribeDBProxiesResult, RDSError> DescribeDBProxiesOutcome;
      typedef Aws::Utils::Outcome<DescribeDBProxyEndpointsResult, RDSError> DescribeDBProxyEndpointsOutcome;
      typedef Aws::Utils::Outcome<DescribeDBProxyTargetGroupsResult, RDSError> DescribeDBProxyTargetGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeDBProxyTargetsResult, RDSError> DescribeDBProxyTargetsOutcome;
      typedef Aws::Utils::Outcome<DescribeDBSecurityGroupsResult, RDSError> DescribeDBSecurityGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeDBSnapshotAttributesResult, RDSError> DescribeDBSnapshotAttributesOutcome;
      typedef Aws::Utils::Outcome<DescribeDBSnapshotsResult, RDSError> DescribeDBSnapshotsOutcome;
      typedef Aws::Utils::Outcome<DescribeDBSubnetGroupsResult, RDSError> DescribeDBSubnetGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeEngineDefaultClusterParametersResult, RDSError> DescribeEngineDefaultClusterParametersOutcome;
      typedef Aws::Utils::Outcome<DescribeEngineDefaultParametersResult, RDSError> DescribeEngineDefaultParametersOutcome;
      typedef Aws::Utils::Outcome<DescribeEventCategoriesResult, RDSError> DescribeEventCategoriesOutcome;
      typedef Aws::Utils::Outcome<DescribeEventSubscriptionsResult, RDSError> DescribeEventSubscriptionsOutcome;
      typedef Aws::Utils::Outcome<DescribeEventsResult, RDSError> DescribeEventsOutcome;
      typedef Aws::Utils::Outcome<DescribeExportTasksResult, RDSError> DescribeExportTasksOutcome;
      typedef Aws::Utils::Outcome<DescribeGlobalClustersResult, RDSError> DescribeGlobalClustersOutcome;
      typedef Aws::Utils::Outcome<DescribeOptionGroupOptionsResult, RDSError> DescribeOptionGroupOptionsOutcome;
      typedef Aws::Utils::Outcome<DescribeOptionGroupsResult, RDSError> DescribeOptionGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeOrderableDBInstanceOptionsResult, RDSError> DescribeOrderableDBInstanceOptionsOutcome;
      typedef Aws::Utils::Outcome<DescribePendingMaintenanceActionsResult, RDSError> DescribePendingMaintenanceActionsOutcome;
      typedef Aws::Utils::Outcome<DescribeReservedDBInstancesResult, RDSError> DescribeReservedDBInstancesOutcome;
      typedef Aws::Utils::Outcome<DescribeReservedDBInstancesOfferingsResult, RDSError> DescribeReservedDBInstancesOfferingsOutcome;
      typedef Aws::Utils::Outcome<DescribeSourceRegionsResult, RDSError> DescribeSourceRegionsOutcome;
      typedef Aws::Utils::Outcome<DescribeValidDBInstanceModificationsResult, RDSError> DescribeValidDBInstanceModificationsOutcome;
      typedef Aws::Utils::Outcome<DownloadDBLogFilePortionResult, RDSError> DownloadDBLogFilePortionOutcome;
      typedef Aws::Utils::Outcome<FailoverDBClusterResult, RDSError> FailoverDBClusterOutcome;
      typedef Aws::Utils::Outcome<FailoverGlobalClusterResult, RDSError> FailoverGlobalClusterOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, RDSError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ModifyActivityStreamResult, RDSError> ModifyActivityStreamOutcome;
      typedef Aws::Utils::Outcome<ModifyCertificatesResult, RDSError> ModifyCertificatesOutcome;
      typedef Aws::Utils::Outcome<ModifyCurrentDBClusterCapacityResult, RDSError> ModifyCurrentDBClusterCapacityOutcome;
      typedef Aws::Utils::Outcome<ModifyCustomDBEngineVersionResult, RDSError> ModifyCustomDBEngineVersionOutcome;
      typedef Aws::Utils::Outcome<ModifyDBClusterResult, RDSError> ModifyDBClusterOutcome;
      typedef Aws::Utils::Outcome<ModifyDBClusterEndpointResult, RDSError> ModifyDBClusterEndpointOutcome;
      typedef Aws::Utils::Outcome<ModifyDBClusterParameterGroupResult, RDSError> ModifyDBClusterParameterGroupOutcome;
      typedef Aws::Utils::Outcome<ModifyDBClusterSnapshotAttributeResult, RDSError> ModifyDBClusterSnapshotAttributeOutcome;
      typedef Aws::Utils::Outcome<ModifyDBInstanceResult, RDSError> ModifyDBInstanceOutcome;
      typedef Aws::Utils::Outcome<ModifyDBParameterGroupResult, RDSError> ModifyDBParameterGroupOutcome;
      typedef Aws::Utils::Outcome<ModifyDBProxyResult, RDSError> ModifyDBProxyOutcome;
      typedef Aws::Utils::Outcome<ModifyDBProxyEndpointResult, RDSError> ModifyDBProxyEndpointOutcome;
      typedef Aws::Utils::Outcome<ModifyDBProxyTargetGroupResult, RDSError> ModifyDBProxyTargetGroupOutcome;
      typedef Aws::Utils::Outcome<ModifyDBSnapshotResult, RDSError> ModifyDBSnapshotOutcome;
      typedef Aws::Utils::Outcome<ModifyDBSnapshotAttributeResult, RDSError> ModifyDBSnapshotAttributeOutcome;
      typedef Aws::Utils::Outcome<ModifyDBSubnetGroupResult, RDSError> ModifyDBSubnetGroupOutcome;
      typedef Aws::Utils::Outcome<ModifyEventSubscriptionResult, RDSError> ModifyEventSubscriptionOutcome;
      typedef Aws::Utils::Outcome<ModifyGlobalClusterResult, RDSError> ModifyGlobalClusterOutcome;
      typedef Aws::Utils::Outcome<ModifyOptionGroupResult, RDSError> ModifyOptionGroupOutcome;
      typedef Aws::Utils::Outcome<PromoteReadReplicaResult, RDSError> PromoteReadReplicaOutcome;
      typedef Aws::Utils::Outcome<PromoteReadReplicaDBClusterResult, RDSError> PromoteReadReplicaDBClusterOutcome;
      typedef Aws::Utils::Outcome<PurchaseReservedDBInstancesOfferingResult, RDSError> PurchaseReservedDBInstancesOfferingOutcome;
      typedef Aws::Utils::Outcome<RebootDBClusterResult, RDSError> RebootDBClusterOutcome;
      typedef Aws::Utils::Outcome<RebootDBInstanceResult, RDSError> RebootDBInstanceOutcome;
      typedef Aws::Utils::Outcome<RegisterDBProxyTargetsResult, RDSError> RegisterDBProxyTargetsOutcome;
      typedef Aws::Utils::Outcome<RemoveFromGlobalClusterResult, RDSError> RemoveFromGlobalClusterOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, RDSError> RemoveRoleFromDBClusterOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, RDSError> RemoveRoleFromDBInstanceOutcome;
      typedef Aws::Utils::Outcome<RemoveSourceIdentifierFromSubscriptionResult, RDSError> RemoveSourceIdentifierFromSubscriptionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, RDSError> RemoveTagsFromResourceOutcome;
      typedef Aws::Utils::Outcome<ResetDBClusterParameterGroupResult, RDSError> ResetDBClusterParameterGroupOutcome;
      typedef Aws::Utils::Outcome<ResetDBParameterGroupResult, RDSError> ResetDBParameterGroupOutcome;
      typedef Aws::Utils::Outcome<RestoreDBClusterFromS3Result, RDSError> RestoreDBClusterFromS3Outcome;
      typedef Aws::Utils::Outcome<RestoreDBClusterFromSnapshotResult, RDSError> RestoreDBClusterFromSnapshotOutcome;
      typedef Aws::Utils::Outcome<RestoreDBClusterToPointInTimeResult, RDSError> RestoreDBClusterToPointInTimeOutcome;
      typedef Aws::Utils::Outcome<RestoreDBInstanceFromDBSnapshotResult, RDSError> RestoreDBInstanceFromDBSnapshotOutcome;
      typedef Aws::Utils::Outcome<RestoreDBInstanceFromS3Result, RDSError> RestoreDBInstanceFromS3Outcome;
      typedef Aws::Utils::Outcome<RestoreDBInstanceToPointInTimeResult, RDSError> RestoreDBInstanceToPointInTimeOutcome;
      typedef Aws::Utils::Outcome<RevokeDBSecurityGroupIngressResult, RDSError> RevokeDBSecurityGroupIngressOutcome;
      typedef Aws::Utils::Outcome<StartActivityStreamResult, RDSError> StartActivityStreamOutcome;
      typedef Aws::Utils::Outcome<StartDBClusterResult, RDSError> StartDBClusterOutcome;
      typedef Aws::Utils::Outcome<StartDBInstanceResult, RDSError> StartDBInstanceOutcome;
      typedef Aws::Utils::Outcome<StartDBInstanceAutomatedBackupsReplicationResult, RDSError> StartDBInstanceAutomatedBackupsReplicationOutcome;
      typedef Aws::Utils::Outcome<StartExportTaskResult, RDSError> StartExportTaskOutcome;
      typedef Aws::Utils::Outcome<StopActivityStreamResult, RDSError> StopActivityStreamOutcome;
      typedef Aws::Utils::Outcome<StopDBClusterResult, RDSError> StopDBClusterOutcome;
      typedef Aws::Utils::Outcome<StopDBInstanceResult, RDSError> StopDBInstanceOutcome;
      typedef Aws::Utils::Outcome<StopDBInstanceAutomatedBackupsReplicationResult, RDSError> StopDBInstanceAutomatedBackupsReplicationOutcome;
      typedef Aws::Utils::Outcome<SwitchoverBlueGreenDeploymentResult, RDSError> SwitchoverBlueGreenDeploymentOutcome;
      typedef Aws::Utils::Outcome<SwitchoverReadReplicaResult, RDSError> SwitchoverReadReplicaOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddRoleToDBClusterOutcome> AddRoleToDBClusterOutcomeCallable;
      typedef std::future<AddRoleToDBInstanceOutcome> AddRoleToDBInstanceOutcomeCallable;
      typedef std::future<AddSourceIdentifierToSubscriptionOutcome> AddSourceIdentifierToSubscriptionOutcomeCallable;
      typedef std::future<AddTagsToResourceOutcome> AddTagsToResourceOutcomeCallable;
      typedef std::future<ApplyPendingMaintenanceActionOutcome> ApplyPendingMaintenanceActionOutcomeCallable;
      typedef std::future<AuthorizeDBSecurityGroupIngressOutcome> AuthorizeDBSecurityGroupIngressOutcomeCallable;
      typedef std::future<BacktrackDBClusterOutcome> BacktrackDBClusterOutcomeCallable;
      typedef std::future<CancelExportTaskOutcome> CancelExportTaskOutcomeCallable;
      typedef std::future<CopyDBClusterParameterGroupOutcome> CopyDBClusterParameterGroupOutcomeCallable;
      typedef std::future<CopyDBClusterSnapshotOutcome> CopyDBClusterSnapshotOutcomeCallable;
      typedef std::future<CopyDBParameterGroupOutcome> CopyDBParameterGroupOutcomeCallable;
      typedef std::future<CopyDBSnapshotOutcome> CopyDBSnapshotOutcomeCallable;
      typedef std::future<CopyOptionGroupOutcome> CopyOptionGroupOutcomeCallable;
      typedef std::future<CreateBlueGreenDeploymentOutcome> CreateBlueGreenDeploymentOutcomeCallable;
      typedef std::future<CreateCustomDBEngineVersionOutcome> CreateCustomDBEngineVersionOutcomeCallable;
      typedef std::future<CreateDBClusterOutcome> CreateDBClusterOutcomeCallable;
      typedef std::future<CreateDBClusterEndpointOutcome> CreateDBClusterEndpointOutcomeCallable;
      typedef std::future<CreateDBClusterParameterGroupOutcome> CreateDBClusterParameterGroupOutcomeCallable;
      typedef std::future<CreateDBClusterSnapshotOutcome> CreateDBClusterSnapshotOutcomeCallable;
      typedef std::future<CreateDBInstanceOutcome> CreateDBInstanceOutcomeCallable;
      typedef std::future<CreateDBInstanceReadReplicaOutcome> CreateDBInstanceReadReplicaOutcomeCallable;
      typedef std::future<CreateDBParameterGroupOutcome> CreateDBParameterGroupOutcomeCallable;
      typedef std::future<CreateDBProxyOutcome> CreateDBProxyOutcomeCallable;
      typedef std::future<CreateDBProxyEndpointOutcome> CreateDBProxyEndpointOutcomeCallable;
      typedef std::future<CreateDBSecurityGroupOutcome> CreateDBSecurityGroupOutcomeCallable;
      typedef std::future<CreateDBSnapshotOutcome> CreateDBSnapshotOutcomeCallable;
      typedef std::future<CreateDBSubnetGroupOutcome> CreateDBSubnetGroupOutcomeCallable;
      typedef std::future<CreateEventSubscriptionOutcome> CreateEventSubscriptionOutcomeCallable;
      typedef std::future<CreateGlobalClusterOutcome> CreateGlobalClusterOutcomeCallable;
      typedef std::future<CreateOptionGroupOutcome> CreateOptionGroupOutcomeCallable;
      typedef std::future<DeleteBlueGreenDeploymentOutcome> DeleteBlueGreenDeploymentOutcomeCallable;
      typedef std::future<DeleteCustomDBEngineVersionOutcome> DeleteCustomDBEngineVersionOutcomeCallable;
      typedef std::future<DeleteDBClusterOutcome> DeleteDBClusterOutcomeCallable;
      typedef std::future<DeleteDBClusterEndpointOutcome> DeleteDBClusterEndpointOutcomeCallable;
      typedef std::future<DeleteDBClusterParameterGroupOutcome> DeleteDBClusterParameterGroupOutcomeCallable;
      typedef std::future<DeleteDBClusterSnapshotOutcome> DeleteDBClusterSnapshotOutcomeCallable;
      typedef std::future<DeleteDBInstanceOutcome> DeleteDBInstanceOutcomeCallable;
      typedef std::future<DeleteDBInstanceAutomatedBackupOutcome> DeleteDBInstanceAutomatedBackupOutcomeCallable;
      typedef std::future<DeleteDBParameterGroupOutcome> DeleteDBParameterGroupOutcomeCallable;
      typedef std::future<DeleteDBProxyOutcome> DeleteDBProxyOutcomeCallable;
      typedef std::future<DeleteDBProxyEndpointOutcome> DeleteDBProxyEndpointOutcomeCallable;
      typedef std::future<DeleteDBSecurityGroupOutcome> DeleteDBSecurityGroupOutcomeCallable;
      typedef std::future<DeleteDBSnapshotOutcome> DeleteDBSnapshotOutcomeCallable;
      typedef std::future<DeleteDBSubnetGroupOutcome> DeleteDBSubnetGroupOutcomeCallable;
      typedef std::future<DeleteEventSubscriptionOutcome> DeleteEventSubscriptionOutcomeCallable;
      typedef std::future<DeleteGlobalClusterOutcome> DeleteGlobalClusterOutcomeCallable;
      typedef std::future<DeleteOptionGroupOutcome> DeleteOptionGroupOutcomeCallable;
      typedef std::future<DeregisterDBProxyTargetsOutcome> DeregisterDBProxyTargetsOutcomeCallable;
      typedef std::future<DescribeAccountAttributesOutcome> DescribeAccountAttributesOutcomeCallable;
      typedef std::future<DescribeBlueGreenDeploymentsOutcome> DescribeBlueGreenDeploymentsOutcomeCallable;
      typedef std::future<DescribeCertificatesOutcome> DescribeCertificatesOutcomeCallable;
      typedef std::future<DescribeDBClusterBacktracksOutcome> DescribeDBClusterBacktracksOutcomeCallable;
      typedef std::future<DescribeDBClusterEndpointsOutcome> DescribeDBClusterEndpointsOutcomeCallable;
      typedef std::future<DescribeDBClusterParameterGroupsOutcome> DescribeDBClusterParameterGroupsOutcomeCallable;
      typedef std::future<DescribeDBClusterParametersOutcome> DescribeDBClusterParametersOutcomeCallable;
      typedef std::future<DescribeDBClusterSnapshotAttributesOutcome> DescribeDBClusterSnapshotAttributesOutcomeCallable;
      typedef std::future<DescribeDBClusterSnapshotsOutcome> DescribeDBClusterSnapshotsOutcomeCallable;
      typedef std::future<DescribeDBClustersOutcome> DescribeDBClustersOutcomeCallable;
      typedef std::future<DescribeDBEngineVersionsOutcome> DescribeDBEngineVersionsOutcomeCallable;
      typedef std::future<DescribeDBInstanceAutomatedBackupsOutcome> DescribeDBInstanceAutomatedBackupsOutcomeCallable;
      typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
      typedef std::future<DescribeDBLogFilesOutcome> DescribeDBLogFilesOutcomeCallable;
      typedef std::future<DescribeDBParameterGroupsOutcome> DescribeDBParameterGroupsOutcomeCallable;
      typedef std::future<DescribeDBParametersOutcome> DescribeDBParametersOutcomeCallable;
      typedef std::future<DescribeDBProxiesOutcome> DescribeDBProxiesOutcomeCallable;
      typedef std::future<DescribeDBProxyEndpointsOutcome> DescribeDBProxyEndpointsOutcomeCallable;
      typedef std::future<DescribeDBProxyTargetGroupsOutcome> DescribeDBProxyTargetGroupsOutcomeCallable;
      typedef std::future<DescribeDBProxyTargetsOutcome> DescribeDBProxyTargetsOutcomeCallable;
      typedef std::future<DescribeDBSecurityGroupsOutcome> DescribeDBSecurityGroupsOutcomeCallable;
      typedef std::future<DescribeDBSnapshotAttributesOutcome> DescribeDBSnapshotAttributesOutcomeCallable;
      typedef std::future<DescribeDBSnapshotsOutcome> DescribeDBSnapshotsOutcomeCallable;
      typedef std::future<DescribeDBSubnetGroupsOutcome> DescribeDBSubnetGroupsOutcomeCallable;
      typedef std::future<DescribeEngineDefaultClusterParametersOutcome> DescribeEngineDefaultClusterParametersOutcomeCallable;
      typedef std::future<DescribeEngineDefaultParametersOutcome> DescribeEngineDefaultParametersOutcomeCallable;
      typedef std::future<DescribeEventCategoriesOutcome> DescribeEventCategoriesOutcomeCallable;
      typedef std::future<DescribeEventSubscriptionsOutcome> DescribeEventSubscriptionsOutcomeCallable;
      typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
      typedef std::future<DescribeExportTasksOutcome> DescribeExportTasksOutcomeCallable;
      typedef std::future<DescribeGlobalClustersOutcome> DescribeGlobalClustersOutcomeCallable;
      typedef std::future<DescribeOptionGroupOptionsOutcome> DescribeOptionGroupOptionsOutcomeCallable;
      typedef std::future<DescribeOptionGroupsOutcome> DescribeOptionGroupsOutcomeCallable;
      typedef std::future<DescribeOrderableDBInstanceOptionsOutcome> DescribeOrderableDBInstanceOptionsOutcomeCallable;
      typedef std::future<DescribePendingMaintenanceActionsOutcome> DescribePendingMaintenanceActionsOutcomeCallable;
      typedef std::future<DescribeReservedDBInstancesOutcome> DescribeReservedDBInstancesOutcomeCallable;
      typedef std::future<DescribeReservedDBInstancesOfferingsOutcome> DescribeReservedDBInstancesOfferingsOutcomeCallable;
      typedef std::future<DescribeSourceRegionsOutcome> DescribeSourceRegionsOutcomeCallable;
      typedef std::future<DescribeValidDBInstanceModificationsOutcome> DescribeValidDBInstanceModificationsOutcomeCallable;
      typedef std::future<DownloadDBLogFilePortionOutcome> DownloadDBLogFilePortionOutcomeCallable;
      typedef std::future<FailoverDBClusterOutcome> FailoverDBClusterOutcomeCallable;
      typedef std::future<FailoverGlobalClusterOutcome> FailoverGlobalClusterOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ModifyActivityStreamOutcome> ModifyActivityStreamOutcomeCallable;
      typedef std::future<ModifyCertificatesOutcome> ModifyCertificatesOutcomeCallable;
      typedef std::future<ModifyCurrentDBClusterCapacityOutcome> ModifyCurrentDBClusterCapacityOutcomeCallable;
      typedef std::future<ModifyCustomDBEngineVersionOutcome> ModifyCustomDBEngineVersionOutcomeCallable;
      typedef std::future<ModifyDBClusterOutcome> ModifyDBClusterOutcomeCallable;
      typedef std::future<ModifyDBClusterEndpointOutcome> ModifyDBClusterEndpointOutcomeCallable;
      typedef std::future<ModifyDBClusterParameterGroupOutcome> ModifyDBClusterParameterGroupOutcomeCallable;
      typedef std::future<ModifyDBClusterSnapshotAttributeOutcome> ModifyDBClusterSnapshotAttributeOutcomeCallable;
      typedef std::future<ModifyDBInstanceOutcome> ModifyDBInstanceOutcomeCallable;
      typedef std::future<ModifyDBParameterGroupOutcome> ModifyDBParameterGroupOutcomeCallable;
      typedef std::future<ModifyDBProxyOutcome> ModifyDBProxyOutcomeCallable;
      typedef std::future<ModifyDBProxyEndpointOutcome> ModifyDBProxyEndpointOutcomeCallable;
      typedef std::future<ModifyDBProxyTargetGroupOutcome> ModifyDBProxyTargetGroupOutcomeCallable;
      typedef std::future<ModifyDBSnapshotOutcome> ModifyDBSnapshotOutcomeCallable;
      typedef std::future<ModifyDBSnapshotAttributeOutcome> ModifyDBSnapshotAttributeOutcomeCallable;
      typedef std::future<ModifyDBSubnetGroupOutcome> ModifyDBSubnetGroupOutcomeCallable;
      typedef std::future<ModifyEventSubscriptionOutcome> ModifyEventSubscriptionOutcomeCallable;
      typedef std::future<ModifyGlobalClusterOutcome> ModifyGlobalClusterOutcomeCallable;
      typedef std::future<ModifyOptionGroupOutcome> ModifyOptionGroupOutcomeCallable;
      typedef std::future<PromoteReadReplicaOutcome> PromoteReadReplicaOutcomeCallable;
      typedef std::future<PromoteReadReplicaDBClusterOutcome> PromoteReadReplicaDBClusterOutcomeCallable;
      typedef std::future<PurchaseReservedDBInstancesOfferingOutcome> PurchaseReservedDBInstancesOfferingOutcomeCallable;
      typedef std::future<RebootDBClusterOutcome> RebootDBClusterOutcomeCallable;
      typedef std::future<RebootDBInstanceOutcome> RebootDBInstanceOutcomeCallable;
      typedef std::future<RegisterDBProxyTargetsOutcome> RegisterDBProxyTargetsOutcomeCallable;
      typedef std::future<RemoveFromGlobalClusterOutcome> RemoveFromGlobalClusterOutcomeCallable;
      typedef std::future<RemoveRoleFromDBClusterOutcome> RemoveRoleFromDBClusterOutcomeCallable;
      typedef std::future<RemoveRoleFromDBInstanceOutcome> RemoveRoleFromDBInstanceOutcomeCallable;
      typedef std::future<RemoveSourceIdentifierFromSubscriptionOutcome> RemoveSourceIdentifierFromSubscriptionOutcomeCallable;
      typedef std::future<RemoveTagsFromResourceOutcome> RemoveTagsFromResourceOutcomeCallable;
      typedef std::future<ResetDBClusterParameterGroupOutcome> ResetDBClusterParameterGroupOutcomeCallable;
      typedef std::future<ResetDBParameterGroupOutcome> ResetDBParameterGroupOutcomeCallable;
      typedef std::future<RestoreDBClusterFromS3Outcome> RestoreDBClusterFromS3OutcomeCallable;
      typedef std::future<RestoreDBClusterFromSnapshotOutcome> RestoreDBClusterFromSnapshotOutcomeCallable;
      typedef std::future<RestoreDBClusterToPointInTimeOutcome> RestoreDBClusterToPointInTimeOutcomeCallable;
      typedef std::future<RestoreDBInstanceFromDBSnapshotOutcome> RestoreDBInstanceFromDBSnapshotOutcomeCallable;
      typedef std::future<RestoreDBInstanceFromS3Outcome> RestoreDBInstanceFromS3OutcomeCallable;
      typedef std::future<RestoreDBInstanceToPointInTimeOutcome> RestoreDBInstanceToPointInTimeOutcomeCallable;
      typedef std::future<RevokeDBSecurityGroupIngressOutcome> RevokeDBSecurityGroupIngressOutcomeCallable;
      typedef std::future<StartActivityStreamOutcome> StartActivityStreamOutcomeCallable;
      typedef std::future<StartDBClusterOutcome> StartDBClusterOutcomeCallable;
      typedef std::future<StartDBInstanceOutcome> StartDBInstanceOutcomeCallable;
      typedef std::future<StartDBInstanceAutomatedBackupsReplicationOutcome> StartDBInstanceAutomatedBackupsReplicationOutcomeCallable;
      typedef std::future<StartExportTaskOutcome> StartExportTaskOutcomeCallable;
      typedef std::future<StopActivityStreamOutcome> StopActivityStreamOutcomeCallable;
      typedef std::future<StopDBClusterOutcome> StopDBClusterOutcomeCallable;
      typedef std::future<StopDBInstanceOutcome> StopDBInstanceOutcomeCallable;
      typedef std::future<StopDBInstanceAutomatedBackupsReplicationOutcome> StopDBInstanceAutomatedBackupsReplicationOutcomeCallable;
      typedef std::future<SwitchoverBlueGreenDeploymentOutcome> SwitchoverBlueGreenDeploymentOutcomeCallable;
      typedef std::future<SwitchoverReadReplicaOutcome> SwitchoverReadReplicaOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class RDSClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const RDSClient*, const Model::AddRoleToDBClusterRequest&, const Model::AddRoleToDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddRoleToDBClusterResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::AddRoleToDBInstanceRequest&, const Model::AddRoleToDBInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddRoleToDBInstanceResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::AddSourceIdentifierToSubscriptionRequest&, const Model::AddSourceIdentifierToSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddSourceIdentifierToSubscriptionResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::AddTagsToResourceRequest&, const Model::AddTagsToResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsToResourceResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ApplyPendingMaintenanceActionRequest&, const Model::ApplyPendingMaintenanceActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ApplyPendingMaintenanceActionResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::AuthorizeDBSecurityGroupIngressRequest&, const Model::AuthorizeDBSecurityGroupIngressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AuthorizeDBSecurityGroupIngressResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::BacktrackDBClusterRequest&, const Model::BacktrackDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BacktrackDBClusterResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CancelExportTaskRequest&, const Model::CancelExportTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelExportTaskResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CopyDBClusterParameterGroupRequest&, const Model::CopyDBClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyDBClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CopyDBClusterSnapshotRequest&, const Model::CopyDBClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyDBClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CopyDBParameterGroupRequest&, const Model::CopyDBParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyDBParameterGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CopyDBSnapshotRequest&, const Model::CopyDBSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyDBSnapshotResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CopyOptionGroupRequest&, const Model::CopyOptionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyOptionGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CreateBlueGreenDeploymentRequest&, const Model::CreateBlueGreenDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBlueGreenDeploymentResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CreateCustomDBEngineVersionRequest&, const Model::CreateCustomDBEngineVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCustomDBEngineVersionResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CreateDBClusterRequest&, const Model::CreateDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBClusterResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CreateDBClusterEndpointRequest&, const Model::CreateDBClusterEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBClusterEndpointResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CreateDBClusterParameterGroupRequest&, const Model::CreateDBClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CreateDBClusterSnapshotRequest&, const Model::CreateDBClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CreateDBInstanceRequest&, const Model::CreateDBInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBInstanceResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CreateDBInstanceReadReplicaRequest&, const Model::CreateDBInstanceReadReplicaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBInstanceReadReplicaResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CreateDBParameterGroupRequest&, const Model::CreateDBParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBParameterGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CreateDBProxyRequest&, const Model::CreateDBProxyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBProxyResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CreateDBProxyEndpointRequest&, const Model::CreateDBProxyEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBProxyEndpointResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CreateDBSecurityGroupRequest&, const Model::CreateDBSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CreateDBSnapshotRequest&, const Model::CreateDBSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBSnapshotResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CreateDBSubnetGroupRequest&, const Model::CreateDBSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CreateEventSubscriptionRequest&, const Model::CreateEventSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventSubscriptionResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CreateGlobalClusterRequest&, const Model::CreateGlobalClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGlobalClusterResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::CreateOptionGroupRequest&, const Model::CreateOptionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOptionGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeleteBlueGreenDeploymentRequest&, const Model::DeleteBlueGreenDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBlueGreenDeploymentResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeleteCustomDBEngineVersionRequest&, const Model::DeleteCustomDBEngineVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCustomDBEngineVersionResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeleteDBClusterRequest&, const Model::DeleteDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBClusterResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeleteDBClusterEndpointRequest&, const Model::DeleteDBClusterEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBClusterEndpointResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeleteDBClusterParameterGroupRequest&, const Model::DeleteDBClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeleteDBClusterSnapshotRequest&, const Model::DeleteDBClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeleteDBInstanceRequest&, const Model::DeleteDBInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBInstanceResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeleteDBInstanceAutomatedBackupRequest&, const Model::DeleteDBInstanceAutomatedBackupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBInstanceAutomatedBackupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeleteDBParameterGroupRequest&, const Model::DeleteDBParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBParameterGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeleteDBProxyRequest&, const Model::DeleteDBProxyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBProxyResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeleteDBProxyEndpointRequest&, const Model::DeleteDBProxyEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBProxyEndpointResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeleteDBSecurityGroupRequest&, const Model::DeleteDBSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeleteDBSnapshotRequest&, const Model::DeleteDBSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBSnapshotResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeleteDBSubnetGroupRequest&, const Model::DeleteDBSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeleteEventSubscriptionRequest&, const Model::DeleteEventSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventSubscriptionResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeleteGlobalClusterRequest&, const Model::DeleteGlobalClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGlobalClusterResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeleteOptionGroupRequest&, const Model::DeleteOptionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOptionGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeregisterDBProxyTargetsRequest&, const Model::DeregisterDBProxyTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterDBProxyTargetsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeAccountAttributesRequest&, const Model::DescribeAccountAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountAttributesResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeBlueGreenDeploymentsRequest&, const Model::DescribeBlueGreenDeploymentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBlueGreenDeploymentsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeCertificatesRequest&, const Model::DescribeCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCertificatesResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBClusterBacktracksRequest&, const Model::DescribeDBClusterBacktracksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClusterBacktracksResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBClusterEndpointsRequest&, const Model::DescribeDBClusterEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClusterEndpointsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBClusterParameterGroupsRequest&, const Model::DescribeDBClusterParameterGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClusterParameterGroupsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBClusterParametersRequest&, const Model::DescribeDBClusterParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClusterParametersResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBClusterSnapshotAttributesRequest&, const Model::DescribeDBClusterSnapshotAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClusterSnapshotAttributesResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBClusterSnapshotsRequest&, const Model::DescribeDBClusterSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClusterSnapshotsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBClustersRequest&, const Model::DescribeDBClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClustersResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBEngineVersionsRequest&, const Model::DescribeDBEngineVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBEngineVersionsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBInstanceAutomatedBackupsRequest&, const Model::DescribeDBInstanceAutomatedBackupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBInstanceAutomatedBackupsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBInstancesRequest&, const Model::DescribeDBInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBInstancesResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBLogFilesRequest&, const Model::DescribeDBLogFilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBLogFilesResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBParameterGroupsRequest&, const Model::DescribeDBParameterGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBParameterGroupsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBParametersRequest&, const Model::DescribeDBParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBParametersResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBProxiesRequest&, const Model::DescribeDBProxiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBProxiesResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBProxyEndpointsRequest&, const Model::DescribeDBProxyEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBProxyEndpointsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBProxyTargetGroupsRequest&, const Model::DescribeDBProxyTargetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBProxyTargetGroupsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBProxyTargetsRequest&, const Model::DescribeDBProxyTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBProxyTargetsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBSecurityGroupsRequest&, const Model::DescribeDBSecurityGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBSecurityGroupsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBSnapshotAttributesRequest&, const Model::DescribeDBSnapshotAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBSnapshotAttributesResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBSnapshotsRequest&, const Model::DescribeDBSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBSnapshotsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeDBSubnetGroupsRequest&, const Model::DescribeDBSubnetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBSubnetGroupsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeEngineDefaultClusterParametersRequest&, const Model::DescribeEngineDefaultClusterParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEngineDefaultClusterParametersResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeEngineDefaultParametersRequest&, const Model::DescribeEngineDefaultParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEngineDefaultParametersResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeEventCategoriesRequest&, const Model::DescribeEventCategoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventCategoriesResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeEventSubscriptionsRequest&, const Model::DescribeEventSubscriptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventSubscriptionsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeEventsRequest&, const Model::DescribeEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeExportTasksRequest&, const Model::DescribeExportTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeExportTasksResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeGlobalClustersRequest&, const Model::DescribeGlobalClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGlobalClustersResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeOptionGroupOptionsRequest&, const Model::DescribeOptionGroupOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOptionGroupOptionsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeOptionGroupsRequest&, const Model::DescribeOptionGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOptionGroupsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeOrderableDBInstanceOptionsRequest&, const Model::DescribeOrderableDBInstanceOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrderableDBInstanceOptionsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribePendingMaintenanceActionsRequest&, const Model::DescribePendingMaintenanceActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePendingMaintenanceActionsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeReservedDBInstancesRequest&, const Model::DescribeReservedDBInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedDBInstancesResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeReservedDBInstancesOfferingsRequest&, const Model::DescribeReservedDBInstancesOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedDBInstancesOfferingsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeSourceRegionsRequest&, const Model::DescribeSourceRegionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSourceRegionsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeValidDBInstanceModificationsRequest&, const Model::DescribeValidDBInstanceModificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeValidDBInstanceModificationsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DownloadDBLogFilePortionRequest&, const Model::DownloadDBLogFilePortionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DownloadDBLogFilePortionResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::FailoverDBClusterRequest&, const Model::FailoverDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > FailoverDBClusterResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::FailoverGlobalClusterRequest&, const Model::FailoverGlobalClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > FailoverGlobalClusterResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyActivityStreamRequest&, const Model::ModifyActivityStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyActivityStreamResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyCertificatesRequest&, const Model::ModifyCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyCertificatesResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyCurrentDBClusterCapacityRequest&, const Model::ModifyCurrentDBClusterCapacityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyCurrentDBClusterCapacityResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyCustomDBEngineVersionRequest&, const Model::ModifyCustomDBEngineVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyCustomDBEngineVersionResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyDBClusterRequest&, const Model::ModifyDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBClusterResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyDBClusterEndpointRequest&, const Model::ModifyDBClusterEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBClusterEndpointResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyDBClusterParameterGroupRequest&, const Model::ModifyDBClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyDBClusterSnapshotAttributeRequest&, const Model::ModifyDBClusterSnapshotAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBClusterSnapshotAttributeResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyDBInstanceRequest&, const Model::ModifyDBInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBInstanceResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyDBParameterGroupRequest&, const Model::ModifyDBParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBParameterGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyDBProxyRequest&, const Model::ModifyDBProxyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBProxyResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyDBProxyEndpointRequest&, const Model::ModifyDBProxyEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBProxyEndpointResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyDBProxyTargetGroupRequest&, const Model::ModifyDBProxyTargetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBProxyTargetGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyDBSnapshotRequest&, const Model::ModifyDBSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBSnapshotResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyDBSnapshotAttributeRequest&, const Model::ModifyDBSnapshotAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBSnapshotAttributeResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyDBSubnetGroupRequest&, const Model::ModifyDBSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyEventSubscriptionRequest&, const Model::ModifyEventSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyEventSubscriptionResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyGlobalClusterRequest&, const Model::ModifyGlobalClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyGlobalClusterResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyOptionGroupRequest&, const Model::ModifyOptionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyOptionGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::PromoteReadReplicaRequest&, const Model::PromoteReadReplicaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PromoteReadReplicaResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::PromoteReadReplicaDBClusterRequest&, const Model::PromoteReadReplicaDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PromoteReadReplicaDBClusterResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::PurchaseReservedDBInstancesOfferingRequest&, const Model::PurchaseReservedDBInstancesOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurchaseReservedDBInstancesOfferingResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::RebootDBClusterRequest&, const Model::RebootDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootDBClusterResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::RebootDBInstanceRequest&, const Model::RebootDBInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootDBInstanceResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::RegisterDBProxyTargetsRequest&, const Model::RegisterDBProxyTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterDBProxyTargetsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::RemoveFromGlobalClusterRequest&, const Model::RemoveFromGlobalClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveFromGlobalClusterResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::RemoveRoleFromDBClusterRequest&, const Model::RemoveRoleFromDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveRoleFromDBClusterResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::RemoveRoleFromDBInstanceRequest&, const Model::RemoveRoleFromDBInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveRoleFromDBInstanceResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::RemoveSourceIdentifierFromSubscriptionRequest&, const Model::RemoveSourceIdentifierFromSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveSourceIdentifierFromSubscriptionResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::RemoveTagsFromResourceRequest&, const Model::RemoveTagsFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsFromResourceResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ResetDBClusterParameterGroupRequest&, const Model::ResetDBClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetDBClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ResetDBParameterGroupRequest&, const Model::ResetDBParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetDBParameterGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::RestoreDBClusterFromS3Request&, const Model::RestoreDBClusterFromS3Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreDBClusterFromS3ResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::RestoreDBClusterFromSnapshotRequest&, const Model::RestoreDBClusterFromSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreDBClusterFromSnapshotResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::RestoreDBClusterToPointInTimeRequest&, const Model::RestoreDBClusterToPointInTimeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreDBClusterToPointInTimeResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::RestoreDBInstanceFromDBSnapshotRequest&, const Model::RestoreDBInstanceFromDBSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreDBInstanceFromDBSnapshotResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::RestoreDBInstanceFromS3Request&, const Model::RestoreDBInstanceFromS3Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreDBInstanceFromS3ResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::RestoreDBInstanceToPointInTimeRequest&, const Model::RestoreDBInstanceToPointInTimeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreDBInstanceToPointInTimeResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::RevokeDBSecurityGroupIngressRequest&, const Model::RevokeDBSecurityGroupIngressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeDBSecurityGroupIngressResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::StartActivityStreamRequest&, const Model::StartActivityStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartActivityStreamResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::StartDBClusterRequest&, const Model::StartDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDBClusterResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::StartDBInstanceRequest&, const Model::StartDBInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDBInstanceResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::StartDBInstanceAutomatedBackupsReplicationRequest&, const Model::StartDBInstanceAutomatedBackupsReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDBInstanceAutomatedBackupsReplicationResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::StartExportTaskRequest&, const Model::StartExportTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartExportTaskResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::StopActivityStreamRequest&, const Model::StopActivityStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopActivityStreamResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::StopDBClusterRequest&, const Model::StopDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopDBClusterResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::StopDBInstanceRequest&, const Model::StopDBInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopDBInstanceResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::StopDBInstanceAutomatedBackupsReplicationRequest&, const Model::StopDBInstanceAutomatedBackupsReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopDBInstanceAutomatedBackupsReplicationResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::SwitchoverBlueGreenDeploymentRequest&, const Model::SwitchoverBlueGreenDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SwitchoverBlueGreenDeploymentResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::SwitchoverReadReplicaRequest&, const Model::SwitchoverReadReplicaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SwitchoverReadReplicaResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace RDS
} // namespace Aws
