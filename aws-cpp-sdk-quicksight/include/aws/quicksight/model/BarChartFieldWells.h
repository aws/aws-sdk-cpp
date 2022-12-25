/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/BarChartAggregatedFieldWells.h>
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
   * <p>The field wells of a <code>BarChartVisual</code>.</p> <p>This is a union type
   * structure. For this structure to be valid, only one of the attributes can be
   * defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BarChartFieldWells">AWS
   * API Reference</a></p>
   */
  class BarChartFieldWells
  {
  public:
    AWS_QUICKSIGHT_API BarChartFieldWells();
    AWS_QUICKSIGHT_API BarChartFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BarChartFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The aggregated field wells of a bar chart.</p>
     */
    inline const BarChartAggregatedFieldWells& GetBarChartAggregatedFieldWells() const{ return m_barChartAggregatedFieldWells; }

    /**
     * <p>The aggregated field wells of a bar chart.</p>
     */
    inline bool BarChartAggregatedFieldWellsHasBeenSet() const { return m_barChartAggregatedFieldWellsHasBeenSet; }

    /**
     * <p>The aggregated field wells of a bar chart.</p>
     */
    inline void SetBarChartAggregatedFieldWells(const BarChartAggregatedFieldWells& value) { m_barChartAggregatedFieldWellsHasBeenSet = true; m_barChartAggregatedFieldWells = value; }

    /**
     * <p>The aggregated field wells of a bar chart.</p>
     */
    inline void SetBarChartAggregatedFieldWells(BarChartAggregatedFieldWells&& value) { m_barChartAggregatedFieldWellsHasBeenSet = true; m_barChartAggregatedFieldWells = std::move(value); }

    /**
     * <p>The aggregated field wells of a bar chart.</p>
     */
    inline BarChartFieldWells& WithBarChartAggregatedFieldWells(const BarChartAggregatedFieldWells& value) { SetBarChartAggregatedFieldWells(value); return *this;}

    /**
     * <p>The aggregated field wells of a bar chart.</p>
     */
    inline BarChartFieldWells& WithBarChartAggregatedFieldWells(BarChartAggregatedFieldWells&& value) { SetBarChartAggregatedFieldWells(std::move(value)); return *this;}

  private:

    BarChartAggregatedFieldWells m_barChartAggregatedFieldWells;
    bool m_barChartAggregatedFieldWellsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
