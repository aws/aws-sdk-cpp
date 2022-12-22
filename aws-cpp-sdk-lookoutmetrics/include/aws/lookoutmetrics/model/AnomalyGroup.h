/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutmetrics/model/MetricLevelImpact.h>
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
   * <p>A group of anomalous metrics</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/AnomalyGroup">AWS
   * API Reference</a></p>
   */
  class AnomalyGroup
  {
  public:
    AWS_LOOKOUTMETRICS_API AnomalyGroup();
    AWS_LOOKOUTMETRICS_API AnomalyGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API AnomalyGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The start time for the group.</p>
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time for the group.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time for the group.</p>
     */
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time for the group.</p>
     */
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time for the group.</p>
     */
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }

    /**
     * <p>The start time for the group.</p>
     */
    inline AnomalyGroup& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time for the group.</p>
     */
    inline AnomalyGroup& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}

    /**
     * <p>The start time for the group.</p>
     */
    inline AnomalyGroup& WithStartTime(const char* value) { SetStartTime(value); return *this;}


    /**
     * <p>The end time for the group.</p>
     */
    inline const Aws::String& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time for the group.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time for the group.</p>
     */
    inline void SetEndTime(const Aws::String& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time for the group.</p>
     */
    inline void SetEndTime(Aws::String&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end time for the group.</p>
     */
    inline void SetEndTime(const char* value) { m_endTimeHasBeenSet = true; m_endTime.assign(value); }

    /**
     * <p>The end time for the group.</p>
     */
    inline AnomalyGroup& WithEndTime(const Aws::String& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time for the group.</p>
     */
    inline AnomalyGroup& WithEndTime(Aws::String&& value) { SetEndTime(std::move(value)); return *this;}

    /**
     * <p>The end time for the group.</p>
     */
    inline AnomalyGroup& WithEndTime(const char* value) { SetEndTime(value); return *this;}


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
    inline AnomalyGroup& WithAnomalyGroupId(const Aws::String& value) { SetAnomalyGroupId(value); return *this;}

    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline AnomalyGroup& WithAnomalyGroupId(Aws::String&& value) { SetAnomalyGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline AnomalyGroup& WithAnomalyGroupId(const char* value) { SetAnomalyGroupId(value); return *this;}


    /**
     * <p>The severity score of the group.</p>
     */
    inline double GetAnomalyGroupScore() const{ return m_anomalyGroupScore; }

    /**
     * <p>The severity score of the group.</p>
     */
    inline bool AnomalyGroupScoreHasBeenSet() const { return m_anomalyGroupScoreHasBeenSet; }

    /**
     * <p>The severity score of the group.</p>
     */
    inline void SetAnomalyGroupScore(double value) { m_anomalyGroupScoreHasBeenSet = true; m_anomalyGroupScore = value; }

    /**
     * <p>The severity score of the group.</p>
     */
    inline AnomalyGroup& WithAnomalyGroupScore(double value) { SetAnomalyGroupScore(value); return *this;}


    /**
     * <p>The name of the primary affected measure for the group.</p>
     */
    inline const Aws::String& GetPrimaryMetricName() const{ return m_primaryMetricName; }

    /**
     * <p>The name of the primary affected measure for the group.</p>
     */
    inline bool PrimaryMetricNameHasBeenSet() const { return m_primaryMetricNameHasBeenSet; }

    /**
     * <p>The name of the primary affected measure for the group.</p>
     */
    inline void SetPrimaryMetricName(const Aws::String& value) { m_primaryMetricNameHasBeenSet = true; m_primaryMetricName = value; }

    /**
     * <p>The name of the primary affected measure for the group.</p>
     */
    inline void SetPrimaryMetricName(Aws::String&& value) { m_primaryMetricNameHasBeenSet = true; m_primaryMetricName = std::move(value); }

    /**
     * <p>The name of the primary affected measure for the group.</p>
     */
    inline void SetPrimaryMetricName(const char* value) { m_primaryMetricNameHasBeenSet = true; m_primaryMetricName.assign(value); }

    /**
     * <p>The name of the primary affected measure for the group.</p>
     */
    inline AnomalyGroup& WithPrimaryMetricName(const Aws::String& value) { SetPrimaryMetricName(value); return *this;}

    /**
     * <p>The name of the primary affected measure for the group.</p>
     */
    inline AnomalyGroup& WithPrimaryMetricName(Aws::String&& value) { SetPrimaryMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the primary affected measure for the group.</p>
     */
    inline AnomalyGroup& WithPrimaryMetricName(const char* value) { SetPrimaryMetricName(value); return *this;}


    /**
     * <p>A list of measures affected by the anomaly.</p>
     */
    inline const Aws::Vector<MetricLevelImpact>& GetMetricLevelImpactList() const{ return m_metricLevelImpactList; }

    /**
     * <p>A list of measures affected by the anomaly.</p>
     */
    inline bool MetricLevelImpactListHasBeenSet() const { return m_metricLevelImpactListHasBeenSet; }

    /**
     * <p>A list of measures affected by the anomaly.</p>
     */
    inline void SetMetricLevelImpactList(const Aws::Vector<MetricLevelImpact>& value) { m_metricLevelImpactListHasBeenSet = true; m_metricLevelImpactList = value; }

    /**
     * <p>A list of measures affected by the anomaly.</p>
     */
    inline void SetMetricLevelImpactList(Aws::Vector<MetricLevelImpact>&& value) { m_metricLevelImpactListHasBeenSet = true; m_metricLevelImpactList = std::move(value); }

    /**
     * <p>A list of measures affected by the anomaly.</p>
     */
    inline AnomalyGroup& WithMetricLevelImpactList(const Aws::Vector<MetricLevelImpact>& value) { SetMetricLevelImpactList(value); return *this;}

    /**
     * <p>A list of measures affected by the anomaly.</p>
     */
    inline AnomalyGroup& WithMetricLevelImpactList(Aws::Vector<MetricLevelImpact>&& value) { SetMetricLevelImpactList(std::move(value)); return *this;}

    /**
     * <p>A list of measures affected by the anomaly.</p>
     */
    inline AnomalyGroup& AddMetricLevelImpactList(const MetricLevelImpact& value) { m_metricLevelImpactListHasBeenSet = true; m_metricLevelImpactList.push_back(value); return *this; }

    /**
     * <p>A list of measures affected by the anomaly.</p>
     */
    inline AnomalyGroup& AddMetricLevelImpactList(MetricLevelImpact&& value) { m_metricLevelImpactListHasBeenSet = true; m_metricLevelImpactList.push_back(std::move(value)); return *this; }

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

    Aws::Vector<MetricLevelImpact> m_metricLevelImpactList;
    bool m_metricLevelImpactListHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
