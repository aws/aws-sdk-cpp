/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {

/**
 * <p>The network configuration for Amazon ECS Managed Instances. This specifies
 * the VPC subnets and security groups that instances use for network connectivity.
 * Amazon ECS Managed Instances support multiple network modes including
 * <code>awsvpc</code> (instances receive ENIs for task isolation),
 * <code>host</code> (instances share network namespace with tasks), and
 * <code>none</code> (no external network connectivity), ensuring backward
 * compatibility for migrating workloads from Fargate or Amazon EC2.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ManagedInstancesNetworkConfiguration">AWS
 * API Reference</a></p>
 */
class ManagedInstancesNetworkConfiguration {
 public:
  AWS_ECS_API ManagedInstancesNetworkConfiguration() = default;
  AWS_ECS_API ManagedInstancesNetworkConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API ManagedInstancesNetworkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of subnet IDs where Amazon ECS can launch Amazon ECS Managed
   * Instances. Instances are distributed across the specified subnets for high
   * availability. All subnets must be in the same VPC.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSubnets() const { return m_subnets; }
  inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
  template <typename SubnetsT = Aws::Vector<Aws::String>>
  void SetSubnets(SubnetsT&& value) {
    m_subnetsHasBeenSet = true;
    m_subnets = std::forward<SubnetsT>(value);
  }
  template <typename SubnetsT = Aws::Vector<Aws::String>>
  ManagedInstancesNetworkConfiguration& WithSubnets(SubnetsT&& value) {
    SetSubnets(std::forward<SubnetsT>(value));
    return *this;
  }
  template <typename SubnetsT = Aws::String>
  ManagedInstancesNetworkConfiguration& AddSubnets(SubnetsT&& value) {
    m_subnetsHasBeenSet = true;
    m_subnets.emplace_back(std::forward<SubnetsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of security group IDs to apply to Amazon ECS Managed Instances.
   * These security groups control the network traffic allowed to and from the
   * instances.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
  inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
  template <typename SecurityGroupsT = Aws::Vector<Aws::String>>
  void SetSecurityGroups(SecurityGroupsT&& value) {
    m_securityGroupsHasBeenSet = true;
    m_securityGroups = std::forward<SecurityGroupsT>(value);
  }
  template <typename SecurityGroupsT = Aws::Vector<Aws::String>>
  ManagedInstancesNetworkConfiguration& WithSecurityGroups(SecurityGroupsT&& value) {
    SetSecurityGroups(std::forward<SecurityGroupsT>(value));
    return *this;
  }
  template <typename SecurityGroupsT = Aws::String>
  ManagedInstancesNetworkConfiguration& AddSecurityGroups(SecurityGroupsT&& value) {
    m_securityGroupsHasBeenSet = true;
    m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_subnets;
  bool m_subnetsHasBeenSet = false;

  Aws::Vector<Aws::String> m_securityGroups;
  bool m_securityGroupsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
