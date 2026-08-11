/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/MetricFilterBooleanCondition.h>
#include <aws/connect/model/MetricFilterNumberCondition.h>
#include <aws/connect/model/MetricFilterStringCondition.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>A filter condition applied to a metric component in a calculation. Filters
 * restrict the data included in the metric computation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/MetricFilter">AWS
 * API Reference</a></p>
 */
class MetricFilter {
 public:
  AWS_CONNECT_API MetricFilter() = default;
  AWS_CONNECT_API MetricFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API MetricFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The key identifying the field to filter on.</p>
   */
  inline const Aws::String& GetMetricFilterKey() const { return m_metricFilterKey; }
  inline bool MetricFilterKeyHasBeenSet() const { return m_metricFilterKeyHasBeenSet; }
  template <typename MetricFilterKeyT = Aws::String>
  void SetMetricFilterKey(MetricFilterKeyT&& value) {
    m_metricFilterKeyHasBeenSet = true;
    m_metricFilterKey = std::forward<MetricFilterKeyT>(value);
  }
  template <typename MetricFilterKeyT = Aws::String>
  MetricFilter& WithMetricFilterKey(MetricFilterKeyT&& value) {
    SetMetricFilterKey(std::forward<MetricFilterKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the filter condition is negated. When set to
   * <code>true</code>, the filter excludes matching data instead of including
   * it.</p>
   */
  inline bool GetNegate() const { return m_negate; }
  inline bool NegateHasBeenSet() const { return m_negateHasBeenSet; }
  inline void SetNegate(bool value) {
    m_negateHasBeenSet = true;
    m_negate = value;
  }
  inline MetricFilter& WithNegate(bool value) {
    SetNegate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A numeric comparison condition.</p>
   */
  inline const MetricFilterNumberCondition& GetNumberCondition() const { return m_numberCondition; }
  inline bool NumberConditionHasBeenSet() const { return m_numberConditionHasBeenSet; }
  template <typename NumberConditionT = MetricFilterNumberCondition>
  void SetNumberCondition(NumberConditionT&& value) {
    m_numberConditionHasBeenSet = true;
    m_numberCondition = std::forward<NumberConditionT>(value);
  }
  template <typename NumberConditionT = MetricFilterNumberCondition>
  MetricFilter& WithNumberCondition(NumberConditionT&& value) {
    SetNumberCondition(std::forward<NumberConditionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A string comparison condition.</p>
   */
  inline const MetricFilterStringCondition& GetStringCondition() const { return m_stringCondition; }
  inline bool StringConditionHasBeenSet() const { return m_stringConditionHasBeenSet; }
  template <typename StringConditionT = MetricFilterStringCondition>
  void SetStringCondition(StringConditionT&& value) {
    m_stringConditionHasBeenSet = true;
    m_stringCondition = std::forward<StringConditionT>(value);
  }
  template <typename StringConditionT = MetricFilterStringCondition>
  MetricFilter& WithStringCondition(StringConditionT&& value) {
    SetStringCondition(std::forward<StringConditionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A boolean comparison condition.</p>
   */
  inline const MetricFilterBooleanCondition& GetBooleanCondition() const { return m_booleanCondition; }
  inline bool BooleanConditionHasBeenSet() const { return m_booleanConditionHasBeenSet; }
  template <typename BooleanConditionT = MetricFilterBooleanCondition>
  void SetBooleanCondition(BooleanConditionT&& value) {
    m_booleanConditionHasBeenSet = true;
    m_booleanCondition = std::forward<BooleanConditionT>(value);
  }
  template <typename BooleanConditionT = MetricFilterBooleanCondition>
  MetricFilter& WithBooleanCondition(BooleanConditionT&& value) {
    SetBooleanCondition(std::forward<BooleanConditionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_metricFilterKey;

  bool m_negate{false};

  MetricFilterNumberCondition m_numberCondition;

  MetricFilterStringCondition m_stringCondition;

  MetricFilterBooleanCondition m_booleanCondition;
  bool m_metricFilterKeyHasBeenSet = false;
  bool m_negateHasBeenSet = false;
  bool m_numberConditionHasBeenSet = false;
  bool m_stringConditionHasBeenSet = false;
  bool m_booleanConditionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
