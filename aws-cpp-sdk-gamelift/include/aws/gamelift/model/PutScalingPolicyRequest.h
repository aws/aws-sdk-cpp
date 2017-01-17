﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/ScalingAdjustmentType.h>
#include <aws/gamelift/model/ComparisonOperatorType.h>
#include <aws/gamelift/model/MetricName.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/PutScalingPolicyInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API PutScalingPolicyRequest : public GameLiftRequest
  {
  public:
    PutScalingPolicyRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Descriptive label associated with a scaling policy. Policy names do not need
     * to be unique. A fleet can have only one scaling policy with the same name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Descriptive label associated with a scaling policy. Policy names do not need
     * to be unique. A fleet can have only one scaling policy with the same name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label associated with a scaling policy. Policy names do not need
     * to be unique. A fleet can have only one scaling policy with the same name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label associated with a scaling policy. Policy names do not need
     * to be unique. A fleet can have only one scaling policy with the same name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Descriptive label associated with a scaling policy. Policy names do not need
     * to be unique. A fleet can have only one scaling policy with the same name.</p>
     */
    inline PutScalingPolicyRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label associated with a scaling policy. Policy names do not need
     * to be unique. A fleet can have only one scaling policy with the same name.</p>
     */
    inline PutScalingPolicyRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label associated with a scaling policy. Policy names do not need
     * to be unique. A fleet can have only one scaling policy with the same name.</p>
     */
    inline PutScalingPolicyRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Unique identity for the fleet to scale with this policy.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Unique identity for the fleet to scale with this policy.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identity for the fleet to scale with this policy.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identity for the fleet to scale with this policy.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>Unique identity for the fleet to scale with this policy.</p>
     */
    inline PutScalingPolicyRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identity for the fleet to scale with this policy.</p>
     */
    inline PutScalingPolicyRequest& WithFleetId(Aws::String&& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identity for the fleet to scale with this policy.</p>
     */
    inline PutScalingPolicyRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}

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
    inline PutScalingPolicyRequest& WithScalingAdjustment(int value) { SetScalingAdjustment(value); return *this;}

    /**
     * <p>Type of adjustment to make to a fleet's instance count (see
     * <a>FleetCapacity</a>):</p> <ul> <li> <p> <b>ChangeInCapacity</b> – add (or
     * subtract) the scaling adjustment value from the current instance count. Positive
     * values scale up while negative values scale down.</p> </li> <li> <p>
     * <b>ExactCapacity</b> – set the instance count to the scaling adjustment
     * value.</p> </li> <li> <p> <b>PercentChangeInCapacity</b> – increase or reduce
     * the current instance count by the scaling adjustment, read as a percentage.
     * Positive values scale up while negative values scale down; for example, a value
     * of "-10" scales the fleet down by 10%.</p> </li> </ul>
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
     * Positive values scale up while negative values scale down; for example, a value
     * of "-10" scales the fleet down by 10%.</p> </li> </ul>
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
     * Positive values scale up while negative values scale down; for example, a value
     * of "-10" scales the fleet down by 10%.</p> </li> </ul>
     */
    inline void SetScalingAdjustmentType(ScalingAdjustmentType&& value) { m_scalingAdjustmentTypeHasBeenSet = true; m_scalingAdjustmentType = value; }

    /**
     * <p>Type of adjustment to make to a fleet's instance count (see
     * <a>FleetCapacity</a>):</p> <ul> <li> <p> <b>ChangeInCapacity</b> – add (or
     * subtract) the scaling adjustment value from the current instance count. Positive
     * values scale up while negative values scale down.</p> </li> <li> <p>
     * <b>ExactCapacity</b> – set the instance count to the scaling adjustment
     * value.</p> </li> <li> <p> <b>PercentChangeInCapacity</b> – increase or reduce
     * the current instance count by the scaling adjustment, read as a percentage.
     * Positive values scale up while negative values scale down; for example, a value
     * of "-10" scales the fleet down by 10%.</p> </li> </ul>
     */
    inline PutScalingPolicyRequest& WithScalingAdjustmentType(const ScalingAdjustmentType& value) { SetScalingAdjustmentType(value); return *this;}

    /**
     * <p>Type of adjustment to make to a fleet's instance count (see
     * <a>FleetCapacity</a>):</p> <ul> <li> <p> <b>ChangeInCapacity</b> – add (or
     * subtract) the scaling adjustment value from the current instance count. Positive
     * values scale up while negative values scale down.</p> </li> <li> <p>
     * <b>ExactCapacity</b> – set the instance count to the scaling adjustment
     * value.</p> </li> <li> <p> <b>PercentChangeInCapacity</b> – increase or reduce
     * the current instance count by the scaling adjustment, read as a percentage.
     * Positive values scale up while negative values scale down; for example, a value
     * of "-10" scales the fleet down by 10%.</p> </li> </ul>
     */
    inline PutScalingPolicyRequest& WithScalingAdjustmentType(ScalingAdjustmentType&& value) { SetScalingAdjustmentType(value); return *this;}

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
    inline PutScalingPolicyRequest& WithThreshold(double value) { SetThreshold(value); return *this;}

    /**
     * <p>Comparison operator to use when measuring the metric against the threshold
     * value.</p>
     */
    inline const ComparisonOperatorType& GetComparisonOperator() const{ return m_comparisonOperator; }

    /**
     * <p>Comparison operator to use when measuring the metric against the threshold
     * value.</p>
     */
    inline void SetComparisonOperator(const ComparisonOperatorType& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    /**
     * <p>Comparison operator to use when measuring the metric against the threshold
     * value.</p>
     */
    inline void SetComparisonOperator(ComparisonOperatorType&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    /**
     * <p>Comparison operator to use when measuring the metric against the threshold
     * value.</p>
     */
    inline PutScalingPolicyRequest& WithComparisonOperator(const ComparisonOperatorType& value) { SetComparisonOperator(value); return *this;}

    /**
     * <p>Comparison operator to use when measuring the metric against the threshold
     * value.</p>
     */
    inline PutScalingPolicyRequest& WithComparisonOperator(ComparisonOperatorType&& value) { SetComparisonOperator(value); return *this;}

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
    inline PutScalingPolicyRequest& WithEvaluationPeriods(int value) { SetEvaluationPeriods(value); return *this;}

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
     * count. This number includes game sessions that are not currently accepting
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
     * count. This number includes game sessions that are not currently accepting
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
     * count. This number includes game sessions that are not currently accepting
     * players (game session <code>PlayerSessionCreationPolicy</code> =
     * <code>DENY_ALL</code>).</p> </li> <li> <p> <b>ActiveInstances</b> – number of
     * instances currently running a game session.</p> </li> <li> <p>
     * <b>IdleInstances</b> – number of instances not currently running a game
     * session.</p> </li> </ul>
     */
    inline void SetMetricName(MetricName&& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

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
     * count. This number includes game sessions that are not currently accepting
     * players (game session <code>PlayerSessionCreationPolicy</code> =
     * <code>DENY_ALL</code>).</p> </li> <li> <p> <b>ActiveInstances</b> – number of
     * instances currently running a game session.</p> </li> <li> <p>
     * <b>IdleInstances</b> – number of instances not currently running a game
     * session.</p> </li> </ul>
     */
    inline PutScalingPolicyRequest& WithMetricName(const MetricName& value) { SetMetricName(value); return *this;}

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
     * count. This number includes game sessions that are not currently accepting
     * players (game session <code>PlayerSessionCreationPolicy</code> =
     * <code>DENY_ALL</code>).</p> </li> <li> <p> <b>ActiveInstances</b> – number of
     * instances currently running a game session.</p> </li> <li> <p>
     * <b>IdleInstances</b> – number of instances not currently running a game
     * session.</p> </li> </ul>
     */
    inline PutScalingPolicyRequest& WithMetricName(MetricName&& value) { SetMetricName(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;
    int m_scalingAdjustment;
    bool m_scalingAdjustmentHasBeenSet;
    ScalingAdjustmentType m_scalingAdjustmentType;
    bool m_scalingAdjustmentTypeHasBeenSet;
    double m_threshold;
    bool m_thresholdHasBeenSet;
    ComparisonOperatorType m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet;
    int m_evaluationPeriods;
    bool m_evaluationPeriodsHasBeenSet;
    MetricName m_metricName;
    bool m_metricNameHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
