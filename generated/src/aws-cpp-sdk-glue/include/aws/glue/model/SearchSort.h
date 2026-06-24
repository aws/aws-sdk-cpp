/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/SearchSortOrder.h>

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
 * <p>The sort criteria for search results.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SearchSort">AWS API
 * Reference</a></p>
 */
class SearchSort {
 public:
  AWS_GLUE_API SearchSort() = default;
  AWS_GLUE_API SearchSort(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API SearchSort& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The attribute to sort by.</p>
   */
  inline const Aws::String& GetAttribute() const { return m_attribute; }
  inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
  template <typename AttributeT = Aws::String>
  void SetAttribute(AttributeT&& value) {
    m_attributeHasBeenSet = true;
    m_attribute = std::forward<AttributeT>(value);
  }
  template <typename AttributeT = Aws::String>
  SearchSort& WithAttribute(AttributeT&& value) {
    SetAttribute(std::forward<AttributeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sort order. Valid values are <code>ASCENDING</code> and
   * <code>DESCENDING</code>.</p>
   */
  inline SearchSortOrder GetOrder() const { return m_order; }
  inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
  inline void SetOrder(SearchSortOrder value) {
    m_orderHasBeenSet = true;
    m_order = value;
  }
  inline SearchSort& WithOrder(SearchSortOrder value) {
    SetOrder(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_attribute;

  SearchSortOrder m_order{SearchSortOrder::NOT_SET};
  bool m_attributeHasBeenSet = false;
  bool m_orderHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
