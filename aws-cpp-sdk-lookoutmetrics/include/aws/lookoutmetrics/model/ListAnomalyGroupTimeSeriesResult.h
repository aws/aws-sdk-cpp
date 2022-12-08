/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutmetrics/model/TimeSeries.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LookoutMetrics
{
namespace Model
{
  class ListAnomalyGroupTimeSeriesResult
  {
  public:
    AWS_LOOKOUTMETRICS_API ListAnomalyGroupTimeSeriesResult();
    AWS_LOOKOUTMETRICS_API ListAnomalyGroupTimeSeriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API ListAnomalyGroupTimeSeriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline const Aws::String& GetAnomalyGroupId() const{ return m_anomalyGroupId; }

    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline void SetAnomalyGroupId(const Aws::String& value) { m_anomalyGroupId = value; }

    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline void SetAnomalyGroupId(Aws::String&& value) { m_anomalyGroupId = std::move(value); }

    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline void SetAnomalyGroupId(const char* value) { m_anomalyGroupId.assign(value); }

    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline ListAnomalyGroupTimeSeriesResult& WithAnomalyGroupId(const Aws::String& value) { SetAnomalyGroupId(value); return *this;}

    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline ListAnomalyGroupTimeSeriesResult& WithAnomalyGroupId(Aws::String&& value) { SetAnomalyGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline ListAnomalyGroupTimeSeriesResult& WithAnomalyGroupId(const char* value) { SetAnomalyGroupId(value); return *this;}


    /**
     * <p>The name of the measure field.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the measure field.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricName = value; }

    /**
     * <p>The name of the measure field.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricName = std::move(value); }

    /**
     * <p>The name of the measure field.</p>
     */
    inline void SetMetricName(const char* value) { m_metricName.assign(value); }

    /**
     * <p>The name of the measure field.</p>
     */
    inline ListAnomalyGroupTimeSeriesResult& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the measure field.</p>
     */
    inline ListAnomalyGroupTimeSeriesResult& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the measure field.</p>
     */
    inline ListAnomalyGroupTimeSeriesResult& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>Timestamps for the anomalous metrics.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTimestampList() const{ return m_timestampList; }

    /**
     * <p>Timestamps for the anomalous metrics.</p>
     */
    inline void SetTimestampList(const Aws::Vector<Aws::String>& value) { m_timestampList = value; }

    /**
     * <p>Timestamps for the anomalous metrics.</p>
     */
    inline void SetTimestampList(Aws::Vector<Aws::String>&& value) { m_timestampList = std::move(value); }

    /**
     * <p>Timestamps for the anomalous metrics.</p>
     */
    inline ListAnomalyGroupTimeSeriesResult& WithTimestampList(const Aws::Vector<Aws::String>& value) { SetTimestampList(value); return *this;}

    /**
     * <p>Timestamps for the anomalous metrics.</p>
     */
    inline ListAnomalyGroupTimeSeriesResult& WithTimestampList(Aws::Vector<Aws::String>&& value) { SetTimestampList(std::move(value)); return *this;}

    /**
     * <p>Timestamps for the anomalous metrics.</p>
     */
    inline ListAnomalyGroupTimeSeriesResult& AddTimestampList(const Aws::String& value) { m_timestampList.push_back(value); return *this; }

    /**
     * <p>Timestamps for the anomalous metrics.</p>
     */
    inline ListAnomalyGroupTimeSeriesResult& AddTimestampList(Aws::String&& value) { m_timestampList.push_back(std::move(value)); return *this; }

    /**
     * <p>Timestamps for the anomalous metrics.</p>
     */
    inline ListAnomalyGroupTimeSeriesResult& AddTimestampList(const char* value) { m_timestampList.push_back(value); return *this; }


    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListAnomalyGroupTimeSeriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListAnomalyGroupTimeSeriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListAnomalyGroupTimeSeriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of anomalous metrics.</p>
     */
    inline const Aws::Vector<TimeSeries>& GetTimeSeriesList() const{ return m_timeSeriesList; }

    /**
     * <p>A list of anomalous metrics.</p>
     */
    inline void SetTimeSeriesList(const Aws::Vector<TimeSeries>& value) { m_timeSeriesList = value; }

    /**
     * <p>A list of anomalous metrics.</p>
     */
    inline void SetTimeSeriesList(Aws::Vector<TimeSeries>&& value) { m_timeSeriesList = std::move(value); }

    /**
     * <p>A list of anomalous metrics.</p>
     */
    inline ListAnomalyGroupTimeSeriesResult& WithTimeSeriesList(const Aws::Vector<TimeSeries>& value) { SetTimeSeriesList(value); return *this;}

    /**
     * <p>A list of anomalous metrics.</p>
     */
    inline ListAnomalyGroupTimeSeriesResult& WithTimeSeriesList(Aws::Vector<TimeSeries>&& value) { SetTimeSeriesList(std::move(value)); return *this;}

    /**
     * <p>A list of anomalous metrics.</p>
     */
    inline ListAnomalyGroupTimeSeriesResult& AddTimeSeriesList(const TimeSeries& value) { m_timeSeriesList.push_back(value); return *this; }

    /**
     * <p>A list of anomalous metrics.</p>
     */
    inline ListAnomalyGroupTimeSeriesResult& AddTimeSeriesList(TimeSeries&& value) { m_timeSeriesList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_anomalyGroupId;

    Aws::String m_metricName;

    Aws::Vector<Aws::String> m_timestampList;

    Aws::String m_nextToken;

    Aws::Vector<TimeSeries> m_timeSeriesList;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
