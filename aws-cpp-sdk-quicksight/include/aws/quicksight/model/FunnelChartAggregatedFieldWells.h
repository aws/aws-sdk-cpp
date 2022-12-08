/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/DimensionField.h>
#include <aws/quicksight/model/MeasureField.h>
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
   * <p>The field well configuration of a
   * <code>FunnelChartVisual</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FunnelChartAggregatedFieldWells">AWS
   * API Reference</a></p>
   */
  class FunnelChartAggregatedFieldWells
  {
  public:
    AWS_QUICKSIGHT_API FunnelChartAggregatedFieldWells();
    AWS_QUICKSIGHT_API FunnelChartAggregatedFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FunnelChartAggregatedFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The category field wells of a funnel chart. Values are grouped by category
     * fields.</p>
     */
    inline const Aws::Vector<DimensionField>& GetCategory() const{ return m_category; }

    /**
     * <p>The category field wells of a funnel chart. Values are grouped by category
     * fields.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>The category field wells of a funnel chart. Values are grouped by category
     * fields.</p>
     */
    inline void SetCategory(const Aws::Vector<DimensionField>& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>The category field wells of a funnel chart. Values are grouped by category
     * fields.</p>
     */
    inline void SetCategory(Aws::Vector<DimensionField>&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>The category field wells of a funnel chart. Values are grouped by category
     * fields.</p>
     */
    inline FunnelChartAggregatedFieldWells& WithCategory(const Aws::Vector<DimensionField>& value) { SetCategory(value); return *this;}

    /**
     * <p>The category field wells of a funnel chart. Values are grouped by category
     * fields.</p>
     */
    inline FunnelChartAggregatedFieldWells& WithCategory(Aws::Vector<DimensionField>&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * <p>The category field wells of a funnel chart. Values are grouped by category
     * fields.</p>
     */
    inline FunnelChartAggregatedFieldWells& AddCategory(const DimensionField& value) { m_categoryHasBeenSet = true; m_category.push_back(value); return *this; }

    /**
     * <p>The category field wells of a funnel chart. Values are grouped by category
     * fields.</p>
     */
    inline FunnelChartAggregatedFieldWells& AddCategory(DimensionField&& value) { m_categoryHasBeenSet = true; m_category.push_back(std::move(value)); return *this; }


    /**
     * <p>The value field wells of a funnel chart. Values are aggregated based on
     * categories.</p>
     */
    inline const Aws::Vector<MeasureField>& GetValues() const{ return m_values; }

    /**
     * <p>The value field wells of a funnel chart. Values are aggregated based on
     * categories.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The value field wells of a funnel chart. Values are aggregated based on
     * categories.</p>
     */
    inline void SetValues(const Aws::Vector<MeasureField>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The value field wells of a funnel chart. Values are aggregated based on
     * categories.</p>
     */
    inline void SetValues(Aws::Vector<MeasureField>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The value field wells of a funnel chart. Values are aggregated based on
     * categories.</p>
     */
    inline FunnelChartAggregatedFieldWells& WithValues(const Aws::Vector<MeasureField>& value) { SetValues(value); return *this;}

    /**
     * <p>The value field wells of a funnel chart. Values are aggregated based on
     * categories.</p>
     */
    inline FunnelChartAggregatedFieldWells& WithValues(Aws::Vector<MeasureField>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The value field wells of a funnel chart. Values are aggregated based on
     * categories.</p>
     */
    inline FunnelChartAggregatedFieldWells& AddValues(const MeasureField& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The value field wells of a funnel chart. Values are aggregated based on
     * categories.</p>
     */
    inline FunnelChartAggregatedFieldWells& AddValues(MeasureField&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DimensionField> m_category;
    bool m_categoryHasBeenSet = false;

    Aws::Vector<MeasureField> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
