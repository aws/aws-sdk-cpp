/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/RecommenderFilter.h>
#include <aws/customer-profiles/model/RecommenderPromotionalFilter.h>

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
 * <p>The recommender used to generate the recommendations.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/Recommender">AWS
 * API Reference</a></p>
 */
class Recommender {
 public:
  AWS_CUSTOMERPROFILES_API Recommender() = default;
  AWS_CUSTOMERPROFILES_API Recommender(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Recommender& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique name of the recommender.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  Recommender& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of filters to apply to the returned recommendations. Filters define
   * criteria for including or excluding items from the recommendation results.</p>
   */
  inline const Aws::Vector<RecommenderFilter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<RecommenderFilter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<RecommenderFilter>>
  Recommender& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = RecommenderFilter>
  Recommender& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of promotional filters to apply to the recommendations. Promotional
   * filters allow you to promote specific items within a configurable subset of
   * recommendation results.</p>
   */
  inline const Aws::Vector<RecommenderPromotionalFilter>& GetPromotionalFilters() const { return m_promotionalFilters; }
  inline bool PromotionalFiltersHasBeenSet() const { return m_promotionalFiltersHasBeenSet; }
  template <typename PromotionalFiltersT = Aws::Vector<RecommenderPromotionalFilter>>
  void SetPromotionalFilters(PromotionalFiltersT&& value) {
    m_promotionalFiltersHasBeenSet = true;
    m_promotionalFilters = std::forward<PromotionalFiltersT>(value);
  }
  template <typename PromotionalFiltersT = Aws::Vector<RecommenderPromotionalFilter>>
  Recommender& WithPromotionalFilters(PromotionalFiltersT&& value) {
    SetPromotionalFilters(std::forward<PromotionalFiltersT>(value));
    return *this;
  }
  template <typename PromotionalFiltersT = RecommenderPromotionalFilter>
  Recommender& AddPromotionalFilters(PromotionalFiltersT&& value) {
    m_promotionalFiltersHasBeenSet = true;
    m_promotionalFilters.emplace_back(std::forward<PromotionalFiltersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::Vector<RecommenderFilter> m_filters;

  Aws::Vector<RecommenderPromotionalFilter> m_promotionalFilters;
  bool m_nameHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_promotionalFiltersHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
