/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/quicksight/model/AggregationFunction.h>
#include <aws/quicksight/model/NumericalAggregationFunction.h>
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
   * <p>The dynamic configuration of the reference line data
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ReferenceLineDynamicDataConfiguration">AWS
   * API Reference</a></p>
   */
  class ReferenceLineDynamicDataConfiguration
  {
  public:
    AWS_QUICKSIGHT_API ReferenceLineDynamicDataConfiguration();
    AWS_QUICKSIGHT_API ReferenceLineDynamicDataConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ReferenceLineDynamicDataConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The column that the dynamic data targets.</p>
     */
    inline const ColumnIdentifier& GetColumn() const{ return m_column; }

    /**
     * <p>The column that the dynamic data targets.</p>
     */
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }

    /**
     * <p>The column that the dynamic data targets.</p>
     */
    inline void SetColumn(const ColumnIdentifier& value) { m_columnHasBeenSet = true; m_column = value; }

    /**
     * <p>The column that the dynamic data targets.</p>
     */
    inline void SetColumn(ColumnIdentifier&& value) { m_columnHasBeenSet = true; m_column = std::move(value); }

    /**
     * <p>The column that the dynamic data targets.</p>
     */
    inline ReferenceLineDynamicDataConfiguration& WithColumn(const ColumnIdentifier& value) { SetColumn(value); return *this;}

    /**
     * <p>The column that the dynamic data targets.</p>
     */
    inline ReferenceLineDynamicDataConfiguration& WithColumn(ColumnIdentifier&& value) { SetColumn(std::move(value)); return *this;}


    /**
     * <p>The aggregation function that is used in the dynamic data.</p>
     */
    inline const AggregationFunction& GetMeasureAggregationFunction() const{ return m_measureAggregationFunction; }

    /**
     * <p>The aggregation function that is used in the dynamic data.</p>
     */
    inline bool MeasureAggregationFunctionHasBeenSet() const { return m_measureAggregationFunctionHasBeenSet; }

    /**
     * <p>The aggregation function that is used in the dynamic data.</p>
     */
    inline void SetMeasureAggregationFunction(const AggregationFunction& value) { m_measureAggregationFunctionHasBeenSet = true; m_measureAggregationFunction = value; }

    /**
     * <p>The aggregation function that is used in the dynamic data.</p>
     */
    inline void SetMeasureAggregationFunction(AggregationFunction&& value) { m_measureAggregationFunctionHasBeenSet = true; m_measureAggregationFunction = std::move(value); }

    /**
     * <p>The aggregation function that is used in the dynamic data.</p>
     */
    inline ReferenceLineDynamicDataConfiguration& WithMeasureAggregationFunction(const AggregationFunction& value) { SetMeasureAggregationFunction(value); return *this;}

    /**
     * <p>The aggregation function that is used in the dynamic data.</p>
     */
    inline ReferenceLineDynamicDataConfiguration& WithMeasureAggregationFunction(AggregationFunction&& value) { SetMeasureAggregationFunction(std::move(value)); return *this;}


    /**
     * <p>The calculation that is used in the dynamic data.</p>
     */
    inline const NumericalAggregationFunction& GetCalculation() const{ return m_calculation; }

    /**
     * <p>The calculation that is used in the dynamic data.</p>
     */
    inline bool CalculationHasBeenSet() const { return m_calculationHasBeenSet; }

    /**
     * <p>The calculation that is used in the dynamic data.</p>
     */
    inline void SetCalculation(const NumericalAggregationFunction& value) { m_calculationHasBeenSet = true; m_calculation = value; }

    /**
     * <p>The calculation that is used in the dynamic data.</p>
     */
    inline void SetCalculation(NumericalAggregationFunction&& value) { m_calculationHasBeenSet = true; m_calculation = std::move(value); }

    /**
     * <p>The calculation that is used in the dynamic data.</p>
     */
    inline ReferenceLineDynamicDataConfiguration& WithCalculation(const NumericalAggregationFunction& value) { SetCalculation(value); return *this;}

    /**
     * <p>The calculation that is used in the dynamic data.</p>
     */
    inline ReferenceLineDynamicDataConfiguration& WithCalculation(NumericalAggregationFunction&& value) { SetCalculation(std::move(value)); return *this;}

  private:

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    AggregationFunction m_measureAggregationFunction;
    bool m_measureAggregationFunctionHasBeenSet = false;

    NumericalAggregationFunction m_calculation;
    bool m_calculationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
