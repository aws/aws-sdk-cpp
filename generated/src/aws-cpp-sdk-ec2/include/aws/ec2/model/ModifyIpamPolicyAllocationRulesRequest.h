/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamPolicyAllocationRuleRequest.h>
#include <aws/ec2/model/IpamPolicyResourceType.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class ModifyIpamPolicyAllocationRulesRequest : public EC2Request {
 public:
  AWS_EC2_API ModifyIpamPolicyAllocationRulesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ModifyIpamPolicyAllocationRules"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>A check for whether you have the required permissions for the action without
   * actually making the request and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline ModifyIpamPolicyAllocationRulesRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the IPAM policy whose allocation rules you want to modify.</p>
   */
  inline const Aws::String& GetIpamPolicyId() const { return m_ipamPolicyId; }
  inline bool IpamPolicyIdHasBeenSet() const { return m_ipamPolicyIdHasBeenSet; }
  template <typename IpamPolicyIdT = Aws::String>
  void SetIpamPolicyId(IpamPolicyIdT&& value) {
    m_ipamPolicyIdHasBeenSet = true;
    m_ipamPolicyId = std::forward<IpamPolicyIdT>(value);
  }
  template <typename IpamPolicyIdT = Aws::String>
  ModifyIpamPolicyAllocationRulesRequest& WithIpamPolicyId(IpamPolicyIdT&& value) {
    SetIpamPolicyId(std::forward<IpamPolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The locale for which to modify the allocation rules.</p>
   */
  inline const Aws::String& GetLocale() const { return m_locale; }
  inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
  template <typename LocaleT = Aws::String>
  void SetLocale(LocaleT&& value) {
    m_localeHasBeenSet = true;
    m_locale = std::forward<LocaleT>(value);
  }
  template <typename LocaleT = Aws::String>
  ModifyIpamPolicyAllocationRulesRequest& WithLocale(LocaleT&& value) {
    SetLocale(std::forward<LocaleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource type for which to modify the allocation rules.</p> <p>The Amazon
   * Web Services service or resource type that can use IP addresses through IPAM
   * policies. Supported services and resource types include:</p> <ul> <li>
   * <p>Elastic IP addresses</p> </li> </ul>
   */
  inline IpamPolicyResourceType GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(IpamPolicyResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline ModifyIpamPolicyAllocationRulesRequest& WithResourceType(IpamPolicyResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new allocation rules to apply to the IPAM policy.</p> <p>Allocation rules
   * are optional configurations within an IPAM policy that map Amazon Web Services
   * resource types to specific IPAM pools. If no rules are defined, the resource
   * types default to using Amazon-provided IP addresses.</p>
   */
  inline const Aws::Vector<IpamPolicyAllocationRuleRequest>& GetAllocationRules() const { return m_allocationRules; }
  inline bool AllocationRulesHasBeenSet() const { return m_allocationRulesHasBeenSet; }
  template <typename AllocationRulesT = Aws::Vector<IpamPolicyAllocationRuleRequest>>
  void SetAllocationRules(AllocationRulesT&& value) {
    m_allocationRulesHasBeenSet = true;
    m_allocationRules = std::forward<AllocationRulesT>(value);
  }
  template <typename AllocationRulesT = Aws::Vector<IpamPolicyAllocationRuleRequest>>
  ModifyIpamPolicyAllocationRulesRequest& WithAllocationRules(AllocationRulesT&& value) {
    SetAllocationRules(std::forward<AllocationRulesT>(value));
    return *this;
  }
  template <typename AllocationRulesT = IpamPolicyAllocationRuleRequest>
  ModifyIpamPolicyAllocationRulesRequest& AddAllocationRules(AllocationRulesT&& value) {
    m_allocationRulesHasBeenSet = true;
    m_allocationRules.emplace_back(std::forward<AllocationRulesT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_dryRun{false};

  Aws::String m_ipamPolicyId;

  Aws::String m_locale;

  IpamPolicyResourceType m_resourceType{IpamPolicyResourceType::NOT_SET};

  Aws::Vector<IpamPolicyAllocationRuleRequest> m_allocationRules;
  bool m_dryRunHasBeenSet = false;
  bool m_ipamPolicyIdHasBeenSet = false;
  bool m_localeHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_allocationRulesHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
