/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/docdb/model/Endpoint.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb/model/DBSubnetGroup.h>
#include <aws/docdb/model/PendingModifiedValues.h>
#include <aws/docdb/model/CertificateDetails.h>
#include <aws/docdb/model/VpcSecurityGroupMembership.h>
#include <aws/docdb/model/DBInstanceStatusInfo.h>
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
   * <p>Detailed information about an instance. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DBInstance">AWS
   * API Reference</a></p>
   */
  class DBInstance
  {
  public:
    AWS_DOCDB_API DBInstance();
    AWS_DOCDB_API DBInstance(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_DOCDB_API DBInstance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_DOCDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_DOCDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Contains a user-provided database identifier. This identifier is the unique
     * key that identifies an instance.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }
    inline DBInstance& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}
    inline DBInstance& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}
    inline DBInstance& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the name of the compute and memory capacity class of the
     * instance.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }
    inline DBInstance& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}
    inline DBInstance& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}
    inline DBInstance& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the name of the database engine to be used for this instance.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline DBInstance& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline DBInstance& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline DBInstance& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the current state of this database.</p>
     */
    inline const Aws::String& GetDBInstanceStatus() const{ return m_dBInstanceStatus; }
    inline bool DBInstanceStatusHasBeenSet() const { return m_dBInstanceStatusHasBeenSet; }
    inline void SetDBInstanceStatus(const Aws::String& value) { m_dBInstanceStatusHasBeenSet = true; m_dBInstanceStatus = value; }
    inline void SetDBInstanceStatus(Aws::String&& value) { m_dBInstanceStatusHasBeenSet = true; m_dBInstanceStatus = std::move(value); }
    inline void SetDBInstanceStatus(const char* value) { m_dBInstanceStatusHasBeenSet = true; m_dBInstanceStatus.assign(value); }
    inline DBInstance& WithDBInstanceStatus(const Aws::String& value) { SetDBInstanceStatus(value); return *this;}
    inline DBInstance& WithDBInstanceStatus(Aws::String&& value) { SetDBInstanceStatus(std::move(value)); return *this;}
    inline DBInstance& WithDBInstanceStatus(const char* value) { SetDBInstanceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the connection endpoint.</p>
     */
    inline const Endpoint& GetEndpoint() const{ return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    inline void SetEndpoint(const Endpoint& value) { m_endpointHasBeenSet = true; m_endpoint = value; }
    inline void SetEndpoint(Endpoint&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }
    inline DBInstance& WithEndpoint(const Endpoint& value) { SetEndpoint(value); return *this;}
    inline DBInstance& WithEndpoint(Endpoint&& value) { SetEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the date and time that the instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetInstanceCreateTime() const{ return m_instanceCreateTime; }
    inline bool InstanceCreateTimeHasBeenSet() const { return m_instanceCreateTimeHasBeenSet; }
    inline void SetInstanceCreateTime(const Aws::Utils::DateTime& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = value; }
    inline void SetInstanceCreateTime(Aws::Utils::DateTime&& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = std::move(value); }
    inline DBInstance& WithInstanceCreateTime(const Aws::Utils::DateTime& value) { SetInstanceCreateTime(value); return *this;}
    inline DBInstance& WithInstanceCreateTime(Aws::Utils::DateTime&& value) { SetInstanceCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the daily time range during which automated backups are created if
     * automated backups are enabled, as determined by the
     * <code>BackupRetentionPeriod</code>. </p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }
    inline DBInstance& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}
    inline DBInstance& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}
    inline DBInstance& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the number of days for which automatic snapshots are retained.</p>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }
    inline DBInstance& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a list of VPC security group elements that the instance belongs
     * to.</p>
     */
    inline const Aws::Vector<VpcSecurityGroupMembership>& GetVpcSecurityGroups() const{ return m_vpcSecurityGroups; }
    inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }
    inline void SetVpcSecurityGroups(const Aws::Vector<VpcSecurityGroupMembership>& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = value; }
    inline void SetVpcSecurityGroups(Aws::Vector<VpcSecurityGroupMembership>&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = std::move(value); }
    inline DBInstance& WithVpcSecurityGroups(const Aws::Vector<VpcSecurityGroupMembership>& value) { SetVpcSecurityGroups(value); return *this;}
    inline DBInstance& WithVpcSecurityGroups(Aws::Vector<VpcSecurityGroupMembership>&& value) { SetVpcSecurityGroups(std::move(value)); return *this;}
    inline DBInstance& AddVpcSecurityGroups(const VpcSecurityGroupMembership& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(value); return *this; }
    inline DBInstance& AddVpcSecurityGroups(VpcSecurityGroupMembership&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the Availability Zone that the instance is located
     * in.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline DBInstance& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline DBInstance& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline DBInstance& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies information on the subnet group that is associated with the
     * instance, including the name, description, and subnets in the subnet group.</p>
     */
    inline const DBSubnetGroup& GetDBSubnetGroup() const{ return m_dBSubnetGroup; }
    inline bool DBSubnetGroupHasBeenSet() const { return m_dBSubnetGroupHasBeenSet; }
    inline void SetDBSubnetGroup(const DBSubnetGroup& value) { m_dBSubnetGroupHasBeenSet = true; m_dBSubnetGroup = value; }
    inline void SetDBSubnetGroup(DBSubnetGroup&& value) { m_dBSubnetGroupHasBeenSet = true; m_dBSubnetGroup = std::move(value); }
    inline DBInstance& WithDBSubnetGroup(const DBSubnetGroup& value) { SetDBSubnetGroup(value); return *this;}
    inline DBInstance& WithDBSubnetGroup(DBSubnetGroup&& value) { SetDBSubnetGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }
    inline DBInstance& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}
    inline DBInstance& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}
    inline DBInstance& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that changes to the instance are pending. This element is included
     * only when changes are pending. Specific changes are identified by
     * subelements.</p>
     */
    inline const PendingModifiedValues& GetPendingModifiedValues() const{ return m_pendingModifiedValues; }
    inline bool PendingModifiedValuesHasBeenSet() const { return m_pendingModifiedValuesHasBeenSet; }
    inline void SetPendingModifiedValues(const PendingModifiedValues& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = value; }
    inline void SetPendingModifiedValues(PendingModifiedValues&& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = std::move(value); }
    inline DBInstance& WithPendingModifiedValues(const PendingModifiedValues& value) { SetPendingModifiedValues(value); return *this;}
    inline DBInstance& WithPendingModifiedValues(PendingModifiedValues&& value) { SetPendingModifiedValues(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestRestorableTime() const{ return m_latestRestorableTime; }
    inline bool LatestRestorableTimeHasBeenSet() const { return m_latestRestorableTimeHasBeenSet; }
    inline void SetLatestRestorableTime(const Aws::Utils::DateTime& value) { m_latestRestorableTimeHasBeenSet = true; m_latestRestorableTime = value; }
    inline void SetLatestRestorableTime(Aws::Utils::DateTime&& value) { m_latestRestorableTimeHasBeenSet = true; m_latestRestorableTime = std::move(value); }
    inline DBInstance& WithLatestRestorableTime(const Aws::Utils::DateTime& value) { SetLatestRestorableTime(value); return *this;}
    inline DBInstance& WithLatestRestorableTime(Aws::Utils::DateTime&& value) { SetLatestRestorableTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the database engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline DBInstance& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline DBInstance& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline DBInstance& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Does not apply. This parameter does not apply to Amazon DocumentDB. Amazon
     * DocumentDB does not perform minor version upgrades regardless of the value
     * set.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline DBInstance& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported. Amazon DocumentDB does not currently support public endpoints.
     * The value of <code>PubliclyAccessible</code> is always <code>false</code>.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline DBInstance& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a read replica. If the instance is not a read replica, this is
     * blank.</p>
     */
    inline const Aws::Vector<DBInstanceStatusInfo>& GetStatusInfos() const{ return m_statusInfos; }
    inline bool StatusInfosHasBeenSet() const { return m_statusInfosHasBeenSet; }
    inline void SetStatusInfos(const Aws::Vector<DBInstanceStatusInfo>& value) { m_statusInfosHasBeenSet = true; m_statusInfos = value; }
    inline void SetStatusInfos(Aws::Vector<DBInstanceStatusInfo>&& value) { m_statusInfosHasBeenSet = true; m_statusInfos = std::move(value); }
    inline DBInstance& WithStatusInfos(const Aws::Vector<DBInstanceStatusInfo>& value) { SetStatusInfos(value); return *this;}
    inline DBInstance& WithStatusInfos(Aws::Vector<DBInstanceStatusInfo>&& value) { SetStatusInfos(std::move(value)); return *this;}
    inline DBInstance& AddStatusInfos(const DBInstanceStatusInfo& value) { m_statusInfosHasBeenSet = true; m_statusInfos.push_back(value); return *this; }
    inline DBInstance& AddStatusInfos(DBInstanceStatusInfo&& value) { m_statusInfosHasBeenSet = true; m_statusInfos.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains the name of the cluster that the instance is a member of if the
     * instance is a member of a cluster.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }
    inline DBInstance& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}
    inline DBInstance& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}
    inline DBInstance& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether or not the instance is encrypted.</p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }
    inline DBInstance& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If <code>StorageEncrypted</code> is <code>true</code>, the KMS key
     * identifier for the encrypted instance. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline DBInstance& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline DBInstance& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline DBInstance& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the instance.
     * This identifier is found in CloudTrail log entries whenever the KMS key for the
     * instance is accessed.</p>
     */
    inline const Aws::String& GetDbiResourceId() const{ return m_dbiResourceId; }
    inline bool DbiResourceIdHasBeenSet() const { return m_dbiResourceIdHasBeenSet; }
    inline void SetDbiResourceId(const Aws::String& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = value; }
    inline void SetDbiResourceId(Aws::String&& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = std::move(value); }
    inline void SetDbiResourceId(const char* value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId.assign(value); }
    inline DBInstance& WithDbiResourceId(const Aws::String& value) { SetDbiResourceId(value); return *this;}
    inline DBInstance& WithDbiResourceId(Aws::String&& value) { SetDbiResourceId(std::move(value)); return *this;}
    inline DBInstance& WithDbiResourceId(const char* value) { SetDbiResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the CA certificate for this DB instance.</p>
     */
    inline const Aws::String& GetCACertificateIdentifier() const{ return m_cACertificateIdentifier; }
    inline bool CACertificateIdentifierHasBeenSet() const { return m_cACertificateIdentifierHasBeenSet; }
    inline void SetCACertificateIdentifier(const Aws::String& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = value; }
    inline void SetCACertificateIdentifier(Aws::String&& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = std::move(value); }
    inline void SetCACertificateIdentifier(const char* value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier.assign(value); }
    inline DBInstance& WithCACertificateIdentifier(const Aws::String& value) { SetCACertificateIdentifier(value); return *this;}
    inline DBInstance& WithCACertificateIdentifier(Aws::String&& value) { SetCACertificateIdentifier(std::move(value)); return *this;}
    inline DBInstance& WithCACertificateIdentifier(const char* value) { SetCACertificateIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether to copy tags from the DB instance to snapshots
     * of the DB instance. By default, tags are not copied.</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }
    inline DBInstance& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies the order in which an Amazon DocumentDB replica is
     * promoted to the primary instance after a failure of the existing primary
     * instance.</p>
     */
    inline int GetPromotionTier() const{ return m_promotionTier; }
    inline bool PromotionTierHasBeenSet() const { return m_promotionTierHasBeenSet; }
    inline void SetPromotionTier(int value) { m_promotionTierHasBeenSet = true; m_promotionTier = value; }
    inline DBInstance& WithPromotionTier(int value) { SetPromotionTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the instance.</p>
     */
    inline const Aws::String& GetDBInstanceArn() const{ return m_dBInstanceArn; }
    inline bool DBInstanceArnHasBeenSet() const { return m_dBInstanceArnHasBeenSet; }
    inline void SetDBInstanceArn(const Aws::String& value) { m_dBInstanceArnHasBeenSet = true; m_dBInstanceArn = value; }
    inline void SetDBInstanceArn(Aws::String&& value) { m_dBInstanceArnHasBeenSet = true; m_dBInstanceArn = std::move(value); }
    inline void SetDBInstanceArn(const char* value) { m_dBInstanceArnHasBeenSet = true; m_dBInstanceArn.assign(value); }
    inline DBInstance& WithDBInstanceArn(const Aws::String& value) { SetDBInstanceArn(value); return *this;}
    inline DBInstance& WithDBInstanceArn(Aws::String&& value) { SetDBInstanceArn(std::move(value)); return *this;}
    inline DBInstance& WithDBInstanceArn(const char* value) { SetDBInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of log types that this instance is configured to export to CloudWatch
     * Logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledCloudwatchLogsExports() const{ return m_enabledCloudwatchLogsExports; }
    inline bool EnabledCloudwatchLogsExportsHasBeenSet() const { return m_enabledCloudwatchLogsExportsHasBeenSet; }
    inline void SetEnabledCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports = value; }
    inline void SetEnabledCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports = std::move(value); }
    inline DBInstance& WithEnabledCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnabledCloudwatchLogsExports(value); return *this;}
    inline DBInstance& WithEnabledCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnabledCloudwatchLogsExports(std::move(value)); return *this;}
    inline DBInstance& AddEnabledCloudwatchLogsExports(const Aws::String& value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports.push_back(value); return *this; }
    inline DBInstance& AddEnabledCloudwatchLogsExports(Aws::String&& value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports.push_back(std::move(value)); return *this; }
    inline DBInstance& AddEnabledCloudwatchLogsExports(const char* value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The details of the DB instance's server certificate.</p>
     */
    inline const CertificateDetails& GetCertificateDetails() const{ return m_certificateDetails; }
    inline bool CertificateDetailsHasBeenSet() const { return m_certificateDetailsHasBeenSet; }
    inline void SetCertificateDetails(const CertificateDetails& value) { m_certificateDetailsHasBeenSet = true; m_certificateDetails = value; }
    inline void SetCertificateDetails(CertificateDetails&& value) { m_certificateDetailsHasBeenSet = true; m_certificateDetails = std::move(value); }
    inline DBInstance& WithCertificateDetails(const CertificateDetails& value) { SetCertificateDetails(value); return *this;}
    inline DBInstance& WithCertificateDetails(CertificateDetails&& value) { SetCertificateDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>true</code> if Amazon RDS Performance Insights is enabled for
     * the DB instance, and otherwise <code>false</code>.</p>
     */
    inline bool GetPerformanceInsightsEnabled() const{ return m_performanceInsightsEnabled; }
    inline bool PerformanceInsightsEnabledHasBeenSet() const { return m_performanceInsightsEnabledHasBeenSet; }
    inline void SetPerformanceInsightsEnabled(bool value) { m_performanceInsightsEnabledHasBeenSet = true; m_performanceInsightsEnabled = value; }
    inline DBInstance& WithPerformanceInsightsEnabled(bool value) { SetPerformanceInsightsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key identifier for encryption of Performance Insights data. The KMS
     * key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p>
     */
    inline const Aws::String& GetPerformanceInsightsKMSKeyId() const{ return m_performanceInsightsKMSKeyId; }
    inline bool PerformanceInsightsKMSKeyIdHasBeenSet() const { return m_performanceInsightsKMSKeyIdHasBeenSet; }
    inline void SetPerformanceInsightsKMSKeyId(const Aws::String& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = value; }
    inline void SetPerformanceInsightsKMSKeyId(Aws::String&& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = std::move(value); }
    inline void SetPerformanceInsightsKMSKeyId(const char* value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId.assign(value); }
    inline DBInstance& WithPerformanceInsightsKMSKeyId(const Aws::String& value) { SetPerformanceInsightsKMSKeyId(value); return *this;}
    inline DBInstance& WithPerformanceInsightsKMSKeyId(Aws::String&& value) { SetPerformanceInsightsKMSKeyId(std::move(value)); return *this;}
    inline DBInstance& WithPerformanceInsightsKMSKeyId(const char* value) { SetPerformanceInsightsKMSKeyId(value); return *this;}
    ///@}
  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_dBInstanceStatus;
    bool m_dBInstanceStatusHasBeenSet = false;

    Endpoint m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::Utils::DateTime m_instanceCreateTime;
    bool m_instanceCreateTimeHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    int m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet = false;

    Aws::Vector<VpcSecurityGroupMembership> m_vpcSecurityGroups;
    bool m_vpcSecurityGroupsHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    DBSubnetGroup m_dBSubnetGroup;
    bool m_dBSubnetGroupHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    PendingModifiedValues m_pendingModifiedValues;
    bool m_pendingModifiedValuesHasBeenSet = false;

    Aws::Utils::DateTime m_latestRestorableTime;
    bool m_latestRestorableTimeHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::Vector<DBInstanceStatusInfo> m_statusInfos;
    bool m_statusInfosHasBeenSet = false;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_dbiResourceId;
    bool m_dbiResourceIdHasBeenSet = false;

    Aws::String m_cACertificateIdentifier;
    bool m_cACertificateIdentifierHasBeenSet = false;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet = false;

    int m_promotionTier;
    bool m_promotionTierHasBeenSet = false;

    Aws::String m_dBInstanceArn;
    bool m_dBInstanceArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_enabledCloudwatchLogsExports;
    bool m_enabledCloudwatchLogsExportsHasBeenSet = false;

    CertificateDetails m_certificateDetails;
    bool m_certificateDetailsHasBeenSet = false;

    bool m_performanceInsightsEnabled;
    bool m_performanceInsightsEnabledHasBeenSet = false;

    Aws::String m_performanceInsightsKMSKeyId;
    bool m_performanceInsightsKMSKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
