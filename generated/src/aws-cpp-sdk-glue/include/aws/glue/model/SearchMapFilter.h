/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/SearchMapFilterValue.h>

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
 * <p>A filter on a map attribute's key-value pair.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SearchMapFilter">AWS
 * API Reference</a></p>
 */
class SearchMapFilter {
 public:
  AWS_GLUE_API SearchMapFilter() = default;
  AWS_GLUE_API SearchMapFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API SearchMapFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The map attribute name to filter on.</p>
   */
  inline const Aws::String& GetAttribute() const { return m_attribute; }
  inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
  template <typename AttributeT = Aws::String>
  void SetAttribute(AttributeT&& value) {
    m_attributeHasBeenSet = true;
    m_attribute = std::forward<AttributeT>(value);
  }
  template <typename AttributeT = Aws::String>
  SearchMapFilter& WithAttribute(AttributeT&& value) {
    SetAttribute(std::forward<AttributeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key within the map attribute to filter on.</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  SearchMapFilter& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value to compare against.</p>
   */
  inline const SearchMapFilterValue& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = SearchMapFilterValue>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = SearchMapFilterValue>
  SearchMapFilter& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_attribute;

  Aws::String m_key;

  SearchMapFilterValue m_value;
  bool m_attributeHasBeenSet = false;
  bool m_keyHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
