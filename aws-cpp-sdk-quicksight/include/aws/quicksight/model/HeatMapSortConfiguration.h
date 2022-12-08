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
   * <p>The sort configuration of a heat map.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/HeatMapSortConfiguration">AWS
   * API Reference</a></p>
   */
  class HeatMapSortConfiguration
  {
  public:
    AWS_QUICKSIGHT_API HeatMapSortConfiguration();
    AWS_QUICKSIGHT_API HeatMapSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API HeatMapSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field sort configuration of the rows fields.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetHeatMapRowSort() const{ return m_heatMapRowSort; }

    /**
     * <p>The field sort configuration of the rows fields.</p>
     */
    inline bool HeatMapRowSortHasBeenSet() const { return m_heatMapRowSortHasBeenSet; }

    /**
     * <p>The field sort configuration of the rows fields.</p>
     */
    inline void SetHeatMapRowSort(const Aws::Vector<FieldSortOptions>& value) { m_heatMapRowSortHasBeenSet = true; m_heatMapRowSort = value; }

    /**
     * <p>The field sort configuration of the rows fields.</p>
     */
    inline void SetHeatMapRowSort(Aws::Vector<FieldSortOptions>&& value) { m_heatMapRowSortHasBeenSet = true; m_heatMapRowSort = std::move(value); }

    /**
     * <p>The field sort configuration of the rows fields.</p>
     */
    inline HeatMapSortConfiguration& WithHeatMapRowSort(const Aws::Vector<FieldSortOptions>& value) { SetHeatMapRowSort(value); return *this;}

    /**
     * <p>The field sort configuration of the rows fields.</p>
     */
    inline HeatMapSortConfiguration& WithHeatMapRowSort(Aws::Vector<FieldSortOptions>&& value) { SetHeatMapRowSort(std::move(value)); return *this;}

    /**
     * <p>The field sort configuration of the rows fields.</p>
     */
    inline HeatMapSortConfiguration& AddHeatMapRowSort(const FieldSortOptions& value) { m_heatMapRowSortHasBeenSet = true; m_heatMapRowSort.push_back(value); return *this; }

    /**
     * <p>The field sort configuration of the rows fields.</p>
     */
    inline HeatMapSortConfiguration& AddHeatMapRowSort(FieldSortOptions&& value) { m_heatMapRowSortHasBeenSet = true; m_heatMapRowSort.push_back(std::move(value)); return *this; }


    /**
     * <p>The column sort configuration for heat map for columns that aren't a part of
     * a field well.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetHeatMapColumnSort() const{ return m_heatMapColumnSort; }

    /**
     * <p>The column sort configuration for heat map for columns that aren't a part of
     * a field well.</p>
     */
    inline bool HeatMapColumnSortHasBeenSet() const { return m_heatMapColumnSortHasBeenSet; }

    /**
     * <p>The column sort configuration for heat map for columns that aren't a part of
     * a field well.</p>
     */
    inline void SetHeatMapColumnSort(const Aws::Vector<FieldSortOptions>& value) { m_heatMapColumnSortHasBeenSet = true; m_heatMapColumnSort = value; }

    /**
     * <p>The column sort configuration for heat map for columns that aren't a part of
     * a field well.</p>
     */
    inline void SetHeatMapColumnSort(Aws::Vector<FieldSortOptions>&& value) { m_heatMapColumnSortHasBeenSet = true; m_heatMapColumnSort = std::move(value); }

    /**
     * <p>The column sort configuration for heat map for columns that aren't a part of
     * a field well.</p>
     */
    inline HeatMapSortConfiguration& WithHeatMapColumnSort(const Aws::Vector<FieldSortOptions>& value) { SetHeatMapColumnSort(value); return *this;}

    /**
     * <p>The column sort configuration for heat map for columns that aren't a part of
     * a field well.</p>
     */
    inline HeatMapSortConfiguration& WithHeatMapColumnSort(Aws::Vector<FieldSortOptions>&& value) { SetHeatMapColumnSort(std::move(value)); return *this;}

    /**
     * <p>The column sort configuration for heat map for columns that aren't a part of
     * a field well.</p>
     */
    inline HeatMapSortConfiguration& AddHeatMapColumnSort(const FieldSortOptions& value) { m_heatMapColumnSortHasBeenSet = true; m_heatMapColumnSort.push_back(value); return *this; }

    /**
     * <p>The column sort configuration for heat map for columns that aren't a part of
     * a field well.</p>
     */
    inline HeatMapSortConfiguration& AddHeatMapColumnSort(FieldSortOptions&& value) { m_heatMapColumnSortHasBeenSet = true; m_heatMapColumnSort.push_back(std::move(value)); return *this; }


    /**
     * <p>The limit on the number of rows that are displayed in a heat map.</p>
     */
    inline const ItemsLimitConfiguration& GetHeatMapRowItemsLimitConfiguration() const{ return m_heatMapRowItemsLimitConfiguration; }

    /**
     * <p>The limit on the number of rows that are displayed in a heat map.</p>
     */
    inline bool HeatMapRowItemsLimitConfigurationHasBeenSet() const { return m_heatMapRowItemsLimitConfigurationHasBeenSet; }

    /**
     * <p>The limit on the number of rows that are displayed in a heat map.</p>
     */
    inline void SetHeatMapRowItemsLimitConfiguration(const ItemsLimitConfiguration& value) { m_heatMapRowItemsLimitConfigurationHasBeenSet = true; m_heatMapRowItemsLimitConfiguration = value; }

    /**
     * <p>The limit on the number of rows that are displayed in a heat map.</p>
     */
    inline void SetHeatMapRowItemsLimitConfiguration(ItemsLimitConfiguration&& value) { m_heatMapRowItemsLimitConfigurationHasBeenSet = true; m_heatMapRowItemsLimitConfiguration = std::move(value); }

    /**
     * <p>The limit on the number of rows that are displayed in a heat map.</p>
     */
    inline HeatMapSortConfiguration& WithHeatMapRowItemsLimitConfiguration(const ItemsLimitConfiguration& value) { SetHeatMapRowItemsLimitConfiguration(value); return *this;}

    /**
     * <p>The limit on the number of rows that are displayed in a heat map.</p>
     */
    inline HeatMapSortConfiguration& WithHeatMapRowItemsLimitConfiguration(ItemsLimitConfiguration&& value) { SetHeatMapRowItemsLimitConfiguration(std::move(value)); return *this;}


    /**
     * <p>The limit on the number of columns that are displayed in a heat map.</p>
     */
    inline const ItemsLimitConfiguration& GetHeatMapColumnItemsLimitConfiguration() const{ return m_heatMapColumnItemsLimitConfiguration; }

    /**
     * <p>The limit on the number of columns that are displayed in a heat map.</p>
     */
    inline bool HeatMapColumnItemsLimitConfigurationHasBeenSet() const { return m_heatMapColumnItemsLimitConfigurationHasBeenSet; }

    /**
     * <p>The limit on the number of columns that are displayed in a heat map.</p>
     */
    inline void SetHeatMapColumnItemsLimitConfiguration(const ItemsLimitConfiguration& value) { m_heatMapColumnItemsLimitConfigurationHasBeenSet = true; m_heatMapColumnItemsLimitConfiguration = value; }

    /**
     * <p>The limit on the number of columns that are displayed in a heat map.</p>
     */
    inline void SetHeatMapColumnItemsLimitConfiguration(ItemsLimitConfiguration&& value) { m_heatMapColumnItemsLimitConfigurationHasBeenSet = true; m_heatMapColumnItemsLimitConfiguration = std::move(value); }

    /**
     * <p>The limit on the number of columns that are displayed in a heat map.</p>
     */
    inline HeatMapSortConfiguration& WithHeatMapColumnItemsLimitConfiguration(const ItemsLimitConfiguration& value) { SetHeatMapColumnItemsLimitConfiguration(value); return *this;}

    /**
     * <p>The limit on the number of columns that are displayed in a heat map.</p>
     */
    inline HeatMapSortConfiguration& WithHeatMapColumnItemsLimitConfiguration(ItemsLimitConfiguration&& value) { SetHeatMapColumnItemsLimitConfiguration(std::move(value)); return *this;}

  private:

    Aws::Vector<FieldSortOptions> m_heatMapRowSort;
    bool m_heatMapRowSortHasBeenSet = false;

    Aws::Vector<FieldSortOptions> m_heatMapColumnSort;
    bool m_heatMapColumnSortHasBeenSet = false;

    ItemsLimitConfiguration m_heatMapRowItemsLimitConfiguration;
    bool m_heatMapRowItemsLimitConfigurationHasBeenSet = false;

    ItemsLimitConfiguration m_heatMapColumnItemsLimitConfiguration;
    bool m_heatMapColumnItemsLimitConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
