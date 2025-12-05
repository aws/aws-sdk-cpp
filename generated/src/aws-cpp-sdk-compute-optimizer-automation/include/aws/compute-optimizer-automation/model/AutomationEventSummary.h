/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/SummaryDimension.h>
#include <aws/compute-optimizer-automation/model/SummaryTotals.h>
#include <aws/compute-optimizer-automation/model/TimePeriod.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ComputeOptimizerAutomation {
namespace Model {

/**
 * <p> A summary of automation events grouped by specified dimensions.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/AutomationEventSummary">AWS
 * API Reference</a></p>
 */
class AutomationEventSummary {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API AutomationEventSummary() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API AutomationEventSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API AutomationEventSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The key identifier for this summary grouping.</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  AutomationEventSummary& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The dimensions used to group this summary, such as event status.</p>
   */
  inline const Aws::Vector<SummaryDimension>& GetDimensions() const { return m_dimensions; }
  inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
  template <typename DimensionsT = Aws::Vector<SummaryDimension>>
  void SetDimensions(DimensionsT&& value) {
    m_dimensionsHasBeenSet = true;
    m_dimensions = std::forward<DimensionsT>(value);
  }
  template <typename DimensionsT = Aws::Vector<SummaryDimension>>
  AutomationEventSummary& WithDimensions(DimensionsT&& value) {
    SetDimensions(std::forward<DimensionsT>(value));
    return *this;
  }
  template <typename DimensionsT = SummaryDimension>
  AutomationEventSummary& AddDimensions(DimensionsT&& value) {
    m_dimensionsHasBeenSet = true;
    m_dimensions.emplace_back(std::forward<DimensionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time period covered by this summary, with inclusive start time and
   * exclusive end time.</p>
   */
  inline const TimePeriod& GetTimePeriod() const { return m_timePeriod; }
  inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }
  template <typename TimePeriodT = TimePeriod>
  void SetTimePeriod(TimePeriodT&& value) {
    m_timePeriodHasBeenSet = true;
    m_timePeriod = std::forward<TimePeriodT>(value);
  }
  template <typename TimePeriodT = TimePeriod>
  AutomationEventSummary& WithTimePeriod(TimePeriodT&& value) {
    SetTimePeriod(std::forward<TimePeriodT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The aggregated totals for this summary, including event count and estimated
   * savings.</p>
   */
  inline const SummaryTotals& GetTotal() const { return m_total; }
  inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }
  template <typename TotalT = SummaryTotals>
  void SetTotal(TotalT&& value) {
    m_totalHasBeenSet = true;
    m_total = std::forward<TotalT>(value);
  }
  template <typename TotalT = SummaryTotals>
  AutomationEventSummary& WithTotal(TotalT&& value) {
    SetTotal(std::forward<TotalT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_key;

  Aws::Vector<SummaryDimension> m_dimensions;

  TimePeriod m_timePeriod;

  SummaryTotals m_total;
  bool m_keyHasBeenSet = false;
  bool m_dimensionsHasBeenSet = false;
  bool m_timePeriodHasBeenSet = false;
  bool m_totalHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
