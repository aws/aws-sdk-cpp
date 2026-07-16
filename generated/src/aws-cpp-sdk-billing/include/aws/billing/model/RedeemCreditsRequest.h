/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/BillingRequest.h>
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Billing {
namespace Model {

/**
 */
class RedeemCreditsRequest : public BillingRequest {
 public:
  AWS_BILLING_API RedeemCreditsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RedeemCredits"; }

  AWS_BILLING_API Aws::String SerializePayload() const override;

  AWS_BILLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The promotional credit code to redeem.</p>
   */
  inline const Aws::String& GetPromoCode() const { return m_promoCode; }
  inline bool PromoCodeHasBeenSet() const { return m_promoCodeHasBeenSet; }
  template <typename PromoCodeT = Aws::String>
  void SetPromoCode(PromoCodeT&& value) {
    m_promoCodeHasBeenSet = true;
    m_promoCode = std::forward<PromoCodeT>(value);
  }
  template <typename PromoCodeT = Aws::String>
  RedeemCreditsRequest& WithPromoCode(PromoCodeT&& value) {
    SetPromoCode(std::forward<PromoCodeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_promoCode;
  bool m_promoCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
