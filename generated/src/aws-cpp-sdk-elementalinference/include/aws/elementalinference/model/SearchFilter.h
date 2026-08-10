/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/FilterName.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {

/**
 * <p>A filter for a fixture search. It is used in the filters array of a
 * SearchFixtures request. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/SearchFilter">AWS
 * API Reference</a></p>
 */
class SearchFilter {
 public:
  AWS_ELEMENTALINFERENCE_API SearchFilter() = default;
  AWS_ELEMENTALINFERENCE_API SearchFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API SearchFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The dimension of the fixture to filter on. Valid values: COMPETITOR.</p>
   */
  inline FilterName GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  inline void SetName(FilterName value) {
    m_nameHasBeenSet = true;
    m_name = value;
  }
  inline SearchFilter& WithName(FilterName value) {
    SetName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of values to match in the dimension that you specified in name. You
   * can specify up to 10 values. A fixture appears in the results if it matches at
   * least one of these values. </p>
   */
  inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  SearchFilter& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = Aws::String>
  SearchFilter& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}
 private:
  FilterName m_name{FilterName::NOT_SET};

  Aws::Vector<Aws::String> m_values;
  bool m_nameHasBeenSet = false;
  bool m_valuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
