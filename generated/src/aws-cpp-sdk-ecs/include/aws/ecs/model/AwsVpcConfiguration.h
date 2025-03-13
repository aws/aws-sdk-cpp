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
   * <p>An object representing the networking details for a task or service. For
   * example
   * <code>awsVpcConfiguration={subnets=["subnet-12344321"],securityGroups=["sg-12344321"]}</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/AwsVpcConfiguration">AWS
   * API Reference</a></p>
   */
  class AwsVpcConfiguration
  {
  public:
    AWS_ECS_API AwsVpcConfiguration() = default;
    AWS_ECS_API AwsVpcConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API AwsVpcConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IDs of the subnets associated with the task or service. There's a limit
     * of 16 subnets that can be specified.</p>  <p>All specified subnets must be
     * from the same VPC.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const { return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    void SetSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets = std::forward<SubnetsT>(value); }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    AwsVpcConfiguration& WithSubnets(SubnetsT&& value) { SetSubnets(std::forward<SubnetsT>(value)); return *this;}
    template<typename SubnetsT = Aws::String>
    AwsVpcConfiguration& AddSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets.emplace_back(std::forward<SubnetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the security groups associated with the task or service. If you
     * don't specify a security group, the default security group for the VPC is used.
     * There's a limit of 5 security groups that can be specified.</p>  <p>All
     * specified security groups must be from the same VPC.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    AwsVpcConfiguration& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    AwsVpcConfiguration& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether the task's elastic network interface receives a public IP address.
     * </p> <p>Consider the following when you set this value:</p> <ul> <li> <p>When
     * you use <code>create-service</code> or <code>update-service</code>, the default
     * is <code>DISABLED</code>. </p> </li> <li> <p>When the service
     * <code>deploymentController</code> is <code>ECS</code>, the value must be
     * <code>DISABLED</code>. </p> </li> </ul>
     */
    inline AssignPublicIp GetAssignPublicIp() const { return m_assignPublicIp; }
    inline bool AssignPublicIpHasBeenSet() const { return m_assignPublicIpHasBeenSet; }
    inline void SetAssignPublicIp(AssignPublicIp value) { m_assignPublicIpHasBeenSet = true; m_assignPublicIp = value; }
    inline AwsVpcConfiguration& WithAssignPublicIp(AssignPublicIp value) { SetAssignPublicIp(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    AssignPublicIp m_assignPublicIp{AssignPublicIp::NOT_SET};
    bool m_assignPublicIpHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
