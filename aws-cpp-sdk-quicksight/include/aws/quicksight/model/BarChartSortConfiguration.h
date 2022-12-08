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
   * <p>sort-configuration-description</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BarChartSortConfiguration">AWS
   * API Reference</a></p>
   */
  class BarChartSortConfiguration
  {
  public:
    AWS_QUICKSIGHT_API BarChartSortConfiguration();
    AWS_QUICKSIGHT_API BarChartSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BarChartSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The sort configuration of category fields.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetCategorySort() const{ return m_categorySort; }

    /**
     * <p>The sort configuration of category fields.</p>
     */
    inline bool CategorySortHasBeenSet() const { return m_categorySortHasBeenSet; }

    /**
     * <p>The sort configuration of category fields.</p>
     */
    inline void SetCategorySort(const Aws::Vector<FieldSortOptions>& value) { m_categorySortHasBeenSet = true; m_categorySort = value; }

    /**
     * <p>The sort configuration of category fields.</p>
     */
    inline void SetCategorySort(Aws::Vector<FieldSortOptions>&& value) { m_categorySortHasBeenSet = true; m_categorySort = std::move(value); }

    /**
     * <p>The sort configuration of category fields.</p>
     */
    inline BarChartSortConfiguration& WithCategorySort(const Aws::Vector<FieldSortOptions>& value) { SetCategorySort(value); return *this;}

    /**
     * <p>The sort configuration of category fields.</p>
     */
    inline BarChartSortConfiguration& WithCategorySort(Aws::Vector<FieldSortOptions>&& value) { SetCategorySort(std::move(value)); return *this;}

    /**
     * <p>The sort configuration of category fields.</p>
     */
    inline BarChartSortConfiguration& AddCategorySort(const FieldSortOptions& value) { m_categorySortHasBeenSet = true; m_categorySort.push_back(value); return *this; }

    /**
     * <p>The sort configuration of category fields.</p>
     */
    inline BarChartSortConfiguration& AddCategorySort(FieldSortOptions&& value) { m_categorySortHasBeenSet = true; m_categorySort.push_back(std::move(value)); return *this; }


    /**
     * <p>The limit on the number of categories displayed in a bar chart.</p>
     */
    inline const ItemsLimitConfiguration& GetCategoryItemsLimit() const{ return m_categoryItemsLimit; }

    /**
     * <p>The limit on the number of categories displayed in a bar chart.</p>
     */
    inline bool CategoryItemsLimitHasBeenSet() const { return m_categoryItemsLimitHasBeenSet; }

    /**
     * <p>The limit on the number of categories displayed in a bar chart.</p>
     */
    inline void SetCategoryItemsLimit(const ItemsLimitConfiguration& value) { m_categoryItemsLimitHasBeenSet = true; m_categoryItemsLimit = value; }

    /**
     * <p>The limit on the number of categories displayed in a bar chart.</p>
     */
    inline void SetCategoryItemsLimit(ItemsLimitConfiguration&& value) { m_categoryItemsLimitHasBeenSet = true; m_categoryItemsLimit = std::move(value); }

    /**
     * <p>The limit on the number of categories displayed in a bar chart.</p>
     */
    inline BarChartSortConfiguration& WithCategoryItemsLimit(const ItemsLimitConfiguration& value) { SetCategoryItemsLimit(value); return *this;}

    /**
     * <p>The limit on the number of categories displayed in a bar chart.</p>
     */
    inline BarChartSortConfiguration& WithCategoryItemsLimit(ItemsLimitConfiguration&& value) { SetCategoryItemsLimit(std::move(value)); return *this;}


    /**
     * <p>The sort configuration of color fields in a bar chart.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetColorSort() const{ return m_colorSort; }

    /**
     * <p>The sort configuration of color fields in a bar chart.</p>
     */
    inline bool ColorSortHasBeenSet() const { return m_colorSortHasBeenSet; }

    /**
     * <p>The sort configuration of color fields in a bar chart.</p>
     */
    inline void SetColorSort(const Aws::Vector<FieldSortOptions>& value) { m_colorSortHasBeenSet = true; m_colorSort = value; }

    /**
     * <p>The sort configuration of color fields in a bar chart.</p>
     */
    inline void SetColorSort(Aws::Vector<FieldSortOptions>&& value) { m_colorSortHasBeenSet = true; m_colorSort = std::move(value); }

    /**
     * <p>The sort configuration of color fields in a bar chart.</p>
     */
    inline BarChartSortConfiguration& WithColorSort(const Aws::Vector<FieldSortOptions>& value) { SetColorSort(value); return *this;}

    /**
     * <p>The sort configuration of color fields in a bar chart.</p>
     */
    inline BarChartSortConfiguration& WithColorSort(Aws::Vector<FieldSortOptions>&& value) { SetColorSort(std::move(value)); return *this;}

    /**
     * <p>The sort configuration of color fields in a bar chart.</p>
     */
    inline BarChartSortConfiguration& AddColorSort(const FieldSortOptions& value) { m_colorSortHasBeenSet = true; m_colorSort.push_back(value); return *this; }

    /**
     * <p>The sort configuration of color fields in a bar chart.</p>
     */
    inline BarChartSortConfiguration& AddColorSort(FieldSortOptions&& value) { m_colorSortHasBeenSet = true; m_colorSort.push_back(std::move(value)); return *this; }


    /**
     * <p>The limit on the number of values displayed in a bar chart.</p>
     */
    inline const ItemsLimitConfiguration& GetColorItemsLimit() const{ return m_colorItemsLimit; }

    /**
     * <p>The limit on the number of values displayed in a bar chart.</p>
     */
    inline bool ColorItemsLimitHasBeenSet() const { return m_colorItemsLimitHasBeenSet; }

    /**
     * <p>The limit on the number of values displayed in a bar chart.</p>
     */
    inline void SetColorItemsLimit(const ItemsLimitConfiguration& value) { m_colorItemsLimitHasBeenSet = true; m_colorItemsLimit = value; }

    /**
     * <p>The limit on the number of values displayed in a bar chart.</p>
     */
    inline void SetColorItemsLimit(ItemsLimitConfiguration&& value) { m_colorItemsLimitHasBeenSet = true; m_colorItemsLimit = std::move(value); }

    /**
     * <p>The limit on the number of values displayed in a bar chart.</p>
     */
    inline BarChartSortConfiguration& WithColorItemsLimit(const ItemsLimitConfiguration& value) { SetColorItemsLimit(value); return *this;}

    /**
     * <p>The limit on the number of values displayed in a bar chart.</p>
     */
    inline BarChartSortConfiguration& WithColorItemsLimit(ItemsLimitConfiguration&& value) { SetColorItemsLimit(std::move(value)); return *this;}


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
    inline BarChartSortConfiguration& WithSmallMultiplesSort(const Aws::Vector<FieldSortOptions>& value) { SetSmallMultiplesSort(value); return *this;}

    /**
     * <p>The sort configuration of the small multiples field.</p>
     */
    inline BarChartSortConfiguration& WithSmallMultiplesSort(Aws::Vector<FieldSortOptions>&& value) { SetSmallMultiplesSort(std::move(value)); return *this;}

    /**
     * <p>The sort configuration of the small multiples field.</p>
     */
    inline BarChartSortConfiguration& AddSmallMultiplesSort(const FieldSortOptions& value) { m_smallMultiplesSortHasBeenSet = true; m_smallMultiplesSort.push_back(value); return *this; }

    /**
     * <p>The sort configuration of the small multiples field.</p>
     */
    inline BarChartSortConfiguration& AddSmallMultiplesSort(FieldSortOptions&& value) { m_smallMultiplesSortHasBeenSet = true; m_smallMultiplesSort.push_back(std::move(value)); return *this; }


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
    inline BarChartSortConfiguration& WithSmallMultiplesLimitConfiguration(const ItemsLimitConfiguration& value) { SetSmallMultiplesLimitConfiguration(value); return *this;}

    /**
     * <p>The limit on the number of small multiples panels that are displayed.</p>
     */
    inline BarChartSortConfiguration& WithSmallMultiplesLimitConfiguration(ItemsLimitConfiguration&& value) { SetSmallMultiplesLimitConfiguration(std::move(value)); return *this;}

  private:

    Aws::Vector<FieldSortOptions> m_categorySort;
    bool m_categorySortHasBeenSet = false;

    ItemsLimitConfiguration m_categoryItemsLimit;
    bool m_categoryItemsLimitHasBeenSet = false;

    Aws::Vector<FieldSortOptions> m_colorSort;
    bool m_colorSortHasBeenSet = false;

    ItemsLimitConfiguration m_colorItemsLimit;
    bool m_colorItemsLimitHasBeenSet = false;

    Aws::Vector<FieldSortOptions> m_smallMultiplesSort;
    bool m_smallMultiplesSortHasBeenSet = false;

    ItemsLimitConfiguration m_smallMultiplesLimitConfiguration;
    bool m_smallMultiplesLimitConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
