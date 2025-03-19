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
    AWS_LOOKOUTMETRICS_API AnomalyGroup() = default;
    AWS_LOOKOUTMETRICS_API AnomalyGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API AnomalyGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start time for the group.</p>
     */
    inline const Aws::String& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::String>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::String>
    AnomalyGroup& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time for the group.</p>
     */
    inline const Aws::String& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::String>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::String>
    AnomalyGroup& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline const Aws::String& GetAnomalyGroupId() const { return m_anomalyGroupId; }
    inline bool AnomalyGroupIdHasBeenSet() const { return m_anomalyGroupIdHasBeenSet; }
    template<typename AnomalyGroupIdT = Aws::String>
    void SetAnomalyGroupId(AnomalyGroupIdT&& value) { m_anomalyGroupIdHasBeenSet = true; m_anomalyGroupId = std::forward<AnomalyGroupIdT>(value); }
    template<typename AnomalyGroupIdT = Aws::String>
    AnomalyGroup& WithAnomalyGroupId(AnomalyGroupIdT&& value) { SetAnomalyGroupId(std::forward<AnomalyGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity score of the group.</p>
     */
    inline double GetAnomalyGroupScore() const { return m_anomalyGroupScore; }
    inline bool AnomalyGroupScoreHasBeenSet() const { return m_anomalyGroupScoreHasBeenSet; }
    inline void SetAnomalyGroupScore(double value) { m_anomalyGroupScoreHasBeenSet = true; m_anomalyGroupScore = value; }
    inline AnomalyGroup& WithAnomalyGroupScore(double value) { SetAnomalyGroupScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the primary affected measure for the group.</p>
     */
    inline const Aws::String& GetPrimaryMetricName() const { return m_primaryMetricName; }
    inline bool PrimaryMetricNameHasBeenSet() const { return m_primaryMetricNameHasBeenSet; }
    template<typename PrimaryMetricNameT = Aws::String>
    void SetPrimaryMetricName(PrimaryMetricNameT&& value) { m_primaryMetricNameHasBeenSet = true; m_primaryMetricName = std::forward<PrimaryMetricNameT>(value); }
    template<typename PrimaryMetricNameT = Aws::String>
    AnomalyGroup& WithPrimaryMetricName(PrimaryMetricNameT&& value) { SetPrimaryMetricName(std::forward<PrimaryMetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of measures affected by the anomaly.</p>
     */
    inline const Aws::Vector<MetricLevelImpact>& GetMetricLevelImpactList() const { return m_metricLevelImpactList; }
    inline bool MetricLevelImpactListHasBeenSet() const { return m_metricLevelImpactListHasBeenSet; }
    template<typename MetricLevelImpactListT = Aws::Vector<MetricLevelImpact>>
    void SetMetricLevelImpactList(MetricLevelImpactListT&& value) { m_metricLevelImpactListHasBeenSet = true; m_metricLevelImpactList = std::forward<MetricLevelImpactListT>(value); }
    template<typename MetricLevelImpactListT = Aws::Vector<MetricLevelImpact>>
    AnomalyGroup& WithMetricLevelImpactList(MetricLevelImpactListT&& value) { SetMetricLevelImpactList(std::forward<MetricLevelImpactListT>(value)); return *this;}
    template<typename MetricLevelImpactListT = MetricLevelImpact>
    AnomalyGroup& AddMetricLevelImpactList(MetricLevelImpactListT&& value) { m_metricLevelImpactListHasBeenSet = true; m_metricLevelImpactList.emplace_back(std::forward<MetricLevelImpactListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_anomalyGroupId;
    bool m_anomalyGroupIdHasBeenSet = false;

    double m_anomalyGroupScore{0.0};
    bool m_anomalyGroupScoreHasBeenSet = false;

    Aws::String m_primaryMetricName;
    bool m_primaryMetricNameHasBeenSet = false;

    Aws::Vector<MetricLevelImpact> m_metricLevelImpactList;
    bool m_metricLevelImpactListHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
