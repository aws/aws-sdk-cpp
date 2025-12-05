/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamPrefixListResolverRuleCondition.h>
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
 * <p>Describes a CIDR selection rule.</p> <p>CIDR selection rules define the
 * business logic for selecting CIDRs from IPAM. If a CIDR matches any of the
 * rules, it will be included. If a rule has multiple conditions, the CIDR has to
 * match every condition of that rule. You can create a prefix list resolver
 * without any CIDR selection rules, but it will generate empty versions
 * (containing no CIDRs) until you add rules.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamPrefixListResolverRule">AWS
 * API Reference</a></p>
 */
class IpamPrefixListResolverRule {
 public:
  AWS_EC2_API IpamPrefixListResolverRule() = default;
  AWS_EC2_API IpamPrefixListResolverRule(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API IpamPrefixListResolverRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
  inline IpamPrefixListResolverRule& WithRuleType(IpamPrefixListResolverRuleType value) {
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
  IpamPrefixListResolverRule& WithStaticCidr(StaticCidrT&& value) {
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
  IpamPrefixListResolverRule& WithIpamScopeId(IpamScopeIdT&& value) {
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
  inline IpamPrefixListResolverRule& WithResourceType(IpamResourceType value) {
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
  inline const Aws::Vector<IpamPrefixListResolverRuleCondition>& GetConditions() const { return m_conditions; }
  inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
  template <typename ConditionsT = Aws::Vector<IpamPrefixListResolverRuleCondition>>
  void SetConditions(ConditionsT&& value) {
    m_conditionsHasBeenSet = true;
    m_conditions = std::forward<ConditionsT>(value);
  }
  template <typename ConditionsT = Aws::Vector<IpamPrefixListResolverRuleCondition>>
  IpamPrefixListResolverRule& WithConditions(ConditionsT&& value) {
    SetConditions(std::forward<ConditionsT>(value));
    return *this;
  }
  template <typename ConditionsT = IpamPrefixListResolverRuleCondition>
  IpamPrefixListResolverRule& AddConditions(ConditionsT&& value) {
    m_conditionsHasBeenSet = true;
    m_conditions.emplace_back(std::forward<ConditionsT>(value));
    return *this;
  }
  ///@}
 private:
  IpamPrefixListResolverRuleType m_ruleType{IpamPrefixListResolverRuleType::NOT_SET};

  Aws::String m_staticCidr;

  Aws::String m_ipamScopeId;

  IpamResourceType m_resourceType{IpamResourceType::NOT_SET};

  Aws::Vector<IpamPrefixListResolverRuleCondition> m_conditions;
  bool m_ruleTypeHasBeenSet = false;
  bool m_staticCidrHasBeenSet = false;
  bool m_ipamScopeIdHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_conditionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
