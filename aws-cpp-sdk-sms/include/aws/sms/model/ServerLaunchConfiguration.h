/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/model/Server.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/UserData.h>
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
namespace SMS
{
namespace Model
{

  /**
   * <p>Launch configuration for a server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ServerLaunchConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_SMS_API ServerLaunchConfiguration
  {
  public:
    ServerLaunchConfiguration();
    ServerLaunchConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ServerLaunchConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifier of the server the launch configuration is associated with.</p>
     */
    inline const Server& GetServer() const{ return m_server; }

    /**
     * <p>Identifier of the server the launch configuration is associated with.</p>
     */
    inline bool ServerHasBeenSet() const { return m_serverHasBeenSet; }

    /**
     * <p>Identifier of the server the launch configuration is associated with.</p>
     */
    inline void SetServer(const Server& value) { m_serverHasBeenSet = true; m_server = value; }

    /**
     * <p>Identifier of the server the launch configuration is associated with.</p>
     */
    inline void SetServer(Server&& value) { m_serverHasBeenSet = true; m_server = std::move(value); }

    /**
     * <p>Identifier of the server the launch configuration is associated with.</p>
     */
    inline ServerLaunchConfiguration& WithServer(const Server& value) { SetServer(value); return *this;}

    /**
     * <p>Identifier of the server the launch configuration is associated with.</p>
     */
    inline ServerLaunchConfiguration& WithServer(Server&& value) { SetServer(std::move(value)); return *this;}


    /**
     * <p>Logical ID of the server in the Amazon CloudFormation template.</p>
     */
    inline const Aws::String& GetLogicalId() const{ return m_logicalId; }

    /**
     * <p>Logical ID of the server in the Amazon CloudFormation template.</p>
     */
    inline bool LogicalIdHasBeenSet() const { return m_logicalIdHasBeenSet; }

    /**
     * <p>Logical ID of the server in the Amazon CloudFormation template.</p>
     */
    inline void SetLogicalId(const Aws::String& value) { m_logicalIdHasBeenSet = true; m_logicalId = value; }

    /**
     * <p>Logical ID of the server in the Amazon CloudFormation template.</p>
     */
    inline void SetLogicalId(Aws::String&& value) { m_logicalIdHasBeenSet = true; m_logicalId = std::move(value); }

    /**
     * <p>Logical ID of the server in the Amazon CloudFormation template.</p>
     */
    inline void SetLogicalId(const char* value) { m_logicalIdHasBeenSet = true; m_logicalId.assign(value); }

    /**
     * <p>Logical ID of the server in the Amazon CloudFormation template.</p>
     */
    inline ServerLaunchConfiguration& WithLogicalId(const Aws::String& value) { SetLogicalId(value); return *this;}

    /**
     * <p>Logical ID of the server in the Amazon CloudFormation template.</p>
     */
    inline ServerLaunchConfiguration& WithLogicalId(Aws::String&& value) { SetLogicalId(std::move(value)); return *this;}

    /**
     * <p>Logical ID of the server in the Amazon CloudFormation template.</p>
     */
    inline ServerLaunchConfiguration& WithLogicalId(const char* value) { SetLogicalId(value); return *this;}


    /**
     * <p>Identifier of the VPC the server should be launched into.</p>
     */
    inline const Aws::String& GetVpc() const{ return m_vpc; }

    /**
     * <p>Identifier of the VPC the server should be launched into.</p>
     */
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }

    /**
     * <p>Identifier of the VPC the server should be launched into.</p>
     */
    inline void SetVpc(const Aws::String& value) { m_vpcHasBeenSet = true; m_vpc = value; }

    /**
     * <p>Identifier of the VPC the server should be launched into.</p>
     */
    inline void SetVpc(Aws::String&& value) { m_vpcHasBeenSet = true; m_vpc = std::move(value); }

    /**
     * <p>Identifier of the VPC the server should be launched into.</p>
     */
    inline void SetVpc(const char* value) { m_vpcHasBeenSet = true; m_vpc.assign(value); }

    /**
     * <p>Identifier of the VPC the server should be launched into.</p>
     */
    inline ServerLaunchConfiguration& WithVpc(const Aws::String& value) { SetVpc(value); return *this;}

    /**
     * <p>Identifier of the VPC the server should be launched into.</p>
     */
    inline ServerLaunchConfiguration& WithVpc(Aws::String&& value) { SetVpc(std::move(value)); return *this;}

    /**
     * <p>Identifier of the VPC the server should be launched into.</p>
     */
    inline ServerLaunchConfiguration& WithVpc(const char* value) { SetVpc(value); return *this;}


    /**
     * <p>Identifier of the subnet the server should be launched into.</p>
     */
    inline const Aws::String& GetSubnet() const{ return m_subnet; }

    /**
     * <p>Identifier of the subnet the server should be launched into.</p>
     */
    inline bool SubnetHasBeenSet() const { return m_subnetHasBeenSet; }

    /**
     * <p>Identifier of the subnet the server should be launched into.</p>
     */
    inline void SetSubnet(const Aws::String& value) { m_subnetHasBeenSet = true; m_subnet = value; }

    /**
     * <p>Identifier of the subnet the server should be launched into.</p>
     */
    inline void SetSubnet(Aws::String&& value) { m_subnetHasBeenSet = true; m_subnet = std::move(value); }

    /**
     * <p>Identifier of the subnet the server should be launched into.</p>
     */
    inline void SetSubnet(const char* value) { m_subnetHasBeenSet = true; m_subnet.assign(value); }

    /**
     * <p>Identifier of the subnet the server should be launched into.</p>
     */
    inline ServerLaunchConfiguration& WithSubnet(const Aws::String& value) { SetSubnet(value); return *this;}

    /**
     * <p>Identifier of the subnet the server should be launched into.</p>
     */
    inline ServerLaunchConfiguration& WithSubnet(Aws::String&& value) { SetSubnet(std::move(value)); return *this;}

    /**
     * <p>Identifier of the subnet the server should be launched into.</p>
     */
    inline ServerLaunchConfiguration& WithSubnet(const char* value) { SetSubnet(value); return *this;}


    /**
     * <p>Identifier of the security group that applies to the launched server.</p>
     */
    inline const Aws::String& GetSecurityGroup() const{ return m_securityGroup; }

    /**
     * <p>Identifier of the security group that applies to the launched server.</p>
     */
    inline bool SecurityGroupHasBeenSet() const { return m_securityGroupHasBeenSet; }

    /**
     * <p>Identifier of the security group that applies to the launched server.</p>
     */
    inline void SetSecurityGroup(const Aws::String& value) { m_securityGroupHasBeenSet = true; m_securityGroup = value; }

    /**
     * <p>Identifier of the security group that applies to the launched server.</p>
     */
    inline void SetSecurityGroup(Aws::String&& value) { m_securityGroupHasBeenSet = true; m_securityGroup = std::move(value); }

    /**
     * <p>Identifier of the security group that applies to the launched server.</p>
     */
    inline void SetSecurityGroup(const char* value) { m_securityGroupHasBeenSet = true; m_securityGroup.assign(value); }

    /**
     * <p>Identifier of the security group that applies to the launched server.</p>
     */
    inline ServerLaunchConfiguration& WithSecurityGroup(const Aws::String& value) { SetSecurityGroup(value); return *this;}

    /**
     * <p>Identifier of the security group that applies to the launched server.</p>
     */
    inline ServerLaunchConfiguration& WithSecurityGroup(Aws::String&& value) { SetSecurityGroup(std::move(value)); return *this;}

    /**
     * <p>Identifier of the security group that applies to the launched server.</p>
     */
    inline ServerLaunchConfiguration& WithSecurityGroup(const char* value) { SetSecurityGroup(value); return *this;}


    /**
     * <p>Name of the EC2 SSH Key to be used for connecting to the launched server.</p>
     */
    inline const Aws::String& GetEc2KeyName() const{ return m_ec2KeyName; }

    /**
     * <p>Name of the EC2 SSH Key to be used for connecting to the launched server.</p>
     */
    inline bool Ec2KeyNameHasBeenSet() const { return m_ec2KeyNameHasBeenSet; }

    /**
     * <p>Name of the EC2 SSH Key to be used for connecting to the launched server.</p>
     */
    inline void SetEc2KeyName(const Aws::String& value) { m_ec2KeyNameHasBeenSet = true; m_ec2KeyName = value; }

    /**
     * <p>Name of the EC2 SSH Key to be used for connecting to the launched server.</p>
     */
    inline void SetEc2KeyName(Aws::String&& value) { m_ec2KeyNameHasBeenSet = true; m_ec2KeyName = std::move(value); }

    /**
     * <p>Name of the EC2 SSH Key to be used for connecting to the launched server.</p>
     */
    inline void SetEc2KeyName(const char* value) { m_ec2KeyNameHasBeenSet = true; m_ec2KeyName.assign(value); }

    /**
     * <p>Name of the EC2 SSH Key to be used for connecting to the launched server.</p>
     */
    inline ServerLaunchConfiguration& WithEc2KeyName(const Aws::String& value) { SetEc2KeyName(value); return *this;}

    /**
     * <p>Name of the EC2 SSH Key to be used for connecting to the launched server.</p>
     */
    inline ServerLaunchConfiguration& WithEc2KeyName(Aws::String&& value) { SetEc2KeyName(std::move(value)); return *this;}

    /**
     * <p>Name of the EC2 SSH Key to be used for connecting to the launched server.</p>
     */
    inline ServerLaunchConfiguration& WithEc2KeyName(const char* value) { SetEc2KeyName(value); return *this;}


    /**
     * <p>Location of the user-data script to be executed when launching the
     * server.</p>
     */
    inline const UserData& GetUserData() const{ return m_userData; }

    /**
     * <p>Location of the user-data script to be executed when launching the
     * server.</p>
     */
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }

    /**
     * <p>Location of the user-data script to be executed when launching the
     * server.</p>
     */
    inline void SetUserData(const UserData& value) { m_userDataHasBeenSet = true; m_userData = value; }

    /**
     * <p>Location of the user-data script to be executed when launching the
     * server.</p>
     */
    inline void SetUserData(UserData&& value) { m_userDataHasBeenSet = true; m_userData = std::move(value); }

    /**
     * <p>Location of the user-data script to be executed when launching the
     * server.</p>
     */
    inline ServerLaunchConfiguration& WithUserData(const UserData& value) { SetUserData(value); return *this;}

    /**
     * <p>Location of the user-data script to be executed when launching the
     * server.</p>
     */
    inline ServerLaunchConfiguration& WithUserData(UserData&& value) { SetUserData(std::move(value)); return *this;}


    /**
     * <p>Instance type to be used for launching the server.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>Instance type to be used for launching the server.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>Instance type to be used for launching the server.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>Instance type to be used for launching the server.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>Instance type to be used for launching the server.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>Instance type to be used for launching the server.</p>
     */
    inline ServerLaunchConfiguration& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>Instance type to be used for launching the server.</p>
     */
    inline ServerLaunchConfiguration& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>Instance type to be used for launching the server.</p>
     */
    inline ServerLaunchConfiguration& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>If true, a publicly accessible IP address is created when launching the
     * server.</p>
     */
    inline bool GetAssociatePublicIpAddress() const{ return m_associatePublicIpAddress; }

    /**
     * <p>If true, a publicly accessible IP address is created when launching the
     * server.</p>
     */
    inline bool AssociatePublicIpAddressHasBeenSet() const { return m_associatePublicIpAddressHasBeenSet; }

    /**
     * <p>If true, a publicly accessible IP address is created when launching the
     * server.</p>
     */
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }

    /**
     * <p>If true, a publicly accessible IP address is created when launching the
     * server.</p>
     */
    inline ServerLaunchConfiguration& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}

  private:

    Server m_server;
    bool m_serverHasBeenSet;

    Aws::String m_logicalId;
    bool m_logicalIdHasBeenSet;

    Aws::String m_vpc;
    bool m_vpcHasBeenSet;

    Aws::String m_subnet;
    bool m_subnetHasBeenSet;

    Aws::String m_securityGroup;
    bool m_securityGroupHasBeenSet;

    Aws::String m_ec2KeyName;
    bool m_ec2KeyNameHasBeenSet;

    UserData m_userData;
    bool m_userDataHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    bool m_associatePublicIpAddress;
    bool m_associatePublicIpAddressHasBeenSet;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
