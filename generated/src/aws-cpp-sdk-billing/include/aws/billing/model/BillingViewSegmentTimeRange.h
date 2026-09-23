/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/utils/DateTime.h>

#include <utility>

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
 * <p> Specifies a time range with an inclusive begin date and an exclusive end
 * date. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/BillingViewSegmentTimeRange">AWS
 * API Reference</a></p>
 */
class BillingViewSegmentTimeRange {
 public:
  AWS_BILLING_API BillingViewSegmentTimeRange() = default;
  AWS_BILLING_API BillingViewSegmentTimeRange(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API BillingViewSegmentTimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The inclusive start of the time range. This value can't be in the future.
   * </p>
   */
  inline const Aws::Utils::DateTime& GetBeginDateInclusive() const { return m_beginDateInclusive; }
  inline bool BeginDateInclusiveHasBeenSet() const { return m_beginDateInclusiveHasBeenSet; }
  template <typename BeginDateInclusiveT = Aws::Utils::DateTime>
  void SetBeginDateInclusive(BeginDateInclusiveT&& value) {
    m_beginDateInclusiveHasBeenSet = true;
    m_beginDateInclusive = std::forward<BeginDateInclusiveT>(value);
  }
  template <typename BeginDateInclusiveT = Aws::Utils::DateTime>
  BillingViewSegmentTimeRange& WithBeginDateInclusive(BeginDateInclusiveT&& value) {
    SetBeginDateInclusive(std::forward<BeginDateInclusiveT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The exclusive end of the time range. This value must be after
   * <code>beginDateInclusive</code>. </p>
   */
  inline const Aws::Utils::DateTime& GetEndDateExclusive() const { return m_endDateExclusive; }
  inline bool EndDateExclusiveHasBeenSet() const { return m_endDateExclusiveHasBeenSet; }
  template <typename EndDateExclusiveT = Aws::Utils::DateTime>
  void SetEndDateExclusive(EndDateExclusiveT&& value) {
    m_endDateExclusiveHasBeenSet = true;
    m_endDateExclusive = std::forward<EndDateExclusiveT>(value);
  }
  template <typename EndDateExclusiveT = Aws::Utils::DateTime>
  BillingViewSegmentTimeRange& WithEndDateExclusive(EndDateExclusiveT&& value) {
    SetEndDateExclusive(std::forward<EndDateExclusiveT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_beginDateInclusive{};

  Aws::Utils::DateTime m_endDateExclusive{};
  bool m_beginDateInclusiveHasBeenSet = false;
  bool m_endDateExclusiveHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
