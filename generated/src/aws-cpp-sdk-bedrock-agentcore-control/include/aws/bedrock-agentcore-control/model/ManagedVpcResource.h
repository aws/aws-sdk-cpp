/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/EndpointIpAddressType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
 * <p>Configuration for a managed VPC Lattice resource. The gateway creates and
 * manages the VPC Lattice resource gateway and resource configuration on your
 * behalf using a service-linked role.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ManagedVpcResource">AWS
 * API Reference</a></p>
 */
class ManagedVpcResource {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ManagedVpcResource() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ManagedVpcResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ManagedVpcResource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the VPC that contains your private resource.</p>
   */
  inline const Aws::String& GetVpcIdentifier() const { return m_vpcIdentifier; }
  inline bool VpcIdentifierHasBeenSet() const { return m_vpcIdentifierHasBeenSet; }
  template <typename VpcIdentifierT = Aws::String>
  void SetVpcIdentifier(VpcIdentifierT&& value) {
    m_vpcIdentifierHasBeenSet = true;
    m_vpcIdentifier = std::forward<VpcIdentifierT>(value);
  }
  template <typename VpcIdentifierT = Aws::String>
  ManagedVpcResource& WithVpcIdentifier(VpcIdentifierT&& value) {
    SetVpcIdentifier(std::forward<VpcIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subnet IDs within the VPC where the VPC Lattice resource gateway is
   * placed.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
  inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
  template <typename SubnetIdsT = Aws::Vector<Aws::String>>
  void SetSubnetIds(SubnetIdsT&& value) {
    m_subnetIdsHasBeenSet = true;
    m_subnetIds = std::forward<SubnetIdsT>(value);
  }
  template <typename SubnetIdsT = Aws::Vector<Aws::String>>
  ManagedVpcResource& WithSubnetIds(SubnetIdsT&& value) {
    SetSubnetIds(std::forward<SubnetIdsT>(value));
    return *this;
  }
  template <typename SubnetIdsT = Aws::String>
  ManagedVpcResource& AddSubnetIds(SubnetIdsT&& value) {
    m_subnetIdsHasBeenSet = true;
    m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP address type for the resource configuration endpoint.</p>
   */
  inline EndpointIpAddressType GetEndpointIpAddressType() const { return m_endpointIpAddressType; }
  inline bool EndpointIpAddressTypeHasBeenSet() const { return m_endpointIpAddressTypeHasBeenSet; }
  inline void SetEndpointIpAddressType(EndpointIpAddressType value) {
    m_endpointIpAddressTypeHasBeenSet = true;
    m_endpointIpAddressType = value;
  }
  inline ManagedVpcResource& WithEndpointIpAddressType(EndpointIpAddressType value) {
    SetEndpointIpAddressType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The security group IDs to associate with the VPC Lattice resource gateway. If
   * not specified, the default security group for the VPC is used.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
  inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  void SetSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds = std::forward<SecurityGroupIdsT>(value);
  }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  ManagedVpcResource& WithSecurityGroupIds(SecurityGroupIdsT&& value) {
    SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  template <typename SecurityGroupIdsT = Aws::String>
  ManagedVpcResource& AddSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags to apply to the managed VPC Lattice resource gateway.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  ManagedVpcResource& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  ManagedVpcResource& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An intermediate publicly resolvable domain used as the VPC Lattice resource
   * configuration endpoint. Required when your private endpoint uses a domain that
   * is not publicly resolvable.</p>
   */
  inline const Aws::String& GetRoutingDomain() const { return m_routingDomain; }
  inline bool RoutingDomainHasBeenSet() const { return m_routingDomainHasBeenSet; }
  template <typename RoutingDomainT = Aws::String>
  void SetRoutingDomain(RoutingDomainT&& value) {
    m_routingDomainHasBeenSet = true;
    m_routingDomain = std::forward<RoutingDomainT>(value);
  }
  template <typename RoutingDomainT = Aws::String>
  ManagedVpcResource& WithRoutingDomain(RoutingDomainT&& value) {
    SetRoutingDomain(std::forward<RoutingDomainT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_vpcIdentifier;

  Aws::Vector<Aws::String> m_subnetIds;

  EndpointIpAddressType m_endpointIpAddressType{EndpointIpAddressType::NOT_SET};

  Aws::Vector<Aws::String> m_securityGroupIds;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_routingDomain;
  bool m_vpcIdentifierHasBeenSet = false;
  bool m_subnetIdsHasBeenSet = false;
  bool m_endpointIpAddressTypeHasBeenSet = false;
  bool m_securityGroupIdsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_routingDomainHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
