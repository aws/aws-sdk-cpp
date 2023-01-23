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
   * <p>Feedback for an anomalous metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/AnomalyGroupTimeSeriesFeedback">AWS
   * API Reference</a></p>
   */
  class AnomalyGroupTimeSeriesFeedback
  {
  public:
    AWS_LOOKOUTMETRICS_API AnomalyGroupTimeSeriesFeedback();
    AWS_LOOKOUTMETRICS_API AnomalyGroupTimeSeriesFeedback(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API AnomalyGroupTimeSeriesFeedback& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline AnomalyGroupTimeSeriesFeedback& WithAnomalyGroupId(const Aws::String& value) { SetAnomalyGroupId(value); return *this;}

    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline AnomalyGroupTimeSeriesFeedback& WithAnomalyGroupId(Aws::String&& value) { SetAnomalyGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline AnomalyGroupTimeSeriesFeedback& WithAnomalyGroupId(const char* value) { SetAnomalyGroupId(value); return *this;}


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
    inline AnomalyGroupTimeSeriesFeedback& WithTimeSeriesId(const Aws::String& value) { SetTimeSeriesId(value); return *this;}

    /**
     * <p>The ID of the metric.</p>
     */
    inline AnomalyGroupTimeSeriesFeedback& WithTimeSeriesId(Aws::String&& value) { SetTimeSeriesId(std::move(value)); return *this;}

    /**
     * <p>The ID of the metric.</p>
     */
    inline AnomalyGroupTimeSeriesFeedback& WithTimeSeriesId(const char* value) { SetTimeSeriesId(value); return *this;}


    /**
     * <p>Feedback on whether the metric is a legitimate anomaly.</p>
     */
    inline bool GetIsAnomaly() const{ return m_isAnomaly; }

    /**
     * <p>Feedback on whether the metric is a legitimate anomaly.</p>
     */
    inline bool IsAnomalyHasBeenSet() const { return m_isAnomalyHasBeenSet; }

    /**
     * <p>Feedback on whether the metric is a legitimate anomaly.</p>
     */
    inline void SetIsAnomaly(bool value) { m_isAnomalyHasBeenSet = true; m_isAnomaly = value; }

    /**
     * <p>Feedback on whether the metric is a legitimate anomaly.</p>
     */
    inline AnomalyGroupTimeSeriesFeedback& WithIsAnomaly(bool value) { SetIsAnomaly(value); return *this;}

  private:

    Aws::String m_anomalyGroupId;
    bool m_anomalyGroupIdHasBeenSet = false;

    Aws::String m_timeSeriesId;
    bool m_timeSeriesIdHasBeenSet = false;

    bool m_isAnomaly;
    bool m_isAnomalyHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
