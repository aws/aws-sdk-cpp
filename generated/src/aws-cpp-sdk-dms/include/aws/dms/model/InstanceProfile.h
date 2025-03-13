/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Provides information that defines an instance profile.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/InstanceProfile">AWS
   * API Reference</a></p>
   */
  class InstanceProfile
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API InstanceProfile() = default;
    AWS_DATABASEMIGRATIONSERVICE_API InstanceProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API InstanceProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the instance
     * profile.</p>
     */
    inline const Aws::String& GetInstanceProfileArn() const { return m_instanceProfileArn; }
    inline bool InstanceProfileArnHasBeenSet() const { return m_instanceProfileArnHasBeenSet; }
    template<typename InstanceProfileArnT = Aws::String>
    void SetInstanceProfileArn(InstanceProfileArnT&& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = std::forward<InstanceProfileArnT>(value); }
    template<typename InstanceProfileArnT = Aws::String>
    InstanceProfile& WithInstanceProfileArn(InstanceProfileArnT&& value) { SetInstanceProfileArn(std::forward<InstanceProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone where the instance profile runs.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    InstanceProfile& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that is used to encrypt the
     * connection parameters for the instance profile.</p> <p>If you don't specify a
     * value for the <code>KmsKeyArn</code> parameter, then DMS uses your default
     * encryption key.</p> <p>KMS creates the default encryption key for your Amazon
     * Web Services account. Your Amazon Web Services account has a different default
     * encryption key for each Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    InstanceProfile& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the accessibility options for the instance profile. A value of
     * <code>true</code> represents an instance profile with a public IP address. A
     * value of <code>false</code> represents an instance profile with a private IP
     * address. The default value is <code>true</code>.</p>
     */
    inline bool GetPubliclyAccessible() const { return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline InstanceProfile& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the network type for the instance profile. A value of
     * <code>IPV4</code> represents an instance profile with IPv4 network type and only
     * supports IPv4 addressing. A value of <code>IPV6</code> represents an instance
     * profile with IPv6 network type and only supports IPv6 addressing. A value of
     * <code>DUAL</code> represents an instance profile with dual network type that
     * supports IPv4 and IPv6 addressing.</p>
     */
    inline const Aws::String& GetNetworkType() const { return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    template<typename NetworkTypeT = Aws::String>
    void SetNetworkType(NetworkTypeT&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::forward<NetworkTypeT>(value); }
    template<typename NetworkTypeT = Aws::String>
    InstanceProfile& WithNetworkType(NetworkTypeT&& value) { SetNetworkType(std::forward<NetworkTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name for the instance profile.</p>
     */
    inline const Aws::String& GetInstanceProfileName() const { return m_instanceProfileName; }
    inline bool InstanceProfileNameHasBeenSet() const { return m_instanceProfileNameHasBeenSet; }
    template<typename InstanceProfileNameT = Aws::String>
    void SetInstanceProfileName(InstanceProfileNameT&& value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName = std::forward<InstanceProfileNameT>(value); }
    template<typename InstanceProfileNameT = Aws::String>
    InstanceProfile& WithInstanceProfileName(InstanceProfileNameT&& value) { SetInstanceProfileName(std::forward<InstanceProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the instance profile. Descriptions can have up to 31
     * characters. A description can contain only ASCII letters, digits, and hyphens
     * ('-'). Also, it can't end with a hyphen or contain two consecutive hyphens, and
     * can only begin with a letter.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    InstanceProfile& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the instance profile was created.</p>
     */
    inline const Aws::Utils::DateTime& GetInstanceProfileCreationTime() const { return m_instanceProfileCreationTime; }
    inline bool InstanceProfileCreationTimeHasBeenSet() const { return m_instanceProfileCreationTimeHasBeenSet; }
    template<typename InstanceProfileCreationTimeT = Aws::Utils::DateTime>
    void SetInstanceProfileCreationTime(InstanceProfileCreationTimeT&& value) { m_instanceProfileCreationTimeHasBeenSet = true; m_instanceProfileCreationTime = std::forward<InstanceProfileCreationTimeT>(value); }
    template<typename InstanceProfileCreationTimeT = Aws::Utils::DateTime>
    InstanceProfile& WithInstanceProfileCreationTime(InstanceProfileCreationTimeT&& value) { SetInstanceProfileCreationTime(std::forward<InstanceProfileCreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subnet group that is associated with the instance
     * profile.</p>
     */
    inline const Aws::String& GetSubnetGroupIdentifier() const { return m_subnetGroupIdentifier; }
    inline bool SubnetGroupIdentifierHasBeenSet() const { return m_subnetGroupIdentifierHasBeenSet; }
    template<typename SubnetGroupIdentifierT = Aws::String>
    void SetSubnetGroupIdentifier(SubnetGroupIdentifierT&& value) { m_subnetGroupIdentifierHasBeenSet = true; m_subnetGroupIdentifier = std::forward<SubnetGroupIdentifierT>(value); }
    template<typename SubnetGroupIdentifierT = Aws::String>
    InstanceProfile& WithSubnetGroupIdentifier(SubnetGroupIdentifierT&& value) { SetSubnetGroupIdentifier(std::forward<SubnetGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC security groups that are used with the instance profile. The VPC
     * security group must work with the VPC containing the instance profile.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroups() const { return m_vpcSecurityGroups; }
    inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }
    template<typename VpcSecurityGroupsT = Aws::Vector<Aws::String>>
    void SetVpcSecurityGroups(VpcSecurityGroupsT&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = std::forward<VpcSecurityGroupsT>(value); }
    template<typename VpcSecurityGroupsT = Aws::Vector<Aws::String>>
    InstanceProfile& WithVpcSecurityGroups(VpcSecurityGroupsT&& value) { SetVpcSecurityGroups(std::forward<VpcSecurityGroupsT>(value)); return *this;}
    template<typename VpcSecurityGroupsT = Aws::String>
    InstanceProfile& AddVpcSecurityGroups(VpcSecurityGroupsT&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.emplace_back(std::forward<VpcSecurityGroupsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_instanceProfileArn;
    bool m_instanceProfileArnHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    bool m_publiclyAccessible{false};
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::String m_networkType;
    bool m_networkTypeHasBeenSet = false;

    Aws::String m_instanceProfileName;
    bool m_instanceProfileNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_instanceProfileCreationTime{};
    bool m_instanceProfileCreationTimeHasBeenSet = false;

    Aws::String m_subnetGroupIdentifier;
    bool m_subnetGroupIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroups;
    bool m_vpcSecurityGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
