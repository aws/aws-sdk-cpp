/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayAttachmentNatGatewaySupportValue.h>
#include <aws/ec2/model/TransitGatewayAttachmentNatSystemRouteSupportValue.h>
#include <aws/ec2/model/TransitGatewayNatRuleRequest.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class ModifyTransitGatewayAttachmentNatConfigurationRequest : public EC2Request {
 public:
  AWS_EC2_API ModifyTransitGatewayAttachmentNatConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ModifyTransitGatewayAttachmentNatConfiguration"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The ID of the transit gateway attachment.</p>
   */
  inline const Aws::String& GetTransitGatewayAttachmentId() const { return m_transitGatewayAttachmentId; }
  inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }
  template <typename TransitGatewayAttachmentIdT = Aws::String>
  void SetTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) {
    m_transitGatewayAttachmentIdHasBeenSet = true;
    m_transitGatewayAttachmentId = std::forward<TransitGatewayAttachmentIdT>(value);
  }
  template <typename TransitGatewayAttachmentIdT = Aws::String>
  ModifyTransitGatewayAttachmentNatConfigurationRequest& WithTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) {
    SetTransitGatewayAttachmentId(std::forward<TransitGatewayAttachmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to enable or disable NAT gateway support for the
   * attachment. To enable NAT gateway support, the attachment must have at least one
   * NAT gateway rule. You can't modify the NAT configuration while NAT gateway
   * support is <code>enabling</code> or <code>disabling</code>. If you omit this
   * parameter, the current value doesn't change.</p>
   */
  inline TransitGatewayAttachmentNatGatewaySupportValue GetNatGatewaySupport() const { return m_natGatewaySupport; }
  inline bool NatGatewaySupportHasBeenSet() const { return m_natGatewaySupportHasBeenSet; }
  inline void SetNatGatewaySupport(TransitGatewayAttachmentNatGatewaySupportValue value) {
    m_natGatewaySupportHasBeenSet = true;
    m_natGatewaySupport = value;
  }
  inline ModifyTransitGatewayAttachmentNatConfigurationRequest& WithNatGatewaySupport(
      TransitGatewayAttachmentNatGatewaySupportValue value) {
    SetNatGatewaySupport(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the transit gateway installs routes for the NAT CIDRs in
   * the route tables to which the attachment propagates. For VPC attachments, the
   * transit gateway always installs these routes. You can enable or disable this
   * option only for Amazon Web Services Direct Connect gateway attachments and
   * Site-to-Site VPN attachments that use dynamic routing. For these attachments,
   * the default is <code>enable</code>. If you omit this parameter, the current
   * value doesn't change.</p>
   */
  inline TransitGatewayAttachmentNatSystemRouteSupportValue GetNatSystemRouteSupport() const { return m_natSystemRouteSupport; }
  inline bool NatSystemRouteSupportHasBeenSet() const { return m_natSystemRouteSupportHasBeenSet; }
  inline void SetNatSystemRouteSupport(TransitGatewayAttachmentNatSystemRouteSupportValue value) {
    m_natSystemRouteSupportHasBeenSet = true;
    m_natSystemRouteSupport = value;
  }
  inline ModifyTransitGatewayAttachmentNatConfigurationRequest& WithNatSystemRouteSupport(
      TransitGatewayAttachmentNatSystemRouteSupportValue value) {
    SetNatSystemRouteSupport(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The NAT gateway rules for the attachment. The rules that you specify replace
   * all existing NAT gateway rules for the attachment. You can specify up to 50
   * rules for an attachment. If you omit this parameter, the existing rules don't
   * change. To remove all rules, use <code>ResetNatGatewayRules</code>.</p>
   */
  inline const Aws::Vector<TransitGatewayNatRuleRequest>& GetNatGatewayRules() const { return m_natGatewayRules; }
  inline bool NatGatewayRulesHasBeenSet() const { return m_natGatewayRulesHasBeenSet; }
  template <typename NatGatewayRulesT = Aws::Vector<TransitGatewayNatRuleRequest>>
  void SetNatGatewayRules(NatGatewayRulesT&& value) {
    m_natGatewayRulesHasBeenSet = true;
    m_natGatewayRules = std::forward<NatGatewayRulesT>(value);
  }
  template <typename NatGatewayRulesT = Aws::Vector<TransitGatewayNatRuleRequest>>
  ModifyTransitGatewayAttachmentNatConfigurationRequest& WithNatGatewayRules(NatGatewayRulesT&& value) {
    SetNatGatewayRules(std::forward<NatGatewayRulesT>(value));
    return *this;
  }
  template <typename NatGatewayRulesT = TransitGatewayNatRuleRequest>
  ModifyTransitGatewayAttachmentNatConfigurationRequest& AddNatGatewayRules(NatGatewayRulesT&& value) {
    m_natGatewayRulesHasBeenSet = true;
    m_natGatewayRules.emplace_back(std::forward<NatGatewayRulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to remove all NAT gateway rules from the attachment. If you
   * omit this parameter, the transit gateway doesn't remove any rules. You can't
   * specify this parameter together with <code>NatGatewayRules</code>. Because you
   * can't enable NAT gateway support without rules, also set
   * <code>NatGatewaySupport</code> to <code>disable</code> in the same request if
   * NAT gateway support is currently enabled.</p>
   */
  inline bool GetResetNatGatewayRules() const { return m_resetNatGatewayRules; }
  inline bool ResetNatGatewayRulesHasBeenSet() const { return m_resetNatGatewayRulesHasBeenSet; }
  inline void SetResetNatGatewayRules(bool value) {
    m_resetNatGatewayRulesHasBeenSet = true;
    m_resetNatGatewayRules = value;
  }
  inline ModifyTransitGatewayAttachmentNatConfigurationRequest& WithResetNatGatewayRules(bool value) {
    SetResetNatGatewayRules(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Checks whether you have the required permissions for the action, without
   * actually making the request, and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline ModifyTransitGatewayAttachmentNatConfigurationRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_transitGatewayAttachmentId;

  TransitGatewayAttachmentNatGatewaySupportValue m_natGatewaySupport{TransitGatewayAttachmentNatGatewaySupportValue::NOT_SET};

  TransitGatewayAttachmentNatSystemRouteSupportValue m_natSystemRouteSupport{TransitGatewayAttachmentNatSystemRouteSupportValue::NOT_SET};

  Aws::Vector<TransitGatewayNatRuleRequest> m_natGatewayRules;

  bool m_resetNatGatewayRules{false};

  bool m_dryRun{false};
  bool m_transitGatewayAttachmentIdHasBeenSet = false;
  bool m_natGatewaySupportHasBeenSet = false;
  bool m_natSystemRouteSupportHasBeenSet = false;
  bool m_natGatewayRulesHasBeenSet = false;
  bool m_resetNatGatewayRulesHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
