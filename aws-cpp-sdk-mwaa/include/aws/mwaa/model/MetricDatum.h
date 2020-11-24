/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa/model/StatisticSet.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mwaa/model/Unit.h>
#include <aws/mwaa/model/Dimension.h>
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
namespace MWAA
{
namespace Model
{

  /**
   * <p>Internal only API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/MetricDatum">AWS
   * API Reference</a></p>
   */
  class AWS_MWAA_API MetricDatum
  {
  public:
    MetricDatum();
    MetricDatum(Aws::Utils::Json::JsonView jsonValue);
    MetricDatum& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Internal only API.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>Internal only API.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>Internal only API.</p>
     */
    inline void SetDimensions(const Aws::Vector<Dimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>Internal only API.</p>
     */
    inline void SetDimensions(Aws::Vector<Dimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>Internal only API.</p>
     */
    inline MetricDatum& WithDimensions(const Aws::Vector<Dimension>& value) { SetDimensions(value); return *this;}

    /**
     * <p>Internal only API.</p>
     */
    inline MetricDatum& WithDimensions(Aws::Vector<Dimension>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>Internal only API.</p>
     */
    inline MetricDatum& AddDimensions(const Dimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>Internal only API.</p>
     */
    inline MetricDatum& AddDimensions(Dimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }


    /**
     * <p>Internal only API.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>Internal only API.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>Internal only API.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>Internal only API.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>Internal only API.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>Internal only API.</p>
     */
    inline MetricDatum& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>Internal only API.</p>
     */
    inline MetricDatum& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>Internal only API.</p>
     */
    inline MetricDatum& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>Internal only API.</p>
     */
    inline const StatisticSet& GetStatisticValues() const{ return m_statisticValues; }

    /**
     * <p>Internal only API.</p>
     */
    inline bool StatisticValuesHasBeenSet() const { return m_statisticValuesHasBeenSet; }

    /**
     * <p>Internal only API.</p>
     */
    inline void SetStatisticValues(const StatisticSet& value) { m_statisticValuesHasBeenSet = true; m_statisticValues = value; }

    /**
     * <p>Internal only API.</p>
     */
    inline void SetStatisticValues(StatisticSet&& value) { m_statisticValuesHasBeenSet = true; m_statisticValues = std::move(value); }

    /**
     * <p>Internal only API.</p>
     */
    inline MetricDatum& WithStatisticValues(const StatisticSet& value) { SetStatisticValues(value); return *this;}

    /**
     * <p>Internal only API.</p>
     */
    inline MetricDatum& WithStatisticValues(StatisticSet&& value) { SetStatisticValues(std::move(value)); return *this;}


    /**
     * <p>Internal only API.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>Internal only API.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>Internal only API.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>Internal only API.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>Internal only API.</p>
     */
    inline MetricDatum& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>Internal only API.</p>
     */
    inline MetricDatum& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    
    inline const Unit& GetUnit() const{ return m_unit; }

    
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    
    inline void SetUnit(const Unit& value) { m_unitHasBeenSet = true; m_unit = value; }

    
    inline void SetUnit(Unit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    
    inline MetricDatum& WithUnit(const Unit& value) { SetUnit(value); return *this;}

    
    inline MetricDatum& WithUnit(Unit&& value) { SetUnit(std::move(value)); return *this;}


    /**
     * <p>Internal only API.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>Internal only API.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Internal only API.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Internal only API.</p>
     */
    inline MetricDatum& WithValue(double value) { SetValue(value); return *this;}

  private:

    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;

    StatisticSet m_statisticValues;
    bool m_statisticValuesHasBeenSet;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet;

    Unit m_unit;
    bool m_unitHasBeenSet;

    double m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
