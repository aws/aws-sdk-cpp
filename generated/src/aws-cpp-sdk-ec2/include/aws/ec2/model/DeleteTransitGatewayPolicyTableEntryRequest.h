/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class DeleteTransitGatewayPolicyTableEntryRequest : public EC2Request {
 public:
  AWS_EC2_API DeleteTransitGatewayPolicyTableEntryRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteTransitGatewayPolicyTableEntry"; }

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
  DeleteTransitGatewayPolicyTableEntryRequest& WithTransitGatewayPolicyTableId(TransitGatewayPolicyTableIdT&& value) {
    SetTransitGatewayPolicyTableId(std::forward<TransitGatewayPolicyTableIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The rule number of the policy table entry to delete.</p>
   */
  inline const Aws::String& GetPolicyRuleNumber() const { return m_policyRuleNumber; }
  inline bool PolicyRuleNumberHasBeenSet() const { return m_policyRuleNumberHasBeenSet; }
  template <typename PolicyRuleNumberT = Aws::String>
  void SetPolicyRuleNumber(PolicyRuleNumberT&& value) {
    m_policyRuleNumberHasBeenSet = true;
    m_policyRuleNumber = std::forward<PolicyRuleNumberT>(value);
  }
  template <typename PolicyRuleNumberT = Aws::String>
  DeleteTransitGatewayPolicyTableEntryRequest& WithPolicyRuleNumber(PolicyRuleNumberT&& value) {
    SetPolicyRuleNumber(std::forward<PolicyRuleNumberT>(value));
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
  inline DeleteTransitGatewayPolicyTableEntryRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_transitGatewayPolicyTableId;

  Aws::String m_policyRuleNumber;

  bool m_dryRun{false};
  bool m_transitGatewayPolicyTableIdHasBeenSet = false;
  bool m_policyRuleNumberHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
