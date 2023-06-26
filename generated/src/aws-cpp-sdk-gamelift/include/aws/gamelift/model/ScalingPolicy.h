/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/ScalingStatusType.h>
#include <aws/gamelift/model/ScalingAdjustmentType.h>
#include <aws/gamelift/model/ComparisonOperatorType.h>
#include <aws/gamelift/model/MetricName.h>
#include <aws/gamelift/model/PolicyType.h>
#include <aws/gamelift/model/TargetConfiguration.h>
#include <aws/gamelift/model/LocationUpdateStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
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
  class ScalingPolicy
  {
  public:
    AWS_GAMELIFT_API ScalingPolicy();
    AWS_GAMELIFT_API ScalingPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ScalingPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the fleet that is associated with this scaling
     * policy.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for the fleet that is associated with this scaling
     * policy.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the fleet that is associated with this scaling
     * policy.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>A unique identifier for the fleet that is associated with this scaling
     * policy.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for the fleet that is associated with this scaling
     * policy.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for the fleet that is associated with this scaling
     * policy.</p>
     */
    inline ScalingPolicy& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for the fleet that is associated with this scaling
     * policy.</p>
     */
    inline ScalingPolicy& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the fleet that is associated with this scaling
     * policy.</p>
     */
    inline ScalingPolicy& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline void SetFleetArn(const Aws::String& value) { m_fleetArnHasBeenSet = true; m_fleetArn = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline void SetFleetArn(Aws::String&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline void SetFleetArn(const char* value) { m_fleetArnHasBeenSet = true; m_fleetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline ScalingPolicy& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline ScalingPolicy& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline ScalingPolicy& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}


    /**
     * <p>A descriptive label that is associated with a fleet's scaling policy. Policy
     * names do not need to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A descriptive label that is associated with a fleet's scaling policy. Policy
     * names do not need to be unique.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A descriptive label that is associated with a fleet's scaling policy. Policy
     * names do not need to be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A descriptive label that is associated with a fleet's scaling policy. Policy
     * names do not need to be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A descriptive label that is associated with a fleet's scaling policy. Policy
     * names do not need to be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A descriptive label that is associated with a fleet's scaling policy. Policy
     * names do not need to be unique.</p>
     */
    inline ScalingPolicy& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A descriptive label that is associated with a fleet's scaling policy. Policy
     * names do not need to be unique.</p>
     */
    inline ScalingPolicy& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A descriptive label that is associated with a fleet's scaling policy. Policy
     * names do not need to be unique.</p>
     */
    inline ScalingPolicy& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Current status of the scaling policy. The scaling policy can be in force only
     * when in an <code>ACTIVE</code> status. Scaling policies can be suspended for
     * individual fleets. If the policy is suspended for a fleet, the policy status
     * does not change.</p> <ul> <li> <p> <b>ACTIVE</b> -- The scaling policy can be
     * used for auto-scaling a fleet.</p> </li> <li> <p> <b>UPDATE_REQUESTED</b> -- A
     * request to update the scaling policy has been received.</p> </li> <li> <p>
     * <b>UPDATING</b> -- A change is being made to the scaling policy.</p> </li> <li>
     * <p> <b>DELETE_REQUESTED</b> -- A request to delete the scaling policy has been
     * received.</p> </li> <li> <p> <b>DELETING</b> -- The scaling policy is being
     * deleted.</p> </li> <li> <p> <b>DELETED</b> -- The scaling policy has been
     * deleted.</p> </li> <li> <p> <b>ERROR</b> -- An error occurred in creating the
     * policy. It should be removed and recreated.</p> </li> </ul>
     */
    inline const ScalingStatusType& GetStatus() const{ return m_status; }

    /**
     * <p>Current status of the scaling policy. The scaling policy can be in force only
     * when in an <code>ACTIVE</code> status. Scaling policies can be suspended for
     * individual fleets. If the policy is suspended for a fleet, the policy status
     * does not change.</p> <ul> <li> <p> <b>ACTIVE</b> -- The scaling policy can be
     * used for auto-scaling a fleet.</p> </li> <li> <p> <b>UPDATE_REQUESTED</b> -- A
     * request to update the scaling policy has been received.</p> </li> <li> <p>
     * <b>UPDATING</b> -- A change is being made to the scaling policy.</p> </li> <li>
     * <p> <b>DELETE_REQUESTED</b> -- A request to delete the scaling policy has been
     * received.</p> </li> <li> <p> <b>DELETING</b> -- The scaling policy is being
     * deleted.</p> </li> <li> <p> <b>DELETED</b> -- The scaling policy has been
     * deleted.</p> </li> <li> <p> <b>ERROR</b> -- An error occurred in creating the
     * policy. It should be removed and recreated.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Current status of the scaling policy. The scaling policy can be in force only
     * when in an <code>ACTIVE</code> status. Scaling policies can be suspended for
     * individual fleets. If the policy is suspended for a fleet, the policy status
     * does not change.</p> <ul> <li> <p> <b>ACTIVE</b> -- The scaling policy can be
     * used for auto-scaling a fleet.</p> </li> <li> <p> <b>UPDATE_REQUESTED</b> -- A
     * request to update the scaling policy has been received.</p> </li> <li> <p>
     * <b>UPDATING</b> -- A change is being made to the scaling policy.</p> </li> <li>
     * <p> <b>DELETE_REQUESTED</b> -- A request to delete the scaling policy has been
     * received.</p> </li> <li> <p> <b>DELETING</b> -- The scaling policy is being
     * deleted.</p> </li> <li> <p> <b>DELETED</b> -- The scaling policy has been
     * deleted.</p> </li> <li> <p> <b>ERROR</b> -- An error occurred in creating the
     * policy. It should be removed and recreated.</p> </li> </ul>
     */
    inline void SetStatus(const ScalingStatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Current status of the scaling policy. The scaling policy can be in force only
     * when in an <code>ACTIVE</code> status. Scaling policies can be suspended for
     * individual fleets. If the policy is suspended for a fleet, the policy status
     * does not change.</p> <ul> <li> <p> <b>ACTIVE</b> -- The scaling policy can be
     * used for auto-scaling a fleet.</p> </li> <li> <p> <b>UPDATE_REQUESTED</b> -- A
     * request to update the scaling policy has been received.</p> </li> <li> <p>
     * <b>UPDATING</b> -- A change is being made to the scaling policy.</p> </li> <li>
     * <p> <b>DELETE_REQUESTED</b> -- A request to delete the scaling policy has been
     * received.</p> </li> <li> <p> <b>DELETING</b> -- The scaling policy is being
     * deleted.</p> </li> <li> <p> <b>DELETED</b> -- The scaling policy has been
     * deleted.</p> </li> <li> <p> <b>ERROR</b> -- An error occurred in creating the
     * policy. It should be removed and recreated.</p> </li> </ul>
     */
    inline void SetStatus(ScalingStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Current status of the scaling policy. The scaling policy can be in force only
     * when in an <code>ACTIVE</code> status. Scaling policies can be suspended for
     * individual fleets. If the policy is suspended for a fleet, the policy status
     * does not change.</p> <ul> <li> <p> <b>ACTIVE</b> -- The scaling policy can be
     * used for auto-scaling a fleet.</p> </li> <li> <p> <b>UPDATE_REQUESTED</b> -- A
     * request to update the scaling policy has been received.</p> </li> <li> <p>
     * <b>UPDATING</b> -- A change is being made to the scaling policy.</p> </li> <li>
     * <p> <b>DELETE_REQUESTED</b> -- A request to delete the scaling policy has been
     * received.</p> </li> <li> <p> <b>DELETING</b> -- The scaling policy is being
     * deleted.</p> </li> <li> <p> <b>DELETED</b> -- The scaling policy has been
     * deleted.</p> </li> <li> <p> <b>ERROR</b> -- An error occurred in creating the
     * policy. It should be removed and recreated.</p> </li> </ul>
     */
    inline ScalingPolicy& WithStatus(const ScalingStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>Current status of the scaling policy. The scaling policy can be in force only
     * when in an <code>ACTIVE</code> status. Scaling policies can be suspended for
     * individual fleets. If the policy is suspended for a fleet, the policy status
     * does not change.</p> <ul> <li> <p> <b>ACTIVE</b> -- The scaling policy can be
     * used for auto-scaling a fleet.</p> </li> <li> <p> <b>UPDATE_REQUESTED</b> -- A
     * request to update the scaling policy has been received.</p> </li> <li> <p>
     * <b>UPDATING</b> -- A change is being made to the scaling policy.</p> </li> <li>
     * <p> <b>DELETE_REQUESTED</b> -- A request to delete the scaling policy has been
     * received.</p> </li> <li> <p> <b>DELETING</b> -- The scaling policy is being
     * deleted.</p> </li> <li> <p> <b>DELETED</b> -- The scaling policy has been
     * deleted.</p> </li> <li> <p> <b>ERROR</b> -- An error occurred in creating the
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
    inline bool ScalingAdjustmentHasBeenSet() const { return m_scalingAdjustmentHasBeenSet; }

    /**
     * <p>Amount of adjustment to make, based on the scaling adjustment type.</p>
     */
    inline void SetScalingAdjustment(int value) { m_scalingAdjustmentHasBeenSet = true; m_scalingAdjustment = value; }

    /**
     * <p>Amount of adjustment to make, based on the scaling adjustment type.</p>
     */
    inline ScalingPolicy& WithScalingAdjustment(int value) { SetScalingAdjustment(value); return *this;}


    /**
     * <p>The type of adjustment to make to a fleet's instance count.</p> <ul> <li> <p>
     * <b>ChangeInCapacity</b> -- add (or subtract) the scaling adjustment value from
     * the current instance count. Positive values scale up while negative values scale
     * down.</p> </li> <li> <p> <b>ExactCapacity</b> -- set the instance count to the
     * scaling adjustment value.</p> </li> <li> <p> <b>PercentChangeInCapacity</b> --
     * increase or reduce the current instance count by the scaling adjustment, read as
     * a percentage. Positive values scale up while negative values scale down.</p>
     * </li> </ul>
     */
    inline const ScalingAdjustmentType& GetScalingAdjustmentType() const{ return m_scalingAdjustmentType; }

    /**
     * <p>The type of adjustment to make to a fleet's instance count.</p> <ul> <li> <p>
     * <b>ChangeInCapacity</b> -- add (or subtract) the scaling adjustment value from
     * the current instance count. Positive values scale up while negative values scale
     * down.</p> </li> <li> <p> <b>ExactCapacity</b> -- set the instance count to the
     * scaling adjustment value.</p> </li> <li> <p> <b>PercentChangeInCapacity</b> --
     * increase or reduce the current instance count by the scaling adjustment, read as
     * a percentage. Positive values scale up while negative values scale down.</p>
     * </li> </ul>
     */
    inline bool ScalingAdjustmentTypeHasBeenSet() const { return m_scalingAdjustmentTypeHasBeenSet; }

    /**
     * <p>The type of adjustment to make to a fleet's instance count.</p> <ul> <li> <p>
     * <b>ChangeInCapacity</b> -- add (or subtract) the scaling adjustment value from
     * the current instance count. Positive values scale up while negative values scale
     * down.</p> </li> <li> <p> <b>ExactCapacity</b> -- set the instance count to the
     * scaling adjustment value.</p> </li> <li> <p> <b>PercentChangeInCapacity</b> --
     * increase or reduce the current instance count by the scaling adjustment, read as
     * a percentage. Positive values scale up while negative values scale down.</p>
     * </li> </ul>
     */
    inline void SetScalingAdjustmentType(const ScalingAdjustmentType& value) { m_scalingAdjustmentTypeHasBeenSet = true; m_scalingAdjustmentType = value; }

    /**
     * <p>The type of adjustment to make to a fleet's instance count.</p> <ul> <li> <p>
     * <b>ChangeInCapacity</b> -- add (or subtract) the scaling adjustment value from
     * the current instance count. Positive values scale up while negative values scale
     * down.</p> </li> <li> <p> <b>ExactCapacity</b> -- set the instance count to the
     * scaling adjustment value.</p> </li> <li> <p> <b>PercentChangeInCapacity</b> --
     * increase or reduce the current instance count by the scaling adjustment, read as
     * a percentage. Positive values scale up while negative values scale down.</p>
     * </li> </ul>
     */
    inline void SetScalingAdjustmentType(ScalingAdjustmentType&& value) { m_scalingAdjustmentTypeHasBeenSet = true; m_scalingAdjustmentType = std::move(value); }

    /**
     * <p>The type of adjustment to make to a fleet's instance count.</p> <ul> <li> <p>
     * <b>ChangeInCapacity</b> -- add (or subtract) the scaling adjustment value from
     * the current instance count. Positive values scale up while negative values scale
     * down.</p> </li> <li> <p> <b>ExactCapacity</b> -- set the instance count to the
     * scaling adjustment value.</p> </li> <li> <p> <b>PercentChangeInCapacity</b> --
     * increase or reduce the current instance count by the scaling adjustment, read as
     * a percentage. Positive values scale up while negative values scale down.</p>
     * </li> </ul>
     */
    inline ScalingPolicy& WithScalingAdjustmentType(const ScalingAdjustmentType& value) { SetScalingAdjustmentType(value); return *this;}

    /**
     * <p>The type of adjustment to make to a fleet's instance count.</p> <ul> <li> <p>
     * <b>ChangeInCapacity</b> -- add (or subtract) the scaling adjustment value from
     * the current instance count. Positive values scale up while negative values scale
     * down.</p> </li> <li> <p> <b>ExactCapacity</b> -- set the instance count to the
     * scaling adjustment value.</p> </li> <li> <p> <b>PercentChangeInCapacity</b> --
     * increase or reduce the current instance count by the scaling adjustment, read as
     * a percentage. Positive values scale up while negative values scale down.</p>
     * </li> </ul>
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
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }

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
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }

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
    inline ScalingPolicy& WithEvaluationPeriods(int value) { SetEvaluationPeriods(value); return *this;}


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
    inline ScalingPolicy& WithMetricName(const MetricName& value) { SetMetricName(value); return *this;}

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
    inline ScalingPolicy& WithMetricName(MetricName&& value) { SetMetricName(std::move(value)); return *this;}


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
    inline ScalingPolicy& WithPolicyType(const PolicyType& value) { SetPolicyType(value); return *this;}

    /**
     * <p>The type of scaling policy to create. For a target-based policy, set the
     * parameter <i>MetricName</i> to 'PercentAvailableGameSessions' and specify a
     * <i>TargetConfiguration</i>. For a rule-based policy set the following
     * parameters: <i>MetricName</i>, <i>ComparisonOperator</i>, <i>Threshold</i>,
     * <i>EvaluationPeriods</i>, <i>ScalingAdjustmentType</i>, and
     * <i>ScalingAdjustment</i>.</p>
     */
    inline ScalingPolicy& WithPolicyType(PolicyType&& value) { SetPolicyType(std::move(value)); return *this;}


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
    inline ScalingPolicy& WithTargetConfiguration(const TargetConfiguration& value) { SetTargetConfiguration(value); return *this;}

    /**
     * <p>An object that contains settings for a target-based scaling policy.</p>
     */
    inline ScalingPolicy& WithTargetConfiguration(TargetConfiguration&& value) { SetTargetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The current status of the fleet's scaling policies in a requested fleet
     * location. The status <code>PENDING_UPDATE</code> indicates that an update was
     * requested for the fleet but has not yet been completed for the location.</p>
     */
    inline const LocationUpdateStatus& GetUpdateStatus() const{ return m_updateStatus; }

    /**
     * <p>The current status of the fleet's scaling policies in a requested fleet
     * location. The status <code>PENDING_UPDATE</code> indicates that an update was
     * requested for the fleet but has not yet been completed for the location.</p>
     */
    inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }

    /**
     * <p>The current status of the fleet's scaling policies in a requested fleet
     * location. The status <code>PENDING_UPDATE</code> indicates that an update was
     * requested for the fleet but has not yet been completed for the location.</p>
     */
    inline void SetUpdateStatus(const LocationUpdateStatus& value) { m_updateStatusHasBeenSet = true; m_updateStatus = value; }

    /**
     * <p>The current status of the fleet's scaling policies in a requested fleet
     * location. The status <code>PENDING_UPDATE</code> indicates that an update was
     * requested for the fleet but has not yet been completed for the location.</p>
     */
    inline void SetUpdateStatus(LocationUpdateStatus&& value) { m_updateStatusHasBeenSet = true; m_updateStatus = std::move(value); }

    /**
     * <p>The current status of the fleet's scaling policies in a requested fleet
     * location. The status <code>PENDING_UPDATE</code> indicates that an update was
     * requested for the fleet but has not yet been completed for the location.</p>
     */
    inline ScalingPolicy& WithUpdateStatus(const LocationUpdateStatus& value) { SetUpdateStatus(value); return *this;}

    /**
     * <p>The current status of the fleet's scaling policies in a requested fleet
     * location. The status <code>PENDING_UPDATE</code> indicates that an update was
     * requested for the fleet but has not yet been completed for the location.</p>
     */
    inline ScalingPolicy& WithUpdateStatus(LocationUpdateStatus&& value) { SetUpdateStatus(std::move(value)); return *this;}


    /**
     * <p> The fleet location. </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p> The fleet location. </p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p> The fleet location. </p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p> The fleet location. </p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p> The fleet location. </p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p> The fleet location. </p>
     */
    inline ScalingPolicy& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p> The fleet location. </p>
     */
    inline ScalingPolicy& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p> The fleet location. </p>
     */
    inline ScalingPolicy& WithLocation(const char* value) { SetLocation(value); return *this;}

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ScalingStatusType m_status;
    bool m_statusHasBeenSet = false;

    int m_scalingAdjustment;
    bool m_scalingAdjustmentHasBeenSet = false;

    ScalingAdjustmentType m_scalingAdjustmentType;
    bool m_scalingAdjustmentTypeHasBeenSet = false;

    ComparisonOperatorType m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet = false;

    double m_threshold;
    bool m_thresholdHasBeenSet = false;

    int m_evaluationPeriods;
    bool m_evaluationPeriodsHasBeenSet = false;

    MetricName m_metricName;
    bool m_metricNameHasBeenSet = false;

    PolicyType m_policyType;
    bool m_policyTypeHasBeenSet = false;

    TargetConfiguration m_targetConfiguration;
    bool m_targetConfigurationHasBeenSet = false;

    LocationUpdateStatus m_updateStatus;
    bool m_updateStatusHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
