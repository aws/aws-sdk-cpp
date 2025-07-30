/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/DocDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Represents the input to <a>RestoreDBClusterToPointInTime</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/RestoreDBClusterToPointInTimeMessage">AWS
   * API Reference</a></p>
   */
  class RestoreDBClusterToPointInTimeRequest : public DocDBRequest
  {
  public:
    AWS_DOCDB_API RestoreDBClusterToPointInTimeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreDBClusterToPointInTime"; }

    AWS_DOCDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_DOCDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the new cluster to be created.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li> <p>The
     * first character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterIdentifier() const { return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    template<typename DBClusterIdentifierT = Aws::String>
    void SetDBClusterIdentifier(DBClusterIdentifierT&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::forward<DBClusterIdentifierT>(value); }
    template<typename DBClusterIdentifierT = Aws::String>
    RestoreDBClusterToPointInTimeRequest& WithDBClusterIdentifier(DBClusterIdentifierT&& value) { SetDBClusterIdentifier(std::forward<DBClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of restore to be performed. You can specify one of the following
     * values:</p> <ul> <li> <p> <code>full-copy</code> - The new DB cluster is
     * restored as a full copy of the source DB cluster.</p> </li> <li> <p>
     * <code>copy-on-write</code> - The new DB cluster is restored as a clone of the
     * source DB cluster.</p> </li> </ul> <p>Constraints: You can't specify
     * <code>copy-on-write</code> if the engine version of the source DB cluster is
     * earlier than 1.11.</p> <p>If you don't specify a <code>RestoreType</code> value,
     * then the new DB cluster is restored as a full copy of the source DB cluster.</p>
     */
    inline const Aws::String& GetRestoreType() const { return m_restoreType; }
    inline bool RestoreTypeHasBeenSet() const { return m_restoreTypeHasBeenSet; }
    template<typename RestoreTypeT = Aws::String>
    void SetRestoreType(RestoreTypeT&& value) { m_restoreTypeHasBeenSet = true; m_restoreType = std::forward<RestoreTypeT>(value); }
    template<typename RestoreTypeT = Aws::String>
    RestoreDBClusterToPointInTimeRequest& WithRestoreType(RestoreTypeT&& value) { SetRestoreType(std::forward<RestoreTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the source cluster from which to restore.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * <code>DBCluster</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceDBClusterIdentifier() const { return m_sourceDBClusterIdentifier; }
    inline bool SourceDBClusterIdentifierHasBeenSet() const { return m_sourceDBClusterIdentifierHasBeenSet; }
    template<typename SourceDBClusterIdentifierT = Aws::String>
    void SetSourceDBClusterIdentifier(SourceDBClusterIdentifierT&& value) { m_sourceDBClusterIdentifierHasBeenSet = true; m_sourceDBClusterIdentifier = std::forward<SourceDBClusterIdentifierT>(value); }
    template<typename SourceDBClusterIdentifierT = Aws::String>
    RestoreDBClusterToPointInTimeRequest& WithSourceDBClusterIdentifier(SourceDBClusterIdentifierT&& value) { SetSourceDBClusterIdentifier(std::forward<SourceDBClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time to restore the cluster to.</p> <p>Valid values: A time in
     * Universal Coordinated Time (UTC) format.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be before the latest restorable time for the instance.</p> </li> <li>
     * <p>Must be specified if the <code>UseLatestRestorableTime</code> parameter is
     * not provided.</p> </li> <li> <p>Cannot be specified if the
     * <code>UseLatestRestorableTime</code> parameter is <code>true</code>.</p> </li>
     * <li> <p>Cannot be specified if the <code>RestoreType</code> parameter is
     * <code>copy-on-write</code>.</p> </li> </ul> <p>Example:
     * <code>2015-03-07T23:45:00Z</code> </p>
     */
    inline const Aws::Utils::DateTime& GetRestoreToTime() const { return m_restoreToTime; }
    inline bool RestoreToTimeHasBeenSet() const { return m_restoreToTimeHasBeenSet; }
    template<typename RestoreToTimeT = Aws::Utils::DateTime>
    void SetRestoreToTime(RestoreToTimeT&& value) { m_restoreToTimeHasBeenSet = true; m_restoreToTime = std::forward<RestoreToTimeT>(value); }
    template<typename RestoreToTimeT = Aws::Utils::DateTime>
    RestoreDBClusterToPointInTimeRequest& WithRestoreToTime(RestoreToTimeT&& value) { SetRestoreToTime(std::forward<RestoreToTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that is set to <code>true</code> to restore the cluster to the latest
     * restorable backup time, and <code>false</code> otherwise. </p> <p>Default:
     * <code>false</code> </p> <p>Constraints: Cannot be specified if the
     * <code>RestoreToTime</code> parameter is provided.</p>
     */
    inline bool GetUseLatestRestorableTime() const { return m_useLatestRestorableTime; }
    inline bool UseLatestRestorableTimeHasBeenSet() const { return m_useLatestRestorableTimeHasBeenSet; }
    inline void SetUseLatestRestorableTime(bool value) { m_useLatestRestorableTimeHasBeenSet = true; m_useLatestRestorableTime = value; }
    inline RestoreDBClusterToPointInTimeRequest& WithUseLatestRestorableTime(bool value) { SetUseLatestRestorableTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which the new cluster accepts connections.</p>
     * <p>Constraints: Must be a value from <code>1150</code> to <code>65535</code>.
     * </p> <p>Default: The default port for the engine.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline RestoreDBClusterToPointInTimeRequest& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet group name to use for the new cluster.</p> <p>Constraints: If
     * provided, must match the name of an existing <code>DBSubnetGroup</code>.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const { return m_dBSubnetGroupName; }
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }
    template<typename DBSubnetGroupNameT = Aws::String>
    void SetDBSubnetGroupName(DBSubnetGroupNameT&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::forward<DBSubnetGroupNameT>(value); }
    template<typename DBSubnetGroupNameT = Aws::String>
    RestoreDBClusterToPointInTimeRequest& WithDBSubnetGroupName(DBSubnetGroupNameT&& value) { SetDBSubnetGroupName(std::forward<DBSubnetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of VPC security groups that the new cluster belongs to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const { return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::forward<VpcSecurityGroupIdsT>(value); }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    RestoreDBClusterToPointInTimeRequest& WithVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { SetVpcSecurityGroupIds(std::forward<VpcSecurityGroupIdsT>(value)); return *this;}
    template<typename VpcSecurityGroupIdsT = Aws::String>
    RestoreDBClusterToPointInTimeRequest& AddVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.emplace_back(std::forward<VpcSecurityGroupIdsT>(value)); return *this; }
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
    RestoreDBClusterToPointInTimeRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    RestoreDBClusterToPointInTimeRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The KMS key identifier to use when restoring an encrypted cluster from an
     * encrypted cluster.</p> <p>The KMS key identifier is the Amazon Resource Name
     * (ARN) for the KMS encryption key. If you are restoring a cluster with the same
     * Amazon Web Services account that owns the KMS encryption key used to encrypt the
     * new cluster, then you can use the KMS key alias instead of the ARN for the KMS
     * encryption key.</p> <p>You can restore to a new cluster and encrypt the new
     * cluster with an KMS key that is different from the KMS key used to encrypt the
     * source cluster. The new DB cluster is encrypted with the KMS key identified by
     * the <code>KmsKeyId</code> parameter.</p> <p>If you do not specify a value for
     * the <code>KmsKeyId</code> parameter, then the following occurs:</p> <ul> <li>
     * <p>If the cluster is encrypted, then the restored cluster is encrypted using the
     * KMS key that was used to encrypt the source cluster.</p> </li> <li> <p>If the
     * cluster is not encrypted, then the restored cluster is not encrypted.</p> </li>
     * </ul> <p>If <code>DBClusterIdentifier</code> refers to a cluster that is not
     * encrypted, then the restore request is rejected.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    RestoreDBClusterToPointInTimeRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
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
    RestoreDBClusterToPointInTimeRequest& WithEnableCloudwatchLogsExports(EnableCloudwatchLogsExportsT&& value) { SetEnableCloudwatchLogsExports(std::forward<EnableCloudwatchLogsExportsT>(value)); return *this;}
    template<typename EnableCloudwatchLogsExportsT = Aws::String>
    RestoreDBClusterToPointInTimeRequest& AddEnableCloudwatchLogsExports(EnableCloudwatchLogsExportsT&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.emplace_back(std::forward<EnableCloudwatchLogsExportsT>(value)); return *this; }
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
    inline RestoreDBClusterToPointInTimeRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
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
    RestoreDBClusterToPointInTimeRequest& WithServerlessV2ScalingConfiguration(ServerlessV2ScalingConfigurationT&& value) { SetServerlessV2ScalingConfiguration(std::forward<ServerlessV2ScalingConfigurationT>(value)); return *this;}
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
    RestoreDBClusterToPointInTimeRequest& WithStorageType(StorageTypeT&& value) { SetStorageType(std::forward<StorageTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    Aws::String m_restoreType;
    bool m_restoreTypeHasBeenSet = false;

    Aws::String m_sourceDBClusterIdentifier;
    bool m_sourceDBClusterIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_restoreToTime{};
    bool m_restoreToTimeHasBeenSet = false;

    bool m_useLatestRestorableTime{false};
    bool m_useLatestRestorableTimeHasBeenSet = false;

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

    ServerlessV2ScalingConfiguration m_serverlessV2ScalingConfiguration;
    bool m_serverlessV2ScalingConfigurationHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
