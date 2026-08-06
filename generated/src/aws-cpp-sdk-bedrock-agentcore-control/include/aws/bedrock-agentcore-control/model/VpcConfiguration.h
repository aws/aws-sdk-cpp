/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>The VPC configuration for launching Amazon EC2 instances.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/VpcConfiguration">AWS
 * API Reference</a></p>
 */
class VpcConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API VpcConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API VpcConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API VpcConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The IDs of the subnets in which to launch instances. You must specify at
   * least one subnet.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSubnets() const { return m_subnets; }
  inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
  template <typename SubnetsT = Aws::Vector<Aws::String>>
  void SetSubnets(SubnetsT&& value) {
    m_subnetsHasBeenSet = true;
    m_subnets = std::forward<SubnetsT>(value);
  }
  template <typename SubnetsT = Aws::Vector<Aws::String>>
  VpcConfiguration& WithSubnets(SubnetsT&& value) {
    SetSubnets(std::forward<SubnetsT>(value));
    return *this;
  }
  template <typename SubnetsT = Aws::String>
  VpcConfiguration& AddSubnets(SubnetsT&& value) {
    m_subnetsHasBeenSet = true;
    m_subnets.emplace_back(std::forward<SubnetsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the security groups to associate with the instances. You must
   * specify at least one security group.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
  inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
  template <typename SecurityGroupsT = Aws::Vector<Aws::String>>
  void SetSecurityGroups(SecurityGroupsT&& value) {
    m_securityGroupsHasBeenSet = true;
    m_securityGroups = std::forward<SecurityGroupsT>(value);
  }
  template <typename SecurityGroupsT = Aws::Vector<Aws::String>>
  VpcConfiguration& WithSecurityGroups(SecurityGroupsT&& value) {
    SetSecurityGroups(std::forward<SecurityGroupsT>(value));
    return *this;
  }
  template <typename SecurityGroupsT = Aws::String>
  VpcConfiguration& AddSecurityGroups(SecurityGroupsT&& value) {
    m_securityGroupsHasBeenSet = true;
    m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_subnets;

  Aws::Vector<Aws::String> m_securityGroups;
  bool m_subnetsHasBeenSet = false;
  bool m_securityGroupsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
