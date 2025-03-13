/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/ComputeOptimizerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/MetricStatistic.h>
#include <aws/core/utils/DateTime.h>
#include <aws/compute-optimizer/model/RecommendationPreferences.h>
#include <utility>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

  /**
   */
  class GetEC2RecommendationProjectedMetricsRequest : public ComputeOptimizerRequest
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetEC2RecommendationProjectedMetricsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEC2RecommendationProjectedMetrics"; }

    AWS_COMPUTEOPTIMIZER_API Aws::String SerializePayload() const override;

    AWS_COMPUTEOPTIMIZER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the instances for which to return
     * recommendation projected metrics.</p>
     */
    inline const Aws::String& GetInstanceArn() const { return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    template<typename InstanceArnT = Aws::String>
    void SetInstanceArn(InstanceArnT&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::forward<InstanceArnT>(value); }
    template<typename InstanceArnT = Aws::String>
    GetEC2RecommendationProjectedMetricsRequest& WithInstanceArn(InstanceArnT&& value) { SetInstanceArn(std::forward<InstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistic of the projected metrics.</p>
     */
    inline MetricStatistic GetStat() const { return m_stat; }
    inline bool StatHasBeenSet() const { return m_statHasBeenSet; }
    inline void SetStat(MetricStatistic value) { m_statHasBeenSet = true; m_stat = value; }
    inline GetEC2RecommendationProjectedMetricsRequest& WithStat(MetricStatistic value) { SetStat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The granularity, in seconds, of the projected metrics data points.</p>
     */
    inline int GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline GetEC2RecommendationProjectedMetricsRequest& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the first projected metrics data point to return.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetEC2RecommendationProjectedMetricsRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the last projected metrics data point to return.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetEC2RecommendationProjectedMetricsRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object to specify the preferences for the Amazon EC2 recommendation
     * projected metrics to return in the response.</p>
     */
    inline const RecommendationPreferences& GetRecommendationPreferences() const { return m_recommendationPreferences; }
    inline bool RecommendationPreferencesHasBeenSet() const { return m_recommendationPreferencesHasBeenSet; }
    template<typename RecommendationPreferencesT = RecommendationPreferences>
    void SetRecommendationPreferences(RecommendationPreferencesT&& value) { m_recommendationPreferencesHasBeenSet = true; m_recommendationPreferences = std::forward<RecommendationPreferencesT>(value); }
    template<typename RecommendationPreferencesT = RecommendationPreferences>
    GetEC2RecommendationProjectedMetricsRequest& WithRecommendationPreferences(RecommendationPreferencesT&& value) { SetRecommendationPreferences(std::forward<RecommendationPreferencesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    MetricStatistic m_stat{MetricStatistic::NOT_SET};
    bool m_statHasBeenSet = false;

    int m_period{0};
    bool m_periodHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    RecommendationPreferences m_recommendationPreferences;
    bool m_recommendationPreferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
