/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
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
#include <aws/rds/model/CreateCustomAvailabilityZoneResult.h>
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
#include <aws/rds/model/DeleteCustomAvailabilityZoneResult.h>
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
#include <aws/rds/model/DeleteInstallationMediaResult.h>
#include <aws/rds/model/DeregisterDBProxyTargetsResult.h>
#include <aws/rds/model/DescribeAccountAttributesResult.h>
#include <aws/rds/model/DescribeCertificatesResult.h>
#include <aws/rds/model/DescribeCustomAvailabilityZonesResult.h>
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
#include <aws/rds/model/DescribeInstallationMediaResult.h>
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
#include <aws/rds/model/ImportInstallationMediaResult.h>
#include <aws/rds/model/ListTagsForResourceResult.h>
#include <aws/rds/model/ModifyCertificatesResult.h>
#include <aws/rds/model/ModifyCurrentDBClusterCapacityResult.h>
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
        class CreateCustomAvailabilityZoneRequest;
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
        class DeleteCustomAvailabilityZoneRequest;
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
        class DeleteInstallationMediaRequest;
        class DeleteOptionGroupRequest;
        class DeregisterDBProxyTargetsRequest;
        class DescribeAccountAttributesRequest;
        class DescribeCertificatesRequest;
        class DescribeCustomAvailabilityZonesRequest;
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
        class DescribeInstallationMediaRequest;
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
        class ImportInstallationMediaRequest;
        class ListTagsForResourceRequest;
        class ModifyCertificatesRequest;
        class ModifyCurrentDBClusterCapacityRequest;
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
        typedef Aws::Utils::Outcome<CreateCustomAvailabilityZoneResult, RDSError> CreateCustomAvailabilityZoneOutcome;
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
        typedef Aws::Utils::Outcome<DeleteCustomAvailabilityZoneResult, RDSError> DeleteCustomAvailabilityZoneOutcome;
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
        typedef Aws::Utils::Outcome<DeleteInstallationMediaResult, RDSError> DeleteInstallationMediaOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, RDSError> DeleteOptionGroupOutcome;
        typedef Aws::Utils::Outcome<DeregisterDBProxyTargetsResult, RDSError> DeregisterDBProxyTargetsOutcome;
        typedef Aws::Utils::Outcome<DescribeAccountAttributesResult, RDSError> DescribeAccountAttributesOutcome;
        typedef Aws::Utils::Outcome<DescribeCertificatesResult, RDSError> DescribeCertificatesOutcome;
        typedef Aws::Utils::Outcome<DescribeCustomAvailabilityZonesResult, RDSError> DescribeCustomAvailabilityZonesOutcome;
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
        typedef Aws::Utils::Outcome<DescribeInstallationMediaResult, RDSError> DescribeInstallationMediaOutcome;
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
        typedef Aws::Utils::Outcome<ImportInstallationMediaResult, RDSError> ImportInstallationMediaOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, RDSError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ModifyCertificatesResult, RDSError> ModifyCertificatesOutcome;
        typedef Aws::Utils::Outcome<ModifyCurrentDBClusterCapacityResult, RDSError> ModifyCurrentDBClusterCapacityOutcome;
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
        typedef std::future<CreateCustomAvailabilityZoneOutcome> CreateCustomAvailabilityZoneOutcomeCallable;
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
        typedef std::future<DeleteCustomAvailabilityZoneOutcome> DeleteCustomAvailabilityZoneOutcomeCallable;
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
        typedef std::future<DeleteInstallationMediaOutcome> DeleteInstallationMediaOutcomeCallable;
        typedef std::future<DeleteOptionGroupOutcome> DeleteOptionGroupOutcomeCallable;
        typedef std::future<DeregisterDBProxyTargetsOutcome> DeregisterDBProxyTargetsOutcomeCallable;
        typedef std::future<DescribeAccountAttributesOutcome> DescribeAccountAttributesOutcomeCallable;
        typedef std::future<DescribeCertificatesOutcome> DescribeCertificatesOutcomeCallable;
        typedef std::future<DescribeCustomAvailabilityZonesOutcome> DescribeCustomAvailabilityZonesOutcomeCallable;
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
        typedef std::future<DescribeInstallationMediaOutcome> DescribeInstallationMediaOutcomeCallable;
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
        typedef std::future<ImportInstallationMediaOutcome> ImportInstallationMediaOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ModifyCertificatesOutcome> ModifyCertificatesOutcomeCallable;
        typedef std::future<ModifyCurrentDBClusterCapacityOutcome> ModifyCurrentDBClusterCapacityOutcomeCallable;
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
    } // namespace Model

        class RDSClient;

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
    typedef std::function<void(const RDSClient*, const Model::CreateCustomAvailabilityZoneRequest&, const Model::CreateCustomAvailabilityZoneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCustomAvailabilityZoneResponseReceivedHandler;
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
    typedef std::function<void(const RDSClient*, const Model::DeleteCustomAvailabilityZoneRequest&, const Model::DeleteCustomAvailabilityZoneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCustomAvailabilityZoneResponseReceivedHandler;
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
    typedef std::function<void(const RDSClient*, const Model::DeleteInstallationMediaRequest&, const Model::DeleteInstallationMediaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInstallationMediaResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeleteOptionGroupRequest&, const Model::DeleteOptionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOptionGroupResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DeregisterDBProxyTargetsRequest&, const Model::DeregisterDBProxyTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterDBProxyTargetsResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeAccountAttributesRequest&, const Model::DescribeAccountAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountAttributesResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeCertificatesRequest&, const Model::DescribeCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCertificatesResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::DescribeCustomAvailabilityZonesRequest&, const Model::DescribeCustomAvailabilityZonesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCustomAvailabilityZonesResponseReceivedHandler;
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
    typedef std::function<void(const RDSClient*, const Model::DescribeInstallationMediaRequest&, const Model::DescribeInstallationMediaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstallationMediaResponseReceivedHandler;
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
    typedef std::function<void(const RDSClient*, const Model::ImportInstallationMediaRequest&, const Model::ImportInstallationMediaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportInstallationMediaResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyCertificatesRequest&, const Model::ModifyCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyCertificatesResponseReceivedHandler;
    typedef std::function<void(const RDSClient*, const Model::ModifyCurrentDBClusterCapacityRequest&, const Model::ModifyCurrentDBClusterCapacityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyCurrentDBClusterCapacityResponseReceivedHandler;
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

        /**
     * <fullname>Amazon Relational Database Service</fullname> <p> </p> <p>Amazon
   * Relational Database Service (Amazon RDS) is a web service that makes it easier
   * to set up, operate, and scale a relational database in the cloud. It provides
   * cost-efficient, resizeable capacity for an industry-standard relational database
   * and manages common database administration tasks, freeing up developers to focus
   * on what makes their applications and businesses unique.</p> <p>Amazon RDS gives
   * you access to the capabilities of a MySQL, MariaDB, PostgreSQL, Microsoft SQL
   * Server, Oracle, or Amazon Aurora database server. These capabilities mean that
   * the code, applications, and tools you already use today with your existing
   * databases work with Amazon RDS without modification. Amazon RDS automatically
   * backs up your database and maintains the database software that powers your DB
   * instance. Amazon RDS is flexible: you can scale your DB instance's compute
   * resources and storage capacity to meet your application's demand. As with all
   * Amazon Web Services, there are no up-front investments, and you pay only for the
   * resources you use.</p> <p>This interface reference for Amazon RDS contains
   * documentation for a programming or command line interface you can use to manage
   * Amazon RDS. Amazon RDS is asynchronous, which means that some interfaces might
   * require techniques such as polling or callback functions to determine when a
   * command has been applied. In this reference, the parameter descriptions indicate
   * whether a command is applied immediately, on the next instance reboot, or during
   * the maintenance window. The reference structure is as follows, and we list
   * following some related topics from the user guide.</p> <p> <b>Amazon RDS API
   * Reference</b> </p> <ul> <li> <p>For the alphabetical list of API actions, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_Operations.html">API
   * Actions</a>.</p> </li> <li> <p>For the alphabetical list of data types, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_Types.html">Data
   * Types</a>.</p> </li> <li> <p>For a list of common query parameters, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/CommonParameters.html">Common
   * Parameters</a>.</p> </li> <li> <p>For descriptions of the error codes, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/CommonErrors.html">Common
   * Errors</a>.</p> </li> </ul> <p> <b>Amazon RDS User Guide</b> </p> <ul> <li>
   * <p>For a summary of the Amazon RDS interfaces, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Welcome.html#Welcome.Interfaces">Available
   * RDS Interfaces</a>.</p> </li> <li> <p>For more information about how to use the
   * Query API, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Using_the_Query_API.html">Using
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
        RDSClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RDSClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RDSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~RDSClient();

    
        /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;

        /**
        * Generates an auth token for connecting to an rds instance.
        */
        Aws::String GenerateConnectAuthToken(const char* dbHostName, const char* dbRegion, unsigned port, const char* dbUserName) const;

        
        /**
         * <p>Associates an Identity and Access Management (IAM) role from an Amazon Aurora
         * DB cluster. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Integrating.Authorizing.html">Authorizing
         * Amazon Aurora MySQL to Access Other AWS Services on Your Behalf</a> in the
         * <i>Amazon Aurora User Guide</i>.</p>  <p>This action only applies to
         * Aurora DB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AddRoleToDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::AddRoleToDBClusterOutcome AddRoleToDBCluster(const Model::AddRoleToDBClusterRequest& request) const;

        /**
         * <p>Associates an Identity and Access Management (IAM) role from an Amazon Aurora
         * DB cluster. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Integrating.Authorizing.html">Authorizing
         * Amazon Aurora MySQL to Access Other AWS Services on Your Behalf</a> in the
         * <i>Amazon Aurora User Guide</i>.</p>  <p>This action only applies to
         * Aurora DB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AddRoleToDBCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddRoleToDBClusterOutcomeCallable AddRoleToDBClusterCallable(const Model::AddRoleToDBClusterRequest& request) const;

        /**
         * <p>Associates an Identity and Access Management (IAM) role from an Amazon Aurora
         * DB cluster. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Integrating.Authorizing.html">Authorizing
         * Amazon Aurora MySQL to Access Other AWS Services on Your Behalf</a> in the
         * <i>Amazon Aurora User Guide</i>.</p>  <p>This action only applies to
         * Aurora DB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AddRoleToDBCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddRoleToDBClusterAsync(const Model::AddRoleToDBClusterRequest& request, const AddRoleToDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates an AWS Identity and Access Management (IAM) role with a DB
         * instance.</p>  <p>To add a role to a DB instance, the status of the DB
         * instance must be <code>available</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AddRoleToDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::AddRoleToDBInstanceOutcome AddRoleToDBInstance(const Model::AddRoleToDBInstanceRequest& request) const;

        /**
         * <p>Associates an AWS Identity and Access Management (IAM) role with a DB
         * instance.</p>  <p>To add a role to a DB instance, the status of the DB
         * instance must be <code>available</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AddRoleToDBInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddRoleToDBInstanceOutcomeCallable AddRoleToDBInstanceCallable(const Model::AddRoleToDBInstanceRequest& request) const;

        /**
         * <p>Associates an AWS Identity and Access Management (IAM) role with a DB
         * instance.</p>  <p>To add a role to a DB instance, the status of the DB
         * instance must be <code>available</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AddRoleToDBInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddRoleToDBInstanceAsync(const Model::AddRoleToDBInstanceRequest& request, const AddRoleToDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a source identifier to an existing RDS event notification
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AddSourceIdentifierToSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::AddSourceIdentifierToSubscriptionOutcome AddSourceIdentifierToSubscription(const Model::AddSourceIdentifierToSubscriptionRequest& request) const;

        /**
         * <p>Adds a source identifier to an existing RDS event notification
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AddSourceIdentifierToSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddSourceIdentifierToSubscriptionOutcomeCallable AddSourceIdentifierToSubscriptionCallable(const Model::AddSourceIdentifierToSubscriptionRequest& request) const;

        /**
         * <p>Adds a source identifier to an existing RDS event notification
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AddSourceIdentifierToSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddSourceIdentifierToSubscriptionAsync(const Model::AddSourceIdentifierToSubscriptionRequest& request, const AddSourceIdentifierToSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds metadata tags to an Amazon RDS resource. These tags can also be used
         * with cost allocation reporting to track cost associated with Amazon RDS
         * resources, or used in a Condition statement in an IAM policy for Amazon RDS.</p>
         * <p>For an overview on tagging Amazon RDS resources, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging
         * Amazon RDS Resources</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AddTagsToResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsToResourceOutcome AddTagsToResource(const Model::AddTagsToResourceRequest& request) const;

        /**
         * <p>Adds metadata tags to an Amazon RDS resource. These tags can also be used
         * with cost allocation reporting to track cost associated with Amazon RDS
         * resources, or used in a Condition statement in an IAM policy for Amazon RDS.</p>
         * <p>For an overview on tagging Amazon RDS resources, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging
         * Amazon RDS Resources</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AddTagsToResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const Model::AddTagsToResourceRequest& request) const;

        /**
         * <p>Adds metadata tags to an Amazon RDS resource. These tags can also be used
         * with cost allocation reporting to track cost associated with Amazon RDS
         * resources, or used in a Condition statement in an IAM policy for Amazon RDS.</p>
         * <p>For an overview on tagging Amazon RDS resources, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging
         * Amazon RDS Resources</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AddTagsToResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsToResourceAsync(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Applies a pending maintenance action to a resource (for example, to a DB
         * instance).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ApplyPendingMaintenanceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::ApplyPendingMaintenanceActionOutcome ApplyPendingMaintenanceAction(const Model::ApplyPendingMaintenanceActionRequest& request) const;

        /**
         * <p>Applies a pending maintenance action to a resource (for example, to a DB
         * instance).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ApplyPendingMaintenanceAction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ApplyPendingMaintenanceActionOutcomeCallable ApplyPendingMaintenanceActionCallable(const Model::ApplyPendingMaintenanceActionRequest& request) const;

        /**
         * <p>Applies a pending maintenance action to a resource (for example, to a DB
         * instance).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ApplyPendingMaintenanceAction">AWS
         * API Reference</a></p>
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
         * EC2SecurityGroupName or EC2SecurityGroupId for non-VPC).</p>  <p>You can't
         * authorize ingress from an EC2 security group in one AWS Region to an Amazon RDS
         * DB instance in another. You can't authorize ingress from a VPC security group in
         * one VPC to an Amazon RDS DB instance in another.</p>  <p>For an overview
         * of CIDR ranges, go to the <a
         * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia
         * Tutorial</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AuthorizeDBSecurityGroupIngress">AWS
         * API Reference</a></p>
         */
        virtual Model::AuthorizeDBSecurityGroupIngressOutcome AuthorizeDBSecurityGroupIngress(const Model::AuthorizeDBSecurityGroupIngressRequest& request) const;

        /**
         * <p>Enables ingress to a DBSecurityGroup using one of two forms of authorization.
         * First, EC2 or VPC security groups can be added to the DBSecurityGroup if the
         * application using the database is running on EC2 or VPC instances. Second, IP
         * ranges are available if the application accessing your database is running on
         * the Internet. Required parameters for this API are one of CIDR range,
         * EC2SecurityGroupId for VPC, or (EC2SecurityGroupOwnerId and either
         * EC2SecurityGroupName or EC2SecurityGroupId for non-VPC).</p>  <p>You can't
         * authorize ingress from an EC2 security group in one AWS Region to an Amazon RDS
         * DB instance in another. You can't authorize ingress from a VPC security group in
         * one VPC to an Amazon RDS DB instance in another.</p>  <p>For an overview
         * of CIDR ranges, go to the <a
         * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia
         * Tutorial</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AuthorizeDBSecurityGroupIngress">AWS
         * API Reference</a></p>
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
         * EC2SecurityGroupName or EC2SecurityGroupId for non-VPC).</p>  <p>You can't
         * authorize ingress from an EC2 security group in one AWS Region to an Amazon RDS
         * DB instance in another. You can't authorize ingress from a VPC security group in
         * one VPC to an Amazon RDS DB instance in another.</p>  <p>For an overview
         * of CIDR ranges, go to the <a
         * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia
         * Tutorial</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AuthorizeDBSecurityGroupIngress">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AuthorizeDBSecurityGroupIngressAsync(const Model::AuthorizeDBSecurityGroupIngressRequest& request, const AuthorizeDBSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Backtracks a DB cluster to a specific time, without creating a new DB
         * cluster.</p> <p>For more information on backtracking, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Managing.Backtrack.html">
         * Backtracking an Aurora DB Cluster</a> in the <i>Amazon Aurora User Guide.</i>
         * </p>  <p>This action only applies to Aurora MySQL DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/BacktrackDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::BacktrackDBClusterOutcome BacktrackDBCluster(const Model::BacktrackDBClusterRequest& request) const;

        /**
         * <p>Backtracks a DB cluster to a specific time, without creating a new DB
         * cluster.</p> <p>For more information on backtracking, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Managing.Backtrack.html">
         * Backtracking an Aurora DB Cluster</a> in the <i>Amazon Aurora User Guide.</i>
         * </p>  <p>This action only applies to Aurora MySQL DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/BacktrackDBCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BacktrackDBClusterOutcomeCallable BacktrackDBClusterCallable(const Model::BacktrackDBClusterRequest& request) const;

        /**
         * <p>Backtracks a DB cluster to a specific time, without creating a new DB
         * cluster.</p> <p>For more information on backtracking, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Managing.Backtrack.html">
         * Backtracking an Aurora DB Cluster</a> in the <i>Amazon Aurora User Guide.</i>
         * </p>  <p>This action only applies to Aurora MySQL DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/BacktrackDBCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BacktrackDBClusterAsync(const Model::BacktrackDBClusterRequest& request, const BacktrackDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels an export task in progress that is exporting a snapshot to Amazon S3.
         * Any data that has already been written to the S3 bucket isn't removed.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CancelExportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelExportTaskOutcome CancelExportTask(const Model::CancelExportTaskRequest& request) const;

        /**
         * <p>Cancels an export task in progress that is exporting a snapshot to Amazon S3.
         * Any data that has already been written to the S3 bucket isn't removed.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CancelExportTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelExportTaskOutcomeCallable CancelExportTaskCallable(const Model::CancelExportTaskRequest& request) const;

        /**
         * <p>Cancels an export task in progress that is exporting a snapshot to Amazon S3.
         * Any data that has already been written to the S3 bucket isn't removed.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CancelExportTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelExportTaskAsync(const Model::CancelExportTaskRequest& request, const CancelExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Copies the specified DB cluster parameter group.</p>  <p>This action
         * only applies to Aurora DB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyDBClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyDBClusterParameterGroupOutcome CopyDBClusterParameterGroup(const Model::CopyDBClusterParameterGroupRequest& request) const;

        /**
         * <p>Copies the specified DB cluster parameter group.</p>  <p>This action
         * only applies to Aurora DB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyDBClusterParameterGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyDBClusterParameterGroupOutcomeCallable CopyDBClusterParameterGroupCallable(const Model::CopyDBClusterParameterGroupRequest& request) const;

        /**
         * <p>Copies the specified DB cluster parameter group.</p>  <p>This action
         * only applies to Aurora DB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyDBClusterParameterGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyDBClusterParameterGroupAsync(const Model::CopyDBClusterParameterGroupRequest& request, const CopyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Copies a snapshot of a DB cluster.</p> <p>To copy a DB cluster snapshot from
         * a shared manual DB cluster snapshot,
         * <code>SourceDBClusterSnapshotIdentifier</code> must be the Amazon Resource Name
         * (ARN) of the shared DB cluster snapshot.</p> <p>You can copy an encrypted DB
         * cluster snapshot from another AWS Region. In that case, the AWS Region where you
         * call the <code>CopyDBClusterSnapshot</code> action is the destination AWS Region
         * for the encrypted DB cluster snapshot to be copied to. To copy an encrypted DB
         * cluster snapshot from another AWS Region, you must provide the following
         * values:</p> <ul> <li> <p> <code>KmsKeyId</code> - The AWS Key Management System
         * (AWS KMS) key identifier for the key to use to encrypt the copy of the DB
         * cluster snapshot in the destination AWS Region.</p> </li> <li> <p>
         * <code>PreSignedUrl</code> - A URL that contains a Signature Version 4 signed
         * request for the <code>CopyDBClusterSnapshot</code> action to be called in the
         * source AWS Region where the DB cluster snapshot is copied from. The pre-signed
         * URL must be a valid request for the <code>CopyDBClusterSnapshot</code> API
         * action that can be executed in the source AWS Region that contains the encrypted
         * DB cluster snapshot to be copied.</p> <p>The pre-signed URL request must contain
         * the following parameter values:</p> <ul> <li> <p> <code>KmsKeyId</code> - The
         * AWS KMS key identifier for the customer master key (CMK) to use to encrypt the
         * copy of the DB cluster snapshot in the destination AWS Region. This is the same
         * identifier for both the <code>CopyDBClusterSnapshot</code> action that is called
         * in the destination AWS Region, and the action contained in the pre-signed
         * URL.</p> </li> <li> <p> <code>DestinationRegion</code> - The name of the AWS
         * Region that the DB cluster snapshot is to be created in.</p> </li> <li> <p>
         * <code>SourceDBClusterSnapshotIdentifier</code> - The DB cluster snapshot
         * identifier for the encrypted DB cluster snapshot to be copied. This identifier
         * must be in the Amazon Resource Name (ARN) format for the source AWS Region. For
         * example, if you are copying an encrypted DB cluster snapshot from the us-west-2
         * AWS Region, then your <code>SourceDBClusterSnapshotIdentifier</code> looks like
         * the following example:
         * <code>arn:aws:rds:us-west-2:123456789012:cluster-snapshot:aurora-cluster1-snapshot-20161115</code>.</p>
         * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
         * Authenticating Requests: Using Query Parameters (AWS Signature Version 4)</a>
         * and <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
         * Signature Version 4 Signing Process</a>.</p>  <p>If you are using an AWS
         * SDK tool or the AWS CLI, you can specify <code>SourceRegion</code> (or
         * <code>--source-region</code> for the AWS CLI) instead of specifying
         * <code>PreSignedUrl</code> manually. Specifying <code>SourceRegion</code>
         * autogenerates a pre-signed URL that is a valid request for the operation that
         * can be executed in the source AWS Region.</p>  </li> <li> <p>
         * <code>TargetDBClusterSnapshotIdentifier</code> - The identifier for the new copy
         * of the DB cluster snapshot in the destination AWS Region.</p> </li> <li> <p>
         * <code>SourceDBClusterSnapshotIdentifier</code> - The DB cluster snapshot
         * identifier for the encrypted DB cluster snapshot to be copied. This identifier
         * must be in the ARN format for the source AWS Region and is the same value as the
         * <code>SourceDBClusterSnapshotIdentifier</code> in the pre-signed URL. </p> </li>
         * </ul> <p>To cancel the copy operation once it is in progress, delete the target
         * DB cluster snapshot identified by <code>TargetDBClusterSnapshotIdentifier</code>
         * while that DB cluster snapshot is in "copying" status.</p> <p>For more
         * information on copying encrypted DB cluster snapshots from one AWS Region to
         * another, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_CopySnapshot.html">
         * Copying a Snapshot</a> in the <i>Amazon Aurora User Guide.</i> </p> <p>For more
         * information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyDBClusterSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyDBClusterSnapshotOutcome CopyDBClusterSnapshot(const Model::CopyDBClusterSnapshotRequest& request) const;

        /**
         * <p>Copies a snapshot of a DB cluster.</p> <p>To copy a DB cluster snapshot from
         * a shared manual DB cluster snapshot,
         * <code>SourceDBClusterSnapshotIdentifier</code> must be the Amazon Resource Name
         * (ARN) of the shared DB cluster snapshot.</p> <p>You can copy an encrypted DB
         * cluster snapshot from another AWS Region. In that case, the AWS Region where you
         * call the <code>CopyDBClusterSnapshot</code> action is the destination AWS Region
         * for the encrypted DB cluster snapshot to be copied to. To copy an encrypted DB
         * cluster snapshot from another AWS Region, you must provide the following
         * values:</p> <ul> <li> <p> <code>KmsKeyId</code> - The AWS Key Management System
         * (AWS KMS) key identifier for the key to use to encrypt the copy of the DB
         * cluster snapshot in the destination AWS Region.</p> </li> <li> <p>
         * <code>PreSignedUrl</code> - A URL that contains a Signature Version 4 signed
         * request for the <code>CopyDBClusterSnapshot</code> action to be called in the
         * source AWS Region where the DB cluster snapshot is copied from. The pre-signed
         * URL must be a valid request for the <code>CopyDBClusterSnapshot</code> API
         * action that can be executed in the source AWS Region that contains the encrypted
         * DB cluster snapshot to be copied.</p> <p>The pre-signed URL request must contain
         * the following parameter values:</p> <ul> <li> <p> <code>KmsKeyId</code> - The
         * AWS KMS key identifier for the customer master key (CMK) to use to encrypt the
         * copy of the DB cluster snapshot in the destination AWS Region. This is the same
         * identifier for both the <code>CopyDBClusterSnapshot</code> action that is called
         * in the destination AWS Region, and the action contained in the pre-signed
         * URL.</p> </li> <li> <p> <code>DestinationRegion</code> - The name of the AWS
         * Region that the DB cluster snapshot is to be created in.</p> </li> <li> <p>
         * <code>SourceDBClusterSnapshotIdentifier</code> - The DB cluster snapshot
         * identifier for the encrypted DB cluster snapshot to be copied. This identifier
         * must be in the Amazon Resource Name (ARN) format for the source AWS Region. For
         * example, if you are copying an encrypted DB cluster snapshot from the us-west-2
         * AWS Region, then your <code>SourceDBClusterSnapshotIdentifier</code> looks like
         * the following example:
         * <code>arn:aws:rds:us-west-2:123456789012:cluster-snapshot:aurora-cluster1-snapshot-20161115</code>.</p>
         * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
         * Authenticating Requests: Using Query Parameters (AWS Signature Version 4)</a>
         * and <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
         * Signature Version 4 Signing Process</a>.</p>  <p>If you are using an AWS
         * SDK tool or the AWS CLI, you can specify <code>SourceRegion</code> (or
         * <code>--source-region</code> for the AWS CLI) instead of specifying
         * <code>PreSignedUrl</code> manually. Specifying <code>SourceRegion</code>
         * autogenerates a pre-signed URL that is a valid request for the operation that
         * can be executed in the source AWS Region.</p>  </li> <li> <p>
         * <code>TargetDBClusterSnapshotIdentifier</code> - The identifier for the new copy
         * of the DB cluster snapshot in the destination AWS Region.</p> </li> <li> <p>
         * <code>SourceDBClusterSnapshotIdentifier</code> - The DB cluster snapshot
         * identifier for the encrypted DB cluster snapshot to be copied. This identifier
         * must be in the ARN format for the source AWS Region and is the same value as the
         * <code>SourceDBClusterSnapshotIdentifier</code> in the pre-signed URL. </p> </li>
         * </ul> <p>To cancel the copy operation once it is in progress, delete the target
         * DB cluster snapshot identified by <code>TargetDBClusterSnapshotIdentifier</code>
         * while that DB cluster snapshot is in "copying" status.</p> <p>For more
         * information on copying encrypted DB cluster snapshots from one AWS Region to
         * another, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_CopySnapshot.html">
         * Copying a Snapshot</a> in the <i>Amazon Aurora User Guide.</i> </p> <p>For more
         * information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyDBClusterSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyDBClusterSnapshotOutcomeCallable CopyDBClusterSnapshotCallable(const Model::CopyDBClusterSnapshotRequest& request) const;

        /**
         * <p>Copies a snapshot of a DB cluster.</p> <p>To copy a DB cluster snapshot from
         * a shared manual DB cluster snapshot,
         * <code>SourceDBClusterSnapshotIdentifier</code> must be the Amazon Resource Name
         * (ARN) of the shared DB cluster snapshot.</p> <p>You can copy an encrypted DB
         * cluster snapshot from another AWS Region. In that case, the AWS Region where you
         * call the <code>CopyDBClusterSnapshot</code> action is the destination AWS Region
         * for the encrypted DB cluster snapshot to be copied to. To copy an encrypted DB
         * cluster snapshot from another AWS Region, you must provide the following
         * values:</p> <ul> <li> <p> <code>KmsKeyId</code> - The AWS Key Management System
         * (AWS KMS) key identifier for the key to use to encrypt the copy of the DB
         * cluster snapshot in the destination AWS Region.</p> </li> <li> <p>
         * <code>PreSignedUrl</code> - A URL that contains a Signature Version 4 signed
         * request for the <code>CopyDBClusterSnapshot</code> action to be called in the
         * source AWS Region where the DB cluster snapshot is copied from. The pre-signed
         * URL must be a valid request for the <code>CopyDBClusterSnapshot</code> API
         * action that can be executed in the source AWS Region that contains the encrypted
         * DB cluster snapshot to be copied.</p> <p>The pre-signed URL request must contain
         * the following parameter values:</p> <ul> <li> <p> <code>KmsKeyId</code> - The
         * AWS KMS key identifier for the customer master key (CMK) to use to encrypt the
         * copy of the DB cluster snapshot in the destination AWS Region. This is the same
         * identifier for both the <code>CopyDBClusterSnapshot</code> action that is called
         * in the destination AWS Region, and the action contained in the pre-signed
         * URL.</p> </li> <li> <p> <code>DestinationRegion</code> - The name of the AWS
         * Region that the DB cluster snapshot is to be created in.</p> </li> <li> <p>
         * <code>SourceDBClusterSnapshotIdentifier</code> - The DB cluster snapshot
         * identifier for the encrypted DB cluster snapshot to be copied. This identifier
         * must be in the Amazon Resource Name (ARN) format for the source AWS Region. For
         * example, if you are copying an encrypted DB cluster snapshot from the us-west-2
         * AWS Region, then your <code>SourceDBClusterSnapshotIdentifier</code> looks like
         * the following example:
         * <code>arn:aws:rds:us-west-2:123456789012:cluster-snapshot:aurora-cluster1-snapshot-20161115</code>.</p>
         * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
         * Authenticating Requests: Using Query Parameters (AWS Signature Version 4)</a>
         * and <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
         * Signature Version 4 Signing Process</a>.</p>  <p>If you are using an AWS
         * SDK tool or the AWS CLI, you can specify <code>SourceRegion</code> (or
         * <code>--source-region</code> for the AWS CLI) instead of specifying
         * <code>PreSignedUrl</code> manually. Specifying <code>SourceRegion</code>
         * autogenerates a pre-signed URL that is a valid request for the operation that
         * can be executed in the source AWS Region.</p>  </li> <li> <p>
         * <code>TargetDBClusterSnapshotIdentifier</code> - The identifier for the new copy
         * of the DB cluster snapshot in the destination AWS Region.</p> </li> <li> <p>
         * <code>SourceDBClusterSnapshotIdentifier</code> - The DB cluster snapshot
         * identifier for the encrypted DB cluster snapshot to be copied. This identifier
         * must be in the ARN format for the source AWS Region and is the same value as the
         * <code>SourceDBClusterSnapshotIdentifier</code> in the pre-signed URL. </p> </li>
         * </ul> <p>To cancel the copy operation once it is in progress, delete the target
         * DB cluster snapshot identified by <code>TargetDBClusterSnapshotIdentifier</code>
         * while that DB cluster snapshot is in "copying" status.</p> <p>For more
         * information on copying encrypted DB cluster snapshots from one AWS Region to
         * another, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_CopySnapshot.html">
         * Copying a Snapshot</a> in the <i>Amazon Aurora User Guide.</i> </p> <p>For more
         * information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyDBClusterSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyDBClusterSnapshotAsync(const Model::CopyDBClusterSnapshotRequest& request, const CopyDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Copies the specified DB parameter group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyDBParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyDBParameterGroupOutcome CopyDBParameterGroup(const Model::CopyDBParameterGroupRequest& request) const;

        /**
         * <p>Copies the specified DB parameter group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyDBParameterGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyDBParameterGroupOutcomeCallable CopyDBParameterGroupCallable(const Model::CopyDBParameterGroupRequest& request) const;

        /**
         * <p>Copies the specified DB parameter group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyDBParameterGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyDBParameterGroupAsync(const Model::CopyDBParameterGroupRequest& request, const CopyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Copies the specified DB snapshot. The source DB snapshot must be in the
         * <code>available</code> state.</p> <p>You can copy a snapshot from one AWS Region
         * to another. In that case, the AWS Region where you call the
         * <code>CopyDBSnapshot</code> action is the destination AWS Region for the DB
         * snapshot copy. </p> <p>For more information about copying snapshots, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html#USER_CopyDBSnapshot">Copying
         * a DB Snapshot</a> in the <i>Amazon RDS User Guide.</i> </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyDBSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyDBSnapshotOutcome CopyDBSnapshot(const Model::CopyDBSnapshotRequest& request) const;

        /**
         * <p>Copies the specified DB snapshot. The source DB snapshot must be in the
         * <code>available</code> state.</p> <p>You can copy a snapshot from one AWS Region
         * to another. In that case, the AWS Region where you call the
         * <code>CopyDBSnapshot</code> action is the destination AWS Region for the DB
         * snapshot copy. </p> <p>For more information about copying snapshots, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html#USER_CopyDBSnapshot">Copying
         * a DB Snapshot</a> in the <i>Amazon RDS User Guide.</i> </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyDBSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyDBSnapshotOutcomeCallable CopyDBSnapshotCallable(const Model::CopyDBSnapshotRequest& request) const;

        /**
         * <p>Copies the specified DB snapshot. The source DB snapshot must be in the
         * <code>available</code> state.</p> <p>You can copy a snapshot from one AWS Region
         * to another. In that case, the AWS Region where you call the
         * <code>CopyDBSnapshot</code> action is the destination AWS Region for the DB
         * snapshot copy. </p> <p>For more information about copying snapshots, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html#USER_CopyDBSnapshot">Copying
         * a DB Snapshot</a> in the <i>Amazon RDS User Guide.</i> </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyDBSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyDBSnapshotAsync(const Model::CopyDBSnapshotRequest& request, const CopyDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Copies the specified option group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyOptionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyOptionGroupOutcome CopyOptionGroup(const Model::CopyOptionGroupRequest& request) const;

        /**
         * <p>Copies the specified option group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyOptionGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyOptionGroupOutcomeCallable CopyOptionGroupCallable(const Model::CopyOptionGroupRequest& request) const;

        /**
         * <p>Copies the specified option group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyOptionGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyOptionGroupAsync(const Model::CopyOptionGroupRequest& request, const CopyOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a custom Availability Zone (AZ).</p> <p>A custom AZ is an on-premises
         * AZ that is integrated with a VMware vSphere cluster.</p> <p>For more information
         * about RDS on VMware, see the <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/RDSonVMwareUserGuide/rds-on-vmware.html">
         * RDS on VMware User Guide.</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateCustomAvailabilityZone">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomAvailabilityZoneOutcome CreateCustomAvailabilityZone(const Model::CreateCustomAvailabilityZoneRequest& request) const;

        /**
         * <p>Creates a custom Availability Zone (AZ).</p> <p>A custom AZ is an on-premises
         * AZ that is integrated with a VMware vSphere cluster.</p> <p>For more information
         * about RDS on VMware, see the <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/RDSonVMwareUserGuide/rds-on-vmware.html">
         * RDS on VMware User Guide.</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateCustomAvailabilityZone">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCustomAvailabilityZoneOutcomeCallable CreateCustomAvailabilityZoneCallable(const Model::CreateCustomAvailabilityZoneRequest& request) const;

        /**
         * <p>Creates a custom Availability Zone (AZ).</p> <p>A custom AZ is an on-premises
         * AZ that is integrated with a VMware vSphere cluster.</p> <p>For more information
         * about RDS on VMware, see the <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/RDSonVMwareUserGuide/rds-on-vmware.html">
         * RDS on VMware User Guide.</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateCustomAvailabilityZone">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCustomAvailabilityZoneAsync(const Model::CreateCustomAvailabilityZoneRequest& request, const CreateCustomAvailabilityZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Amazon Aurora DB cluster.</p> <p>You can use the
         * <code>ReplicationSourceIdentifier</code> parameter to create the DB cluster as a
         * read replica of another DB cluster or Amazon RDS MySQL DB instance. For
         * cross-region replication where the DB cluster identified by
         * <code>ReplicationSourceIdentifier</code> is encrypted, you must also specify the
         * <code>PreSignedUrl</code> parameter.</p> <p>For more information on Amazon
         * Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBClusterOutcome CreateDBCluster(const Model::CreateDBClusterRequest& request) const;

        /**
         * <p>Creates a new Amazon Aurora DB cluster.</p> <p>You can use the
         * <code>ReplicationSourceIdentifier</code> parameter to create the DB cluster as a
         * read replica of another DB cluster or Amazon RDS MySQL DB instance. For
         * cross-region replication where the DB cluster identified by
         * <code>ReplicationSourceIdentifier</code> is encrypted, you must also specify the
         * <code>PreSignedUrl</code> parameter.</p> <p>For more information on Amazon
         * Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBClusterOutcomeCallable CreateDBClusterCallable(const Model::CreateDBClusterRequest& request) const;

        /**
         * <p>Creates a new Amazon Aurora DB cluster.</p> <p>You can use the
         * <code>ReplicationSourceIdentifier</code> parameter to create the DB cluster as a
         * read replica of another DB cluster or Amazon RDS MySQL DB instance. For
         * cross-region replication where the DB cluster identified by
         * <code>ReplicationSourceIdentifier</code> is encrypted, you must also specify the
         * <code>PreSignedUrl</code> parameter.</p> <p>For more information on Amazon
         * Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBClusterAsync(const Model::CreateDBClusterRequest& request, const CreateDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new custom endpoint and associates it with an Amazon Aurora DB
         * cluster.</p>  <p>This action only applies to Aurora DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBClusterEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBClusterEndpointOutcome CreateDBClusterEndpoint(const Model::CreateDBClusterEndpointRequest& request) const;

        /**
         * <p>Creates a new custom endpoint and associates it with an Amazon Aurora DB
         * cluster.</p>  <p>This action only applies to Aurora DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBClusterEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBClusterEndpointOutcomeCallable CreateDBClusterEndpointCallable(const Model::CreateDBClusterEndpointRequest& request) const;

        /**
         * <p>Creates a new custom endpoint and associates it with an Amazon Aurora DB
         * cluster.</p>  <p>This action only applies to Aurora DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBClusterEndpoint">AWS
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
         * <code>ModifyDBClusterParameterGroup</code>. Once you've created a DB cluster
         * parameter group, you need to associate it with your DB cluster using
         * <code>ModifyDBCluster</code>. When you associate a new DB cluster parameter
         * group with a running DB cluster, you need to reboot the DB instances in the DB
         * cluster without failover for the new DB cluster parameter group and associated
         * settings to take effect. </p>  <p>After you create a DB cluster
         * parameter group, you should wait at least 5 minutes before creating your first
         * DB cluster that uses that DB cluster parameter group as the default parameter
         * group. This allows Amazon RDS to fully complete the create action before the DB
         * cluster parameter group is used as the default for a new DB cluster. This is
         * especially important for parameters that are critical when creating the default
         * database for a DB cluster, such as the character set for the default database
         * defined by the <code>character_set_database</code> parameter. You can use the
         * <i>Parameter Groups</i> option of the <a
         * href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the
         * <code>DescribeDBClusterParameters</code> action to verify that your DB cluster
         * parameter group has been created or modified.</p>  <p>For more
         * information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBClusterParameterGroupOutcome CreateDBClusterParameterGroup(const Model::CreateDBClusterParameterGroupRequest& request) const;

        /**
         * <p>Creates a new DB cluster parameter group.</p> <p>Parameters in a DB cluster
         * parameter group apply to all of the instances in a DB cluster.</p> <p> A DB
         * cluster parameter group is initially created with the default parameters for the
         * database engine used by instances in the DB cluster. To provide custom values
         * for any of the parameters, you must modify the group after creating it using
         * <code>ModifyDBClusterParameterGroup</code>. Once you've created a DB cluster
         * parameter group, you need to associate it with your DB cluster using
         * <code>ModifyDBCluster</code>. When you associate a new DB cluster parameter
         * group with a running DB cluster, you need to reboot the DB instances in the DB
         * cluster without failover for the new DB cluster parameter group and associated
         * settings to take effect. </p>  <p>After you create a DB cluster
         * parameter group, you should wait at least 5 minutes before creating your first
         * DB cluster that uses that DB cluster parameter group as the default parameter
         * group. This allows Amazon RDS to fully complete the create action before the DB
         * cluster parameter group is used as the default for a new DB cluster. This is
         * especially important for parameters that are critical when creating the default
         * database for a DB cluster, such as the character set for the default database
         * defined by the <code>character_set_database</code> parameter. You can use the
         * <i>Parameter Groups</i> option of the <a
         * href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the
         * <code>DescribeDBClusterParameters</code> action to verify that your DB cluster
         * parameter group has been created or modified.</p>  <p>For more
         * information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBClusterParameterGroup">AWS
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
         * <code>ModifyDBClusterParameterGroup</code>. Once you've created a DB cluster
         * parameter group, you need to associate it with your DB cluster using
         * <code>ModifyDBCluster</code>. When you associate a new DB cluster parameter
         * group with a running DB cluster, you need to reboot the DB instances in the DB
         * cluster without failover for the new DB cluster parameter group and associated
         * settings to take effect. </p>  <p>After you create a DB cluster
         * parameter group, you should wait at least 5 minutes before creating your first
         * DB cluster that uses that DB cluster parameter group as the default parameter
         * group. This allows Amazon RDS to fully complete the create action before the DB
         * cluster parameter group is used as the default for a new DB cluster. This is
         * especially important for parameters that are critical when creating the default
         * database for a DB cluster, such as the character set for the default database
         * defined by the <code>character_set_database</code> parameter. You can use the
         * <i>Parameter Groups</i> option of the <a
         * href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the
         * <code>DescribeDBClusterParameters</code> action to verify that your DB cluster
         * parameter group has been created or modified.</p>  <p>For more
         * information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBClusterParameterGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBClusterParameterGroupAsync(const Model::CreateDBClusterParameterGroupRequest& request, const CreateDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a snapshot of a DB cluster. For more information on Amazon Aurora,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBClusterSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBClusterSnapshotOutcome CreateDBClusterSnapshot(const Model::CreateDBClusterSnapshotRequest& request) const;

        /**
         * <p>Creates a snapshot of a DB cluster. For more information on Amazon Aurora,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBClusterSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBClusterSnapshotOutcomeCallable CreateDBClusterSnapshotCallable(const Model::CreateDBClusterSnapshotRequest& request) const;

        /**
         * <p>Creates a snapshot of a DB cluster. For more information on Amazon Aurora,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBClusterSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBClusterSnapshotAsync(const Model::CreateDBClusterSnapshotRequest& request, const CreateDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new DB instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBInstanceOutcome CreateDBInstance(const Model::CreateDBInstanceRequest& request) const;

        /**
         * <p>Creates a new DB instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBInstanceOutcomeCallable CreateDBInstanceCallable(const Model::CreateDBInstanceRequest& request) const;

        /**
         * <p>Creates a new DB instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBInstanceAsync(const Model::CreateDBInstanceRequest& request, const CreateDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new DB instance that acts as a read replica for an existing source
         * DB instance. You can create a read replica for a DB instance running MySQL,
         * MariaDB, Oracle, PostgreSQL, or SQL Server. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_ReadRepl.html">Working
         * with Read Replicas</a> in the <i>Amazon RDS User Guide</i>. </p> <p>Amazon
         * Aurora doesn't support this action. Call the <code>CreateDBInstance</code>
         * action to create a DB instance for an Aurora DB cluster.</p> <p>All read replica
         * DB instances are created with backups disabled. All other DB instance attributes
         * (including DB security groups and DB parameter groups) are inherited from the
         * source DB instance, except as specified.</p>  <p>Your source DB
         * instance must have backup retention enabled. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBInstanceReadReplica">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBInstanceReadReplicaOutcome CreateDBInstanceReadReplica(const Model::CreateDBInstanceReadReplicaRequest& request) const;

        /**
         * <p>Creates a new DB instance that acts as a read replica for an existing source
         * DB instance. You can create a read replica for a DB instance running MySQL,
         * MariaDB, Oracle, PostgreSQL, or SQL Server. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_ReadRepl.html">Working
         * with Read Replicas</a> in the <i>Amazon RDS User Guide</i>. </p> <p>Amazon
         * Aurora doesn't support this action. Call the <code>CreateDBInstance</code>
         * action to create a DB instance for an Aurora DB cluster.</p> <p>All read replica
         * DB instances are created with backups disabled. All other DB instance attributes
         * (including DB security groups and DB parameter groups) are inherited from the
         * source DB instance, except as specified.</p>  <p>Your source DB
         * instance must have backup retention enabled. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBInstanceReadReplica">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBInstanceReadReplicaOutcomeCallable CreateDBInstanceReadReplicaCallable(const Model::CreateDBInstanceReadReplicaRequest& request) const;

        /**
         * <p>Creates a new DB instance that acts as a read replica for an existing source
         * DB instance. You can create a read replica for a DB instance running MySQL,
         * MariaDB, Oracle, PostgreSQL, or SQL Server. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_ReadRepl.html">Working
         * with Read Replicas</a> in the <i>Amazon RDS User Guide</i>. </p> <p>Amazon
         * Aurora doesn't support this action. Call the <code>CreateDBInstance</code>
         * action to create a DB instance for an Aurora DB cluster.</p> <p>All read replica
         * DB instances are created with backups disabled. All other DB instance attributes
         * (including DB security groups and DB parameter groups) are inherited from the
         * source DB instance, except as specified.</p>  <p>Your source DB
         * instance must have backup retention enabled. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBInstanceReadReplica">AWS
         * API Reference</a></p>
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
         *  <p>After you create a DB parameter group, you should wait at least 5
         * minutes before creating your first DB instance that uses that DB parameter group
         * as the default parameter group. This allows Amazon RDS to fully complete the
         * create action before the parameter group is used as the default for a new DB
         * instance. This is especially important for parameters that are critical when
         * creating the default database for a DB instance, such as the character set for
         * the default database defined by the <code>character_set_database</code>
         * parameter. You can use the <i>Parameter Groups</i> option of the <a
         * href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the
         * <i>DescribeDBParameters</i> command to verify that your DB parameter group has
         * been created or modified.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBParameterGroup">AWS
         * API Reference</a></p>
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
         *  <p>After you create a DB parameter group, you should wait at least 5
         * minutes before creating your first DB instance that uses that DB parameter group
         * as the default parameter group. This allows Amazon RDS to fully complete the
         * create action before the parameter group is used as the default for a new DB
         * instance. This is especially important for parameters that are critical when
         * creating the default database for a DB instance, such as the character set for
         * the default database defined by the <code>character_set_database</code>
         * parameter. You can use the <i>Parameter Groups</i> option of the <a
         * href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the
         * <i>DescribeDBParameters</i> command to verify that your DB parameter group has
         * been created or modified.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBParameterGroup">AWS
         * API Reference</a></p>
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
         *  <p>After you create a DB parameter group, you should wait at least 5
         * minutes before creating your first DB instance that uses that DB parameter group
         * as the default parameter group. This allows Amazon RDS to fully complete the
         * create action before the parameter group is used as the default for a new DB
         * instance. This is especially important for parameters that are critical when
         * creating the default database for a DB instance, such as the character set for
         * the default database defined by the <code>character_set_database</code>
         * parameter. You can use the <i>Parameter Groups</i> option of the <a
         * href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the
         * <i>DescribeDBParameters</i> command to verify that your DB parameter group has
         * been created or modified.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBParameterGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBParameterGroupAsync(const Model::CreateDBParameterGroupRequest& request, const CreateDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new DB proxy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBProxy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBProxyOutcome CreateDBProxy(const Model::CreateDBProxyRequest& request) const;

        /**
         * <p>Creates a new DB proxy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBProxy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBProxyOutcomeCallable CreateDBProxyCallable(const Model::CreateDBProxyRequest& request) const;

        /**
         * <p>Creates a new DB proxy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBProxy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBProxyAsync(const Model::CreateDBProxyRequest& request, const CreateDBProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a <code>DBProxyEndpoint</code>. Only applies to proxies that are
         * associated with Aurora DB clusters. You can use DB proxy endpoints to specify
         * read/write or read-only access to the DB cluster. You can also use DB proxy
         * endpoints to access a DB proxy through a different VPC than the proxy's default
         * VPC. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBProxyEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBProxyEndpointOutcome CreateDBProxyEndpoint(const Model::CreateDBProxyEndpointRequest& request) const;

        /**
         * <p> Creates a <code>DBProxyEndpoint</code>. Only applies to proxies that are
         * associated with Aurora DB clusters. You can use DB proxy endpoints to specify
         * read/write or read-only access to the DB cluster. You can also use DB proxy
         * endpoints to access a DB proxy through a different VPC than the proxy's default
         * VPC. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBProxyEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBProxyEndpointOutcomeCallable CreateDBProxyEndpointCallable(const Model::CreateDBProxyEndpointRequest& request) const;

        /**
         * <p> Creates a <code>DBProxyEndpoint</code>. Only applies to proxies that are
         * associated with Aurora DB clusters. You can use DB proxy endpoints to specify
         * read/write or read-only access to the DB cluster. You can also use DB proxy
         * endpoints to access a DB proxy through a different VPC than the proxy's default
         * VPC. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBProxyEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBProxyEndpointAsync(const Model::CreateDBProxyEndpointRequest& request, const CreateDBProxyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new DB security group. DB security groups control access to a DB
         * instance.</p>  <p>A DB security group controls access to EC2-Classic DB
         * instances that are not in a VPC.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBSecurityGroupOutcome CreateDBSecurityGroup(const Model::CreateDBSecurityGroupRequest& request) const;

        /**
         * <p>Creates a new DB security group. DB security groups control access to a DB
         * instance.</p>  <p>A DB security group controls access to EC2-Classic DB
         * instances that are not in a VPC.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBSecurityGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBSecurityGroupOutcomeCallable CreateDBSecurityGroupCallable(const Model::CreateDBSecurityGroupRequest& request) const;

        /**
         * <p>Creates a new DB security group. DB security groups control access to a DB
         * instance.</p>  <p>A DB security group controls access to EC2-Classic DB
         * instances that are not in a VPC.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBSecurityGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBSecurityGroupAsync(const Model::CreateDBSecurityGroupRequest& request, const CreateDBSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a snapshot of a DB instance. The source DB instance must be in the
         * <code>available</code> or <code>storage-optimization</code> state.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBSnapshotOutcome CreateDBSnapshot(const Model::CreateDBSnapshotRequest& request) const;

        /**
         * <p>Creates a snapshot of a DB instance. The source DB instance must be in the
         * <code>available</code> or <code>storage-optimization</code> state.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBSnapshotOutcomeCallable CreateDBSnapshotCallable(const Model::CreateDBSnapshotRequest& request) const;

        /**
         * <p>Creates a snapshot of a DB instance. The source DB instance must be in the
         * <code>available</code> or <code>storage-optimization</code> state.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBSnapshotAsync(const Model::CreateDBSnapshotRequest& request, const CreateDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new DB subnet group. DB subnet groups must contain at least one
         * subnet in at least two AZs in the AWS Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBSubnetGroupOutcome CreateDBSubnetGroup(const Model::CreateDBSubnetGroupRequest& request) const;

        /**
         * <p>Creates a new DB subnet group. DB subnet groups must contain at least one
         * subnet in at least two AZs in the AWS Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBSubnetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBSubnetGroupOutcomeCallable CreateDBSubnetGroupCallable(const Model::CreateDBSubnetGroupRequest& request) const;

        /**
         * <p>Creates a new DB subnet group. DB subnet groups must contain at least one
         * subnet in at least two AZs in the AWS Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBSubnetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBSubnetGroupAsync(const Model::CreateDBSubnetGroupRequest& request, const CreateDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an RDS event notification subscription. This action requires a topic
         * Amazon Resource Name (ARN) created by either the RDS console, the SNS console,
         * or the SNS API. To obtain an ARN with SNS, you must create a topic in Amazon SNS
         * and subscribe to the topic. The ARN is displayed in the SNS console.</p> <p>You
         * can specify the type of source (<code>SourceType</code>) that you want to be
         * notified of and provide a list of RDS sources (<code>SourceIds</code>) that
         * triggers the events. You can also provide a list of event categories
         * (<code>EventCategories</code>) for events that you want to be notified of. For
         * example, you can specify <code>SourceType</code> = <code>db-instance</code>,
         * <code>SourceIds</code> = <code>mydbinstance1</code>, <code>mydbinstance2</code>
         * and <code>EventCategories</code> = <code>Availability</code>,
         * <code>Backup</code>.</p> <p>If you specify both the <code>SourceType</code> and
         * <code>SourceIds</code>, such as <code>SourceType</code> =
         * <code>db-instance</code> and <code>SourceIdentifier</code> =
         * <code>myDBInstance1</code>, you are notified of all the <code>db-instance</code>
         * events for the specified source. If you specify a <code>SourceType</code> but do
         * not specify a <code>SourceIdentifier</code>, you receive notice of the events
         * for that source type for all your RDS sources. If you don't specify either the
         * SourceType or the <code>SourceIdentifier</code>, you are notified of events
         * generated from all RDS sources belonging to your customer account.</p> 
         * <p>RDS event notification is only available for unencrypted SNS topics. If you
         * specify an encrypted SNS topic, event notifications aren't sent for the
         * topic.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateEventSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventSubscriptionOutcome CreateEventSubscription(const Model::CreateEventSubscriptionRequest& request) const;

        /**
         * <p>Creates an RDS event notification subscription. This action requires a topic
         * Amazon Resource Name (ARN) created by either the RDS console, the SNS console,
         * or the SNS API. To obtain an ARN with SNS, you must create a topic in Amazon SNS
         * and subscribe to the topic. The ARN is displayed in the SNS console.</p> <p>You
         * can specify the type of source (<code>SourceType</code>) that you want to be
         * notified of and provide a list of RDS sources (<code>SourceIds</code>) that
         * triggers the events. You can also provide a list of event categories
         * (<code>EventCategories</code>) for events that you want to be notified of. For
         * example, you can specify <code>SourceType</code> = <code>db-instance</code>,
         * <code>SourceIds</code> = <code>mydbinstance1</code>, <code>mydbinstance2</code>
         * and <code>EventCategories</code> = <code>Availability</code>,
         * <code>Backup</code>.</p> <p>If you specify both the <code>SourceType</code> and
         * <code>SourceIds</code>, such as <code>SourceType</code> =
         * <code>db-instance</code> and <code>SourceIdentifier</code> =
         * <code>myDBInstance1</code>, you are notified of all the <code>db-instance</code>
         * events for the specified source. If you specify a <code>SourceType</code> but do
         * not specify a <code>SourceIdentifier</code>, you receive notice of the events
         * for that source type for all your RDS sources. If you don't specify either the
         * SourceType or the <code>SourceIdentifier</code>, you are notified of events
         * generated from all RDS sources belonging to your customer account.</p> 
         * <p>RDS event notification is only available for unencrypted SNS topics. If you
         * specify an encrypted SNS topic, event notifications aren't sent for the
         * topic.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateEventSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEventSubscriptionOutcomeCallable CreateEventSubscriptionCallable(const Model::CreateEventSubscriptionRequest& request) const;

        /**
         * <p>Creates an RDS event notification subscription. This action requires a topic
         * Amazon Resource Name (ARN) created by either the RDS console, the SNS console,
         * or the SNS API. To obtain an ARN with SNS, you must create a topic in Amazon SNS
         * and subscribe to the topic. The ARN is displayed in the SNS console.</p> <p>You
         * can specify the type of source (<code>SourceType</code>) that you want to be
         * notified of and provide a list of RDS sources (<code>SourceIds</code>) that
         * triggers the events. You can also provide a list of event categories
         * (<code>EventCategories</code>) for events that you want to be notified of. For
         * example, you can specify <code>SourceType</code> = <code>db-instance</code>,
         * <code>SourceIds</code> = <code>mydbinstance1</code>, <code>mydbinstance2</code>
         * and <code>EventCategories</code> = <code>Availability</code>,
         * <code>Backup</code>.</p> <p>If you specify both the <code>SourceType</code> and
         * <code>SourceIds</code>, such as <code>SourceType</code> =
         * <code>db-instance</code> and <code>SourceIdentifier</code> =
         * <code>myDBInstance1</code>, you are notified of all the <code>db-instance</code>
         * events for the specified source. If you specify a <code>SourceType</code> but do
         * not specify a <code>SourceIdentifier</code>, you receive notice of the events
         * for that source type for all your RDS sources. If you don't specify either the
         * SourceType or the <code>SourceIdentifier</code>, you are notified of events
         * generated from all RDS sources belonging to your customer account.</p> 
         * <p>RDS event notification is only available for unencrypted SNS topics. If you
         * specify an encrypted SNS topic, event notifications aren't sent for the
         * topic.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateEventSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEventSubscriptionAsync(const Model::CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates an Aurora global database spread across multiple AWS Regions. The
         * global database contains a single primary cluster with read-write capability,
         * and a read-only secondary cluster that receives data from the primary cluster
         * through high-speed replication performed by the Aurora storage subsystem. </p>
         * <p> You can create a global database that is initially empty, and then add a
         * primary cluster and a secondary cluster to it. Or you can specify an existing
         * Aurora cluster during the create operation, and this cluster becomes the primary
         * cluster of the global database. </p>  <p>This action only applies to
         * Aurora DB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateGlobalCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGlobalClusterOutcome CreateGlobalCluster(const Model::CreateGlobalClusterRequest& request) const;

        /**
         * <p> Creates an Aurora global database spread across multiple AWS Regions. The
         * global database contains a single primary cluster with read-write capability,
         * and a read-only secondary cluster that receives data from the primary cluster
         * through high-speed replication performed by the Aurora storage subsystem. </p>
         * <p> You can create a global database that is initially empty, and then add a
         * primary cluster and a secondary cluster to it. Or you can specify an existing
         * Aurora cluster during the create operation, and this cluster becomes the primary
         * cluster of the global database. </p>  <p>This action only applies to
         * Aurora DB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateGlobalCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGlobalClusterOutcomeCallable CreateGlobalClusterCallable(const Model::CreateGlobalClusterRequest& request) const;

        /**
         * <p> Creates an Aurora global database spread across multiple AWS Regions. The
         * global database contains a single primary cluster with read-write capability,
         * and a read-only secondary cluster that receives data from the primary cluster
         * through high-speed replication performed by the Aurora storage subsystem. </p>
         * <p> You can create a global database that is initially empty, and then add a
         * primary cluster and a secondary cluster to it. Or you can specify an existing
         * Aurora cluster during the create operation, and this cluster becomes the primary
         * cluster of the global database. </p>  <p>This action only applies to
         * Aurora DB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateGlobalCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGlobalClusterAsync(const Model::CreateGlobalClusterRequest& request, const CreateGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new option group. You can create up to 20 option
         * groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateOptionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOptionGroupOutcome CreateOptionGroup(const Model::CreateOptionGroupRequest& request) const;

        /**
         * <p>Creates a new option group. You can create up to 20 option
         * groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateOptionGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateOptionGroupOutcomeCallable CreateOptionGroupCallable(const Model::CreateOptionGroupRequest& request) const;

        /**
         * <p>Creates a new option group. You can create up to 20 option
         * groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateOptionGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateOptionGroupAsync(const Model::CreateOptionGroupRequest& request, const CreateOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a custom Availability Zone (AZ).</p> <p>A custom AZ is an on-premises
         * AZ that is integrated with a VMware vSphere cluster.</p> <p>For more information
         * about RDS on VMware, see the <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/RDSonVMwareUserGuide/rds-on-vmware.html">
         * RDS on VMware User Guide.</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteCustomAvailabilityZone">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomAvailabilityZoneOutcome DeleteCustomAvailabilityZone(const Model::DeleteCustomAvailabilityZoneRequest& request) const;

        /**
         * <p>Deletes a custom Availability Zone (AZ).</p> <p>A custom AZ is an on-premises
         * AZ that is integrated with a VMware vSphere cluster.</p> <p>For more information
         * about RDS on VMware, see the <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/RDSonVMwareUserGuide/rds-on-vmware.html">
         * RDS on VMware User Guide.</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteCustomAvailabilityZone">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCustomAvailabilityZoneOutcomeCallable DeleteCustomAvailabilityZoneCallable(const Model::DeleteCustomAvailabilityZoneRequest& request) const;

        /**
         * <p>Deletes a custom Availability Zone (AZ).</p> <p>A custom AZ is an on-premises
         * AZ that is integrated with a VMware vSphere cluster.</p> <p>For more information
         * about RDS on VMware, see the <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/RDSonVMwareUserGuide/rds-on-vmware.html">
         * RDS on VMware User Guide.</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteCustomAvailabilityZone">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCustomAvailabilityZoneAsync(const Model::DeleteCustomAvailabilityZoneRequest& request, const DeleteCustomAvailabilityZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The DeleteDBCluster action deletes a previously provisioned DB cluster. When
         * you delete a DB cluster, all automated backups for that DB cluster are deleted
         * and can't be recovered. Manual DB cluster snapshots of the specified DB cluster
         * are not deleted.</p> <p/> <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBClusterOutcome DeleteDBCluster(const Model::DeleteDBClusterRequest& request) const;

        /**
         * <p>The DeleteDBCluster action deletes a previously provisioned DB cluster. When
         * you delete a DB cluster, all automated backups for that DB cluster are deleted
         * and can't be recovered. Manual DB cluster snapshots of the specified DB cluster
         * are not deleted.</p> <p/> <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBClusterOutcomeCallable DeleteDBClusterCallable(const Model::DeleteDBClusterRequest& request) const;

        /**
         * <p>The DeleteDBCluster action deletes a previously provisioned DB cluster. When
         * you delete a DB cluster, all automated backups for that DB cluster are deleted
         * and can't be recovered. Manual DB cluster snapshots of the specified DB cluster
         * are not deleted.</p> <p/> <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBClusterAsync(const Model::DeleteDBClusterRequest& request, const DeleteDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a custom endpoint and removes it from an Amazon Aurora DB
         * cluster.</p>  <p>This action only applies to Aurora DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBClusterEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBClusterEndpointOutcome DeleteDBClusterEndpoint(const Model::DeleteDBClusterEndpointRequest& request) const;

        /**
         * <p>Deletes a custom endpoint and removes it from an Amazon Aurora DB
         * cluster.</p>  <p>This action only applies to Aurora DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBClusterEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBClusterEndpointOutcomeCallable DeleteDBClusterEndpointCallable(const Model::DeleteDBClusterEndpointRequest& request) const;

        /**
         * <p>Deletes a custom endpoint and removes it from an Amazon Aurora DB
         * cluster.</p>  <p>This action only applies to Aurora DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBClusterEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBClusterEndpointAsync(const Model::DeleteDBClusterEndpointRequest& request, const DeleteDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified DB cluster parameter group. The DB cluster parameter
         * group to be deleted can't be associated with any DB clusters.</p> <p>For more
         * information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBClusterParameterGroupOutcome DeleteDBClusterParameterGroup(const Model::DeleteDBClusterParameterGroupRequest& request) const;

        /**
         * <p>Deletes a specified DB cluster parameter group. The DB cluster parameter
         * group to be deleted can't be associated with any DB clusters.</p> <p>For more
         * information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBClusterParameterGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBClusterParameterGroupOutcomeCallable DeleteDBClusterParameterGroupCallable(const Model::DeleteDBClusterParameterGroupRequest& request) const;

        /**
         * <p>Deletes a specified DB cluster parameter group. The DB cluster parameter
         * group to be deleted can't be associated with any DB clusters.</p> <p>For more
         * information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBClusterParameterGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBClusterParameterGroupAsync(const Model::DeleteDBClusterParameterGroupRequest& request, const DeleteDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a DB cluster snapshot. If the snapshot is being copied, the copy
         * operation is terminated.</p>  <p>The DB cluster snapshot must be in the
         * <code>available</code> state to be deleted.</p>  <p>For more information
         * on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBClusterSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBClusterSnapshotOutcome DeleteDBClusterSnapshot(const Model::DeleteDBClusterSnapshotRequest& request) const;

        /**
         * <p>Deletes a DB cluster snapshot. If the snapshot is being copied, the copy
         * operation is terminated.</p>  <p>The DB cluster snapshot must be in the
         * <code>available</code> state to be deleted.</p>  <p>For more information
         * on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBClusterSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBClusterSnapshotOutcomeCallable DeleteDBClusterSnapshotCallable(const Model::DeleteDBClusterSnapshotRequest& request) const;

        /**
         * <p>Deletes a DB cluster snapshot. If the snapshot is being copied, the copy
         * operation is terminated.</p>  <p>The DB cluster snapshot must be in the
         * <code>available</code> state to be deleted.</p>  <p>For more information
         * on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBClusterSnapshot">AWS
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
         * a final DB snapshot the status of the Amazon RDS DB instance is
         * <code>deleting</code> until the DB snapshot is created. The API action
         * <code>DescribeDBInstance</code> is used to monitor the status of this operation.
         * The action can't be canceled or reverted once submitted. </p> <p>When a DB
         * instance is in a failure state and has a status of <code>failed</code>,
         * <code>incompatible-restore</code>, or <code>incompatible-network</code>, you can
         * only delete it when you skip creation of the final snapshot with the
         * <code>SkipFinalSnapshot</code> parameter.</p> <p>If the specified DB instance is
         * part of an Amazon Aurora DB cluster, you can't delete the DB instance if both of
         * the following conditions are true:</p> <ul> <li> <p>The DB cluster is a read
         * replica of another Amazon Aurora DB cluster.</p> </li> <li> <p>The DB instance
         * is the only instance in the DB cluster.</p> </li> </ul> <p>To delete a DB
         * instance in this case, first call the <code>PromoteReadReplicaDBCluster</code>
         * API action to promote the DB cluster so it's no longer a read replica. After the
         * promotion completes, then call the <code>DeleteDBInstance</code> API action to
         * delete the final instance in the DB cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBInstanceOutcome DeleteDBInstance(const Model::DeleteDBInstanceRequest& request) const;

        /**
         * <p>The DeleteDBInstance action deletes a previously provisioned DB instance.
         * When you delete a DB instance, all automated backups for that instance are
         * deleted and can't be recovered. Manual DB snapshots of the DB instance to be
         * deleted by <code>DeleteDBInstance</code> are not deleted.</p> <p> If you request
         * a final DB snapshot the status of the Amazon RDS DB instance is
         * <code>deleting</code> until the DB snapshot is created. The API action
         * <code>DescribeDBInstance</code> is used to monitor the status of this operation.
         * The action can't be canceled or reverted once submitted. </p> <p>When a DB
         * instance is in a failure state and has a status of <code>failed</code>,
         * <code>incompatible-restore</code>, or <code>incompatible-network</code>, you can
         * only delete it when you skip creation of the final snapshot with the
         * <code>SkipFinalSnapshot</code> parameter.</p> <p>If the specified DB instance is
         * part of an Amazon Aurora DB cluster, you can't delete the DB instance if both of
         * the following conditions are true:</p> <ul> <li> <p>The DB cluster is a read
         * replica of another Amazon Aurora DB cluster.</p> </li> <li> <p>The DB instance
         * is the only instance in the DB cluster.</p> </li> </ul> <p>To delete a DB
         * instance in this case, first call the <code>PromoteReadReplicaDBCluster</code>
         * API action to promote the DB cluster so it's no longer a read replica. After the
         * promotion completes, then call the <code>DeleteDBInstance</code> API action to
         * delete the final instance in the DB cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBInstance">AWS
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
         * a final DB snapshot the status of the Amazon RDS DB instance is
         * <code>deleting</code> until the DB snapshot is created. The API action
         * <code>DescribeDBInstance</code> is used to monitor the status of this operation.
         * The action can't be canceled or reverted once submitted. </p> <p>When a DB
         * instance is in a failure state and has a status of <code>failed</code>,
         * <code>incompatible-restore</code>, or <code>incompatible-network</code>, you can
         * only delete it when you skip creation of the final snapshot with the
         * <code>SkipFinalSnapshot</code> parameter.</p> <p>If the specified DB instance is
         * part of an Amazon Aurora DB cluster, you can't delete the DB instance if both of
         * the following conditions are true:</p> <ul> <li> <p>The DB cluster is a read
         * replica of another Amazon Aurora DB cluster.</p> </li> <li> <p>The DB instance
         * is the only instance in the DB cluster.</p> </li> </ul> <p>To delete a DB
         * instance in this case, first call the <code>PromoteReadReplicaDBCluster</code>
         * API action to promote the DB cluster so it's no longer a read replica. After the
         * promotion completes, then call the <code>DeleteDBInstance</code> API action to
         * delete the final instance in the DB cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBInstanceAsync(const Model::DeleteDBInstanceRequest& request, const DeleteDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes automated backups using the <code>DbiResourceId</code> value of the
         * source DB instance or the Amazon Resource Name (ARN) of the automated
         * backups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBInstanceAutomatedBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBInstanceAutomatedBackupOutcome DeleteDBInstanceAutomatedBackup(const Model::DeleteDBInstanceAutomatedBackupRequest& request) const;

        /**
         * <p>Deletes automated backups using the <code>DbiResourceId</code> value of the
         * source DB instance or the Amazon Resource Name (ARN) of the automated
         * backups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBInstanceAutomatedBackup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBInstanceAutomatedBackupOutcomeCallable DeleteDBInstanceAutomatedBackupCallable(const Model::DeleteDBInstanceAutomatedBackupRequest& request) const;

        /**
         * <p>Deletes automated backups using the <code>DbiResourceId</code> value of the
         * source DB instance or the Amazon Resource Name (ARN) of the automated
         * backups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBInstanceAutomatedBackup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBInstanceAutomatedBackupAsync(const Model::DeleteDBInstanceAutomatedBackupRequest& request, const DeleteDBInstanceAutomatedBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified DB parameter group. The DB parameter group to be deleted
         * can't be associated with any DB instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBParameterGroupOutcome DeleteDBParameterGroup(const Model::DeleteDBParameterGroupRequest& request) const;

        /**
         * <p>Deletes a specified DB parameter group. The DB parameter group to be deleted
         * can't be associated with any DB instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBParameterGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBParameterGroupOutcomeCallable DeleteDBParameterGroupCallable(const Model::DeleteDBParameterGroupRequest& request) const;

        /**
         * <p>Deletes a specified DB parameter group. The DB parameter group to be deleted
         * can't be associated with any DB instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBParameterGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBParameterGroupAsync(const Model::DeleteDBParameterGroupRequest& request, const DeleteDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing DB proxy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBProxy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBProxyOutcome DeleteDBProxy(const Model::DeleteDBProxyRequest& request) const;

        /**
         * <p>Deletes an existing DB proxy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBProxy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBProxyOutcomeCallable DeleteDBProxyCallable(const Model::DeleteDBProxyRequest& request) const;

        /**
         * <p>Deletes an existing DB proxy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBProxy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBProxyAsync(const Model::DeleteDBProxyRequest& request, const DeleteDBProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a <code>DBProxyEndpoint</code>. Doing so removes the ability to
         * access the DB proxy using the endpoint that you defined. The endpoint that you
         * delete might have provided capabilities such as read/write or read-only
         * operations, or using a different VPC than the DB proxy's default
         * VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBProxyEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBProxyEndpointOutcome DeleteDBProxyEndpoint(const Model::DeleteDBProxyEndpointRequest& request) const;

        /**
         * <p>Deletes a <code>DBProxyEndpoint</code>. Doing so removes the ability to
         * access the DB proxy using the endpoint that you defined. The endpoint that you
         * delete might have provided capabilities such as read/write or read-only
         * operations, or using a different VPC than the DB proxy's default
         * VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBProxyEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBProxyEndpointOutcomeCallable DeleteDBProxyEndpointCallable(const Model::DeleteDBProxyEndpointRequest& request) const;

        /**
         * <p>Deletes a <code>DBProxyEndpoint</code>. Doing so removes the ability to
         * access the DB proxy using the endpoint that you defined. The endpoint that you
         * delete might have provided capabilities such as read/write or read-only
         * operations, or using a different VPC than the DB proxy's default
         * VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBProxyEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBProxyEndpointAsync(const Model::DeleteDBProxyEndpointRequest& request, const DeleteDBProxyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a DB security group.</p>  <p>The specified DB security group
         * must not be associated with any DB instances.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBSecurityGroupOutcome DeleteDBSecurityGroup(const Model::DeleteDBSecurityGroupRequest& request) const;

        /**
         * <p>Deletes a DB security group.</p>  <p>The specified DB security group
         * must not be associated with any DB instances.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBSecurityGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBSecurityGroupOutcomeCallable DeleteDBSecurityGroupCallable(const Model::DeleteDBSecurityGroupRequest& request) const;

        /**
         * <p>Deletes a DB security group.</p>  <p>The specified DB security group
         * must not be associated with any DB instances.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBSecurityGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBSecurityGroupAsync(const Model::DeleteDBSecurityGroupRequest& request, const DeleteDBSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a DB snapshot. If the snapshot is being copied, the copy operation is
         * terminated.</p>  <p>The DB snapshot must be in the <code>available</code>
         * state to be deleted.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBSnapshotOutcome DeleteDBSnapshot(const Model::DeleteDBSnapshotRequest& request) const;

        /**
         * <p>Deletes a DB snapshot. If the snapshot is being copied, the copy operation is
         * terminated.</p>  <p>The DB snapshot must be in the <code>available</code>
         * state to be deleted.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBSnapshotOutcomeCallable DeleteDBSnapshotCallable(const Model::DeleteDBSnapshotRequest& request) const;

        /**
         * <p>Deletes a DB snapshot. If the snapshot is being copied, the copy operation is
         * terminated.</p>  <p>The DB snapshot must be in the <code>available</code>
         * state to be deleted.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBSnapshotAsync(const Model::DeleteDBSnapshotRequest& request, const DeleteDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a DB subnet group.</p>  <p>The specified database subnet group
         * must not be associated with any DB instances.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBSubnetGroupOutcome DeleteDBSubnetGroup(const Model::DeleteDBSubnetGroupRequest& request) const;

        /**
         * <p>Deletes a DB subnet group.</p>  <p>The specified database subnet group
         * must not be associated with any DB instances.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBSubnetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBSubnetGroupOutcomeCallable DeleteDBSubnetGroupCallable(const Model::DeleteDBSubnetGroupRequest& request) const;

        /**
         * <p>Deletes a DB subnet group.</p>  <p>The specified database subnet group
         * must not be associated with any DB instances.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBSubnetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBSubnetGroupAsync(const Model::DeleteDBSubnetGroupRequest& request, const DeleteDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an RDS event notification subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteEventSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventSubscriptionOutcome DeleteEventSubscription(const Model::DeleteEventSubscriptionRequest& request) const;

        /**
         * <p>Deletes an RDS event notification subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteEventSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventSubscriptionOutcomeCallable DeleteEventSubscriptionCallable(const Model::DeleteEventSubscriptionRequest& request) const;

        /**
         * <p>Deletes an RDS event notification subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteEventSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventSubscriptionAsync(const Model::DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a global database cluster. The primary and secondary clusters must
         * already be detached or destroyed first. </p>  <p>This action only applies
         * to Aurora DB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteGlobalCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGlobalClusterOutcome DeleteGlobalCluster(const Model::DeleteGlobalClusterRequest& request) const;

        /**
         * <p> Deletes a global database cluster. The primary and secondary clusters must
         * already be detached or destroyed first. </p>  <p>This action only applies
         * to Aurora DB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteGlobalCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGlobalClusterOutcomeCallable DeleteGlobalClusterCallable(const Model::DeleteGlobalClusterRequest& request) const;

        /**
         * <p> Deletes a global database cluster. The primary and secondary clusters must
         * already be detached or destroyed first. </p>  <p>This action only applies
         * to Aurora DB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteGlobalCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGlobalClusterAsync(const Model::DeleteGlobalClusterRequest& request, const DeleteGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the installation medium for a DB engine that requires an on-premises
         * customer provided license, such as Microsoft SQL Server.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteInstallationMedia">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstallationMediaOutcome DeleteInstallationMedia(const Model::DeleteInstallationMediaRequest& request) const;

        /**
         * <p>Deletes the installation medium for a DB engine that requires an on-premises
         * customer provided license, such as Microsoft SQL Server.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteInstallationMedia">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInstallationMediaOutcomeCallable DeleteInstallationMediaCallable(const Model::DeleteInstallationMediaRequest& request) const;

        /**
         * <p>Deletes the installation medium for a DB engine that requires an on-premises
         * customer provided license, such as Microsoft SQL Server.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteInstallationMedia">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInstallationMediaAsync(const Model::DeleteInstallationMediaRequest& request, const DeleteInstallationMediaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing option group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteOptionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOptionGroupOutcome DeleteOptionGroup(const Model::DeleteOptionGroupRequest& request) const;

        /**
         * <p>Deletes an existing option group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteOptionGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteOptionGroupOutcomeCallable DeleteOptionGroupCallable(const Model::DeleteOptionGroupRequest& request) const;

        /**
         * <p>Deletes an existing option group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteOptionGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteOptionGroupAsync(const Model::DeleteOptionGroupRequest& request, const DeleteOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove the association between one or more <code>DBProxyTarget</code> data
         * structures and a <code>DBProxyTargetGroup</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeregisterDBProxyTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterDBProxyTargetsOutcome DeregisterDBProxyTargets(const Model::DeregisterDBProxyTargetsRequest& request) const;

        /**
         * <p>Remove the association between one or more <code>DBProxyTarget</code> data
         * structures and a <code>DBProxyTargetGroup</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeregisterDBProxyTargets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterDBProxyTargetsOutcomeCallable DeregisterDBProxyTargetsCallable(const Model::DeregisterDBProxyTargetsRequest& request) const;

        /**
         * <p>Remove the association between one or more <code>DBProxyTarget</code> data
         * structures and a <code>DBProxyTargetGroup</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeregisterDBProxyTargets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterDBProxyTargetsAsync(const Model::DeregisterDBProxyTargetsRequest& request, const DeregisterDBProxyTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the attributes for a customer account. The attributes include
         * Amazon RDS quotas for the account, such as the number of DB instances allowed.
         * The description for a quota includes the quota name, current usage toward that
         * quota, and the quota's maximum value.</p> <p>This command doesn't take any
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeAccountAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountAttributesOutcome DescribeAccountAttributes(const Model::DescribeAccountAttributesRequest& request) const;

        /**
         * <p>Lists all of the attributes for a customer account. The attributes include
         * Amazon RDS quotas for the account, such as the number of DB instances allowed.
         * The description for a quota includes the quota name, current usage toward that
         * quota, and the quota's maximum value.</p> <p>This command doesn't take any
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeAccountAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountAttributesOutcomeCallable DescribeAccountAttributesCallable(const Model::DescribeAccountAttributesRequest& request) const;

        /**
         * <p>Lists all of the attributes for a customer account. The attributes include
         * Amazon RDS quotas for the account, such as the number of DB instances allowed.
         * The description for a quota includes the quota name, current usage toward that
         * quota, and the quota's maximum value.</p> <p>This command doesn't take any
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeAccountAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountAttributesAsync(const Model::DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the set of CA certificates provided by Amazon RDS for this AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCertificatesOutcome DescribeCertificates(const Model::DescribeCertificatesRequest& request) const;

        /**
         * <p>Lists the set of CA certificates provided by Amazon RDS for this AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeCertificates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCertificatesOutcomeCallable DescribeCertificatesCallable(const Model::DescribeCertificatesRequest& request) const;

        /**
         * <p>Lists the set of CA certificates provided by Amazon RDS for this AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeCertificates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCertificatesAsync(const Model::DescribeCertificatesRequest& request, const DescribeCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about custom Availability Zones (AZs).</p> <p>A custom AZ
         * is an on-premises AZ that is integrated with a VMware vSphere cluster.</p>
         * <p>For more information about RDS on VMware, see the <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/RDSonVMwareUserGuide/rds-on-vmware.html">
         * RDS on VMware User Guide.</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeCustomAvailabilityZones">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCustomAvailabilityZonesOutcome DescribeCustomAvailabilityZones(const Model::DescribeCustomAvailabilityZonesRequest& request) const;

        /**
         * <p>Returns information about custom Availability Zones (AZs).</p> <p>A custom AZ
         * is an on-premises AZ that is integrated with a VMware vSphere cluster.</p>
         * <p>For more information about RDS on VMware, see the <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/RDSonVMwareUserGuide/rds-on-vmware.html">
         * RDS on VMware User Guide.</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeCustomAvailabilityZones">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCustomAvailabilityZonesOutcomeCallable DescribeCustomAvailabilityZonesCallable(const Model::DescribeCustomAvailabilityZonesRequest& request) const;

        /**
         * <p>Returns information about custom Availability Zones (AZs).</p> <p>A custom AZ
         * is an on-premises AZ that is integrated with a VMware vSphere cluster.</p>
         * <p>For more information about RDS on VMware, see the <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/RDSonVMwareUserGuide/rds-on-vmware.html">
         * RDS on VMware User Guide.</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeCustomAvailabilityZones">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCustomAvailabilityZonesAsync(const Model::DescribeCustomAvailabilityZonesRequest& request, const DescribeCustomAvailabilityZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about backtracks for a DB cluster.</p> <p>For more
         * information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora MySQL DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterBacktracks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterBacktracksOutcome DescribeDBClusterBacktracks(const Model::DescribeDBClusterBacktracksRequest& request) const;

        /**
         * <p>Returns information about backtracks for a DB cluster.</p> <p>For more
         * information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora MySQL DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterBacktracks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBClusterBacktracksOutcomeCallable DescribeDBClusterBacktracksCallable(const Model::DescribeDBClusterBacktracksRequest& request) const;

        /**
         * <p>Returns information about backtracks for a DB cluster.</p> <p>For more
         * information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora MySQL DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterBacktracks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBClusterBacktracksAsync(const Model::DescribeDBClusterBacktracksRequest& request, const DescribeDBClusterBacktracksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about endpoints for an Amazon Aurora DB cluster.</p>
         *  <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterEndpointsOutcome DescribeDBClusterEndpoints(const Model::DescribeDBClusterEndpointsRequest& request) const;

        /**
         * <p>Returns information about endpoints for an Amazon Aurora DB cluster.</p>
         *  <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterEndpoints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBClusterEndpointsOutcomeCallable DescribeDBClusterEndpointsCallable(const Model::DescribeDBClusterEndpointsRequest& request) const;

        /**
         * <p>Returns information about endpoints for an Amazon Aurora DB cluster.</p>
         *  <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterEndpoints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBClusterEndpointsAsync(const Model::DescribeDBClusterEndpointsRequest& request, const DescribeDBClusterEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of <code>DBClusterParameterGroup</code> descriptions. If a
         * <code>DBClusterParameterGroupName</code> parameter is specified, the list will
         * contain only the description of the specified DB cluster parameter group. </p>
         * <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterParameterGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterParameterGroupsOutcome DescribeDBClusterParameterGroups(const Model::DescribeDBClusterParameterGroupsRequest& request) const;

        /**
         * <p> Returns a list of <code>DBClusterParameterGroup</code> descriptions. If a
         * <code>DBClusterParameterGroupName</code> parameter is specified, the list will
         * contain only the description of the specified DB cluster parameter group. </p>
         * <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterParameterGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBClusterParameterGroupsOutcomeCallable DescribeDBClusterParameterGroupsCallable(const Model::DescribeDBClusterParameterGroupsRequest& request) const;

        /**
         * <p> Returns a list of <code>DBClusterParameterGroup</code> descriptions. If a
         * <code>DBClusterParameterGroupName</code> parameter is specified, the list will
         * contain only the description of the specified DB cluster parameter group. </p>
         * <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterParameterGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBClusterParameterGroupsAsync(const Model::DescribeDBClusterParameterGroupsRequest& request, const DescribeDBClusterParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the detailed parameter list for a particular DB cluster parameter
         * group.</p> <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterParametersOutcome DescribeDBClusterParameters(const Model::DescribeDBClusterParametersRequest& request) const;

        /**
         * <p>Returns the detailed parameter list for a particular DB cluster parameter
         * group.</p> <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterParameters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBClusterParametersOutcomeCallable DescribeDBClusterParametersCallable(const Model::DescribeDBClusterParametersRequest& request) const;

        /**
         * <p>Returns the detailed parameter list for a particular DB cluster parameter
         * group.</p> <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterParameters">AWS
         * API Reference</a></p>
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
         * <code>ModifyDBClusterSnapshotAttribute</code> API action.</p>  <p>This
         * action only applies to Aurora DB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterSnapshotAttributes">AWS
         * API Reference</a></p>
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
         * <code>ModifyDBClusterSnapshotAttribute</code> API action.</p>  <p>This
         * action only applies to Aurora DB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterSnapshotAttributes">AWS
         * API Reference</a></p>
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
         * <code>ModifyDBClusterSnapshotAttribute</code> API action.</p>  <p>This
         * action only applies to Aurora DB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterSnapshotAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBClusterSnapshotAttributesAsync(const Model::DescribeDBClusterSnapshotAttributesRequest& request, const DescribeDBClusterSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about DB cluster snapshots. This API action supports
         * pagination.</p> <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterSnapshotsOutcome DescribeDBClusterSnapshots(const Model::DescribeDBClusterSnapshotsRequest& request) const;

        /**
         * <p>Returns information about DB cluster snapshots. This API action supports
         * pagination.</p> <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterSnapshots">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBClusterSnapshotsOutcomeCallable DescribeDBClusterSnapshotsCallable(const Model::DescribeDBClusterSnapshotsRequest& request) const;

        /**
         * <p>Returns information about DB cluster snapshots. This API action supports
         * pagination.</p> <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterSnapshots">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBClusterSnapshotsAsync(const Model::DescribeDBClusterSnapshotsRequest& request, const DescribeDBClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about provisioned Aurora DB clusters. This API supports
         * pagination.</p> <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This operation can also return information for Amazon Neptune DB instances
         * and Amazon DocumentDB instances.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClustersOutcome DescribeDBClusters(const Model::DescribeDBClustersRequest& request) const;

        /**
         * <p>Returns information about provisioned Aurora DB clusters. This API supports
         * pagination.</p> <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This operation can also return information for Amazon Neptune DB instances
         * and Amazon DocumentDB instances.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBClustersOutcomeCallable DescribeDBClustersCallable(const Model::DescribeDBClustersRequest& request) const;

        /**
         * <p>Returns information about provisioned Aurora DB clusters. This API supports
         * pagination.</p> <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This operation can also return information for Amazon Neptune DB instances
         * and Amazon DocumentDB instances.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBClustersAsync(const Model::DescribeDBClustersRequest& request, const DescribeDBClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the available DB engines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBEngineVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBEngineVersionsOutcome DescribeDBEngineVersions(const Model::DescribeDBEngineVersionsRequest& request) const;

        /**
         * <p>Returns a list of the available DB engines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBEngineVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBEngineVersionsOutcomeCallable DescribeDBEngineVersionsCallable(const Model::DescribeDBEngineVersionsRequest& request) const;

        /**
         * <p>Returns a list of the available DB engines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBEngineVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBEngineVersionsAsync(const Model::DescribeDBEngineVersionsRequest& request, const DescribeDBEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays backups for both current and deleted instances. For example, use
         * this operation to find details about automated backups for previously deleted
         * instances. Current instances with retention periods greater than zero (0) are
         * returned for both the <code>DescribeDBInstanceAutomatedBackups</code> and
         * <code>DescribeDBInstances</code> operations.</p> <p>All parameters are
         * optional.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBInstanceAutomatedBackups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBInstanceAutomatedBackupsOutcome DescribeDBInstanceAutomatedBackups(const Model::DescribeDBInstanceAutomatedBackupsRequest& request) const;

        /**
         * <p>Displays backups for both current and deleted instances. For example, use
         * this operation to find details about automated backups for previously deleted
         * instances. Current instances with retention periods greater than zero (0) are
         * returned for both the <code>DescribeDBInstanceAutomatedBackups</code> and
         * <code>DescribeDBInstances</code> operations.</p> <p>All parameters are
         * optional.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBInstanceAutomatedBackups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBInstanceAutomatedBackupsOutcomeCallable DescribeDBInstanceAutomatedBackupsCallable(const Model::DescribeDBInstanceAutomatedBackupsRequest& request) const;

        /**
         * <p>Displays backups for both current and deleted instances. For example, use
         * this operation to find details about automated backups for previously deleted
         * instances. Current instances with retention periods greater than zero (0) are
         * returned for both the <code>DescribeDBInstanceAutomatedBackups</code> and
         * <code>DescribeDBInstances</code> operations.</p> <p>All parameters are
         * optional.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBInstanceAutomatedBackups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBInstanceAutomatedBackupsAsync(const Model::DescribeDBInstanceAutomatedBackupsRequest& request, const DescribeDBInstanceAutomatedBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about provisioned RDS instances. This API supports
         * pagination.</p>  <p>This operation can also return information for Amazon
         * Neptune DB instances and Amazon DocumentDB instances.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBInstancesOutcome DescribeDBInstances(const Model::DescribeDBInstancesRequest& request) const;

        /**
         * <p>Returns information about provisioned RDS instances. This API supports
         * pagination.</p>  <p>This operation can also return information for Amazon
         * Neptune DB instances and Amazon DocumentDB instances.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBInstancesOutcomeCallable DescribeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request) const;

        /**
         * <p>Returns information about provisioned RDS instances. This API supports
         * pagination.</p>  <p>This operation can also return information for Amazon
         * Neptune DB instances and Amazon DocumentDB instances.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of DB log files for the DB instance.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBLogFiles">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBLogFilesOutcome DescribeDBLogFiles(const Model::DescribeDBLogFilesRequest& request) const;

        /**
         * <p>Returns a list of DB log files for the DB instance.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBLogFiles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBLogFilesOutcomeCallable DescribeDBLogFilesCallable(const Model::DescribeDBLogFilesRequest& request) const;

        /**
         * <p>Returns a list of DB log files for the DB instance.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBLogFiles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBLogFilesAsync(const Model::DescribeDBLogFilesRequest& request, const DescribeDBLogFilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of <code>DBParameterGroup</code> descriptions. If a
         * <code>DBParameterGroupName</code> is specified, the list will contain only the
         * description of the specified DB parameter group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBParameterGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBParameterGroupsOutcome DescribeDBParameterGroups(const Model::DescribeDBParameterGroupsRequest& request) const;

        /**
         * <p> Returns a list of <code>DBParameterGroup</code> descriptions. If a
         * <code>DBParameterGroupName</code> is specified, the list will contain only the
         * description of the specified DB parameter group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBParameterGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBParameterGroupsOutcomeCallable DescribeDBParameterGroupsCallable(const Model::DescribeDBParameterGroupsRequest& request) const;

        /**
         * <p> Returns a list of <code>DBParameterGroup</code> descriptions. If a
         * <code>DBParameterGroupName</code> is specified, the list will contain only the
         * description of the specified DB parameter group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBParameterGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBParameterGroupsAsync(const Model::DescribeDBParameterGroupsRequest& request, const DescribeDBParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the detailed parameter list for a particular DB parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBParametersOutcome DescribeDBParameters(const Model::DescribeDBParametersRequest& request) const;

        /**
         * <p>Returns the detailed parameter list for a particular DB parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBParameters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBParametersOutcomeCallable DescribeDBParametersCallable(const Model::DescribeDBParametersRequest& request) const;

        /**
         * <p>Returns the detailed parameter list for a particular DB parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBParameters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBParametersAsync(const Model::DescribeDBParametersRequest& request, const DescribeDBParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about DB proxies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBProxies">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBProxiesOutcome DescribeDBProxies(const Model::DescribeDBProxiesRequest& request) const;

        /**
         * <p>Returns information about DB proxies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBProxies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBProxiesOutcomeCallable DescribeDBProxiesCallable(const Model::DescribeDBProxiesRequest& request) const;

        /**
         * <p>Returns information about DB proxies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBProxies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBProxiesAsync(const Model::DescribeDBProxiesRequest& request, const DescribeDBProxiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about DB proxy endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBProxyEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBProxyEndpointsOutcome DescribeDBProxyEndpoints(const Model::DescribeDBProxyEndpointsRequest& request) const;

        /**
         * <p>Returns information about DB proxy endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBProxyEndpoints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBProxyEndpointsOutcomeCallable DescribeDBProxyEndpointsCallable(const Model::DescribeDBProxyEndpointsRequest& request) const;

        /**
         * <p>Returns information about DB proxy endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBProxyEndpoints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBProxyEndpointsAsync(const Model::DescribeDBProxyEndpointsRequest& request, const DescribeDBProxyEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about DB proxy target groups, represented by
         * <code>DBProxyTargetGroup</code> data structures.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBProxyTargetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBProxyTargetGroupsOutcome DescribeDBProxyTargetGroups(const Model::DescribeDBProxyTargetGroupsRequest& request) const;

        /**
         * <p>Returns information about DB proxy target groups, represented by
         * <code>DBProxyTargetGroup</code> data structures.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBProxyTargetGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBProxyTargetGroupsOutcomeCallable DescribeDBProxyTargetGroupsCallable(const Model::DescribeDBProxyTargetGroupsRequest& request) const;

        /**
         * <p>Returns information about DB proxy target groups, represented by
         * <code>DBProxyTargetGroup</code> data structures.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBProxyTargetGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBProxyTargetGroupsAsync(const Model::DescribeDBProxyTargetGroupsRequest& request, const DescribeDBProxyTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about <code>DBProxyTarget</code> objects. This API
         * supports pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBProxyTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBProxyTargetsOutcome DescribeDBProxyTargets(const Model::DescribeDBProxyTargetsRequest& request) const;

        /**
         * <p>Returns information about <code>DBProxyTarget</code> objects. This API
         * supports pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBProxyTargets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBProxyTargetsOutcomeCallable DescribeDBProxyTargetsCallable(const Model::DescribeDBProxyTargetsRequest& request) const;

        /**
         * <p>Returns information about <code>DBProxyTarget</code> objects. This API
         * supports pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBProxyTargets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBProxyTargetsAsync(const Model::DescribeDBProxyTargetsRequest& request, const DescribeDBProxyTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of <code>DBSecurityGroup</code> descriptions. If a
         * <code>DBSecurityGroupName</code> is specified, the list will contain only the
         * descriptions of the specified DB security group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBSecurityGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBSecurityGroupsOutcome DescribeDBSecurityGroups(const Model::DescribeDBSecurityGroupsRequest& request) const;

        /**
         * <p> Returns a list of <code>DBSecurityGroup</code> descriptions. If a
         * <code>DBSecurityGroupName</code> is specified, the list will contain only the
         * descriptions of the specified DB security group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBSecurityGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBSecurityGroupsOutcomeCallable DescribeDBSecurityGroupsCallable(const Model::DescribeDBSecurityGroupsRequest& request) const;

        /**
         * <p> Returns a list of <code>DBSecurityGroup</code> descriptions. If a
         * <code>DBSecurityGroupName</code> is specified, the list will contain only the
         * descriptions of the specified DB security group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBSecurityGroups">AWS
         * API Reference</a></p>
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
         * <code>ModifyDBSnapshotAttribute</code> API action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBSnapshotAttributes">AWS
         * API Reference</a></p>
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
         * <code>ModifyDBSnapshotAttribute</code> API action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBSnapshotAttributes">AWS
         * API Reference</a></p>
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
         * <code>ModifyDBSnapshotAttribute</code> API action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBSnapshotAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBSnapshotAttributesAsync(const Model::DescribeDBSnapshotAttributesRequest& request, const DescribeDBSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about DB snapshots. This API action supports
         * pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBSnapshotsOutcome DescribeDBSnapshots(const Model::DescribeDBSnapshotsRequest& request) const;

        /**
         * <p>Returns information about DB snapshots. This API action supports
         * pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBSnapshots">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBSnapshotsOutcomeCallable DescribeDBSnapshotsCallable(const Model::DescribeDBSnapshotsRequest& request) const;

        /**
         * <p>Returns information about DB snapshots. This API action supports
         * pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBSnapshots">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBSnapshotsAsync(const Model::DescribeDBSnapshotsRequest& request, const DescribeDBSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of DBSubnetGroup descriptions. If a DBSubnetGroupName is
         * specified, the list will contain only the descriptions of the specified
         * DBSubnetGroup.</p> <p>For an overview of CIDR ranges, go to the <a
         * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia
         * Tutorial</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBSubnetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBSubnetGroupsOutcome DescribeDBSubnetGroups(const Model::DescribeDBSubnetGroupsRequest& request) const;

        /**
         * <p>Returns a list of DBSubnetGroup descriptions. If a DBSubnetGroupName is
         * specified, the list will contain only the descriptions of the specified
         * DBSubnetGroup.</p> <p>For an overview of CIDR ranges, go to the <a
         * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia
         * Tutorial</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBSubnetGroups">AWS
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
         * Tutorial</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBSubnetGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBSubnetGroupsAsync(const Model::DescribeDBSubnetGroupsRequest& request, const DescribeDBSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the default engine and system parameter information for the cluster
         * database engine.</p> <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeEngineDefaultClusterParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEngineDefaultClusterParametersOutcome DescribeEngineDefaultClusterParameters(const Model::DescribeEngineDefaultClusterParametersRequest& request) const;

        /**
         * <p>Returns the default engine and system parameter information for the cluster
         * database engine.</p> <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeEngineDefaultClusterParameters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEngineDefaultClusterParametersOutcomeCallable DescribeEngineDefaultClusterParametersCallable(const Model::DescribeEngineDefaultClusterParametersRequest& request) const;

        /**
         * <p>Returns the default engine and system parameter information for the cluster
         * database engine.</p> <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeEngineDefaultClusterParameters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEngineDefaultClusterParametersAsync(const Model::DescribeEngineDefaultClusterParametersRequest& request, const DescribeEngineDefaultClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the default engine and system parameter information for the specified
         * database engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeEngineDefaultParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEngineDefaultParametersOutcome DescribeEngineDefaultParameters(const Model::DescribeEngineDefaultParametersRequest& request) const;

        /**
         * <p>Returns the default engine and system parameter information for the specified
         * database engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeEngineDefaultParameters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEngineDefaultParametersOutcomeCallable DescribeEngineDefaultParametersCallable(const Model::DescribeEngineDefaultParametersRequest& request) const;

        /**
         * <p>Returns the default engine and system parameter information for the specified
         * database engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeEngineDefaultParameters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEngineDefaultParametersAsync(const Model::DescribeEngineDefaultParametersRequest& request, const DescribeEngineDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays a list of categories for all event source types, or, if specified,
         * for a specified source type. You can see a list of the event categories and
         * source types in <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.html">
         * Events</a> in the <i>Amazon RDS User Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeEventCategories">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventCategoriesOutcome DescribeEventCategories(const Model::DescribeEventCategoriesRequest& request) const;

        /**
         * <p>Displays a list of categories for all event source types, or, if specified,
         * for a specified source type. You can see a list of the event categories and
         * source types in <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.html">
         * Events</a> in the <i>Amazon RDS User Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeEventCategories">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventCategoriesOutcomeCallable DescribeEventCategoriesCallable(const Model::DescribeEventCategoriesRequest& request) const;

        /**
         * <p>Displays a list of categories for all event source types, or, if specified,
         * for a specified source type. You can see a list of the event categories and
         * source types in <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.html">
         * Events</a> in the <i>Amazon RDS User Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeEventCategories">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventCategoriesAsync(const Model::DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the subscription descriptions for a customer account. The
         * description for a subscription includes <code>SubscriptionName</code>,
         * <code>SNSTopicARN</code>, <code>CustomerID</code>, <code>SourceType</code>,
         * <code>SourceID</code>, <code>CreationTime</code>, and <code>Status</code>.</p>
         * <p>If you specify a <code>SubscriptionName</code>, lists the description for
         * that subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeEventSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventSubscriptionsOutcome DescribeEventSubscriptions(const Model::DescribeEventSubscriptionsRequest& request) const;

        /**
         * <p>Lists all the subscription descriptions for a customer account. The
         * description for a subscription includes <code>SubscriptionName</code>,
         * <code>SNSTopicARN</code>, <code>CustomerID</code>, <code>SourceType</code>,
         * <code>SourceID</code>, <code>CreationTime</code>, and <code>Status</code>.</p>
         * <p>If you specify a <code>SubscriptionName</code>, lists the description for
         * that subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeEventSubscriptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventSubscriptionsOutcomeCallable DescribeEventSubscriptionsCallable(const Model::DescribeEventSubscriptionsRequest& request) const;

        /**
         * <p>Lists all the subscription descriptions for a customer account. The
         * description for a subscription includes <code>SubscriptionName</code>,
         * <code>SNSTopicARN</code>, <code>CustomerID</code>, <code>SourceType</code>,
         * <code>SourceID</code>, <code>CreationTime</code>, and <code>Status</code>.</p>
         * <p>If you specify a <code>SubscriptionName</code>, lists the description for
         * that subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeEventSubscriptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventSubscriptionsAsync(const Model::DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns events related to DB instances, DB clusters, DB parameter groups, DB
         * security groups, DB snapshots, and DB cluster snapshots for the past 14 days.
         * Events specific to a particular DB instances, DB clusters, DB parameter groups,
         * DB security groups, DB snapshots, and DB cluster snapshots group can be obtained
         * by providing the name as a parameter.</p>  <p>By default, the past hour of
         * events are returned.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventsOutcome DescribeEvents(const Model::DescribeEventsRequest& request) const;

        /**
         * <p>Returns events related to DB instances, DB clusters, DB parameter groups, DB
         * security groups, DB snapshots, and DB cluster snapshots for the past 14 days.
         * Events specific to a particular DB instances, DB clusters, DB parameter groups,
         * DB security groups, DB snapshots, and DB cluster snapshots group can be obtained
         * by providing the name as a parameter.</p>  <p>By default, the past hour of
         * events are returned.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventsOutcomeCallable DescribeEventsCallable(const Model::DescribeEventsRequest& request) const;

        /**
         * <p>Returns events related to DB instances, DB clusters, DB parameter groups, DB
         * security groups, DB snapshots, and DB cluster snapshots for the past 14 days.
         * Events specific to a particular DB instances, DB clusters, DB parameter groups,
         * DB security groups, DB snapshots, and DB cluster snapshots group can be obtained
         * by providing the name as a parameter.</p>  <p>By default, the past hour of
         * events are returned.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventsAsync(const Model::DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a snapshot export to Amazon S3. This API operation
         * supports pagination. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeExportTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExportTasksOutcome DescribeExportTasks(const Model::DescribeExportTasksRequest& request) const;

        /**
         * <p>Returns information about a snapshot export to Amazon S3. This API operation
         * supports pagination. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeExportTasks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeExportTasksOutcomeCallable DescribeExportTasksCallable(const Model::DescribeExportTasksRequest& request) const;

        /**
         * <p>Returns information about a snapshot export to Amazon S3. This API operation
         * supports pagination. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeExportTasks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeExportTasksAsync(const Model::DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns information about Aurora global database clusters. This API supports
         * pagination. </p> <p> For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeGlobalClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGlobalClustersOutcome DescribeGlobalClusters(const Model::DescribeGlobalClustersRequest& request) const;

        /**
         * <p> Returns information about Aurora global database clusters. This API supports
         * pagination. </p> <p> For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeGlobalClusters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGlobalClustersOutcomeCallable DescribeGlobalClustersCallable(const Model::DescribeGlobalClustersRequest& request) const;

        /**
         * <p> Returns information about Aurora global database clusters. This API supports
         * pagination. </p> <p> For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeGlobalClusters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGlobalClustersAsync(const Model::DescribeGlobalClustersRequest& request, const DescribeGlobalClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the available installation media for a DB engine that requires an
         * on-premises customer provided license, such as Microsoft SQL
         * Server.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeInstallationMedia">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstallationMediaOutcome DescribeInstallationMedia(const Model::DescribeInstallationMediaRequest& request) const;

        /**
         * <p>Describes the available installation media for a DB engine that requires an
         * on-premises customer provided license, such as Microsoft SQL
         * Server.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeInstallationMedia">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstallationMediaOutcomeCallable DescribeInstallationMediaCallable(const Model::DescribeInstallationMediaRequest& request) const;

        /**
         * <p>Describes the available installation media for a DB engine that requires an
         * on-premises customer provided license, such as Microsoft SQL
         * Server.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeInstallationMedia">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstallationMediaAsync(const Model::DescribeInstallationMediaRequest& request, const DescribeInstallationMediaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes all available options.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeOptionGroupOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOptionGroupOptionsOutcome DescribeOptionGroupOptions(const Model::DescribeOptionGroupOptionsRequest& request) const;

        /**
         * <p>Describes all available options.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeOptionGroupOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOptionGroupOptionsOutcomeCallable DescribeOptionGroupOptionsCallable(const Model::DescribeOptionGroupOptionsRequest& request) const;

        /**
         * <p>Describes all available options.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeOptionGroupOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOptionGroupOptionsAsync(const Model::DescribeOptionGroupOptionsRequest& request, const DescribeOptionGroupOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the available option groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeOptionGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOptionGroupsOutcome DescribeOptionGroups(const Model::DescribeOptionGroupsRequest& request) const;

        /**
         * <p>Describes the available option groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeOptionGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOptionGroupsOutcomeCallable DescribeOptionGroupsCallable(const Model::DescribeOptionGroupsRequest& request) const;

        /**
         * <p>Describes the available option groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeOptionGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOptionGroupsAsync(const Model::DescribeOptionGroupsRequest& request, const DescribeOptionGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of orderable DB instance options for the specified
         * engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeOrderableDBInstanceOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrderableDBInstanceOptionsOutcome DescribeOrderableDBInstanceOptions(const Model::DescribeOrderableDBInstanceOptionsRequest& request) const;

        /**
         * <p>Returns a list of orderable DB instance options for the specified
         * engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeOrderableDBInstanceOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOrderableDBInstanceOptionsOutcomeCallable DescribeOrderableDBInstanceOptionsCallable(const Model::DescribeOrderableDBInstanceOptionsRequest& request) const;

        /**
         * <p>Returns a list of orderable DB instance options for the specified
         * engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeOrderableDBInstanceOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOrderableDBInstanceOptionsAsync(const Model::DescribeOrderableDBInstanceOptionsRequest& request, const DescribeOrderableDBInstanceOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of resources (for example, DB instances) that have at least
         * one pending maintenance action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribePendingMaintenanceActions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePendingMaintenanceActionsOutcome DescribePendingMaintenanceActions(const Model::DescribePendingMaintenanceActionsRequest& request) const;

        /**
         * <p>Returns a list of resources (for example, DB instances) that have at least
         * one pending maintenance action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribePendingMaintenanceActions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePendingMaintenanceActionsOutcomeCallable DescribePendingMaintenanceActionsCallable(const Model::DescribePendingMaintenanceActionsRequest& request) const;

        /**
         * <p>Returns a list of resources (for example, DB instances) that have at least
         * one pending maintenance action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribePendingMaintenanceActions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePendingMaintenanceActionsAsync(const Model::DescribePendingMaintenanceActionsRequest& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about reserved DB instances for this account, or about a
         * specified reserved DB instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeReservedDBInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedDBInstancesOutcome DescribeReservedDBInstances(const Model::DescribeReservedDBInstancesRequest& request) const;

        /**
         * <p>Returns information about reserved DB instances for this account, or about a
         * specified reserved DB instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeReservedDBInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedDBInstancesOutcomeCallable DescribeReservedDBInstancesCallable(const Model::DescribeReservedDBInstancesRequest& request) const;

        /**
         * <p>Returns information about reserved DB instances for this account, or about a
         * specified reserved DB instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeReservedDBInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedDBInstancesAsync(const Model::DescribeReservedDBInstancesRequest& request, const DescribeReservedDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists available reserved DB instance offerings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeReservedDBInstancesOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedDBInstancesOfferingsOutcome DescribeReservedDBInstancesOfferings(const Model::DescribeReservedDBInstancesOfferingsRequest& request) const;

        /**
         * <p>Lists available reserved DB instance offerings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeReservedDBInstancesOfferings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedDBInstancesOfferingsOutcomeCallable DescribeReservedDBInstancesOfferingsCallable(const Model::DescribeReservedDBInstancesOfferingsRequest& request) const;

        /**
         * <p>Lists available reserved DB instance offerings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeReservedDBInstancesOfferings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedDBInstancesOfferingsAsync(const Model::DescribeReservedDBInstancesOfferingsRequest& request, const DescribeReservedDBInstancesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the source AWS Regions where the current AWS Region can
         * create a read replica, copy a DB snapshot from, or replicate automated backups
         * from. This API action supports pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeSourceRegions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSourceRegionsOutcome DescribeSourceRegions(const Model::DescribeSourceRegionsRequest& request) const;

        /**
         * <p>Returns a list of the source AWS Regions where the current AWS Region can
         * create a read replica, copy a DB snapshot from, or replicate automated backups
         * from. This API action supports pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeSourceRegions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSourceRegionsOutcomeCallable DescribeSourceRegionsCallable(const Model::DescribeSourceRegionsRequest& request) const;

        /**
         * <p>Returns a list of the source AWS Regions where the current AWS Region can
         * create a read replica, copy a DB snapshot from, or replicate automated backups
         * from. This API action supports pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeSourceRegions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSourceRegionsAsync(const Model::DescribeSourceRegionsRequest& request, const DescribeSourceRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>You can call <code>DescribeValidDBInstanceModifications</code> to learn what
         * modifications you can make to your DB instance. You can use this information
         * when you call <code>ModifyDBInstance</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeValidDBInstanceModifications">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeValidDBInstanceModificationsOutcome DescribeValidDBInstanceModifications(const Model::DescribeValidDBInstanceModificationsRequest& request) const;

        /**
         * <p>You can call <code>DescribeValidDBInstanceModifications</code> to learn what
         * modifications you can make to your DB instance. You can use this information
         * when you call <code>ModifyDBInstance</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeValidDBInstanceModifications">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeValidDBInstanceModificationsOutcomeCallable DescribeValidDBInstanceModificationsCallable(const Model::DescribeValidDBInstanceModificationsRequest& request) const;

        /**
         * <p>You can call <code>DescribeValidDBInstanceModifications</code> to learn what
         * modifications you can make to your DB instance. You can use this information
         * when you call <code>ModifyDBInstance</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeValidDBInstanceModifications">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeValidDBInstanceModificationsAsync(const Model::DescribeValidDBInstanceModificationsRequest& request, const DescribeValidDBInstanceModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Downloads all or a portion of the specified log file, up to 1 MB in
         * size.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DownloadDBLogFilePortion">AWS
         * API Reference</a></p>
         */
        virtual Model::DownloadDBLogFilePortionOutcome DownloadDBLogFilePortion(const Model::DownloadDBLogFilePortionRequest& request) const;

        /**
         * <p>Downloads all or a portion of the specified log file, up to 1 MB in
         * size.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DownloadDBLogFilePortion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DownloadDBLogFilePortionOutcomeCallable DownloadDBLogFilePortionCallable(const Model::DownloadDBLogFilePortionRequest& request) const;

        /**
         * <p>Downloads all or a portion of the specified log file, up to 1 MB in
         * size.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DownloadDBLogFilePortion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DownloadDBLogFilePortionAsync(const Model::DownloadDBLogFilePortionRequest& request, const DownloadDBLogFilePortionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Forces a failover for a DB cluster.</p> <p>A failover for a DB cluster
         * promotes one of the Aurora Replicas (read-only instances) in the DB cluster to
         * be the primary instance (the cluster writer).</p> <p>Amazon Aurora will
         * automatically fail over to an Aurora Replica, if one exists, when the primary
         * instance fails. You can force a failover when you want to simulate a failure of
         * a primary instance for testing. Because each instance in a DB cluster has its
         * own endpoint address, you will need to clean up and re-establish any existing
         * connections that use those endpoint addresses when the failover is complete.</p>
         * <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/FailoverDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::FailoverDBClusterOutcome FailoverDBCluster(const Model::FailoverDBClusterRequest& request) const;

        /**
         * <p>Forces a failover for a DB cluster.</p> <p>A failover for a DB cluster
         * promotes one of the Aurora Replicas (read-only instances) in the DB cluster to
         * be the primary instance (the cluster writer).</p> <p>Amazon Aurora will
         * automatically fail over to an Aurora Replica, if one exists, when the primary
         * instance fails. You can force a failover when you want to simulate a failure of
         * a primary instance for testing. Because each instance in a DB cluster has its
         * own endpoint address, you will need to clean up and re-establish any existing
         * connections that use those endpoint addresses when the failover is complete.</p>
         * <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/FailoverDBCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::FailoverDBClusterOutcomeCallable FailoverDBClusterCallable(const Model::FailoverDBClusterRequest& request) const;

        /**
         * <p>Forces a failover for a DB cluster.</p> <p>A failover for a DB cluster
         * promotes one of the Aurora Replicas (read-only instances) in the DB cluster to
         * be the primary instance (the cluster writer).</p> <p>Amazon Aurora will
         * automatically fail over to an Aurora Replica, if one exists, when the primary
         * instance fails. You can force a failover when you want to simulate a failure of
         * a primary instance for testing. Because each instance in a DB cluster has its
         * own endpoint address, you will need to clean up and re-establish any existing
         * connections that use those endpoint addresses when the failover is complete.</p>
         * <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/FailoverDBCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void FailoverDBClusterAsync(const Model::FailoverDBClusterRequest& request, const FailoverDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates the failover process for an Aurora global database
         * (<a>GlobalCluster</a>).</p> <p>A failover for an Aurora global database promotes
         * one of secondary read-only DB clusters to be the primary DB cluster and demotes
         * the primary DB cluster to being a secondary (read-only) DB cluster. In other
         * words, the role of the current primary DB cluster and the selected (target) DB
         * cluster are switched. The selected secondary DB cluster assumes full read/write
         * capabilities for the Aurora global database.</p> <p>For more information about
         * failing over an Amazon Aurora global database, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-global-database-disaster-recovery.managed-failover">Managed
         * planned failover for Amazon Aurora global databases</a> in the <i>Amazon Aurora
         * User Guide.</i> </p>  <p>This action applies to <a>GlobalCluster</a>
         * (Aurora global databases) only. Use this action only on healthy Aurora global
         * databases with running Aurora DB clusters and no Region-wide outages, to test
         * disaster recovery scenarios or to reconfigure your Aurora global database
         * topology. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/FailoverGlobalCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::FailoverGlobalClusterOutcome FailoverGlobalCluster(const Model::FailoverGlobalClusterRequest& request) const;

        /**
         * <p>Initiates the failover process for an Aurora global database
         * (<a>GlobalCluster</a>).</p> <p>A failover for an Aurora global database promotes
         * one of secondary read-only DB clusters to be the primary DB cluster and demotes
         * the primary DB cluster to being a secondary (read-only) DB cluster. In other
         * words, the role of the current primary DB cluster and the selected (target) DB
         * cluster are switched. The selected secondary DB cluster assumes full read/write
         * capabilities for the Aurora global database.</p> <p>For more information about
         * failing over an Amazon Aurora global database, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-global-database-disaster-recovery.managed-failover">Managed
         * planned failover for Amazon Aurora global databases</a> in the <i>Amazon Aurora
         * User Guide.</i> </p>  <p>This action applies to <a>GlobalCluster</a>
         * (Aurora global databases) only. Use this action only on healthy Aurora global
         * databases with running Aurora DB clusters and no Region-wide outages, to test
         * disaster recovery scenarios or to reconfigure your Aurora global database
         * topology. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/FailoverGlobalCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::FailoverGlobalClusterOutcomeCallable FailoverGlobalClusterCallable(const Model::FailoverGlobalClusterRequest& request) const;

        /**
         * <p>Initiates the failover process for an Aurora global database
         * (<a>GlobalCluster</a>).</p> <p>A failover for an Aurora global database promotes
         * one of secondary read-only DB clusters to be the primary DB cluster and demotes
         * the primary DB cluster to being a secondary (read-only) DB cluster. In other
         * words, the role of the current primary DB cluster and the selected (target) DB
         * cluster are switched. The selected secondary DB cluster assumes full read/write
         * capabilities for the Aurora global database.</p> <p>For more information about
         * failing over an Amazon Aurora global database, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-global-database-disaster-recovery.managed-failover">Managed
         * planned failover for Amazon Aurora global databases</a> in the <i>Amazon Aurora
         * User Guide.</i> </p>  <p>This action applies to <a>GlobalCluster</a>
         * (Aurora global databases) only. Use this action only on healthy Aurora global
         * databases with running Aurora DB clusters and no Region-wide outages, to test
         * disaster recovery scenarios or to reconfigure your Aurora global database
         * topology. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/FailoverGlobalCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void FailoverGlobalClusterAsync(const Model::FailoverGlobalClusterRequest& request, const FailoverGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports the installation media for a DB engine that requires an on-premises
         * customer provided license, such as SQL Server.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ImportInstallationMedia">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportInstallationMediaOutcome ImportInstallationMedia(const Model::ImportInstallationMediaRequest& request) const;

        /**
         * <p>Imports the installation media for a DB engine that requires an on-premises
         * customer provided license, such as SQL Server.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ImportInstallationMedia">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportInstallationMediaOutcomeCallable ImportInstallationMediaCallable(const Model::ImportInstallationMediaRequest& request) const;

        /**
         * <p>Imports the installation media for a DB engine that requires an on-premises
         * customer provided license, such as SQL Server.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ImportInstallationMedia">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportInstallationMediaAsync(const Model::ImportInstallationMediaRequest& request, const ImportInstallationMediaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all tags on an Amazon RDS resource.</p> <p>For an overview on tagging
         * an Amazon RDS resource, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging
         * Amazon RDS Resources</a> in the <i>Amazon RDS User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists all tags on an Amazon RDS resource.</p> <p>For an overview on tagging
         * an Amazon RDS resource, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging
         * Amazon RDS Resources</a> in the <i>Amazon RDS User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists all tags on an Amazon RDS resource.</p> <p>For an overview on tagging
         * an Amazon RDS resource, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging
         * Amazon RDS Resources</a> in the <i>Amazon RDS User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Override the system-default Secure Sockets Layer/Transport Layer Security
         * (SSL/TLS) certificate for Amazon RDS for new DB instances temporarily, or remove
         * the override.</p> <p>By using this operation, you can specify an RDS-approved
         * SSL/TLS certificate for new DB instances that is different from the default
         * certificate provided by RDS. You can also use this operation to remove the
         * override, so that new DB instances use the default certificate provided by
         * RDS.</p> <p>You might need to override the default certificate in the following
         * situations:</p> <ul> <li> <p>You already migrated your applications to support
         * the latest certificate authority (CA) certificate, but the new CA certificate is
         * not yet the RDS default CA certificate for the specified AWS Region.</p> </li>
         * <li> <p>RDS has already moved to a new default CA certificate for the specified
         * AWS Region, but you are still in the process of supporting the new CA
         * certificate. In this case, you temporarily need additional time to finish your
         * application changes.</p> </li> </ul> <p>For more information about rotating your
         * SSL/TLS certificate for RDS DB engines, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.SSL-certificate-rotation.html">
         * Rotating Your SSL/TLS Certificate</a> in the <i>Amazon RDS User Guide</i>.</p>
         * <p>For more information about rotating your SSL/TLS certificate for Aurora DB
         * engines, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.SSL-certificate-rotation.html">
         * Rotating Your SSL/TLS Certificate</a> in the <i>Amazon Aurora User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyCertificatesOutcome ModifyCertificates(const Model::ModifyCertificatesRequest& request) const;

        /**
         * <p>Override the system-default Secure Sockets Layer/Transport Layer Security
         * (SSL/TLS) certificate for Amazon RDS for new DB instances temporarily, or remove
         * the override.</p> <p>By using this operation, you can specify an RDS-approved
         * SSL/TLS certificate for new DB instances that is different from the default
         * certificate provided by RDS. You can also use this operation to remove the
         * override, so that new DB instances use the default certificate provided by
         * RDS.</p> <p>You might need to override the default certificate in the following
         * situations:</p> <ul> <li> <p>You already migrated your applications to support
         * the latest certificate authority (CA) certificate, but the new CA certificate is
         * not yet the RDS default CA certificate for the specified AWS Region.</p> </li>
         * <li> <p>RDS has already moved to a new default CA certificate for the specified
         * AWS Region, but you are still in the process of supporting the new CA
         * certificate. In this case, you temporarily need additional time to finish your
         * application changes.</p> </li> </ul> <p>For more information about rotating your
         * SSL/TLS certificate for RDS DB engines, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.SSL-certificate-rotation.html">
         * Rotating Your SSL/TLS Certificate</a> in the <i>Amazon RDS User Guide</i>.</p>
         * <p>For more information about rotating your SSL/TLS certificate for Aurora DB
         * engines, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.SSL-certificate-rotation.html">
         * Rotating Your SSL/TLS Certificate</a> in the <i>Amazon Aurora User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyCertificates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyCertificatesOutcomeCallable ModifyCertificatesCallable(const Model::ModifyCertificatesRequest& request) const;

        /**
         * <p>Override the system-default Secure Sockets Layer/Transport Layer Security
         * (SSL/TLS) certificate for Amazon RDS for new DB instances temporarily, or remove
         * the override.</p> <p>By using this operation, you can specify an RDS-approved
         * SSL/TLS certificate for new DB instances that is different from the default
         * certificate provided by RDS. You can also use this operation to remove the
         * override, so that new DB instances use the default certificate provided by
         * RDS.</p> <p>You might need to override the default certificate in the following
         * situations:</p> <ul> <li> <p>You already migrated your applications to support
         * the latest certificate authority (CA) certificate, but the new CA certificate is
         * not yet the RDS default CA certificate for the specified AWS Region.</p> </li>
         * <li> <p>RDS has already moved to a new default CA certificate for the specified
         * AWS Region, but you are still in the process of supporting the new CA
         * certificate. In this case, you temporarily need additional time to finish your
         * application changes.</p> </li> </ul> <p>For more information about rotating your
         * SSL/TLS certificate for RDS DB engines, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.SSL-certificate-rotation.html">
         * Rotating Your SSL/TLS Certificate</a> in the <i>Amazon RDS User Guide</i>.</p>
         * <p>For more information about rotating your SSL/TLS certificate for Aurora DB
         * engines, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.SSL-certificate-rotation.html">
         * Rotating Your SSL/TLS Certificate</a> in the <i>Amazon Aurora User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyCertificates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyCertificatesAsync(const Model::ModifyCertificatesRequest& request, const ModifyCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Set the capacity of an Aurora Serverless DB cluster to a specific value.</p>
         * <p>Aurora Serverless scales seamlessly based on the workload on the DB cluster.
         * In some cases, the capacity might not scale fast enough to meet a sudden change
         * in workload, such as a large number of new transactions. Call
         * <code>ModifyCurrentDBClusterCapacity</code> to set the capacity explicitly.</p>
         * <p>After this call sets the DB cluster capacity, Aurora Serverless can
         * automatically scale the DB cluster based on the cooldown period for scaling up
         * and the cooldown period for scaling down.</p> <p>For more information about
         * Aurora Serverless, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.html">Using
         * Amazon Aurora Serverless</a> in the <i>Amazon Aurora User Guide</i>.</p>
         *  <p>If you call <code>ModifyCurrentDBClusterCapacity</code> with the
         * default <code>TimeoutAction</code>, connections that prevent Aurora Serverless
         * from finding a scaling point might be dropped. For more information about
         * scaling points, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.how-it-works.html#aurora-serverless.how-it-works.auto-scaling">
         * Autoscaling for Aurora Serverless</a> in the <i>Amazon Aurora User
         * Guide</i>.</p>   <p>This action only applies to Aurora DB
         * clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyCurrentDBClusterCapacity">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyCurrentDBClusterCapacityOutcome ModifyCurrentDBClusterCapacity(const Model::ModifyCurrentDBClusterCapacityRequest& request) const;

        /**
         * <p>Set the capacity of an Aurora Serverless DB cluster to a specific value.</p>
         * <p>Aurora Serverless scales seamlessly based on the workload on the DB cluster.
         * In some cases, the capacity might not scale fast enough to meet a sudden change
         * in workload, such as a large number of new transactions. Call
         * <code>ModifyCurrentDBClusterCapacity</code> to set the capacity explicitly.</p>
         * <p>After this call sets the DB cluster capacity, Aurora Serverless can
         * automatically scale the DB cluster based on the cooldown period for scaling up
         * and the cooldown period for scaling down.</p> <p>For more information about
         * Aurora Serverless, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.html">Using
         * Amazon Aurora Serverless</a> in the <i>Amazon Aurora User Guide</i>.</p>
         *  <p>If you call <code>ModifyCurrentDBClusterCapacity</code> with the
         * default <code>TimeoutAction</code>, connections that prevent Aurora Serverless
         * from finding a scaling point might be dropped. For more information about
         * scaling points, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.how-it-works.html#aurora-serverless.how-it-works.auto-scaling">
         * Autoscaling for Aurora Serverless</a> in the <i>Amazon Aurora User
         * Guide</i>.</p>   <p>This action only applies to Aurora DB
         * clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyCurrentDBClusterCapacity">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyCurrentDBClusterCapacityOutcomeCallable ModifyCurrentDBClusterCapacityCallable(const Model::ModifyCurrentDBClusterCapacityRequest& request) const;

        /**
         * <p>Set the capacity of an Aurora Serverless DB cluster to a specific value.</p>
         * <p>Aurora Serverless scales seamlessly based on the workload on the DB cluster.
         * In some cases, the capacity might not scale fast enough to meet a sudden change
         * in workload, such as a large number of new transactions. Call
         * <code>ModifyCurrentDBClusterCapacity</code> to set the capacity explicitly.</p>
         * <p>After this call sets the DB cluster capacity, Aurora Serverless can
         * automatically scale the DB cluster based on the cooldown period for scaling up
         * and the cooldown period for scaling down.</p> <p>For more information about
         * Aurora Serverless, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.html">Using
         * Amazon Aurora Serverless</a> in the <i>Amazon Aurora User Guide</i>.</p>
         *  <p>If you call <code>ModifyCurrentDBClusterCapacity</code> with the
         * default <code>TimeoutAction</code>, connections that prevent Aurora Serverless
         * from finding a scaling point might be dropped. For more information about
         * scaling points, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.how-it-works.html#aurora-serverless.how-it-works.auto-scaling">
         * Autoscaling for Aurora Serverless</a> in the <i>Amazon Aurora User
         * Guide</i>.</p>   <p>This action only applies to Aurora DB
         * clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyCurrentDBClusterCapacity">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyCurrentDBClusterCapacityAsync(const Model::ModifyCurrentDBClusterCapacityRequest& request, const ModifyCurrentDBClusterCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modify a setting for an Amazon Aurora DB cluster. You can change one or more
         * database configuration parameters by specifying these parameters and the new
         * values in the request. For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBClusterOutcome ModifyDBCluster(const Model::ModifyDBClusterRequest& request) const;

        /**
         * <p>Modify a setting for an Amazon Aurora DB cluster. You can change one or more
         * database configuration parameters by specifying these parameters and the new
         * values in the request. For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBClusterOutcomeCallable ModifyDBClusterCallable(const Model::ModifyDBClusterRequest& request) const;

        /**
         * <p>Modify a setting for an Amazon Aurora DB cluster. You can change one or more
         * database configuration parameters by specifying these parameters and the new
         * values in the request. For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBClusterAsync(const Model::ModifyDBClusterRequest& request, const ModifyDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the properties of an endpoint in an Amazon Aurora DB cluster.</p>
         *  <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBClusterEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBClusterEndpointOutcome ModifyDBClusterEndpoint(const Model::ModifyDBClusterEndpointRequest& request) const;

        /**
         * <p>Modifies the properties of an endpoint in an Amazon Aurora DB cluster.</p>
         *  <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBClusterEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBClusterEndpointOutcomeCallable ModifyDBClusterEndpointCallable(const Model::ModifyDBClusterEndpointRequest& request) const;

        /**
         * <p>Modifies the properties of an endpoint in an Amazon Aurora DB cluster.</p>
         *  <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBClusterEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBClusterEndpointAsync(const Model::ModifyDBClusterEndpointRequest& request, const ModifyDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Modifies the parameters of a DB cluster parameter group. To modify more than
         * one parameter, submit a list of the following: <code>ParameterName</code>,
         * <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20
         * parameters can be modified in a single request. </p> <p>For more information on
         * Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>Changes to dynamic parameters are applied immediately. Changes to static
         * parameters require a reboot without failover to the DB cluster associated with
         * the parameter group before the change can take effect.</p>  
         * <p>After you create a DB cluster parameter group, you should wait at least 5
         * minutes before creating your first DB cluster that uses that DB cluster
         * parameter group as the default parameter group. This allows Amazon RDS to fully
         * complete the create action before the parameter group is used as the default for
         * a new DB cluster. This is especially important for parameters that are critical
         * when creating the default database for a DB cluster, such as the character set
         * for the default database defined by the <code>character_set_database</code>
         * parameter. You can use the <i>Parameter Groups</i> option of the <a
         * href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the
         * <code>DescribeDBClusterParameters</code> action to verify that your DB cluster
         * parameter group has been created or modified.</p> <p>If the modified DB cluster
         * parameter group is used by an Aurora Serverless cluster, Aurora applies the
         * update immediately. The cluster restart might interrupt your workload. In that
         * case, your application must reopen any connections and retry any transactions
         * that were active when the parameter changes took effect.</p>  
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBClusterParameterGroupOutcome ModifyDBClusterParameterGroup(const Model::ModifyDBClusterParameterGroupRequest& request) const;

        /**
         * <p> Modifies the parameters of a DB cluster parameter group. To modify more than
         * one parameter, submit a list of the following: <code>ParameterName</code>,
         * <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20
         * parameters can be modified in a single request. </p> <p>For more information on
         * Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>Changes to dynamic parameters are applied immediately. Changes to static
         * parameters require a reboot without failover to the DB cluster associated with
         * the parameter group before the change can take effect.</p>  
         * <p>After you create a DB cluster parameter group, you should wait at least 5
         * minutes before creating your first DB cluster that uses that DB cluster
         * parameter group as the default parameter group. This allows Amazon RDS to fully
         * complete the create action before the parameter group is used as the default for
         * a new DB cluster. This is especially important for parameters that are critical
         * when creating the default database for a DB cluster, such as the character set
         * for the default database defined by the <code>character_set_database</code>
         * parameter. You can use the <i>Parameter Groups</i> option of the <a
         * href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the
         * <code>DescribeDBClusterParameters</code> action to verify that your DB cluster
         * parameter group has been created or modified.</p> <p>If the modified DB cluster
         * parameter group is used by an Aurora Serverless cluster, Aurora applies the
         * update immediately. The cluster restart might interrupt your workload. In that
         * case, your application must reopen any connections and retry any transactions
         * that were active when the parameter changes took effect.</p>  
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBClusterParameterGroup">AWS
         * API Reference</a></p>
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
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>Changes to dynamic parameters are applied immediately. Changes to static
         * parameters require a reboot without failover to the DB cluster associated with
         * the parameter group before the change can take effect.</p>  
         * <p>After you create a DB cluster parameter group, you should wait at least 5
         * minutes before creating your first DB cluster that uses that DB cluster
         * parameter group as the default parameter group. This allows Amazon RDS to fully
         * complete the create action before the parameter group is used as the default for
         * a new DB cluster. This is especially important for parameters that are critical
         * when creating the default database for a DB cluster, such as the character set
         * for the default database defined by the <code>character_set_database</code>
         * parameter. You can use the <i>Parameter Groups</i> option of the <a
         * href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the
         * <code>DescribeDBClusterParameters</code> action to verify that your DB cluster
         * parameter group has been created or modified.</p> <p>If the modified DB cluster
         * parameter group is used by an Aurora Serverless cluster, Aurora applies the
         * update immediately. The cluster restart might interrupt your workload. In that
         * case, your application must reopen any connections and retry any transactions
         * that were active when the parameter changes took effect.</p>  
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBClusterParameterGroup">AWS
         * API Reference</a></p>
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
         * accounts.</p>  <p>Don't add the <code>all</code> value for any manual DB
         * cluster snapshots that contain private information that you don't want available
         * to all AWS accounts.</p>  <p>If a manual DB cluster snapshot is
         * encrypted, it can be shared, but only by specifying a list of authorized AWS
         * account IDs for the <code>ValuesToAdd</code> parameter. You can't use
         * <code>all</code> as a value for that parameter in this case.</p> <p>To view
         * which AWS accounts have access to copy or restore a manual DB cluster snapshot,
         * or whether a manual DB cluster snapshot is public or private, use the
         * <a>DescribeDBClusterSnapshotAttributes</a> API action. The accounts are returned
         * as values for the <code>restore</code> attribute.</p>  <p>This action only
         * applies to Aurora DB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBClusterSnapshotAttribute">AWS
         * API Reference</a></p>
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
         * accounts.</p>  <p>Don't add the <code>all</code> value for any manual DB
         * cluster snapshots that contain private information that you don't want available
         * to all AWS accounts.</p>  <p>If a manual DB cluster snapshot is
         * encrypted, it can be shared, but only by specifying a list of authorized AWS
         * account IDs for the <code>ValuesToAdd</code> parameter. You can't use
         * <code>all</code> as a value for that parameter in this case.</p> <p>To view
         * which AWS accounts have access to copy or restore a manual DB cluster snapshot,
         * or whether a manual DB cluster snapshot is public or private, use the
         * <a>DescribeDBClusterSnapshotAttributes</a> API action. The accounts are returned
         * as values for the <code>restore</code> attribute.</p>  <p>This action only
         * applies to Aurora DB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBClusterSnapshotAttribute">AWS
         * API Reference</a></p>
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
         * accounts.</p>  <p>Don't add the <code>all</code> value for any manual DB
         * cluster snapshots that contain private information that you don't want available
         * to all AWS accounts.</p>  <p>If a manual DB cluster snapshot is
         * encrypted, it can be shared, but only by specifying a list of authorized AWS
         * account IDs for the <code>ValuesToAdd</code> parameter. You can't use
         * <code>all</code> as a value for that parameter in this case.</p> <p>To view
         * which AWS accounts have access to copy or restore a manual DB cluster snapshot,
         * or whether a manual DB cluster snapshot is public or private, use the
         * <a>DescribeDBClusterSnapshotAttributes</a> API action. The accounts are returned
         * as values for the <code>restore</code> attribute.</p>  <p>This action only
         * applies to Aurora DB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBClusterSnapshotAttribute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBClusterSnapshotAttributeAsync(const Model::ModifyDBClusterSnapshotAttributeRequest& request, const ModifyDBClusterSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies settings for a DB instance. You can change one or more database
         * configuration parameters by specifying these parameters and the new values in
         * the request. To learn what modifications you can make to your DB instance, call
         * <code>DescribeValidDBInstanceModifications</code> before you call
         * <code>ModifyDBInstance</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBInstanceOutcome ModifyDBInstance(const Model::ModifyDBInstanceRequest& request) const;

        /**
         * <p>Modifies settings for a DB instance. You can change one or more database
         * configuration parameters by specifying these parameters and the new values in
         * the request. To learn what modifications you can make to your DB instance, call
         * <code>DescribeValidDBInstanceModifications</code> before you call
         * <code>ModifyDBInstance</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBInstanceOutcomeCallable ModifyDBInstanceCallable(const Model::ModifyDBInstanceRequest& request) const;

        /**
         * <p>Modifies settings for a DB instance. You can change one or more database
         * configuration parameters by specifying these parameters and the new values in
         * the request. To learn what modifications you can make to your DB instance, call
         * <code>DescribeValidDBInstanceModifications</code> before you call
         * <code>ModifyDBInstance</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBInstanceAsync(const Model::ModifyDBInstanceRequest& request, const ModifyDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Modifies the parameters of a DB parameter group. To modify more than one
         * parameter, submit a list of the following: <code>ParameterName</code>,
         * <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20
         * parameters can be modified in a single request. </p>  <p>Changes to
         * dynamic parameters are applied immediately. Changes to static parameters require
         * a reboot without failover to the DB instance associated with the parameter group
         * before the change can take effect.</p>   <p>After you modify a
         * DB parameter group, you should wait at least 5 minutes before creating your
         * first DB instance that uses that DB parameter group as the default parameter
         * group. This allows Amazon RDS to fully complete the modify action before the
         * parameter group is used as the default for a new DB instance. This is especially
         * important for parameters that are critical when creating the default database
         * for a DB instance, such as the character set for the default database defined by
         * the <code>character_set_database</code> parameter. You can use the <i>Parameter
         * Groups</i> option of the <a href="https://console.aws.amazon.com/rds/">Amazon
         * RDS console</a> or the <i>DescribeDBParameters</i> command to verify that your
         * DB parameter group has been created or modified.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBParameterGroupOutcome ModifyDBParameterGroup(const Model::ModifyDBParameterGroupRequest& request) const;

        /**
         * <p> Modifies the parameters of a DB parameter group. To modify more than one
         * parameter, submit a list of the following: <code>ParameterName</code>,
         * <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20
         * parameters can be modified in a single request. </p>  <p>Changes to
         * dynamic parameters are applied immediately. Changes to static parameters require
         * a reboot without failover to the DB instance associated with the parameter group
         * before the change can take effect.</p>   <p>After you modify a
         * DB parameter group, you should wait at least 5 minutes before creating your
         * first DB instance that uses that DB parameter group as the default parameter
         * group. This allows Amazon RDS to fully complete the modify action before the
         * parameter group is used as the default for a new DB instance. This is especially
         * important for parameters that are critical when creating the default database
         * for a DB instance, such as the character set for the default database defined by
         * the <code>character_set_database</code> parameter. You can use the <i>Parameter
         * Groups</i> option of the <a href="https://console.aws.amazon.com/rds/">Amazon
         * RDS console</a> or the <i>DescribeDBParameters</i> command to verify that your
         * DB parameter group has been created or modified.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBParameterGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBParameterGroupOutcomeCallable ModifyDBParameterGroupCallable(const Model::ModifyDBParameterGroupRequest& request) const;

        /**
         * <p> Modifies the parameters of a DB parameter group. To modify more than one
         * parameter, submit a list of the following: <code>ParameterName</code>,
         * <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20
         * parameters can be modified in a single request. </p>  <p>Changes to
         * dynamic parameters are applied immediately. Changes to static parameters require
         * a reboot without failover to the DB instance associated with the parameter group
         * before the change can take effect.</p>   <p>After you modify a
         * DB parameter group, you should wait at least 5 minutes before creating your
         * first DB instance that uses that DB parameter group as the default parameter
         * group. This allows Amazon RDS to fully complete the modify action before the
         * parameter group is used as the default for a new DB instance. This is especially
         * important for parameters that are critical when creating the default database
         * for a DB instance, such as the character set for the default database defined by
         * the <code>character_set_database</code> parameter. You can use the <i>Parameter
         * Groups</i> option of the <a href="https://console.aws.amazon.com/rds/">Amazon
         * RDS console</a> or the <i>DescribeDBParameters</i> command to verify that your
         * DB parameter group has been created or modified.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBParameterGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBParameterGroupAsync(const Model::ModifyDBParameterGroupRequest& request, const ModifyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the settings for an existing DB proxy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBProxy">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBProxyOutcome ModifyDBProxy(const Model::ModifyDBProxyRequest& request) const;

        /**
         * <p>Changes the settings for an existing DB proxy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBProxy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBProxyOutcomeCallable ModifyDBProxyCallable(const Model::ModifyDBProxyRequest& request) const;

        /**
         * <p>Changes the settings for an existing DB proxy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBProxy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBProxyAsync(const Model::ModifyDBProxyRequest& request, const ModifyDBProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the settings for an existing DB proxy endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBProxyEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBProxyEndpointOutcome ModifyDBProxyEndpoint(const Model::ModifyDBProxyEndpointRequest& request) const;

        /**
         * <p>Changes the settings for an existing DB proxy endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBProxyEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBProxyEndpointOutcomeCallable ModifyDBProxyEndpointCallable(const Model::ModifyDBProxyEndpointRequest& request) const;

        /**
         * <p>Changes the settings for an existing DB proxy endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBProxyEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBProxyEndpointAsync(const Model::ModifyDBProxyEndpointRequest& request, const ModifyDBProxyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the properties of a <code>DBProxyTargetGroup</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBProxyTargetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBProxyTargetGroupOutcome ModifyDBProxyTargetGroup(const Model::ModifyDBProxyTargetGroupRequest& request) const;

        /**
         * <p>Modifies the properties of a <code>DBProxyTargetGroup</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBProxyTargetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBProxyTargetGroupOutcomeCallable ModifyDBProxyTargetGroupCallable(const Model::ModifyDBProxyTargetGroupRequest& request) const;

        /**
         * <p>Modifies the properties of a <code>DBProxyTargetGroup</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBProxyTargetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBProxyTargetGroupAsync(const Model::ModifyDBProxyTargetGroupRequest& request, const ModifyDBProxyTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a manual DB snapshot with a new engine version. The snapshot can be
         * encrypted or unencrypted, but not shared or public. </p> <p>Amazon RDS supports
         * upgrading DB snapshots for MySQL, Oracle, and PostgreSQL. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBSnapshotOutcome ModifyDBSnapshot(const Model::ModifyDBSnapshotRequest& request) const;

        /**
         * <p>Updates a manual DB snapshot with a new engine version. The snapshot can be
         * encrypted or unencrypted, but not shared or public. </p> <p>Amazon RDS supports
         * upgrading DB snapshots for MySQL, Oracle, and PostgreSQL. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBSnapshotOutcomeCallable ModifyDBSnapshotCallable(const Model::ModifyDBSnapshotRequest& request) const;

        /**
         * <p>Updates a manual DB snapshot with a new engine version. The snapshot can be
         * encrypted or unencrypted, but not shared or public. </p> <p>Amazon RDS supports
         * upgrading DB snapshots for MySQL, Oracle, and PostgreSQL. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBSnapshotAsync(const Model::ModifyDBSnapshotRequest& request, const ModifyDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds an attribute and values to, or removes an attribute and values from, a
         * manual DB snapshot.</p> <p>To share a manual DB snapshot with other AWS
         * accounts, specify <code>restore</code> as the <code>AttributeName</code> and use
         * the <code>ValuesToAdd</code> parameter to add a list of IDs of the AWS accounts
         * that are authorized to restore the manual DB snapshot. Uses the value
         * <code>all</code> to make the manual DB snapshot public, which means it can be
         * copied or restored by all AWS accounts.</p>  <p>Don't add the
         * <code>all</code> value for any manual DB snapshots that contain private
         * information that you don't want available to all AWS accounts.</p>  <p>If
         * the manual DB snapshot is encrypted, it can be shared, but only by specifying a
         * list of authorized AWS account IDs for the <code>ValuesToAdd</code> parameter.
         * You can't use <code>all</code> as a value for that parameter in this case.</p>
         * <p>To view which AWS accounts have access to copy or restore a manual DB
         * snapshot, or whether a manual DB snapshot public or private, use the
         * <a>DescribeDBSnapshotAttributes</a> API action. The accounts are returned as
         * values for the <code>restore</code> attribute.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBSnapshotAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBSnapshotAttributeOutcome ModifyDBSnapshotAttribute(const Model::ModifyDBSnapshotAttributeRequest& request) const;

        /**
         * <p>Adds an attribute and values to, or removes an attribute and values from, a
         * manual DB snapshot.</p> <p>To share a manual DB snapshot with other AWS
         * accounts, specify <code>restore</code> as the <code>AttributeName</code> and use
         * the <code>ValuesToAdd</code> parameter to add a list of IDs of the AWS accounts
         * that are authorized to restore the manual DB snapshot. Uses the value
         * <code>all</code> to make the manual DB snapshot public, which means it can be
         * copied or restored by all AWS accounts.</p>  <p>Don't add the
         * <code>all</code> value for any manual DB snapshots that contain private
         * information that you don't want available to all AWS accounts.</p>  <p>If
         * the manual DB snapshot is encrypted, it can be shared, but only by specifying a
         * list of authorized AWS account IDs for the <code>ValuesToAdd</code> parameter.
         * You can't use <code>all</code> as a value for that parameter in this case.</p>
         * <p>To view which AWS accounts have access to copy or restore a manual DB
         * snapshot, or whether a manual DB snapshot public or private, use the
         * <a>DescribeDBSnapshotAttributes</a> API action. The accounts are returned as
         * values for the <code>restore</code> attribute.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBSnapshotAttribute">AWS
         * API Reference</a></p>
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
         * copied or restored by all AWS accounts.</p>  <p>Don't add the
         * <code>all</code> value for any manual DB snapshots that contain private
         * information that you don't want available to all AWS accounts.</p>  <p>If
         * the manual DB snapshot is encrypted, it can be shared, but only by specifying a
         * list of authorized AWS account IDs for the <code>ValuesToAdd</code> parameter.
         * You can't use <code>all</code> as a value for that parameter in this case.</p>
         * <p>To view which AWS accounts have access to copy or restore a manual DB
         * snapshot, or whether a manual DB snapshot public or private, use the
         * <a>DescribeDBSnapshotAttributes</a> API action. The accounts are returned as
         * values for the <code>restore</code> attribute.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBSnapshotAttribute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBSnapshotAttributeAsync(const Model::ModifyDBSnapshotAttributeRequest& request, const ModifyDBSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies an existing DB subnet group. DB subnet groups must contain at least
         * one subnet in at least two AZs in the AWS Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBSubnetGroupOutcome ModifyDBSubnetGroup(const Model::ModifyDBSubnetGroupRequest& request) const;

        /**
         * <p>Modifies an existing DB subnet group. DB subnet groups must contain at least
         * one subnet in at least two AZs in the AWS Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBSubnetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBSubnetGroupOutcomeCallable ModifyDBSubnetGroupCallable(const Model::ModifyDBSubnetGroupRequest& request) const;

        /**
         * <p>Modifies an existing DB subnet group. DB subnet groups must contain at least
         * one subnet in at least two AZs in the AWS Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBSubnetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBSubnetGroupAsync(const Model::ModifyDBSubnetGroupRequest& request, const ModifyDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies an existing RDS event notification subscription. You can't modify
         * the source identifiers using this call. To change source identifiers for a
         * subscription, use the <code>AddSourceIdentifierToSubscription</code> and
         * <code>RemoveSourceIdentifierFromSubscription</code> calls.</p> <p>You can see a
         * list of the event categories for a given source type (<code>SourceType</code>)
         * in <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.html">Events</a>
         * in the <i>Amazon RDS User Guide</i> or by using the
         * <code>DescribeEventCategories</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyEventSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyEventSubscriptionOutcome ModifyEventSubscription(const Model::ModifyEventSubscriptionRequest& request) const;

        /**
         * <p>Modifies an existing RDS event notification subscription. You can't modify
         * the source identifiers using this call. To change source identifiers for a
         * subscription, use the <code>AddSourceIdentifierToSubscription</code> and
         * <code>RemoveSourceIdentifierFromSubscription</code> calls.</p> <p>You can see a
         * list of the event categories for a given source type (<code>SourceType</code>)
         * in <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.html">Events</a>
         * in the <i>Amazon RDS User Guide</i> or by using the
         * <code>DescribeEventCategories</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyEventSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyEventSubscriptionOutcomeCallable ModifyEventSubscriptionCallable(const Model::ModifyEventSubscriptionRequest& request) const;

        /**
         * <p>Modifies an existing RDS event notification subscription. You can't modify
         * the source identifiers using this call. To change source identifiers for a
         * subscription, use the <code>AddSourceIdentifierToSubscription</code> and
         * <code>RemoveSourceIdentifierFromSubscription</code> calls.</p> <p>You can see a
         * list of the event categories for a given source type (<code>SourceType</code>)
         * in <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.html">Events</a>
         * in the <i>Amazon RDS User Guide</i> or by using the
         * <code>DescribeEventCategories</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyEventSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyEventSubscriptionAsync(const Model::ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Modify a setting for an Amazon Aurora global cluster. You can change one or
         * more database configuration parameters by specifying these parameters and the
         * new values in the request. For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyGlobalCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyGlobalClusterOutcome ModifyGlobalCluster(const Model::ModifyGlobalClusterRequest& request) const;

        /**
         * <p> Modify a setting for an Amazon Aurora global cluster. You can change one or
         * more database configuration parameters by specifying these parameters and the
         * new values in the request. For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyGlobalCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyGlobalClusterOutcomeCallable ModifyGlobalClusterCallable(const Model::ModifyGlobalClusterRequest& request) const;

        /**
         * <p> Modify a setting for an Amazon Aurora global cluster. You can change one or
         * more database configuration parameters by specifying these parameters and the
         * new values in the request. For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyGlobalCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyGlobalClusterAsync(const Model::ModifyGlobalClusterRequest& request, const ModifyGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies an existing option group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyOptionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyOptionGroupOutcome ModifyOptionGroup(const Model::ModifyOptionGroupRequest& request) const;

        /**
         * <p>Modifies an existing option group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyOptionGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyOptionGroupOutcomeCallable ModifyOptionGroupCallable(const Model::ModifyOptionGroupRequest& request) const;

        /**
         * <p>Modifies an existing option group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyOptionGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyOptionGroupAsync(const Model::ModifyOptionGroupRequest& request, const ModifyOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Promotes a read replica DB instance to a standalone DB instance.</p> 
         * <ul> <li> <p>Backup duration is a function of the amount of changes to the
         * database since the previous backup. If you plan to promote a read replica to a
         * standalone instance, we recommend that you enable backups and complete at least
         * one backup prior to promotion. In addition, a read replica cannot be promoted to
         * a standalone instance when it is in the <code>backing-up</code> status. If you
         * have enabled backups on your read replica, configure the automated backup window
         * so that daily backups do not interfere with read replica promotion.</p> </li>
         * <li> <p>This command doesn't apply to Aurora MySQL and Aurora PostgreSQL.</p>
         * </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/PromoteReadReplica">AWS
         * API Reference</a></p>
         */
        virtual Model::PromoteReadReplicaOutcome PromoteReadReplica(const Model::PromoteReadReplicaRequest& request) const;

        /**
         * <p>Promotes a read replica DB instance to a standalone DB instance.</p> 
         * <ul> <li> <p>Backup duration is a function of the amount of changes to the
         * database since the previous backup. If you plan to promote a read replica to a
         * standalone instance, we recommend that you enable backups and complete at least
         * one backup prior to promotion. In addition, a read replica cannot be promoted to
         * a standalone instance when it is in the <code>backing-up</code> status. If you
         * have enabled backups on your read replica, configure the automated backup window
         * so that daily backups do not interfere with read replica promotion.</p> </li>
         * <li> <p>This command doesn't apply to Aurora MySQL and Aurora PostgreSQL.</p>
         * </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/PromoteReadReplica">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PromoteReadReplicaOutcomeCallable PromoteReadReplicaCallable(const Model::PromoteReadReplicaRequest& request) const;

        /**
         * <p>Promotes a read replica DB instance to a standalone DB instance.</p> 
         * <ul> <li> <p>Backup duration is a function of the amount of changes to the
         * database since the previous backup. If you plan to promote a read replica to a
         * standalone instance, we recommend that you enable backups and complete at least
         * one backup prior to promotion. In addition, a read replica cannot be promoted to
         * a standalone instance when it is in the <code>backing-up</code> status. If you
         * have enabled backups on your read replica, configure the automated backup window
         * so that daily backups do not interfere with read replica promotion.</p> </li>
         * <li> <p>This command doesn't apply to Aurora MySQL and Aurora PostgreSQL.</p>
         * </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/PromoteReadReplica">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PromoteReadReplicaAsync(const Model::PromoteReadReplicaRequest& request, const PromoteReadReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Promotes a read replica DB cluster to a standalone DB cluster.</p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/PromoteReadReplicaDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::PromoteReadReplicaDBClusterOutcome PromoteReadReplicaDBCluster(const Model::PromoteReadReplicaDBClusterRequest& request) const;

        /**
         * <p>Promotes a read replica DB cluster to a standalone DB cluster.</p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/PromoteReadReplicaDBCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PromoteReadReplicaDBClusterOutcomeCallable PromoteReadReplicaDBClusterCallable(const Model::PromoteReadReplicaDBClusterRequest& request) const;

        /**
         * <p>Promotes a read replica DB cluster to a standalone DB cluster.</p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/PromoteReadReplicaDBCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PromoteReadReplicaDBClusterAsync(const Model::PromoteReadReplicaDBClusterRequest& request, const PromoteReadReplicaDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Purchases a reserved DB instance offering.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/PurchaseReservedDBInstancesOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseReservedDBInstancesOfferingOutcome PurchaseReservedDBInstancesOffering(const Model::PurchaseReservedDBInstancesOfferingRequest& request) const;

        /**
         * <p>Purchases a reserved DB instance offering.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/PurchaseReservedDBInstancesOffering">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PurchaseReservedDBInstancesOfferingOutcomeCallable PurchaseReservedDBInstancesOfferingCallable(const Model::PurchaseReservedDBInstancesOfferingRequest& request) const;

        /**
         * <p>Purchases a reserved DB instance offering.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/PurchaseReservedDBInstancesOffering">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PurchaseReservedDBInstancesOfferingAsync(const Model::PurchaseReservedDBInstancesOfferingRequest& request, const PurchaseReservedDBInstancesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>You might need to reboot your DB instance, usually for maintenance reasons.
         * For example, if you make certain modifications, or if you change the DB
         * parameter group associated with the DB instance, you must reboot the instance
         * for the changes to take effect. </p> <p>Rebooting a DB instance restarts the
         * database engine service. Rebooting a DB instance results in a momentary outage,
         * during which the DB instance status is set to rebooting. </p> <p>For more
         * information about rebooting, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_RebootInstance.html">Rebooting
         * a DB Instance</a> in the <i>Amazon RDS User Guide.</i> </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RebootDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootDBInstanceOutcome RebootDBInstance(const Model::RebootDBInstanceRequest& request) const;

        /**
         * <p>You might need to reboot your DB instance, usually for maintenance reasons.
         * For example, if you make certain modifications, or if you change the DB
         * parameter group associated with the DB instance, you must reboot the instance
         * for the changes to take effect. </p> <p>Rebooting a DB instance restarts the
         * database engine service. Rebooting a DB instance results in a momentary outage,
         * during which the DB instance status is set to rebooting. </p> <p>For more
         * information about rebooting, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_RebootInstance.html">Rebooting
         * a DB Instance</a> in the <i>Amazon RDS User Guide.</i> </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RebootDBInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RebootDBInstanceOutcomeCallable RebootDBInstanceCallable(const Model::RebootDBInstanceRequest& request) const;

        /**
         * <p>You might need to reboot your DB instance, usually for maintenance reasons.
         * For example, if you make certain modifications, or if you change the DB
         * parameter group associated with the DB instance, you must reboot the instance
         * for the changes to take effect. </p> <p>Rebooting a DB instance restarts the
         * database engine service. Rebooting a DB instance results in a momentary outage,
         * during which the DB instance status is set to rebooting. </p> <p>For more
         * information about rebooting, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_RebootInstance.html">Rebooting
         * a DB Instance</a> in the <i>Amazon RDS User Guide.</i> </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RebootDBInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebootDBInstanceAsync(const Model::RebootDBInstanceRequest& request, const RebootDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associate one or more <code>DBProxyTarget</code> data structures with a
         * <code>DBProxyTargetGroup</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RegisterDBProxyTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterDBProxyTargetsOutcome RegisterDBProxyTargets(const Model::RegisterDBProxyTargetsRequest& request) const;

        /**
         * <p>Associate one or more <code>DBProxyTarget</code> data structures with a
         * <code>DBProxyTargetGroup</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RegisterDBProxyTargets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterDBProxyTargetsOutcomeCallable RegisterDBProxyTargetsCallable(const Model::RegisterDBProxyTargetsRequest& request) const;

        /**
         * <p>Associate one or more <code>DBProxyTarget</code> data structures with a
         * <code>DBProxyTargetGroup</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RegisterDBProxyTargets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterDBProxyTargetsAsync(const Model::RegisterDBProxyTargetsRequest& request, const RegisterDBProxyTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Detaches an Aurora secondary cluster from an Aurora global database cluster.
         * The cluster becomes a standalone cluster with read-write capability instead of
         * being read-only and receiving data from a primary cluster in a different region.
         * </p>  <p>This action only applies to Aurora DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RemoveFromGlobalCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveFromGlobalClusterOutcome RemoveFromGlobalCluster(const Model::RemoveFromGlobalClusterRequest& request) const;

        /**
         * <p> Detaches an Aurora secondary cluster from an Aurora global database cluster.
         * The cluster becomes a standalone cluster with read-write capability instead of
         * being read-only and receiving data from a primary cluster in a different region.
         * </p>  <p>This action only applies to Aurora DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RemoveFromGlobalCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveFromGlobalClusterOutcomeCallable RemoveFromGlobalClusterCallable(const Model::RemoveFromGlobalClusterRequest& request) const;

        /**
         * <p> Detaches an Aurora secondary cluster from an Aurora global database cluster.
         * The cluster becomes a standalone cluster with read-write capability instead of
         * being read-only and receiving data from a primary cluster in a different region.
         * </p>  <p>This action only applies to Aurora DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RemoveFromGlobalCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveFromGlobalClusterAsync(const Model::RemoveFromGlobalClusterRequest& request, const RemoveFromGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates an AWS Identity and Access Management (IAM) role from an Amazon
         * Aurora DB cluster. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Integrating.Authorizing.html">Authorizing
         * Amazon Aurora MySQL to Access Other AWS Services on Your Behalf </a> in the
         * <i>Amazon Aurora User Guide</i>.</p>  <p>This action only applies to
         * Aurora DB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RemoveRoleFromDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveRoleFromDBClusterOutcome RemoveRoleFromDBCluster(const Model::RemoveRoleFromDBClusterRequest& request) const;

        /**
         * <p>Disassociates an AWS Identity and Access Management (IAM) role from an Amazon
         * Aurora DB cluster. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Integrating.Authorizing.html">Authorizing
         * Amazon Aurora MySQL to Access Other AWS Services on Your Behalf </a> in the
         * <i>Amazon Aurora User Guide</i>.</p>  <p>This action only applies to
         * Aurora DB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RemoveRoleFromDBCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveRoleFromDBClusterOutcomeCallable RemoveRoleFromDBClusterCallable(const Model::RemoveRoleFromDBClusterRequest& request) const;

        /**
         * <p>Disassociates an AWS Identity and Access Management (IAM) role from an Amazon
         * Aurora DB cluster. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Integrating.Authorizing.html">Authorizing
         * Amazon Aurora MySQL to Access Other AWS Services on Your Behalf </a> in the
         * <i>Amazon Aurora User Guide</i>.</p>  <p>This action only applies to
         * Aurora DB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RemoveRoleFromDBCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveRoleFromDBClusterAsync(const Model::RemoveRoleFromDBClusterRequest& request, const RemoveRoleFromDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates an AWS Identity and Access Management (IAM) role from a DB
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RemoveRoleFromDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveRoleFromDBInstanceOutcome RemoveRoleFromDBInstance(const Model::RemoveRoleFromDBInstanceRequest& request) const;

        /**
         * <p>Disassociates an AWS Identity and Access Management (IAM) role from a DB
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RemoveRoleFromDBInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveRoleFromDBInstanceOutcomeCallable RemoveRoleFromDBInstanceCallable(const Model::RemoveRoleFromDBInstanceRequest& request) const;

        /**
         * <p>Disassociates an AWS Identity and Access Management (IAM) role from a DB
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RemoveRoleFromDBInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveRoleFromDBInstanceAsync(const Model::RemoveRoleFromDBInstanceRequest& request, const RemoveRoleFromDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a source identifier from an existing RDS event notification
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RemoveSourceIdentifierFromSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveSourceIdentifierFromSubscriptionOutcome RemoveSourceIdentifierFromSubscription(const Model::RemoveSourceIdentifierFromSubscriptionRequest& request) const;

        /**
         * <p>Removes a source identifier from an existing RDS event notification
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RemoveSourceIdentifierFromSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveSourceIdentifierFromSubscriptionOutcomeCallable RemoveSourceIdentifierFromSubscriptionCallable(const Model::RemoveSourceIdentifierFromSubscriptionRequest& request) const;

        /**
         * <p>Removes a source identifier from an existing RDS event notification
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RemoveSourceIdentifierFromSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveSourceIdentifierFromSubscriptionAsync(const Model::RemoveSourceIdentifierFromSubscriptionRequest& request, const RemoveSourceIdentifierFromSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes metadata tags from an Amazon RDS resource.</p> <p>For an overview on
         * tagging an Amazon RDS resource, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging
         * Amazon RDS Resources</a> in the <i>Amazon RDS User Guide.</i> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * <p>Removes metadata tags from an Amazon RDS resource.</p> <p>For an overview on
         * tagging an Amazon RDS resource, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging
         * Amazon RDS Resources</a> in the <i>Amazon RDS User Guide.</i> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * <p>Removes metadata tags from an Amazon RDS resource.</p> <p>For an overview on
         * tagging an Amazon RDS resource, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging
         * Amazon RDS Resources</a> in the <i>Amazon RDS User Guide.</i> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RemoveTagsFromResource">AWS
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
         * and <code>ResetAllParameters</code> parameters. </p> <p> When resetting the
         * entire group, dynamic parameters are updated immediately and static parameters
         * are set to <code>pending-reboot</code> to take effect on the next DB instance
         * restart or <code>RebootDBInstance</code> request. You must call
         * <code>RebootDBInstance</code> for every DB instance in your DB cluster that you
         * want the updated static parameter to apply to.</p> <p>For more information on
         * Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ResetDBClusterParameterGroup">AWS
         * API Reference</a></p>
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
         * restart or <code>RebootDBInstance</code> request. You must call
         * <code>RebootDBInstance</code> for every DB instance in your DB cluster that you
         * want the updated static parameter to apply to.</p> <p>For more information on
         * Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ResetDBClusterParameterGroup">AWS
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
         * and <code>ResetAllParameters</code> parameters. </p> <p> When resetting the
         * entire group, dynamic parameters are updated immediately and static parameters
         * are set to <code>pending-reboot</code> to take effect on the next DB instance
         * restart or <code>RebootDBInstance</code> request. You must call
         * <code>RebootDBInstance</code> for every DB instance in your DB cluster that you
         * want the updated static parameter to apply to.</p> <p>For more information on
         * Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ResetDBClusterParameterGroup">AWS
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
         * <code>RebootDBInstance</code> request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ResetDBParameterGroup">AWS
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
         * <code>RebootDBInstance</code> request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ResetDBParameterGroup">AWS
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
         * <code>RebootDBInstance</code> request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ResetDBParameterGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetDBParameterGroupAsync(const Model::ResetDBParameterGroupRequest& request, const ResetDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Aurora DB cluster from MySQL data stored in an Amazon S3
         * bucket. Amazon RDS must be authorized to access the Amazon S3 bucket and the
         * data must be created using the Percona XtraBackup utility as described in <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Migrating.ExtMySQL.html#AuroraMySQL.Migrating.ExtMySQL.S3">
         * Migrating Data from MySQL by Using an Amazon S3 Bucket</a> in the <i>Amazon
         * Aurora User Guide</i>.</p>  <p>This action only restores the DB cluster,
         * not the DB instances for that DB cluster. You must invoke the
         * <code>CreateDBInstance</code> action to create DB instances for the restored DB
         * cluster, specifying the identifier of the restored DB cluster in
         * <code>DBClusterIdentifier</code>. You can create DB instances only after the
         * <code>RestoreDBClusterFromS3</code> action has completed and the DB cluster is
         * available.</p>  <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters. The source DB engine must be
         * MySQL.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBClusterFromS3">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreDBClusterFromS3Outcome RestoreDBClusterFromS3(const Model::RestoreDBClusterFromS3Request& request) const;

        /**
         * <p>Creates an Amazon Aurora DB cluster from MySQL data stored in an Amazon S3
         * bucket. Amazon RDS must be authorized to access the Amazon S3 bucket and the
         * data must be created using the Percona XtraBackup utility as described in <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Migrating.ExtMySQL.html#AuroraMySQL.Migrating.ExtMySQL.S3">
         * Migrating Data from MySQL by Using an Amazon S3 Bucket</a> in the <i>Amazon
         * Aurora User Guide</i>.</p>  <p>This action only restores the DB cluster,
         * not the DB instances for that DB cluster. You must invoke the
         * <code>CreateDBInstance</code> action to create DB instances for the restored DB
         * cluster, specifying the identifier of the restored DB cluster in
         * <code>DBClusterIdentifier</code>. You can create DB instances only after the
         * <code>RestoreDBClusterFromS3</code> action has completed and the DB cluster is
         * available.</p>  <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters. The source DB engine must be
         * MySQL.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBClusterFromS3">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreDBClusterFromS3OutcomeCallable RestoreDBClusterFromS3Callable(const Model::RestoreDBClusterFromS3Request& request) const;

        /**
         * <p>Creates an Amazon Aurora DB cluster from MySQL data stored in an Amazon S3
         * bucket. Amazon RDS must be authorized to access the Amazon S3 bucket and the
         * data must be created using the Percona XtraBackup utility as described in <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Migrating.ExtMySQL.html#AuroraMySQL.Migrating.ExtMySQL.S3">
         * Migrating Data from MySQL by Using an Amazon S3 Bucket</a> in the <i>Amazon
         * Aurora User Guide</i>.</p>  <p>This action only restores the DB cluster,
         * not the DB instances for that DB cluster. You must invoke the
         * <code>CreateDBInstance</code> action to create DB instances for the restored DB
         * cluster, specifying the identifier of the restored DB cluster in
         * <code>DBClusterIdentifier</code>. You can create DB instances only after the
         * <code>RestoreDBClusterFromS3</code> action has completed and the DB cluster is
         * available.</p>  <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters. The source DB engine must be
         * MySQL.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBClusterFromS3">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreDBClusterFromS3Async(const Model::RestoreDBClusterFromS3Request& request, const RestoreDBClusterFromS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new DB cluster from a DB snapshot or DB cluster snapshot. This
         * action only applies to Aurora DB clusters.</p> <p>The target DB cluster is
         * created from the source snapshot with a default configuration. If you don't
         * specify a security group, the new DB cluster is associated with the default
         * security group.</p>  <p>This action only restores the DB cluster, not the
         * DB instances for that DB cluster. You must invoke the
         * <code>CreateDBInstance</code> action to create DB instances for the restored DB
         * cluster, specifying the identifier of the restored DB cluster in
         * <code>DBClusterIdentifier</code>. You can create DB instances only after the
         * <code>RestoreDBClusterFromSnapshot</code> action has completed and the DB
         * cluster is available.</p>  <p>For more information on Amazon Aurora, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBClusterFromSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreDBClusterFromSnapshotOutcome RestoreDBClusterFromSnapshot(const Model::RestoreDBClusterFromSnapshotRequest& request) const;

        /**
         * <p>Creates a new DB cluster from a DB snapshot or DB cluster snapshot. This
         * action only applies to Aurora DB clusters.</p> <p>The target DB cluster is
         * created from the source snapshot with a default configuration. If you don't
         * specify a security group, the new DB cluster is associated with the default
         * security group.</p>  <p>This action only restores the DB cluster, not the
         * DB instances for that DB cluster. You must invoke the
         * <code>CreateDBInstance</code> action to create DB instances for the restored DB
         * cluster, specifying the identifier of the restored DB cluster in
         * <code>DBClusterIdentifier</code>. You can create DB instances only after the
         * <code>RestoreDBClusterFromSnapshot</code> action has completed and the DB
         * cluster is available.</p>  <p>For more information on Amazon Aurora, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBClusterFromSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreDBClusterFromSnapshotOutcomeCallable RestoreDBClusterFromSnapshotCallable(const Model::RestoreDBClusterFromSnapshotRequest& request) const;

        /**
         * <p>Creates a new DB cluster from a DB snapshot or DB cluster snapshot. This
         * action only applies to Aurora DB clusters.</p> <p>The target DB cluster is
         * created from the source snapshot with a default configuration. If you don't
         * specify a security group, the new DB cluster is associated with the default
         * security group.</p>  <p>This action only restores the DB cluster, not the
         * DB instances for that DB cluster. You must invoke the
         * <code>CreateDBInstance</code> action to create DB instances for the restored DB
         * cluster, specifying the identifier of the restored DB cluster in
         * <code>DBClusterIdentifier</code>. You can create DB instances only after the
         * <code>RestoreDBClusterFromSnapshot</code> action has completed and the DB
         * cluster is available.</p>  <p>For more information on Amazon Aurora, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBClusterFromSnapshot">AWS
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
         * except that the new DB cluster is created with the default DB security group.
         * </p>  <p>This action only restores the DB cluster, not the DB instances
         * for that DB cluster. You must invoke the <code>CreateDBInstance</code> action to
         * create DB instances for the restored DB cluster, specifying the identifier of
         * the restored DB cluster in <code>DBClusterIdentifier</code>. You can create DB
         * instances only after the <code>RestoreDBClusterToPointInTime</code> action has
         * completed and the DB cluster is available.</p>  <p>For more information
         * on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBClusterToPointInTime">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreDBClusterToPointInTimeOutcome RestoreDBClusterToPointInTime(const Model::RestoreDBClusterToPointInTimeRequest& request) const;

        /**
         * <p>Restores a DB cluster to an arbitrary point in time. Users can restore to any
         * point in time before <code>LatestRestorableTime</code> for up to
         * <code>BackupRetentionPeriod</code> days. The target DB cluster is created from
         * the source DB cluster with the same configuration as the original DB cluster,
         * except that the new DB cluster is created with the default DB security group.
         * </p>  <p>This action only restores the DB cluster, not the DB instances
         * for that DB cluster. You must invoke the <code>CreateDBInstance</code> action to
         * create DB instances for the restored DB cluster, specifying the identifier of
         * the restored DB cluster in <code>DBClusterIdentifier</code>. You can create DB
         * instances only after the <code>RestoreDBClusterToPointInTime</code> action has
         * completed and the DB cluster is available.</p>  <p>For more information
         * on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBClusterToPointInTime">AWS
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
         * except that the new DB cluster is created with the default DB security group.
         * </p>  <p>This action only restores the DB cluster, not the DB instances
         * for that DB cluster. You must invoke the <code>CreateDBInstance</code> action to
         * create DB instances for the restored DB cluster, specifying the identifier of
         * the restored DB cluster in <code>DBClusterIdentifier</code>. You can create DB
         * instances only after the <code>RestoreDBClusterToPointInTime</code> action has
         * completed and the DB cluster is available.</p>  <p>For more information
         * on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What Is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBClusterToPointInTime">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreDBClusterToPointInTimeAsync(const Model::RestoreDBClusterToPointInTimeRequest& request, const RestoreDBClusterToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new DB instance from a DB snapshot. The target database is created
         * from the source database restore point with most of the source's original
         * configuration, including the default security group and DB parameter group. By
         * default, the new DB instance is created as a Single-AZ deployment, except when
         * the instance is a SQL Server instance that has an option group associated with
         * mirroring. In this case, the instance becomes a Multi-AZ deployment, not a
         * Single-AZ deployment.</p> <p>If you want to replace your original DB instance
         * with the new, restored DB instance, then rename your original DB instance before
         * you call the RestoreDBInstanceFromDBSnapshot action. RDS doesn't allow two DB
         * instances with the same name. After you have renamed your original DB instance
         * with a different identifier, then you can pass the original name of the DB
         * instance as the DBInstanceIdentifier in the call to the
         * RestoreDBInstanceFromDBSnapshot action. The result is that you replace the
         * original DB instance with the DB instance created from the snapshot.</p> <p>If
         * you are restoring from a shared manual DB snapshot, the
         * <code>DBSnapshotIdentifier</code> must be the ARN of the shared DB snapshot.</p>
         *  <p>This command doesn't apply to Aurora MySQL and Aurora PostgreSQL. For
         * Aurora, use <code>RestoreDBClusterFromSnapshot</code>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBInstanceFromDBSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreDBInstanceFromDBSnapshotOutcome RestoreDBInstanceFromDBSnapshot(const Model::RestoreDBInstanceFromDBSnapshotRequest& request) const;

        /**
         * <p>Creates a new DB instance from a DB snapshot. The target database is created
         * from the source database restore point with most of the source's original
         * configuration, including the default security group and DB parameter group. By
         * default, the new DB instance is created as a Single-AZ deployment, except when
         * the instance is a SQL Server instance that has an option group associated with
         * mirroring. In this case, the instance becomes a Multi-AZ deployment, not a
         * Single-AZ deployment.</p> <p>If you want to replace your original DB instance
         * with the new, restored DB instance, then rename your original DB instance before
         * you call the RestoreDBInstanceFromDBSnapshot action. RDS doesn't allow two DB
         * instances with the same name. After you have renamed your original DB instance
         * with a different identifier, then you can pass the original name of the DB
         * instance as the DBInstanceIdentifier in the call to the
         * RestoreDBInstanceFromDBSnapshot action. The result is that you replace the
         * original DB instance with the DB instance created from the snapshot.</p> <p>If
         * you are restoring from a shared manual DB snapshot, the
         * <code>DBSnapshotIdentifier</code> must be the ARN of the shared DB snapshot.</p>
         *  <p>This command doesn't apply to Aurora MySQL and Aurora PostgreSQL. For
         * Aurora, use <code>RestoreDBClusterFromSnapshot</code>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBInstanceFromDBSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreDBInstanceFromDBSnapshotOutcomeCallable RestoreDBInstanceFromDBSnapshotCallable(const Model::RestoreDBInstanceFromDBSnapshotRequest& request) const;

        /**
         * <p>Creates a new DB instance from a DB snapshot. The target database is created
         * from the source database restore point with most of the source's original
         * configuration, including the default security group and DB parameter group. By
         * default, the new DB instance is created as a Single-AZ deployment, except when
         * the instance is a SQL Server instance that has an option group associated with
         * mirroring. In this case, the instance becomes a Multi-AZ deployment, not a
         * Single-AZ deployment.</p> <p>If you want to replace your original DB instance
         * with the new, restored DB instance, then rename your original DB instance before
         * you call the RestoreDBInstanceFromDBSnapshot action. RDS doesn't allow two DB
         * instances with the same name. After you have renamed your original DB instance
         * with a different identifier, then you can pass the original name of the DB
         * instance as the DBInstanceIdentifier in the call to the
         * RestoreDBInstanceFromDBSnapshot action. The result is that you replace the
         * original DB instance with the DB instance created from the snapshot.</p> <p>If
         * you are restoring from a shared manual DB snapshot, the
         * <code>DBSnapshotIdentifier</code> must be the ARN of the shared DB snapshot.</p>
         *  <p>This command doesn't apply to Aurora MySQL and Aurora PostgreSQL. For
         * Aurora, use <code>RestoreDBClusterFromSnapshot</code>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBInstanceFromDBSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreDBInstanceFromDBSnapshotAsync(const Model::RestoreDBInstanceFromDBSnapshotRequest& request, const RestoreDBInstanceFromDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Amazon Relational Database Service (Amazon RDS) supports importing MySQL
         * databases by using backup files. You can create a backup of your on-premises
         * database, store it on Amazon Simple Storage Service (Amazon S3), and then
         * restore the backup file onto a new Amazon RDS DB instance running MySQL. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/MySQL.Procedural.Importing.html">Importing
         * Data into an Amazon RDS MySQL DB Instance</a> in the <i>Amazon RDS User
         * Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBInstanceFromS3">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreDBInstanceFromS3Outcome RestoreDBInstanceFromS3(const Model::RestoreDBInstanceFromS3Request& request) const;

        /**
         * <p>Amazon Relational Database Service (Amazon RDS) supports importing MySQL
         * databases by using backup files. You can create a backup of your on-premises
         * database, store it on Amazon Simple Storage Service (Amazon S3), and then
         * restore the backup file onto a new Amazon RDS DB instance running MySQL. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/MySQL.Procedural.Importing.html">Importing
         * Data into an Amazon RDS MySQL DB Instance</a> in the <i>Amazon RDS User
         * Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBInstanceFromS3">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreDBInstanceFromS3OutcomeCallable RestoreDBInstanceFromS3Callable(const Model::RestoreDBInstanceFromS3Request& request) const;

        /**
         * <p>Amazon Relational Database Service (Amazon RDS) supports importing MySQL
         * databases by using backup files. You can create a backup of your on-premises
         * database, store it on Amazon Simple Storage Service (Amazon S3), and then
         * restore the backup file onto a new Amazon RDS DB instance running MySQL. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/MySQL.Procedural.Importing.html">Importing
         * Data into an Amazon RDS MySQL DB Instance</a> in the <i>Amazon RDS User
         * Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBInstanceFromS3">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreDBInstanceFromS3Async(const Model::RestoreDBInstanceFromS3Request& request, const RestoreDBInstanceFromS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restores a DB instance to an arbitrary point in time. You can restore to any
         * point in time before the time identified by the LatestRestorableTime property.
         * You can restore to a point up to the number of days specified by the
         * BackupRetentionPeriod property.</p> <p>The target database is created with most
         * of the original configuration, but in a system-selected Availability Zone, with
         * the default security group, the default subnet group, and the default DB
         * parameter group. By default, the new DB instance is created as a single-AZ
         * deployment except when the instance is a SQL Server instance that has an option
         * group that is associated with mirroring; in this case, the instance becomes a
         * mirrored deployment and not a single-AZ deployment.</p>  <p>This command
         * doesn't apply to Aurora MySQL and Aurora PostgreSQL. For Aurora, use
         * <code>RestoreDBClusterToPointInTime</code>.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBInstanceToPointInTime">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreDBInstanceToPointInTimeOutcome RestoreDBInstanceToPointInTime(const Model::RestoreDBInstanceToPointInTimeRequest& request) const;

        /**
         * <p>Restores a DB instance to an arbitrary point in time. You can restore to any
         * point in time before the time identified by the LatestRestorableTime property.
         * You can restore to a point up to the number of days specified by the
         * BackupRetentionPeriod property.</p> <p>The target database is created with most
         * of the original configuration, but in a system-selected Availability Zone, with
         * the default security group, the default subnet group, and the default DB
         * parameter group. By default, the new DB instance is created as a single-AZ
         * deployment except when the instance is a SQL Server instance that has an option
         * group that is associated with mirroring; in this case, the instance becomes a
         * mirrored deployment and not a single-AZ deployment.</p>  <p>This command
         * doesn't apply to Aurora MySQL and Aurora PostgreSQL. For Aurora, use
         * <code>RestoreDBClusterToPointInTime</code>.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBInstanceToPointInTime">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreDBInstanceToPointInTimeOutcomeCallable RestoreDBInstanceToPointInTimeCallable(const Model::RestoreDBInstanceToPointInTimeRequest& request) const;

        /**
         * <p>Restores a DB instance to an arbitrary point in time. You can restore to any
         * point in time before the time identified by the LatestRestorableTime property.
         * You can restore to a point up to the number of days specified by the
         * BackupRetentionPeriod property.</p> <p>The target database is created with most
         * of the original configuration, but in a system-selected Availability Zone, with
         * the default security group, the default subnet group, and the default DB
         * parameter group. By default, the new DB instance is created as a single-AZ
         * deployment except when the instance is a SQL Server instance that has an option
         * group that is associated with mirroring; in this case, the instance becomes a
         * mirrored deployment and not a single-AZ deployment.</p>  <p>This command
         * doesn't apply to Aurora MySQL and Aurora PostgreSQL. For Aurora, use
         * <code>RestoreDBClusterToPointInTime</code>.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBInstanceToPointInTime">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreDBInstanceToPointInTimeAsync(const Model::RestoreDBInstanceToPointInTimeRequest& request, const RestoreDBInstanceToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Revokes ingress from a DBSecurityGroup for previously authorized IP ranges or
         * EC2 or VPC Security Groups. Required parameters for this API are one of CIDRIP,
         * EC2SecurityGroupId for VPC, or (EC2SecurityGroupOwnerId and either
         * EC2SecurityGroupName or EC2SecurityGroupId).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RevokeDBSecurityGroupIngress">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeDBSecurityGroupIngressOutcome RevokeDBSecurityGroupIngress(const Model::RevokeDBSecurityGroupIngressRequest& request) const;

        /**
         * <p>Revokes ingress from a DBSecurityGroup for previously authorized IP ranges or
         * EC2 or VPC Security Groups. Required parameters for this API are one of CIDRIP,
         * EC2SecurityGroupId for VPC, or (EC2SecurityGroupOwnerId and either
         * EC2SecurityGroupName or EC2SecurityGroupId).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RevokeDBSecurityGroupIngress">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokeDBSecurityGroupIngressOutcomeCallable RevokeDBSecurityGroupIngressCallable(const Model::RevokeDBSecurityGroupIngressRequest& request) const;

        /**
         * <p>Revokes ingress from a DBSecurityGroup for previously authorized IP ranges or
         * EC2 or VPC Security Groups. Required parameters for this API are one of CIDRIP,
         * EC2SecurityGroupId for VPC, or (EC2SecurityGroupOwnerId and either
         * EC2SecurityGroupName or EC2SecurityGroupId).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RevokeDBSecurityGroupIngress">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeDBSecurityGroupIngressAsync(const Model::RevokeDBSecurityGroupIngressRequest& request, const RevokeDBSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a database activity stream to monitor activity on the database. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/DBActivityStreams.html">Database
         * Activity Streams</a> in the <i>Amazon Aurora User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StartActivityStream">AWS
         * API Reference</a></p>
         */
        virtual Model::StartActivityStreamOutcome StartActivityStream(const Model::StartActivityStreamRequest& request) const;

        /**
         * <p>Starts a database activity stream to monitor activity on the database. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/DBActivityStreams.html">Database
         * Activity Streams</a> in the <i>Amazon Aurora User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StartActivityStream">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartActivityStreamOutcomeCallable StartActivityStreamCallable(const Model::StartActivityStreamRequest& request) const;

        /**
         * <p>Starts a database activity stream to monitor activity on the database. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/DBActivityStreams.html">Database
         * Activity Streams</a> in the <i>Amazon Aurora User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StartActivityStream">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartActivityStreamAsync(const Model::StartActivityStreamRequest& request, const StartActivityStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an Amazon Aurora DB cluster that was stopped using the AWS console,
         * the stop-db-cluster AWS CLI command, or the StopDBCluster action.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-cluster-stop-start.html">
         * Stopping and Starting an Aurora Cluster</a> in the <i>Amazon Aurora User
         * Guide.</i> </p>  <p>This action only applies to Aurora DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StartDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDBClusterOutcome StartDBCluster(const Model::StartDBClusterRequest& request) const;

        /**
         * <p>Starts an Amazon Aurora DB cluster that was stopped using the AWS console,
         * the stop-db-cluster AWS CLI command, or the StopDBCluster action.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-cluster-stop-start.html">
         * Stopping and Starting an Aurora Cluster</a> in the <i>Amazon Aurora User
         * Guide.</i> </p>  <p>This action only applies to Aurora DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StartDBCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDBClusterOutcomeCallable StartDBClusterCallable(const Model::StartDBClusterRequest& request) const;

        /**
         * <p>Starts an Amazon Aurora DB cluster that was stopped using the AWS console,
         * the stop-db-cluster AWS CLI command, or the StopDBCluster action.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-cluster-stop-start.html">
         * Stopping and Starting an Aurora Cluster</a> in the <i>Amazon Aurora User
         * Guide.</i> </p>  <p>This action only applies to Aurora DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StartDBCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDBClusterAsync(const Model::StartDBClusterRequest& request, const StartDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Starts an Amazon RDS DB instance that was stopped using the AWS console, the
         * stop-db-instance AWS CLI command, or the StopDBInstance action. </p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_StartInstance.html">
         * Starting an Amazon RDS DB instance That Was Previously Stopped</a> in the
         * <i>Amazon RDS User Guide.</i> </p>  <p> This command doesn't apply to
         * Aurora MySQL and Aurora PostgreSQL. For Aurora DB clusters, use
         * <code>StartDBCluster</code> instead. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StartDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDBInstanceOutcome StartDBInstance(const Model::StartDBInstanceRequest& request) const;

        /**
         * <p> Starts an Amazon RDS DB instance that was stopped using the AWS console, the
         * stop-db-instance AWS CLI command, or the StopDBInstance action. </p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_StartInstance.html">
         * Starting an Amazon RDS DB instance That Was Previously Stopped</a> in the
         * <i>Amazon RDS User Guide.</i> </p>  <p> This command doesn't apply to
         * Aurora MySQL and Aurora PostgreSQL. For Aurora DB clusters, use
         * <code>StartDBCluster</code> instead. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StartDBInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDBInstanceOutcomeCallable StartDBInstanceCallable(const Model::StartDBInstanceRequest& request) const;

        /**
         * <p> Starts an Amazon RDS DB instance that was stopped using the AWS console, the
         * stop-db-instance AWS CLI command, or the StopDBInstance action. </p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_StartInstance.html">
         * Starting an Amazon RDS DB instance That Was Previously Stopped</a> in the
         * <i>Amazon RDS User Guide.</i> </p>  <p> This command doesn't apply to
         * Aurora MySQL and Aurora PostgreSQL. For Aurora DB clusters, use
         * <code>StartDBCluster</code> instead. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StartDBInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDBInstanceAsync(const Model::StartDBInstanceRequest& request, const StartDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables replication of automated backups to a different AWS Region.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_ReplicateBackups.html">
         * Replicating Automated Backups to Another AWS Region</a> in the <i>Amazon RDS
         * User Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StartDBInstanceAutomatedBackupsReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDBInstanceAutomatedBackupsReplicationOutcome StartDBInstanceAutomatedBackupsReplication(const Model::StartDBInstanceAutomatedBackupsReplicationRequest& request) const;

        /**
         * <p>Enables replication of automated backups to a different AWS Region.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_ReplicateBackups.html">
         * Replicating Automated Backups to Another AWS Region</a> in the <i>Amazon RDS
         * User Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StartDBInstanceAutomatedBackupsReplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDBInstanceAutomatedBackupsReplicationOutcomeCallable StartDBInstanceAutomatedBackupsReplicationCallable(const Model::StartDBInstanceAutomatedBackupsReplicationRequest& request) const;

        /**
         * <p>Enables replication of automated backups to a different AWS Region.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_ReplicateBackups.html">
         * Replicating Automated Backups to Another AWS Region</a> in the <i>Amazon RDS
         * User Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StartDBInstanceAutomatedBackupsReplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDBInstanceAutomatedBackupsReplicationAsync(const Model::StartDBInstanceAutomatedBackupsReplicationRequest& request, const StartDBInstanceAutomatedBackupsReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an export of a snapshot to Amazon S3. The provided IAM role must have
         * access to the S3 bucket. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StartExportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartExportTaskOutcome StartExportTask(const Model::StartExportTaskRequest& request) const;

        /**
         * <p>Starts an export of a snapshot to Amazon S3. The provided IAM role must have
         * access to the S3 bucket. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StartExportTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartExportTaskOutcomeCallable StartExportTaskCallable(const Model::StartExportTaskRequest& request) const;

        /**
         * <p>Starts an export of a snapshot to Amazon S3. The provided IAM role must have
         * access to the S3 bucket. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StartExportTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartExportTaskAsync(const Model::StartExportTaskRequest& request, const StartExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a database activity stream that was started using the AWS console, the
         * <code>start-activity-stream</code> AWS CLI command, or the
         * <code>StartActivityStream</code> action.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/DBActivityStreams.html">Database
         * Activity Streams</a> in the <i>Amazon Aurora User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StopActivityStream">AWS
         * API Reference</a></p>
         */
        virtual Model::StopActivityStreamOutcome StopActivityStream(const Model::StopActivityStreamRequest& request) const;

        /**
         * <p>Stops a database activity stream that was started using the AWS console, the
         * <code>start-activity-stream</code> AWS CLI command, or the
         * <code>StartActivityStream</code> action.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/DBActivityStreams.html">Database
         * Activity Streams</a> in the <i>Amazon Aurora User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StopActivityStream">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopActivityStreamOutcomeCallable StopActivityStreamCallable(const Model::StopActivityStreamRequest& request) const;

        /**
         * <p>Stops a database activity stream that was started using the AWS console, the
         * <code>start-activity-stream</code> AWS CLI command, or the
         * <code>StartActivityStream</code> action.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/DBActivityStreams.html">Database
         * Activity Streams</a> in the <i>Amazon Aurora User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StopActivityStream">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopActivityStreamAsync(const Model::StopActivityStreamRequest& request, const StopActivityStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Stops an Amazon Aurora DB cluster. When you stop a DB cluster, Aurora
         * retains the DB cluster's metadata, including its endpoints and DB parameter
         * groups. Aurora also retains the transaction logs so you can do a point-in-time
         * restore if necessary. </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-cluster-stop-start.html">
         * Stopping and Starting an Aurora Cluster</a> in the <i>Amazon Aurora User
         * Guide.</i> </p>  <p>This action only applies to Aurora DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StopDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDBClusterOutcome StopDBCluster(const Model::StopDBClusterRequest& request) const;

        /**
         * <p> Stops an Amazon Aurora DB cluster. When you stop a DB cluster, Aurora
         * retains the DB cluster's metadata, including its endpoints and DB parameter
         * groups. Aurora also retains the transaction logs so you can do a point-in-time
         * restore if necessary. </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-cluster-stop-start.html">
         * Stopping and Starting an Aurora Cluster</a> in the <i>Amazon Aurora User
         * Guide.</i> </p>  <p>This action only applies to Aurora DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StopDBCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopDBClusterOutcomeCallable StopDBClusterCallable(const Model::StopDBClusterRequest& request) const;

        /**
         * <p> Stops an Amazon Aurora DB cluster. When you stop a DB cluster, Aurora
         * retains the DB cluster's metadata, including its endpoints and DB parameter
         * groups. Aurora also retains the transaction logs so you can do a point-in-time
         * restore if necessary. </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-cluster-stop-start.html">
         * Stopping and Starting an Aurora Cluster</a> in the <i>Amazon Aurora User
         * Guide.</i> </p>  <p>This action only applies to Aurora DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StopDBCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopDBClusterAsync(const Model::StopDBClusterRequest& request, const StopDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Stops an Amazon RDS DB instance. When you stop a DB instance, Amazon RDS
         * retains the DB instance's metadata, including its endpoint, DB parameter group,
         * and option group membership. Amazon RDS also retains the transaction logs so you
         * can do a point-in-time restore if necessary. </p> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_StopInstance.html">
         * Stopping an Amazon RDS DB Instance Temporarily</a> in the <i>Amazon RDS User
         * Guide.</i> </p>  <p> This command doesn't apply to Aurora MySQL and Aurora
         * PostgreSQL. For Aurora clusters, use <code>StopDBCluster</code> instead. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StopDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDBInstanceOutcome StopDBInstance(const Model::StopDBInstanceRequest& request) const;

        /**
         * <p> Stops an Amazon RDS DB instance. When you stop a DB instance, Amazon RDS
         * retains the DB instance's metadata, including its endpoint, DB parameter group,
         * and option group membership. Amazon RDS also retains the transaction logs so you
         * can do a point-in-time restore if necessary. </p> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_StopInstance.html">
         * Stopping an Amazon RDS DB Instance Temporarily</a> in the <i>Amazon RDS User
         * Guide.</i> </p>  <p> This command doesn't apply to Aurora MySQL and Aurora
         * PostgreSQL. For Aurora clusters, use <code>StopDBCluster</code> instead. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StopDBInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopDBInstanceOutcomeCallable StopDBInstanceCallable(const Model::StopDBInstanceRequest& request) const;

        /**
         * <p> Stops an Amazon RDS DB instance. When you stop a DB instance, Amazon RDS
         * retains the DB instance's metadata, including its endpoint, DB parameter group,
         * and option group membership. Amazon RDS also retains the transaction logs so you
         * can do a point-in-time restore if necessary. </p> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_StopInstance.html">
         * Stopping an Amazon RDS DB Instance Temporarily</a> in the <i>Amazon RDS User
         * Guide.</i> </p>  <p> This command doesn't apply to Aurora MySQL and Aurora
         * PostgreSQL. For Aurora clusters, use <code>StopDBCluster</code> instead. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StopDBInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopDBInstanceAsync(const Model::StopDBInstanceRequest& request, const StopDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops automated backup replication for a DB instance.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_ReplicateBackups.html">
         * Replicating Automated Backups to Another AWS Region</a> in the <i>Amazon RDS
         * User Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StopDBInstanceAutomatedBackupsReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDBInstanceAutomatedBackupsReplicationOutcome StopDBInstanceAutomatedBackupsReplication(const Model::StopDBInstanceAutomatedBackupsReplicationRequest& request) const;

        /**
         * <p>Stops automated backup replication for a DB instance.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_ReplicateBackups.html">
         * Replicating Automated Backups to Another AWS Region</a> in the <i>Amazon RDS
         * User Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StopDBInstanceAutomatedBackupsReplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopDBInstanceAutomatedBackupsReplicationOutcomeCallable StopDBInstanceAutomatedBackupsReplicationCallable(const Model::StopDBInstanceAutomatedBackupsReplicationRequest& request) const;

        /**
         * <p>Stops automated backup replication for a DB instance.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_ReplicateBackups.html">
         * Replicating Automated Backups to Another AWS Region</a> in the <i>Amazon RDS
         * User Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StopDBInstanceAutomatedBackupsReplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopDBInstanceAutomatedBackupsReplicationAsync(const Model::StopDBInstanceAutomatedBackupsReplicationRequest& request, const StopDBInstanceAutomatedBackupsReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


        void OverrideEndpoint(const Aws::String& endpoint);
    private:
        void init(const Aws::Client::ClientConfiguration& clientConfiguration);
            void AddRoleToDBClusterAsyncHelper(const Model::AddRoleToDBClusterRequest& request, const AddRoleToDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddRoleToDBInstanceAsyncHelper(const Model::AddRoleToDBInstanceRequest& request, const AddRoleToDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddSourceIdentifierToSubscriptionAsyncHelper(const Model::AddSourceIdentifierToSubscriptionRequest& request, const AddSourceIdentifierToSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddTagsToResourceAsyncHelper(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ApplyPendingMaintenanceActionAsyncHelper(const Model::ApplyPendingMaintenanceActionRequest& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AuthorizeDBSecurityGroupIngressAsyncHelper(const Model::AuthorizeDBSecurityGroupIngressRequest& request, const AuthorizeDBSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BacktrackDBClusterAsyncHelper(const Model::BacktrackDBClusterRequest& request, const BacktrackDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelExportTaskAsyncHelper(const Model::CancelExportTaskRequest& request, const CancelExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopyDBClusterParameterGroupAsyncHelper(const Model::CopyDBClusterParameterGroupRequest& request, const CopyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopyDBClusterSnapshotAsyncHelper(const Model::CopyDBClusterSnapshotRequest& request, const CopyDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopyDBParameterGroupAsyncHelper(const Model::CopyDBParameterGroupRequest& request, const CopyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopyDBSnapshotAsyncHelper(const Model::CopyDBSnapshotRequest& request, const CopyDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopyOptionGroupAsyncHelper(const Model::CopyOptionGroupRequest& request, const CopyOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCustomAvailabilityZoneAsyncHelper(const Model::CreateCustomAvailabilityZoneRequest& request, const CreateCustomAvailabilityZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDBClusterAsyncHelper(const Model::CreateDBClusterRequest& request, const CreateDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDBClusterEndpointAsyncHelper(const Model::CreateDBClusterEndpointRequest& request, const CreateDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDBClusterParameterGroupAsyncHelper(const Model::CreateDBClusterParameterGroupRequest& request, const CreateDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDBClusterSnapshotAsyncHelper(const Model::CreateDBClusterSnapshotRequest& request, const CreateDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDBInstanceAsyncHelper(const Model::CreateDBInstanceRequest& request, const CreateDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDBInstanceReadReplicaAsyncHelper(const Model::CreateDBInstanceReadReplicaRequest& request, const CreateDBInstanceReadReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDBParameterGroupAsyncHelper(const Model::CreateDBParameterGroupRequest& request, const CreateDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDBProxyAsyncHelper(const Model::CreateDBProxyRequest& request, const CreateDBProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDBProxyEndpointAsyncHelper(const Model::CreateDBProxyEndpointRequest& request, const CreateDBProxyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDBSecurityGroupAsyncHelper(const Model::CreateDBSecurityGroupRequest& request, const CreateDBSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDBSnapshotAsyncHelper(const Model::CreateDBSnapshotRequest& request, const CreateDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDBSubnetGroupAsyncHelper(const Model::CreateDBSubnetGroupRequest& request, const CreateDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEventSubscriptionAsyncHelper(const Model::CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGlobalClusterAsyncHelper(const Model::CreateGlobalClusterRequest& request, const CreateGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateOptionGroupAsyncHelper(const Model::CreateOptionGroupRequest& request, const CreateOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCustomAvailabilityZoneAsyncHelper(const Model::DeleteCustomAvailabilityZoneRequest& request, const DeleteCustomAvailabilityZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDBClusterAsyncHelper(const Model::DeleteDBClusterRequest& request, const DeleteDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDBClusterEndpointAsyncHelper(const Model::DeleteDBClusterEndpointRequest& request, const DeleteDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDBClusterParameterGroupAsyncHelper(const Model::DeleteDBClusterParameterGroupRequest& request, const DeleteDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDBClusterSnapshotAsyncHelper(const Model::DeleteDBClusterSnapshotRequest& request, const DeleteDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDBInstanceAsyncHelper(const Model::DeleteDBInstanceRequest& request, const DeleteDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDBInstanceAutomatedBackupAsyncHelper(const Model::DeleteDBInstanceAutomatedBackupRequest& request, const DeleteDBInstanceAutomatedBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDBParameterGroupAsyncHelper(const Model::DeleteDBParameterGroupRequest& request, const DeleteDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDBProxyAsyncHelper(const Model::DeleteDBProxyRequest& request, const DeleteDBProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDBProxyEndpointAsyncHelper(const Model::DeleteDBProxyEndpointRequest& request, const DeleteDBProxyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDBSecurityGroupAsyncHelper(const Model::DeleteDBSecurityGroupRequest& request, const DeleteDBSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDBSnapshotAsyncHelper(const Model::DeleteDBSnapshotRequest& request, const DeleteDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDBSubnetGroupAsyncHelper(const Model::DeleteDBSubnetGroupRequest& request, const DeleteDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEventSubscriptionAsyncHelper(const Model::DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGlobalClusterAsyncHelper(const Model::DeleteGlobalClusterRequest& request, const DeleteGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInstallationMediaAsyncHelper(const Model::DeleteInstallationMediaRequest& request, const DeleteInstallationMediaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteOptionGroupAsyncHelper(const Model::DeleteOptionGroupRequest& request, const DeleteOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterDBProxyTargetsAsyncHelper(const Model::DeregisterDBProxyTargetsRequest& request, const DeregisterDBProxyTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAccountAttributesAsyncHelper(const Model::DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCertificatesAsyncHelper(const Model::DescribeCertificatesRequest& request, const DescribeCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCustomAvailabilityZonesAsyncHelper(const Model::DescribeCustomAvailabilityZonesRequest& request, const DescribeCustomAvailabilityZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBClusterBacktracksAsyncHelper(const Model::DescribeDBClusterBacktracksRequest& request, const DescribeDBClusterBacktracksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBClusterEndpointsAsyncHelper(const Model::DescribeDBClusterEndpointsRequest& request, const DescribeDBClusterEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBClusterParameterGroupsAsyncHelper(const Model::DescribeDBClusterParameterGroupsRequest& request, const DescribeDBClusterParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBClusterParametersAsyncHelper(const Model::DescribeDBClusterParametersRequest& request, const DescribeDBClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBClusterSnapshotAttributesAsyncHelper(const Model::DescribeDBClusterSnapshotAttributesRequest& request, const DescribeDBClusterSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBClusterSnapshotsAsyncHelper(const Model::DescribeDBClusterSnapshotsRequest& request, const DescribeDBClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBClustersAsyncHelper(const Model::DescribeDBClustersRequest& request, const DescribeDBClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBEngineVersionsAsyncHelper(const Model::DescribeDBEngineVersionsRequest& request, const DescribeDBEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBInstanceAutomatedBackupsAsyncHelper(const Model::DescribeDBInstanceAutomatedBackupsRequest& request, const DescribeDBInstanceAutomatedBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBInstancesAsyncHelper(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBLogFilesAsyncHelper(const Model::DescribeDBLogFilesRequest& request, const DescribeDBLogFilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBParameterGroupsAsyncHelper(const Model::DescribeDBParameterGroupsRequest& request, const DescribeDBParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBParametersAsyncHelper(const Model::DescribeDBParametersRequest& request, const DescribeDBParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBProxiesAsyncHelper(const Model::DescribeDBProxiesRequest& request, const DescribeDBProxiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBProxyEndpointsAsyncHelper(const Model::DescribeDBProxyEndpointsRequest& request, const DescribeDBProxyEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBProxyTargetGroupsAsyncHelper(const Model::DescribeDBProxyTargetGroupsRequest& request, const DescribeDBProxyTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBProxyTargetsAsyncHelper(const Model::DescribeDBProxyTargetsRequest& request, const DescribeDBProxyTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBSecurityGroupsAsyncHelper(const Model::DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBSnapshotAttributesAsyncHelper(const Model::DescribeDBSnapshotAttributesRequest& request, const DescribeDBSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBSnapshotsAsyncHelper(const Model::DescribeDBSnapshotsRequest& request, const DescribeDBSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDBSubnetGroupsAsyncHelper(const Model::DescribeDBSubnetGroupsRequest& request, const DescribeDBSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEngineDefaultClusterParametersAsyncHelper(const Model::DescribeEngineDefaultClusterParametersRequest& request, const DescribeEngineDefaultClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEngineDefaultParametersAsyncHelper(const Model::DescribeEngineDefaultParametersRequest& request, const DescribeEngineDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventCategoriesAsyncHelper(const Model::DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventSubscriptionsAsyncHelper(const Model::DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventsAsyncHelper(const Model::DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeExportTasksAsyncHelper(const Model::DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGlobalClustersAsyncHelper(const Model::DescribeGlobalClustersRequest& request, const DescribeGlobalClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInstallationMediaAsyncHelper(const Model::DescribeInstallationMediaRequest& request, const DescribeInstallationMediaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOptionGroupOptionsAsyncHelper(const Model::DescribeOptionGroupOptionsRequest& request, const DescribeOptionGroupOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOptionGroupsAsyncHelper(const Model::DescribeOptionGroupsRequest& request, const DescribeOptionGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOrderableDBInstanceOptionsAsyncHelper(const Model::DescribeOrderableDBInstanceOptionsRequest& request, const DescribeOrderableDBInstanceOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePendingMaintenanceActionsAsyncHelper(const Model::DescribePendingMaintenanceActionsRequest& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReservedDBInstancesAsyncHelper(const Model::DescribeReservedDBInstancesRequest& request, const DescribeReservedDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReservedDBInstancesOfferingsAsyncHelper(const Model::DescribeReservedDBInstancesOfferingsRequest& request, const DescribeReservedDBInstancesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSourceRegionsAsyncHelper(const Model::DescribeSourceRegionsRequest& request, const DescribeSourceRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeValidDBInstanceModificationsAsyncHelper(const Model::DescribeValidDBInstanceModificationsRequest& request, const DescribeValidDBInstanceModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DownloadDBLogFilePortionAsyncHelper(const Model::DownloadDBLogFilePortionRequest& request, const DownloadDBLogFilePortionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void FailoverDBClusterAsyncHelper(const Model::FailoverDBClusterRequest& request, const FailoverDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void FailoverGlobalClusterAsyncHelper(const Model::FailoverGlobalClusterRequest& request, const FailoverGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportInstallationMediaAsyncHelper(const Model::ImportInstallationMediaRequest& request, const ImportInstallationMediaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyCertificatesAsyncHelper(const Model::ModifyCertificatesRequest& request, const ModifyCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyCurrentDBClusterCapacityAsyncHelper(const Model::ModifyCurrentDBClusterCapacityRequest& request, const ModifyCurrentDBClusterCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDBClusterAsyncHelper(const Model::ModifyDBClusterRequest& request, const ModifyDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDBClusterEndpointAsyncHelper(const Model::ModifyDBClusterEndpointRequest& request, const ModifyDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDBClusterParameterGroupAsyncHelper(const Model::ModifyDBClusterParameterGroupRequest& request, const ModifyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDBClusterSnapshotAttributeAsyncHelper(const Model::ModifyDBClusterSnapshotAttributeRequest& request, const ModifyDBClusterSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDBInstanceAsyncHelper(const Model::ModifyDBInstanceRequest& request, const ModifyDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDBParameterGroupAsyncHelper(const Model::ModifyDBParameterGroupRequest& request, const ModifyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDBProxyAsyncHelper(const Model::ModifyDBProxyRequest& request, const ModifyDBProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDBProxyEndpointAsyncHelper(const Model::ModifyDBProxyEndpointRequest& request, const ModifyDBProxyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDBProxyTargetGroupAsyncHelper(const Model::ModifyDBProxyTargetGroupRequest& request, const ModifyDBProxyTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDBSnapshotAsyncHelper(const Model::ModifyDBSnapshotRequest& request, const ModifyDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDBSnapshotAttributeAsyncHelper(const Model::ModifyDBSnapshotAttributeRequest& request, const ModifyDBSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDBSubnetGroupAsyncHelper(const Model::ModifyDBSubnetGroupRequest& request, const ModifyDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyEventSubscriptionAsyncHelper(const Model::ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyGlobalClusterAsyncHelper(const Model::ModifyGlobalClusterRequest& request, const ModifyGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyOptionGroupAsyncHelper(const Model::ModifyOptionGroupRequest& request, const ModifyOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PromoteReadReplicaAsyncHelper(const Model::PromoteReadReplicaRequest& request, const PromoteReadReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PromoteReadReplicaDBClusterAsyncHelper(const Model::PromoteReadReplicaDBClusterRequest& request, const PromoteReadReplicaDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PurchaseReservedDBInstancesOfferingAsyncHelper(const Model::PurchaseReservedDBInstancesOfferingRequest& request, const PurchaseReservedDBInstancesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RebootDBInstanceAsyncHelper(const Model::RebootDBInstanceRequest& request, const RebootDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterDBProxyTargetsAsyncHelper(const Model::RegisterDBProxyTargetsRequest& request, const RegisterDBProxyTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveFromGlobalClusterAsyncHelper(const Model::RemoveFromGlobalClusterRequest& request, const RemoveFromGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveRoleFromDBClusterAsyncHelper(const Model::RemoveRoleFromDBClusterRequest& request, const RemoveRoleFromDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveRoleFromDBInstanceAsyncHelper(const Model::RemoveRoleFromDBInstanceRequest& request, const RemoveRoleFromDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveSourceIdentifierFromSubscriptionAsyncHelper(const Model::RemoveSourceIdentifierFromSubscriptionRequest& request, const RemoveSourceIdentifierFromSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveTagsFromResourceAsyncHelper(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetDBClusterParameterGroupAsyncHelper(const Model::ResetDBClusterParameterGroupRequest& request, const ResetDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetDBParameterGroupAsyncHelper(const Model::ResetDBParameterGroupRequest& request, const ResetDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreDBClusterFromS3AsyncHelper(const Model::RestoreDBClusterFromS3Request& request, const RestoreDBClusterFromS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreDBClusterFromSnapshotAsyncHelper(const Model::RestoreDBClusterFromSnapshotRequest& request, const RestoreDBClusterFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreDBClusterToPointInTimeAsyncHelper(const Model::RestoreDBClusterToPointInTimeRequest& request, const RestoreDBClusterToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreDBInstanceFromDBSnapshotAsyncHelper(const Model::RestoreDBInstanceFromDBSnapshotRequest& request, const RestoreDBInstanceFromDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreDBInstanceFromS3AsyncHelper(const Model::RestoreDBInstanceFromS3Request& request, const RestoreDBInstanceFromS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreDBInstanceToPointInTimeAsyncHelper(const Model::RestoreDBInstanceToPointInTimeRequest& request, const RestoreDBInstanceToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RevokeDBSecurityGroupIngressAsyncHelper(const Model::RevokeDBSecurityGroupIngressRequest& request, const RevokeDBSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartActivityStreamAsyncHelper(const Model::StartActivityStreamRequest& request, const StartActivityStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartDBClusterAsyncHelper(const Model::StartDBClusterRequest& request, const StartDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartDBInstanceAsyncHelper(const Model::StartDBInstanceRequest& request, const StartDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartDBInstanceAutomatedBackupsReplicationAsyncHelper(const Model::StartDBInstanceAutomatedBackupsReplicationRequest& request, const StartDBInstanceAutomatedBackupsReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartExportTaskAsyncHelper(const Model::StartExportTaskRequest& request, const StartExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopActivityStreamAsyncHelper(const Model::StopActivityStreamRequest& request, const StopActivityStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopDBClusterAsyncHelper(const Model::StopDBClusterRequest& request, const StopDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopDBInstanceAsyncHelper(const Model::StopDBInstanceRequest& request, const StopDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopDBInstanceAutomatedBackupsReplicationAsyncHelper(const Model::StopDBInstanceAutomatedBackupsReplicationRequest& request, const StopDBInstanceAutomatedBackupsReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

        Aws::String m_uri;
        Aws::String m_configScheme;
        bool m_useDualStack;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
    };

    } // namespace RDS
} // namespace Aws
