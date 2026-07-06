/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Billing {
namespace Model {

/**
 * <p>A specific billing period identified by year and month.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/BillingPeriod">AWS
 * API Reference</a></p>
 */
class BillingPeriod {
 public:
  AWS_BILLING_API BillingPeriod() = default;
  AWS_BILLING_API BillingPeriod(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API BillingPeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The four-digit year of the billing period.</p>
   */
  inline int GetYear() const { return m_year; }
  inline bool YearHasBeenSet() const { return m_yearHasBeenSet; }
  inline void SetYear(int value) {
    m_yearHasBeenSet = true;
    m_year = value;
  }
  inline BillingPeriod& WithYear(int value) {
    SetYear(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The month of the billing period as an integer between 1 and 12.</p>
   */
  inline int GetMonth() const { return m_month; }
  inline bool MonthHasBeenSet() const { return m_monthHasBeenSet; }
  inline void SetMonth(int value) {
    m_monthHasBeenSet = true;
    m_month = value;
  }
  inline BillingPeriod& WithMonth(int value) {
    SetMonth(value);
    return *this;
  }
  ///@}
 private:
  int m_year{0};

  int m_month{0};
  bool m_yearHasBeenSet = false;
  bool m_monthHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
