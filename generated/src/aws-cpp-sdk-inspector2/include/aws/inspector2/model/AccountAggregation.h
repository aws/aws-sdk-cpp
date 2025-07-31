/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/AggregationFindingType.h>
#include <aws/inspector2/model/AggregationResourceType.h>
#include <aws/inspector2/model/SortOrder.h>
#include <aws/inspector2/model/AccountSortBy.h>
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
   * <p>An object that contains details about an aggregation response based on Amazon
   * Web Services accounts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/AccountAggregation">AWS
   * API Reference</a></p>
   */
  class AccountAggregation
  {
  public:
    AWS_INSPECTOR2_API AccountAggregation() = default;
    AWS_INSPECTOR2_API AccountAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API AccountAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of finding.</p>
     */
    inline AggregationFindingType GetFindingType() const { return m_findingType; }
    inline bool FindingTypeHasBeenSet() const { return m_findingTypeHasBeenSet; }
    inline void SetFindingType(AggregationFindingType value) { m_findingTypeHasBeenSet = true; m_findingType = value; }
    inline AccountAggregation& WithFindingType(AggregationFindingType value) { SetFindingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource.</p>
     */
    inline AggregationResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(AggregationResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline AccountAggregation& WithResourceType(AggregationResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order (ascending or descending).</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline AccountAggregation& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to sort by.</p>
     */
    inline AccountSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(AccountSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline AccountAggregation& WithSortBy(AccountSortBy value) { SetSortBy(value); return *this;}
    ///@}
  private:

    AggregationFindingType m_findingType{AggregationFindingType::NOT_SET};
    bool m_findingTypeHasBeenSet = false;

    AggregationResourceType m_resourceType{AggregationResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    AccountSortBy m_sortBy{AccountSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
