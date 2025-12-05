/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/RecommendedActionFilterName.h>
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
 * <p>A filter used to narrow down recommended action results based on specific
 * criteria.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/RecommendedActionFilter">AWS
 * API Reference</a></p>
 */
class RecommendedActionFilter {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API RecommendedActionFilter() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API RecommendedActionFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API RecommendedActionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the filter field to apply.</p>
   */
  inline RecommendedActionFilterName GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  inline void SetName(RecommendedActionFilterName value) {
    m_nameHasBeenSet = true;
    m_name = value;
  }
  inline RecommendedActionFilter& WithName(RecommendedActionFilterName value) {
    SetName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of filter values to match against the specified filter name. Used to
   * narrow down recommended actions based on specific criteria.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  RecommendedActionFilter& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = Aws::String>
  RecommendedActionFilter& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}
 private:
  RecommendedActionFilterName m_name{RecommendedActionFilterName::NOT_SET};

  Aws::Vector<Aws::String> m_values;
  bool m_nameHasBeenSet = false;
  bool m_valuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
