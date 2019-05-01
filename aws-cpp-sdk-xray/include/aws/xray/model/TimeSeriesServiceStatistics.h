/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/xray/model/EdgeStatistics.h>
#include <aws/xray/model/ServiceStatistics.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/HistogramEntry.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>A list of TimeSeriesStatistic structures.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/TimeSeriesServiceStatistics">AWS
   * API Reference</a></p>
   */
  class AWS_XRAY_API TimeSeriesServiceStatistics
  {
  public:
    TimeSeriesServiceStatistics();
    TimeSeriesServiceStatistics(Aws::Utils::Json::JsonView jsonValue);
    TimeSeriesServiceStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Timestamp of the window for which statistics are aggregated.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>Timestamp of the window for which statistics are aggregated.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>Timestamp of the window for which statistics are aggregated.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>Timestamp of the window for which statistics are aggregated.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>Timestamp of the window for which statistics are aggregated.</p>
     */
    inline TimeSeriesServiceStatistics& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>Timestamp of the window for which statistics are aggregated.</p>
     */
    inline TimeSeriesServiceStatistics& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    
    inline const EdgeStatistics& GetEdgeSummaryStatistics() const{ return m_edgeSummaryStatistics; }

    
    inline bool EdgeSummaryStatisticsHasBeenSet() const { return m_edgeSummaryStatisticsHasBeenSet; }

    
    inline void SetEdgeSummaryStatistics(const EdgeStatistics& value) { m_edgeSummaryStatisticsHasBeenSet = true; m_edgeSummaryStatistics = value; }

    
    inline void SetEdgeSummaryStatistics(EdgeStatistics&& value) { m_edgeSummaryStatisticsHasBeenSet = true; m_edgeSummaryStatistics = std::move(value); }

    
    inline TimeSeriesServiceStatistics& WithEdgeSummaryStatistics(const EdgeStatistics& value) { SetEdgeSummaryStatistics(value); return *this;}

    
    inline TimeSeriesServiceStatistics& WithEdgeSummaryStatistics(EdgeStatistics&& value) { SetEdgeSummaryStatistics(std::move(value)); return *this;}


    
    inline const ServiceStatistics& GetServiceSummaryStatistics() const{ return m_serviceSummaryStatistics; }

    
    inline bool ServiceSummaryStatisticsHasBeenSet() const { return m_serviceSummaryStatisticsHasBeenSet; }

    
    inline void SetServiceSummaryStatistics(const ServiceStatistics& value) { m_serviceSummaryStatisticsHasBeenSet = true; m_serviceSummaryStatistics = value; }

    
    inline void SetServiceSummaryStatistics(ServiceStatistics&& value) { m_serviceSummaryStatisticsHasBeenSet = true; m_serviceSummaryStatistics = std::move(value); }

    
    inline TimeSeriesServiceStatistics& WithServiceSummaryStatistics(const ServiceStatistics& value) { SetServiceSummaryStatistics(value); return *this;}

    
    inline TimeSeriesServiceStatistics& WithServiceSummaryStatistics(ServiceStatistics&& value) { SetServiceSummaryStatistics(std::move(value)); return *this;}


    /**
     * <p>The response time histogram for the selected entities.</p>
     */
    inline const Aws::Vector<HistogramEntry>& GetResponseTimeHistogram() const{ return m_responseTimeHistogram; }

    /**
     * <p>The response time histogram for the selected entities.</p>
     */
    inline bool ResponseTimeHistogramHasBeenSet() const { return m_responseTimeHistogramHasBeenSet; }

    /**
     * <p>The response time histogram for the selected entities.</p>
     */
    inline void SetResponseTimeHistogram(const Aws::Vector<HistogramEntry>& value) { m_responseTimeHistogramHasBeenSet = true; m_responseTimeHistogram = value; }

    /**
     * <p>The response time histogram for the selected entities.</p>
     */
    inline void SetResponseTimeHistogram(Aws::Vector<HistogramEntry>&& value) { m_responseTimeHistogramHasBeenSet = true; m_responseTimeHistogram = std::move(value); }

    /**
     * <p>The response time histogram for the selected entities.</p>
     */
    inline TimeSeriesServiceStatistics& WithResponseTimeHistogram(const Aws::Vector<HistogramEntry>& value) { SetResponseTimeHistogram(value); return *this;}

    /**
     * <p>The response time histogram for the selected entities.</p>
     */
    inline TimeSeriesServiceStatistics& WithResponseTimeHistogram(Aws::Vector<HistogramEntry>&& value) { SetResponseTimeHistogram(std::move(value)); return *this;}

    /**
     * <p>The response time histogram for the selected entities.</p>
     */
    inline TimeSeriesServiceStatistics& AddResponseTimeHistogram(const HistogramEntry& value) { m_responseTimeHistogramHasBeenSet = true; m_responseTimeHistogram.push_back(value); return *this; }

    /**
     * <p>The response time histogram for the selected entities.</p>
     */
    inline TimeSeriesServiceStatistics& AddResponseTimeHistogram(HistogramEntry&& value) { m_responseTimeHistogramHasBeenSet = true; m_responseTimeHistogram.push_back(std::move(value)); return *this; }

  private:

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet;

    EdgeStatistics m_edgeSummaryStatistics;
    bool m_edgeSummaryStatisticsHasBeenSet;

    ServiceStatistics m_serviceSummaryStatistics;
    bool m_serviceSummaryStatisticsHasBeenSet;

    Aws::Vector<HistogramEntry> m_responseTimeHistogram;
    bool m_responseTimeHistogramHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
