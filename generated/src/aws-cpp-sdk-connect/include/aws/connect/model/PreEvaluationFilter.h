/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/PreEvaluationFilterOperator.h>
#include <aws/connect/model/PreEvaluationFilterResourceType.h>
#include <aws/connect/model/PreEvaluationFilterType.h>
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
 * <p>A single pre-evaluation filter condition. Specifies a resource type, filter
 * type, key, value, and operator to match against a resource
 * attribute.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/PreEvaluationFilter">AWS
 * API Reference</a></p>
 */
class PreEvaluationFilter {
 public:
  AWS_CONNECT_API PreEvaluationFilter() = default;
  AWS_CONNECT_API PreEvaluationFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API PreEvaluationFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of resource to filter on. Valid values: <code>CONTACT</code>.</p>
   */
  inline PreEvaluationFilterResourceType GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(PreEvaluationFilterResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline PreEvaluationFilter& WithResourceType(PreEvaluationFilterResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of filter to apply. Valid values: <code>TAG</code>.</p>
   */
  inline PreEvaluationFilterType GetFilterType() const { return m_filterType; }
  inline bool FilterTypeHasBeenSet() const { return m_filterTypeHasBeenSet; }
  inline void SetFilterType(PreEvaluationFilterType value) {
    m_filterTypeHasBeenSet = true;
    m_filterType = value;
  }
  inline PreEvaluationFilter& WithFilterType(PreEvaluationFilterType value) {
    SetFilterType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key of the attribute to filter on. For tag filters, this is the tag
   * key.</p>
   */
  inline const Aws::String& GetFilterKey() const { return m_filterKey; }
  inline bool FilterKeyHasBeenSet() const { return m_filterKeyHasBeenSet; }
  template <typename FilterKeyT = Aws::String>
  void SetFilterKey(FilterKeyT&& value) {
    m_filterKeyHasBeenSet = true;
    m_filterKey = std::forward<FilterKeyT>(value);
  }
  template <typename FilterKeyT = Aws::String>
  PreEvaluationFilter& WithFilterKey(FilterKeyT&& value) {
    SetFilterKey(std::forward<FilterKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value to match against. For tag filters, this is the tag value.</p>
   */
  inline const Aws::String& GetFilterValue() const { return m_filterValue; }
  inline bool FilterValueHasBeenSet() const { return m_filterValueHasBeenSet; }
  template <typename FilterValueT = Aws::String>
  void SetFilterValue(FilterValueT&& value) {
    m_filterValueHasBeenSet = true;
    m_filterValue = std::forward<FilterValueT>(value);
  }
  template <typename FilterValueT = Aws::String>
  PreEvaluationFilter& WithFilterValue(FilterValueT&& value) {
    SetFilterValue(std::forward<FilterValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The comparison operator for the filter condition. Valid values:
   * <code>EQUALS</code>.</p>
   */
  inline PreEvaluationFilterOperator GetOperator() const { return m_operator; }
  inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
  inline void SetOperator(PreEvaluationFilterOperator value) {
    m_operatorHasBeenSet = true;
    m_operator = value;
  }
  inline PreEvaluationFilter& WithOperator(PreEvaluationFilterOperator value) {
    SetOperator(value);
    return *this;
  }
  ///@}
 private:
  PreEvaluationFilterResourceType m_resourceType{PreEvaluationFilterResourceType::NOT_SET};

  PreEvaluationFilterType m_filterType{PreEvaluationFilterType::NOT_SET};

  Aws::String m_filterKey;

  Aws::String m_filterValue;

  PreEvaluationFilterOperator m_operator{PreEvaluationFilterOperator::NOT_SET};
  bool m_resourceTypeHasBeenSet = false;
  bool m_filterTypeHasBeenSet = false;
  bool m_filterKeyHasBeenSet = false;
  bool m_filterValueHasBeenSet = false;
  bool m_operatorHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
