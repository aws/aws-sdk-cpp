/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ConnectorType.h>
#include <aws/inspector2/model/ConnectorTypeComparison.h>

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
 * <p>A filter that matches connectors by connector type.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ConnectorTypeFilter">AWS
 * API Reference</a></p>
 */
class ConnectorTypeFilter {
 public:
  AWS_INSPECTOR2_API ConnectorTypeFilter() = default;
  AWS_INSPECTOR2_API ConnectorTypeFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API ConnectorTypeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The comparison operator for the connector type filter.</p>
   */
  inline ConnectorTypeComparison GetComparison() const { return m_comparison; }
  inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }
  inline void SetComparison(ConnectorTypeComparison value) {
    m_comparisonHasBeenSet = true;
    m_comparison = value;
  }
  inline ConnectorTypeFilter& WithComparison(ConnectorTypeComparison value) {
    SetComparison(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connector type value to filter by.</p>
   */
  inline ConnectorType GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  inline void SetValue(ConnectorType value) {
    m_valueHasBeenSet = true;
    m_value = value;
  }
  inline ConnectorTypeFilter& WithValue(ConnectorType value) {
    SetValue(value);
    return *this;
  }
  ///@}
 private:
  ConnectorTypeComparison m_comparison{ConnectorTypeComparison::NOT_SET};

  ConnectorType m_value{ConnectorType::NOT_SET};
  bool m_comparisonHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
