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
    AWS_DOCDB_API RestoreDBClusterToPointInTimeRequest();

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
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}
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
    inline const Aws::String& GetRestoreType() const{ return m_restoreType; }
    inline bool RestoreTypeHasBeenSet() const { return m_restoreTypeHasBeenSet; }
    inline void SetRestoreType(const Aws::String& value) { m_restoreTypeHasBeenSet = true; m_restoreType = value; }
    inline void SetRestoreType(Aws::String&& value) { m_restoreTypeHasBeenSet = true; m_restoreType = std::move(value); }
    inline void SetRestoreType(const char* value) { m_restoreTypeHasBeenSet = true; m_restoreType.assign(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithRestoreType(const Aws::String& value) { SetRestoreType(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithRestoreType(Aws::String&& value) { SetRestoreType(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithRestoreType(const char* value) { SetRestoreType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the source cluster from which to restore.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * <code>DBCluster</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceDBClusterIdentifier() const{ return m_sourceDBClusterIdentifier; }
    inline bool SourceDBClusterIdentifierHasBeenSet() const { return m_sourceDBClusterIdentifierHasBeenSet; }
    inline void SetSourceDBClusterIdentifier(const Aws::String& value) { m_sourceDBClusterIdentifierHasBeenSet = true; m_sourceDBClusterIdentifier = value; }
    inline void SetSourceDBClusterIdentifier(Aws::String&& value) { m_sourceDBClusterIdentifierHasBeenSet = true; m_sourceDBClusterIdentifier = std::move(value); }
    inline void SetSourceDBClusterIdentifier(const char* value) { m_sourceDBClusterIdentifierHasBeenSet = true; m_sourceDBClusterIdentifier.assign(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithSourceDBClusterIdentifier(const Aws::String& value) { SetSourceDBClusterIdentifier(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithSourceDBClusterIdentifier(Aws::String&& value) { SetSourceDBClusterIdentifier(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithSourceDBClusterIdentifier(const char* value) { SetSourceDBClusterIdentifier(value); return *this;}
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
    inline const Aws::Utils::DateTime& GetRestoreToTime() const{ return m_restoreToTime; }
    inline bool RestoreToTimeHasBeenSet() const { return m_restoreToTimeHasBeenSet; }
    inline void SetRestoreToTime(const Aws::Utils::DateTime& value) { m_restoreToTimeHasBeenSet = true; m_restoreToTime = value; }
    inline void SetRestoreToTime(Aws::Utils::DateTime&& value) { m_restoreToTimeHasBeenSet = true; m_restoreToTime = std::move(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithRestoreToTime(const Aws::Utils::DateTime& value) { SetRestoreToTime(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithRestoreToTime(Aws::Utils::DateTime&& value) { SetRestoreToTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that is set to <code>true</code> to restore the cluster to the latest
     * restorable backup time, and <code>false</code> otherwise. </p> <p>Default:
     * <code>false</code> </p> <p>Constraints: Cannot be specified if the
     * <code>RestoreToTime</code> parameter is provided.</p>
     */
    inline bool GetUseLatestRestorableTime() const{ return m_useLatestRestorableTime; }
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
    inline int GetPort() const{ return m_port; }
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
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of VPC security groups that the new cluster belongs to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
    inline RestoreDBClusterToPointInTimeRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }
    inline RestoreDBClusterToPointInTimeRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags to be assigned to the restored cluster.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline RestoreDBClusterToPointInTimeRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of log types that must be enabled for exporting to Amazon CloudWatch
     * Logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnableCloudwatchLogsExports() const{ return m_enableCloudwatchLogsExports; }
    inline bool EnableCloudwatchLogsExportsHasBeenSet() const { return m_enableCloudwatchLogsExportsHasBeenSet; }
    inline void SetEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = value; }
    inline void SetEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = std::move(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnableCloudwatchLogsExports(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnableCloudwatchLogsExports(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& AddEnableCloudwatchLogsExports(const Aws::String& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }
    inline RestoreDBClusterToPointInTimeRequest& AddEnableCloudwatchLogsExports(Aws::String&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(std::move(value)); return *this; }
    inline RestoreDBClusterToPointInTimeRequest& AddEnableCloudwatchLogsExports(const char* value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether this cluster can be deleted. If
     * <code>DeletionProtection</code> is enabled, the cluster cannot be deleted unless
     * it is modified and <code>DeletionProtection</code> is disabled.
     * <code>DeletionProtection</code> protects clusters from being accidentally
     * deleted.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline RestoreDBClusterToPointInTimeRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage type to associate with the DB cluster.</p> <p>For information on
     * storage types for Amazon DocumentDB clusters, see Cluster storage configurations
     * in the <i>Amazon DocumentDB Developer Guide</i>.</p> <p>Valid values for storage
     * type - <code>standard | iopt1</code> </p> <p>Default value is <code>standard
     * </code> </p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithStorageType(const char* value) { SetStorageType(value); return *this;}
    ///@}
  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    Aws::String m_restoreType;
    bool m_restoreTypeHasBeenSet = false;

    Aws::String m_sourceDBClusterIdentifier;
    bool m_sourceDBClusterIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_restoreToTime;
    bool m_restoreToTimeHasBeenSet = false;

    bool m_useLatestRestorableTime;
    bool m_useLatestRestorableTimeHasBeenSet = false;

    int m_port;
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

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
