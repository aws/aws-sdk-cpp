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
 * <p>A time period for Enterprise Support billing.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/EnterpriseSupportTimePeriod">AWS
 * API Reference</a></p>
 */
class EnterpriseSupportTimePeriod {
 public:
  AWS_BILLING_API EnterpriseSupportTimePeriod() = default;
  AWS_BILLING_API EnterpriseSupportTimePeriod(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API EnterpriseSupportTimePeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The begin date of the time period.</p>
   */
  inline const Aws::Utils::DateTime& GetBeginDate() const { return m_beginDate; }
  inline bool BeginDateHasBeenSet() const { return m_beginDateHasBeenSet; }
  template <typename BeginDateT = Aws::Utils::DateTime>
  void SetBeginDate(BeginDateT&& value) {
    m_beginDateHasBeenSet = true;
    m_beginDate = std::forward<BeginDateT>(value);
  }
  template <typename BeginDateT = Aws::Utils::DateTime>
  EnterpriseSupportTimePeriod& WithBeginDate(BeginDateT&& value) {
    SetBeginDate(std::forward<BeginDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end date of the time period.</p>
   */
  inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
  inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
  template <typename EndDateT = Aws::Utils::DateTime>
  void SetEndDate(EndDateT&& value) {
    m_endDateHasBeenSet = true;
    m_endDate = std::forward<EndDateT>(value);
  }
  template <typename EndDateT = Aws::Utils::DateTime>
  EnterpriseSupportTimePeriod& WithEndDate(EndDateT&& value) {
    SetEndDate(std::forward<EndDateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_beginDate{};

  Aws::Utils::DateTime m_endDate{};
  bool m_beginDateHasBeenSet = false;
  bool m_endDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
