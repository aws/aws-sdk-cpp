/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AwsVpcConfiguration
  {
  public:
    AWS_ECS_API AwsVpcConfiguration();
    AWS_ECS_API AwsVpcConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API AwsVpcConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IDs of the subnets associated with the task or service. There's a limit
     * of 16 subnets that can be specified per <code>AwsVpcConfiguration</code>.</p>
     *  <p>All specified subnets must be from the same VPC.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>The IDs of the subnets associated with the task or service. There's a limit
     * of 16 subnets that can be specified per <code>AwsVpcConfiguration</code>.</p>
     *  <p>All specified subnets must be from the same VPC.</p> 
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>The IDs of the subnets associated with the task or service. There's a limit
     * of 16 subnets that can be specified per <code>AwsVpcConfiguration</code>.</p>
     *  <p>All specified subnets must be from the same VPC.</p> 
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>The IDs of the subnets associated with the task or service. There's a limit
     * of 16 subnets that can be specified per <code>AwsVpcConfiguration</code>.</p>
     *  <p>All specified subnets must be from the same VPC.</p> 
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>The IDs of the subnets associated with the task or service. There's a limit
     * of 16 subnets that can be specified per <code>AwsVpcConfiguration</code>.</p>
     *  <p>All specified subnets must be from the same VPC.</p> 
     */
    inline AwsVpcConfiguration& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>The IDs of the subnets associated with the task or service. There's a limit
     * of 16 subnets that can be specified per <code>AwsVpcConfiguration</code>.</p>
     *  <p>All specified subnets must be from the same VPC.</p> 
     */
    inline AwsVpcConfiguration& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>The IDs of the subnets associated with the task or service. There's a limit
     * of 16 subnets that can be specified per <code>AwsVpcConfiguration</code>.</p>
     *  <p>All specified subnets must be from the same VPC.</p> 
     */
    inline AwsVpcConfiguration& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>The IDs of the subnets associated with the task or service. There's a limit
     * of 16 subnets that can be specified per <code>AwsVpcConfiguration</code>.</p>
     *  <p>All specified subnets must be from the same VPC.</p> 
     */
    inline AwsVpcConfiguration& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the subnets associated with the task or service. There's a limit
     * of 16 subnets that can be specified per <code>AwsVpcConfiguration</code>.</p>
     *  <p>All specified subnets must be from the same VPC.</p> 
     */
    inline AwsVpcConfiguration& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }


    /**
     * <p>The IDs of the security groups associated with the task or service. If you
     * don't specify a security group, the default security group for the VPC is used.
     * There's a limit of 5 security groups that can be specified per
     * <code>AwsVpcConfiguration</code>.</p>  <p>All specified security groups
     * must be from the same VPC.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>The IDs of the security groups associated with the task or service. If you
     * don't specify a security group, the default security group for the VPC is used.
     * There's a limit of 5 security groups that can be specified per
     * <code>AwsVpcConfiguration</code>.</p>  <p>All specified security groups
     * must be from the same VPC.</p> 
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>The IDs of the security groups associated with the task or service. If you
     * don't specify a security group, the default security group for the VPC is used.
     * There's a limit of 5 security groups that can be specified per
     * <code>AwsVpcConfiguration</code>.</p>  <p>All specified security groups
     * must be from the same VPC.</p> 
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>The IDs of the security groups associated with the task or service. If you
     * don't specify a security group, the default security group for the VPC is used.
     * There's a limit of 5 security groups that can be specified per
     * <code>AwsVpcConfiguration</code>.</p>  <p>All specified security groups
     * must be from the same VPC.</p> 
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>The IDs of the security groups associated with the task or service. If you
     * don't specify a security group, the default security group for the VPC is used.
     * There's a limit of 5 security groups that can be specified per
     * <code>AwsVpcConfiguration</code>.</p>  <p>All specified security groups
     * must be from the same VPC.</p> 
     */
    inline AwsVpcConfiguration& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>The IDs of the security groups associated with the task or service. If you
     * don't specify a security group, the default security group for the VPC is used.
     * There's a limit of 5 security groups that can be specified per
     * <code>AwsVpcConfiguration</code>.</p>  <p>All specified security groups
     * must be from the same VPC.</p> 
     */
    inline AwsVpcConfiguration& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>The IDs of the security groups associated with the task or service. If you
     * don't specify a security group, the default security group for the VPC is used.
     * There's a limit of 5 security groups that can be specified per
     * <code>AwsVpcConfiguration</code>.</p>  <p>All specified security groups
     * must be from the same VPC.</p> 
     */
    inline AwsVpcConfiguration& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>The IDs of the security groups associated with the task or service. If you
     * don't specify a security group, the default security group for the VPC is used.
     * There's a limit of 5 security groups that can be specified per
     * <code>AwsVpcConfiguration</code>.</p>  <p>All specified security groups
     * must be from the same VPC.</p> 
     */
    inline AwsVpcConfiguration& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the security groups associated with the task or service. If you
     * don't specify a security group, the default security group for the VPC is used.
     * There's a limit of 5 security groups that can be specified per
     * <code>AwsVpcConfiguration</code>.</p>  <p>All specified security groups
     * must be from the same VPC.</p> 
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
    bool m_subnetsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    AssignPublicIp m_assignPublicIp;
    bool m_assignPublicIpHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
