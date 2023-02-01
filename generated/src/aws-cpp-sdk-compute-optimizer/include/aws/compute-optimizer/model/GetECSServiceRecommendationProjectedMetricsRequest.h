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
#include <utility>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

  /**
   */
  class GetECSServiceRecommendationProjectedMetricsRequest : public ComputeOptimizerRequest
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetECSServiceRecommendationProjectedMetricsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetECSServiceRecommendationProjectedMetrics"; }

    AWS_COMPUTEOPTIMIZER_API Aws::String SerializePayload() const override;

    AWS_COMPUTEOPTIMIZER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The ARN that identifies the ECS service. </p> <p> The following is the
     * format of the ARN: </p> <p>
     * <code>arn:aws:ecs:region:aws_account_id:service/cluster-name/service-name</code>
     * </p>
     */
    inline const Aws::String& GetServiceArn() const{ return m_serviceArn; }

    /**
     * <p> The ARN that identifies the ECS service. </p> <p> The following is the
     * format of the ARN: </p> <p>
     * <code>arn:aws:ecs:region:aws_account_id:service/cluster-name/service-name</code>
     * </p>
     */
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }

    /**
     * <p> The ARN that identifies the ECS service. </p> <p> The following is the
     * format of the ARN: </p> <p>
     * <code>arn:aws:ecs:region:aws_account_id:service/cluster-name/service-name</code>
     * </p>
     */
    inline void SetServiceArn(const Aws::String& value) { m_serviceArnHasBeenSet = true; m_serviceArn = value; }

    /**
     * <p> The ARN that identifies the ECS service. </p> <p> The following is the
     * format of the ARN: </p> <p>
     * <code>arn:aws:ecs:region:aws_account_id:service/cluster-name/service-name</code>
     * </p>
     */
    inline void SetServiceArn(Aws::String&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::move(value); }

    /**
     * <p> The ARN that identifies the ECS service. </p> <p> The following is the
     * format of the ARN: </p> <p>
     * <code>arn:aws:ecs:region:aws_account_id:service/cluster-name/service-name</code>
     * </p>
     */
    inline void SetServiceArn(const char* value) { m_serviceArnHasBeenSet = true; m_serviceArn.assign(value); }

    /**
     * <p> The ARN that identifies the ECS service. </p> <p> The following is the
     * format of the ARN: </p> <p>
     * <code>arn:aws:ecs:region:aws_account_id:service/cluster-name/service-name</code>
     * </p>
     */
    inline GetECSServiceRecommendationProjectedMetricsRequest& WithServiceArn(const Aws::String& value) { SetServiceArn(value); return *this;}

    /**
     * <p> The ARN that identifies the ECS service. </p> <p> The following is the
     * format of the ARN: </p> <p>
     * <code>arn:aws:ecs:region:aws_account_id:service/cluster-name/service-name</code>
     * </p>
     */
    inline GetECSServiceRecommendationProjectedMetricsRequest& WithServiceArn(Aws::String&& value) { SetServiceArn(std::move(value)); return *this;}

    /**
     * <p> The ARN that identifies the ECS service. </p> <p> The following is the
     * format of the ARN: </p> <p>
     * <code>arn:aws:ecs:region:aws_account_id:service/cluster-name/service-name</code>
     * </p>
     */
    inline GetECSServiceRecommendationProjectedMetricsRequest& WithServiceArn(const char* value) { SetServiceArn(value); return *this;}


    /**
     * <p> The statistic of the projected metrics. </p>
     */
    inline const MetricStatistic& GetStat() const{ return m_stat; }

    /**
     * <p> The statistic of the projected metrics. </p>
     */
    inline bool StatHasBeenSet() const { return m_statHasBeenSet; }

    /**
     * <p> The statistic of the projected metrics. </p>
     */
    inline void SetStat(const MetricStatistic& value) { m_statHasBeenSet = true; m_stat = value; }

    /**
     * <p> The statistic of the projected metrics. </p>
     */
    inline void SetStat(MetricStatistic&& value) { m_statHasBeenSet = true; m_stat = std::move(value); }

    /**
     * <p> The statistic of the projected metrics. </p>
     */
    inline GetECSServiceRecommendationProjectedMetricsRequest& WithStat(const MetricStatistic& value) { SetStat(value); return *this;}

    /**
     * <p> The statistic of the projected metrics. </p>
     */
    inline GetECSServiceRecommendationProjectedMetricsRequest& WithStat(MetricStatistic&& value) { SetStat(std::move(value)); return *this;}


    /**
     * <p> The granularity, in seconds, of the projected metrics data points. </p>
     */
    inline int GetPeriod() const{ return m_period; }

    /**
     * <p> The granularity, in seconds, of the projected metrics data points. </p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p> The granularity, in seconds, of the projected metrics data points. </p>
     */
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p> The granularity, in seconds, of the projected metrics data points. </p>
     */
    inline GetECSServiceRecommendationProjectedMetricsRequest& WithPeriod(int value) { SetPeriod(value); return *this;}


    /**
     * <p> The timestamp of the first projected metrics data point to return. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p> The timestamp of the first projected metrics data point to return. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p> The timestamp of the first projected metrics data point to return. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p> The timestamp of the first projected metrics data point to return. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p> The timestamp of the first projected metrics data point to return. </p>
     */
    inline GetECSServiceRecommendationProjectedMetricsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p> The timestamp of the first projected metrics data point to return. </p>
     */
    inline GetECSServiceRecommendationProjectedMetricsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p> The timestamp of the last projected metrics data point to return. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p> The timestamp of the last projected metrics data point to return. </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p> The timestamp of the last projected metrics data point to return. </p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p> The timestamp of the last projected metrics data point to return. </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p> The timestamp of the last projected metrics data point to return. </p>
     */
    inline GetECSServiceRecommendationProjectedMetricsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p> The timestamp of the last projected metrics data point to return. </p>
     */
    inline GetECSServiceRecommendationProjectedMetricsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet = false;

    MetricStatistic m_stat;
    bool m_statHasBeenSet = false;

    int m_period;
    bool m_periodHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
