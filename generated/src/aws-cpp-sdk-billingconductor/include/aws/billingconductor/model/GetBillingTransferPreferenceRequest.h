/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductorRequest.h>
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BillingConductor {
namespace Model {

/**
 */
class GetBillingTransferPreferenceRequest : public BillingConductorRequest {
 public:
  AWS_BILLINGCONDUCTOR_API GetBillingTransferPreferenceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetBillingTransferPreference"; }

  AWS_BILLINGCONDUCTOR_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the billing transfer whose preference you
   * want to retrieve.</p>
   */
  inline const Aws::String& GetResponsibilityTransferArn() const { return m_responsibilityTransferArn; }
  inline bool ResponsibilityTransferArnHasBeenSet() const { return m_responsibilityTransferArnHasBeenSet; }
  template <typename ResponsibilityTransferArnT = Aws::String>
  void SetResponsibilityTransferArn(ResponsibilityTransferArnT&& value) {
    m_responsibilityTransferArnHasBeenSet = true;
    m_responsibilityTransferArn = std::forward<ResponsibilityTransferArnT>(value);
  }
  template <typename ResponsibilityTransferArnT = Aws::String>
  GetBillingTransferPreferenceRequest& WithResponsibilityTransferArn(ResponsibilityTransferArnT&& value) {
    SetResponsibilityTransferArn(std::forward<ResponsibilityTransferArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_responsibilityTransferArn;
  bool m_responsibilityTransferArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace BillingConductor
}  // namespace Aws
