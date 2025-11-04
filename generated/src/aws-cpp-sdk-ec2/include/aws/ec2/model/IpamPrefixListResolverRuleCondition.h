/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamPrefixListResolverRuleConditionOperation.h>
#include <aws/ec2/model/IpamResourceTag.h>

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
 * <p>Describes a condition within a CIDR selection rule. Conditions define the
 * criteria for selecting CIDRs from IPAM's database based on resource
 * attributes.</p> <p>CIDR selection rules define the business logic for selecting
 * CIDRs from IPAM. If a CIDR matches any of the rules, it will be included. If a
 * rule has multiple conditions, the CIDR has to match every condition of that
 * rule. You can create a prefix list resolver without any CIDR selection rules,
 * but it will generate empty versions (containing no CIDRs) until you add
 * rules.</p> <p>There are three rule types:</p> <ul> <li> <p> <b>Static CIDR</b>:
 * A fixed list of CIDRs that do not change (like a manual list replicated across
 * Regions).</p> </li> <li> <p> <b>IPAM pool CIDR</b>: CIDRs from specific IPAM
 * pools (like all CIDRs from your IPAM production pool).</p> </li> <li> <p>
 * <b>Scope resource CIDR</b>: CIDRs for Amazon Web Services resources like VPCs,
 * subnets, and EIPs within a specific IPAM scope.</p> </li> </ul> <p>Condition
 * availability by resource type:</p> <ul> <li> <p>Only 2 of the 3 rule types
 * support conditions - <b>IPAM pool CIDR</b> and <b>Scope resource CIDR</b>.
 * <b>Static CIDR</b> rules cannot have conditions.</p> <ul> <li> <p>Condition
 * available for the <b>IPAM pool CIDR</b> resource type:</p> <ul> <li>
 * <p>Property:</p> <ul> <li> <p>IPAM Pool ID</p> </li> <li> <p>CIDR (like
 * 10.24.34.0/23)</p> </li> </ul> </li> <li> <p>Operation: Equals/Not equals</p>
 * </li> <li> <p>Value: The value on which to match the condition</p> </li> </ul>
 * </li> <li> <p>Conditions for the <b>Scope resource CIDR</b> resource type:</p>
 * <ul> <li> <p>Property:</p> <ul> <li> <p>Resource ID: The unique ID of a resource
 * (like vpc-1234567890abcdef0)</p> </li> <li> <p>Resource type (like VPC or
 * Subnet)</p> </li> <li> <p>Resource owner (like 111122223333)</p> </li> <li>
 * <p>Resource region (like us-east-1)</p> </li> <li> <p>Resource tag (like key:
 * name, value: dev-vpc-1)</p> </li> <li> <p>CIDR (like 10.24.34.0/23)</p> </li>
 * </ul> </li> <li> <p>Operation: Equals/Not equals</p> </li> <li> <p>Value: The
 * value on which to match the condition</p> </li> </ul> </li> <li> <p>When setting
 * conditions for a rule, one or more conditions is required.</p> </li> </ul> </li>
 * </ul><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamPrefixListResolverRuleCondition">AWS
 * API Reference</a></p>
 */
class IpamPrefixListResolverRuleCondition {
 public:
  AWS_EC2_API IpamPrefixListResolverRuleCondition() = default;
  AWS_EC2_API IpamPrefixListResolverRuleCondition(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API IpamPrefixListResolverRuleCondition& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The operation to perform when evaluating this condition. Valid values include
   * <code>equals</code>, <code>not-equals</code>, <code>contains</code>, and
   * <code>not-contains</code>.</p>
   */
  inline IpamPrefixListResolverRuleConditionOperation GetOperation() const { return m_operation; }
  inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
  inline void SetOperation(IpamPrefixListResolverRuleConditionOperation value) {
    m_operationHasBeenSet = true;
    m_operation = value;
  }
  inline IpamPrefixListResolverRuleCondition& WithOperation(IpamPrefixListResolverRuleConditionOperation value) {
    SetOperation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the IPAM pool to match against. This condition selects CIDRs that
   * belong to the specified IPAM pool.</p>
   */
  inline const Aws::String& GetIpamPoolId() const { return m_ipamPoolId; }
  inline bool IpamPoolIdHasBeenSet() const { return m_ipamPoolIdHasBeenSet; }
  template <typename IpamPoolIdT = Aws::String>
  void SetIpamPoolId(IpamPoolIdT&& value) {
    m_ipamPoolIdHasBeenSet = true;
    m_ipamPoolId = std::forward<IpamPoolIdT>(value);
  }
  template <typename IpamPoolIdT = Aws::String>
  IpamPrefixListResolverRuleCondition& WithIpamPoolId(IpamPoolIdT&& value) {
    SetIpamPoolId(std::forward<IpamPoolIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Amazon Web Services resource to match against. This condition
   * selects CIDRs associated with the specified resource.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  IpamPrefixListResolverRuleCondition& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID that owns the resources to match against.
   * This condition selects CIDRs from resources owned by the specified account.</p>
   */
  inline const Aws::String& GetResourceOwner() const { return m_resourceOwner; }
  inline bool ResourceOwnerHasBeenSet() const { return m_resourceOwnerHasBeenSet; }
  template <typename ResourceOwnerT = Aws::String>
  void SetResourceOwner(ResourceOwnerT&& value) {
    m_resourceOwnerHasBeenSet = true;
    m_resourceOwner = std::forward<ResourceOwnerT>(value);
  }
  template <typename ResourceOwnerT = Aws::String>
  IpamPrefixListResolverRuleCondition& WithResourceOwner(ResourceOwnerT&& value) {
    SetResourceOwner(std::forward<ResourceOwnerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region where the resources are located. This
   * condition selects CIDRs from resources in the specified Region.</p>
   */
  inline const Aws::String& GetResourceRegion() const { return m_resourceRegion; }
  inline bool ResourceRegionHasBeenSet() const { return m_resourceRegionHasBeenSet; }
  template <typename ResourceRegionT = Aws::String>
  void SetResourceRegion(ResourceRegionT&& value) {
    m_resourceRegionHasBeenSet = true;
    m_resourceRegion = std::forward<ResourceRegionT>(value);
  }
  template <typename ResourceRegionT = Aws::String>
  IpamPrefixListResolverRuleCondition& WithResourceRegion(ResourceRegionT&& value) {
    SetResourceRegion(std::forward<ResourceRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A tag key-value pair to match against. This condition selects CIDRs from
   * resources that have the specified tag.</p>
   */
  inline const IpamResourceTag& GetResourceTag() const { return m_resourceTag; }
  inline bool ResourceTagHasBeenSet() const { return m_resourceTagHasBeenSet; }
  template <typename ResourceTagT = IpamResourceTag>
  void SetResourceTag(ResourceTagT&& value) {
    m_resourceTagHasBeenSet = true;
    m_resourceTag = std::forward<ResourceTagT>(value);
  }
  template <typename ResourceTagT = IpamResourceTag>
  IpamPrefixListResolverRuleCondition& WithResourceTag(ResourceTagT&& value) {
    SetResourceTag(std::forward<ResourceTagT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A CIDR block to match against. This condition selects CIDRs that fall within
   * or match the specified CIDR range.</p>
   */
  inline const Aws::String& GetCidr() const { return m_cidr; }
  inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
  template <typename CidrT = Aws::String>
  void SetCidr(CidrT&& value) {
    m_cidrHasBeenSet = true;
    m_cidr = std::forward<CidrT>(value);
  }
  template <typename CidrT = Aws::String>
  IpamPrefixListResolverRuleCondition& WithCidr(CidrT&& value) {
    SetCidr(std::forward<CidrT>(value));
    return *this;
  }
  ///@}
 private:
  IpamPrefixListResolverRuleConditionOperation m_operation{IpamPrefixListResolverRuleConditionOperation::NOT_SET};
  bool m_operationHasBeenSet = false;

  Aws::String m_ipamPoolId;
  bool m_ipamPoolIdHasBeenSet = false;

  Aws::String m_resourceId;
  bool m_resourceIdHasBeenSet = false;

  Aws::String m_resourceOwner;
  bool m_resourceOwnerHasBeenSet = false;

  Aws::String m_resourceRegion;
  bool m_resourceRegionHasBeenSet = false;

  IpamResourceTag m_resourceTag;
  bool m_resourceTagHasBeenSet = false;

  Aws::String m_cidr;
  bool m_cidrHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
