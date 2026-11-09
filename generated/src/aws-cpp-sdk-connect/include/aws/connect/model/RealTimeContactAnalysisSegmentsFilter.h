/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/CategoriesAttributeFilter.h>

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
 * <p>A filter that restricts the segments returned by
 * <code>ListRealtimeContactAnalysisSegmentsV2</code>. It currently supports
 * filtering category segments by the tags on the rules that create them, which
 * enforces tag-based access control on the categories a caller can
 * view.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RealTimeContactAnalysisSegmentsFilter">AWS
 * API Reference</a></p>
 */
class RealTimeContactAnalysisSegmentsFilter {
 public:
  AWS_CONNECT_API RealTimeContactAnalysisSegmentsFilter() = default;
  AWS_CONNECT_API RealTimeContactAnalysisSegmentsFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API RealTimeContactAnalysisSegmentsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A filter applied to category segments based on the tags of the rules that
   * create the matched categories. This filter applies only when
   * <code>SegmentTypes</code> includes <code>Categories</code>.</p>
   */
  inline const CategoriesAttributeFilter& GetCategoriesAttributeFilter() const { return m_categoriesAttributeFilter; }
  inline bool CategoriesAttributeFilterHasBeenSet() const { return m_categoriesAttributeFilterHasBeenSet; }
  template <typename CategoriesAttributeFilterT = CategoriesAttributeFilter>
  void SetCategoriesAttributeFilter(CategoriesAttributeFilterT&& value) {
    m_categoriesAttributeFilterHasBeenSet = true;
    m_categoriesAttributeFilter = std::forward<CategoriesAttributeFilterT>(value);
  }
  template <typename CategoriesAttributeFilterT = CategoriesAttributeFilter>
  RealTimeContactAnalysisSegmentsFilter& WithCategoriesAttributeFilter(CategoriesAttributeFilterT&& value) {
    SetCategoriesAttributeFilter(std::forward<CategoriesAttributeFilterT>(value));
    return *this;
  }
  ///@}
 private:
  CategoriesAttributeFilter m_categoriesAttributeFilter;
  bool m_categoriesAttributeFilterHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
