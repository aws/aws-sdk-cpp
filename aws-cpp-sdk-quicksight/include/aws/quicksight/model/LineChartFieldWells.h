/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/LineChartAggregatedFieldWells.h>
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
   * <p>The field well configuration of a line chart.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LineChartFieldWells">AWS
   * API Reference</a></p>
   */
  class LineChartFieldWells
  {
  public:
    AWS_QUICKSIGHT_API LineChartFieldWells();
    AWS_QUICKSIGHT_API LineChartFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LineChartFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field well configuration of a line chart.</p>
     */
    inline const LineChartAggregatedFieldWells& GetLineChartAggregatedFieldWells() const{ return m_lineChartAggregatedFieldWells; }

    /**
     * <p>The field well configuration of a line chart.</p>
     */
    inline bool LineChartAggregatedFieldWellsHasBeenSet() const { return m_lineChartAggregatedFieldWellsHasBeenSet; }

    /**
     * <p>The field well configuration of a line chart.</p>
     */
    inline void SetLineChartAggregatedFieldWells(const LineChartAggregatedFieldWells& value) { m_lineChartAggregatedFieldWellsHasBeenSet = true; m_lineChartAggregatedFieldWells = value; }

    /**
     * <p>The field well configuration of a line chart.</p>
     */
    inline void SetLineChartAggregatedFieldWells(LineChartAggregatedFieldWells&& value) { m_lineChartAggregatedFieldWellsHasBeenSet = true; m_lineChartAggregatedFieldWells = std::move(value); }

    /**
     * <p>The field well configuration of a line chart.</p>
     */
    inline LineChartFieldWells& WithLineChartAggregatedFieldWells(const LineChartAggregatedFieldWells& value) { SetLineChartAggregatedFieldWells(value); return *this;}

    /**
     * <p>The field well configuration of a line chart.</p>
     */
    inline LineChartFieldWells& WithLineChartAggregatedFieldWells(LineChartAggregatedFieldWells&& value) { SetLineChartAggregatedFieldWells(std::move(value)); return *this;}

  private:

    LineChartAggregatedFieldWells m_lineChartAggregatedFieldWells;
    bool m_lineChartAggregatedFieldWellsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
