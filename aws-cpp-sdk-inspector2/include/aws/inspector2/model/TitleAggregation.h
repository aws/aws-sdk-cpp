/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
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


    /**
     * <p>The resource type to aggregate on.</p>
     */
    inline const AggregationResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type to aggregate on.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type to aggregate on.</p>
     */
    inline void SetResourceType(const AggregationResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type to aggregate on.</p>
     */
    inline void SetResourceType(AggregationResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type to aggregate on.</p>
     */
    inline TitleAggregation& WithResourceType(const AggregationResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type to aggregate on.</p>
     */
    inline TitleAggregation& WithResourceType(AggregationResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The value to sort results by.</p>
     */
    inline const TitleSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The value to sort results by.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The value to sort results by.</p>
     */
    inline void SetSortBy(const TitleSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The value to sort results by.</p>
     */
    inline void SetSortBy(TitleSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The value to sort results by.</p>
     */
    inline TitleAggregation& WithSortBy(const TitleSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The value to sort results by.</p>
     */
    inline TitleAggregation& WithSortBy(TitleSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The order to sort results by.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The order to sort results by.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The order to sort results by.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The order to sort results by.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The order to sort results by.</p>
     */
    inline TitleAggregation& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The order to sort results by.</p>
     */
    inline TitleAggregation& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>The finding titles to aggregate on.</p>
     */
    inline const Aws::Vector<StringFilter>& GetTitles() const{ return m_titles; }

    /**
     * <p>The finding titles to aggregate on.</p>
     */
    inline bool TitlesHasBeenSet() const { return m_titlesHasBeenSet; }

    /**
     * <p>The finding titles to aggregate on.</p>
     */
    inline void SetTitles(const Aws::Vector<StringFilter>& value) { m_titlesHasBeenSet = true; m_titles = value; }

    /**
     * <p>The finding titles to aggregate on.</p>
     */
    inline void SetTitles(Aws::Vector<StringFilter>&& value) { m_titlesHasBeenSet = true; m_titles = std::move(value); }

    /**
     * <p>The finding titles to aggregate on.</p>
     */
    inline TitleAggregation& WithTitles(const Aws::Vector<StringFilter>& value) { SetTitles(value); return *this;}

    /**
     * <p>The finding titles to aggregate on.</p>
     */
    inline TitleAggregation& WithTitles(Aws::Vector<StringFilter>&& value) { SetTitles(std::move(value)); return *this;}

    /**
     * <p>The finding titles to aggregate on.</p>
     */
    inline TitleAggregation& AddTitles(const StringFilter& value) { m_titlesHasBeenSet = true; m_titles.push_back(value); return *this; }

    /**
     * <p>The finding titles to aggregate on.</p>
     */
    inline TitleAggregation& AddTitles(StringFilter&& value) { m_titlesHasBeenSet = true; m_titles.push_back(std::move(value)); return *this; }


    /**
     * <p>The vulnerability IDs of the findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetVulnerabilityIds() const{ return m_vulnerabilityIds; }

    /**
     * <p>The vulnerability IDs of the findings.</p>
     */
    inline bool VulnerabilityIdsHasBeenSet() const { return m_vulnerabilityIdsHasBeenSet; }

    /**
     * <p>The vulnerability IDs of the findings.</p>
     */
    inline void SetVulnerabilityIds(const Aws::Vector<StringFilter>& value) { m_vulnerabilityIdsHasBeenSet = true; m_vulnerabilityIds = value; }

    /**
     * <p>The vulnerability IDs of the findings.</p>
     */
    inline void SetVulnerabilityIds(Aws::Vector<StringFilter>&& value) { m_vulnerabilityIdsHasBeenSet = true; m_vulnerabilityIds = std::move(value); }

    /**
     * <p>The vulnerability IDs of the findings.</p>
     */
    inline TitleAggregation& WithVulnerabilityIds(const Aws::Vector<StringFilter>& value) { SetVulnerabilityIds(value); return *this;}

    /**
     * <p>The vulnerability IDs of the findings.</p>
     */
    inline TitleAggregation& WithVulnerabilityIds(Aws::Vector<StringFilter>&& value) { SetVulnerabilityIds(std::move(value)); return *this;}

    /**
     * <p>The vulnerability IDs of the findings.</p>
     */
    inline TitleAggregation& AddVulnerabilityIds(const StringFilter& value) { m_vulnerabilityIdsHasBeenSet = true; m_vulnerabilityIds.push_back(value); return *this; }

    /**
     * <p>The vulnerability IDs of the findings.</p>
     */
    inline TitleAggregation& AddVulnerabilityIds(StringFilter&& value) { m_vulnerabilityIdsHasBeenSet = true; m_vulnerabilityIds.push_back(std::move(value)); return *this; }

  private:

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
