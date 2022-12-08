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
   * <p>The sort configuration of a line chart.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LineChartSortConfiguration">AWS
   * API Reference</a></p>
   */
  class LineChartSortConfiguration
  {
  public:
    AWS_QUICKSIGHT_API LineChartSortConfiguration();
    AWS_QUICKSIGHT_API LineChartSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LineChartSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The sort configuration of the category fields.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetCategorySort() const{ return m_categorySort; }

    /**
     * <p>The sort configuration of the category fields.</p>
     */
    inline bool CategorySortHasBeenSet() const { return m_categorySortHasBeenSet; }

    /**
     * <p>The sort configuration of the category fields.</p>
     */
    inline void SetCategorySort(const Aws::Vector<FieldSortOptions>& value) { m_categorySortHasBeenSet = true; m_categorySort = value; }

    /**
     * <p>The sort configuration of the category fields.</p>
     */
    inline void SetCategorySort(Aws::Vector<FieldSortOptions>&& value) { m_categorySortHasBeenSet = true; m_categorySort = std::move(value); }

    /**
     * <p>The sort configuration of the category fields.</p>
     */
    inline LineChartSortConfiguration& WithCategorySort(const Aws::Vector<FieldSortOptions>& value) { SetCategorySort(value); return *this;}

    /**
     * <p>The sort configuration of the category fields.</p>
     */
    inline LineChartSortConfiguration& WithCategorySort(Aws::Vector<FieldSortOptions>&& value) { SetCategorySort(std::move(value)); return *this;}

    /**
     * <p>The sort configuration of the category fields.</p>
     */
    inline LineChartSortConfiguration& AddCategorySort(const FieldSortOptions& value) { m_categorySortHasBeenSet = true; m_categorySort.push_back(value); return *this; }

    /**
     * <p>The sort configuration of the category fields.</p>
     */
    inline LineChartSortConfiguration& AddCategorySort(FieldSortOptions&& value) { m_categorySortHasBeenSet = true; m_categorySort.push_back(std::move(value)); return *this; }


    /**
     * <p>The limit on the number of categories that are displayed in a line chart.</p>
     */
    inline const ItemsLimitConfiguration& GetCategoryItemsLimitConfiguration() const{ return m_categoryItemsLimitConfiguration; }

    /**
     * <p>The limit on the number of categories that are displayed in a line chart.</p>
     */
    inline bool CategoryItemsLimitConfigurationHasBeenSet() const { return m_categoryItemsLimitConfigurationHasBeenSet; }

    /**
     * <p>The limit on the number of categories that are displayed in a line chart.</p>
     */
    inline void SetCategoryItemsLimitConfiguration(const ItemsLimitConfiguration& value) { m_categoryItemsLimitConfigurationHasBeenSet = true; m_categoryItemsLimitConfiguration = value; }

    /**
     * <p>The limit on the number of categories that are displayed in a line chart.</p>
     */
    inline void SetCategoryItemsLimitConfiguration(ItemsLimitConfiguration&& value) { m_categoryItemsLimitConfigurationHasBeenSet = true; m_categoryItemsLimitConfiguration = std::move(value); }

    /**
     * <p>The limit on the number of categories that are displayed in a line chart.</p>
     */
    inline LineChartSortConfiguration& WithCategoryItemsLimitConfiguration(const ItemsLimitConfiguration& value) { SetCategoryItemsLimitConfiguration(value); return *this;}

    /**
     * <p>The limit on the number of categories that are displayed in a line chart.</p>
     */
    inline LineChartSortConfiguration& WithCategoryItemsLimitConfiguration(ItemsLimitConfiguration&& value) { SetCategoryItemsLimitConfiguration(std::move(value)); return *this;}


    /**
     * <p>The limit on the number of lines that are displayed in a line chart.</p>
     */
    inline const ItemsLimitConfiguration& GetColorItemsLimitConfiguration() const{ return m_colorItemsLimitConfiguration; }

    /**
     * <p>The limit on the number of lines that are displayed in a line chart.</p>
     */
    inline bool ColorItemsLimitConfigurationHasBeenSet() const { return m_colorItemsLimitConfigurationHasBeenSet; }

    /**
     * <p>The limit on the number of lines that are displayed in a line chart.</p>
     */
    inline void SetColorItemsLimitConfiguration(const ItemsLimitConfiguration& value) { m_colorItemsLimitConfigurationHasBeenSet = true; m_colorItemsLimitConfiguration = value; }

    /**
     * <p>The limit on the number of lines that are displayed in a line chart.</p>
     */
    inline void SetColorItemsLimitConfiguration(ItemsLimitConfiguration&& value) { m_colorItemsLimitConfigurationHasBeenSet = true; m_colorItemsLimitConfiguration = std::move(value); }

    /**
     * <p>The limit on the number of lines that are displayed in a line chart.</p>
     */
    inline LineChartSortConfiguration& WithColorItemsLimitConfiguration(const ItemsLimitConfiguration& value) { SetColorItemsLimitConfiguration(value); return *this;}

    /**
     * <p>The limit on the number of lines that are displayed in a line chart.</p>
     */
    inline LineChartSortConfiguration& WithColorItemsLimitConfiguration(ItemsLimitConfiguration&& value) { SetColorItemsLimitConfiguration(std::move(value)); return *this;}


    /**
     * <p>The sort configuration of the small multiples field.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetSmallMultiplesSort() const{ return m_smallMultiplesSort; }

    /**
     * <p>The sort configuration of the small multiples field.</p>
     */
    inline bool SmallMultiplesSortHasBeenSet() const { return m_smallMultiplesSortHasBeenSet; }

    /**
     * <p>The sort configuration of the small multiples field.</p>
     */
    inline void SetSmallMultiplesSort(const Aws::Vector<FieldSortOptions>& value) { m_smallMultiplesSortHasBeenSet = true; m_smallMultiplesSort = value; }

    /**
     * <p>The sort configuration of the small multiples field.</p>
     */
    inline void SetSmallMultiplesSort(Aws::Vector<FieldSortOptions>&& value) { m_smallMultiplesSortHasBeenSet = true; m_smallMultiplesSort = std::move(value); }

    /**
     * <p>The sort configuration of the small multiples field.</p>
     */
    inline LineChartSortConfiguration& WithSmallMultiplesSort(const Aws::Vector<FieldSortOptions>& value) { SetSmallMultiplesSort(value); return *this;}

    /**
     * <p>The sort configuration of the small multiples field.</p>
     */
    inline LineChartSortConfiguration& WithSmallMultiplesSort(Aws::Vector<FieldSortOptions>&& value) { SetSmallMultiplesSort(std::move(value)); return *this;}

    /**
     * <p>The sort configuration of the small multiples field.</p>
     */
    inline LineChartSortConfiguration& AddSmallMultiplesSort(const FieldSortOptions& value) { m_smallMultiplesSortHasBeenSet = true; m_smallMultiplesSort.push_back(value); return *this; }

    /**
     * <p>The sort configuration of the small multiples field.</p>
     */
    inline LineChartSortConfiguration& AddSmallMultiplesSort(FieldSortOptions&& value) { m_smallMultiplesSortHasBeenSet = true; m_smallMultiplesSort.push_back(std::move(value)); return *this; }


    /**
     * <p>The limit on the number of small multiples panels that are displayed.</p>
     */
    inline const ItemsLimitConfiguration& GetSmallMultiplesLimitConfiguration() const{ return m_smallMultiplesLimitConfiguration; }

    /**
     * <p>The limit on the number of small multiples panels that are displayed.</p>
     */
    inline bool SmallMultiplesLimitConfigurationHasBeenSet() const { return m_smallMultiplesLimitConfigurationHasBeenSet; }

    /**
     * <p>The limit on the number of small multiples panels that are displayed.</p>
     */
    inline void SetSmallMultiplesLimitConfiguration(const ItemsLimitConfiguration& value) { m_smallMultiplesLimitConfigurationHasBeenSet = true; m_smallMultiplesLimitConfiguration = value; }

    /**
     * <p>The limit on the number of small multiples panels that are displayed.</p>
     */
    inline void SetSmallMultiplesLimitConfiguration(ItemsLimitConfiguration&& value) { m_smallMultiplesLimitConfigurationHasBeenSet = true; m_smallMultiplesLimitConfiguration = std::move(value); }

    /**
     * <p>The limit on the number of small multiples panels that are displayed.</p>
     */
    inline LineChartSortConfiguration& WithSmallMultiplesLimitConfiguration(const ItemsLimitConfiguration& value) { SetSmallMultiplesLimitConfiguration(value); return *this;}

    /**
     * <p>The limit on the number of small multiples panels that are displayed.</p>
     */
    inline LineChartSortConfiguration& WithSmallMultiplesLimitConfiguration(ItemsLimitConfiguration&& value) { SetSmallMultiplesLimitConfiguration(std::move(value)); return *this;}

  private:

    Aws::Vector<FieldSortOptions> m_categorySort;
    bool m_categorySortHasBeenSet = false;

    ItemsLimitConfiguration m_categoryItemsLimitConfiguration;
    bool m_categoryItemsLimitConfigurationHasBeenSet = false;

    ItemsLimitConfiguration m_colorItemsLimitConfiguration;
    bool m_colorItemsLimitConfigurationHasBeenSet = false;

    Aws::Vector<FieldSortOptions> m_smallMultiplesSort;
    bool m_smallMultiplesSortHasBeenSet = false;

    ItemsLimitConfiguration m_smallMultiplesLimitConfiguration;
    bool m_smallMultiplesLimitConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
