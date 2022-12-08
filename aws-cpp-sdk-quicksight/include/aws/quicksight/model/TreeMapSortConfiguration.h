/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ItemsLimitConfiguration.h>
#include <aws/quicksight/model/FieldSortOptions.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The sort configuration of a tree map.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TreeMapSortConfiguration">AWS
   * API Reference</a></p>
   */
  class TreeMapSortConfiguration
  {
  public:
    AWS_QUICKSIGHT_API TreeMapSortConfiguration();
    AWS_QUICKSIGHT_API TreeMapSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TreeMapSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The sort configuration of group by fields.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetTreeMapSort() const{ return m_treeMapSort; }

    /**
     * <p>The sort configuration of group by fields.</p>
     */
    inline bool TreeMapSortHasBeenSet() const { return m_treeMapSortHasBeenSet; }

    /**
     * <p>The sort configuration of group by fields.</p>
     */
    inline void SetTreeMapSort(const Aws::Vector<FieldSortOptions>& value) { m_treeMapSortHasBeenSet = true; m_treeMapSort = value; }

    /**
     * <p>The sort configuration of group by fields.</p>
     */
    inline void SetTreeMapSort(Aws::Vector<FieldSortOptions>&& value) { m_treeMapSortHasBeenSet = true; m_treeMapSort = std::move(value); }

    /**
     * <p>The sort configuration of group by fields.</p>
     */
    inline TreeMapSortConfiguration& WithTreeMapSort(const Aws::Vector<FieldSortOptions>& value) { SetTreeMapSort(value); return *this;}

    /**
     * <p>The sort configuration of group by fields.</p>
     */
    inline TreeMapSortConfiguration& WithTreeMapSort(Aws::Vector<FieldSortOptions>&& value) { SetTreeMapSort(std::move(value)); return *this;}

    /**
     * <p>The sort configuration of group by fields.</p>
     */
    inline TreeMapSortConfiguration& AddTreeMapSort(const FieldSortOptions& value) { m_treeMapSortHasBeenSet = true; m_treeMapSort.push_back(value); return *this; }

    /**
     * <p>The sort configuration of group by fields.</p>
     */
    inline TreeMapSortConfiguration& AddTreeMapSort(FieldSortOptions&& value) { m_treeMapSortHasBeenSet = true; m_treeMapSort.push_back(std::move(value)); return *this; }


    /**
     * <p>The limit on the number of groups that are displayed.</p>
     */
    inline const ItemsLimitConfiguration& GetTreeMapGroupItemsLimitConfiguration() const{ return m_treeMapGroupItemsLimitConfiguration; }

    /**
     * <p>The limit on the number of groups that are displayed.</p>
     */
    inline bool TreeMapGroupItemsLimitConfigurationHasBeenSet() const { return m_treeMapGroupItemsLimitConfigurationHasBeenSet; }

    /**
     * <p>The limit on the number of groups that are displayed.</p>
     */
    inline void SetTreeMapGroupItemsLimitConfiguration(const ItemsLimitConfiguration& value) { m_treeMapGroupItemsLimitConfigurationHasBeenSet = true; m_treeMapGroupItemsLimitConfiguration = value; }

    /**
     * <p>The limit on the number of groups that are displayed.</p>
     */
    inline void SetTreeMapGroupItemsLimitConfiguration(ItemsLimitConfiguration&& value) { m_treeMapGroupItemsLimitConfigurationHasBeenSet = true; m_treeMapGroupItemsLimitConfiguration = std::move(value); }

    /**
     * <p>The limit on the number of groups that are displayed.</p>
     */
    inline TreeMapSortConfiguration& WithTreeMapGroupItemsLimitConfiguration(const ItemsLimitConfiguration& value) { SetTreeMapGroupItemsLimitConfiguration(value); return *this;}

    /**
     * <p>The limit on the number of groups that are displayed.</p>
     */
    inline TreeMapSortConfiguration& WithTreeMapGroupItemsLimitConfiguration(ItemsLimitConfiguration&& value) { SetTreeMapGroupItemsLimitConfiguration(std::move(value)); return *this;}

  private:

    Aws::Vector<FieldSortOptions> m_treeMapSort;
    bool m_treeMapSortHasBeenSet = false;

    ItemsLimitConfiguration m_treeMapGroupItemsLimitConfiguration;
    bool m_treeMapGroupItemsLimitConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
