/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/MetricQueryStatus.h>
#include <aws/iotwireless/model/MetricName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/AggregationPeriod.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotwireless/model/Dimension.h>
#include <aws/iotwireless/model/MetricQueryValue.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>The result of the summary metrics aggregation operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SummaryMetricQueryResult">AWS
   * API Reference</a></p>
   */
  class SummaryMetricQueryResult
  {
  public:
    AWS_IOTWIRELESS_API SummaryMetricQueryResult();
    AWS_IOTWIRELESS_API SummaryMetricQueryResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SummaryMetricQueryResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the summary metric results query operation.</p>
     */
    inline const Aws::String& GetQueryId() const{ return m_queryId; }
    inline bool QueryIdHasBeenSet() const { return m_queryIdHasBeenSet; }
    inline void SetQueryId(const Aws::String& value) { m_queryIdHasBeenSet = true; m_queryId = value; }
    inline void SetQueryId(Aws::String&& value) { m_queryIdHasBeenSet = true; m_queryId = std::move(value); }
    inline void SetQueryId(const char* value) { m_queryIdHasBeenSet = true; m_queryId.assign(value); }
    inline SummaryMetricQueryResult& WithQueryId(const Aws::String& value) { SetQueryId(value); return *this;}
    inline SummaryMetricQueryResult& WithQueryId(Aws::String&& value) { SetQueryId(std::move(value)); return *this;}
    inline SummaryMetricQueryResult& WithQueryId(const char* value) { SetQueryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the summary metric query result.</p>
     */
    inline const MetricQueryStatus& GetQueryStatus() const{ return m_queryStatus; }
    inline bool QueryStatusHasBeenSet() const { return m_queryStatusHasBeenSet; }
    inline void SetQueryStatus(const MetricQueryStatus& value) { m_queryStatusHasBeenSet = true; m_queryStatus = value; }
    inline void SetQueryStatus(MetricQueryStatus&& value) { m_queryStatusHasBeenSet = true; m_queryStatus = std::move(value); }
    inline SummaryMetricQueryResult& WithQueryStatus(const MetricQueryStatus& value) { SetQueryStatus(value); return *this;}
    inline SummaryMetricQueryResult& WithQueryStatus(MetricQueryStatus&& value) { SetQueryStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message for the summary metric query result.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }
    inline SummaryMetricQueryResult& WithError(const Aws::String& value) { SetError(value); return *this;}
    inline SummaryMetricQueryResult& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}
    inline SummaryMetricQueryResult& WithError(const char* value) { SetError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the summary metric query result.</p>
     */
    inline const MetricName& GetMetricName() const{ return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(const MetricName& value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline void SetMetricName(MetricName&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }
    inline SummaryMetricQueryResult& WithMetricName(const MetricName& value) { SetMetricName(value); return *this;}
    inline SummaryMetricQueryResult& WithMetricName(MetricName&& value) { SetMetricName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimensions of the metric.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const{ return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    inline void SetDimensions(const Aws::Vector<Dimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }
    inline void SetDimensions(Aws::Vector<Dimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }
    inline SummaryMetricQueryResult& WithDimensions(const Aws::Vector<Dimension>& value) { SetDimensions(value); return *this;}
    inline SummaryMetricQueryResult& WithDimensions(Aws::Vector<Dimension>&& value) { SetDimensions(std::move(value)); return *this;}
    inline SummaryMetricQueryResult& AddDimensions(const Dimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }
    inline SummaryMetricQueryResult& AddDimensions(Dimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The aggregation period of the metric.</p>
     */
    inline const AggregationPeriod& GetAggregationPeriod() const{ return m_aggregationPeriod; }
    inline bool AggregationPeriodHasBeenSet() const { return m_aggregationPeriodHasBeenSet; }
    inline void SetAggregationPeriod(const AggregationPeriod& value) { m_aggregationPeriodHasBeenSet = true; m_aggregationPeriod = value; }
    inline void SetAggregationPeriod(AggregationPeriod&& value) { m_aggregationPeriodHasBeenSet = true; m_aggregationPeriod = std::move(value); }
    inline SummaryMetricQueryResult& WithAggregationPeriod(const AggregationPeriod& value) { SetAggregationPeriod(value); return *this;}
    inline SummaryMetricQueryResult& WithAggregationPeriod(AggregationPeriod&& value) { SetAggregationPeriod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start timestamp for the summary metric query.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const{ return m_startTimestamp; }
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
    inline void SetStartTimestamp(const Aws::Utils::DateTime& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = value; }
    inline void SetStartTimestamp(Aws::Utils::DateTime&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::move(value); }
    inline SummaryMetricQueryResult& WithStartTimestamp(const Aws::Utils::DateTime& value) { SetStartTimestamp(value); return *this;}
    inline SummaryMetricQueryResult& WithStartTimestamp(Aws::Utils::DateTime&& value) { SetStartTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end timestamp for the summary metric query.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTimestamp() const{ return m_endTimestamp; }
    inline bool EndTimestampHasBeenSet() const { return m_endTimestampHasBeenSet; }
    inline void SetEndTimestamp(const Aws::Utils::DateTime& value) { m_endTimestampHasBeenSet = true; m_endTimestamp = value; }
    inline void SetEndTimestamp(Aws::Utils::DateTime&& value) { m_endTimestampHasBeenSet = true; m_endTimestamp = std::move(value); }
    inline SummaryMetricQueryResult& WithEndTimestamp(const Aws::Utils::DateTime& value) { SetEndTimestamp(value); return *this;}
    inline SummaryMetricQueryResult& WithEndTimestamp(Aws::Utils::DateTime&& value) { SetEndTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of each aggregation result.</p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetTimestamps() const{ return m_timestamps; }
    inline bool TimestampsHasBeenSet() const { return m_timestampsHasBeenSet; }
    inline void SetTimestamps(const Aws::Vector<Aws::Utils::DateTime>& value) { m_timestampsHasBeenSet = true; m_timestamps = value; }
    inline void SetTimestamps(Aws::Vector<Aws::Utils::DateTime>&& value) { m_timestampsHasBeenSet = true; m_timestamps = std::move(value); }
    inline SummaryMetricQueryResult& WithTimestamps(const Aws::Vector<Aws::Utils::DateTime>& value) { SetTimestamps(value); return *this;}
    inline SummaryMetricQueryResult& WithTimestamps(Aws::Vector<Aws::Utils::DateTime>&& value) { SetTimestamps(std::move(value)); return *this;}
    inline SummaryMetricQueryResult& AddTimestamps(const Aws::Utils::DateTime& value) { m_timestampsHasBeenSet = true; m_timestamps.push_back(value); return *this; }
    inline SummaryMetricQueryResult& AddTimestamps(Aws::Utils::DateTime&& value) { m_timestampsHasBeenSet = true; m_timestamps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of aggregated summary metric query results.</p>
     */
    inline const Aws::Vector<MetricQueryValue>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<MetricQueryValue>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<MetricQueryValue>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline SummaryMetricQueryResult& WithValues(const Aws::Vector<MetricQueryValue>& value) { SetValues(value); return *this;}
    inline SummaryMetricQueryResult& WithValues(Aws::Vector<MetricQueryValue>&& value) { SetValues(std::move(value)); return *this;}
    inline SummaryMetricQueryResult& AddValues(const MetricQueryValue& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline SummaryMetricQueryResult& AddValues(MetricQueryValue&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The units of measurement to be used for interpreting the aggregation
     * result.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }
    inline SummaryMetricQueryResult& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}
    inline SummaryMetricQueryResult& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}
    inline SummaryMetricQueryResult& WithUnit(const char* value) { SetUnit(value); return *this;}
    ///@}
  private:

    Aws::String m_queryId;
    bool m_queryIdHasBeenSet = false;

    MetricQueryStatus m_queryStatus;
    bool m_queryStatusHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    MetricName m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    AggregationPeriod m_aggregationPeriod;
    bool m_aggregationPeriodHasBeenSet = false;

    Aws::Utils::DateTime m_startTimestamp;
    bool m_startTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_endTimestamp;
    bool m_endTimestampHasBeenSet = false;

    Aws::Vector<Aws::Utils::DateTime> m_timestamps;
    bool m_timestampsHasBeenSet = false;

    Aws::Vector<MetricQueryValue> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
