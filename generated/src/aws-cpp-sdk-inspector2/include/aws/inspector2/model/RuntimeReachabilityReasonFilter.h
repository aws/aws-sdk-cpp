/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/RuntimeReachabilityComparison.h>
#include <aws/inspector2/model/RuntimeReachabilityReason.h>

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
 * <p>An object that describes the details of a runtime reachability reason
 * filter.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/RuntimeReachabilityReasonFilter">AWS
 * API Reference</a></p>
 */
class RuntimeReachabilityReasonFilter {
 public:
  AWS_INSPECTOR2_API RuntimeReachabilityReasonFilter() = default;
  AWS_INSPECTOR2_API RuntimeReachabilityReasonFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API RuntimeReachabilityReasonFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The operator to use when comparing values in the filter.</p>
   */
  inline RuntimeReachabilityComparison GetComparison() const { return m_comparison; }
  inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }
  inline void SetComparison(RuntimeReachabilityComparison value) {
    m_comparisonHasBeenSet = true;
    m_comparison = value;
  }
  inline RuntimeReachabilityReasonFilter& WithComparison(RuntimeReachabilityComparison value) {
    SetComparison(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The runtime reachability reason to filter on.</p>
   */
  inline RuntimeReachabilityReason GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  inline void SetValue(RuntimeReachabilityReason value) {
    m_valueHasBeenSet = true;
    m_value = value;
  }
  inline RuntimeReachabilityReasonFilter& WithValue(RuntimeReachabilityReason value) {
    SetValue(value);
    return *this;
  }
  ///@}
 private:
  RuntimeReachabilityComparison m_comparison{RuntimeReachabilityComparison::NOT_SET};

  RuntimeReachabilityReason m_value{RuntimeReachabilityReason::NOT_SET};
  bool m_comparisonHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
