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
 * <p>A time period bounded by an inclusive start date and an inclusive end
 * date.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/Interval">AWS
 * API Reference</a></p>
 */
class Interval {
 public:
  AWS_BILLING_API Interval() = default;
  AWS_BILLING_API Interval(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Interval& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The start date of the interval. This date is included in the interval.</p>
   */
  inline const Aws::Utils::DateTime& GetStartDateInclusive() const { return m_startDateInclusive; }
  inline bool StartDateInclusiveHasBeenSet() const { return m_startDateInclusiveHasBeenSet; }
  template <typename StartDateInclusiveT = Aws::Utils::DateTime>
  void SetStartDateInclusive(StartDateInclusiveT&& value) {
    m_startDateInclusiveHasBeenSet = true;
    m_startDateInclusive = std::forward<StartDateInclusiveT>(value);
  }
  template <typename StartDateInclusiveT = Aws::Utils::DateTime>
  Interval& WithStartDateInclusive(StartDateInclusiveT&& value) {
    SetStartDateInclusive(std::forward<StartDateInclusiveT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end date of the interval. This date is included in the interval.</p>
   */
  inline const Aws::Utils::DateTime& GetEndDateInclusive() const { return m_endDateInclusive; }
  inline bool EndDateInclusiveHasBeenSet() const { return m_endDateInclusiveHasBeenSet; }
  template <typename EndDateInclusiveT = Aws::Utils::DateTime>
  void SetEndDateInclusive(EndDateInclusiveT&& value) {
    m_endDateInclusiveHasBeenSet = true;
    m_endDateInclusive = std::forward<EndDateInclusiveT>(value);
  }
  template <typename EndDateInclusiveT = Aws::Utils::DateTime>
  Interval& WithEndDateInclusive(EndDateInclusiveT&& value) {
    SetEndDateInclusive(std::forward<EndDateInclusiveT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_startDateInclusive{};

  Aws::Utils::DateTime m_endDateInclusive{};
  bool m_startDateInclusiveHasBeenSet = false;
  bool m_endDateInclusiveHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
