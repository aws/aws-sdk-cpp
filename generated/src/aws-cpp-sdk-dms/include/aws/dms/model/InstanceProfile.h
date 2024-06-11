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
    AWS_DATABASEMIGRATIONSERVICE_API InstanceProfile();
    AWS_DATABASEMIGRATIONSERVICE_API InstanceProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API InstanceProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the instance
     * profile.</p>
     */
    inline const Aws::String& GetInstanceProfileArn() const{ return m_instanceProfileArn; }
    inline bool InstanceProfileArnHasBeenSet() const { return m_instanceProfileArnHasBeenSet; }
    inline void SetInstanceProfileArn(const Aws::String& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = value; }
    inline void SetInstanceProfileArn(Aws::String&& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = std::move(value); }
    inline void SetInstanceProfileArn(const char* value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn.assign(value); }
    inline InstanceProfile& WithInstanceProfileArn(const Aws::String& value) { SetInstanceProfileArn(value); return *this;}
    inline InstanceProfile& WithInstanceProfileArn(Aws::String&& value) { SetInstanceProfileArn(std::move(value)); return *this;}
    inline InstanceProfile& WithInstanceProfileArn(const char* value) { SetInstanceProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone where the instance profile runs.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline InstanceProfile& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline InstanceProfile& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline InstanceProfile& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
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
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }
    inline InstanceProfile& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline InstanceProfile& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline InstanceProfile& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the accessibility options for the instance profile. A value of
     * <code>true</code> represents an instance profile with a public IP address. A
     * value of <code>false</code> represents an instance profile with a private IP
     * address. The default value is <code>true</code>.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }
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
    inline const Aws::String& GetNetworkType() const{ return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(const Aws::String& value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline void SetNetworkType(Aws::String&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::move(value); }
    inline void SetNetworkType(const char* value) { m_networkTypeHasBeenSet = true; m_networkType.assign(value); }
    inline InstanceProfile& WithNetworkType(const Aws::String& value) { SetNetworkType(value); return *this;}
    inline InstanceProfile& WithNetworkType(Aws::String&& value) { SetNetworkType(std::move(value)); return *this;}
    inline InstanceProfile& WithNetworkType(const char* value) { SetNetworkType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name for the instance profile.</p>
     */
    inline const Aws::String& GetInstanceProfileName() const{ return m_instanceProfileName; }
    inline bool InstanceProfileNameHasBeenSet() const { return m_instanceProfileNameHasBeenSet; }
    inline void SetInstanceProfileName(const Aws::String& value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName = value; }
    inline void SetInstanceProfileName(Aws::String&& value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName = std::move(value); }
    inline void SetInstanceProfileName(const char* value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName.assign(value); }
    inline InstanceProfile& WithInstanceProfileName(const Aws::String& value) { SetInstanceProfileName(value); return *this;}
    inline InstanceProfile& WithInstanceProfileName(Aws::String&& value) { SetInstanceProfileName(std::move(value)); return *this;}
    inline InstanceProfile& WithInstanceProfileName(const char* value) { SetInstanceProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the instance profile. Descriptions can have up to 31
     * characters. A description can contain only ASCII letters, digits, and hyphens
     * ('-'). Also, it can't end with a hyphen or contain two consecutive hyphens, and
     * can only begin with a letter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline InstanceProfile& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline InstanceProfile& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline InstanceProfile& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the instance profile was created.</p>
     */
    inline const Aws::Utils::DateTime& GetInstanceProfileCreationTime() const{ return m_instanceProfileCreationTime; }
    inline bool InstanceProfileCreationTimeHasBeenSet() const { return m_instanceProfileCreationTimeHasBeenSet; }
    inline void SetInstanceProfileCreationTime(const Aws::Utils::DateTime& value) { m_instanceProfileCreationTimeHasBeenSet = true; m_instanceProfileCreationTime = value; }
    inline void SetInstanceProfileCreationTime(Aws::Utils::DateTime&& value) { m_instanceProfileCreationTimeHasBeenSet = true; m_instanceProfileCreationTime = std::move(value); }
    inline InstanceProfile& WithInstanceProfileCreationTime(const Aws::Utils::DateTime& value) { SetInstanceProfileCreationTime(value); return *this;}
    inline InstanceProfile& WithInstanceProfileCreationTime(Aws::Utils::DateTime&& value) { SetInstanceProfileCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subnet group that is associated with the instance
     * profile.</p>
     */
    inline const Aws::String& GetSubnetGroupIdentifier() const{ return m_subnetGroupIdentifier; }
    inline bool SubnetGroupIdentifierHasBeenSet() const { return m_subnetGroupIdentifierHasBeenSet; }
    inline void SetSubnetGroupIdentifier(const Aws::String& value) { m_subnetGroupIdentifierHasBeenSet = true; m_subnetGroupIdentifier = value; }
    inline void SetSubnetGroupIdentifier(Aws::String&& value) { m_subnetGroupIdentifierHasBeenSet = true; m_subnetGroupIdentifier = std::move(value); }
    inline void SetSubnetGroupIdentifier(const char* value) { m_subnetGroupIdentifierHasBeenSet = true; m_subnetGroupIdentifier.assign(value); }
    inline InstanceProfile& WithSubnetGroupIdentifier(const Aws::String& value) { SetSubnetGroupIdentifier(value); return *this;}
    inline InstanceProfile& WithSubnetGroupIdentifier(Aws::String&& value) { SetSubnetGroupIdentifier(std::move(value)); return *this;}
    inline InstanceProfile& WithSubnetGroupIdentifier(const char* value) { SetSubnetGroupIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC security groups that are used with the instance profile. The VPC
     * security group must work with the VPC containing the instance profile.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroups() const{ return m_vpcSecurityGroups; }
    inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }
    inline void SetVpcSecurityGroups(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = value; }
    inline void SetVpcSecurityGroups(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = std::move(value); }
    inline InstanceProfile& WithVpcSecurityGroups(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroups(value); return *this;}
    inline InstanceProfile& WithVpcSecurityGroups(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroups(std::move(value)); return *this;}
    inline InstanceProfile& AddVpcSecurityGroups(const Aws::String& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(value); return *this; }
    inline InstanceProfile& AddVpcSecurityGroups(Aws::String&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(std::move(value)); return *this; }
    inline InstanceProfile& AddVpcSecurityGroups(const char* value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_instanceProfileArn;
    bool m_instanceProfileArnHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::String m_networkType;
    bool m_networkTypeHasBeenSet = false;

    Aws::String m_instanceProfileName;
    bool m_instanceProfileNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_instanceProfileCreationTime;
    bool m_instanceProfileCreationTimeHasBeenSet = false;

    Aws::String m_subnetGroupIdentifier;
    bool m_subnetGroupIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroups;
    bool m_vpcSecurityGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
