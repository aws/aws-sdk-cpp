/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {

/**
 * <p>A filter that specifies criteria for including or excluding items from
 * recommendations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/RecommenderFilter">AWS
 * API Reference</a></p>
 */
class RecommenderFilter {
 public:
  AWS_CUSTOMERPROFILES_API RecommenderFilter() = default;
  AWS_CUSTOMERPROFILES_API RecommenderFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API RecommenderFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the recommender filter to apply.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  RecommenderFilter& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The values to use when filtering recommendations. For each placeholder
   * parameter in your filter expression, provide the parameter name (in matching
   * case) as a key and the filter value(s) as the corresponding value. Separate
   * multiple values for one parameter with a comma.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Map<Aws::String, Aws::String>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Map<Aws::String, Aws::String>>
  RecommenderFilter& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesKeyT = Aws::String, typename ValuesValueT = Aws::String>
  RecommenderFilter& AddValues(ValuesKeyT&& key, ValuesValueT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace(std::forward<ValuesKeyT>(key), std::forward<ValuesValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::Map<Aws::String, Aws::String> m_values;
  bool m_nameHasBeenSet = false;
  bool m_valuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
