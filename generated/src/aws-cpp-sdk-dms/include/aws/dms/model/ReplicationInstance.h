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
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationInstance() = default;
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
    inline const Aws::String& GetReplicationInstanceIdentifier() const { return m_replicationInstanceIdentifier; }
    inline bool ReplicationInstanceIdentifierHasBeenSet() const { return m_replicationInstanceIdentifierHasBeenSet; }
    template<typename ReplicationInstanceIdentifierT = Aws::String>
    void SetReplicationInstanceIdentifier(ReplicationInstanceIdentifierT&& value) { m_replicationInstanceIdentifierHasBeenSet = true; m_replicationInstanceIdentifier = std::forward<ReplicationInstanceIdentifierT>(value); }
    template<typename ReplicationInstanceIdentifierT = Aws::String>
    ReplicationInstance& WithReplicationInstanceIdentifier(ReplicationInstanceIdentifierT&& value) { SetReplicationInstanceIdentifier(std::forward<ReplicationInstanceIdentifierT>(value)); return *this;}
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
    inline const Aws::String& GetReplicationInstanceClass() const { return m_replicationInstanceClass; }
    inline bool ReplicationInstanceClassHasBeenSet() const { return m_replicationInstanceClassHasBeenSet; }
    template<typename ReplicationInstanceClassT = Aws::String>
    void SetReplicationInstanceClass(ReplicationInstanceClassT&& value) { m_replicationInstanceClassHasBeenSet = true; m_replicationInstanceClass = std::forward<ReplicationInstanceClassT>(value); }
    template<typename ReplicationInstanceClassT = Aws::String>
    ReplicationInstance& WithReplicationInstanceClass(ReplicationInstanceClassT&& value) { SetReplicationInstanceClass(std::forward<ReplicationInstanceClassT>(value)); return *this;}
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
    inline const Aws::String& GetReplicationInstanceStatus() const { return m_replicationInstanceStatus; }
    inline bool ReplicationInstanceStatusHasBeenSet() const { return m_replicationInstanceStatusHasBeenSet; }
    template<typename ReplicationInstanceStatusT = Aws::String>
    void SetReplicationInstanceStatus(ReplicationInstanceStatusT&& value) { m_replicationInstanceStatusHasBeenSet = true; m_replicationInstanceStatus = std::forward<ReplicationInstanceStatusT>(value); }
    template<typename ReplicationInstanceStatusT = Aws::String>
    ReplicationInstance& WithReplicationInstanceStatus(ReplicationInstanceStatusT&& value) { SetReplicationInstanceStatus(std::forward<ReplicationInstanceStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage (in gigabytes) that is allocated for the replication
     * instance.</p>
     */
    inline int GetAllocatedStorage() const { return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline ReplicationInstance& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the replication instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetInstanceCreateTime() const { return m_instanceCreateTime; }
    inline bool InstanceCreateTimeHasBeenSet() const { return m_instanceCreateTimeHasBeenSet; }
    template<typename InstanceCreateTimeT = Aws::Utils::DateTime>
    void SetInstanceCreateTime(InstanceCreateTimeT&& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = std::forward<InstanceCreateTimeT>(value); }
    template<typename InstanceCreateTimeT = Aws::Utils::DateTime>
    ReplicationInstance& WithInstanceCreateTime(InstanceCreateTimeT&& value) { SetInstanceCreateTime(std::forward<InstanceCreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC security group for the instance.</p>
     */
    inline const Aws::Vector<VpcSecurityGroupMembership>& GetVpcSecurityGroups() const { return m_vpcSecurityGroups; }
    inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }
    template<typename VpcSecurityGroupsT = Aws::Vector<VpcSecurityGroupMembership>>
    void SetVpcSecurityGroups(VpcSecurityGroupsT&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = std::forward<VpcSecurityGroupsT>(value); }
    template<typename VpcSecurityGroupsT = Aws::Vector<VpcSecurityGroupMembership>>
    ReplicationInstance& WithVpcSecurityGroups(VpcSecurityGroupsT&& value) { SetVpcSecurityGroups(std::forward<VpcSecurityGroupsT>(value)); return *this;}
    template<typename VpcSecurityGroupsT = VpcSecurityGroupMembership>
    ReplicationInstance& AddVpcSecurityGroups(VpcSecurityGroupsT&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.emplace_back(std::forward<VpcSecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Availability Zone for the instance.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    ReplicationInstance& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet group for the replication instance.</p>
     */
    inline const ReplicationSubnetGroup& GetReplicationSubnetGroup() const { return m_replicationSubnetGroup; }
    inline bool ReplicationSubnetGroupHasBeenSet() const { return m_replicationSubnetGroupHasBeenSet; }
    template<typename ReplicationSubnetGroupT = ReplicationSubnetGroup>
    void SetReplicationSubnetGroup(ReplicationSubnetGroupT&& value) { m_replicationSubnetGroupHasBeenSet = true; m_replicationSubnetGroup = std::forward<ReplicationSubnetGroupT>(value); }
    template<typename ReplicationSubnetGroupT = ReplicationSubnetGroup>
    ReplicationInstance& WithReplicationSubnetGroup(ReplicationSubnetGroupT&& value) { SetReplicationSubnetGroup(std::forward<ReplicationSubnetGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maintenance window times for the replication instance. Any pending
     * upgrades to the replication instance are performed during this time.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    ReplicationInstance& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pending modification values.</p>
     */
    inline const ReplicationPendingModifiedValues& GetPendingModifiedValues() const { return m_pendingModifiedValues; }
    inline bool PendingModifiedValuesHasBeenSet() const { return m_pendingModifiedValuesHasBeenSet; }
    template<typename PendingModifiedValuesT = ReplicationPendingModifiedValues>
    void SetPendingModifiedValues(PendingModifiedValuesT&& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = std::forward<PendingModifiedValuesT>(value); }
    template<typename PendingModifiedValuesT = ReplicationPendingModifiedValues>
    ReplicationInstance& WithPendingModifiedValues(PendingModifiedValuesT&& value) { SetPendingModifiedValues(std::forward<PendingModifiedValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether the replication instance is a Multi-AZ deployment. You
     * can't set the <code>AvailabilityZone</code> parameter if the Multi-AZ parameter
     * is set to <code>true</code>. </p>
     */
    inline bool GetMultiAZ() const { return m_multiAZ; }
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
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    ReplicationInstance& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean value indicating if minor version upgrades will be automatically
     * applied to the instance.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const { return m_autoMinorVersionUpgrade; }
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
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    ReplicationInstance& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline const Aws::String& GetReplicationInstanceArn() const { return m_replicationInstanceArn; }
    inline bool ReplicationInstanceArnHasBeenSet() const { return m_replicationInstanceArnHasBeenSet; }
    template<typename ReplicationInstanceArnT = Aws::String>
    void SetReplicationInstanceArn(ReplicationInstanceArnT&& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = std::forward<ReplicationInstanceArnT>(value); }
    template<typename ReplicationInstanceArnT = Aws::String>
    ReplicationInstance& WithReplicationInstanceArn(ReplicationInstanceArnT&& value) { SetReplicationInstanceArn(std::forward<ReplicationInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more public IP addresses for the replication instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationInstancePublicIpAddresses() const { return m_replicationInstancePublicIpAddresses; }
    inline bool ReplicationInstancePublicIpAddressesHasBeenSet() const { return m_replicationInstancePublicIpAddressesHasBeenSet; }
    template<typename ReplicationInstancePublicIpAddressesT = Aws::Vector<Aws::String>>
    void SetReplicationInstancePublicIpAddresses(ReplicationInstancePublicIpAddressesT&& value) { m_replicationInstancePublicIpAddressesHasBeenSet = true; m_replicationInstancePublicIpAddresses = std::forward<ReplicationInstancePublicIpAddressesT>(value); }
    template<typename ReplicationInstancePublicIpAddressesT = Aws::Vector<Aws::String>>
    ReplicationInstance& WithReplicationInstancePublicIpAddresses(ReplicationInstancePublicIpAddressesT&& value) { SetReplicationInstancePublicIpAddresses(std::forward<ReplicationInstancePublicIpAddressesT>(value)); return *this;}
    template<typename ReplicationInstancePublicIpAddressesT = Aws::String>
    ReplicationInstance& AddReplicationInstancePublicIpAddresses(ReplicationInstancePublicIpAddressesT&& value) { m_replicationInstancePublicIpAddressesHasBeenSet = true; m_replicationInstancePublicIpAddresses.emplace_back(std::forward<ReplicationInstancePublicIpAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more private IP addresses for the replication instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationInstancePrivateIpAddresses() const { return m_replicationInstancePrivateIpAddresses; }
    inline bool ReplicationInstancePrivateIpAddressesHasBeenSet() const { return m_replicationInstancePrivateIpAddressesHasBeenSet; }
    template<typename ReplicationInstancePrivateIpAddressesT = Aws::Vector<Aws::String>>
    void SetReplicationInstancePrivateIpAddresses(ReplicationInstancePrivateIpAddressesT&& value) { m_replicationInstancePrivateIpAddressesHasBeenSet = true; m_replicationInstancePrivateIpAddresses = std::forward<ReplicationInstancePrivateIpAddressesT>(value); }
    template<typename ReplicationInstancePrivateIpAddressesT = Aws::Vector<Aws::String>>
    ReplicationInstance& WithReplicationInstancePrivateIpAddresses(ReplicationInstancePrivateIpAddressesT&& value) { SetReplicationInstancePrivateIpAddresses(std::forward<ReplicationInstancePrivateIpAddressesT>(value)); return *this;}
    template<typename ReplicationInstancePrivateIpAddressesT = Aws::String>
    ReplicationInstance& AddReplicationInstancePrivateIpAddresses(ReplicationInstancePrivateIpAddressesT&& value) { m_replicationInstancePrivateIpAddressesHasBeenSet = true; m_replicationInstancePrivateIpAddresses.emplace_back(std::forward<ReplicationInstancePrivateIpAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more IPv6 addresses for the replication instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationInstanceIpv6Addresses() const { return m_replicationInstanceIpv6Addresses; }
    inline bool ReplicationInstanceIpv6AddressesHasBeenSet() const { return m_replicationInstanceIpv6AddressesHasBeenSet; }
    template<typename ReplicationInstanceIpv6AddressesT = Aws::Vector<Aws::String>>
    void SetReplicationInstanceIpv6Addresses(ReplicationInstanceIpv6AddressesT&& value) { m_replicationInstanceIpv6AddressesHasBeenSet = true; m_replicationInstanceIpv6Addresses = std::forward<ReplicationInstanceIpv6AddressesT>(value); }
    template<typename ReplicationInstanceIpv6AddressesT = Aws::Vector<Aws::String>>
    ReplicationInstance& WithReplicationInstanceIpv6Addresses(ReplicationInstanceIpv6AddressesT&& value) { SetReplicationInstanceIpv6Addresses(std::forward<ReplicationInstanceIpv6AddressesT>(value)); return *this;}
    template<typename ReplicationInstanceIpv6AddressesT = Aws::String>
    ReplicationInstance& AddReplicationInstanceIpv6Addresses(ReplicationInstanceIpv6AddressesT&& value) { m_replicationInstanceIpv6AddressesHasBeenSet = true; m_replicationInstanceIpv6Addresses.emplace_back(std::forward<ReplicationInstanceIpv6AddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specifies the accessibility options for the replication instance. A value of
     * <code>true</code> represents an instance with a public IP address. A value of
     * <code>false</code> represents an instance with a private IP address. The default
     * value is <code>true</code>. </p>
     */
    inline bool GetPubliclyAccessible() const { return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline ReplicationInstance& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone of the standby replication instance in a Multi-AZ
     * deployment.</p>
     */
    inline const Aws::String& GetSecondaryAvailabilityZone() const { return m_secondaryAvailabilityZone; }
    inline bool SecondaryAvailabilityZoneHasBeenSet() const { return m_secondaryAvailabilityZoneHasBeenSet; }
    template<typename SecondaryAvailabilityZoneT = Aws::String>
    void SetSecondaryAvailabilityZone(SecondaryAvailabilityZoneT&& value) { m_secondaryAvailabilityZoneHasBeenSet = true; m_secondaryAvailabilityZone = std::forward<SecondaryAvailabilityZoneT>(value); }
    template<typename SecondaryAvailabilityZoneT = Aws::String>
    ReplicationInstance& WithSecondaryAvailabilityZone(SecondaryAvailabilityZoneT&& value) { SetSecondaryAvailabilityZone(std::forward<SecondaryAvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The expiration date of the free replication instance that is part of the
     * Free DMS program. </p>
     */
    inline const Aws::Utils::DateTime& GetFreeUntil() const { return m_freeUntil; }
    inline bool FreeUntilHasBeenSet() const { return m_freeUntilHasBeenSet; }
    template<typename FreeUntilT = Aws::Utils::DateTime>
    void SetFreeUntil(FreeUntilT&& value) { m_freeUntilHasBeenSet = true; m_freeUntil = std::forward<FreeUntilT>(value); }
    template<typename FreeUntilT = Aws::Utils::DateTime>
    ReplicationInstance& WithFreeUntil(FreeUntilT&& value) { SetFreeUntil(std::forward<FreeUntilT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name servers supported for the replication instance to access your
     * on-premise source or target database.</p>
     */
    inline const Aws::String& GetDnsNameServers() const { return m_dnsNameServers; }
    inline bool DnsNameServersHasBeenSet() const { return m_dnsNameServersHasBeenSet; }
    template<typename DnsNameServersT = Aws::String>
    void SetDnsNameServers(DnsNameServersT&& value) { m_dnsNameServersHasBeenSet = true; m_dnsNameServers = std::forward<DnsNameServersT>(value); }
    template<typename DnsNameServersT = Aws::String>
    ReplicationInstance& WithDnsNameServers(DnsNameServersT&& value) { SetDnsNameServers(std::forward<DnsNameServersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of IP address protocol used by a replication instance, such as IPv4
     * only or Dual-stack that supports both IPv4 and IPv6 addressing. IPv6 only is not
     * yet supported.</p>
     */
    inline const Aws::String& GetNetworkType() const { return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    template<typename NetworkTypeT = Aws::String>
    void SetNetworkType(NetworkTypeT&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::forward<NetworkTypeT>(value); }
    template<typename NetworkTypeT = Aws::String>
    ReplicationInstance& WithNetworkType(NetworkTypeT&& value) { SetNetworkType(std::forward<NetworkTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the settings required for kerberos authentication when replicating
     * an instance.</p>
     */
    inline const KerberosAuthenticationSettings& GetKerberosAuthenticationSettings() const { return m_kerberosAuthenticationSettings; }
    inline bool KerberosAuthenticationSettingsHasBeenSet() const { return m_kerberosAuthenticationSettingsHasBeenSet; }
    template<typename KerberosAuthenticationSettingsT = KerberosAuthenticationSettings>
    void SetKerberosAuthenticationSettings(KerberosAuthenticationSettingsT&& value) { m_kerberosAuthenticationSettingsHasBeenSet = true; m_kerberosAuthenticationSettings = std::forward<KerberosAuthenticationSettingsT>(value); }
    template<typename KerberosAuthenticationSettingsT = KerberosAuthenticationSettings>
    ReplicationInstance& WithKerberosAuthenticationSettings(KerberosAuthenticationSettingsT&& value) { SetKerberosAuthenticationSettings(std::forward<KerberosAuthenticationSettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicationInstanceIdentifier;
    bool m_replicationInstanceIdentifierHasBeenSet = false;

    Aws::String m_replicationInstanceClass;
    bool m_replicationInstanceClassHasBeenSet = false;

    Aws::String m_replicationInstanceStatus;
    bool m_replicationInstanceStatusHasBeenSet = false;

    int m_allocatedStorage{0};
    bool m_allocatedStorageHasBeenSet = false;

    Aws::Utils::DateTime m_instanceCreateTime{};
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

    bool m_multiAZ{false};
    bool m_multiAZHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_autoMinorVersionUpgrade{false};
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

    bool m_publiclyAccessible{false};
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::String m_secondaryAvailabilityZone;
    bool m_secondaryAvailabilityZoneHasBeenSet = false;

    Aws::Utils::DateTime m_freeUntil{};
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
