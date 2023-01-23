/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>An anomalous metric in an anomaly group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/AnomalyGroupTimeSeries">AWS
   * API Reference</a></p>
   */
  class AnomalyGroupTimeSeries
  {
  public:
    AWS_LOOKOUTMETRICS_API AnomalyGroupTimeSeries();
    AWS_LOOKOUTMETRICS_API AnomalyGroupTimeSeries(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API AnomalyGroupTimeSeries& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline const Aws::String& GetAnomalyGroupId() const{ return m_anomalyGroupId; }

    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline bool AnomalyGroupIdHasBeenSet() const { return m_anomalyGroupIdHasBeenSet; }

    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline void SetAnomalyGroupId(const Aws::String& value) { m_anomalyGroupIdHasBeenSet = true; m_anomalyGroupId = value; }

    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline void SetAnomalyGroupId(Aws::String&& value) { m_anomalyGroupIdHasBeenSet = true; m_anomalyGroupId = std::move(value); }

    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline void SetAnomalyGroupId(const char* value) { m_anomalyGroupIdHasBeenSet = true; m_anomalyGroupId.assign(value); }

    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline AnomalyGroupTimeSeries& WithAnomalyGroupId(const Aws::String& value) { SetAnomalyGroupId(value); return *this;}

    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline AnomalyGroupTimeSeries& WithAnomalyGroupId(Aws::String&& value) { SetAnomalyGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline AnomalyGroupTimeSeries& WithAnomalyGroupId(const char* value) { SetAnomalyGroupId(value); return *this;}


    /**
     * <p>The ID of the metric.</p>
     */
    inline const Aws::String& GetTimeSeriesId() const{ return m_timeSeriesId; }

    /**
     * <p>The ID of the metric.</p>
     */
    inline bool TimeSeriesIdHasBeenSet() const { return m_timeSeriesIdHasBeenSet; }

    /**
     * <p>The ID of the metric.</p>
     */
    inline void SetTimeSeriesId(const Aws::String& value) { m_timeSeriesIdHasBeenSet = true; m_timeSeriesId = value; }

    /**
     * <p>The ID of the metric.</p>
     */
    inline void SetTimeSeriesId(Aws::String&& value) { m_timeSeriesIdHasBeenSet = true; m_timeSeriesId = std::move(value); }

    /**
     * <p>The ID of the metric.</p>
     */
    inline void SetTimeSeriesId(const char* value) { m_timeSeriesIdHasBeenSet = true; m_timeSeriesId.assign(value); }

    /**
     * <p>The ID of the metric.</p>
     */
    inline AnomalyGroupTimeSeries& WithTimeSeriesId(const Aws::String& value) { SetTimeSeriesId(value); return *this;}

    /**
     * <p>The ID of the metric.</p>
     */
    inline AnomalyGroupTimeSeries& WithTimeSeriesId(Aws::String&& value) { SetTimeSeriesId(std::move(value)); return *this;}

    /**
     * <p>The ID of the metric.</p>
     */
    inline AnomalyGroupTimeSeries& WithTimeSeriesId(const char* value) { SetTimeSeriesId(value); return *this;}

  private:

    Aws::String m_anomalyGroupId;
    bool m_anomalyGroupIdHasBeenSet = false;

    Aws::String m_timeSeriesId;
    bool m_timeSeriesIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
