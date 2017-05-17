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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/ScalingStatusType.h>
#include <aws/gamelift/model/ScalingAdjustmentType.h>
#include <aws/gamelift/model/ComparisonOperatorType.h>
#include <aws/gamelift/model/MetricName.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Rule that controls how a fleet is scaled. Scaling policies are uniquely
   * identified by the combination of name and fleet ID.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ScalingPolicy">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API ScalingPolicy
  {
  public:
    ScalingPolicy();
    ScalingPolicy(const Aws::Utils::Json::JsonValue& jsonValue);
    ScalingPolicy& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Unique identifier for a fleet that is associated with this scaling
     * policy.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Unique identifier for a fleet that is associated with this scaling
     * policy.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for a fleet that is associated with this scaling
     * policy.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>Unique identifier for a fleet that is associated with this scaling
     * policy.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>Unique identifier for a fleet that is associated with this scaling
     * policy.</p>
     */
    inline ScalingPolicy& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet that is associated with this scaling
     * policy.</p>
     */
    inline ScalingPolicy& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a fleet that is associated with this scaling
     * policy.</p>
     */
    inline ScalingPolicy& WithFleetId(const char* value) { SetFleetId(value); return *this;}

    /**
     * <p>Descriptive label that is associated with a scaling policy. Policy names do
     * not need to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Descriptive label that is associated with a scaling policy. Policy names do
     * not need to be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label that is associated with a scaling policy. Policy names do
     * not need to be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Descriptive label that is associated with a scaling policy. Policy names do
     * not need to be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Descriptive label that is associated with a scaling policy. Policy names do
     * not need to be unique.</p>
     */
    inline ScalingPolicy& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label that is associated with a scaling policy. Policy names do
     * not need to be unique.</p>
     */
    inline ScalingPolicy& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Descriptive label that is associated with a scaling policy. Policy names do
     * not need to be unique.</p>
     */
    inline ScalingPolicy& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Current status of the scaling policy. The scaling policy is only in force
     * when in an <code>ACTIVE</code> status.</p> <ul> <li> <p> <b>ACTIVE</b> – The
     * scaling policy is currently in force.</p> </li> <li> <p> <b>UPDATE_REQUESTED</b>
     * – A request to update the scaling policy has been received.</p> </li> <li> <p>
     * <b>UPDATING</b> – A change is being made to the scaling policy.</p> </li> <li>
     * <p> <b>DELETE_REQUESTED</b> – A request to delete the scaling policy has been
     * received.</p> </li> <li> <p> <b>DELETING</b> – The scaling policy is being
     * deleted.</p> </li> <li> <p> <b>DELETED</b> – The scaling policy has been
     * deleted.</p> </li> <li> <p> <b>ERROR</b> – An error occurred in creating the
     * policy. It should be removed and recreated.</p> </li> </ul>
     */
    inline const ScalingStatusType& GetStatus() const{ return m_status; }

    /**
     * <p>Current status of the scaling policy. The scaling policy is only in force
     * when in an <code>ACTIVE</code> status.</p> <ul> <li> <p> <b>ACTIVE</b> – The
     * scaling policy is currently in force.</p> </li> <li> <p> <b>UPDATE_REQUESTED</b>
     * – A request to update the scaling policy has been received.</p> </li> <li> <p>
     * <b>UPDATING</b> – A change is being made to the scaling policy.</p> </li> <li>
     * <p> <b>DELETE_REQUESTED</b> – A request to delete the scaling policy has been
     * received.</p> </li> <li> <p> <b>DELETING</b> – The scaling policy is being
     * deleted.</p> </li> <li> <p> <b>DELETED</b> – The scaling policy has been
     * deleted.</p> </li> <li> <p> <b>ERROR</b> – An error occurred in creating the
     * policy. It should be removed and recreated.</p> </li> </ul>
     */
    inline void SetStatus(const ScalingStatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Current status of the scaling policy. The scaling policy is only in force
     * when in an <code>ACTIVE</code> status.</p> <ul> <li> <p> <b>ACTIVE</b> – The
     * scaling policy is currently in force.</p> </li> <li> <p> <b>UPDATE_REQUESTED</b>
     * – A request to update the scaling policy has been received.</p> </li> <li> <p>
     * <b>UPDATING</b> – A change is being made to the scaling policy.</p> </li> <li>
     * <p> <b>DELETE_REQUESTED</b> – A request to delete the scaling policy has been
     * received.</p> </li> <li> <p> <b>DELETING</b> – The scaling policy is being
     * deleted.</p> </li> <li> <p> <b>DELETED</b> – The scaling policy has been
     * deleted.</p> </li> <li> <p> <b>ERROR</b> – An error occurred in creating the
     * policy. It should be removed and recreated.</p> </li> </ul>
     */
    inline void SetStatus(ScalingStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Current status of the scaling policy. The scaling policy is only in force
     * when in an <code>ACTIVE</code> status.</p> <ul> <li> <p> <b>ACTIVE</b> – The
     * scaling policy is currently in force.</p> </li> <li> <p> <b>UPDATE_REQUESTED</b>
     * – A request to update the scaling policy has been received.</p> </li> <li> <p>
     * <b>UPDATING</b> – A change is being made to the scaling policy.</p> </li> <li>
     * <p> <b>DELETE_REQUESTED</b> – A request to delete the scaling policy has been
     * received.</p> </li> <li> <p> <b>DELETING</b> – The scaling policy is being
     * deleted.</p> </li> <li> <p> <b>DELETED</b> – The scaling policy has been
     * deleted.</p> </li> <li> <p> <b>ERROR</b> – An error occurred in creating the
     * policy. It should be removed and recreated.</p> </li> </ul>
     */
    inline ScalingPolicy& WithStatus(const ScalingStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>Current status of the scaling policy. The scaling policy is only in force
     * when in an <code>ACTIVE</code> status.</p> <ul> <li> <p> <b>ACTIVE</b> – The
     * scaling policy is currently in force.</p> </li> <li> <p> <b>UPDATE_REQUESTED</b>
     * – A request to update the scaling policy has been received.</p> </li> <li> <p>
     * <b>UPDATING</b> – A change is being made to the scaling policy.</p> </li> <li>
     * <p> <b>DELETE_REQUESTED</b> – A request to delete the scaling policy has been
     * received.</p> </li> <li> <p> <b>DELETING</b> – The scaling policy is being
     * deleted.</p> </li> <li> <p> <b>DELETED</b> – The scaling policy has been
     * deleted.</p> </li> <li> <p> <b>ERROR</b> – An error occurred in creating the
     * policy. It should be removed and recreated.</p> </li> </ul>
     */
    inline ScalingPolicy& WithStatus(ScalingStatusType&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Amount of adjustment to make, based on the scaling adjustment type.</p>
     */
    inline int GetScalingAdjustment() const{ return m_scalingAdjustment; }

    /**
     * <p>Amount of adjustment to make, based on the scaling adjustment type.</p>
     */
    inline void SetScalingAdjustment(int value) { m_scalingAdjustmentHasBeenSet = true; m_scalingAdjustment = value; }

    /**
     * <p>Amount of adjustment to make, based on the scaling adjustment type.</p>
     */
    inline ScalingPolicy& WithScalingAdjustment(int value) { SetScalingAdjustment(value); return *this;}

    /**
     * <p>Type of adjustment to make to a fleet's instance count (see
     * <a>FleetCapacity</a>):</p> <ul> <li> <p> <b>ChangeInCapacity</b> – add (or
     * subtract) the scaling adjustment value from the current instance count. Positive
     * values scale up while negative values scale down.</p> </li> <li> <p>
     * <b>ExactCapacity</b> – set the instance count to the scaling adjustment
     * value.</p> </li> <li> <p> <b>PercentChangeInCapacity</b> – increase or reduce
     * the current instance count by the scaling adjustment, read as a percentage.
     * Positive values scale up while negative values scale down.</p> </li> </ul>
     */
    inline const ScalingAdjustmentType& GetScalingAdjustmentType() const{ return m_scalingAdjustmentType; }

    /**
     * <p>Type of adjustment to make to a fleet's instance count (see
     * <a>FleetCapacity</a>):</p> <ul> <li> <p> <b>ChangeInCapacity</b> – add (or
     * subtract) the scaling adjustment value from the current instance count. Positive
     * values scale up while negative values scale down.</p> </li> <li> <p>
     * <b>ExactCapacity</b> – set the instance count to the scaling adjustment
     * value.</p> </li> <li> <p> <b>PercentChangeInCapacity</b> – increase or reduce
     * the current instance count by the scaling adjustment, read as a percentage.
     * Positive values scale up while negative values scale down.</p> </li> </ul>
     */
    inline void SetScalingAdjustmentType(const ScalingAdjustmentType& value) { m_scalingAdjustmentTypeHasBeenSet = true; m_scalingAdjustmentType = value; }

    /**
     * <p>Type of adjustment to make to a fleet's instance count (see
     * <a>FleetCapacity</a>):</p> <ul> <li> <p> <b>ChangeInCapacity</b> – add (or
     * subtract) the scaling adjustment value from the current instance count. Positive
     * values scale up while negative values scale down.</p> </li> <li> <p>
     * <b>ExactCapacity</b> – set the instance count to the scaling adjustment
     * value.</p> </li> <li> <p> <b>PercentChangeInCapacity</b> – increase or reduce
     * the current instance count by the scaling adjustment, read as a percentage.
     * Positive values scale up while negative values scale down.</p> </li> </ul>
     */
    inline void SetScalingAdjustmentType(ScalingAdjustmentType&& value) { m_scalingAdjustmentTypeHasBeenSet = true; m_scalingAdjustmentType = std::move(value); }

    /**
     * <p>Type of adjustment to make to a fleet's instance count (see
     * <a>FleetCapacity</a>):</p> <ul> <li> <p> <b>ChangeInCapacity</b> – add (or
     * subtract) the scaling adjustment value from the current instance count. Positive
     * values scale up while negative values scale down.</p> </li> <li> <p>
     * <b>ExactCapacity</b> – set the instance count to the scaling adjustment
     * value.</p> </li> <li> <p> <b>PercentChangeInCapacity</b> – increase or reduce
     * the current instance count by the scaling adjustment, read as a percentage.
     * Positive values scale up while negative values scale down.</p> </li> </ul>
     */
    inline ScalingPolicy& WithScalingAdjustmentType(const ScalingAdjustmentType& value) { SetScalingAdjustmentType(value); return *this;}

    /**
     * <p>Type of adjustment to make to a fleet's instance count (see
     * <a>FleetCapacity</a>):</p> <ul> <li> <p> <b>ChangeInCapacity</b> – add (or
     * subtract) the scaling adjustment value from the current instance count. Positive
     * values scale up while negative values scale down.</p> </li> <li> <p>
     * <b>ExactCapacity</b> – set the instance count to the scaling adjustment
     * value.</p> </li> <li> <p> <b>PercentChangeInCapacity</b> – increase or reduce
     * the current instance count by the scaling adjustment, read as a percentage.
     * Positive values scale up while negative values scale down.</p> </li> </ul>
     */
    inline ScalingPolicy& WithScalingAdjustmentType(ScalingAdjustmentType&& value) { SetScalingAdjustmentType(std::move(value)); return *this;}

    /**
     * <p>Comparison operator to use when measuring a metric against the threshold
     * value.</p>
     */
    inline const ComparisonOperatorType& GetComparisonOperator() const{ return m_comparisonOperator; }

    /**
     * <p>Comparison operator to use when measuring a metric against the threshold
     * value.</p>
     */
    inline void SetComparisonOperator(const ComparisonOperatorType& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    /**
     * <p>Comparison operator to use when measuring a metric against the threshold
     * value.</p>
     */
    inline void SetComparisonOperator(ComparisonOperatorType&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = std::move(value); }

    /**
     * <p>Comparison operator to use when measuring a metric against the threshold
     * value.</p>
     */
    inline ScalingPolicy& WithComparisonOperator(const ComparisonOperatorType& value) { SetComparisonOperator(value); return *this;}

    /**
     * <p>Comparison operator to use when measuring a metric against the threshold
     * value.</p>
     */
    inline ScalingPolicy& WithComparisonOperator(ComparisonOperatorType&& value) { SetComparisonOperator(std::move(value)); return *this;}

    /**
     * <p>Metric value used to trigger a scaling event.</p>
     */
    inline double GetThreshold() const{ return m_threshold; }

    /**
     * <p>Metric value used to trigger a scaling event.</p>
     */
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }

    /**
     * <p>Metric value used to trigger a scaling event.</p>
     */
    inline ScalingPolicy& WithThreshold(double value) { SetThreshold(value); return *this;}

    /**
     * <p>Length of time (in minutes) the metric must be at or beyond the threshold
     * before a scaling event is triggered.</p>
     */
    inline int GetEvaluationPeriods() const{ return m_evaluationPeriods; }

    /**
     * <p>Length of time (in minutes) the metric must be at or beyond the threshold
     * before a scaling event is triggered.</p>
     */
    inline void SetEvaluationPeriods(int value) { m_evaluationPeriodsHasBeenSet = true; m_evaluationPeriods = value; }

    /**
     * <p>Length of time (in minutes) the metric must be at or beyond the threshold
     * before a scaling event is triggered.</p>
     */
    inline ScalingPolicy& WithEvaluationPeriods(int value) { SetEvaluationPeriods(value); return *this;}

    /**
     * <p>Name of the Amazon GameLift-defined metric that is used to trigger an
     * adjustment.</p> <ul> <li> <p> <b>ActivatingGameSessions</b> – number of game
     * sessions in the process of being created (game session status =
     * <code>ACTIVATING</code>).</p> </li> <li> <p> <b>ActiveGameSessions</b> – number
     * of game sessions currently running (game session status =
     * <code>ACTIVE</code>).</p> </li> <li> <p> <b>CurrentPlayerSessions</b> – number
     * of active or reserved player sessions (player session status =
     * <code>ACTIVE</code> or <code>RESERVED</code>). </p> </li> <li> <p>
     * <b>AvailablePlayerSessions</b> – number of player session slots currently
     * available in active game sessions across the fleet, calculated by subtracting a
     * game session's current player session count from its maximum player session
     * count. This number does include game sessions that are not currently accepting
     * players (game session <code>PlayerSessionCreationPolicy</code> =
     * <code>DENY_ALL</code>).</p> </li> <li> <p> <b>ActiveInstances</b> – number of
     * instances currently running a game session.</p> </li> <li> <p>
     * <b>IdleInstances</b> – number of instances not currently running a game
     * session.</p> </li> </ul>
     */
    inline const MetricName& GetMetricName() const{ return m_metricName; }

    /**
     * <p>Name of the Amazon GameLift-defined metric that is used to trigger an
     * adjustment.</p> <ul> <li> <p> <b>ActivatingGameSessions</b> – number of game
     * sessions in the process of being created (game session status =
     * <code>ACTIVATING</code>).</p> </li> <li> <p> <b>ActiveGameSessions</b> – number
     * of game sessions currently running (game session status =
     * <code>ACTIVE</code>).</p> </li> <li> <p> <b>CurrentPlayerSessions</b> – number
     * of active or reserved player sessions (player session status =
     * <code>ACTIVE</code> or <code>RESERVED</code>). </p> </li> <li> <p>
     * <b>AvailablePlayerSessions</b> – number of player session slots currently
     * available in active game sessions across the fleet, calculated by subtracting a
     * game session's current player session count from its maximum player session
     * count. This number does include game sessions that are not currently accepting
     * players (game session <code>PlayerSessionCreationPolicy</code> =
     * <code>DENY_ALL</code>).</p> </li> <li> <p> <b>ActiveInstances</b> – number of
     * instances currently running a game session.</p> </li> <li> <p>
     * <b>IdleInstances</b> – number of instances not currently running a game
     * session.</p> </li> </ul>
     */
    inline void SetMetricName(const MetricName& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>Name of the Amazon GameLift-defined metric that is used to trigger an
     * adjustment.</p> <ul> <li> <p> <b>ActivatingGameSessions</b> – number of game
     * sessions in the process of being created (game session status =
     * <code>ACTIVATING</code>).</p> </li> <li> <p> <b>ActiveGameSessions</b> – number
     * of game sessions currently running (game session status =
     * <code>ACTIVE</code>).</p> </li> <li> <p> <b>CurrentPlayerSessions</b> – number
     * of active or reserved player sessions (player session status =
     * <code>ACTIVE</code> or <code>RESERVED</code>). </p> </li> <li> <p>
     * <b>AvailablePlayerSessions</b> – number of player session slots currently
     * available in active game sessions across the fleet, calculated by subtracting a
     * game session's current player session count from its maximum player session
     * count. This number does include game sessions that are not currently accepting
     * players (game session <code>PlayerSessionCreationPolicy</code> =
     * <code>DENY_ALL</code>).</p> </li> <li> <p> <b>ActiveInstances</b> – number of
     * instances currently running a game session.</p> </li> <li> <p>
     * <b>IdleInstances</b> – number of instances not currently running a game
     * session.</p> </li> </ul>
     */
    inline void SetMetricName(MetricName&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>Name of the Amazon GameLift-defined metric that is used to trigger an
     * adjustment.</p> <ul> <li> <p> <b>ActivatingGameSessions</b> – number of game
     * sessions in the process of being created (game session status =
     * <code>ACTIVATING</code>).</p> </li> <li> <p> <b>ActiveGameSessions</b> – number
     * of game sessions currently running (game session status =
     * <code>ACTIVE</code>).</p> </li> <li> <p> <b>CurrentPlayerSessions</b> – number
     * of active or reserved player sessions (player session status =
     * <code>ACTIVE</code> or <code>RESERVED</code>). </p> </li> <li> <p>
     * <b>AvailablePlayerSessions</b> – number of player session slots currently
     * available in active game sessions across the fleet, calculated by subtracting a
     * game session's current player session count from its maximum player session
     * count. This number does include game sessions that are not currently accepting
     * players (game session <code>PlayerSessionCreationPolicy</code> =
     * <code>DENY_ALL</code>).</p> </li> <li> <p> <b>ActiveInstances</b> – number of
     * instances currently running a game session.</p> </li> <li> <p>
     * <b>IdleInstances</b> – number of instances not currently running a game
     * session.</p> </li> </ul>
     */
    inline ScalingPolicy& WithMetricName(const MetricName& value) { SetMetricName(value); return *this;}

    /**
     * <p>Name of the Amazon GameLift-defined metric that is used to trigger an
     * adjustment.</p> <ul> <li> <p> <b>ActivatingGameSessions</b> – number of game
     * sessions in the process of being created (game session status =
     * <code>ACTIVATING</code>).</p> </li> <li> <p> <b>ActiveGameSessions</b> – number
     * of game sessions currently running (game session status =
     * <code>ACTIVE</code>).</p> </li> <li> <p> <b>CurrentPlayerSessions</b> – number
     * of active or reserved player sessions (player session status =
     * <code>ACTIVE</code> or <code>RESERVED</code>). </p> </li> <li> <p>
     * <b>AvailablePlayerSessions</b> – number of player session slots currently
     * available in active game sessions across the fleet, calculated by subtracting a
     * game session's current player session count from its maximum player session
     * count. This number does include game sessions that are not currently accepting
     * players (game session <code>PlayerSessionCreationPolicy</code> =
     * <code>DENY_ALL</code>).</p> </li> <li> <p> <b>ActiveInstances</b> – number of
     * instances currently running a game session.</p> </li> <li> <p>
     * <b>IdleInstances</b> – number of instances not currently running a game
     * session.</p> </li> </ul>
     */
    inline ScalingPolicy& WithMetricName(MetricName&& value) { SetMetricName(std::move(value)); return *this;}

  private:
    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    ScalingStatusType m_status;
    bool m_statusHasBeenSet;
    int m_scalingAdjustment;
    bool m_scalingAdjustmentHasBeenSet;
    ScalingAdjustmentType m_scalingAdjustmentType;
    bool m_scalingAdjustmentTypeHasBeenSet;
    ComparisonOperatorType m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet;
    double m_threshold;
    bool m_thresholdHasBeenSet;
    int m_evaluationPeriods;
    bool m_evaluationPeriodsHasBeenSet;
    MetricName m_metricName;
    bool m_metricNameHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
