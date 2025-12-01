/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/FilterV2StringConditionComparisonOperator.h>

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
 * <p> System defined filtering condition. For example, the NOT_EXISTS
 * StringCondition returns documents where the field specified by FilterKey does
 * not exist in the document.</p> <p>When the NOT_EXISTS StringCondition is added
 * to a FilterV2 object, FilterValues must be null or empty. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/FilterV2StringCondition">AWS
 * API Reference</a></p>
 */
class FilterV2StringCondition {
 public:
  AWS_CONNECT_API FilterV2StringCondition() = default;
  AWS_CONNECT_API FilterV2StringCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API FilterV2StringCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The string condition. </p>
   */
  inline FilterV2StringConditionComparisonOperator GetComparison() const { return m_comparison; }
  inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }
  inline void SetComparison(FilterV2StringConditionComparisonOperator value) {
    m_comparisonHasBeenSet = true;
    m_comparison = value;
  }
  inline FilterV2StringCondition& WithComparison(FilterV2StringConditionComparisonOperator value) {
    SetComparison(value);
    return *this;
  }
  ///@}
 private:
  FilterV2StringConditionComparisonOperator m_comparison{FilterV2StringConditionComparisonOperator::NOT_SET};
  bool m_comparisonHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
