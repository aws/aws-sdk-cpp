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
 * <p>The network configuration for an Express service. By default, an Express
 * service utilizes subnets and security groups associated with the default
 * VPC.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ExpressGatewayServiceNetworkConfiguration">AWS
 * API Reference</a></p>
 */
class ExpressGatewayServiceNetworkConfiguration {
 public:
  AWS_ECS_API ExpressGatewayServiceNetworkConfiguration() = default;
  AWS_ECS_API ExpressGatewayServiceNetworkConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API ExpressGatewayServiceNetworkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The IDs of the security groups associated with the Express service.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
  inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
  template <typename SecurityGroupsT = Aws::Vector<Aws::String>>
  void SetSecurityGroups(SecurityGroupsT&& value) {
    m_securityGroupsHasBeenSet = true;
    m_securityGroups = std::forward<SecurityGroupsT>(value);
  }
  template <typename SecurityGroupsT = Aws::Vector<Aws::String>>
  ExpressGatewayServiceNetworkConfiguration& WithSecurityGroups(SecurityGroupsT&& value) {
    SetSecurityGroups(std::forward<SecurityGroupsT>(value));
    return *this;
  }
  template <typename SecurityGroupsT = Aws::String>
  ExpressGatewayServiceNetworkConfiguration& AddSecurityGroups(SecurityGroupsT&& value) {
    m_securityGroupsHasBeenSet = true;
    m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the subnets associated with the Express service.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSubnets() const { return m_subnets; }
  inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
  template <typename SubnetsT = Aws::Vector<Aws::String>>
  void SetSubnets(SubnetsT&& value) {
    m_subnetsHasBeenSet = true;
    m_subnets = std::forward<SubnetsT>(value);
  }
  template <typename SubnetsT = Aws::Vector<Aws::String>>
  ExpressGatewayServiceNetworkConfiguration& WithSubnets(SubnetsT&& value) {
    SetSubnets(std::forward<SubnetsT>(value));
    return *this;
  }
  template <typename SubnetsT = Aws::String>
  ExpressGatewayServiceNetworkConfiguration& AddSubnets(SubnetsT&& value) {
    m_subnetsHasBeenSet = true;
    m_subnets.emplace_back(std::forward<SubnetsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_securityGroups;
  bool m_securityGroupsHasBeenSet = false;

  Aws::Vector<Aws::String> m_subnets;
  bool m_subnetsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
