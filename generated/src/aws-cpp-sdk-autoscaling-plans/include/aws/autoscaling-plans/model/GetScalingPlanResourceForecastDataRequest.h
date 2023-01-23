/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/autoscaling-plans/AutoScalingPlansRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling-plans/model/ServiceNamespace.h>
#include <aws/autoscaling-plans/model/ScalableDimension.h>
#include <aws/autoscaling-plans/model/ForecastDataType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace AutoScalingPlans
{
namespace Model
{

  /**
   */
  class GetScalingPlanResourceForecastDataRequest : public AutoScalingPlansRequest
  {
  public:
    AWS_AUTOSCALINGPLANS_API GetScalingPlanResourceForecastDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetScalingPlanResourceForecastData"; }

    AWS_AUTOSCALINGPLANS_API Aws::String SerializePayload() const override;

    AWS_AUTOSCALINGPLANS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the scaling plan.</p>
     */
    inline const Aws::String& GetScalingPlanName() const{ return m_scalingPlanName; }

    /**
     * <p>The name of the scaling plan.</p>
     */
    inline bool ScalingPlanNameHasBeenSet() const { return m_scalingPlanNameHasBeenSet; }

    /**
     * <p>The name of the scaling plan.</p>
     */
    inline void SetScalingPlanName(const Aws::String& value) { m_scalingPlanNameHasBeenSet = true; m_scalingPlanName = value; }

    /**
     * <p>The name of the scaling plan.</p>
     */
    inline void SetScalingPlanName(Aws::String&& value) { m_scalingPlanNameHasBeenSet = true; m_scalingPlanName = std::move(value); }

    /**
     * <p>The name of the scaling plan.</p>
     */
    inline void SetScalingPlanName(const char* value) { m_scalingPlanNameHasBeenSet = true; m_scalingPlanName.assign(value); }

    /**
     * <p>The name of the scaling plan.</p>
     */
    inline GetScalingPlanResourceForecastDataRequest& WithScalingPlanName(const Aws::String& value) { SetScalingPlanName(value); return *this;}

    /**
     * <p>The name of the scaling plan.</p>
     */
    inline GetScalingPlanResourceForecastDataRequest& WithScalingPlanName(Aws::String&& value) { SetScalingPlanName(std::move(value)); return *this;}

    /**
     * <p>The name of the scaling plan.</p>
     */
    inline GetScalingPlanResourceForecastDataRequest& WithScalingPlanName(const char* value) { SetScalingPlanName(value); return *this;}


    /**
     * <p>The version number of the scaling plan. Currently, the only valid value is
     * <code>1</code>.</p>
     */
    inline long long GetScalingPlanVersion() const{ return m_scalingPlanVersion; }

    /**
     * <p>The version number of the scaling plan. Currently, the only valid value is
     * <code>1</code>.</p>
     */
    inline bool ScalingPlanVersionHasBeenSet() const { return m_scalingPlanVersionHasBeenSet; }

    /**
     * <p>The version number of the scaling plan. Currently, the only valid value is
     * <code>1</code>.</p>
     */
    inline void SetScalingPlanVersion(long long value) { m_scalingPlanVersionHasBeenSet = true; m_scalingPlanVersion = value; }

    /**
     * <p>The version number of the scaling plan. Currently, the only valid value is
     * <code>1</code>.</p>
     */
    inline GetScalingPlanResourceForecastDataRequest& WithScalingPlanVersion(long long value) { SetScalingPlanVersion(value); return *this;}


    /**
     * <p>The namespace of the AWS service. The only valid value is
     * <code>autoscaling</code>. </p>
     */
    inline const ServiceNamespace& GetServiceNamespace() const{ return m_serviceNamespace; }

    /**
     * <p>The namespace of the AWS service. The only valid value is
     * <code>autoscaling</code>. </p>
     */
    inline bool ServiceNamespaceHasBeenSet() const { return m_serviceNamespaceHasBeenSet; }

    /**
     * <p>The namespace of the AWS service. The only valid value is
     * <code>autoscaling</code>. </p>
     */
    inline void SetServiceNamespace(const ServiceNamespace& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }

    /**
     * <p>The namespace of the AWS service. The only valid value is
     * <code>autoscaling</code>. </p>
     */
    inline void SetServiceNamespace(ServiceNamespace&& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = std::move(value); }

    /**
     * <p>The namespace of the AWS service. The only valid value is
     * <code>autoscaling</code>. </p>
     */
    inline GetScalingPlanResourceForecastDataRequest& WithServiceNamespace(const ServiceNamespace& value) { SetServiceNamespace(value); return *this;}

    /**
     * <p>The namespace of the AWS service. The only valid value is
     * <code>autoscaling</code>. </p>
     */
    inline GetScalingPlanResourceForecastDataRequest& WithServiceNamespace(ServiceNamespace&& value) { SetServiceNamespace(std::move(value)); return *this;}


    /**
     * <p>The ID of the resource. This string consists of a prefix
     * (<code>autoScalingGroup</code>) followed by the name of a specified Auto Scaling
     * group (<code>my-asg</code>). Example: <code>autoScalingGroup/my-asg</code>. </p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the resource. This string consists of a prefix
     * (<code>autoScalingGroup</code>) followed by the name of a specified Auto Scaling
     * group (<code>my-asg</code>). Example: <code>autoScalingGroup/my-asg</code>. </p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the resource. This string consists of a prefix
     * (<code>autoScalingGroup</code>) followed by the name of a specified Auto Scaling
     * group (<code>my-asg</code>). Example: <code>autoScalingGroup/my-asg</code>. </p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource. This string consists of a prefix
     * (<code>autoScalingGroup</code>) followed by the name of a specified Auto Scaling
     * group (<code>my-asg</code>). Example: <code>autoScalingGroup/my-asg</code>. </p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the resource. This string consists of a prefix
     * (<code>autoScalingGroup</code>) followed by the name of a specified Auto Scaling
     * group (<code>my-asg</code>). Example: <code>autoScalingGroup/my-asg</code>. </p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the resource. This string consists of a prefix
     * (<code>autoScalingGroup</code>) followed by the name of a specified Auto Scaling
     * group (<code>my-asg</code>). Example: <code>autoScalingGroup/my-asg</code>. </p>
     */
    inline GetScalingPlanResourceForecastDataRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource. This string consists of a prefix
     * (<code>autoScalingGroup</code>) followed by the name of a specified Auto Scaling
     * group (<code>my-asg</code>). Example: <code>autoScalingGroup/my-asg</code>. </p>
     */
    inline GetScalingPlanResourceForecastDataRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource. This string consists of a prefix
     * (<code>autoScalingGroup</code>) followed by the name of a specified Auto Scaling
     * group (<code>my-asg</code>). Example: <code>autoScalingGroup/my-asg</code>. </p>
     */
    inline GetScalingPlanResourceForecastDataRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The scalable dimension for the resource. The only valid value is
     * <code>autoscaling:autoScalingGroup:DesiredCapacity</code>. </p>
     */
    inline const ScalableDimension& GetScalableDimension() const{ return m_scalableDimension; }

    /**
     * <p>The scalable dimension for the resource. The only valid value is
     * <code>autoscaling:autoScalingGroup:DesiredCapacity</code>. </p>
     */
    inline bool ScalableDimensionHasBeenSet() const { return m_scalableDimensionHasBeenSet; }

    /**
     * <p>The scalable dimension for the resource. The only valid value is
     * <code>autoscaling:autoScalingGroup:DesiredCapacity</code>. </p>
     */
    inline void SetScalableDimension(const ScalableDimension& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }

    /**
     * <p>The scalable dimension for the resource. The only valid value is
     * <code>autoscaling:autoScalingGroup:DesiredCapacity</code>. </p>
     */
    inline void SetScalableDimension(ScalableDimension&& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = std::move(value); }

    /**
     * <p>The scalable dimension for the resource. The only valid value is
     * <code>autoscaling:autoScalingGroup:DesiredCapacity</code>. </p>
     */
    inline GetScalingPlanResourceForecastDataRequest& WithScalableDimension(const ScalableDimension& value) { SetScalableDimension(value); return *this;}

    /**
     * <p>The scalable dimension for the resource. The only valid value is
     * <code>autoscaling:autoScalingGroup:DesiredCapacity</code>. </p>
     */
    inline GetScalingPlanResourceForecastDataRequest& WithScalableDimension(ScalableDimension&& value) { SetScalableDimension(std::move(value)); return *this;}


    /**
     * <p>The type of forecast data to get.</p> <ul> <li> <p>
     * <code>LoadForecast</code>: The load metric forecast. </p> </li> <li> <p>
     * <code>CapacityForecast</code>: The capacity forecast. </p> </li> <li> <p>
     * <code>ScheduledActionMinCapacity</code>: The minimum capacity for each scheduled
     * scaling action. This data is calculated as the larger of two values: the
     * capacity forecast or the minimum capacity in the scaling instruction.</p> </li>
     * <li> <p> <code>ScheduledActionMaxCapacity</code>: The maximum capacity for each
     * scheduled scaling action. The calculation used is determined by the predictive
     * scaling maximum capacity behavior setting in the scaling instruction.</p> </li>
     * </ul>
     */
    inline const ForecastDataType& GetForecastDataType() const{ return m_forecastDataType; }

    /**
     * <p>The type of forecast data to get.</p> <ul> <li> <p>
     * <code>LoadForecast</code>: The load metric forecast. </p> </li> <li> <p>
     * <code>CapacityForecast</code>: The capacity forecast. </p> </li> <li> <p>
     * <code>ScheduledActionMinCapacity</code>: The minimum capacity for each scheduled
     * scaling action. This data is calculated as the larger of two values: the
     * capacity forecast or the minimum capacity in the scaling instruction.</p> </li>
     * <li> <p> <code>ScheduledActionMaxCapacity</code>: The maximum capacity for each
     * scheduled scaling action. The calculation used is determined by the predictive
     * scaling maximum capacity behavior setting in the scaling instruction.</p> </li>
     * </ul>
     */
    inline bool ForecastDataTypeHasBeenSet() const { return m_forecastDataTypeHasBeenSet; }

    /**
     * <p>The type of forecast data to get.</p> <ul> <li> <p>
     * <code>LoadForecast</code>: The load metric forecast. </p> </li> <li> <p>
     * <code>CapacityForecast</code>: The capacity forecast. </p> </li> <li> <p>
     * <code>ScheduledActionMinCapacity</code>: The minimum capacity for each scheduled
     * scaling action. This data is calculated as the larger of two values: the
     * capacity forecast or the minimum capacity in the scaling instruction.</p> </li>
     * <li> <p> <code>ScheduledActionMaxCapacity</code>: The maximum capacity for each
     * scheduled scaling action. The calculation used is determined by the predictive
     * scaling maximum capacity behavior setting in the scaling instruction.</p> </li>
     * </ul>
     */
    inline void SetForecastDataType(const ForecastDataType& value) { m_forecastDataTypeHasBeenSet = true; m_forecastDataType = value; }

    /**
     * <p>The type of forecast data to get.</p> <ul> <li> <p>
     * <code>LoadForecast</code>: The load metric forecast. </p> </li> <li> <p>
     * <code>CapacityForecast</code>: The capacity forecast. </p> </li> <li> <p>
     * <code>ScheduledActionMinCapacity</code>: The minimum capacity for each scheduled
     * scaling action. This data is calculated as the larger of two values: the
     * capacity forecast or the minimum capacity in the scaling instruction.</p> </li>
     * <li> <p> <code>ScheduledActionMaxCapacity</code>: The maximum capacity for each
     * scheduled scaling action. The calculation used is determined by the predictive
     * scaling maximum capacity behavior setting in the scaling instruction.</p> </li>
     * </ul>
     */
    inline void SetForecastDataType(ForecastDataType&& value) { m_forecastDataTypeHasBeenSet = true; m_forecastDataType = std::move(value); }

    /**
     * <p>The type of forecast data to get.</p> <ul> <li> <p>
     * <code>LoadForecast</code>: The load metric forecast. </p> </li> <li> <p>
     * <code>CapacityForecast</code>: The capacity forecast. </p> </li> <li> <p>
     * <code>ScheduledActionMinCapacity</code>: The minimum capacity for each scheduled
     * scaling action. This data is calculated as the larger of two values: the
     * capacity forecast or the minimum capacity in the scaling instruction.</p> </li>
     * <li> <p> <code>ScheduledActionMaxCapacity</code>: The maximum capacity for each
     * scheduled scaling action. The calculation used is determined by the predictive
     * scaling maximum capacity behavior setting in the scaling instruction.</p> </li>
     * </ul>
     */
    inline GetScalingPlanResourceForecastDataRequest& WithForecastDataType(const ForecastDataType& value) { SetForecastDataType(value); return *this;}

    /**
     * <p>The type of forecast data to get.</p> <ul> <li> <p>
     * <code>LoadForecast</code>: The load metric forecast. </p> </li> <li> <p>
     * <code>CapacityForecast</code>: The capacity forecast. </p> </li> <li> <p>
     * <code>ScheduledActionMinCapacity</code>: The minimum capacity for each scheduled
     * scaling action. This data is calculated as the larger of two values: the
     * capacity forecast or the minimum capacity in the scaling instruction.</p> </li>
     * <li> <p> <code>ScheduledActionMaxCapacity</code>: The maximum capacity for each
     * scheduled scaling action. The calculation used is determined by the predictive
     * scaling maximum capacity behavior setting in the scaling instruction.</p> </li>
     * </ul>
     */
    inline GetScalingPlanResourceForecastDataRequest& WithForecastDataType(ForecastDataType&& value) { SetForecastDataType(std::move(value)); return *this;}


    /**
     * <p>The inclusive start time of the time range for the forecast data to get. The
     * date and time can be at most 56 days before the current date and time. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The inclusive start time of the time range for the forecast data to get. The
     * date and time can be at most 56 days before the current date and time. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The inclusive start time of the time range for the forecast data to get. The
     * date and time can be at most 56 days before the current date and time. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The inclusive start time of the time range for the forecast data to get. The
     * date and time can be at most 56 days before the current date and time. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The inclusive start time of the time range for the forecast data to get. The
     * date and time can be at most 56 days before the current date and time. </p>
     */
    inline GetScalingPlanResourceForecastDataRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The inclusive start time of the time range for the forecast data to get. The
     * date and time can be at most 56 days before the current date and time. </p>
     */
    inline GetScalingPlanResourceForecastDataRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The exclusive end time of the time range for the forecast data to get. The
     * maximum time duration between the start and end time is seven days. </p>
     * <p>Although this parameter can accept a date and time that is more than two days
     * in the future, the availability of forecast data has limits. AWS Auto Scaling
     * only issues forecasts for periods of two days in advance.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The exclusive end time of the time range for the forecast data to get. The
     * maximum time duration between the start and end time is seven days. </p>
     * <p>Although this parameter can accept a date and time that is more than two days
     * in the future, the availability of forecast data has limits. AWS Auto Scaling
     * only issues forecasts for periods of two days in advance.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The exclusive end time of the time range for the forecast data to get. The
     * maximum time duration between the start and end time is seven days. </p>
     * <p>Although this parameter can accept a date and time that is more than two days
     * in the future, the availability of forecast data has limits. AWS Auto Scaling
     * only issues forecasts for periods of two days in advance.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The exclusive end time of the time range for the forecast data to get. The
     * maximum time duration between the start and end time is seven days. </p>
     * <p>Although this parameter can accept a date and time that is more than two days
     * in the future, the availability of forecast data has limits. AWS Auto Scaling
     * only issues forecasts for periods of two days in advance.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The exclusive end time of the time range for the forecast data to get. The
     * maximum time duration between the start and end time is seven days. </p>
     * <p>Although this parameter can accept a date and time that is more than two days
     * in the future, the availability of forecast data has limits. AWS Auto Scaling
     * only issues forecasts for periods of two days in advance.</p>
     */
    inline GetScalingPlanResourceForecastDataRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The exclusive end time of the time range for the forecast data to get. The
     * maximum time duration between the start and end time is seven days. </p>
     * <p>Although this parameter can accept a date and time that is more than two days
     * in the future, the availability of forecast data has limits. AWS Auto Scaling
     * only issues forecasts for periods of two days in advance.</p>
     */
    inline GetScalingPlanResourceForecastDataRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    Aws::String m_scalingPlanName;
    bool m_scalingPlanNameHasBeenSet = false;

    long long m_scalingPlanVersion;
    bool m_scalingPlanVersionHasBeenSet = false;

    ServiceNamespace m_serviceNamespace;
    bool m_serviceNamespaceHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    ScalableDimension m_scalableDimension;
    bool m_scalableDimensionHasBeenSet = false;

    ForecastDataType m_forecastDataType;
    bool m_forecastDataTypeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
