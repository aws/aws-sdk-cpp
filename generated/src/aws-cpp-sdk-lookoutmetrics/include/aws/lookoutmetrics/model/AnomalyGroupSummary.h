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
   * <p>Details about a group of anomalous metrics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/AnomalyGroupSummary">AWS
   * API Reference</a></p>
   */
  class AnomalyGroupSummary
  {
  public:
    AWS_LOOKOUTMETRICS_API AnomalyGroupSummary();
    AWS_LOOKOUTMETRICS_API AnomalyGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API AnomalyGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start time for the group.</p>
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }
    inline AnomalyGroupSummary& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}
    inline AnomalyGroupSummary& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}
    inline AnomalyGroupSummary& WithStartTime(const char* value) { SetStartTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time for the group.</p>
     */
    inline const Aws::String& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::String& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::String&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline void SetEndTime(const char* value) { m_endTimeHasBeenSet = true; m_endTime.assign(value); }
    inline AnomalyGroupSummary& WithEndTime(const Aws::String& value) { SetEndTime(value); return *this;}
    inline AnomalyGroupSummary& WithEndTime(Aws::String&& value) { SetEndTime(std::move(value)); return *this;}
    inline AnomalyGroupSummary& WithEndTime(const char* value) { SetEndTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline const Aws::String& GetAnomalyGroupId() const{ return m_anomalyGroupId; }
    inline bool AnomalyGroupIdHasBeenSet() const { return m_anomalyGroupIdHasBeenSet; }
    inline void SetAnomalyGroupId(const Aws::String& value) { m_anomalyGroupIdHasBeenSet = true; m_anomalyGroupId = value; }
    inline void SetAnomalyGroupId(Aws::String&& value) { m_anomalyGroupIdHasBeenSet = true; m_anomalyGroupId = std::move(value); }
    inline void SetAnomalyGroupId(const char* value) { m_anomalyGroupIdHasBeenSet = true; m_anomalyGroupId.assign(value); }
    inline AnomalyGroupSummary& WithAnomalyGroupId(const Aws::String& value) { SetAnomalyGroupId(value); return *this;}
    inline AnomalyGroupSummary& WithAnomalyGroupId(Aws::String&& value) { SetAnomalyGroupId(std::move(value)); return *this;}
    inline AnomalyGroupSummary& WithAnomalyGroupId(const char* value) { SetAnomalyGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity score of the group.</p>
     */
    inline double GetAnomalyGroupScore() const{ return m_anomalyGroupScore; }
    inline bool AnomalyGroupScoreHasBeenSet() const { return m_anomalyGroupScoreHasBeenSet; }
    inline void SetAnomalyGroupScore(double value) { m_anomalyGroupScoreHasBeenSet = true; m_anomalyGroupScore = value; }
    inline AnomalyGroupSummary& WithAnomalyGroupScore(double value) { SetAnomalyGroupScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the primary affected measure for the group.</p>
     */
    inline const Aws::String& GetPrimaryMetricName() const{ return m_primaryMetricName; }
    inline bool PrimaryMetricNameHasBeenSet() const { return m_primaryMetricNameHasBeenSet; }
    inline void SetPrimaryMetricName(const Aws::String& value) { m_primaryMetricNameHasBeenSet = true; m_primaryMetricName = value; }
    inline void SetPrimaryMetricName(Aws::String&& value) { m_primaryMetricNameHasBeenSet = true; m_primaryMetricName = std::move(value); }
    inline void SetPrimaryMetricName(const char* value) { m_primaryMetricNameHasBeenSet = true; m_primaryMetricName.assign(value); }
    inline AnomalyGroupSummary& WithPrimaryMetricName(const Aws::String& value) { SetPrimaryMetricName(value); return *this;}
    inline AnomalyGroupSummary& WithPrimaryMetricName(Aws::String&& value) { SetPrimaryMetricName(std::move(value)); return *this;}
    inline AnomalyGroupSummary& WithPrimaryMetricName(const char* value) { SetPrimaryMetricName(value); return *this;}
    ///@}
  private:

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_anomalyGroupId;
    bool m_anomalyGroupIdHasBeenSet = false;

    double m_anomalyGroupScore;
    bool m_anomalyGroupScoreHasBeenSet = false;

    Aws::String m_primaryMetricName;
    bool m_primaryMetricNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
