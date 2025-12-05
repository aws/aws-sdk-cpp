/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamPolicyAllocationRule.h>
#include <aws/ec2/model/IpamPolicyResourceType.h>

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
 * <p>Information about an IPAM policy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamPolicyDocument">AWS
 * API Reference</a></p>
 */
class IpamPolicyDocument {
 public:
  AWS_EC2_API IpamPolicyDocument() = default;
  AWS_EC2_API IpamPolicyDocument(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API IpamPolicyDocument& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the IPAM policy.</p>
   */
  inline const Aws::String& GetIpamPolicyId() const { return m_ipamPolicyId; }
  inline bool IpamPolicyIdHasBeenSet() const { return m_ipamPolicyIdHasBeenSet; }
  template <typename IpamPolicyIdT = Aws::String>
  void SetIpamPolicyId(IpamPolicyIdT&& value) {
    m_ipamPolicyIdHasBeenSet = true;
    m_ipamPolicyId = std::forward<IpamPolicyIdT>(value);
  }
  template <typename IpamPolicyIdT = Aws::String>
  IpamPolicyDocument& WithIpamPolicyId(IpamPolicyIdT&& value) {
    SetIpamPolicyId(std::forward<IpamPolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The locale of the IPAM policy document.</p>
   */
  inline const Aws::String& GetLocale() const { return m_locale; }
  inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
  template <typename LocaleT = Aws::String>
  void SetLocale(LocaleT&& value) {
    m_localeHasBeenSet = true;
    m_locale = std::forward<LocaleT>(value);
  }
  template <typename LocaleT = Aws::String>
  IpamPolicyDocument& WithLocale(LocaleT&& value) {
    SetLocale(std::forward<LocaleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource type of the IPAM policy document.</p> <p>The Amazon Web Services
   * service or resource type that can use IP addresses through IPAM policies.
   * Supported services and resource types include:</p> <ul> <li> <p>Elastic IP
   * addresses</p> </li> </ul>
   */
  inline IpamPolicyResourceType GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(IpamPolicyResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline IpamPolicyDocument& WithResourceType(IpamPolicyResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The allocation rules in the IPAM policy document.</p> <p>Allocation rules are
   * optional configurations within an IPAM policy that map Amazon Web Services
   * resource types to specific IPAM pools. If no rules are defined, the resource
   * types default to using Amazon-provided IP addresses.</p>
   */
  inline const Aws::Vector<IpamPolicyAllocationRule>& GetAllocationRules() const { return m_allocationRules; }
  inline bool AllocationRulesHasBeenSet() const { return m_allocationRulesHasBeenSet; }
  template <typename AllocationRulesT = Aws::Vector<IpamPolicyAllocationRule>>
  void SetAllocationRules(AllocationRulesT&& value) {
    m_allocationRulesHasBeenSet = true;
    m_allocationRules = std::forward<AllocationRulesT>(value);
  }
  template <typename AllocationRulesT = Aws::Vector<IpamPolicyAllocationRule>>
  IpamPolicyDocument& WithAllocationRules(AllocationRulesT&& value) {
    SetAllocationRules(std::forward<AllocationRulesT>(value));
    return *this;
  }
  template <typename AllocationRulesT = IpamPolicyAllocationRule>
  IpamPolicyDocument& AddAllocationRules(AllocationRulesT&& value) {
    m_allocationRulesHasBeenSet = true;
    m_allocationRules.emplace_back(std::forward<AllocationRulesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ipamPolicyId;

  Aws::String m_locale;

  IpamPolicyResourceType m_resourceType{IpamPolicyResourceType::NOT_SET};

  Aws::Vector<IpamPolicyAllocationRule> m_allocationRules;
  bool m_ipamPolicyIdHasBeenSet = false;
  bool m_localeHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_allocationRulesHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
