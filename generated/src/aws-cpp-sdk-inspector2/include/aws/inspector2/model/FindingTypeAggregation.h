/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/AggregationFindingType.h>
#include <aws/inspector2/model/AggregationResourceType.h>
#include <aws/inspector2/model/SortOrder.h>
#include <aws/inspector2/model/FindingTypeSortBy.h>
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
    AWS_INSPECTOR2_API FindingTypeAggregation() = default;
    AWS_INSPECTOR2_API FindingTypeAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API FindingTypeAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The finding type to aggregate.</p>
     */
    inline AggregationFindingType GetFindingType() const { return m_findingType; }
    inline bool FindingTypeHasBeenSet() const { return m_findingTypeHasBeenSet; }
    inline void SetFindingType(AggregationFindingType value) { m_findingTypeHasBeenSet = true; m_findingType = value; }
    inline FindingTypeAggregation& WithFindingType(AggregationFindingType value) { SetFindingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type to aggregate.</p>
     */
    inline AggregationResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(AggregationResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline FindingTypeAggregation& WithResourceType(AggregationResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order to sort results by.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline FindingTypeAggregation& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to sort results by.</p>
     */
    inline FindingTypeSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(FindingTypeSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline FindingTypeAggregation& WithSortBy(FindingTypeSortBy value) { SetSortBy(value); return *this;}
    ///@}
  private:

    AggregationFindingType m_findingType{AggregationFindingType::NOT_SET};
    bool m_findingTypeHasBeenSet = false;

    AggregationResourceType m_resourceType{AggregationResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    FindingTypeSortBy m_sortBy{FindingTypeSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
