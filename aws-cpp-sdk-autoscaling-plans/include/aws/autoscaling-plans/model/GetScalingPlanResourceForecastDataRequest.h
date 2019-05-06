/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_AUTOSCALINGPLANS_API GetScalingPlanResourceForecastDataRequest : public AutoScalingPlansRequest
  {
  public:
    GetScalingPlanResourceForecastDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetScalingPlanResourceForecastData"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * <p>The version number of the scaling plan.</p>
     */
    inline long long GetScalingPlanVersion() const{ return m_scalingPlanVersion; }

    /**
     * <p>The version number of the scaling plan.</p>
     */
    inline bool ScalingPlanVersionHasBeenSet() const { return m_scalingPlanVersionHasBeenSet; }

    /**
     * <p>The version number of the scaling plan.</p>
     */
    inline void SetScalingPlanVersion(long long value) { m_scalingPlanVersionHasBeenSet = true; m_scalingPlanVersion = value; }

    /**
     * <p>The version number of the scaling plan.</p>
     */
    inline GetScalingPlanResourceForecastDataRequest& WithScalingPlanVersion(long long value) { SetScalingPlanVersion(value); return *this;}


    /**
     * <p>The namespace of the AWS service.</p>
     */
    inline const ServiceNamespace& GetServiceNamespace() const{ return m_serviceNamespace; }

    /**
     * <p>The namespace of the AWS service.</p>
     */
    inline bool ServiceNamespaceHasBeenSet() const { return m_serviceNamespaceHasBeenSet; }

    /**
     * <p>The namespace of the AWS service.</p>
     */
    inline void SetServiceNamespace(const ServiceNamespace& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }

    /**
     * <p>The namespace of the AWS service.</p>
     */
    inline void SetServiceNamespace(ServiceNamespace&& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = std::move(value); }

    /**
     * <p>The namespace of the AWS service.</p>
     */
    inline GetScalingPlanResourceForecastDataRequest& WithServiceNamespace(const ServiceNamespace& value) { SetServiceNamespace(value); return *this;}

    /**
     * <p>The namespace of the AWS service.</p>
     */
    inline GetScalingPlanResourceForecastDataRequest& WithServiceNamespace(ServiceNamespace&& value) { SetServiceNamespace(std::move(value)); return *this;}


    /**
     * <p>The ID of the resource. This string consists of the resource type and unique
     * identifier. </p> <ul> <li> <p>Auto Scaling group - The resource type is
     * <code>autoScalingGroup</code> and the unique identifier is the name of the Auto
     * Scaling group. Example: <code>autoScalingGroup/my-asg</code>.</p> </li> <li>
     * <p>ECS service - The resource type is <code>service</code> and the unique
     * identifier is the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot Fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the resource. This string consists of the resource type and unique
     * identifier. </p> <ul> <li> <p>Auto Scaling group - The resource type is
     * <code>autoScalingGroup</code> and the unique identifier is the name of the Auto
     * Scaling group. Example: <code>autoScalingGroup/my-asg</code>.</p> </li> <li>
     * <p>ECS service - The resource type is <code>service</code> and the unique
     * identifier is the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot Fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> </ul>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the resource. This string consists of the resource type and unique
     * identifier. </p> <ul> <li> <p>Auto Scaling group - The resource type is
     * <code>autoScalingGroup</code> and the unique identifier is the name of the Auto
     * Scaling group. Example: <code>autoScalingGroup/my-asg</code>.</p> </li> <li>
     * <p>ECS service - The resource type is <code>service</code> and the unique
     * identifier is the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot Fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> </ul>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource. This string consists of the resource type and unique
     * identifier. </p> <ul> <li> <p>Auto Scaling group - The resource type is
     * <code>autoScalingGroup</code> and the unique identifier is the name of the Auto
     * Scaling group. Example: <code>autoScalingGroup/my-asg</code>.</p> </li> <li>
     * <p>ECS service - The resource type is <code>service</code> and the unique
     * identifier is the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot Fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> </ul>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the resource. This string consists of the resource type and unique
     * identifier. </p> <ul> <li> <p>Auto Scaling group - The resource type is
     * <code>autoScalingGroup</code> and the unique identifier is the name of the Auto
     * Scaling group. Example: <code>autoScalingGroup/my-asg</code>.</p> </li> <li>
     * <p>ECS service - The resource type is <code>service</code> and the unique
     * identifier is the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot Fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> </ul>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the resource. This string consists of the resource type and unique
     * identifier. </p> <ul> <li> <p>Auto Scaling group - The resource type is
     * <code>autoScalingGroup</code> and the unique identifier is the name of the Auto
     * Scaling group. Example: <code>autoScalingGroup/my-asg</code>.</p> </li> <li>
     * <p>ECS service - The resource type is <code>service</code> and the unique
     * identifier is the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot Fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> </ul>
     */
    inline GetScalingPlanResourceForecastDataRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource. This string consists of the resource type and unique
     * identifier. </p> <ul> <li> <p>Auto Scaling group - The resource type is
     * <code>autoScalingGroup</code> and the unique identifier is the name of the Auto
     * Scaling group. Example: <code>autoScalingGroup/my-asg</code>.</p> </li> <li>
     * <p>ECS service - The resource type is <code>service</code> and the unique
     * identifier is the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot Fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> </ul>
     */
    inline GetScalingPlanResourceForecastDataRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource. This string consists of the resource type and unique
     * identifier. </p> <ul> <li> <p>Auto Scaling group - The resource type is
     * <code>autoScalingGroup</code> and the unique identifier is the name of the Auto
     * Scaling group. Example: <code>autoScalingGroup/my-asg</code>.</p> </li> <li>
     * <p>ECS service - The resource type is <code>service</code> and the unique
     * identifier is the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot Fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> </ul>
     */
    inline GetScalingPlanResourceForecastDataRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The scalable dimension for the resource.</p>
     */
    inline const ScalableDimension& GetScalableDimension() const{ return m_scalableDimension; }

    /**
     * <p>The scalable dimension for the resource.</p>
     */
    inline bool ScalableDimensionHasBeenSet() const { return m_scalableDimensionHasBeenSet; }

    /**
     * <p>The scalable dimension for the resource.</p>
     */
    inline void SetScalableDimension(const ScalableDimension& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }

    /**
     * <p>The scalable dimension for the resource.</p>
     */
    inline void SetScalableDimension(ScalableDimension&& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = std::move(value); }

    /**
     * <p>The scalable dimension for the resource.</p>
     */
    inline GetScalingPlanResourceForecastDataRequest& WithScalableDimension(const ScalableDimension& value) { SetScalableDimension(value); return *this;}

    /**
     * <p>The scalable dimension for the resource.</p>
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
    bool m_scalingPlanNameHasBeenSet;

    long long m_scalingPlanVersion;
    bool m_scalingPlanVersionHasBeenSet;

    ServiceNamespace m_serviceNamespace;
    bool m_serviceNamespaceHasBeenSet;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    ScalableDimension m_scalableDimension;
    bool m_scalableDimensionHasBeenSet;

    ForecastDataType m_forecastDataType;
    bool m_forecastDataTypeHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
