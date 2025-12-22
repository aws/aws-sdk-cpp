/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/RecommendedActionTotal.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Summary information about recommended actions, grouped by specific criteria
 * with totals and counts.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/RecommendedActionSummary">AWS
 * API Reference</a></p>
 */
class RecommendedActionSummary {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API RecommendedActionSummary() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API RecommendedActionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API RecommendedActionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The grouping key used to categorize the recommended actions in this
   * summary.</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  RecommendedActionSummary& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Aggregate totals for the recommended actions in this group, including count
   * and estimated savings.</p>
   */
  inline const RecommendedActionTotal& GetTotal() const { return m_total; }
  inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }
  template <typename TotalT = RecommendedActionTotal>
  void SetTotal(TotalT&& value) {
    m_totalHasBeenSet = true;
    m_total = std::forward<TotalT>(value);
  }
  template <typename TotalT = RecommendedActionTotal>
  RecommendedActionSummary& WithTotal(TotalT&& value) {
    SetTotal(std::forward<TotalT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_key;

  RecommendedActionTotal m_total;
  bool m_keyHasBeenSet = false;
  bool m_totalHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
