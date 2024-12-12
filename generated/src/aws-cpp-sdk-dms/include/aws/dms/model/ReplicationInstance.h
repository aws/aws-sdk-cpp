/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/ReplicationSubnetGroup.h>
#include <aws/dms/model/ReplicationPendingModifiedValues.h>
#include <aws/dms/model/KerberosAuthenticationSettings.h>
#include <aws/dms/model/VpcSecurityGroupMembership.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information that defines a replication instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ReplicationInstance">AWS
   * API Reference</a></p>
   */
  class ReplicationInstance
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationInstance();
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The replication instance identifier is a required parameter. This parameter
     * is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain 1-63 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>myrepinstance</code> </p>
     */
    inline const Aws::String& GetReplicationInstanceIdentifier() const{ return m_replicationInstanceIdentifier; }
    inline bool ReplicationInstanceIdentifierHasBeenSet() const { return m_replicationInstanceIdentifierHasBeenSet; }
    inline void SetReplicationInstanceIdentifier(const Aws::String& value) { m_replicationInstanceIdentifierHasBeenSet = true; m_replicationInstanceIdentifier = value; }
    inline void SetReplicationInstanceIdentifier(Aws::String&& value) { m_replicationInstanceIdentifierHasBeenSet = true; m_replicationInstanceIdentifier = std::move(value); }
    inline void SetReplicationInstanceIdentifier(const char* value) { m_replicationInstanceIdentifierHasBeenSet = true; m_replicationInstanceIdentifier.assign(value); }
    inline ReplicationInstance& WithReplicationInstanceIdentifier(const Aws::String& value) { SetReplicationInstanceIdentifier(value); return *this;}
    inline ReplicationInstance& WithReplicationInstanceIdentifier(Aws::String&& value) { SetReplicationInstanceIdentifier(std::move(value)); return *this;}
    inline ReplicationInstance& WithReplicationInstanceIdentifier(const char* value) { SetReplicationInstanceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class. It is a required parameter, although a
     * default value is pre-selected in the DMS console.</p> <p>For more information on
     * the settings and capacities for the available replication instance classes, see
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_ReplicationInstance.html#CHAP_ReplicationInstance.InDepth">
     * Selecting the right DMS replication instance for your migration</a>. </p>
     */
    inline const Aws::String& GetReplicationInstanceClass() const{ return m_replicationInstanceClass; }
    inline bool ReplicationInstanceClassHasBeenSet() const { return m_replicationInstanceClassHasBeenSet; }
    inline void SetReplicationInstanceClass(const Aws::String& value) { m_replicationInstanceClassHasBeenSet = true; m_replicationInstanceClass = value; }
    inline void SetReplicationInstanceClass(Aws::String&& value) { m_replicationInstanceClassHasBeenSet = true; m_replicationInstanceClass = std::move(value); }
    inline void SetReplicationInstanceClass(const char* value) { m_replicationInstanceClassHasBeenSet = true; m_replicationInstanceClass.assign(value); }
    inline ReplicationInstance& WithReplicationInstanceClass(const Aws::String& value) { SetReplicationInstanceClass(value); return *this;}
    inline ReplicationInstance& WithReplicationInstanceClass(Aws::String&& value) { SetReplicationInstanceClass(std::move(value)); return *this;}
    inline ReplicationInstance& WithReplicationInstanceClass(const char* value) { SetReplicationInstanceClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the replication instance. The possible return values
     * include:</p> <ul> <li> <p> <code>"available"</code> </p> </li> <li> <p>
     * <code>"creating"</code> </p> </li> <li> <p> <code>"deleted"</code> </p> </li>
     * <li> <p> <code>"deleting"</code> </p> </li> <li> <p> <code>"failed"</code> </p>
     * </li> <li> <p> <code>"modifying"</code> </p> </li> <li> <p>
     * <code>"upgrading"</code> </p> </li> <li> <p> <code>"rebooting"</code> </p> </li>
     * <li> <p> <code>"resetting-master-credentials"</code> </p> </li> <li> <p>
     * <code>"storage-full"</code> </p> </li> <li> <p>
     * <code>"incompatible-credentials"</code> </p> </li> <li> <p>
     * <code>"incompatible-network"</code> </p> </li> <li> <p>
     * <code>"maintenance"</code> </p> </li> </ul>
     */
    inline const Aws::String& GetReplicationInstanceStatus() const{ return m_replicationInstanceStatus; }
    inline bool ReplicationInstanceStatusHasBeenSet() const { return m_replicationInstanceStatusHasBeenSet; }
    inline void SetReplicationInstanceStatus(const Aws::String& value) { m_replicationInstanceStatusHasBeenSet = true; m_replicationInstanceStatus = value; }
    inline void SetReplicationInstanceStatus(Aws::String&& value) { m_replicationInstanceStatusHasBeenSet = true; m_replicationInstanceStatus = std::move(value); }
    inline void SetReplicationInstanceStatus(const char* value) { m_replicationInstanceStatusHasBeenSet = true; m_replicationInstanceStatus.assign(value); }
    inline ReplicationInstance& WithReplicationInstanceStatus(const Aws::String& value) { SetReplicationInstanceStatus(value); return *this;}
    inline ReplicationInstance& WithReplicationInstanceStatus(Aws::String&& value) { SetReplicationInstanceStatus(std::move(value)); return *this;}
    inline ReplicationInstance& WithReplicationInstanceStatus(const char* value) { SetReplicationInstanceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage (in gigabytes) that is allocated for the replication
     * instance.</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline ReplicationInstance& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the replication instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetInstanceCreateTime() const{ return m_instanceCreateTime; }
    inline bool InstanceCreateTimeHasBeenSet() const { return m_instanceCreateTimeHasBeenSet; }
    inline void SetInstanceCreateTime(const Aws::Utils::DateTime& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = value; }
    inline void SetInstanceCreateTime(Aws::Utils::DateTime&& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = std::move(value); }
    inline ReplicationInstance& WithInstanceCreateTime(const Aws::Utils::DateTime& value) { SetInstanceCreateTime(value); return *this;}
    inline ReplicationInstance& WithInstanceCreateTime(Aws::Utils::DateTime&& value) { SetInstanceCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC security group for the instance.</p>
     */
    inline const Aws::Vector<VpcSecurityGroupMembership>& GetVpcSecurityGroups() const{ return m_vpcSecurityGroups; }
    inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }
    inline void SetVpcSecurityGroups(const Aws::Vector<VpcSecurityGroupMembership>& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = value; }
    inline void SetVpcSecurityGroups(Aws::Vector<VpcSecurityGroupMembership>&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = std::move(value); }
    inline ReplicationInstance& WithVpcSecurityGroups(const Aws::Vector<VpcSecurityGroupMembership>& value) { SetVpcSecurityGroups(value); return *this;}
    inline ReplicationInstance& WithVpcSecurityGroups(Aws::Vector<VpcSecurityGroupMembership>&& value) { SetVpcSecurityGroups(std::move(value)); return *this;}
    inline ReplicationInstance& AddVpcSecurityGroups(const VpcSecurityGroupMembership& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(value); return *this; }
    inline ReplicationInstance& AddVpcSecurityGroups(VpcSecurityGroupMembership&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Availability Zone for the instance.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline ReplicationInstance& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline ReplicationInstance& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline ReplicationInstance& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet group for the replication instance.</p>
     */
    inline const ReplicationSubnetGroup& GetReplicationSubnetGroup() const{ return m_replicationSubnetGroup; }
    inline bool ReplicationSubnetGroupHasBeenSet() const { return m_replicationSubnetGroupHasBeenSet; }
    inline void SetReplicationSubnetGroup(const ReplicationSubnetGroup& value) { m_replicationSubnetGroupHasBeenSet = true; m_replicationSubnetGroup = value; }
    inline void SetReplicationSubnetGroup(ReplicationSubnetGroup&& value) { m_replicationSubnetGroupHasBeenSet = true; m_replicationSubnetGroup = std::move(value); }
    inline ReplicationInstance& WithReplicationSubnetGroup(const ReplicationSubnetGroup& value) { SetReplicationSubnetGroup(value); return *this;}
    inline ReplicationInstance& WithReplicationSubnetGroup(ReplicationSubnetGroup&& value) { SetReplicationSubnetGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maintenance window times for the replication instance. Any pending
     * upgrades to the replication instance are performed during this time.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }
    inline ReplicationInstance& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}
    inline ReplicationInstance& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}
    inline ReplicationInstance& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pending modification values.</p>
     */
    inline const ReplicationPendingModifiedValues& GetPendingModifiedValues() const{ return m_pendingModifiedValues; }
    inline bool PendingModifiedValuesHasBeenSet() const { return m_pendingModifiedValuesHasBeenSet; }
    inline void SetPendingModifiedValues(const ReplicationPendingModifiedValues& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = value; }
    inline void SetPendingModifiedValues(ReplicationPendingModifiedValues&& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = std::move(value); }
    inline ReplicationInstance& WithPendingModifiedValues(const ReplicationPendingModifiedValues& value) { SetPendingModifiedValues(value); return *this;}
    inline ReplicationInstance& WithPendingModifiedValues(ReplicationPendingModifiedValues&& value) { SetPendingModifiedValues(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether the replication instance is a Multi-AZ deployment. You
     * can't set the <code>AvailabilityZone</code> parameter if the Multi-AZ parameter
     * is set to <code>true</code>. </p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline ReplicationInstance& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine version number of the replication instance.</p> <p>If an engine
     * version number is not specified when a replication instance is created, the
     * default is the latest engine version available.</p> <p>When modifying a major
     * engine version of an instance, also set <code>AllowMajorVersionUpgrade</code> to
     * <code>true</code>.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline ReplicationInstance& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline ReplicationInstance& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline ReplicationInstance& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean value indicating if minor version upgrades will be automatically
     * applied to the instance.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline ReplicationInstance& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An KMS key identifier that is used to encrypt the data on the replication
     * instance.</p> <p>If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then DMS uses your default encryption key.</p> <p>KMS creates the
     * default encryption key for your Amazon Web Services account. Your Amazon Web
     * Services account has a different default encryption key for each Amazon Web
     * Services Region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline ReplicationInstance& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline ReplicationInstance& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline ReplicationInstance& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline const Aws::String& GetReplicationInstanceArn() const{ return m_replicationInstanceArn; }
    inline bool ReplicationInstanceArnHasBeenSet() const { return m_replicationInstanceArnHasBeenSet; }
    inline void SetReplicationInstanceArn(const Aws::String& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = value; }
    inline void SetReplicationInstanceArn(Aws::String&& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = std::move(value); }
    inline void SetReplicationInstanceArn(const char* value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn.assign(value); }
    inline ReplicationInstance& WithReplicationInstanceArn(const Aws::String& value) { SetReplicationInstanceArn(value); return *this;}
    inline ReplicationInstance& WithReplicationInstanceArn(Aws::String&& value) { SetReplicationInstanceArn(std::move(value)); return *this;}
    inline ReplicationInstance& WithReplicationInstanceArn(const char* value) { SetReplicationInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more public IP addresses for the replication instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationInstancePublicIpAddresses() const{ return m_replicationInstancePublicIpAddresses; }
    inline bool ReplicationInstancePublicIpAddressesHasBeenSet() const { return m_replicationInstancePublicIpAddressesHasBeenSet; }
    inline void SetReplicationInstancePublicIpAddresses(const Aws::Vector<Aws::String>& value) { m_replicationInstancePublicIpAddressesHasBeenSet = true; m_replicationInstancePublicIpAddresses = value; }
    inline void SetReplicationInstancePublicIpAddresses(Aws::Vector<Aws::String>&& value) { m_replicationInstancePublicIpAddressesHasBeenSet = true; m_replicationInstancePublicIpAddresses = std::move(value); }
    inline ReplicationInstance& WithReplicationInstancePublicIpAddresses(const Aws::Vector<Aws::String>& value) { SetReplicationInstancePublicIpAddresses(value); return *this;}
    inline ReplicationInstance& WithReplicationInstancePublicIpAddresses(Aws::Vector<Aws::String>&& value) { SetReplicationInstancePublicIpAddresses(std::move(value)); return *this;}
    inline ReplicationInstance& AddReplicationInstancePublicIpAddresses(const Aws::String& value) { m_replicationInstancePublicIpAddressesHasBeenSet = true; m_replicationInstancePublicIpAddresses.push_back(value); return *this; }
    inline ReplicationInstance& AddReplicationInstancePublicIpAddresses(Aws::String&& value) { m_replicationInstancePublicIpAddressesHasBeenSet = true; m_replicationInstancePublicIpAddresses.push_back(std::move(value)); return *this; }
    inline ReplicationInstance& AddReplicationInstancePublicIpAddresses(const char* value) { m_replicationInstancePublicIpAddressesHasBeenSet = true; m_replicationInstancePublicIpAddresses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more private IP addresses for the replication instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationInstancePrivateIpAddresses() const{ return m_replicationInstancePrivateIpAddresses; }
    inline bool ReplicationInstancePrivateIpAddressesHasBeenSet() const { return m_replicationInstancePrivateIpAddressesHasBeenSet; }
    inline void SetReplicationInstancePrivateIpAddresses(const Aws::Vector<Aws::String>& value) { m_replicationInstancePrivateIpAddressesHasBeenSet = true; m_replicationInstancePrivateIpAddresses = value; }
    inline void SetReplicationInstancePrivateIpAddresses(Aws::Vector<Aws::String>&& value) { m_replicationInstancePrivateIpAddressesHasBeenSet = true; m_replicationInstancePrivateIpAddresses = std::move(value); }
    inline ReplicationInstance& WithReplicationInstancePrivateIpAddresses(const Aws::Vector<Aws::String>& value) { SetReplicationInstancePrivateIpAddresses(value); return *this;}
    inline ReplicationInstance& WithReplicationInstancePrivateIpAddresses(Aws::Vector<Aws::String>&& value) { SetReplicationInstancePrivateIpAddresses(std::move(value)); return *this;}
    inline ReplicationInstance& AddReplicationInstancePrivateIpAddresses(const Aws::String& value) { m_replicationInstancePrivateIpAddressesHasBeenSet = true; m_replicationInstancePrivateIpAddresses.push_back(value); return *this; }
    inline ReplicationInstance& AddReplicationInstancePrivateIpAddresses(Aws::String&& value) { m_replicationInstancePrivateIpAddressesHasBeenSet = true; m_replicationInstancePrivateIpAddresses.push_back(std::move(value)); return *this; }
    inline ReplicationInstance& AddReplicationInstancePrivateIpAddresses(const char* value) { m_replicationInstancePrivateIpAddressesHasBeenSet = true; m_replicationInstancePrivateIpAddresses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more IPv6 addresses for the replication instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationInstanceIpv6Addresses() const{ return m_replicationInstanceIpv6Addresses; }
    inline bool ReplicationInstanceIpv6AddressesHasBeenSet() const { return m_replicationInstanceIpv6AddressesHasBeenSet; }
    inline void SetReplicationInstanceIpv6Addresses(const Aws::Vector<Aws::String>& value) { m_replicationInstanceIpv6AddressesHasBeenSet = true; m_replicationInstanceIpv6Addresses = value; }
    inline void SetReplicationInstanceIpv6Addresses(Aws::Vector<Aws::String>&& value) { m_replicationInstanceIpv6AddressesHasBeenSet = true; m_replicationInstanceIpv6Addresses = std::move(value); }
    inline ReplicationInstance& WithReplicationInstanceIpv6Addresses(const Aws::Vector<Aws::String>& value) { SetReplicationInstanceIpv6Addresses(value); return *this;}
    inline ReplicationInstance& WithReplicationInstanceIpv6Addresses(Aws::Vector<Aws::String>&& value) { SetReplicationInstanceIpv6Addresses(std::move(value)); return *this;}
    inline ReplicationInstance& AddReplicationInstanceIpv6Addresses(const Aws::String& value) { m_replicationInstanceIpv6AddressesHasBeenSet = true; m_replicationInstanceIpv6Addresses.push_back(value); return *this; }
    inline ReplicationInstance& AddReplicationInstanceIpv6Addresses(Aws::String&& value) { m_replicationInstanceIpv6AddressesHasBeenSet = true; m_replicationInstanceIpv6Addresses.push_back(std::move(value)); return *this; }
    inline ReplicationInstance& AddReplicationInstanceIpv6Addresses(const char* value) { m_replicationInstanceIpv6AddressesHasBeenSet = true; m_replicationInstanceIpv6Addresses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specifies the accessibility options for the replication instance. A value of
     * <code>true</code> represents an instance with a public IP address. A value of
     * <code>false</code> represents an instance with a private IP address. The default
     * value is <code>true</code>. </p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline ReplicationInstance& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone of the standby replication instance in a Multi-AZ
     * deployment.</p>
     */
    inline const Aws::String& GetSecondaryAvailabilityZone() const{ return m_secondaryAvailabilityZone; }
    inline bool SecondaryAvailabilityZoneHasBeenSet() const { return m_secondaryAvailabilityZoneHasBeenSet; }
    inline void SetSecondaryAvailabilityZone(const Aws::String& value) { m_secondaryAvailabilityZoneHasBeenSet = true; m_secondaryAvailabilityZone = value; }
    inline void SetSecondaryAvailabilityZone(Aws::String&& value) { m_secondaryAvailabilityZoneHasBeenSet = true; m_secondaryAvailabilityZone = std::move(value); }
    inline void SetSecondaryAvailabilityZone(const char* value) { m_secondaryAvailabilityZoneHasBeenSet = true; m_secondaryAvailabilityZone.assign(value); }
    inline ReplicationInstance& WithSecondaryAvailabilityZone(const Aws::String& value) { SetSecondaryAvailabilityZone(value); return *this;}
    inline ReplicationInstance& WithSecondaryAvailabilityZone(Aws::String&& value) { SetSecondaryAvailabilityZone(std::move(value)); return *this;}
    inline ReplicationInstance& WithSecondaryAvailabilityZone(const char* value) { SetSecondaryAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The expiration date of the free replication instance that is part of the
     * Free DMS program. </p>
     */
    inline const Aws::Utils::DateTime& GetFreeUntil() const{ return m_freeUntil; }
    inline bool FreeUntilHasBeenSet() const { return m_freeUntilHasBeenSet; }
    inline void SetFreeUntil(const Aws::Utils::DateTime& value) { m_freeUntilHasBeenSet = true; m_freeUntil = value; }
    inline void SetFreeUntil(Aws::Utils::DateTime&& value) { m_freeUntilHasBeenSet = true; m_freeUntil = std::move(value); }
    inline ReplicationInstance& WithFreeUntil(const Aws::Utils::DateTime& value) { SetFreeUntil(value); return *this;}
    inline ReplicationInstance& WithFreeUntil(Aws::Utils::DateTime&& value) { SetFreeUntil(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name servers supported for the replication instance to access your
     * on-premise source or target database.</p>
     */
    inline const Aws::String& GetDnsNameServers() const{ return m_dnsNameServers; }
    inline bool DnsNameServersHasBeenSet() const { return m_dnsNameServersHasBeenSet; }
    inline void SetDnsNameServers(const Aws::String& value) { m_dnsNameServersHasBeenSet = true; m_dnsNameServers = value; }
    inline void SetDnsNameServers(Aws::String&& value) { m_dnsNameServersHasBeenSet = true; m_dnsNameServers = std::move(value); }
    inline void SetDnsNameServers(const char* value) { m_dnsNameServersHasBeenSet = true; m_dnsNameServers.assign(value); }
    inline ReplicationInstance& WithDnsNameServers(const Aws::String& value) { SetDnsNameServers(value); return *this;}
    inline ReplicationInstance& WithDnsNameServers(Aws::String&& value) { SetDnsNameServers(std::move(value)); return *this;}
    inline ReplicationInstance& WithDnsNameServers(const char* value) { SetDnsNameServers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of IP address protocol used by a replication instance, such as IPv4
     * only or Dual-stack that supports both IPv4 and IPv6 addressing. IPv6 only is not
     * yet supported.</p>
     */
    inline const Aws::String& GetNetworkType() const{ return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(const Aws::String& value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline void SetNetworkType(Aws::String&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::move(value); }
    inline void SetNetworkType(const char* value) { m_networkTypeHasBeenSet = true; m_networkType.assign(value); }
    inline ReplicationInstance& WithNetworkType(const Aws::String& value) { SetNetworkType(value); return *this;}
    inline ReplicationInstance& WithNetworkType(Aws::String&& value) { SetNetworkType(std::move(value)); return *this;}
    inline ReplicationInstance& WithNetworkType(const char* value) { SetNetworkType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ID of the secret that stores the key cache file required for
     * kerberos authentication, when replicating an instance.</p>
     */
    inline const KerberosAuthenticationSettings& GetKerberosAuthenticationSettings() const{ return m_kerberosAuthenticationSettings; }
    inline bool KerberosAuthenticationSettingsHasBeenSet() const { return m_kerberosAuthenticationSettingsHasBeenSet; }
    inline void SetKerberosAuthenticationSettings(const KerberosAuthenticationSettings& value) { m_kerberosAuthenticationSettingsHasBeenSet = true; m_kerberosAuthenticationSettings = value; }
    inline void SetKerberosAuthenticationSettings(KerberosAuthenticationSettings&& value) { m_kerberosAuthenticationSettingsHasBeenSet = true; m_kerberosAuthenticationSettings = std::move(value); }
    inline ReplicationInstance& WithKerberosAuthenticationSettings(const KerberosAuthenticationSettings& value) { SetKerberosAuthenticationSettings(value); return *this;}
    inline ReplicationInstance& WithKerberosAuthenticationSettings(KerberosAuthenticationSettings&& value) { SetKerberosAuthenticationSettings(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicationInstanceIdentifier;
    bool m_replicationInstanceIdentifierHasBeenSet = false;

    Aws::String m_replicationInstanceClass;
    bool m_replicationInstanceClassHasBeenSet = false;

    Aws::String m_replicationInstanceStatus;
    bool m_replicationInstanceStatusHasBeenSet = false;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet = false;

    Aws::Utils::DateTime m_instanceCreateTime;
    bool m_instanceCreateTimeHasBeenSet = false;

    Aws::Vector<VpcSecurityGroupMembership> m_vpcSecurityGroups;
    bool m_vpcSecurityGroupsHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    ReplicationSubnetGroup m_replicationSubnetGroup;
    bool m_replicationSubnetGroupHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    ReplicationPendingModifiedValues m_pendingModifiedValues;
    bool m_pendingModifiedValuesHasBeenSet = false;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_replicationInstanceArn;
    bool m_replicationInstanceArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_replicationInstancePublicIpAddresses;
    bool m_replicationInstancePublicIpAddressesHasBeenSet = false;

    Aws::Vector<Aws::String> m_replicationInstancePrivateIpAddresses;
    bool m_replicationInstancePrivateIpAddressesHasBeenSet = false;

    Aws::Vector<Aws::String> m_replicationInstanceIpv6Addresses;
    bool m_replicationInstanceIpv6AddressesHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::String m_secondaryAvailabilityZone;
    bool m_secondaryAvailabilityZoneHasBeenSet = false;

    Aws::Utils::DateTime m_freeUntil;
    bool m_freeUntilHasBeenSet = false;

    Aws::String m_dnsNameServers;
    bool m_dnsNameServersHasBeenSet = false;

    Aws::String m_networkType;
    bool m_networkTypeHasBeenSet = false;

    KerberosAuthenticationSettings m_kerberosAuthenticationSettings;
    bool m_kerberosAuthenticationSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
