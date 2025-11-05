/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamPrefixListResolverRuleConditionRequest.h>
#include <aws/ec2/model/IpamPrefixListResolverRuleType.h>
#include <aws/ec2/model/IpamResourceType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes a CIDR selection rule to include in a request. This is used when
 * creating or modifying resolver rules.</p> <p>CIDR selection rules define the
 * business logic for selecting CIDRs from IPAM. If a CIDR matches any of the
 * rules, it will be included. If a rule has multiple conditions, the CIDR has to
 * match every condition of that rule. You can create a prefix list resolver
 * without any CIDR selection rules, but it will generate empty versions
 * (containing no CIDRs) until you add rules.</p> <p>There are three rule types.
 * Only 2 of the 3 rule types support conditions - <b>IPAM pool CIDR</b> and
 * <b>Scope resource CIDR</b>. <b>Static CIDR</b> rules cannot have conditions.</p>
 * <ul> <li> <p> <b>Static CIDR</b>: A fixed list of CIDRs that do not change (like
 * a manual list replicated across Regions)</p> </li> <li> <p> <b>IPAM pool
 * CIDR</b>: CIDRs from specific IPAM pools (like all CIDRs from your IPAM
 * production pool)</p> <p>If you choose this option, choose the following:</p>
 * <ul> <li> <p> <b>IPAM scope</b>: Select the IPAM scope to search for
 * resources</p> </li> <li> <p> <b>Conditions:</b> </p> <ul> <li> <p>
 * <b>Property</b> </p> <ul> <li> <p> <b>IPAM pool ID</b>: Select an IPAM pool that
 * contains the resources</p> </li> <li> <p> <b>CIDR</b> (like 10.24.34.0/23)</p>
 * </li> </ul> </li> <li> <p> <b>Operation</b>: Equals/Not equals</p> </li> <li>
 * <p> <b>Value</b>: The value on which to match the condition</p> </li> </ul>
 * </li> </ul> </li> <li> <p> <b>Scope resource CIDR</b>: CIDRs from Amazon Web
 * Services resources like VPCs, subnets, EIPs within an IPAM scope</p> <p>If you
 * choose this option, choose the following:</p> <ul> <li> <p> <b>IPAM scope</b>:
 * Select the IPAM scope to search for resources</p> </li> <li> <p> <b>Resource
 * type</b>: Select a resource, like a VPC or subnet.</p> </li> <li> <p>
 * <b>Conditions</b>:</p> <ul> <li> <p> <b>Property</b>:</p> <ul> <li> <p>Resource
 * ID: The unique ID of a resource (like vpc-1234567890abcdef0)</p> </li> <li>
 * <p>Resource owner (like 111122223333)</p> </li> <li> <p>Resource region (like
 * us-east-1)</p> </li> <li> <p>Resource tag (like key: name, value: dev-vpc-1)</p>
 * </li> <li> <p>CIDR (like 10.24.34.0/23)</p> </li> </ul> </li> <li> <p>
 * <b>Operation</b>: Equals/Not equals</p> </li> <li> <p> <b>Value</b>: The value
 * on which to match the condition</p> </li> </ul> </li> </ul> </li>
 * </ul><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamPrefixListResolverRuleRequest">AWS
 * API Reference</a></p>
 */
class IpamPrefixListResolverRuleRequest {
 public:
  AWS_EC2_API IpamPrefixListResolverRuleRequest() = default;
  AWS_EC2_API IpamPrefixListResolverRuleRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API IpamPrefixListResolverRuleRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The type of CIDR selection rule. Valid values include <code>include</code>
   * for selecting CIDRs that match the conditions, and <code>exclude</code> for
   * excluding CIDRs that match the conditions.</p>
   */
  inline IpamPrefixListResolverRuleType GetRuleType() const { return m_ruleType; }
  inline bool RuleTypeHasBeenSet() const { return m_ruleTypeHasBeenSet; }
  inline void SetRuleType(IpamPrefixListResolverRuleType value) {
    m_ruleTypeHasBeenSet = true;
    m_ruleType = value;
  }
  inline IpamPrefixListResolverRuleRequest& WithRuleType(IpamPrefixListResolverRuleType value) {
    SetRuleType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A fixed list of CIDRs that do not change (like a manual list replicated
   * across Regions).</p>
   */
  inline const Aws::String& GetStaticCidr() const { return m_staticCidr; }
  inline bool StaticCidrHasBeenSet() const { return m_staticCidrHasBeenSet; }
  template <typename StaticCidrT = Aws::String>
  void SetStaticCidr(StaticCidrT&& value) {
    m_staticCidrHasBeenSet = true;
    m_staticCidr = std::forward<StaticCidrT>(value);
  }
  template <typename StaticCidrT = Aws::String>
  IpamPrefixListResolverRuleRequest& WithStaticCidr(StaticCidrT&& value) {
    SetStaticCidr(std::forward<StaticCidrT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the IPAM scope from which to select CIDRs. This determines whether
   * to select from public or private IP address space.</p>
   */
  inline const Aws::String& GetIpamScopeId() const { return m_ipamScopeId; }
  inline bool IpamScopeIdHasBeenSet() const { return m_ipamScopeIdHasBeenSet; }
  template <typename IpamScopeIdT = Aws::String>
  void SetIpamScopeId(IpamScopeIdT&& value) {
    m_ipamScopeIdHasBeenSet = true;
    m_ipamScopeId = std::forward<IpamScopeIdT>(value);
  }
  template <typename IpamScopeIdT = Aws::String>
  IpamPrefixListResolverRuleRequest& WithIpamScopeId(IpamScopeIdT&& value) {
    SetIpamScopeId(std::forward<IpamScopeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For rules of type <code>ipam-resource-cidr</code>, this is the resource
   * type.</p>
   */
  inline IpamResourceType GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(IpamResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline IpamPrefixListResolverRuleRequest& WithResourceType(IpamResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The conditions that determine which CIDRs are selected by this rule.
   * Conditions specify criteria such as resource type, tags, account IDs, and
   * Regions.</p>
   */
  inline const Aws::Vector<IpamPrefixListResolverRuleConditionRequest>& GetConditions() const { return m_conditions; }
  inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
  template <typename ConditionsT = Aws::Vector<IpamPrefixListResolverRuleConditionRequest>>
  void SetConditions(ConditionsT&& value) {
    m_conditionsHasBeenSet = true;
    m_conditions = std::forward<ConditionsT>(value);
  }
  template <typename ConditionsT = Aws::Vector<IpamPrefixListResolverRuleConditionRequest>>
  IpamPrefixListResolverRuleRequest& WithConditions(ConditionsT&& value) {
    SetConditions(std::forward<ConditionsT>(value));
    return *this;
  }
  template <typename ConditionsT = IpamPrefixListResolverRuleConditionRequest>
  IpamPrefixListResolverRuleRequest& AddConditions(ConditionsT&& value) {
    m_conditionsHasBeenSet = true;
    m_conditions.emplace_back(std::forward<ConditionsT>(value));
    return *this;
  }
  ///@}
 private:
  IpamPrefixListResolverRuleType m_ruleType{IpamPrefixListResolverRuleType::NOT_SET};
  bool m_ruleTypeHasBeenSet = false;

  Aws::String m_staticCidr;
  bool m_staticCidrHasBeenSet = false;

  Aws::String m_ipamScopeId;
  bool m_ipamScopeIdHasBeenSet = false;

  IpamResourceType m_resourceType{IpamResourceType::NOT_SET};
  bool m_resourceTypeHasBeenSet = false;

  Aws::Vector<IpamPrefixListResolverRuleConditionRequest> m_conditions;
  bool m_conditionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
