/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamPrefixListResolverRuleRequest.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class ModifyIpamPrefixListResolverRequest : public EC2Request {
 public:
  AWS_EC2_API ModifyIpamPrefixListResolverRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ModifyIpamPrefixListResolver"; }

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
  inline ModifyIpamPrefixListResolverRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the IPAM prefix list resolver to modify.</p>
   */
  inline const Aws::String& GetIpamPrefixListResolverId() const { return m_ipamPrefixListResolverId; }
  inline bool IpamPrefixListResolverIdHasBeenSet() const { return m_ipamPrefixListResolverIdHasBeenSet; }
  template <typename IpamPrefixListResolverIdT = Aws::String>
  void SetIpamPrefixListResolverId(IpamPrefixListResolverIdT&& value) {
    m_ipamPrefixListResolverIdHasBeenSet = true;
    m_ipamPrefixListResolverId = std::forward<IpamPrefixListResolverIdT>(value);
  }
  template <typename IpamPrefixListResolverIdT = Aws::String>
  ModifyIpamPrefixListResolverRequest& WithIpamPrefixListResolverId(IpamPrefixListResolverIdT&& value) {
    SetIpamPrefixListResolverId(std::forward<IpamPrefixListResolverIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new description for the IPAM prefix list resolver.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ModifyIpamPrefixListResolverRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated CIDR selection rules for the resolver. These rules replace the
   * existing rules entirely.</p>
   */
  inline const Aws::Vector<IpamPrefixListResolverRuleRequest>& GetRules() const { return m_rules; }
  inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
  template <typename RulesT = Aws::Vector<IpamPrefixListResolverRuleRequest>>
  void SetRules(RulesT&& value) {
    m_rulesHasBeenSet = true;
    m_rules = std::forward<RulesT>(value);
  }
  template <typename RulesT = Aws::Vector<IpamPrefixListResolverRuleRequest>>
  ModifyIpamPrefixListResolverRequest& WithRules(RulesT&& value) {
    SetRules(std::forward<RulesT>(value));
    return *this;
  }
  template <typename RulesT = IpamPrefixListResolverRuleRequest>
  ModifyIpamPrefixListResolverRequest& AddRules(RulesT&& value) {
    m_rulesHasBeenSet = true;
    m_rules.emplace_back(std::forward<RulesT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_dryRun{false};

  Aws::String m_ipamPrefixListResolverId;

  Aws::String m_description;

  Aws::Vector<IpamPrefixListResolverRuleRequest> m_rules;
  bool m_dryRunHasBeenSet = false;
  bool m_ipamPrefixListResolverIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_rulesHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
