/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/Order.h>
#include <aws/connectcases/model/SearchAllRelatedItemsSortProperty.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectCases {
namespace Model {

/**
 * <p>The order in which all returned related items should be sorted.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/SearchAllRelatedItemsSort">AWS
 * API Reference</a></p>
 */
class SearchAllRelatedItemsSort {
 public:
  AWS_CONNECTCASES_API SearchAllRelatedItemsSort() = default;
  AWS_CONNECTCASES_API SearchAllRelatedItemsSort(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API SearchAllRelatedItemsSort& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether related items should be sorted in ascending or descending order. </p>
   */
  inline SearchAllRelatedItemsSortProperty GetSortProperty() const { return m_sortProperty; }
  inline bool SortPropertyHasBeenSet() const { return m_sortPropertyHasBeenSet; }
  inline void SetSortProperty(SearchAllRelatedItemsSortProperty value) {
    m_sortPropertyHasBeenSet = true;
    m_sortProperty = value;
  }
  inline SearchAllRelatedItemsSort& WithSortProperty(SearchAllRelatedItemsSortProperty value) {
    SetSortProperty(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether related items should be sorted by association time or case ID. </p>
   */
  inline Order GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(Order value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline SearchAllRelatedItemsSort& WithSortOrder(Order value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}
 private:
  SearchAllRelatedItemsSortProperty m_sortProperty{SearchAllRelatedItemsSortProperty::NOT_SET};
  bool m_sortPropertyHasBeenSet = false;

  Order m_sortOrder{Order::NOT_SET};
  bool m_sortOrderHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
