/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/docdb/model/ServerlessV2ScalingConfigurationInfo.h>
#include <aws/docdb/model/ClusterMasterUserSecret.h>
#include <aws/docdb/model/DBClusterMember.h>
#include <aws/docdb/model/VpcSecurityGroupMembership.h>
#include <aws/docdb/model/DBClusterRole.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace DocDB
{
namespace Model
{

  /**
   * <p>Detailed information about a cluster. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DBCluster">AWS API
   * Reference</a></p>
   */
  class DBCluster
  {
  public:
    AWS_DOCDB_API DBCluster() = default;
    AWS_DOCDB_API DBCluster(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_DOCDB_API DBCluster& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_DOCDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_DOCDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Provides the list of Amazon EC2 Availability Zones that instances in the
     * cluster can be created in.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    DBCluster& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = Aws::String>
    DBCluster& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the number of days for which automatic snapshots are retained.</p>
     */
    inline int GetBackupRetentionPeriod() const { return m_backupRetentionPeriod; }
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }
    inline DBCluster& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a user-supplied cluster identifier. This identifier is the unique
     * key that identifies a cluster.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const { return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    template<typename DBClusterIdentifierT = Aws::String>
    void SetDBClusterIdentifier(DBClusterIdentifierT&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::forward<DBClusterIdentifierT>(value); }
    template<typename DBClusterIdentifierT = Aws::String>
    DBCluster& WithDBClusterIdentifier(DBClusterIdentifierT&& value) { SetDBClusterIdentifier(std::forward<DBClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the cluster parameter group for the cluster.</p>
     */
    inline const Aws::String& GetDBClusterParameterGroup() const { return m_dBClusterParameterGroup; }
    inline bool DBClusterParameterGroupHasBeenSet() const { return m_dBClusterParameterGroupHasBeenSet; }
    template<typename DBClusterParameterGroupT = Aws::String>
    void SetDBClusterParameterGroup(DBClusterParameterGroupT&& value) { m_dBClusterParameterGroupHasBeenSet = true; m_dBClusterParameterGroup = std::forward<DBClusterParameterGroupT>(value); }
    template<typename DBClusterParameterGroupT = Aws::String>
    DBCluster& WithDBClusterParameterGroup(DBClusterParameterGroupT&& value) { SetDBClusterParameterGroup(std::forward<DBClusterParameterGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies information on the subnet group that is associated with the
     * cluster, including the name, description, and subnets in the subnet group.</p>
     */
    inline const Aws::String& GetDBSubnetGroup() const { return m_dBSubnetGroup; }
    inline bool DBSubnetGroupHasBeenSet() const { return m_dBSubnetGroupHasBeenSet; }
    template<typename DBSubnetGroupT = Aws::String>
    void SetDBSubnetGroup(DBSubnetGroupT&& value) { m_dBSubnetGroupHasBeenSet = true; m_dBSubnetGroup = std::forward<DBSubnetGroupT>(value); }
    template<typename DBSubnetGroupT = Aws::String>
    DBCluster& WithDBSubnetGroup(DBSubnetGroupT&& value) { SetDBSubnetGroup(std::forward<DBSubnetGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the current state of this cluster.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DBCluster& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the progress of the operation as a percentage.</p>
     */
    inline const Aws::String& GetPercentProgress() const { return m_percentProgress; }
    inline bool PercentProgressHasBeenSet() const { return m_percentProgressHasBeenSet; }
    template<typename PercentProgressT = Aws::String>
    void SetPercentProgress(PercentProgressT&& value) { m_percentProgressHasBeenSet = true; m_percentProgress = std::forward<PercentProgressT>(value); }
    template<typename PercentProgressT = Aws::String>
    DBCluster& WithPercentProgress(PercentProgressT&& value) { SetPercentProgress(std::forward<PercentProgressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The earliest time to which a database can be restored with point-in-time
     * restore.</p>
     */
    inline const Aws::Utils::DateTime& GetEarliestRestorableTime() const { return m_earliestRestorableTime; }
    inline bool EarliestRestorableTimeHasBeenSet() const { return m_earliestRestorableTimeHasBeenSet; }
    template<typename EarliestRestorableTimeT = Aws::Utils::DateTime>
    void SetEarliestRestorableTime(EarliestRestorableTimeT&& value) { m_earliestRestorableTimeHasBeenSet = true; m_earliestRestorableTime = std::forward<EarliestRestorableTimeT>(value); }
    template<typename EarliestRestorableTimeT = Aws::Utils::DateTime>
    DBCluster& WithEarliestRestorableTime(EarliestRestorableTimeT&& value) { SetEarliestRestorableTime(std::forward<EarliestRestorableTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the connection endpoint for the primary instance of the
     * cluster.</p>
     */
    inline const Aws::String& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = Aws::String>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Aws::String>
    DBCluster& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reader endpoint for the cluster. The reader endpoint for a cluster load
     * balances connections across the Amazon DocumentDB replicas that are available in
     * a cluster. As clients request new connections to the reader endpoint, Amazon
     * DocumentDB distributes the connection requests among the Amazon DocumentDB
     * replicas in the cluster. This functionality can help balance your read workload
     * across multiple Amazon DocumentDB replicas in your cluster. </p> <p>If a
     * failover occurs, and the Amazon DocumentDB replica that you are connected to is
     * promoted to be the primary instance, your connection is dropped. To continue
     * sending your read workload to other Amazon DocumentDB replicas in the cluster,
     * you can then reconnect to the reader endpoint.</p>
     */
    inline const Aws::String& GetReaderEndpoint() const { return m_readerEndpoint; }
    inline bool ReaderEndpointHasBeenSet() const { return m_readerEndpointHasBeenSet; }
    template<typename ReaderEndpointT = Aws::String>
    void SetReaderEndpoint(ReaderEndpointT&& value) { m_readerEndpointHasBeenSet = true; m_readerEndpoint = std::forward<ReaderEndpointT>(value); }
    template<typename ReaderEndpointT = Aws::String>
    DBCluster& WithReaderEndpoint(ReaderEndpointT&& value) { SetReaderEndpoint(std::forward<ReaderEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the cluster has instances in multiple Availability
     * Zones.</p>
     */
    inline bool GetMultiAZ() const { return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline DBCluster& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the name of the database engine to be used for this cluster.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    DBCluster& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the database engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    DBCluster& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestRestorableTime() const { return m_latestRestorableTime; }
    inline bool LatestRestorableTimeHasBeenSet() const { return m_latestRestorableTimeHasBeenSet; }
    template<typename LatestRestorableTimeT = Aws::Utils::DateTime>
    void SetLatestRestorableTime(LatestRestorableTimeT&& value) { m_latestRestorableTimeHasBeenSet = true; m_latestRestorableTime = std::forward<LatestRestorableTimeT>(value); }
    template<typename LatestRestorableTimeT = Aws::Utils::DateTime>
    DBCluster& WithLatestRestorableTime(LatestRestorableTimeT&& value) { SetLatestRestorableTime(std::forward<LatestRestorableTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the port that the database engine is listening on.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline DBCluster& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the master user name for the cluster.</p>
     */
    inline const Aws::String& GetMasterUsername() const { return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    template<typename MasterUsernameT = Aws::String>
    void SetMasterUsername(MasterUsernameT&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::forward<MasterUsernameT>(value); }
    template<typename MasterUsernameT = Aws::String>
    DBCluster& WithMasterUsername(MasterUsernameT&& value) { SetMasterUsername(std::forward<MasterUsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the daily time range during which automated backups are created if
     * automated backups are enabled, as determined by the
     * <code>BackupRetentionPeriod</code>. </p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const { return m_preferredBackupWindow; }
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }
    template<typename PreferredBackupWindowT = Aws::String>
    void SetPreferredBackupWindow(PreferredBackupWindowT&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::forward<PreferredBackupWindowT>(value); }
    template<typename PreferredBackupWindowT = Aws::String>
    DBCluster& WithPreferredBackupWindow(PreferredBackupWindowT&& value) { SetPreferredBackupWindow(std::forward<PreferredBackupWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    DBCluster& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the identifier of the source cluster if this cluster is a secondary
     * cluster.</p>
     */
    inline const Aws::String& GetReplicationSourceIdentifier() const { return m_replicationSourceIdentifier; }
    inline bool ReplicationSourceIdentifierHasBeenSet() const { return m_replicationSourceIdentifierHasBeenSet; }
    template<typename ReplicationSourceIdentifierT = Aws::String>
    void SetReplicationSourceIdentifier(ReplicationSourceIdentifierT&& value) { m_replicationSourceIdentifierHasBeenSet = true; m_replicationSourceIdentifier = std::forward<ReplicationSourceIdentifierT>(value); }
    template<typename ReplicationSourceIdentifierT = Aws::String>
    DBCluster& WithReplicationSourceIdentifier(ReplicationSourceIdentifierT&& value) { SetReplicationSourceIdentifier(std::forward<ReplicationSourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains one or more identifiers of the secondary clusters that are
     * associated with this cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadReplicaIdentifiers() const { return m_readReplicaIdentifiers; }
    inline bool ReadReplicaIdentifiersHasBeenSet() const { return m_readReplicaIdentifiersHasBeenSet; }
    template<typename ReadReplicaIdentifiersT = Aws::Vector<Aws::String>>
    void SetReadReplicaIdentifiers(ReadReplicaIdentifiersT&& value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers = std::forward<ReadReplicaIdentifiersT>(value); }
    template<typename ReadReplicaIdentifiersT = Aws::Vector<Aws::String>>
    DBCluster& WithReadReplicaIdentifiers(ReadReplicaIdentifiersT&& value) { SetReadReplicaIdentifiers(std::forward<ReadReplicaIdentifiersT>(value)); return *this;}
    template<typename ReadReplicaIdentifiersT = Aws::String>
    DBCluster& AddReadReplicaIdentifiers(ReadReplicaIdentifiersT&& value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers.emplace_back(std::forward<ReadReplicaIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides the list of instances that make up the cluster.</p>
     */
    inline const Aws::Vector<DBClusterMember>& GetDBClusterMembers() const { return m_dBClusterMembers; }
    inline bool DBClusterMembersHasBeenSet() const { return m_dBClusterMembersHasBeenSet; }
    template<typename DBClusterMembersT = Aws::Vector<DBClusterMember>>
    void SetDBClusterMembers(DBClusterMembersT&& value) { m_dBClusterMembersHasBeenSet = true; m_dBClusterMembers = std::forward<DBClusterMembersT>(value); }
    template<typename DBClusterMembersT = Aws::Vector<DBClusterMember>>
    DBCluster& WithDBClusterMembers(DBClusterMembersT&& value) { SetDBClusterMembers(std::forward<DBClusterMembersT>(value)); return *this;}
    template<typename DBClusterMembersT = DBClusterMember>
    DBCluster& AddDBClusterMembers(DBClusterMembersT&& value) { m_dBClusterMembersHasBeenSet = true; m_dBClusterMembers.emplace_back(std::forward<DBClusterMembersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides a list of virtual private cloud (VPC) security groups that the
     * cluster belongs to.</p>
     */
    inline const Aws::Vector<VpcSecurityGroupMembership>& GetVpcSecurityGroups() const { return m_vpcSecurityGroups; }
    inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }
    template<typename VpcSecurityGroupsT = Aws::Vector<VpcSecurityGroupMembership>>
    void SetVpcSecurityGroups(VpcSecurityGroupsT&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = std::forward<VpcSecurityGroupsT>(value); }
    template<typename VpcSecurityGroupsT = Aws::Vector<VpcSecurityGroupMembership>>
    DBCluster& WithVpcSecurityGroups(VpcSecurityGroupsT&& value) { SetVpcSecurityGroups(std::forward<VpcSecurityGroupsT>(value)); return *this;}
    template<typename VpcSecurityGroupsT = VpcSecurityGroupMembership>
    DBCluster& AddVpcSecurityGroups(VpcSecurityGroupsT&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.emplace_back(std::forward<VpcSecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
    template<typename HostedZoneIdT = Aws::String>
    void SetHostedZoneId(HostedZoneIdT&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::forward<HostedZoneIdT>(value); }
    template<typename HostedZoneIdT = Aws::String>
    DBCluster& WithHostedZoneId(HostedZoneIdT&& value) { SetHostedZoneId(std::forward<HostedZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the cluster is encrypted.</p>
     */
    inline bool GetStorageEncrypted() const { return m_storageEncrypted; }
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }
    inline DBCluster& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>StorageEncrypted</code> is <code>true</code>, the KMS key identifier
     * for the encrypted cluster.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    DBCluster& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the cluster.
     * This identifier is found in CloudTrail log entries whenever the KMS key for the
     * cluster is accessed.</p>
     */
    inline const Aws::String& GetDbClusterResourceId() const { return m_dbClusterResourceId; }
    inline bool DbClusterResourceIdHasBeenSet() const { return m_dbClusterResourceIdHasBeenSet; }
    template<typename DbClusterResourceIdT = Aws::String>
    void SetDbClusterResourceId(DbClusterResourceIdT&& value) { m_dbClusterResourceIdHasBeenSet = true; m_dbClusterResourceId = std::forward<DbClusterResourceIdT>(value); }
    template<typename DbClusterResourceIdT = Aws::String>
    DBCluster& WithDbClusterResourceId(DbClusterResourceIdT&& value) { SetDbClusterResourceId(std::forward<DbClusterResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the cluster.</p>
     */
    inline const Aws::String& GetDBClusterArn() const { return m_dBClusterArn; }
    inline bool DBClusterArnHasBeenSet() const { return m_dBClusterArnHasBeenSet; }
    template<typename DBClusterArnT = Aws::String>
    void SetDBClusterArn(DBClusterArnT&& value) { m_dBClusterArnHasBeenSet = true; m_dBClusterArn = std::forward<DBClusterArnT>(value); }
    template<typename DBClusterArnT = Aws::String>
    DBCluster& WithDBClusterArn(DBClusterArnT&& value) { SetDBClusterArn(std::forward<DBClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a list of the Identity and Access Management (IAM) roles that are
     * associated with the cluster. (IAM) roles that are associated with a cluster
     * grant permission for the cluster to access other Amazon Web Services services on
     * your behalf.</p>
     */
    inline const Aws::Vector<DBClusterRole>& GetAssociatedRoles() const { return m_associatedRoles; }
    inline bool AssociatedRolesHasBeenSet() const { return m_associatedRolesHasBeenSet; }
    template<typename AssociatedRolesT = Aws::Vector<DBClusterRole>>
    void SetAssociatedRoles(AssociatedRolesT&& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles = std::forward<AssociatedRolesT>(value); }
    template<typename AssociatedRolesT = Aws::Vector<DBClusterRole>>
    DBCluster& WithAssociatedRoles(AssociatedRolesT&& value) { SetAssociatedRoles(std::forward<AssociatedRolesT>(value)); return *this;}
    template<typename AssociatedRolesT = DBClusterRole>
    DBCluster& AddAssociatedRoles(AssociatedRolesT&& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles.emplace_back(std::forward<AssociatedRolesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the clone group to which the DB cluster is associated.</p>
     */
    inline const Aws::String& GetCloneGroupId() const { return m_cloneGroupId; }
    inline bool CloneGroupIdHasBeenSet() const { return m_cloneGroupIdHasBeenSet; }
    template<typename CloneGroupIdT = Aws::String>
    void SetCloneGroupId(CloneGroupIdT&& value) { m_cloneGroupIdHasBeenSet = true; m_cloneGroupId = std::forward<CloneGroupIdT>(value); }
    template<typename CloneGroupIdT = Aws::String>
    DBCluster& WithCloneGroupId(CloneGroupIdT&& value) { SetCloneGroupId(std::forward<CloneGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the time when the cluster was created, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetClusterCreateTime() const { return m_clusterCreateTime; }
    inline bool ClusterCreateTimeHasBeenSet() const { return m_clusterCreateTimeHasBeenSet; }
    template<typename ClusterCreateTimeT = Aws::Utils::DateTime>
    void SetClusterCreateTime(ClusterCreateTimeT&& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = std::forward<ClusterCreateTimeT>(value); }
    template<typename ClusterCreateTimeT = Aws::Utils::DateTime>
    DBCluster& WithClusterCreateTime(ClusterCreateTimeT&& value) { SetClusterCreateTime(std::forward<ClusterCreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of log types that this cluster is configured to export to Amazon
     * CloudWatch Logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledCloudwatchLogsExports() const { return m_enabledCloudwatchLogsExports; }
    inline bool EnabledCloudwatchLogsExportsHasBeenSet() const { return m_enabledCloudwatchLogsExportsHasBeenSet; }
    template<typename EnabledCloudwatchLogsExportsT = Aws::Vector<Aws::String>>
    void SetEnabledCloudwatchLogsExports(EnabledCloudwatchLogsExportsT&& value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports = std::forward<EnabledCloudwatchLogsExportsT>(value); }
    template<typename EnabledCloudwatchLogsExportsT = Aws::Vector<Aws::String>>
    DBCluster& WithEnabledCloudwatchLogsExports(EnabledCloudwatchLogsExportsT&& value) { SetEnabledCloudwatchLogsExports(std::forward<EnabledCloudwatchLogsExportsT>(value)); return *this;}
    template<typename EnabledCloudwatchLogsExportsT = Aws::String>
    DBCluster& AddEnabledCloudwatchLogsExports(EnabledCloudwatchLogsExportsT&& value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports.emplace_back(std::forward<EnabledCloudwatchLogsExportsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether this cluster can be deleted. If
     * <code>DeletionProtection</code> is enabled, the cluster cannot be deleted unless
     * it is modified and <code>DeletionProtection</code> is disabled.
     * <code>DeletionProtection</code> protects clusters from being accidentally
     * deleted.</p>
     */
    inline bool GetDeletionProtection() const { return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline DBCluster& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Storage type associated with your cluster</p> <p>For information on storage
     * types for Amazon DocumentDB clusters, see Cluster storage configurations in the
     * <i>Amazon DocumentDB Developer Guide</i>.</p> <p>Valid values for storage type -
     * <code>standard | iopt1</code> </p> <p>Default value is <code>standard </code>
     * </p>
     */
    inline const Aws::String& GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    template<typename StorageTypeT = Aws::String>
    void SetStorageType(StorageTypeT&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::forward<StorageTypeT>(value); }
    template<typename StorageTypeT = Aws::String>
    DBCluster& WithStorageType(StorageTypeT&& value) { SetStorageType(std::forward<StorageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scaling configuration of an Amazon DocumentDB Serverless cluster.</p>
     */
    inline const ServerlessV2ScalingConfigurationInfo& GetServerlessV2ScalingConfiguration() const { return m_serverlessV2ScalingConfiguration; }
    inline bool ServerlessV2ScalingConfigurationHasBeenSet() const { return m_serverlessV2ScalingConfigurationHasBeenSet; }
    template<typename ServerlessV2ScalingConfigurationT = ServerlessV2ScalingConfigurationInfo>
    void SetServerlessV2ScalingConfiguration(ServerlessV2ScalingConfigurationT&& value) { m_serverlessV2ScalingConfigurationHasBeenSet = true; m_serverlessV2ScalingConfiguration = std::forward<ServerlessV2ScalingConfigurationT>(value); }
    template<typename ServerlessV2ScalingConfigurationT = ServerlessV2ScalingConfigurationInfo>
    DBCluster& WithServerlessV2ScalingConfiguration(ServerlessV2ScalingConfigurationT&& value) { SetServerlessV2ScalingConfiguration(std::forward<ServerlessV2ScalingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secret managed by Amazon DocumentDB in Amazon Web Services Secrets
     * Manager for the master user password.</p>
     */
    inline const ClusterMasterUserSecret& GetMasterUserSecret() const { return m_masterUserSecret; }
    inline bool MasterUserSecretHasBeenSet() const { return m_masterUserSecretHasBeenSet; }
    template<typename MasterUserSecretT = ClusterMasterUserSecret>
    void SetMasterUserSecret(MasterUserSecretT&& value) { m_masterUserSecretHasBeenSet = true; m_masterUserSecret = std::forward<MasterUserSecretT>(value); }
    template<typename MasterUserSecretT = ClusterMasterUserSecret>
    DBCluster& WithMasterUserSecret(MasterUserSecretT&& value) { SetMasterUserSecret(std::forward<MasterUserSecretT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    int m_backupRetentionPeriod{0};
    bool m_backupRetentionPeriodHasBeenSet = false;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    Aws::String m_dBClusterParameterGroup;
    bool m_dBClusterParameterGroupHasBeenSet = false;

    Aws::String m_dBSubnetGroup;
    bool m_dBSubnetGroupHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_percentProgress;
    bool m_percentProgressHasBeenSet = false;

    Aws::Utils::DateTime m_earliestRestorableTime{};
    bool m_earliestRestorableTimeHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_readerEndpoint;
    bool m_readerEndpointHasBeenSet = false;

    bool m_multiAZ{false};
    bool m_multiAZHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::Utils::DateTime m_latestRestorableTime{};
    bool m_latestRestorableTimeHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    Aws::String m_replicationSourceIdentifier;
    bool m_replicationSourceIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_readReplicaIdentifiers;
    bool m_readReplicaIdentifiersHasBeenSet = false;

    Aws::Vector<DBClusterMember> m_dBClusterMembers;
    bool m_dBClusterMembersHasBeenSet = false;

    Aws::Vector<VpcSecurityGroupMembership> m_vpcSecurityGroups;
    bool m_vpcSecurityGroupsHasBeenSet = false;

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    bool m_storageEncrypted{false};
    bool m_storageEncryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_dbClusterResourceId;
    bool m_dbClusterResourceIdHasBeenSet = false;

    Aws::String m_dBClusterArn;
    bool m_dBClusterArnHasBeenSet = false;

    Aws::Vector<DBClusterRole> m_associatedRoles;
    bool m_associatedRolesHasBeenSet = false;

    Aws::String m_cloneGroupId;
    bool m_cloneGroupIdHasBeenSet = false;

    Aws::Utils::DateTime m_clusterCreateTime{};
    bool m_clusterCreateTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_enabledCloudwatchLogsExports;
    bool m_enabledCloudwatchLogsExportsHasBeenSet = false;

    bool m_deletionProtection{false};
    bool m_deletionProtectionHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    ServerlessV2ScalingConfigurationInfo m_serverlessV2ScalingConfiguration;
    bool m_serverlessV2ScalingConfigurationHasBeenSet = false;

    ClusterMasterUserSecret m_masterUserSecret;
    bool m_masterUserSecretHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
