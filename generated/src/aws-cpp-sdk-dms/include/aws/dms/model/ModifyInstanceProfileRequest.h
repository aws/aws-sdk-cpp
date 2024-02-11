/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   */
  class ModifyInstanceProfileRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ModifyInstanceProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyInstanceProfile"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the instance profile. Identifiers must begin with a letter
     * and must contain only ASCII letters, digits, and hyphens. They can't end with a
     * hyphen, or contain two consecutive hyphens.</p>
     */
    inline const Aws::String& GetInstanceProfileIdentifier() const{ return m_instanceProfileIdentifier; }

    /**
     * <p>The identifier of the instance profile. Identifiers must begin with a letter
     * and must contain only ASCII letters, digits, and hyphens. They can't end with a
     * hyphen, or contain two consecutive hyphens.</p>
     */
    inline bool InstanceProfileIdentifierHasBeenSet() const { return m_instanceProfileIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the instance profile. Identifiers must begin with a letter
     * and must contain only ASCII letters, digits, and hyphens. They can't end with a
     * hyphen, or contain two consecutive hyphens.</p>
     */
    inline void SetInstanceProfileIdentifier(const Aws::String& value) { m_instanceProfileIdentifierHasBeenSet = true; m_instanceProfileIdentifier = value; }

    /**
     * <p>The identifier of the instance profile. Identifiers must begin with a letter
     * and must contain only ASCII letters, digits, and hyphens. They can't end with a
     * hyphen, or contain two consecutive hyphens.</p>
     */
    inline void SetInstanceProfileIdentifier(Aws::String&& value) { m_instanceProfileIdentifierHasBeenSet = true; m_instanceProfileIdentifier = std::move(value); }

    /**
     * <p>The identifier of the instance profile. Identifiers must begin with a letter
     * and must contain only ASCII letters, digits, and hyphens. They can't end with a
     * hyphen, or contain two consecutive hyphens.</p>
     */
    inline void SetInstanceProfileIdentifier(const char* value) { m_instanceProfileIdentifierHasBeenSet = true; m_instanceProfileIdentifier.assign(value); }

    /**
     * <p>The identifier of the instance profile. Identifiers must begin with a letter
     * and must contain only ASCII letters, digits, and hyphens. They can't end with a
     * hyphen, or contain two consecutive hyphens.</p>
     */
    inline ModifyInstanceProfileRequest& WithInstanceProfileIdentifier(const Aws::String& value) { SetInstanceProfileIdentifier(value); return *this;}

    /**
     * <p>The identifier of the instance profile. Identifiers must begin with a letter
     * and must contain only ASCII letters, digits, and hyphens. They can't end with a
     * hyphen, or contain two consecutive hyphens.</p>
     */
    inline ModifyInstanceProfileRequest& WithInstanceProfileIdentifier(Aws::String&& value) { SetInstanceProfileIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the instance profile. Identifiers must begin with a letter
     * and must contain only ASCII letters, digits, and hyphens. They can't end with a
     * hyphen, or contain two consecutive hyphens.</p>
     */
    inline ModifyInstanceProfileRequest& WithInstanceProfileIdentifier(const char* value) { SetInstanceProfileIdentifier(value); return *this;}


    /**
     * <p>The Availability Zone where the instance profile runs.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone where the instance profile runs.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone where the instance profile runs.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone where the instance profile runs.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone where the instance profile runs.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone where the instance profile runs.</p>
     */
    inline ModifyInstanceProfileRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone where the instance profile runs.</p>
     */
    inline ModifyInstanceProfileRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone where the instance profile runs.</p>
     */
    inline ModifyInstanceProfileRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that is used to encrypt the
     * connection parameters for the instance profile.</p> <p>If you don't specify a
     * value for the <code>KmsKeyArn</code> parameter, then DMS uses your default
     * encryption key.</p> <p>KMS creates the default encryption key for your Amazon
     * Web Services account. Your Amazon Web Services account has a different default
     * encryption key for each Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that is used to encrypt the
     * connection parameters for the instance profile.</p> <p>If you don't specify a
     * value for the <code>KmsKeyArn</code> parameter, then DMS uses your default
     * encryption key.</p> <p>KMS creates the default encryption key for your Amazon
     * Web Services account. Your Amazon Web Services account has a different default
     * encryption key for each Amazon Web Services Region.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that is used to encrypt the
     * connection parameters for the instance profile.</p> <p>If you don't specify a
     * value for the <code>KmsKeyArn</code> parameter, then DMS uses your default
     * encryption key.</p> <p>KMS creates the default encryption key for your Amazon
     * Web Services account. Your Amazon Web Services account has a different default
     * encryption key for each Amazon Web Services Region.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that is used to encrypt the
     * connection parameters for the instance profile.</p> <p>If you don't specify a
     * value for the <code>KmsKeyArn</code> parameter, then DMS uses your default
     * encryption key.</p> <p>KMS creates the default encryption key for your Amazon
     * Web Services account. Your Amazon Web Services account has a different default
     * encryption key for each Amazon Web Services Region.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that is used to encrypt the
     * connection parameters for the instance profile.</p> <p>If you don't specify a
     * value for the <code>KmsKeyArn</code> parameter, then DMS uses your default
     * encryption key.</p> <p>KMS creates the default encryption key for your Amazon
     * Web Services account. Your Amazon Web Services account has a different default
     * encryption key for each Amazon Web Services Region.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that is used to encrypt the
     * connection parameters for the instance profile.</p> <p>If you don't specify a
     * value for the <code>KmsKeyArn</code> parameter, then DMS uses your default
     * encryption key.</p> <p>KMS creates the default encryption key for your Amazon
     * Web Services account. Your Amazon Web Services account has a different default
     * encryption key for each Amazon Web Services Region.</p>
     */
    inline ModifyInstanceProfileRequest& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that is used to encrypt the
     * connection parameters for the instance profile.</p> <p>If you don't specify a
     * value for the <code>KmsKeyArn</code> parameter, then DMS uses your default
     * encryption key.</p> <p>KMS creates the default encryption key for your Amazon
     * Web Services account. Your Amazon Web Services account has a different default
     * encryption key for each Amazon Web Services Region.</p>
     */
    inline ModifyInstanceProfileRequest& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that is used to encrypt the
     * connection parameters for the instance profile.</p> <p>If you don't specify a
     * value for the <code>KmsKeyArn</code> parameter, then DMS uses your default
     * encryption key.</p> <p>KMS creates the default encryption key for your Amazon
     * Web Services account. Your Amazon Web Services account has a different default
     * encryption key for each Amazon Web Services Region.</p>
     */
    inline ModifyInstanceProfileRequest& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}


    /**
     * <p>Specifies the accessibility options for the instance profile. A value of
     * <code>true</code> represents an instance profile with a public IP address. A
     * value of <code>false</code> represents an instance profile with a private IP
     * address. The default value is <code>true</code>.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>Specifies the accessibility options for the instance profile. A value of
     * <code>true</code> represents an instance profile with a public IP address. A
     * value of <code>false</code> represents an instance profile with a private IP
     * address. The default value is <code>true</code>.</p>
     */
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }

    /**
     * <p>Specifies the accessibility options for the instance profile. A value of
     * <code>true</code> represents an instance profile with a public IP address. A
     * value of <code>false</code> represents an instance profile with a private IP
     * address. The default value is <code>true</code>.</p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>Specifies the accessibility options for the instance profile. A value of
     * <code>true</code> represents an instance profile with a public IP address. A
     * value of <code>false</code> represents an instance profile with a private IP
     * address. The default value is <code>true</code>.</p>
     */
    inline ModifyInstanceProfileRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


    /**
     * <p>Specifies the network type for the instance profile. A value of
     * <code>IPV4</code> represents an instance profile with IPv4 network type and only
     * supports IPv4 addressing. A value of <code>IPV6</code> represents an instance
     * profile with IPv6 network type and only supports IPv6 addressing. A value of
     * <code>DUAL</code> represents an instance profile with dual network type that
     * supports IPv4 and IPv6 addressing.</p>
     */
    inline const Aws::String& GetNetworkType() const{ return m_networkType; }

    /**
     * <p>Specifies the network type for the instance profile. A value of
     * <code>IPV4</code> represents an instance profile with IPv4 network type and only
     * supports IPv4 addressing. A value of <code>IPV6</code> represents an instance
     * profile with IPv6 network type and only supports IPv6 addressing. A value of
     * <code>DUAL</code> represents an instance profile with dual network type that
     * supports IPv4 and IPv6 addressing.</p>
     */
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }

    /**
     * <p>Specifies the network type for the instance profile. A value of
     * <code>IPV4</code> represents an instance profile with IPv4 network type and only
     * supports IPv4 addressing. A value of <code>IPV6</code> represents an instance
     * profile with IPv6 network type and only supports IPv6 addressing. A value of
     * <code>DUAL</code> represents an instance profile with dual network type that
     * supports IPv4 and IPv6 addressing.</p>
     */
    inline void SetNetworkType(const Aws::String& value) { m_networkTypeHasBeenSet = true; m_networkType = value; }

    /**
     * <p>Specifies the network type for the instance profile. A value of
     * <code>IPV4</code> represents an instance profile with IPv4 network type and only
     * supports IPv4 addressing. A value of <code>IPV6</code> represents an instance
     * profile with IPv6 network type and only supports IPv6 addressing. A value of
     * <code>DUAL</code> represents an instance profile with dual network type that
     * supports IPv4 and IPv6 addressing.</p>
     */
    inline void SetNetworkType(Aws::String&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::move(value); }

    /**
     * <p>Specifies the network type for the instance profile. A value of
     * <code>IPV4</code> represents an instance profile with IPv4 network type and only
     * supports IPv4 addressing. A value of <code>IPV6</code> represents an instance
     * profile with IPv6 network type and only supports IPv6 addressing. A value of
     * <code>DUAL</code> represents an instance profile with dual network type that
     * supports IPv4 and IPv6 addressing.</p>
     */
    inline void SetNetworkType(const char* value) { m_networkTypeHasBeenSet = true; m_networkType.assign(value); }

    /**
     * <p>Specifies the network type for the instance profile. A value of
     * <code>IPV4</code> represents an instance profile with IPv4 network type and only
     * supports IPv4 addressing. A value of <code>IPV6</code> represents an instance
     * profile with IPv6 network type and only supports IPv6 addressing. A value of
     * <code>DUAL</code> represents an instance profile with dual network type that
     * supports IPv4 and IPv6 addressing.</p>
     */
    inline ModifyInstanceProfileRequest& WithNetworkType(const Aws::String& value) { SetNetworkType(value); return *this;}

    /**
     * <p>Specifies the network type for the instance profile. A value of
     * <code>IPV4</code> represents an instance profile with IPv4 network type and only
     * supports IPv4 addressing. A value of <code>IPV6</code> represents an instance
     * profile with IPv6 network type and only supports IPv6 addressing. A value of
     * <code>DUAL</code> represents an instance profile with dual network type that
     * supports IPv4 and IPv6 addressing.</p>
     */
    inline ModifyInstanceProfileRequest& WithNetworkType(Aws::String&& value) { SetNetworkType(std::move(value)); return *this;}

    /**
     * <p>Specifies the network type for the instance profile. A value of
     * <code>IPV4</code> represents an instance profile with IPv4 network type and only
     * supports IPv4 addressing. A value of <code>IPV6</code> represents an instance
     * profile with IPv6 network type and only supports IPv6 addressing. A value of
     * <code>DUAL</code> represents an instance profile with dual network type that
     * supports IPv4 and IPv6 addressing.</p>
     */
    inline ModifyInstanceProfileRequest& WithNetworkType(const char* value) { SetNetworkType(value); return *this;}


    /**
     * <p>A user-friendly name for the instance profile.</p>
     */
    inline const Aws::String& GetInstanceProfileName() const{ return m_instanceProfileName; }

    /**
     * <p>A user-friendly name for the instance profile.</p>
     */
    inline bool InstanceProfileNameHasBeenSet() const { return m_instanceProfileNameHasBeenSet; }

    /**
     * <p>A user-friendly name for the instance profile.</p>
     */
    inline void SetInstanceProfileName(const Aws::String& value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName = value; }

    /**
     * <p>A user-friendly name for the instance profile.</p>
     */
    inline void SetInstanceProfileName(Aws::String&& value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName = std::move(value); }

    /**
     * <p>A user-friendly name for the instance profile.</p>
     */
    inline void SetInstanceProfileName(const char* value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName.assign(value); }

    /**
     * <p>A user-friendly name for the instance profile.</p>
     */
    inline ModifyInstanceProfileRequest& WithInstanceProfileName(const Aws::String& value) { SetInstanceProfileName(value); return *this;}

    /**
     * <p>A user-friendly name for the instance profile.</p>
     */
    inline ModifyInstanceProfileRequest& WithInstanceProfileName(Aws::String&& value) { SetInstanceProfileName(std::move(value)); return *this;}

    /**
     * <p>A user-friendly name for the instance profile.</p>
     */
    inline ModifyInstanceProfileRequest& WithInstanceProfileName(const char* value) { SetInstanceProfileName(value); return *this;}


    /**
     * <p>A user-friendly description for the instance profile.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A user-friendly description for the instance profile.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A user-friendly description for the instance profile.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A user-friendly description for the instance profile.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A user-friendly description for the instance profile.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A user-friendly description for the instance profile.</p>
     */
    inline ModifyInstanceProfileRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A user-friendly description for the instance profile.</p>
     */
    inline ModifyInstanceProfileRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A user-friendly description for the instance profile.</p>
     */
    inline ModifyInstanceProfileRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A subnet group to associate with the instance profile.</p>
     */
    inline const Aws::String& GetSubnetGroupIdentifier() const{ return m_subnetGroupIdentifier; }

    /**
     * <p>A subnet group to associate with the instance profile.</p>
     */
    inline bool SubnetGroupIdentifierHasBeenSet() const { return m_subnetGroupIdentifierHasBeenSet; }

    /**
     * <p>A subnet group to associate with the instance profile.</p>
     */
    inline void SetSubnetGroupIdentifier(const Aws::String& value) { m_subnetGroupIdentifierHasBeenSet = true; m_subnetGroupIdentifier = value; }

    /**
     * <p>A subnet group to associate with the instance profile.</p>
     */
    inline void SetSubnetGroupIdentifier(Aws::String&& value) { m_subnetGroupIdentifierHasBeenSet = true; m_subnetGroupIdentifier = std::move(value); }

    /**
     * <p>A subnet group to associate with the instance profile.</p>
     */
    inline void SetSubnetGroupIdentifier(const char* value) { m_subnetGroupIdentifierHasBeenSet = true; m_subnetGroupIdentifier.assign(value); }

    /**
     * <p>A subnet group to associate with the instance profile.</p>
     */
    inline ModifyInstanceProfileRequest& WithSubnetGroupIdentifier(const Aws::String& value) { SetSubnetGroupIdentifier(value); return *this;}

    /**
     * <p>A subnet group to associate with the instance profile.</p>
     */
    inline ModifyInstanceProfileRequest& WithSubnetGroupIdentifier(Aws::String&& value) { SetSubnetGroupIdentifier(std::move(value)); return *this;}

    /**
     * <p>A subnet group to associate with the instance profile.</p>
     */
    inline ModifyInstanceProfileRequest& WithSubnetGroupIdentifier(const char* value) { SetSubnetGroupIdentifier(value); return *this;}


    /**
     * <p>Specifies the VPC security groups to be used with the instance profile. The
     * VPC security group must work with the VPC containing the instance profile.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroups() const{ return m_vpcSecurityGroups; }

    /**
     * <p>Specifies the VPC security groups to be used with the instance profile. The
     * VPC security group must work with the VPC containing the instance profile.</p>
     */
    inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }

    /**
     * <p>Specifies the VPC security groups to be used with the instance profile. The
     * VPC security group must work with the VPC containing the instance profile.</p>
     */
    inline void SetVpcSecurityGroups(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = value; }

    /**
     * <p>Specifies the VPC security groups to be used with the instance profile. The
     * VPC security group must work with the VPC containing the instance profile.</p>
     */
    inline void SetVpcSecurityGroups(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = std::move(value); }

    /**
     * <p>Specifies the VPC security groups to be used with the instance profile. The
     * VPC security group must work with the VPC containing the instance profile.</p>
     */
    inline ModifyInstanceProfileRequest& WithVpcSecurityGroups(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroups(value); return *this;}

    /**
     * <p>Specifies the VPC security groups to be used with the instance profile. The
     * VPC security group must work with the VPC containing the instance profile.</p>
     */
    inline ModifyInstanceProfileRequest& WithVpcSecurityGroups(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>Specifies the VPC security groups to be used with the instance profile. The
     * VPC security group must work with the VPC containing the instance profile.</p>
     */
    inline ModifyInstanceProfileRequest& AddVpcSecurityGroups(const Aws::String& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(value); return *this; }

    /**
     * <p>Specifies the VPC security groups to be used with the instance profile. The
     * VPC security group must work with the VPC containing the instance profile.</p>
     */
    inline ModifyInstanceProfileRequest& AddVpcSecurityGroups(Aws::String&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the VPC security groups to be used with the instance profile. The
     * VPC security group must work with the VPC containing the instance profile.</p>
     */
    inline ModifyInstanceProfileRequest& AddVpcSecurityGroups(const char* value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(value); return *this; }

  private:

    Aws::String m_instanceProfileIdentifier;
    bool m_instanceProfileIdentifierHasBeenSet = false;

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

    Aws::String m_subnetGroupIdentifier;
    bool m_subnetGroupIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroups;
    bool m_vpcSecurityGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
