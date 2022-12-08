/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/AggregationFindingType.h>
#include <aws/inspector2/model/AggregationResourceType.h>
#include <aws/inspector2/model/AccountSortBy.h>
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
   * <p>An object that contains details about an aggregation response based on Amazon
   * Web Services accounts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/AccountAggregation">AWS
   * API Reference</a></p>
   */
  class AccountAggregation
  {
  public:
    AWS_INSPECTOR2_API AccountAggregation();
    AWS_INSPECTOR2_API AccountAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API AccountAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of finding.</p>
     */
    inline const AggregationFindingType& GetFindingType() const{ return m_findingType; }

    /**
     * <p>The type of finding.</p>
     */
    inline bool FindingTypeHasBeenSet() const { return m_findingTypeHasBeenSet; }

    /**
     * <p>The type of finding.</p>
     */
    inline void SetFindingType(const AggregationFindingType& value) { m_findingTypeHasBeenSet = true; m_findingType = value; }

    /**
     * <p>The type of finding.</p>
     */
    inline void SetFindingType(AggregationFindingType&& value) { m_findingTypeHasBeenSet = true; m_findingType = std::move(value); }

    /**
     * <p>The type of finding.</p>
     */
    inline AccountAggregation& WithFindingType(const AggregationFindingType& value) { SetFindingType(value); return *this;}

    /**
     * <p>The type of finding.</p>
     */
    inline AccountAggregation& WithFindingType(AggregationFindingType&& value) { SetFindingType(std::move(value)); return *this;}


    /**
     * <p>The type of resource.</p>
     */
    inline const AggregationResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource.</p>
     */
    inline void SetResourceType(const AggregationResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource.</p>
     */
    inline void SetResourceType(AggregationResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource.</p>
     */
    inline AccountAggregation& WithResourceType(const AggregationResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource.</p>
     */
    inline AccountAggregation& WithResourceType(AggregationResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The value to sort by.</p>
     */
    inline const AccountSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The value to sort by.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The value to sort by.</p>
     */
    inline void SetSortBy(const AccountSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The value to sort by.</p>
     */
    inline void SetSortBy(AccountSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The value to sort by.</p>
     */
    inline AccountAggregation& WithSortBy(const AccountSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The value to sort by.</p>
     */
    inline AccountAggregation& WithSortBy(AccountSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The sort order (ascending or descending).</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order (ascending or descending).</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order (ascending or descending).</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order (ascending or descending).</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order (ascending or descending).</p>
     */
    inline AccountAggregation& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order (ascending or descending).</p>
     */
    inline AccountAggregation& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    AggregationFindingType m_findingType;
    bool m_findingTypeHasBeenSet = false;

    AggregationResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    AccountSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
