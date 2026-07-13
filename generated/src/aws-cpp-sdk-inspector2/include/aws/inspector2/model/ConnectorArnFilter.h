/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ConnectorArnComparison.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {

/**
 * <p>A filter that matches connectors by connector ARN.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ConnectorArnFilter">AWS
 * API Reference</a></p>
 */
class ConnectorArnFilter {
 public:
  AWS_INSPECTOR2_API ConnectorArnFilter() = default;
  AWS_INSPECTOR2_API ConnectorArnFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API ConnectorArnFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The comparison operator for the connector ARN filter.</p>
   */
  inline ConnectorArnComparison GetComparison() const { return m_comparison; }
  inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }
  inline void SetComparison(ConnectorArnComparison value) {
    m_comparisonHasBeenSet = true;
    m_comparison = value;
  }
  inline ConnectorArnFilter& WithComparison(ConnectorArnComparison value) {
    SetComparison(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connector ARN value to filter by.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  ConnectorArnFilter& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  ConnectorArnComparison m_comparison{ConnectorArnComparison::NOT_SET};

  Aws::String m_value;
  bool m_comparisonHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
