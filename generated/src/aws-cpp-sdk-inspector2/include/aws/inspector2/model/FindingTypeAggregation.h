﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/AggregationFindingType.h>
#include <aws/inspector2/model/AggregationResourceType.h>
#include <aws/inspector2/model/FindingTypeSortBy.h>
#include <aws/inspector2/model/SortOrder.h>
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
   * <p>The details that define an aggregation based on finding type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/FindingTypeAggregation">AWS
   * API Reference</a></p>
   */
  class FindingTypeAggregation
  {
  public:
    AWS_INSPECTOR2_API FindingTypeAggregation();
    AWS_INSPECTOR2_API FindingTypeAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API FindingTypeAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The finding type to aggregate.</p>
     */
    inline const AggregationFindingType& GetFindingType() const{ return m_findingType; }
    inline bool FindingTypeHasBeenSet() const { return m_findingTypeHasBeenSet; }
    inline void SetFindingType(const AggregationFindingType& value) { m_findingTypeHasBeenSet = true; m_findingType = value; }
    inline void SetFindingType(AggregationFindingType&& value) { m_findingTypeHasBeenSet = true; m_findingType = std::move(value); }
    inline FindingTypeAggregation& WithFindingType(const AggregationFindingType& value) { SetFindingType(value); return *this;}
    inline FindingTypeAggregation& WithFindingType(AggregationFindingType&& value) { SetFindingType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type to aggregate.</p>
     */
    inline const AggregationResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const AggregationResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(AggregationResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline FindingTypeAggregation& WithResourceType(const AggregationResourceType& value) { SetResourceType(value); return *this;}
    inline FindingTypeAggregation& WithResourceType(AggregationResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to sort results by.</p>
     */
    inline const FindingTypeSortBy& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const FindingTypeSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(FindingTypeSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline FindingTypeAggregation& WithSortBy(const FindingTypeSortBy& value) { SetSortBy(value); return *this;}
    inline FindingTypeAggregation& WithSortBy(FindingTypeSortBy&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order to sort results by.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline FindingTypeAggregation& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}
    inline FindingTypeAggregation& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}
  private:

    AggregationFindingType m_findingType;
    bool m_findingTypeHasBeenSet = false;

    AggregationResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    FindingTypeSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
