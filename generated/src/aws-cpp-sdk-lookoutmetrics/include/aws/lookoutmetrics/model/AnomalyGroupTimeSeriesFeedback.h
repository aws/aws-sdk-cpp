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
    AWS_LOOKOUTMETRICS_API AnomalyGroupTimeSeriesFeedback() = default;
    AWS_LOOKOUTMETRICS_API AnomalyGroupTimeSeriesFeedback(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API AnomalyGroupTimeSeriesFeedback& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline const Aws::String& GetAnomalyGroupId() const { return m_anomalyGroupId; }
    inline bool AnomalyGroupIdHasBeenSet() const { return m_anomalyGroupIdHasBeenSet; }
    template<typename AnomalyGroupIdT = Aws::String>
    void SetAnomalyGroupId(AnomalyGroupIdT&& value) { m_anomalyGroupIdHasBeenSet = true; m_anomalyGroupId = std::forward<AnomalyGroupIdT>(value); }
    template<typename AnomalyGroupIdT = Aws::String>
    AnomalyGroupTimeSeriesFeedback& WithAnomalyGroupId(AnomalyGroupIdT&& value) { SetAnomalyGroupId(std::forward<AnomalyGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the metric.</p>
     */
    inline const Aws::String& GetTimeSeriesId() const { return m_timeSeriesId; }
    inline bool TimeSeriesIdHasBeenSet() const { return m_timeSeriesIdHasBeenSet; }
    template<typename TimeSeriesIdT = Aws::String>
    void SetTimeSeriesId(TimeSeriesIdT&& value) { m_timeSeriesIdHasBeenSet = true; m_timeSeriesId = std::forward<TimeSeriesIdT>(value); }
    template<typename TimeSeriesIdT = Aws::String>
    AnomalyGroupTimeSeriesFeedback& WithTimeSeriesId(TimeSeriesIdT&& value) { SetTimeSeriesId(std::forward<TimeSeriesIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Feedback on whether the metric is a legitimate anomaly.</p>
     */
    inline bool GetIsAnomaly() const { return m_isAnomaly; }
    inline bool IsAnomalyHasBeenSet() const { return m_isAnomalyHasBeenSet; }
    inline void SetIsAnomaly(bool value) { m_isAnomalyHasBeenSet = true; m_isAnomaly = value; }
    inline AnomalyGroupTimeSeriesFeedback& WithIsAnomaly(bool value) { SetIsAnomaly(value); return *this;}
    ///@}
  private:

    Aws::String m_anomalyGroupId;
    bool m_anomalyGroupIdHasBeenSet = false;

    Aws::String m_timeSeriesId;
    bool m_timeSeriesIdHasBeenSet = false;

    bool m_isAnomaly{false};
    bool m_isAnomalyHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
