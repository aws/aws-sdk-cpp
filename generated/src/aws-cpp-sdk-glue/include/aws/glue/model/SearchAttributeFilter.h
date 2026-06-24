/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/SearchFilterOperator.h>
#include <aws/glue/model/SearchFilterValue.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>A filter that compares an attribute value using an operator.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SearchAttributeFilter">AWS
 * API Reference</a></p>
 */
class SearchAttributeFilter {
 public:
  AWS_GLUE_API SearchAttributeFilter() = default;
  AWS_GLUE_API SearchAttributeFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API SearchAttributeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The attribute name to filter on.</p>
   */
  inline const Aws::String& GetAttribute() const { return m_attribute; }
  inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
  template <typename AttributeT = Aws::String>
  void SetAttribute(AttributeT&& value) {
    m_attributeHasBeenSet = true;
    m_attribute = std::forward<AttributeT>(value);
  }
  template <typename AttributeT = Aws::String>
  SearchAttributeFilter& WithAttribute(AttributeT&& value) {
    SetAttribute(std::forward<AttributeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The comparison operator. Valid values are <code>equals</code>,
   * <code>greaterThan</code>, <code>greaterThanOrEquals</code>,
   * <code>lessThan</code>, <code>lessThanOrEquals</code>, and
   * <code>notExists</code>.</p>
   */
  inline SearchFilterOperator GetOperator() const { return m_operator; }
  inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
  inline void SetOperator(SearchFilterOperator value) {
    m_operatorHasBeenSet = true;
    m_operator = value;
  }
  inline SearchAttributeFilter& WithOperator(SearchFilterOperator value) {
    SetOperator(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value to compare against.</p>
   */
  inline const SearchFilterValue& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = SearchFilterValue>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = SearchFilterValue>
  SearchAttributeFilter& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_attribute;

  SearchFilterOperator m_operator{SearchFilterOperator::NOT_SET};

  SearchFilterValue m_value;
  bool m_attributeHasBeenSet = false;
  bool m_operatorHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
