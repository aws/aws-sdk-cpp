/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/MetricFilterBooleanConditionComparison.h>

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
 * <p>A boolean comparison condition for metric filters.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/MetricFilterBooleanCondition">AWS
 * API Reference</a></p>
 */
class MetricFilterBooleanCondition {
 public:
  AWS_CONNECT_API MetricFilterBooleanCondition() = default;
  AWS_CONNECT_API MetricFilterBooleanCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API MetricFilterBooleanCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The comparison operator. Valid values: <code>IS_TRUE</code> (matches when the
   * field is true) | <code>IS_FALSE</code> (matches when the field is false).</p>
   */
  inline MetricFilterBooleanConditionComparison GetComparison() const { return m_comparison; }
  inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }
  inline void SetComparison(MetricFilterBooleanConditionComparison value) {
    m_comparisonHasBeenSet = true;
    m_comparison = value;
  }
  inline MetricFilterBooleanCondition& WithComparison(MetricFilterBooleanConditionComparison value) {
    SetComparison(value);
    return *this;
  }
  ///@}
 private:
  MetricFilterBooleanConditionComparison m_comparison{MetricFilterBooleanConditionComparison::NOT_SET};
  bool m_comparisonHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
