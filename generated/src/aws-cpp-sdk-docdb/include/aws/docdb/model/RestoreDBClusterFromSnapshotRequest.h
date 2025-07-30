/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/DocDBRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/docdb/model/ServerlessV2ScalingConfiguration.h>
#include <aws/docdb/model/Tag.h>
#include <utility>

namespace Aws
{
namespace DocDB
{
namespace Model
{

  /**
   * <p>Represents the input to <a>RestoreDBClusterFromSnapshot</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/RestoreDBClusterFromSnapshotMessage">AWS
   * API Reference</a></p>
   */
  class RestoreDBClusterFromSnapshotRequest : public DocDBRequest
  {
  public:
    AWS_DOCDB_API RestoreDBClusterFromSnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreDBClusterFromSnapshot"; }

    AWS_DOCDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_DOCDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Provides the list of Amazon EC2 Availability Zones that instances in the
     * restored DB cluster can be created in.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    RestoreDBClusterFromSnapshotRequest& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = Aws::String>
    RestoreDBClusterFromSnapshotRequest& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the cluster to create from the snapshot or cluster snapshot. This
     * parameter isn't case sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li> <p>The first
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-snapshot-id</code> </p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const { return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    template<typename DBClusterIdentifierT = Aws::String>
    void SetDBClusterIdentifier(DBClusterIdentifierT&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::forward<DBClusterIdentifierT>(value); }
    template<typename DBClusterIdentifierT = Aws::String>
    RestoreDBClusterFromSnapshotRequest& WithDBClusterIdentifier(DBClusterIdentifierT&& value) { SetDBClusterIdentifier(std::forward<DBClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the snapshot or cluster snapshot to restore from.</p>
     * <p>You can use either the name or the Amazon Resource Name (ARN) to specify a
     * cluster snapshot. However, you can use only the ARN to specify a snapshot.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * snapshot.</p> </li> </ul>
     */
    inline const Aws::String& GetSnapshotIdentifier() const { return m_snapshotIdentifier; }
    inline bool SnapshotIdentifierHasBeenSet() const { return m_snapshotIdentifierHasBeenSet; }
    template<typename SnapshotIdentifierT = Aws::String>
    void SetSnapshotIdentifier(SnapshotIdentifierT&& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = std::forward<SnapshotIdentifierT>(value); }
    template<typename SnapshotIdentifierT = Aws::String>
    RestoreDBClusterFromSnapshotRequest& WithSnapshotIdentifier(SnapshotIdentifierT&& value) { SetSnapshotIdentifier(std::forward<SnapshotIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine to use for the new cluster.</p> <p>Default: The same as
     * source.</p> <p>Constraint: Must be compatible with the engine of the source.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    RestoreDBClusterFromSnapshotRequest& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the database engine to use for the new cluster.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    RestoreDBClusterFromSnapshotRequest& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which the new cluster accepts connections.</p>
     * <p>Constraints: Must be a value from <code>1150</code> to
     * <code>65535</code>.</p> <p>Default: The same port as the original cluster.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline RestoreDBClusterFromSnapshotRequest& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the subnet group to use for the new cluster.</p> <p>Constraints:
     * If provided, must match the name of an existing <code>DBSubnetGroup</code>.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const { return m_dBSubnetGroupName; }
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }
    template<typename DBSubnetGroupNameT = Aws::String>
    void SetDBSubnetGroupName(DBSubnetGroupNameT&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::forward<DBSubnetGroupNameT>(value); }
    template<typename DBSubnetGroupNameT = Aws::String>
    RestoreDBClusterFromSnapshotRequest& WithDBSubnetGroupName(DBSubnetGroupNameT&& value) { SetDBSubnetGroupName(std::forward<DBSubnetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of virtual private cloud (VPC) security groups that the new cluster
     * will belong to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const { return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::forward<VpcSecurityGroupIdsT>(value); }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    RestoreDBClusterFromSnapshotRequest& WithVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { SetVpcSecurityGroupIds(std::forward<VpcSecurityGroupIdsT>(value)); return *this;}
    template<typename VpcSecurityGroupIdsT = Aws::String>
    RestoreDBClusterFromSnapshotRequest& AddVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.emplace_back(std::forward<VpcSecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags to be assigned to the restored cluster.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    RestoreDBClusterFromSnapshotRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    RestoreDBClusterFromSnapshotRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The KMS key identifier to use when restoring an encrypted cluster from a DB
     * snapshot or cluster snapshot.</p> <p>The KMS key identifier is the Amazon
     * Resource Name (ARN) for the KMS encryption key. If you are restoring a cluster
     * with the same Amazon Web Services account that owns the KMS encryption key used
     * to encrypt the new cluster, then you can use the KMS key alias instead of the
     * ARN for the KMS encryption key.</p> <p>If you do not specify a value for the
     * <code>KmsKeyId</code> parameter, then the following occurs:</p> <ul> <li> <p>If
     * the snapshot or cluster snapshot in <code>SnapshotIdentifier</code> is
     * encrypted, then the restored cluster is encrypted using the KMS key that was
     * used to encrypt the snapshot or the cluster snapshot.</p> </li> <li> <p>If the
     * snapshot or the cluster snapshot in <code>SnapshotIdentifier</code> is not
     * encrypted, then the restored DB cluster is not encrypted.</p> </li> </ul>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    RestoreDBClusterFromSnapshotRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of log types that must be enabled for exporting to Amazon CloudWatch
     * Logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnableCloudwatchLogsExports() const { return m_enableCloudwatchLogsExports; }
    inline bool EnableCloudwatchLogsExportsHasBeenSet() const { return m_enableCloudwatchLogsExportsHasBeenSet; }
    template<typename EnableCloudwatchLogsExportsT = Aws::Vector<Aws::String>>
    void SetEnableCloudwatchLogsExports(EnableCloudwatchLogsExportsT&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = std::forward<EnableCloudwatchLogsExportsT>(value); }
    template<typename EnableCloudwatchLogsExportsT = Aws::Vector<Aws::String>>
    RestoreDBClusterFromSnapshotRequest& WithEnableCloudwatchLogsExports(EnableCloudwatchLogsExportsT&& value) { SetEnableCloudwatchLogsExports(std::forward<EnableCloudwatchLogsExportsT>(value)); return *this;}
    template<typename EnableCloudwatchLogsExportsT = Aws::String>
    RestoreDBClusterFromSnapshotRequest& AddEnableCloudwatchLogsExports(EnableCloudwatchLogsExportsT&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.emplace_back(std::forward<EnableCloudwatchLogsExportsT>(value)); return *this; }
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
    inline RestoreDBClusterFromSnapshotRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DB cluster parameter group to associate with this DB
     * cluster.</p> <p> <i>Type:</i> String.       <i>Required:</i> No.</p> <p>If this
     * argument is omitted, the default DB cluster parameter group is used. If
     * supplied, must match the name of an existing default DB cluster parameter group.
     * The string must consist of from 1 to 255 letters, numbers or hyphens. Its first
     * character must be a letter, and it cannot end with a hyphen or contain two
     * consecutive hyphens.</p>
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const { return m_dBClusterParameterGroupName; }
    inline bool DBClusterParameterGroupNameHasBeenSet() const { return m_dBClusterParameterGroupNameHasBeenSet; }
    template<typename DBClusterParameterGroupNameT = Aws::String>
    void SetDBClusterParameterGroupName(DBClusterParameterGroupNameT&& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = std::forward<DBClusterParameterGroupNameT>(value); }
    template<typename DBClusterParameterGroupNameT = Aws::String>
    RestoreDBClusterFromSnapshotRequest& WithDBClusterParameterGroupName(DBClusterParameterGroupNameT&& value) { SetDBClusterParameterGroupName(std::forward<DBClusterParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the scaling configuration of an Amazon DocumentDB Serverless
     * cluster.</p>
     */
    inline const ServerlessV2ScalingConfiguration& GetServerlessV2ScalingConfiguration() const { return m_serverlessV2ScalingConfiguration; }
    inline bool ServerlessV2ScalingConfigurationHasBeenSet() const { return m_serverlessV2ScalingConfigurationHasBeenSet; }
    template<typename ServerlessV2ScalingConfigurationT = ServerlessV2ScalingConfiguration>
    void SetServerlessV2ScalingConfiguration(ServerlessV2ScalingConfigurationT&& value) { m_serverlessV2ScalingConfigurationHasBeenSet = true; m_serverlessV2ScalingConfiguration = std::forward<ServerlessV2ScalingConfigurationT>(value); }
    template<typename ServerlessV2ScalingConfigurationT = ServerlessV2ScalingConfiguration>
    RestoreDBClusterFromSnapshotRequest& WithServerlessV2ScalingConfiguration(ServerlessV2ScalingConfigurationT&& value) { SetServerlessV2ScalingConfiguration(std::forward<ServerlessV2ScalingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage type to associate with the DB cluster.</p> <p>For information on
     * storage types for Amazon DocumentDB clusters, see Cluster storage configurations
     * in the <i>Amazon DocumentDB Developer Guide</i>.</p> <p>Valid values for storage
     * type - <code>standard | iopt1</code> </p> <p>Default value is <code>standard
     * </code> </p>
     */
    inline const Aws::String& GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    template<typename StorageTypeT = Aws::String>
    void SetStorageType(StorageTypeT&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::forward<StorageTypeT>(value); }
    template<typename StorageTypeT = Aws::String>
    RestoreDBClusterFromSnapshotRequest& WithStorageType(StorageTypeT&& value) { SetStorageType(std::forward<StorageTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    Aws::String m_snapshotIdentifier;
    bool m_snapshotIdentifierHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_enableCloudwatchLogsExports;
    bool m_enableCloudwatchLogsExportsHasBeenSet = false;

    bool m_deletionProtection{false};
    bool m_deletionProtectionHasBeenSet = false;

    Aws::String m_dBClusterParameterGroupName;
    bool m_dBClusterParameterGroupNameHasBeenSet = false;

    ServerlessV2ScalingConfiguration m_serverlessV2ScalingConfiguration;
    bool m_serverlessV2ScalingConfigurationHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
