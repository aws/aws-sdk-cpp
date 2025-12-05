/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/SearchOption.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p> A structure that defines how to search for string values. You can specify a
 * search option and the value to search for. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/StringSearch">AWS
 * API Reference</a></p>
 */
class StringSearch {
 public:
  AWS_BILLING_API StringSearch() = default;
  AWS_BILLING_API StringSearch(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API StringSearch& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The type of search operation to perform on the string value. Determines how
   * the search value is matched against the target field. </p>
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
   * <p> The string value to use in the search operation. This value is compared
   * against the target field using the specified search option. </p>
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

  Aws::String m_searchValue;
  bool m_searchOptionHasBeenSet = false;
  bool m_searchValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
