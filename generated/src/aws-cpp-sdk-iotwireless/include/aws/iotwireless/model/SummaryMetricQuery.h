﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/MetricName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/AggregationPeriod.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotwireless/model/Dimension.h>
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
   * <p>The summary metric query object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SummaryMetricQuery">AWS
   * API Reference</a></p>
   */
  class SummaryMetricQuery
  {
  public:
    AWS_IOTWIRELESS_API SummaryMetricQuery();
    AWS_IOTWIRELESS_API SummaryMetricQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SummaryMetricQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The id of the summary metric query.</p>
     */
    inline const Aws::String& GetQueryId() const{ return m_queryId; }
    inline bool QueryIdHasBeenSet() const { return m_queryIdHasBeenSet; }
    inline void SetQueryId(const Aws::String& value) { m_queryIdHasBeenSet = true; m_queryId = value; }
    inline void SetQueryId(Aws::String&& value) { m_queryIdHasBeenSet = true; m_queryId = std::move(value); }
    inline void SetQueryId(const char* value) { m_queryIdHasBeenSet = true; m_queryId.assign(value); }
    inline SummaryMetricQuery& WithQueryId(const Aws::String& value) { SetQueryId(value); return *this;}
    inline SummaryMetricQuery& WithQueryId(Aws::String&& value) { SetQueryId(std::move(value)); return *this;}
    inline SummaryMetricQuery& WithQueryId(const char* value) { SetQueryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the metric.</p>
     */
    inline const MetricName& GetMetricName() const{ return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(const MetricName& value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline void SetMetricName(MetricName&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }
    inline SummaryMetricQuery& WithMetricName(const MetricName& value) { SetMetricName(value); return *this;}
    inline SummaryMetricQuery& WithMetricName(MetricName&& value) { SetMetricName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimensions of the summary metric.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const{ return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    inline void SetDimensions(const Aws::Vector<Dimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }
    inline void SetDimensions(Aws::Vector<Dimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }
    inline SummaryMetricQuery& WithDimensions(const Aws::Vector<Dimension>& value) { SetDimensions(value); return *this;}
    inline SummaryMetricQuery& WithDimensions(Aws::Vector<Dimension>&& value) { SetDimensions(std::move(value)); return *this;}
    inline SummaryMetricQuery& AddDimensions(const Dimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }
    inline SummaryMetricQuery& AddDimensions(Dimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The aggregation period of the summary metric.</p>
     */
    inline const AggregationPeriod& GetAggregationPeriod() const{ return m_aggregationPeriod; }
    inline bool AggregationPeriodHasBeenSet() const { return m_aggregationPeriodHasBeenSet; }
    inline void SetAggregationPeriod(const AggregationPeriod& value) { m_aggregationPeriodHasBeenSet = true; m_aggregationPeriod = value; }
    inline void SetAggregationPeriod(AggregationPeriod&& value) { m_aggregationPeriodHasBeenSet = true; m_aggregationPeriod = std::move(value); }
    inline SummaryMetricQuery& WithAggregationPeriod(const AggregationPeriod& value) { SetAggregationPeriod(value); return *this;}
    inline SummaryMetricQuery& WithAggregationPeriod(AggregationPeriod&& value) { SetAggregationPeriod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start timestamp for the summary metric query.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const{ return m_startTimestamp; }
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
    inline void SetStartTimestamp(const Aws::Utils::DateTime& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = value; }
    inline void SetStartTimestamp(Aws::Utils::DateTime&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::move(value); }
    inline SummaryMetricQuery& WithStartTimestamp(const Aws::Utils::DateTime& value) { SetStartTimestamp(value); return *this;}
    inline SummaryMetricQuery& WithStartTimestamp(Aws::Utils::DateTime&& value) { SetStartTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end timestamp for the summary metric query.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTimestamp() const{ return m_endTimestamp; }
    inline bool EndTimestampHasBeenSet() const { return m_endTimestampHasBeenSet; }
    inline void SetEndTimestamp(const Aws::Utils::DateTime& value) { m_endTimestampHasBeenSet = true; m_endTimestamp = value; }
    inline void SetEndTimestamp(Aws::Utils::DateTime&& value) { m_endTimestampHasBeenSet = true; m_endTimestamp = std::move(value); }
    inline SummaryMetricQuery& WithEndTimestamp(const Aws::Utils::DateTime& value) { SetEndTimestamp(value); return *this;}
    inline SummaryMetricQuery& WithEndTimestamp(Aws::Utils::DateTime&& value) { SetEndTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_queryId;
    bool m_queryIdHasBeenSet = false;

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
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
