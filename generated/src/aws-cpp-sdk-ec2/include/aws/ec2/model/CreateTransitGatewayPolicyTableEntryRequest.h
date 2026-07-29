/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayRequestPolicyRule.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class CreateTransitGatewayPolicyTableEntryRequest : public EC2Request {
 public:
  AWS_EC2_API CreateTransitGatewayPolicyTableEntryRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateTransitGatewayPolicyTableEntry"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The ID of the transit gateway policy table.</p>
   */
  inline const Aws::String& GetTransitGatewayPolicyTableId() const { return m_transitGatewayPolicyTableId; }
  inline bool TransitGatewayPolicyTableIdHasBeenSet() const { return m_transitGatewayPolicyTableIdHasBeenSet; }
  template <typename TransitGatewayPolicyTableIdT = Aws::String>
  void SetTransitGatewayPolicyTableId(TransitGatewayPolicyTableIdT&& value) {
    m_transitGatewayPolicyTableIdHasBeenSet = true;
    m_transitGatewayPolicyTableId = std::forward<TransitGatewayPolicyTableIdT>(value);
  }
  template <typename TransitGatewayPolicyTableIdT = Aws::String>
  CreateTransitGatewayPolicyTableEntryRequest& WithTransitGatewayPolicyTableId(TransitGatewayPolicyTableIdT&& value) {
    SetTransitGatewayPolicyTableId(std::forward<TransitGatewayPolicyTableIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The rule number for the policy table entry. Lower rule numbers are evaluated
   * first and take precedence.</p>
   */
  inline const Aws::String& GetPolicyRuleNumber() const { return m_policyRuleNumber; }
  inline bool PolicyRuleNumberHasBeenSet() const { return m_policyRuleNumberHasBeenSet; }
  template <typename PolicyRuleNumberT = Aws::String>
  void SetPolicyRuleNumber(PolicyRuleNumberT&& value) {
    m_policyRuleNumberHasBeenSet = true;
    m_policyRuleNumber = std::forward<PolicyRuleNumberT>(value);
  }
  template <typename PolicyRuleNumberT = Aws::String>
  CreateTransitGatewayPolicyTableEntryRequest& WithPolicyRuleNumber(PolicyRuleNumberT&& value) {
    SetPolicyRuleNumber(std::forward<PolicyRuleNumberT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The matching criteria for the policy table entry.</p>
   */
  inline const TransitGatewayRequestPolicyRule& GetPolicyRule() const { return m_policyRule; }
  inline bool PolicyRuleHasBeenSet() const { return m_policyRuleHasBeenSet; }
  template <typename PolicyRuleT = TransitGatewayRequestPolicyRule>
  void SetPolicyRule(PolicyRuleT&& value) {
    m_policyRuleHasBeenSet = true;
    m_policyRule = std::forward<PolicyRuleT>(value);
  }
  template <typename PolicyRuleT = TransitGatewayRequestPolicyRule>
  CreateTransitGatewayPolicyTableEntryRequest& WithPolicyRule(PolicyRuleT&& value) {
    SetPolicyRule(std::forward<PolicyRuleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the transit gateway route table to use for traffic matching this
   * rule.</p>
   */
  inline const Aws::String& GetTargetRouteTableId() const { return m_targetRouteTableId; }
  inline bool TargetRouteTableIdHasBeenSet() const { return m_targetRouteTableIdHasBeenSet; }
  template <typename TargetRouteTableIdT = Aws::String>
  void SetTargetRouteTableId(TargetRouteTableIdT&& value) {
    m_targetRouteTableIdHasBeenSet = true;
    m_targetRouteTableId = std::forward<TargetRouteTableIdT>(value);
  }
  template <typename TargetRouteTableIdT = Aws::String>
  CreateTransitGatewayPolicyTableEntryRequest& WithTargetRouteTableId(TargetRouteTableIdT&& value) {
    SetTargetRouteTableId(std::forward<TargetRouteTableIdT>(value));
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
  inline CreateTransitGatewayPolicyTableEntryRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_transitGatewayPolicyTableId;

  Aws::String m_policyRuleNumber;

  TransitGatewayRequestPolicyRule m_policyRule;

  Aws::String m_targetRouteTableId;

  bool m_dryRun{false};
  bool m_transitGatewayPolicyTableIdHasBeenSet = false;
  bool m_policyRuleNumberHasBeenSet = false;
  bool m_policyRuleHasBeenSet = false;
  bool m_targetRouteTableIdHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
