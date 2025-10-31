/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/AddressFamily.h>
#include <aws/ec2/model/IpamPrefixListResolverRuleRequest.h>
#include <aws/ec2/model/TagSpecification.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class CreateIpamPrefixListResolverRequest : public EC2Request {
 public:
  AWS_EC2_API CreateIpamPrefixListResolverRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateIpamPrefixListResolver"; }

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
  inline CreateIpamPrefixListResolverRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the IPAM that will serve as the source of the IP address database
   * for CIDR selection. The IPAM must be in the Advanced tier to use this
   * feature.</p>
   */
  inline const Aws::String& GetIpamId() const { return m_ipamId; }
  inline bool IpamIdHasBeenSet() const { return m_ipamIdHasBeenSet; }
  template <typename IpamIdT = Aws::String>
  void SetIpamId(IpamIdT&& value) {
    m_ipamIdHasBeenSet = true;
    m_ipamId = std::forward<IpamIdT>(value);
  }
  template <typename IpamIdT = Aws::String>
  CreateIpamPrefixListResolverRequest& WithIpamId(IpamIdT&& value) {
    SetIpamId(std::forward<IpamIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description for the IPAM prefix list resolver to help you identify its
   * purpose and configuration.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateIpamPrefixListResolverRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The address family for the IPAM prefix list resolver. Valid values are
   * <code>ipv4</code> and <code>ipv6</code>. You must create separate resolvers for
   * IPv4 and IPv6 CIDRs as they cannot be mixed in the same resolver.</p>
   */
  inline AddressFamily GetAddressFamily() const { return m_addressFamily; }
  inline bool AddressFamilyHasBeenSet() const { return m_addressFamilyHasBeenSet; }
  inline void SetAddressFamily(AddressFamily value) {
    m_addressFamilyHasBeenSet = true;
    m_addressFamily = value;
  }
  inline CreateIpamPrefixListResolverRequest& WithAddressFamily(AddressFamily value) {
    SetAddressFamily(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CIDR selection rules for the resolver.</p> <p>CIDR selection rules define
   * the business logic for selecting CIDRs from IPAM. If a CIDR matches any of the
   * rules, it will be included. If a rule has multiple conditions, the CIDR has to
   * match every condition of that rule. You can create a prefix list resolver
   * without any CIDR selection rules, but it will generate empty versions
   * (containing no CIDRs) until you add rules.</p>
   */
  inline const Aws::Vector<IpamPrefixListResolverRuleRequest>& GetRules() const { return m_rules; }
  inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
  template <typename RulesT = Aws::Vector<IpamPrefixListResolverRuleRequest>>
  void SetRules(RulesT&& value) {
    m_rulesHasBeenSet = true;
    m_rules = std::forward<RulesT>(value);
  }
  template <typename RulesT = Aws::Vector<IpamPrefixListResolverRuleRequest>>
  CreateIpamPrefixListResolverRequest& WithRules(RulesT&& value) {
    SetRules(std::forward<RulesT>(value));
    return *this;
  }
  template <typename RulesT = IpamPrefixListResolverRuleRequest>
  CreateIpamPrefixListResolverRequest& AddRules(RulesT&& value) {
    m_rulesHasBeenSet = true;
    m_rules.emplace_back(std::forward<RulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to apply to the IPAM prefix list resolver during creation. Tags help
   * you organize and manage your Amazon Web Services resources.</p>
   */
  inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
  inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
  template <typename TagSpecificationsT = Aws::Vector<TagSpecification>>
  void SetTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications = std::forward<TagSpecificationsT>(value);
  }
  template <typename TagSpecificationsT = Aws::Vector<TagSpecification>>
  CreateIpamPrefixListResolverRequest& WithTagSpecifications(TagSpecificationsT&& value) {
    SetTagSpecifications(std::forward<TagSpecificationsT>(value));
    return *this;
  }
  template <typename TagSpecificationsT = TagSpecification>
  CreateIpamPrefixListResolverRequest& AddTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. For more information, see <a
   * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
   * idempotency</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateIpamPrefixListResolverRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_dryRun{false};
  bool m_dryRunHasBeenSet = false;

  Aws::String m_ipamId;
  bool m_ipamIdHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  AddressFamily m_addressFamily{AddressFamily::NOT_SET};
  bool m_addressFamilyHasBeenSet = false;

  Aws::Vector<IpamPrefixListResolverRuleRequest> m_rules;
  bool m_rulesHasBeenSet = false;

  Aws::Vector<TagSpecification> m_tagSpecifications;
  bool m_tagSpecificationsHasBeenSet = false;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
