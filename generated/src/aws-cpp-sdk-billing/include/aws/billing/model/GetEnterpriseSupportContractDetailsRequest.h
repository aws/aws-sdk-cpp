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
 * <p>The request structure for GetEnterpriseSupportContractDetails.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/GetEnterpriseSupportContractDetailsRequest">AWS
 * API Reference</a></p>
 */
class GetEnterpriseSupportContractDetailsRequest : public BillingRequest {
 public:
  AWS_BILLING_API GetEnterpriseSupportContractDetailsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetEnterpriseSupportContractDetails"; }

  AWS_BILLING_API Aws::String SerializePayload() const override;

  AWS_BILLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The billing month in YYYY-MM format. This must be a month in the past.</p>
   */
  inline const Aws::String& GetBillingMonth() const { return m_billingMonth; }
  inline bool BillingMonthHasBeenSet() const { return m_billingMonthHasBeenSet; }
  template <typename BillingMonthT = Aws::String>
  void SetBillingMonth(BillingMonthT&& value) {
    m_billingMonthHasBeenSet = true;
    m_billingMonth = std::forward<BillingMonthT>(value);
  }
  template <typename BillingMonthT = Aws::String>
  GetEnterpriseSupportContractDetailsRequest& WithBillingMonth(BillingMonthT&& value) {
    SetBillingMonth(std::forward<BillingMonthT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_billingMonth;
  bool m_billingMonthHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
