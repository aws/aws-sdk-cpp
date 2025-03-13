/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/KerberosAuthenticationSettings.h>
#include <aws/dms/model/Tag.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateReplicationInstanceMessage">AWS
   * API Reference</a></p>
   */
  class CreateReplicationInstanceRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API CreateReplicationInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReplicationInstance"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain 1-63 alphanumeric
     * characters or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>myrepinstance</code> </p>
     */
    inline const Aws::String& GetReplicationInstanceIdentifier() const { return m_replicationInstanceIdentifier; }
    inline bool ReplicationInstanceIdentifierHasBeenSet() const { return m_replicationInstanceIdentifierHasBeenSet; }
    template<typename ReplicationInstanceIdentifierT = Aws::String>
    void SetReplicationInstanceIdentifier(ReplicationInstanceIdentifierT&& value) { m_replicationInstanceIdentifierHasBeenSet = true; m_replicationInstanceIdentifier = std::forward<ReplicationInstanceIdentifierT>(value); }
    template<typename ReplicationInstanceIdentifierT = Aws::String>
    CreateReplicationInstanceRequest& WithReplicationInstanceIdentifier(ReplicationInstanceIdentifierT&& value) { SetReplicationInstanceIdentifier(std::forward<ReplicationInstanceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage (in gigabytes) to be initially allocated for the
     * replication instance.</p>
     */
    inline int GetAllocatedStorage() const { return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline CreateReplicationInstanceRequest& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class. For example to specify the instance
     * class dms.c4.large, set this parameter to <code>"dms.c4.large"</code>.</p>
     * <p>For more information on the settings and capacities for the available
     * replication instance classes, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_ReplicationInstance.Types.html
     * "> Choosing the right DMS replication instance</a>; and, <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_BestPractices.SizingReplicationInstance.html">Selecting
     * the best size for a replication instance</a>. </p>
     */
    inline const Aws::String& GetReplicationInstanceClass() const { return m_replicationInstanceClass; }
    inline bool ReplicationInstanceClassHasBeenSet() const { return m_replicationInstanceClassHasBeenSet; }
    template<typename ReplicationInstanceClassT = Aws::String>
    void SetReplicationInstanceClass(ReplicationInstanceClassT&& value) { m_replicationInstanceClassHasBeenSet = true; m_replicationInstanceClass = std::forward<ReplicationInstanceClassT>(value); }
    template<typename ReplicationInstanceClassT = Aws::String>
    CreateReplicationInstanceRequest& WithReplicationInstanceClass(ReplicationInstanceClassT&& value) { SetReplicationInstanceClass(std::forward<ReplicationInstanceClassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the VPC security group to be used with the replication instance.
     * The VPC security group must work with the VPC containing the replication
     * instance. </p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const { return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::forward<VpcSecurityGroupIdsT>(value); }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    CreateReplicationInstanceRequest& WithVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { SetVpcSecurityGroupIds(std::forward<VpcSecurityGroupIdsT>(value)); return *this;}
    template<typename VpcSecurityGroupIdsT = Aws::String>
    CreateReplicationInstanceRequest& AddVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.emplace_back(std::forward<VpcSecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Availability Zone where the replication instance will be created. The
     * default value is a random, system-chosen Availability Zone in the endpoint's
     * Amazon Web Services Region, for example: <code>us-east-1d</code>.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    CreateReplicationInstanceRequest& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A subnet group to associate with the replication instance.</p>
     */
    inline const Aws::String& GetReplicationSubnetGroupIdentifier() const { return m_replicationSubnetGroupIdentifier; }
    inline bool ReplicationSubnetGroupIdentifierHasBeenSet() const { return m_replicationSubnetGroupIdentifierHasBeenSet; }
    template<typename ReplicationSubnetGroupIdentifierT = Aws::String>
    void SetReplicationSubnetGroupIdentifier(ReplicationSubnetGroupIdentifierT&& value) { m_replicationSubnetGroupIdentifierHasBeenSet = true; m_replicationSubnetGroupIdentifier = std::forward<ReplicationSubnetGroupIdentifierT>(value); }
    template<typename ReplicationSubnetGroupIdentifierT = Aws::String>
    CreateReplicationInstanceRequest& WithReplicationSubnetGroupIdentifier(ReplicationSubnetGroupIdentifierT&& value) { SetReplicationSubnetGroupIdentifier(std::forward<ReplicationSubnetGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p>Default: A 30-minute window selected at random from an 8-hour block of
     * time per Amazon Web Services Region, occurring on a random day of the week.</p>
     * <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Minimum
     * 30-minute window.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    CreateReplicationInstanceRequest& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
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
    inline CreateReplicationInstanceRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine version number of the replication instance.</p> <p>If an engine
     * version number is not specified when a replication instance is created, the
     * default is the latest engine version available.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    CreateReplicationInstanceRequest& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether minor engine upgrades are applied
     * automatically to the replication instance during the maintenance window. This
     * parameter defaults to <code>true</code>.</p> <p>Default: <code>true</code> </p>
     */
    inline bool GetAutoMinorVersionUpgrade() const { return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline CreateReplicationInstanceRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more tags to be assigned to the replication instance.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateReplicationInstanceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateReplicationInstanceRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
    CreateReplicationInstanceRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
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
    inline CreateReplicationInstanceRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of custom DNS name servers supported for the replication instance to
     * access your on-premise source or target database. This list overrides the
     * default name servers supported by the replication instance. You can specify a
     * comma-separated list of internet addresses for up to four on-premise DNS name
     * servers. For example: <code>"1.1.1.1,2.2.2.2,3.3.3.3,4.4.4.4"</code> </p>
     */
    inline const Aws::String& GetDnsNameServers() const { return m_dnsNameServers; }
    inline bool DnsNameServersHasBeenSet() const { return m_dnsNameServersHasBeenSet; }
    template<typename DnsNameServersT = Aws::String>
    void SetDnsNameServers(DnsNameServersT&& value) { m_dnsNameServersHasBeenSet = true; m_dnsNameServers = std::forward<DnsNameServersT>(value); }
    template<typename DnsNameServersT = Aws::String>
    CreateReplicationInstanceRequest& WithDnsNameServers(DnsNameServersT&& value) { SetDnsNameServers(std::forward<DnsNameServersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name for the resource identifier at the end of the
     * <code>EndpointArn</code> response parameter that is returned in the created
     * <code>Endpoint</code> object. The value for this parameter can have up to 31
     * characters. It can contain only ASCII letters, digits, and hyphen ('-'). Also,
     * it can't end with a hyphen or contain two consecutive hyphens, and can only
     * begin with a letter, such as <code>Example-App-ARN1</code>. For example, this
     * value might result in the <code>EndpointArn</code> value
     * <code>arn:aws:dms:eu-west-1:012345678901:rep:Example-App-ARN1</code>. If you
     * don't specify a <code>ResourceIdentifier</code> value, DMS generates a default
     * identifier value for the end of <code>EndpointArn</code>.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const { return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    template<typename ResourceIdentifierT = Aws::String>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = Aws::String>
    CreateReplicationInstanceRequest& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
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
    CreateReplicationInstanceRequest& WithNetworkType(NetworkTypeT&& value) { SetNetworkType(std::forward<NetworkTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the settings required for kerberos authentication when creating the
     * replication instance.</p>
     */
    inline const KerberosAuthenticationSettings& GetKerberosAuthenticationSettings() const { return m_kerberosAuthenticationSettings; }
    inline bool KerberosAuthenticationSettingsHasBeenSet() const { return m_kerberosAuthenticationSettingsHasBeenSet; }
    template<typename KerberosAuthenticationSettingsT = KerberosAuthenticationSettings>
    void SetKerberosAuthenticationSettings(KerberosAuthenticationSettingsT&& value) { m_kerberosAuthenticationSettingsHasBeenSet = true; m_kerberosAuthenticationSettings = std::forward<KerberosAuthenticationSettingsT>(value); }
    template<typename KerberosAuthenticationSettingsT = KerberosAuthenticationSettings>
    CreateReplicationInstanceRequest& WithKerberosAuthenticationSettings(KerberosAuthenticationSettingsT&& value) { SetKerberosAuthenticationSettings(std::forward<KerberosAuthenticationSettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicationInstanceIdentifier;
    bool m_replicationInstanceIdentifierHasBeenSet = false;

    int m_allocatedStorage{0};
    bool m_allocatedStorageHasBeenSet = false;

    Aws::String m_replicationInstanceClass;
    bool m_replicationInstanceClassHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_replicationSubnetGroupIdentifier;
    bool m_replicationSubnetGroupIdentifierHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    bool m_multiAZ{false};
    bool m_multiAZHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_autoMinorVersionUpgrade{false};
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_publiclyAccessible{false};
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::String m_dnsNameServers;
    bool m_dnsNameServersHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::String m_networkType;
    bool m_networkTypeHasBeenSet = false;

    KerberosAuthenticationSettings m_kerberosAuthenticationSettings;
    bool m_kerberosAuthenticationSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
