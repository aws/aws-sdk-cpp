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
    AWS_AUTOSCALINGPLANS_API GetScalingPlanResourceForecastDataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetScalingPlanResourceForecastData"; }

    AWS_AUTOSCALINGPLANS_API Aws::String SerializePayload() const override;

    AWS_AUTOSCALINGPLANS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the scaling plan.</p>
     */
    inline const Aws::String& GetScalingPlanName() const { return m_scalingPlanName; }
    inline bool ScalingPlanNameHasBeenSet() const { return m_scalingPlanNameHasBeenSet; }
    template<typename ScalingPlanNameT = Aws::String>
    void SetScalingPlanName(ScalingPlanNameT&& value) { m_scalingPlanNameHasBeenSet = true; m_scalingPlanName = std::forward<ScalingPlanNameT>(value); }
    template<typename ScalingPlanNameT = Aws::String>
    GetScalingPlanResourceForecastDataRequest& WithScalingPlanName(ScalingPlanNameT&& value) { SetScalingPlanName(std::forward<ScalingPlanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the scaling plan. Currently, the only valid value is
     * <code>1</code>.</p>
     */
    inline long long GetScalingPlanVersion() const { return m_scalingPlanVersion; }
    inline bool ScalingPlanVersionHasBeenSet() const { return m_scalingPlanVersionHasBeenSet; }
    inline void SetScalingPlanVersion(long long value) { m_scalingPlanVersionHasBeenSet = true; m_scalingPlanVersion = value; }
    inline GetScalingPlanResourceForecastDataRequest& WithScalingPlanVersion(long long value) { SetScalingPlanVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the AWS service. The only valid value is
     * <code>autoscaling</code>. </p>
     */
    inline ServiceNamespace GetServiceNamespace() const { return m_serviceNamespace; }
    inline bool ServiceNamespaceHasBeenSet() const { return m_serviceNamespaceHasBeenSet; }
    inline void SetServiceNamespace(ServiceNamespace value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }
    inline GetScalingPlanResourceForecastDataRequest& WithServiceNamespace(ServiceNamespace value) { SetServiceNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource. This string consists of a prefix
     * (<code>autoScalingGroup</code>) followed by the name of a specified Auto Scaling
     * group (<code>my-asg</code>). Example: <code>autoScalingGroup/my-asg</code>. </p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    GetScalingPlanResourceForecastDataRequest& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scalable dimension for the resource. The only valid value is
     * <code>autoscaling:autoScalingGroup:DesiredCapacity</code>. </p>
     */
    inline ScalableDimension GetScalableDimension() const { return m_scalableDimension; }
    inline bool ScalableDimensionHasBeenSet() const { return m_scalableDimensionHasBeenSet; }
    inline void SetScalableDimension(ScalableDimension value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }
    inline GetScalingPlanResourceForecastDataRequest& WithScalableDimension(ScalableDimension value) { SetScalableDimension(value); return *this;}
    ///@}

    ///@{
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
    inline ForecastDataType GetForecastDataType() const { return m_forecastDataType; }
    inline bool ForecastDataTypeHasBeenSet() const { return m_forecastDataTypeHasBeenSet; }
    inline void SetForecastDataType(ForecastDataType value) { m_forecastDataTypeHasBeenSet = true; m_forecastDataType = value; }
    inline GetScalingPlanResourceForecastDataRequest& WithForecastDataType(ForecastDataType value) { SetForecastDataType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inclusive start time of the time range for the forecast data to get. The
     * date and time can be at most 56 days before the current date and time. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetScalingPlanResourceForecastDataRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exclusive end time of the time range for the forecast data to get. The
     * maximum time duration between the start and end time is seven days. </p>
     * <p>Although this parameter can accept a date and time that is more than two days
     * in the future, the availability of forecast data has limits. AWS Auto Scaling
     * only issues forecasts for periods of two days in advance.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetScalingPlanResourceForecastDataRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scalingPlanName;
    bool m_scalingPlanNameHasBeenSet = false;

    long long m_scalingPlanVersion{0};
    bool m_scalingPlanVersionHasBeenSet = false;

    ServiceNamespace m_serviceNamespace{ServiceNamespace::NOT_SET};
    bool m_serviceNamespaceHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    ScalableDimension m_scalableDimension{ScalableDimension::NOT_SET};
    bool m_scalableDimensionHasBeenSet = false;

    ForecastDataType m_forecastDataType{ForecastDataType::NOT_SET};
    bool m_forecastDataTypeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
