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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/AssignPublicIp.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>An object representing the networking details for a task or
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/AwsVpcConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API AwsVpcConfiguration
  {
  public:
    AwsVpcConfiguration();
    AwsVpcConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AwsVpcConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The subnets associated with the task or service. There is a limit of 16
     * subnets that can be specified per <code>AwsVpcConfiguration</code>.</p> <note>
     * <p>All specified subnets must be from the same VPC.</p> </note>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>The subnets associated with the task or service. There is a limit of 16
     * subnets that can be specified per <code>AwsVpcConfiguration</code>.</p> <note>
     * <p>All specified subnets must be from the same VPC.</p> </note>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>The subnets associated with the task or service. There is a limit of 16
     * subnets that can be specified per <code>AwsVpcConfiguration</code>.</p> <note>
     * <p>All specified subnets must be from the same VPC.</p> </note>
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>The subnets associated with the task or service. There is a limit of 16
     * subnets that can be specified per <code>AwsVpcConfiguration</code>.</p> <note>
     * <p>All specified subnets must be from the same VPC.</p> </note>
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>The subnets associated with the task or service. There is a limit of 16
     * subnets that can be specified per <code>AwsVpcConfiguration</code>.</p> <note>
     * <p>All specified subnets must be from the same VPC.</p> </note>
     */
    inline AwsVpcConfiguration& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>The subnets associated with the task or service. There is a limit of 16
     * subnets that can be specified per <code>AwsVpcConfiguration</code>.</p> <note>
     * <p>All specified subnets must be from the same VPC.</p> </note>
     */
    inline AwsVpcConfiguration& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>The subnets associated with the task or service. There is a limit of 16
     * subnets that can be specified per <code>AwsVpcConfiguration</code>.</p> <note>
     * <p>All specified subnets must be from the same VPC.</p> </note>
     */
    inline AwsVpcConfiguration& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>The subnets associated with the task or service. There is a limit of 16
     * subnets that can be specified per <code>AwsVpcConfiguration</code>.</p> <note>
     * <p>All specified subnets must be from the same VPC.</p> </note>
     */
    inline AwsVpcConfiguration& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

    /**
     * <p>The subnets associated with the task or service. There is a limit of 16
     * subnets that can be specified per <code>AwsVpcConfiguration</code>.</p> <note>
     * <p>All specified subnets must be from the same VPC.</p> </note>
     */
    inline AwsVpcConfiguration& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }


    /**
     * <p>The security groups associated with the task or service. If you do not
     * specify a security group, the default security group for the VPC is used. There
     * is a limit of 5 security groups that can be specified per
     * <code>AwsVpcConfiguration</code>.</p> <note> <p>All specified security groups
     * must be from the same VPC.</p> </note>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>The security groups associated with the task or service. If you do not
     * specify a security group, the default security group for the VPC is used. There
     * is a limit of 5 security groups that can be specified per
     * <code>AwsVpcConfiguration</code>.</p> <note> <p>All specified security groups
     * must be from the same VPC.</p> </note>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>The security groups associated with the task or service. If you do not
     * specify a security group, the default security group for the VPC is used. There
     * is a limit of 5 security groups that can be specified per
     * <code>AwsVpcConfiguration</code>.</p> <note> <p>All specified security groups
     * must be from the same VPC.</p> </note>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>The security groups associated with the task or service. If you do not
     * specify a security group, the default security group for the VPC is used. There
     * is a limit of 5 security groups that can be specified per
     * <code>AwsVpcConfiguration</code>.</p> <note> <p>All specified security groups
     * must be from the same VPC.</p> </note>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>The security groups associated with the task or service. If you do not
     * specify a security group, the default security group for the VPC is used. There
     * is a limit of 5 security groups that can be specified per
     * <code>AwsVpcConfiguration</code>.</p> <note> <p>All specified security groups
     * must be from the same VPC.</p> </note>
     */
    inline AwsVpcConfiguration& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>The security groups associated with the task or service. If you do not
     * specify a security group, the default security group for the VPC is used. There
     * is a limit of 5 security groups that can be specified per
     * <code>AwsVpcConfiguration</code>.</p> <note> <p>All specified security groups
     * must be from the same VPC.</p> </note>
     */
    inline AwsVpcConfiguration& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>The security groups associated with the task or service. If you do not
     * specify a security group, the default security group for the VPC is used. There
     * is a limit of 5 security groups that can be specified per
     * <code>AwsVpcConfiguration</code>.</p> <note> <p>All specified security groups
     * must be from the same VPC.</p> </note>
     */
    inline AwsVpcConfiguration& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>The security groups associated with the task or service. If you do not
     * specify a security group, the default security group for the VPC is used. There
     * is a limit of 5 security groups that can be specified per
     * <code>AwsVpcConfiguration</code>.</p> <note> <p>All specified security groups
     * must be from the same VPC.</p> </note>
     */
    inline AwsVpcConfiguration& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The security groups associated with the task or service. If you do not
     * specify a security group, the default security group for the VPC is used. There
     * is a limit of 5 security groups that can be specified per
     * <code>AwsVpcConfiguration</code>.</p> <note> <p>All specified security groups
     * must be from the same VPC.</p> </note>
     */
    inline AwsVpcConfiguration& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }


    /**
     * <p>Whether the task's elastic network interface receives a public IP address.
     * The default value is <code>DISABLED</code>.</p>
     */
    inline const AssignPublicIp& GetAssignPublicIp() const{ return m_assignPublicIp; }

    /**
     * <p>Whether the task's elastic network interface receives a public IP address.
     * The default value is <code>DISABLED</code>.</p>
     */
    inline bool AssignPublicIpHasBeenSet() const { return m_assignPublicIpHasBeenSet; }

    /**
     * <p>Whether the task's elastic network interface receives a public IP address.
     * The default value is <code>DISABLED</code>.</p>
     */
    inline void SetAssignPublicIp(const AssignPublicIp& value) { m_assignPublicIpHasBeenSet = true; m_assignPublicIp = value; }

    /**
     * <p>Whether the task's elastic network interface receives a public IP address.
     * The default value is <code>DISABLED</code>.</p>
     */
    inline void SetAssignPublicIp(AssignPublicIp&& value) { m_assignPublicIpHasBeenSet = true; m_assignPublicIp = std::move(value); }

    /**
     * <p>Whether the task's elastic network interface receives a public IP address.
     * The default value is <code>DISABLED</code>.</p>
     */
    inline AwsVpcConfiguration& WithAssignPublicIp(const AssignPublicIp& value) { SetAssignPublicIp(value); return *this;}

    /**
     * <p>Whether the task's elastic network interface receives a public IP address.
     * The default value is <code>DISABLED</code>.</p>
     */
    inline AwsVpcConfiguration& WithAssignPublicIp(AssignPublicIp&& value) { SetAssignPublicIp(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet;

    AssignPublicIp m_assignPublicIp;
    bool m_assignPublicIpHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
