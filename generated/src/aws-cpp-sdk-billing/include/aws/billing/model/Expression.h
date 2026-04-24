/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/CostCategoryValues.h>
#include <aws/billing/model/DimensionValues.h>
#include <aws/billing/model/TagValues.h>
#include <aws/billing/model/TimeRange.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Billing {
namespace Model {

/**
 * <p> See <a
 * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_billing_Expression.html">Expression</a>.
 * Billing view only supports <code>LINKED_ACCOUNT</code>, <code>Tags</code>, and
 * <code>CostCategories</code>. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/Expression">AWS
 * API Reference</a></p>
 */
class Expression {
 public:
  AWS_BILLING_API Expression() = default;
  AWS_BILLING_API Expression(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Expression& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The specific <code>Dimension</code> to use for <code>Expression</code>. </p>
   */
  inline const DimensionValues& GetDimensions() const { return m_dimensions; }
  inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
  template <typename DimensionsT = DimensionValues>
  void SetDimensions(DimensionsT&& value) {
    m_dimensionsHasBeenSet = true;
    m_dimensions = std::forward<DimensionsT>(value);
  }
  template <typename DimensionsT = DimensionValues>
  Expression& WithDimensions(DimensionsT&& value) {
    SetDimensions(std::forward<DimensionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The specific <code>Tag</code> to use for <code>Expression</code>. </p>
   */
  inline const TagValues& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = TagValues>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = TagValues>
  Expression& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The filter that's based on <code>CostCategory</code> values. </p>
   */
  inline const CostCategoryValues& GetCostCategories() const { return m_costCategories; }
  inline bool CostCategoriesHasBeenSet() const { return m_costCategoriesHasBeenSet; }
  template <typename CostCategoriesT = CostCategoryValues>
  void SetCostCategories(CostCategoriesT&& value) {
    m_costCategoriesHasBeenSet = true;
    m_costCategories = std::forward<CostCategoriesT>(value);
  }
  template <typename CostCategoriesT = CostCategoryValues>
  Expression& WithCostCategories(CostCategoriesT&& value) {
    SetCostCategories(std::forward<CostCategoriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Specifies a time range filter for the billing view data. </p>
   */
  inline const TimeRange& GetTimeRange() const { return m_timeRange; }
  inline bool TimeRangeHasBeenSet() const { return m_timeRangeHasBeenSet; }
  template <typename TimeRangeT = TimeRange>
  void SetTimeRange(TimeRangeT&& value) {
    m_timeRangeHasBeenSet = true;
    m_timeRange = std::forward<TimeRangeT>(value);
  }
  template <typename TimeRangeT = TimeRange>
  Expression& WithTimeRange(TimeRangeT&& value) {
    SetTimeRange(std::forward<TimeRangeT>(value));
    return *this;
  }
  ///@}
 private:
  DimensionValues m_dimensions;

  TagValues m_tags;

  CostCategoryValues m_costCategories;

  TimeRange m_timeRange;
  bool m_dimensionsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_costCategoriesHasBeenSet = false;
  bool m_timeRangeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
