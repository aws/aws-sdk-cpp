/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ConnectorCloudProvider.h>
#include <aws/inspector2/model/ProviderComparison.h>

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
 * <p>A filter that matches connectors by cloud provider.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ProviderFilter">AWS
 * API Reference</a></p>
 */
class ProviderFilter {
 public:
  AWS_INSPECTOR2_API ProviderFilter() = default;
  AWS_INSPECTOR2_API ProviderFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API ProviderFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The comparison operator for the provider filter.</p>
   */
  inline ProviderComparison GetComparison() const { return m_comparison; }
  inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }
  inline void SetComparison(ProviderComparison value) {
    m_comparisonHasBeenSet = true;
    m_comparison = value;
  }
  inline ProviderFilter& WithComparison(ProviderComparison value) {
    SetComparison(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud provider value to filter by.</p>
   */
  inline ConnectorCloudProvider GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  inline void SetValue(ConnectorCloudProvider value) {
    m_valueHasBeenSet = true;
    m_value = value;
  }
  inline ProviderFilter& WithValue(ConnectorCloudProvider value) {
    SetValue(value);
    return *this;
  }
  ///@}
 private:
  ProviderComparison m_comparison{ProviderComparison::NOT_SET};

  ConnectorCloudProvider m_value{ConnectorCloudProvider::NOT_SET};
  bool m_comparisonHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
