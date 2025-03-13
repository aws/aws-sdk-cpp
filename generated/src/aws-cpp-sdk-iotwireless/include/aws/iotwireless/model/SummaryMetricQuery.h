/**
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
    AWS_IOTWIRELESS_API SummaryMetricQuery() = default;
    AWS_IOTWIRELESS_API SummaryMetricQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SummaryMetricQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The id of the summary metric query.</p>
     */
    inline const Aws::String& GetQueryId() const { return m_queryId; }
    inline bool QueryIdHasBeenSet() const { return m_queryIdHasBeenSet; }
    template<typename QueryIdT = Aws::String>
    void SetQueryId(QueryIdT&& value) { m_queryIdHasBeenSet = true; m_queryId = std::forward<QueryIdT>(value); }
    template<typename QueryIdT = Aws::String>
    SummaryMetricQuery& WithQueryId(QueryIdT&& value) { SetQueryId(std::forward<QueryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the metric.</p>
     */
    inline MetricName GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(MetricName value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline SummaryMetricQuery& WithMetricName(MetricName value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimensions of the summary metric.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = Aws::Vector<Dimension>>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = Aws::Vector<Dimension>>
    SummaryMetricQuery& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    template<typename DimensionsT = Dimension>
    SummaryMetricQuery& AddDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace_back(std::forward<DimensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The aggregation period of the summary metric.</p>
     */
    inline AggregationPeriod GetAggregationPeriod() const { return m_aggregationPeriod; }
    inline bool AggregationPeriodHasBeenSet() const { return m_aggregationPeriodHasBeenSet; }
    inline void SetAggregationPeriod(AggregationPeriod value) { m_aggregationPeriodHasBeenSet = true; m_aggregationPeriod = value; }
    inline SummaryMetricQuery& WithAggregationPeriod(AggregationPeriod value) { SetAggregationPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start timestamp for the summary metric query.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const { return m_startTimestamp; }
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    void SetStartTimestamp(StartTimestampT&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::forward<StartTimestampT>(value); }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    SummaryMetricQuery& WithStartTimestamp(StartTimestampT&& value) { SetStartTimestamp(std::forward<StartTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end timestamp for the summary metric query.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTimestamp() const { return m_endTimestamp; }
    inline bool EndTimestampHasBeenSet() const { return m_endTimestampHasBeenSet; }
    template<typename EndTimestampT = Aws::Utils::DateTime>
    void SetEndTimestamp(EndTimestampT&& value) { m_endTimestampHasBeenSet = true; m_endTimestamp = std::forward<EndTimestampT>(value); }
    template<typename EndTimestampT = Aws::Utils::DateTime>
    SummaryMetricQuery& WithEndTimestamp(EndTimestampT&& value) { SetEndTimestamp(std::forward<EndTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_queryId;
    bool m_queryIdHasBeenSet = false;

    MetricName m_metricName{MetricName::NOT_SET};
    bool m_metricNameHasBeenSet = false;

    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    AggregationPeriod m_aggregationPeriod{AggregationPeriod::NOT_SET};
    bool m_aggregationPeriodHasBeenSet = false;

    Aws::Utils::DateTime m_startTimestamp{};
    bool m_startTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_endTimestamp{};
    bool m_endTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
