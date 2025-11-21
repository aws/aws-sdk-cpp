/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/model/SearchOption.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BillingConductor {
namespace Model {

/**
 * <p> A structure that defines string search parameters. </p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/StringSearch">AWS
 * API Reference</a></p>
 */
class StringSearch {
 public:
  AWS_BILLINGCONDUCTOR_API StringSearch() = default;
  AWS_BILLINGCONDUCTOR_API StringSearch(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLINGCONDUCTOR_API StringSearch& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The search option to be applied when performing the string search. </p>
   */
  inline SearchOption GetSearchOption() const { return m_searchOption; }
  inline bool SearchOptionHasBeenSet() const { return m_searchOptionHasBeenSet; }
  inline void SetSearchOption(SearchOption value) {
    m_searchOptionHasBeenSet = true;
    m_searchOption = value;
  }
  inline StringSearch& WithSearchOption(SearchOption value) {
    SetSearchOption(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The value to search for within the specified string field. </p>
   */
  inline const Aws::String& GetSearchValue() const { return m_searchValue; }
  inline bool SearchValueHasBeenSet() const { return m_searchValueHasBeenSet; }
  template <typename SearchValueT = Aws::String>
  void SetSearchValue(SearchValueT&& value) {
    m_searchValueHasBeenSet = true;
    m_searchValue = std::forward<SearchValueT>(value);
  }
  template <typename SearchValueT = Aws::String>
  StringSearch& WithSearchValue(SearchValueT&& value) {
    SetSearchValue(std::forward<SearchValueT>(value));
    return *this;
  }
  ///@}
 private:
  SearchOption m_searchOption{SearchOption::NOT_SET};
  bool m_searchOptionHasBeenSet = false;

  Aws::String m_searchValue;
  bool m_searchValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace BillingConductor
}  // namespace Aws
