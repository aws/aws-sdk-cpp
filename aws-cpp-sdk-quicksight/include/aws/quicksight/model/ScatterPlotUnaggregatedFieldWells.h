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
   * <p>The unaggregated field wells of a scatter plot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ScatterPlotUnaggregatedFieldWells">AWS
   * API Reference</a></p>
   */
  class ScatterPlotUnaggregatedFieldWells
  {
  public:
    AWS_QUICKSIGHT_API ScatterPlotUnaggregatedFieldWells();
    AWS_QUICKSIGHT_API ScatterPlotUnaggregatedFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ScatterPlotUnaggregatedFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The x-axis field well of a scatter plot.</p> <p>The x-axis is a dimension
     * field and cannot be aggregated.</p>
     */
    inline const Aws::Vector<DimensionField>& GetXAxis() const{ return m_xAxis; }

    /**
     * <p>The x-axis field well of a scatter plot.</p> <p>The x-axis is a dimension
     * field and cannot be aggregated.</p>
     */
    inline bool XAxisHasBeenSet() const { return m_xAxisHasBeenSet; }

    /**
     * <p>The x-axis field well of a scatter plot.</p> <p>The x-axis is a dimension
     * field and cannot be aggregated.</p>
     */
    inline void SetXAxis(const Aws::Vector<DimensionField>& value) { m_xAxisHasBeenSet = true; m_xAxis = value; }

    /**
     * <p>The x-axis field well of a scatter plot.</p> <p>The x-axis is a dimension
     * field and cannot be aggregated.</p>
     */
    inline void SetXAxis(Aws::Vector<DimensionField>&& value) { m_xAxisHasBeenSet = true; m_xAxis = std::move(value); }

    /**
     * <p>The x-axis field well of a scatter plot.</p> <p>The x-axis is a dimension
     * field and cannot be aggregated.</p>
     */
    inline ScatterPlotUnaggregatedFieldWells& WithXAxis(const Aws::Vector<DimensionField>& value) { SetXAxis(value); return *this;}

    /**
     * <p>The x-axis field well of a scatter plot.</p> <p>The x-axis is a dimension
     * field and cannot be aggregated.</p>
     */
    inline ScatterPlotUnaggregatedFieldWells& WithXAxis(Aws::Vector<DimensionField>&& value) { SetXAxis(std::move(value)); return *this;}

    /**
     * <p>The x-axis field well of a scatter plot.</p> <p>The x-axis is a dimension
     * field and cannot be aggregated.</p>
     */
    inline ScatterPlotUnaggregatedFieldWells& AddXAxis(const DimensionField& value) { m_xAxisHasBeenSet = true; m_xAxis.push_back(value); return *this; }

    /**
     * <p>The x-axis field well of a scatter plot.</p> <p>The x-axis is a dimension
     * field and cannot be aggregated.</p>
     */
    inline ScatterPlotUnaggregatedFieldWells& AddXAxis(DimensionField&& value) { m_xAxisHasBeenSet = true; m_xAxis.push_back(std::move(value)); return *this; }


    /**
     * <p>The y-axis field well of a scatter plot.</p> <p>The y-axis is a dimension
     * field and cannot be aggregated.</p>
     */
    inline const Aws::Vector<DimensionField>& GetYAxis() const{ return m_yAxis; }

    /**
     * <p>The y-axis field well of a scatter plot.</p> <p>The y-axis is a dimension
     * field and cannot be aggregated.</p>
     */
    inline bool YAxisHasBeenSet() const { return m_yAxisHasBeenSet; }

    /**
     * <p>The y-axis field well of a scatter plot.</p> <p>The y-axis is a dimension
     * field and cannot be aggregated.</p>
     */
    inline void SetYAxis(const Aws::Vector<DimensionField>& value) { m_yAxisHasBeenSet = true; m_yAxis = value; }

    /**
     * <p>The y-axis field well of a scatter plot.</p> <p>The y-axis is a dimension
     * field and cannot be aggregated.</p>
     */
    inline void SetYAxis(Aws::Vector<DimensionField>&& value) { m_yAxisHasBeenSet = true; m_yAxis = std::move(value); }

    /**
     * <p>The y-axis field well of a scatter plot.</p> <p>The y-axis is a dimension
     * field and cannot be aggregated.</p>
     */
    inline ScatterPlotUnaggregatedFieldWells& WithYAxis(const Aws::Vector<DimensionField>& value) { SetYAxis(value); return *this;}

    /**
     * <p>The y-axis field well of a scatter plot.</p> <p>The y-axis is a dimension
     * field and cannot be aggregated.</p>
     */
    inline ScatterPlotUnaggregatedFieldWells& WithYAxis(Aws::Vector<DimensionField>&& value) { SetYAxis(std::move(value)); return *this;}

    /**
     * <p>The y-axis field well of a scatter plot.</p> <p>The y-axis is a dimension
     * field and cannot be aggregated.</p>
     */
    inline ScatterPlotUnaggregatedFieldWells& AddYAxis(const DimensionField& value) { m_yAxisHasBeenSet = true; m_yAxis.push_back(value); return *this; }

    /**
     * <p>The y-axis field well of a scatter plot.</p> <p>The y-axis is a dimension
     * field and cannot be aggregated.</p>
     */
    inline ScatterPlotUnaggregatedFieldWells& AddYAxis(DimensionField&& value) { m_yAxisHasBeenSet = true; m_yAxis.push_back(std::move(value)); return *this; }


    /**
     * <p>The size field well of a scatter plot.</p>
     */
    inline const Aws::Vector<MeasureField>& GetSize() const{ return m_size; }

    /**
     * <p>The size field well of a scatter plot.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The size field well of a scatter plot.</p>
     */
    inline void SetSize(const Aws::Vector<MeasureField>& value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size field well of a scatter plot.</p>
     */
    inline void SetSize(Aws::Vector<MeasureField>&& value) { m_sizeHasBeenSet = true; m_size = std::move(value); }

    /**
     * <p>The size field well of a scatter plot.</p>
     */
    inline ScatterPlotUnaggregatedFieldWells& WithSize(const Aws::Vector<MeasureField>& value) { SetSize(value); return *this;}

    /**
     * <p>The size field well of a scatter plot.</p>
     */
    inline ScatterPlotUnaggregatedFieldWells& WithSize(Aws::Vector<MeasureField>&& value) { SetSize(std::move(value)); return *this;}

    /**
     * <p>The size field well of a scatter plot.</p>
     */
    inline ScatterPlotUnaggregatedFieldWells& AddSize(const MeasureField& value) { m_sizeHasBeenSet = true; m_size.push_back(value); return *this; }

    /**
     * <p>The size field well of a scatter plot.</p>
     */
    inline ScatterPlotUnaggregatedFieldWells& AddSize(MeasureField&& value) { m_sizeHasBeenSet = true; m_size.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DimensionField> m_xAxis;
    bool m_xAxisHasBeenSet = false;

    Aws::Vector<DimensionField> m_yAxis;
    bool m_yAxisHasBeenSet = false;

    Aws::Vector<MeasureField> m_size;
    bool m_sizeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
