/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect-contact-lens/ConnectContactLens_EXPORTS.h>
#include <aws/connect-contact-lens/model/CategoriesAttributeFilter.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectContactLens {
namespace Model {

/**
 * <p>A filter that restricts the segments returned by
 * <code>ListRealtimeContactAnalysisSegments</code>. It supports filtering category
 * segments by the tags on the rules that create them, which enforces tag-based
 * access control on the categories a caller can view.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-contact-lens-2020-08-21/RealTimeContactAnalysisSegmentsFilter">AWS
 * API Reference</a></p>
 */
class RealTimeContactAnalysisSegmentsFilter {
 public:
  AWS_CONNECTCONTACTLENS_API RealTimeContactAnalysisSegmentsFilter() = default;
  AWS_CONNECTCONTACTLENS_API RealTimeContactAnalysisSegmentsFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCONTACTLENS_API RealTimeContactAnalysisSegmentsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCONTACTLENS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A filter applied to category segments based on the tags of the rules that
   * create the matched categories.</p>
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
}  // namespace ConnectContactLens
}  // namespace Aws
