/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/AggregationResourceType.h>
#include <aws/inspector2/model/SortOrder.h>
#include <aws/inspector2/model/TitleSortBy.h>
#include <aws/inspector2/model/AggregationFindingType.h>
#include <aws/inspector2/model/StringFilter.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Inspector2
{
namespace Model
{

  /**
   * <p>The details that define an aggregation based on finding title.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/TitleAggregation">AWS
   * API Reference</a></p>
   */
  class TitleAggregation
  {
  public:
    AWS_INSPECTOR2_API TitleAggregation() = default;
    AWS_INSPECTOR2_API TitleAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API TitleAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The finding titles to aggregate on.</p>
     */
    inline const Aws::Vector<StringFilter>& GetTitles() const { return m_titles; }
    inline bool TitlesHasBeenSet() const { return m_titlesHasBeenSet; }
    template<typename TitlesT = Aws::Vector<StringFilter>>
    void SetTitles(TitlesT&& value) { m_titlesHasBeenSet = true; m_titles = std::forward<TitlesT>(value); }
    template<typename TitlesT = Aws::Vector<StringFilter>>
    TitleAggregation& WithTitles(TitlesT&& value) { SetTitles(std::forward<TitlesT>(value)); return *this;}
    template<typename TitlesT = StringFilter>
    TitleAggregation& AddTitles(TitlesT&& value) { m_titlesHasBeenSet = true; m_titles.emplace_back(std::forward<TitlesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The vulnerability IDs of the findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetVulnerabilityIds() const { return m_vulnerabilityIds; }
    inline bool VulnerabilityIdsHasBeenSet() const { return m_vulnerabilityIdsHasBeenSet; }
    template<typename VulnerabilityIdsT = Aws::Vector<StringFilter>>
    void SetVulnerabilityIds(VulnerabilityIdsT&& value) { m_vulnerabilityIdsHasBeenSet = true; m_vulnerabilityIds = std::forward<VulnerabilityIdsT>(value); }
    template<typename VulnerabilityIdsT = Aws::Vector<StringFilter>>
    TitleAggregation& WithVulnerabilityIds(VulnerabilityIdsT&& value) { SetVulnerabilityIds(std::forward<VulnerabilityIdsT>(value)); return *this;}
    template<typename VulnerabilityIdsT = StringFilter>
    TitleAggregation& AddVulnerabilityIds(VulnerabilityIdsT&& value) { m_vulnerabilityIdsHasBeenSet = true; m_vulnerabilityIds.emplace_back(std::forward<VulnerabilityIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource type to aggregate on.</p>
     */
    inline AggregationResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(AggregationResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline TitleAggregation& WithResourceType(AggregationResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order to sort results by.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline TitleAggregation& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to sort results by.</p>
     */
    inline TitleSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(TitleSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline TitleAggregation& WithSortBy(TitleSortBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of finding to aggregate on.</p>
     */
    inline AggregationFindingType GetFindingType() const { return m_findingType; }
    inline bool FindingTypeHasBeenSet() const { return m_findingTypeHasBeenSet; }
    inline void SetFindingType(AggregationFindingType value) { m_findingTypeHasBeenSet = true; m_findingType = value; }
    inline TitleAggregation& WithFindingType(AggregationFindingType value) { SetFindingType(value); return *this;}
    ///@}
  private:

    Aws::Vector<StringFilter> m_titles;
    bool m_titlesHasBeenSet = false;

    Aws::Vector<StringFilter> m_vulnerabilityIds;
    bool m_vulnerabilityIdsHasBeenSet = false;

    AggregationResourceType m_resourceType{AggregationResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    TitleSortBy m_sortBy{TitleSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    AggregationFindingType m_findingType{AggregationFindingType::NOT_SET};
    bool m_findingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
