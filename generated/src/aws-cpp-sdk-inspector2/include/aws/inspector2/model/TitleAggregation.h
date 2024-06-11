﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/AggregationFindingType.h>
#include <aws/inspector2/model/AggregationResourceType.h>
#include <aws/inspector2/model/TitleSortBy.h>
#include <aws/inspector2/model/SortOrder.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_INSPECTOR2_API TitleAggregation();
    AWS_INSPECTOR2_API TitleAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API TitleAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of finding to aggregate on.</p>
     */
    inline const AggregationFindingType& GetFindingType() const{ return m_findingType; }
    inline bool FindingTypeHasBeenSet() const { return m_findingTypeHasBeenSet; }
    inline void SetFindingType(const AggregationFindingType& value) { m_findingTypeHasBeenSet = true; m_findingType = value; }
    inline void SetFindingType(AggregationFindingType&& value) { m_findingTypeHasBeenSet = true; m_findingType = std::move(value); }
    inline TitleAggregation& WithFindingType(const AggregationFindingType& value) { SetFindingType(value); return *this;}
    inline TitleAggregation& WithFindingType(AggregationFindingType&& value) { SetFindingType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type to aggregate on.</p>
     */
    inline const AggregationResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const AggregationResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(AggregationResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline TitleAggregation& WithResourceType(const AggregationResourceType& value) { SetResourceType(value); return *this;}
    inline TitleAggregation& WithResourceType(AggregationResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to sort results by.</p>
     */
    inline const TitleSortBy& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const TitleSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(TitleSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline TitleAggregation& WithSortBy(const TitleSortBy& value) { SetSortBy(value); return *this;}
    inline TitleAggregation& WithSortBy(TitleSortBy&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order to sort results by.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline TitleAggregation& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}
    inline TitleAggregation& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The finding titles to aggregate on.</p>
     */
    inline const Aws::Vector<StringFilter>& GetTitles() const{ return m_titles; }
    inline bool TitlesHasBeenSet() const { return m_titlesHasBeenSet; }
    inline void SetTitles(const Aws::Vector<StringFilter>& value) { m_titlesHasBeenSet = true; m_titles = value; }
    inline void SetTitles(Aws::Vector<StringFilter>&& value) { m_titlesHasBeenSet = true; m_titles = std::move(value); }
    inline TitleAggregation& WithTitles(const Aws::Vector<StringFilter>& value) { SetTitles(value); return *this;}
    inline TitleAggregation& WithTitles(Aws::Vector<StringFilter>&& value) { SetTitles(std::move(value)); return *this;}
    inline TitleAggregation& AddTitles(const StringFilter& value) { m_titlesHasBeenSet = true; m_titles.push_back(value); return *this; }
    inline TitleAggregation& AddTitles(StringFilter&& value) { m_titlesHasBeenSet = true; m_titles.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The vulnerability IDs of the findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetVulnerabilityIds() const{ return m_vulnerabilityIds; }
    inline bool VulnerabilityIdsHasBeenSet() const { return m_vulnerabilityIdsHasBeenSet; }
    inline void SetVulnerabilityIds(const Aws::Vector<StringFilter>& value) { m_vulnerabilityIdsHasBeenSet = true; m_vulnerabilityIds = value; }
    inline void SetVulnerabilityIds(Aws::Vector<StringFilter>&& value) { m_vulnerabilityIdsHasBeenSet = true; m_vulnerabilityIds = std::move(value); }
    inline TitleAggregation& WithVulnerabilityIds(const Aws::Vector<StringFilter>& value) { SetVulnerabilityIds(value); return *this;}
    inline TitleAggregation& WithVulnerabilityIds(Aws::Vector<StringFilter>&& value) { SetVulnerabilityIds(std::move(value)); return *this;}
    inline TitleAggregation& AddVulnerabilityIds(const StringFilter& value) { m_vulnerabilityIdsHasBeenSet = true; m_vulnerabilityIds.push_back(value); return *this; }
    inline TitleAggregation& AddVulnerabilityIds(StringFilter&& value) { m_vulnerabilityIdsHasBeenSet = true; m_vulnerabilityIds.push_back(std::move(value)); return *this; }
    ///@}
  private:

    AggregationFindingType m_findingType;
    bool m_findingTypeHasBeenSet = false;

    AggregationResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    TitleSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    Aws::Vector<StringFilter> m_titles;
    bool m_titlesHasBeenSet = false;

    Aws::Vector<StringFilter> m_vulnerabilityIds;
    bool m_vulnerabilityIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
