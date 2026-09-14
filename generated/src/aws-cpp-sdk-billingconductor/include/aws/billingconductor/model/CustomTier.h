/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BillingConductor {
namespace Model {

/**
 * <p> A custom tier for the pricing rule. Each custom tier applies a rate to the
 * usage that falls within the tier's range. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/CustomTier">AWS
 * API Reference</a></p>
 */
class CustomTier {
 public:
  AWS_BILLINGCONDUCTOR_API CustomTier() = default;
  AWS_BILLINGCONDUCTOR_API CustomTier(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLINGCONDUCTOR_API CustomTier& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The inclusive start of the usage range that this tier applies to. </p>
   */
  inline double GetBeginRangeInclusive() const { return m_beginRangeInclusive; }
  inline bool BeginRangeInclusiveHasBeenSet() const { return m_beginRangeInclusiveHasBeenSet; }
  inline void SetBeginRangeInclusive(double value) {
    m_beginRangeInclusiveHasBeenSet = true;
    m_beginRangeInclusive = value;
  }
  inline CustomTier& WithBeginRangeInclusive(double value) {
    SetBeginRangeInclusive(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The exclusive end of the usage range that this tier applies to. If you don't
   * specify a value, this tier applies to all usage that is greater than or equal to
   * <code>BeginRangeInclusive</code>. </p>
   */
  inline double GetEndRangeExclusive() const { return m_endRangeExclusive; }
  inline bool EndRangeExclusiveHasBeenSet() const { return m_endRangeExclusiveHasBeenSet; }
  inline void SetEndRangeExclusive(double value) {
    m_endRangeExclusiveHasBeenSet = true;
    m_endRangeExclusive = value;
  }
  inline CustomTier& WithEndRangeExclusive(double value) {
    SetEndRangeExclusive(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The rate that's applied to the usage that falls within this tier. </p>
   */
  inline double GetRateValue() const { return m_rateValue; }
  inline bool RateValueHasBeenSet() const { return m_rateValueHasBeenSet; }
  inline void SetRateValue(double value) {
    m_rateValueHasBeenSet = true;
    m_rateValue = value;
  }
  inline CustomTier& WithRateValue(double value) {
    SetRateValue(value);
    return *this;
  }
  ///@}
 private:
  double m_beginRangeInclusive{0.0};

  double m_endRangeExclusive{0.0};

  double m_rateValue{0.0};
  bool m_beginRangeInclusiveHasBeenSet = false;
  bool m_endRangeExclusiveHasBeenSet = false;
  bool m_rateValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace BillingConductor
}  // namespace Aws
