/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>
#include <aws/lambda-core/model/ComputeResourceType.h>
#include <aws/lambda-core/model/NetworkProtocol.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaCore {
namespace Model {

/**
 * <p>Configuration for a VPC egress network connector. Specifies the VPC subnets,
 * security groups, network protocol, and associated Lambda compute resource
 * types.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/NetworkConnectorVpcEgressConfiguration">AWS
 * API Reference</a></p>
 */
class NetworkConnectorVpcEgressConfiguration {
 public:
  AWS_LAMBDACORE_API NetworkConnectorVpcEgressConfiguration() = default;
  AWS_LAMBDACORE_API NetworkConnectorVpcEgressConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDACORE_API NetworkConnectorVpcEgressConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDACORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The IDs of the VPC subnets where Lambda provisions elastic network interfaces
   * (ENIs). Specify 1 to 16 subnets. All subnets must be in the same VPC.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
  inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
  template <typename SubnetIdsT = Aws::Vector<Aws::String>>
  void SetSubnetIds(SubnetIdsT&& value) {
    m_subnetIdsHasBeenSet = true;
    m_subnetIds = std::forward<SubnetIdsT>(value);
  }
  template <typename SubnetIdsT = Aws::Vector<Aws::String>>
  NetworkConnectorVpcEgressConfiguration& WithSubnetIds(SubnetIdsT&& value) {
    SetSubnetIds(std::forward<SubnetIdsT>(value));
    return *this;
  }
  template <typename SubnetIdsT = Aws::String>
  NetworkConnectorVpcEgressConfiguration& AddSubnetIds(SubnetIdsT&& value) {
    m_subnetIdsHasBeenSet = true;
    m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the VPC security groups to attach to the ENIs. Specify 0 to 5
   * security groups. All security groups must be in the same VPC as the subnets.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
  inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  void SetSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds = std::forward<SecurityGroupIdsT>(value);
  }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  NetworkConnectorVpcEgressConfiguration& WithSecurityGroupIds(SecurityGroupIdsT&& value) {
    SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  template <typename SecurityGroupIdsT = Aws::String>
  NetworkConnectorVpcEgressConfiguration& AddSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network protocol for the connector. Specify <code>IPv4</code> for
   * IPv4-only networking, or <code>DualStack</code> for both IPv4 and IPv6.</p>
   */
  inline NetworkProtocol GetNetworkProtocol() const { return m_networkProtocol; }
  inline bool NetworkProtocolHasBeenSet() const { return m_networkProtocolHasBeenSet; }
  inline void SetNetworkProtocol(NetworkProtocol value) {
    m_networkProtocolHasBeenSet = true;
    m_networkProtocol = value;
  }
  inline NetworkConnectorVpcEgressConfiguration& WithNetworkProtocol(NetworkProtocol value) {
    SetNetworkProtocol(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The types of Lambda compute resources that can use this connector. Currently,
   * only <code>MicroVm</code> is supported.</p>
   */
  inline const Aws::Vector<ComputeResourceType>& GetAssociatedComputeResourceTypes() const { return m_associatedComputeResourceTypes; }
  inline bool AssociatedComputeResourceTypesHasBeenSet() const { return m_associatedComputeResourceTypesHasBeenSet; }
  template <typename AssociatedComputeResourceTypesT = Aws::Vector<ComputeResourceType>>
  void SetAssociatedComputeResourceTypes(AssociatedComputeResourceTypesT&& value) {
    m_associatedComputeResourceTypesHasBeenSet = true;
    m_associatedComputeResourceTypes = std::forward<AssociatedComputeResourceTypesT>(value);
  }
  template <typename AssociatedComputeResourceTypesT = Aws::Vector<ComputeResourceType>>
  NetworkConnectorVpcEgressConfiguration& WithAssociatedComputeResourceTypes(AssociatedComputeResourceTypesT&& value) {
    SetAssociatedComputeResourceTypes(std::forward<AssociatedComputeResourceTypesT>(value));
    return *this;
  }
  inline NetworkConnectorVpcEgressConfiguration& AddAssociatedComputeResourceTypes(ComputeResourceType value) {
    m_associatedComputeResourceTypesHasBeenSet = true;
    m_associatedComputeResourceTypes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_subnetIds;

  Aws::Vector<Aws::String> m_securityGroupIds;

  NetworkProtocol m_networkProtocol{NetworkProtocol::NOT_SET};

  Aws::Vector<ComputeResourceType> m_associatedComputeResourceTypes;
  bool m_subnetIdsHasBeenSet = false;
  bool m_securityGroupIdsHasBeenSet = false;
  bool m_networkProtocolHasBeenSet = false;
  bool m_associatedComputeResourceTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
