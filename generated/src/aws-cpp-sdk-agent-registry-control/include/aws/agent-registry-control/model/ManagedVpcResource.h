/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/EndpointIpAddressType.h>
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
namespace AgentRegistryControl {
namespace Model {

/**
 * <p>A service-managed private endpoint provisioned within a customer
 * VPC.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/ManagedVpcResource">AWS
 * API Reference</a></p>
 */
class ManagedVpcResource {
 public:
  AWS_AGENTREGISTRYCONTROL_API ManagedVpcResource() = default;
  AWS_AGENTREGISTRYCONTROL_API ManagedVpcResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API ManagedVpcResource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the VPC in which the private endpoint is provisioned.</p>
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
   * <p>The identifiers of the subnets in which the private endpoint network
   * interfaces are placed.</p>
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
   * <p>The IP address type used by the private endpoint, either IPV4 or IPV6.</p>
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
   * <p>The identifiers of the security groups associated with the private endpoint
   * network interfaces.</p>
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
   * <p>The tags applied to the service-managed VPC resource.</p>
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
   * <p>The routing domain used to resolve traffic through the private endpoint.</p>
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
}  // namespace AgentRegistryControl
}  // namespace Aws
