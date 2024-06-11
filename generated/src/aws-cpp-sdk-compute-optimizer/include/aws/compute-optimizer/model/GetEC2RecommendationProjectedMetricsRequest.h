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
    AWS_COMPUTEOPTIMIZER_API GetEC2RecommendationProjectedMetricsRequest();

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
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }
    inline GetEC2RecommendationProjectedMetricsRequest& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}
    inline GetEC2RecommendationProjectedMetricsRequest& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}
    inline GetEC2RecommendationProjectedMetricsRequest& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistic of the projected metrics.</p>
     */
    inline const MetricStatistic& GetStat() const{ return m_stat; }
    inline bool StatHasBeenSet() const { return m_statHasBeenSet; }
    inline void SetStat(const MetricStatistic& value) { m_statHasBeenSet = true; m_stat = value; }
    inline void SetStat(MetricStatistic&& value) { m_statHasBeenSet = true; m_stat = std::move(value); }
    inline GetEC2RecommendationProjectedMetricsRequest& WithStat(const MetricStatistic& value) { SetStat(value); return *this;}
    inline GetEC2RecommendationProjectedMetricsRequest& WithStat(MetricStatistic&& value) { SetStat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The granularity, in seconds, of the projected metrics data points.</p>
     */
    inline int GetPeriod() const{ return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline GetEC2RecommendationProjectedMetricsRequest& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the first projected metrics data point to return.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline GetEC2RecommendationProjectedMetricsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GetEC2RecommendationProjectedMetricsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the last projected metrics data point to return.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline GetEC2RecommendationProjectedMetricsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetEC2RecommendationProjectedMetricsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object to specify the preferences for the Amazon EC2 recommendation
     * projected metrics to return in the response.</p>
     */
    inline const RecommendationPreferences& GetRecommendationPreferences() const{ return m_recommendationPreferences; }
    inline bool RecommendationPreferencesHasBeenSet() const { return m_recommendationPreferencesHasBeenSet; }
    inline void SetRecommendationPreferences(const RecommendationPreferences& value) { m_recommendationPreferencesHasBeenSet = true; m_recommendationPreferences = value; }
    inline void SetRecommendationPreferences(RecommendationPreferences&& value) { m_recommendationPreferencesHasBeenSet = true; m_recommendationPreferences = std::move(value); }
    inline GetEC2RecommendationProjectedMetricsRequest& WithRecommendationPreferences(const RecommendationPreferences& value) { SetRecommendationPreferences(value); return *this;}
    inline GetEC2RecommendationProjectedMetricsRequest& WithRecommendationPreferences(RecommendationPreferences&& value) { SetRecommendationPreferences(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    MetricStatistic m_stat;
    bool m_statHasBeenSet = false;

    int m_period;
    bool m_periodHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    RecommendationPreferences m_recommendationPreferences;
    bool m_recommendationPreferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
