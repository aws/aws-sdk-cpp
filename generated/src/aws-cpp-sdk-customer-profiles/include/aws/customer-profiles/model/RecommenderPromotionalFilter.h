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
 * <p>Contains information on a promotion. A promotion defines additional business
 * rules that apply to a configurable subset of recommended items.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/RecommenderPromotionalFilter">AWS
 * API Reference</a></p>
 */
class RecommenderPromotionalFilter {
 public:
  AWS_CUSTOMERPROFILES_API RecommenderPromotionalFilter() = default;
  AWS_CUSTOMERPROFILES_API RecommenderPromotionalFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API RecommenderPromotionalFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the recommender filter to use for the promotion.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  RecommenderPromotionalFilter& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The values to use when promoting items. For each placeholder parameter in
   * your promotion's filter expression, provide the parameter name (in matching
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
  RecommenderPromotionalFilter& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesKeyT = Aws::String, typename ValuesValueT = Aws::String>
  RecommenderPromotionalFilter& AddValues(ValuesKeyT&& key, ValuesValueT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace(std::forward<ValuesKeyT>(key), std::forward<ValuesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the promotion.</p>
   */
  inline const Aws::String& GetPromotionName() const { return m_promotionName; }
  inline bool PromotionNameHasBeenSet() const { return m_promotionNameHasBeenSet; }
  template <typename PromotionNameT = Aws::String>
  void SetPromotionName(PromotionNameT&& value) {
    m_promotionNameHasBeenSet = true;
    m_promotionName = std::forward<PromotionNameT>(value);
  }
  template <typename PromotionNameT = Aws::String>
  RecommenderPromotionalFilter& WithPromotionName(PromotionNameT&& value) {
    SetPromotionName(std::forward<PromotionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of recommended items to apply the promotion to.</p>
   */
  inline int GetPercentPromotedItems() const { return m_percentPromotedItems; }
  inline bool PercentPromotedItemsHasBeenSet() const { return m_percentPromotedItemsHasBeenSet; }
  inline void SetPercentPromotedItems(int value) {
    m_percentPromotedItemsHasBeenSet = true;
    m_percentPromotedItems = value;
  }
  inline RecommenderPromotionalFilter& WithPercentPromotedItems(int value) {
    SetPercentPromotedItems(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::Map<Aws::String, Aws::String> m_values;

  Aws::String m_promotionName;

  int m_percentPromotedItems{0};
  bool m_nameHasBeenSet = false;
  bool m_valuesHasBeenSet = false;
  bool m_promotionNameHasBeenSet = false;
  bool m_percentPromotedItemsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
