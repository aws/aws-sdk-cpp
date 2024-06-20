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
  class GetRDSDatabaseRecommendationProjectedMetricsRequest : public ComputeOptimizerRequest
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetRDSDatabaseRecommendationProjectedMetricsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRDSDatabaseRecommendationProjectedMetrics"; }

    AWS_COMPUTEOPTIMIZER_API Aws::String SerializePayload() const override;

    AWS_COMPUTEOPTIMIZER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The ARN that identifies the Amazon RDS. </p> <p> The following is the format
     * of the ARN: </p> <p>
     * <code>arn:aws:rds:{region}:{accountId}:db:{resourceName}</code> </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline GetRDSDatabaseRecommendationProjectedMetricsRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline GetRDSDatabaseRecommendationProjectedMetricsRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline GetRDSDatabaseRecommendationProjectedMetricsRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The statistic of the projected metrics. </p>
     */
    inline const MetricStatistic& GetStat() const{ return m_stat; }
    inline bool StatHasBeenSet() const { return m_statHasBeenSet; }
    inline void SetStat(const MetricStatistic& value) { m_statHasBeenSet = true; m_stat = value; }
    inline void SetStat(MetricStatistic&& value) { m_statHasBeenSet = true; m_stat = std::move(value); }
    inline GetRDSDatabaseRecommendationProjectedMetricsRequest& WithStat(const MetricStatistic& value) { SetStat(value); return *this;}
    inline GetRDSDatabaseRecommendationProjectedMetricsRequest& WithStat(MetricStatistic&& value) { SetStat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The granularity, in seconds, of the projected metrics data points. </p>
     */
    inline int GetPeriod() const{ return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline GetRDSDatabaseRecommendationProjectedMetricsRequest& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp of the first projected metrics data point to return. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline GetRDSDatabaseRecommendationProjectedMetricsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GetRDSDatabaseRecommendationProjectedMetricsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp of the last projected metrics data point to return. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline GetRDSDatabaseRecommendationProjectedMetricsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetRDSDatabaseRecommendationProjectedMetricsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const RecommendationPreferences& GetRecommendationPreferences() const{ return m_recommendationPreferences; }
    inline bool RecommendationPreferencesHasBeenSet() const { return m_recommendationPreferencesHasBeenSet; }
    inline void SetRecommendationPreferences(const RecommendationPreferences& value) { m_recommendationPreferencesHasBeenSet = true; m_recommendationPreferences = value; }
    inline void SetRecommendationPreferences(RecommendationPreferences&& value) { m_recommendationPreferencesHasBeenSet = true; m_recommendationPreferences = std::move(value); }
    inline GetRDSDatabaseRecommendationProjectedMetricsRequest& WithRecommendationPreferences(const RecommendationPreferences& value) { SetRecommendationPreferences(value); return *this;}
    inline GetRDSDatabaseRecommendationProjectedMetricsRequest& WithRecommendationPreferences(RecommendationPreferences&& value) { SetRecommendationPreferences(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

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
