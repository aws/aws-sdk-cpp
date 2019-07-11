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
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eventbridge/model/AssignPublicIp.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>This structure specifies the VPC subnets and security groups for the task and
   * whether a public IP address is to be used. This structure is relevant only for
   * ECS tasks that use the <code>awsvpc</code> network mode.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/AwsVpcConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_EVENTBRIDGE_API AwsVpcConfiguration
  {
  public:
    AwsVpcConfiguration();
    AwsVpcConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AwsVpcConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the subnets associated with the task. These subnets must all be in
     * the same VPC. You can specify as many as 16 subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>Specifies the subnets associated with the task. These subnets must all be in
     * the same VPC. You can specify as many as 16 subnets.</p>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>Specifies the subnets associated with the task. These subnets must all be in
     * the same VPC. You can specify as many as 16 subnets.</p>
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>Specifies the subnets associated with the task. These subnets must all be in
     * the same VPC. You can specify as many as 16 subnets.</p>
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>Specifies the subnets associated with the task. These subnets must all be in
     * the same VPC. You can specify as many as 16 subnets.</p>
     */
    inline AwsVpcConfiguration& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>Specifies the subnets associated with the task. These subnets must all be in
     * the same VPC. You can specify as many as 16 subnets.</p>
     */
    inline AwsVpcConfiguration& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>Specifies the subnets associated with the task. These subnets must all be in
     * the same VPC. You can specify as many as 16 subnets.</p>
     */
    inline AwsVpcConfiguration& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>Specifies the subnets associated with the task. These subnets must all be in
     * the same VPC. You can specify as many as 16 subnets.</p>
     */
    inline AwsVpcConfiguration& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the subnets associated with the task. These subnets must all be in
     * the same VPC. You can specify as many as 16 subnets.</p>
     */
    inline AwsVpcConfiguration& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }


    /**
     * <p>Specifies the security groups associated with the task. These security groups
     * must all be in the same VPC. You can specify as many as five security groups. If
     * you don't specify a security group, the default security group for the VPC is
     * used.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>Specifies the security groups associated with the task. These security groups
     * must all be in the same VPC. You can specify as many as five security groups. If
     * you don't specify a security group, the default security group for the VPC is
     * used.</p>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>Specifies the security groups associated with the task. These security groups
     * must all be in the same VPC. You can specify as many as five security groups. If
     * you don't specify a security group, the default security group for the VPC is
     * used.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>Specifies the security groups associated with the task. These security groups
     * must all be in the same VPC. You can specify as many as five security groups. If
     * you don't specify a security group, the default security group for the VPC is
     * used.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>Specifies the security groups associated with the task. These security groups
     * must all be in the same VPC. You can specify as many as five security groups. If
     * you don't specify a security group, the default security group for the VPC is
     * used.</p>
     */
    inline AwsVpcConfiguration& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>Specifies the security groups associated with the task. These security groups
     * must all be in the same VPC. You can specify as many as five security groups. If
     * you don't specify a security group, the default security group for the VPC is
     * used.</p>
     */
    inline AwsVpcConfiguration& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>Specifies the security groups associated with the task. These security groups
     * must all be in the same VPC. You can specify as many as five security groups. If
     * you don't specify a security group, the default security group for the VPC is
     * used.</p>
     */
    inline AwsVpcConfiguration& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>Specifies the security groups associated with the task. These security groups
     * must all be in the same VPC. You can specify as many as five security groups. If
     * you don't specify a security group, the default security group for the VPC is
     * used.</p>
     */
    inline AwsVpcConfiguration& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the security groups associated with the task. These security groups
     * must all be in the same VPC. You can specify as many as five security groups. If
     * you don't specify a security group, the default security group for the VPC is
     * used.</p>
     */
    inline AwsVpcConfiguration& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }


    /**
     * <p>Specifies whether the task's elastic network interface receives a public IP
     * address. You can specify <code>ENABLED</code> only when <code>LaunchType</code>
     * in <code>EcsParameters</code> is set to <code>FARGATE</code>.</p>
     */
    inline const AssignPublicIp& GetAssignPublicIp() const{ return m_assignPublicIp; }

    /**
     * <p>Specifies whether the task's elastic network interface receives a public IP
     * address. You can specify <code>ENABLED</code> only when <code>LaunchType</code>
     * in <code>EcsParameters</code> is set to <code>FARGATE</code>.</p>
     */
    inline bool AssignPublicIpHasBeenSet() const { return m_assignPublicIpHasBeenSet; }

    /**
     * <p>Specifies whether the task's elastic network interface receives a public IP
     * address. You can specify <code>ENABLED</code> only when <code>LaunchType</code>
     * in <code>EcsParameters</code> is set to <code>FARGATE</code>.</p>
     */
    inline void SetAssignPublicIp(const AssignPublicIp& value) { m_assignPublicIpHasBeenSet = true; m_assignPublicIp = value; }

    /**
     * <p>Specifies whether the task's elastic network interface receives a public IP
     * address. You can specify <code>ENABLED</code> only when <code>LaunchType</code>
     * in <code>EcsParameters</code> is set to <code>FARGATE</code>.</p>
     */
    inline void SetAssignPublicIp(AssignPublicIp&& value) { m_assignPublicIpHasBeenSet = true; m_assignPublicIp = std::move(value); }

    /**
     * <p>Specifies whether the task's elastic network interface receives a public IP
     * address. You can specify <code>ENABLED</code> only when <code>LaunchType</code>
     * in <code>EcsParameters</code> is set to <code>FARGATE</code>.</p>
     */
    inline AwsVpcConfiguration& WithAssignPublicIp(const AssignPublicIp& value) { SetAssignPublicIp(value); return *this;}

    /**
     * <p>Specifies whether the task's elastic network interface receives a public IP
     * address. You can specify <code>ENABLED</code> only when <code>LaunchType</code>
     * in <code>EcsParameters</code> is set to <code>FARGATE</code>.</p>
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
} // namespace EventBridge
} // namespace Aws
