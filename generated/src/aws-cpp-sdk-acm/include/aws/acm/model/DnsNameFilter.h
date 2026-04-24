/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/ComparisonOperator.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ACM {
namespace Model {

/**
 * <p>Filters certificates by DNS name.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/DnsNameFilter">AWS
 * API Reference</a></p>
 */
class DnsNameFilter {
 public:
  AWS_ACM_API DnsNameFilter() = default;
  AWS_ACM_API DnsNameFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API DnsNameFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The DNS name value to match against.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  DnsNameFilter& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The comparison operator to use.</p>
   */
  inline ComparisonOperator GetComparisonOperator() const { return m_comparisonOperator; }
  inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }
  inline void SetComparisonOperator(ComparisonOperator value) {
    m_comparisonOperatorHasBeenSet = true;
    m_comparisonOperator = value;
  }
  inline DnsNameFilter& WithComparisonOperator(ComparisonOperator value) {
    SetComparisonOperator(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_value;

  ComparisonOperator m_comparisonOperator{ComparisonOperator::NOT_SET};
  bool m_valueHasBeenSet = false;
  bool m_comparisonOperatorHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
