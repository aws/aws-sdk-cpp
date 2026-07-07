/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/AwsConfigConnectorArnComparison.h>

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
 * <p>A filter that matches connectors by the ARN of the associated Amazon Web
 * Services Config connector.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/AwsConfigConnectorArnFilter">AWS
 * API Reference</a></p>
 */
class AwsConfigConnectorArnFilter {
 public:
  AWS_INSPECTOR2_API AwsConfigConnectorArnFilter() = default;
  AWS_INSPECTOR2_API AwsConfigConnectorArnFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API AwsConfigConnectorArnFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The comparison operator for the Amazon Web Services Config connector ARN
   * filter.</p>
   */
  inline AwsConfigConnectorArnComparison GetComparison() const { return m_comparison; }
  inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }
  inline void SetComparison(AwsConfigConnectorArnComparison value) {
    m_comparisonHasBeenSet = true;
    m_comparison = value;
  }
  inline AwsConfigConnectorArnFilter& WithComparison(AwsConfigConnectorArnComparison value) {
    SetComparison(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Config connector ARN value to filter by.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  AwsConfigConnectorArnFilter& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  AwsConfigConnectorArnComparison m_comparison{AwsConfigConnectorArnComparison::NOT_SET};

  Aws::String m_value;
  bool m_comparisonHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
