/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   */
  class GetPredictiveScalingForecastRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API GetPredictiveScalingForecastRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPredictiveScalingForecast"; }

    AWS_AUTOSCALING_API Aws::String SerializePayload() const override;

  protected:
    AWS_AUTOSCALING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::move(value); }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline GetPredictiveScalingForecastRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline GetPredictiveScalingForecastRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline GetPredictiveScalingForecastRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}


    /**
     * <p>The name of the policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the policy.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the policy.</p>
     */
    inline GetPredictiveScalingForecastRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the policy.</p>
     */
    inline GetPredictiveScalingForecastRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the policy.</p>
     */
    inline GetPredictiveScalingForecastRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The inclusive start time of the time range for the forecast data to get. At
     * most, the date and time can be one year before the current date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The inclusive start time of the time range for the forecast data to get. At
     * most, the date and time can be one year before the current date and time.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The inclusive start time of the time range for the forecast data to get. At
     * most, the date and time can be one year before the current date and time.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The inclusive start time of the time range for the forecast data to get. At
     * most, the date and time can be one year before the current date and time.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The inclusive start time of the time range for the forecast data to get. At
     * most, the date and time can be one year before the current date and time.</p>
     */
    inline GetPredictiveScalingForecastRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The inclusive start time of the time range for the forecast data to get. At
     * most, the date and time can be one year before the current date and time.</p>
     */
    inline GetPredictiveScalingForecastRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The exclusive end time of the time range for the forecast data to get. The
     * maximum time duration between the start and end time is 30 days. </p>
     * <p>Although this parameter can accept a date and time that is more than two days
     * in the future, the availability of forecast data has limits. Amazon EC2 Auto
     * Scaling only issues forecasts for periods of two days in advance.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The exclusive end time of the time range for the forecast data to get. The
     * maximum time duration between the start and end time is 30 days. </p>
     * <p>Although this parameter can accept a date and time that is more than two days
     * in the future, the availability of forecast data has limits. Amazon EC2 Auto
     * Scaling only issues forecasts for periods of two days in advance.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The exclusive end time of the time range for the forecast data to get. The
     * maximum time duration between the start and end time is 30 days. </p>
     * <p>Although this parameter can accept a date and time that is more than two days
     * in the future, the availability of forecast data has limits. Amazon EC2 Auto
     * Scaling only issues forecasts for periods of two days in advance.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The exclusive end time of the time range for the forecast data to get. The
     * maximum time duration between the start and end time is 30 days. </p>
     * <p>Although this parameter can accept a date and time that is more than two days
     * in the future, the availability of forecast data has limits. Amazon EC2 Auto
     * Scaling only issues forecasts for periods of two days in advance.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The exclusive end time of the time range for the forecast data to get. The
     * maximum time duration between the start and end time is 30 days. </p>
     * <p>Although this parameter can accept a date and time that is more than two days
     * in the future, the availability of forecast data has limits. Amazon EC2 Auto
     * Scaling only issues forecasts for periods of two days in advance.</p>
     */
    inline GetPredictiveScalingForecastRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The exclusive end time of the time range for the forecast data to get. The
     * maximum time duration between the start and end time is 30 days. </p>
     * <p>Although this parameter can accept a date and time that is more than two days
     * in the future, the availability of forecast data has limits. Amazon EC2 Auto
     * Scaling only issues forecasts for periods of two days in advance.</p>
     */
    inline GetPredictiveScalingForecastRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
