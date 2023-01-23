/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/ScalingAdjustmentType.h>
#include <aws/gamelift/model/ComparisonOperatorType.h>
#include <aws/gamelift/model/MetricName.h>
#include <aws/gamelift/model/PolicyType.h>
#include <aws/gamelift/model/TargetConfiguration.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class PutScalingPolicyRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API PutScalingPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutScalingPolicy"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A descriptive label that is associated with a fleet's scaling policy. Policy
     * names do not need to be unique. A fleet can have only one scaling policy with
     * the same name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A descriptive label that is associated with a fleet's scaling policy. Policy
     * names do not need to be unique. A fleet can have only one scaling policy with
     * the same name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A descriptive label that is associated with a fleet's scaling policy. Policy
     * names do not need to be unique. A fleet can have only one scaling policy with
     * the same name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A descriptive label that is associated with a fleet's scaling policy. Policy
     * names do not need to be unique. A fleet can have only one scaling policy with
     * the same name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A descriptive label that is associated with a fleet's scaling policy. Policy
     * names do not need to be unique. A fleet can have only one scaling policy with
     * the same name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A descriptive label that is associated with a fleet's scaling policy. Policy
     * names do not need to be unique. A fleet can have only one scaling policy with
     * the same name.</p>
     */
    inline PutScalingPolicyRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A descriptive label that is associated with a fleet's scaling policy. Policy
     * names do not need to be unique. A fleet can have only one scaling policy with
     * the same name.</p>
     */
    inline PutScalingPolicyRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A descriptive label that is associated with a fleet's scaling policy. Policy
     * names do not need to be unique. A fleet can have only one scaling policy with
     * the same name.</p>
     */
    inline PutScalingPolicyRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A unique identifier for the fleet to apply this policy to. You can use either
     * the fleet ID or ARN value. The fleet cannot be in any of the following statuses:
     * ERROR or DELETING.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for the fleet to apply this policy to. You can use either
     * the fleet ID or ARN value. The fleet cannot be in any of the following statuses:
     * ERROR or DELETING.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the fleet to apply this policy to. You can use either
     * the fleet ID or ARN value. The fleet cannot be in any of the following statuses:
     * ERROR or DELETING.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>A unique identifier for the fleet to apply this policy to. You can use either
     * the fleet ID or ARN value. The fleet cannot be in any of the following statuses:
     * ERROR or DELETING.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for the fleet to apply this policy to. You can use either
     * the fleet ID or ARN value. The fleet cannot be in any of the following statuses:
     * ERROR or DELETING.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for the fleet to apply this policy to. You can use either
     * the fleet ID or ARN value. The fleet cannot be in any of the following statuses:
     * ERROR or DELETING.</p>
     */
    inline PutScalingPolicyRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for the fleet to apply this policy to. You can use either
     * the fleet ID or ARN value. The fleet cannot be in any of the following statuses:
     * ERROR or DELETING.</p>
     */
    inline PutScalingPolicyRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the fleet to apply this policy to. You can use either
     * the fleet ID or ARN value. The fleet cannot be in any of the following statuses:
     * ERROR or DELETING.</p>
     */
    inline PutScalingPolicyRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>Amount of adjustment to make, based on the scaling adjustment type.</p>
     */
    inline int GetScalingAdjustment() const{ return m_scalingAdjustment; }

    /**
     * <p>Amount of adjustment to make, based on the scaling adjustment type.</p>
     */
    inline bool ScalingAdjustmentHasBeenSet() const { return m_scalingAdjustmentHasBeenSet; }

    /**
     * <p>Amount of adjustment to make, based on the scaling adjustment type.</p>
     */
    inline void SetScalingAdjustment(int value) { m_scalingAdjustmentHasBeenSet = true; m_scalingAdjustment = value; }

    /**
     * <p>Amount of adjustment to make, based on the scaling adjustment type.</p>
     */
    inline PutScalingPolicyRequest& WithScalingAdjustment(int value) { SetScalingAdjustment(value); return *this;}


    /**
     * <p>The type of adjustment to make to a fleet's instance count:</p> <ul> <li> <p>
     * <b>ChangeInCapacity</b> -- add (or subtract) the scaling adjustment value from
     * the current instance count. Positive values scale up while negative values scale
     * down.</p> </li> <li> <p> <b>ExactCapacity</b> -- set the instance count to the
     * scaling adjustment value.</p> </li> <li> <p> <b>PercentChangeInCapacity</b> --
     * increase or reduce the current instance count by the scaling adjustment, read as
     * a percentage. Positive values scale up while negative values scale down; for
     * example, a value of "-10" scales the fleet down by 10%.</p> </li> </ul>
     */
    inline const ScalingAdjustmentType& GetScalingAdjustmentType() const{ return m_scalingAdjustmentType; }

    /**
     * <p>The type of adjustment to make to a fleet's instance count:</p> <ul> <li> <p>
     * <b>ChangeInCapacity</b> -- add (or subtract) the scaling adjustment value from
     * the current instance count. Positive values scale up while negative values scale
     * down.</p> </li> <li> <p> <b>ExactCapacity</b> -- set the instance count to the
     * scaling adjustment value.</p> </li> <li> <p> <b>PercentChangeInCapacity</b> --
     * increase or reduce the current instance count by the scaling adjustment, read as
     * a percentage. Positive values scale up while negative values scale down; for
     * example, a value of "-10" scales the fleet down by 10%.</p> </li> </ul>
     */
    inline bool ScalingAdjustmentTypeHasBeenSet() const { return m_scalingAdjustmentTypeHasBeenSet; }

    /**
     * <p>The type of adjustment to make to a fleet's instance count:</p> <ul> <li> <p>
     * <b>ChangeInCapacity</b> -- add (or subtract) the scaling adjustment value from
     * the current instance count. Positive values scale up while negative values scale
     * down.</p> </li> <li> <p> <b>ExactCapacity</b> -- set the instance count to the
     * scaling adjustment value.</p> </li> <li> <p> <b>PercentChangeInCapacity</b> --
     * increase or reduce the current instance count by the scaling adjustment, read as
     * a percentage. Positive values scale up while negative values scale down; for
     * example, a value of "-10" scales the fleet down by 10%.</p> </li> </ul>
     */
    inline void SetScalingAdjustmentType(const ScalingAdjustmentType& value) { m_scalingAdjustmentTypeHasBeenSet = true; m_scalingAdjustmentType = value; }

    /**
     * <p>The type of adjustment to make to a fleet's instance count:</p> <ul> <li> <p>
     * <b>ChangeInCapacity</b> -- add (or subtract) the scaling adjustment value from
     * the current instance count. Positive values scale up while negative values scale
     * down.</p> </li> <li> <p> <b>ExactCapacity</b> -- set the instance count to the
     * scaling adjustment value.</p> </li> <li> <p> <b>PercentChangeInCapacity</b> --
     * increase or reduce the current instance count by the scaling adjustment, read as
     * a percentage. Positive values scale up while negative values scale down; for
     * example, a value of "-10" scales the fleet down by 10%.</p> </li> </ul>
     */
    inline void SetScalingAdjustmentType(ScalingAdjustmentType&& value) { m_scalingAdjustmentTypeHasBeenSet = true; m_scalingAdjustmentType = std::move(value); }

    /**
     * <p>The type of adjustment to make to a fleet's instance count:</p> <ul> <li> <p>
     * <b>ChangeInCapacity</b> -- add (or subtract) the scaling adjustment value from
     * the current instance count. Positive values scale up while negative values scale
     * down.</p> </li> <li> <p> <b>ExactCapacity</b> -- set the instance count to the
     * scaling adjustment value.</p> </li> <li> <p> <b>PercentChangeInCapacity</b> --
     * increase or reduce the current instance count by the scaling adjustment, read as
     * a percentage. Positive values scale up while negative values scale down; for
     * example, a value of "-10" scales the fleet down by 10%.</p> </li> </ul>
     */
    inline PutScalingPolicyRequest& WithScalingAdjustmentType(const ScalingAdjustmentType& value) { SetScalingAdjustmentType(value); return *this;}

    /**
     * <p>The type of adjustment to make to a fleet's instance count:</p> <ul> <li> <p>
     * <b>ChangeInCapacity</b> -- add (or subtract) the scaling adjustment value from
     * the current instance count. Positive values scale up while negative values scale
     * down.</p> </li> <li> <p> <b>ExactCapacity</b> -- set the instance count to the
     * scaling adjustment value.</p> </li> <li> <p> <b>PercentChangeInCapacity</b> --
     * increase or reduce the current instance count by the scaling adjustment, read as
     * a percentage. Positive values scale up while negative values scale down; for
     * example, a value of "-10" scales the fleet down by 10%.</p> </li> </ul>
     */
    inline PutScalingPolicyRequest& WithScalingAdjustmentType(ScalingAdjustmentType&& value) { SetScalingAdjustmentType(std::move(value)); return *this;}


    /**
     * <p>Metric value used to trigger a scaling event.</p>
     */
    inline double GetThreshold() const{ return m_threshold; }

    /**
     * <p>Metric value used to trigger a scaling event.</p>
     */
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }

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
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }

    /**
     * <p>Comparison operator to use when measuring the metric against the threshold
     * value.</p>
     */
    inline void SetComparisonOperator(const ComparisonOperatorType& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    /**
     * <p>Comparison operator to use when measuring the metric against the threshold
     * value.</p>
     */
    inline void SetComparisonOperator(ComparisonOperatorType&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = std::move(value); }

    /**
     * <p>Comparison operator to use when measuring the metric against the threshold
     * value.</p>
     */
    inline PutScalingPolicyRequest& WithComparisonOperator(const ComparisonOperatorType& value) { SetComparisonOperator(value); return *this;}

    /**
     * <p>Comparison operator to use when measuring the metric against the threshold
     * value.</p>
     */
    inline PutScalingPolicyRequest& WithComparisonOperator(ComparisonOperatorType&& value) { SetComparisonOperator(std::move(value)); return *this;}


    /**
     * <p>Length of time (in minutes) the metric must be at or beyond the threshold
     * before a scaling event is triggered.</p>
     */
    inline int GetEvaluationPeriods() const{ return m_evaluationPeriods; }

    /**
     * <p>Length of time (in minutes) the metric must be at or beyond the threshold
     * before a scaling event is triggered.</p>
     */
    inline bool EvaluationPeriodsHasBeenSet() const { return m_evaluationPeriodsHasBeenSet; }

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
     * <p>Name of the Amazon GameLift-defined metric that is used to trigger a scaling
     * adjustment. For detailed descriptions of fleet metrics, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/monitoring-cloudwatch.html">Monitor
     * Amazon GameLift with Amazon CloudWatch</a>. </p> <ul> <li> <p>
     * <b>ActivatingGameSessions</b> -- Game sessions in the process of being
     * created.</p> </li> <li> <p> <b>ActiveGameSessions</b> -- Game sessions that are
     * currently running.</p> </li> <li> <p> <b>ActiveInstances</b> -- Fleet instances
     * that are currently running at least one game session.</p> </li> <li> <p>
     * <b>AvailableGameSessions</b> -- Additional game sessions that fleet could host
     * simultaneously, given current capacity.</p> </li> <li> <p>
     * <b>AvailablePlayerSessions</b> -- Empty player slots in currently active game
     * sessions. This includes game sessions that are not currently accepting players.
     * Reserved player slots are not included.</p> </li> <li> <p>
     * <b>CurrentPlayerSessions</b> -- Player slots in active game sessions that are
     * being used by a player or are reserved for a player. </p> </li> <li> <p>
     * <b>IdleInstances</b> -- Active instances that are currently hosting zero game
     * sessions. </p> </li> <li> <p> <b>PercentAvailableGameSessions</b> -- Unused
     * percentage of the total number of game sessions that a fleet could host
     * simultaneously, given current capacity. Use this metric for a target-based
     * scaling policy.</p> </li> <li> <p> <b>PercentIdleInstances</b> -- Percentage of
     * the total number of active instances that are hosting zero game sessions.</p>
     * </li> <li> <p> <b>QueueDepth</b> -- Pending game session placement requests, in
     * any queue, where the current fleet is the top-priority destination.</p> </li>
     * <li> <p> <b>WaitTime</b> -- Current wait time for pending game session placement
     * requests, in any queue, where the current fleet is the top-priority destination.
     * </p> </li> </ul>
     */
    inline const MetricName& GetMetricName() const{ return m_metricName; }

    /**
     * <p>Name of the Amazon GameLift-defined metric that is used to trigger a scaling
     * adjustment. For detailed descriptions of fleet metrics, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/monitoring-cloudwatch.html">Monitor
     * Amazon GameLift with Amazon CloudWatch</a>. </p> <ul> <li> <p>
     * <b>ActivatingGameSessions</b> -- Game sessions in the process of being
     * created.</p> </li> <li> <p> <b>ActiveGameSessions</b> -- Game sessions that are
     * currently running.</p> </li> <li> <p> <b>ActiveInstances</b> -- Fleet instances
     * that are currently running at least one game session.</p> </li> <li> <p>
     * <b>AvailableGameSessions</b> -- Additional game sessions that fleet could host
     * simultaneously, given current capacity.</p> </li> <li> <p>
     * <b>AvailablePlayerSessions</b> -- Empty player slots in currently active game
     * sessions. This includes game sessions that are not currently accepting players.
     * Reserved player slots are not included.</p> </li> <li> <p>
     * <b>CurrentPlayerSessions</b> -- Player slots in active game sessions that are
     * being used by a player or are reserved for a player. </p> </li> <li> <p>
     * <b>IdleInstances</b> -- Active instances that are currently hosting zero game
     * sessions. </p> </li> <li> <p> <b>PercentAvailableGameSessions</b> -- Unused
     * percentage of the total number of game sessions that a fleet could host
     * simultaneously, given current capacity. Use this metric for a target-based
     * scaling policy.</p> </li> <li> <p> <b>PercentIdleInstances</b> -- Percentage of
     * the total number of active instances that are hosting zero game sessions.</p>
     * </li> <li> <p> <b>QueueDepth</b> -- Pending game session placement requests, in
     * any queue, where the current fleet is the top-priority destination.</p> </li>
     * <li> <p> <b>WaitTime</b> -- Current wait time for pending game session placement
     * requests, in any queue, where the current fleet is the top-priority destination.
     * </p> </li> </ul>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>Name of the Amazon GameLift-defined metric that is used to trigger a scaling
     * adjustment. For detailed descriptions of fleet metrics, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/monitoring-cloudwatch.html">Monitor
     * Amazon GameLift with Amazon CloudWatch</a>. </p> <ul> <li> <p>
     * <b>ActivatingGameSessions</b> -- Game sessions in the process of being
     * created.</p> </li> <li> <p> <b>ActiveGameSessions</b> -- Game sessions that are
     * currently running.</p> </li> <li> <p> <b>ActiveInstances</b> -- Fleet instances
     * that are currently running at least one game session.</p> </li> <li> <p>
     * <b>AvailableGameSessions</b> -- Additional game sessions that fleet could host
     * simultaneously, given current capacity.</p> </li> <li> <p>
     * <b>AvailablePlayerSessions</b> -- Empty player slots in currently active game
     * sessions. This includes game sessions that are not currently accepting players.
     * Reserved player slots are not included.</p> </li> <li> <p>
     * <b>CurrentPlayerSessions</b> -- Player slots in active game sessions that are
     * being used by a player or are reserved for a player. </p> </li> <li> <p>
     * <b>IdleInstances</b> -- Active instances that are currently hosting zero game
     * sessions. </p> </li> <li> <p> <b>PercentAvailableGameSessions</b> -- Unused
     * percentage of the total number of game sessions that a fleet could host
     * simultaneously, given current capacity. Use this metric for a target-based
     * scaling policy.</p> </li> <li> <p> <b>PercentIdleInstances</b> -- Percentage of
     * the total number of active instances that are hosting zero game sessions.</p>
     * </li> <li> <p> <b>QueueDepth</b> -- Pending game session placement requests, in
     * any queue, where the current fleet is the top-priority destination.</p> </li>
     * <li> <p> <b>WaitTime</b> -- Current wait time for pending game session placement
     * requests, in any queue, where the current fleet is the top-priority destination.
     * </p> </li> </ul>
     */
    inline void SetMetricName(const MetricName& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>Name of the Amazon GameLift-defined metric that is used to trigger a scaling
     * adjustment. For detailed descriptions of fleet metrics, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/monitoring-cloudwatch.html">Monitor
     * Amazon GameLift with Amazon CloudWatch</a>. </p> <ul> <li> <p>
     * <b>ActivatingGameSessions</b> -- Game sessions in the process of being
     * created.</p> </li> <li> <p> <b>ActiveGameSessions</b> -- Game sessions that are
     * currently running.</p> </li> <li> <p> <b>ActiveInstances</b> -- Fleet instances
     * that are currently running at least one game session.</p> </li> <li> <p>
     * <b>AvailableGameSessions</b> -- Additional game sessions that fleet could host
     * simultaneously, given current capacity.</p> </li> <li> <p>
     * <b>AvailablePlayerSessions</b> -- Empty player slots in currently active game
     * sessions. This includes game sessions that are not currently accepting players.
     * Reserved player slots are not included.</p> </li> <li> <p>
     * <b>CurrentPlayerSessions</b> -- Player slots in active game sessions that are
     * being used by a player or are reserved for a player. </p> </li> <li> <p>
     * <b>IdleInstances</b> -- Active instances that are currently hosting zero game
     * sessions. </p> </li> <li> <p> <b>PercentAvailableGameSessions</b> -- Unused
     * percentage of the total number of game sessions that a fleet could host
     * simultaneously, given current capacity. Use this metric for a target-based
     * scaling policy.</p> </li> <li> <p> <b>PercentIdleInstances</b> -- Percentage of
     * the total number of active instances that are hosting zero game sessions.</p>
     * </li> <li> <p> <b>QueueDepth</b> -- Pending game session placement requests, in
     * any queue, where the current fleet is the top-priority destination.</p> </li>
     * <li> <p> <b>WaitTime</b> -- Current wait time for pending game session placement
     * requests, in any queue, where the current fleet is the top-priority destination.
     * </p> </li> </ul>
     */
    inline void SetMetricName(MetricName&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>Name of the Amazon GameLift-defined metric that is used to trigger a scaling
     * adjustment. For detailed descriptions of fleet metrics, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/monitoring-cloudwatch.html">Monitor
     * Amazon GameLift with Amazon CloudWatch</a>. </p> <ul> <li> <p>
     * <b>ActivatingGameSessions</b> -- Game sessions in the process of being
     * created.</p> </li> <li> <p> <b>ActiveGameSessions</b> -- Game sessions that are
     * currently running.</p> </li> <li> <p> <b>ActiveInstances</b> -- Fleet instances
     * that are currently running at least one game session.</p> </li> <li> <p>
     * <b>AvailableGameSessions</b> -- Additional game sessions that fleet could host
     * simultaneously, given current capacity.</p> </li> <li> <p>
     * <b>AvailablePlayerSessions</b> -- Empty player slots in currently active game
     * sessions. This includes game sessions that are not currently accepting players.
     * Reserved player slots are not included.</p> </li> <li> <p>
     * <b>CurrentPlayerSessions</b> -- Player slots in active game sessions that are
     * being used by a player or are reserved for a player. </p> </li> <li> <p>
     * <b>IdleInstances</b> -- Active instances that are currently hosting zero game
     * sessions. </p> </li> <li> <p> <b>PercentAvailableGameSessions</b> -- Unused
     * percentage of the total number of game sessions that a fleet could host
     * simultaneously, given current capacity. Use this metric for a target-based
     * scaling policy.</p> </li> <li> <p> <b>PercentIdleInstances</b> -- Percentage of
     * the total number of active instances that are hosting zero game sessions.</p>
     * </li> <li> <p> <b>QueueDepth</b> -- Pending game session placement requests, in
     * any queue, where the current fleet is the top-priority destination.</p> </li>
     * <li> <p> <b>WaitTime</b> -- Current wait time for pending game session placement
     * requests, in any queue, where the current fleet is the top-priority destination.
     * </p> </li> </ul>
     */
    inline PutScalingPolicyRequest& WithMetricName(const MetricName& value) { SetMetricName(value); return *this;}

    /**
     * <p>Name of the Amazon GameLift-defined metric that is used to trigger a scaling
     * adjustment. For detailed descriptions of fleet metrics, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/monitoring-cloudwatch.html">Monitor
     * Amazon GameLift with Amazon CloudWatch</a>. </p> <ul> <li> <p>
     * <b>ActivatingGameSessions</b> -- Game sessions in the process of being
     * created.</p> </li> <li> <p> <b>ActiveGameSessions</b> -- Game sessions that are
     * currently running.</p> </li> <li> <p> <b>ActiveInstances</b> -- Fleet instances
     * that are currently running at least one game session.</p> </li> <li> <p>
     * <b>AvailableGameSessions</b> -- Additional game sessions that fleet could host
     * simultaneously, given current capacity.</p> </li> <li> <p>
     * <b>AvailablePlayerSessions</b> -- Empty player slots in currently active game
     * sessions. This includes game sessions that are not currently accepting players.
     * Reserved player slots are not included.</p> </li> <li> <p>
     * <b>CurrentPlayerSessions</b> -- Player slots in active game sessions that are
     * being used by a player or are reserved for a player. </p> </li> <li> <p>
     * <b>IdleInstances</b> -- Active instances that are currently hosting zero game
     * sessions. </p> </li> <li> <p> <b>PercentAvailableGameSessions</b> -- Unused
     * percentage of the total number of game sessions that a fleet could host
     * simultaneously, given current capacity. Use this metric for a target-based
     * scaling policy.</p> </li> <li> <p> <b>PercentIdleInstances</b> -- Percentage of
     * the total number of active instances that are hosting zero game sessions.</p>
     * </li> <li> <p> <b>QueueDepth</b> -- Pending game session placement requests, in
     * any queue, where the current fleet is the top-priority destination.</p> </li>
     * <li> <p> <b>WaitTime</b> -- Current wait time for pending game session placement
     * requests, in any queue, where the current fleet is the top-priority destination.
     * </p> </li> </ul>
     */
    inline PutScalingPolicyRequest& WithMetricName(MetricName&& value) { SetMetricName(std::move(value)); return *this;}


    /**
     * <p>The type of scaling policy to create. For a target-based policy, set the
     * parameter <i>MetricName</i> to 'PercentAvailableGameSessions' and specify a
     * <i>TargetConfiguration</i>. For a rule-based policy set the following
     * parameters: <i>MetricName</i>, <i>ComparisonOperator</i>, <i>Threshold</i>,
     * <i>EvaluationPeriods</i>, <i>ScalingAdjustmentType</i>, and
     * <i>ScalingAdjustment</i>.</p>
     */
    inline const PolicyType& GetPolicyType() const{ return m_policyType; }

    /**
     * <p>The type of scaling policy to create. For a target-based policy, set the
     * parameter <i>MetricName</i> to 'PercentAvailableGameSessions' and specify a
     * <i>TargetConfiguration</i>. For a rule-based policy set the following
     * parameters: <i>MetricName</i>, <i>ComparisonOperator</i>, <i>Threshold</i>,
     * <i>EvaluationPeriods</i>, <i>ScalingAdjustmentType</i>, and
     * <i>ScalingAdjustment</i>.</p>
     */
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }

    /**
     * <p>The type of scaling policy to create. For a target-based policy, set the
     * parameter <i>MetricName</i> to 'PercentAvailableGameSessions' and specify a
     * <i>TargetConfiguration</i>. For a rule-based policy set the following
     * parameters: <i>MetricName</i>, <i>ComparisonOperator</i>, <i>Threshold</i>,
     * <i>EvaluationPeriods</i>, <i>ScalingAdjustmentType</i>, and
     * <i>ScalingAdjustment</i>.</p>
     */
    inline void SetPolicyType(const PolicyType& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    /**
     * <p>The type of scaling policy to create. For a target-based policy, set the
     * parameter <i>MetricName</i> to 'PercentAvailableGameSessions' and specify a
     * <i>TargetConfiguration</i>. For a rule-based policy set the following
     * parameters: <i>MetricName</i>, <i>ComparisonOperator</i>, <i>Threshold</i>,
     * <i>EvaluationPeriods</i>, <i>ScalingAdjustmentType</i>, and
     * <i>ScalingAdjustment</i>.</p>
     */
    inline void SetPolicyType(PolicyType&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::move(value); }

    /**
     * <p>The type of scaling policy to create. For a target-based policy, set the
     * parameter <i>MetricName</i> to 'PercentAvailableGameSessions' and specify a
     * <i>TargetConfiguration</i>. For a rule-based policy set the following
     * parameters: <i>MetricName</i>, <i>ComparisonOperator</i>, <i>Threshold</i>,
     * <i>EvaluationPeriods</i>, <i>ScalingAdjustmentType</i>, and
     * <i>ScalingAdjustment</i>.</p>
     */
    inline PutScalingPolicyRequest& WithPolicyType(const PolicyType& value) { SetPolicyType(value); return *this;}

    /**
     * <p>The type of scaling policy to create. For a target-based policy, set the
     * parameter <i>MetricName</i> to 'PercentAvailableGameSessions' and specify a
     * <i>TargetConfiguration</i>. For a rule-based policy set the following
     * parameters: <i>MetricName</i>, <i>ComparisonOperator</i>, <i>Threshold</i>,
     * <i>EvaluationPeriods</i>, <i>ScalingAdjustmentType</i>, and
     * <i>ScalingAdjustment</i>.</p>
     */
    inline PutScalingPolicyRequest& WithPolicyType(PolicyType&& value) { SetPolicyType(std::move(value)); return *this;}


    /**
     * <p>An object that contains settings for a target-based scaling policy.</p>
     */
    inline const TargetConfiguration& GetTargetConfiguration() const{ return m_targetConfiguration; }

    /**
     * <p>An object that contains settings for a target-based scaling policy.</p>
     */
    inline bool TargetConfigurationHasBeenSet() const { return m_targetConfigurationHasBeenSet; }

    /**
     * <p>An object that contains settings for a target-based scaling policy.</p>
     */
    inline void SetTargetConfiguration(const TargetConfiguration& value) { m_targetConfigurationHasBeenSet = true; m_targetConfiguration = value; }

    /**
     * <p>An object that contains settings for a target-based scaling policy.</p>
     */
    inline void SetTargetConfiguration(TargetConfiguration&& value) { m_targetConfigurationHasBeenSet = true; m_targetConfiguration = std::move(value); }

    /**
     * <p>An object that contains settings for a target-based scaling policy.</p>
     */
    inline PutScalingPolicyRequest& WithTargetConfiguration(const TargetConfiguration& value) { SetTargetConfiguration(value); return *this;}

    /**
     * <p>An object that contains settings for a target-based scaling policy.</p>
     */
    inline PutScalingPolicyRequest& WithTargetConfiguration(TargetConfiguration&& value) { SetTargetConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    int m_scalingAdjustment;
    bool m_scalingAdjustmentHasBeenSet = false;

    ScalingAdjustmentType m_scalingAdjustmentType;
    bool m_scalingAdjustmentTypeHasBeenSet = false;

    double m_threshold;
    bool m_thresholdHasBeenSet = false;

    ComparisonOperatorType m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet = false;

    int m_evaluationPeriods;
    bool m_evaluationPeriodsHasBeenSet = false;

    MetricName m_metricName;
    bool m_metricNameHasBeenSet = false;

    PolicyType m_policyType;
    bool m_policyTypeHasBeenSet = false;

    TargetConfiguration m_targetConfiguration;
    bool m_targetConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
