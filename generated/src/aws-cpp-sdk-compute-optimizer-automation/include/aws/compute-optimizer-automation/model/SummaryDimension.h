/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/SummaryDimensionKey.h>
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
 * <p>A key-value pair used to categorize and group summary data for analysis and
 * reporting.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/SummaryDimension">AWS
 * API Reference</a></p>
 */
class SummaryDimension {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API SummaryDimension() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API SummaryDimension(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API SummaryDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The dimension key used for categorizing summary data.</p>
   */
  inline SummaryDimensionKey GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  inline void SetKey(SummaryDimensionKey value) {
    m_keyHasBeenSet = true;
    m_key = value;
  }
  inline SummaryDimension& WithKey(SummaryDimensionKey value) {
    SetKey(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific value for this dimension key used in the summary grouping.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  SummaryDimension& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  SummaryDimensionKey m_key{SummaryDimensionKey::NOT_SET};

  Aws::String m_value;
  bool m_keyHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
