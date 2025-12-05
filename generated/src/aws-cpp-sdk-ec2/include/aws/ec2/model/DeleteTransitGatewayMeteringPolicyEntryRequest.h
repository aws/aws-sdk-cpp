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
class DeleteTransitGatewayMeteringPolicyEntryRequest : public EC2Request {
 public:
  AWS_EC2_API DeleteTransitGatewayMeteringPolicyEntryRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteTransitGatewayMeteringPolicyEntry"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The ID of the transit gateway metering policy containing the entry to
   * delete.</p>
   */
  inline const Aws::String& GetTransitGatewayMeteringPolicyId() const { return m_transitGatewayMeteringPolicyId; }
  inline bool TransitGatewayMeteringPolicyIdHasBeenSet() const { return m_transitGatewayMeteringPolicyIdHasBeenSet; }
  template <typename TransitGatewayMeteringPolicyIdT = Aws::String>
  void SetTransitGatewayMeteringPolicyId(TransitGatewayMeteringPolicyIdT&& value) {
    m_transitGatewayMeteringPolicyIdHasBeenSet = true;
    m_transitGatewayMeteringPolicyId = std::forward<TransitGatewayMeteringPolicyIdT>(value);
  }
  template <typename TransitGatewayMeteringPolicyIdT = Aws::String>
  DeleteTransitGatewayMeteringPolicyEntryRequest& WithTransitGatewayMeteringPolicyId(TransitGatewayMeteringPolicyIdT&& value) {
    SetTransitGatewayMeteringPolicyId(std::forward<TransitGatewayMeteringPolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The rule number of the metering policy entry to delete.</p>
   */
  inline int GetPolicyRuleNumber() const { return m_policyRuleNumber; }
  inline bool PolicyRuleNumberHasBeenSet() const { return m_policyRuleNumberHasBeenSet; }
  inline void SetPolicyRuleNumber(int value) {
    m_policyRuleNumberHasBeenSet = true;
    m_policyRuleNumber = value;
  }
  inline DeleteTransitGatewayMeteringPolicyEntryRequest& WithPolicyRuleNumber(int value) {
    SetPolicyRuleNumber(value);
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
  inline DeleteTransitGatewayMeteringPolicyEntryRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_transitGatewayMeteringPolicyId;

  int m_policyRuleNumber{0};

  bool m_dryRun{false};
  bool m_transitGatewayMeteringPolicyIdHasBeenSet = false;
  bool m_policyRuleNumberHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
