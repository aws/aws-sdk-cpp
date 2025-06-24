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
    AWS_GAMELIFT_API ScalingPolicy() = default;
    AWS_GAMELIFT_API ScalingPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ScalingPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the fleet that is associated with this scaling
     * policy.</p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    ScalingPolicy& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift Servers fleet resource and uniquely
     * identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline const Aws::String& GetFleetArn() const { return m_fleetArn; }
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }
    template<typename FleetArnT = Aws::String>
    void SetFleetArn(FleetArnT&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::forward<FleetArnT>(value); }
    template<typename FleetArnT = Aws::String>
    ScalingPolicy& WithFleetArn(FleetArnT&& value) { SetFleetArn(std::forward<FleetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive label that is associated with a fleet's scaling policy. Policy
     * names do not need to be unique.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ScalingPolicy& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
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
    inline ScalingStatusType GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ScalingStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline ScalingPolicy& WithStatus(ScalingStatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amount of adjustment to make, based on the scaling adjustment type.</p>
     */
    inline int GetScalingAdjustment() const { return m_scalingAdjustment; }
    inline bool ScalingAdjustmentHasBeenSet() const { return m_scalingAdjustmentHasBeenSet; }
    inline void SetScalingAdjustment(int value) { m_scalingAdjustmentHasBeenSet = true; m_scalingAdjustment = value; }
    inline ScalingPolicy& WithScalingAdjustment(int value) { SetScalingAdjustment(value); return *this;}
    ///@}

    ///@{
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
    inline ScalingAdjustmentType GetScalingAdjustmentType() const { return m_scalingAdjustmentType; }
    inline bool ScalingAdjustmentTypeHasBeenSet() const { return m_scalingAdjustmentTypeHasBeenSet; }
    inline void SetScalingAdjustmentType(ScalingAdjustmentType value) { m_scalingAdjustmentTypeHasBeenSet = true; m_scalingAdjustmentType = value; }
    inline ScalingPolicy& WithScalingAdjustmentType(ScalingAdjustmentType value) { SetScalingAdjustmentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Comparison operator to use when measuring a metric against the threshold
     * value.</p>
     */
    inline ComparisonOperatorType GetComparisonOperator() const { return m_comparisonOperator; }
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }
    inline void SetComparisonOperator(ComparisonOperatorType value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }
    inline ScalingPolicy& WithComparisonOperator(ComparisonOperatorType value) { SetComparisonOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metric value used to trigger a scaling event.</p>
     */
    inline double GetThreshold() const { return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }
    inline ScalingPolicy& WithThreshold(double value) { SetThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Length of time (in minutes) the metric must be at or beyond the threshold
     * before a scaling event is triggered.</p>
     */
    inline int GetEvaluationPeriods() const { return m_evaluationPeriods; }
    inline bool EvaluationPeriodsHasBeenSet() const { return m_evaluationPeriodsHasBeenSet; }
    inline void SetEvaluationPeriods(int value) { m_evaluationPeriodsHasBeenSet = true; m_evaluationPeriods = value; }
    inline ScalingPolicy& WithEvaluationPeriods(int value) { SetEvaluationPeriods(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the Amazon GameLift Servers-defined metric that is used to trigger a
     * scaling adjustment. For detailed descriptions of fleet metrics, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/monitoring-cloudwatch.html">Monitor
     * Amazon GameLift Servers with Amazon CloudWatch</a>. </p> <ul> <li> <p>
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
    inline MetricName GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(MetricName value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline ScalingPolicy& WithMetricName(MetricName value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of scaling policy to create. For a target-based policy, set the
     * parameter <i>MetricName</i> to 'PercentAvailableGameSessions' and specify a
     * <i>TargetConfiguration</i>. For a rule-based policy set the following
     * parameters: <i>MetricName</i>, <i>ComparisonOperator</i>, <i>Threshold</i>,
     * <i>EvaluationPeriods</i>, <i>ScalingAdjustmentType</i>, and
     * <i>ScalingAdjustment</i>.</p>
     */
    inline PolicyType GetPolicyType() const { return m_policyType; }
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
    inline void SetPolicyType(PolicyType value) { m_policyTypeHasBeenSet = true; m_policyType = value; }
    inline ScalingPolicy& WithPolicyType(PolicyType value) { SetPolicyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains settings for a target-based scaling policy.</p>
     */
    inline const TargetConfiguration& GetTargetConfiguration() const { return m_targetConfiguration; }
    inline bool TargetConfigurationHasBeenSet() const { return m_targetConfigurationHasBeenSet; }
    template<typename TargetConfigurationT = TargetConfiguration>
    void SetTargetConfiguration(TargetConfigurationT&& value) { m_targetConfigurationHasBeenSet = true; m_targetConfiguration = std::forward<TargetConfigurationT>(value); }
    template<typename TargetConfigurationT = TargetConfiguration>
    ScalingPolicy& WithTargetConfiguration(TargetConfigurationT&& value) { SetTargetConfiguration(std::forward<TargetConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the fleet's scaling policies in a requested fleet
     * location. The status <code>PENDING_UPDATE</code> indicates that an update was
     * requested for the fleet but has not yet been completed for the location.</p>
     */
    inline LocationUpdateStatus GetUpdateStatus() const { return m_updateStatus; }
    inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }
    inline void SetUpdateStatus(LocationUpdateStatus value) { m_updateStatusHasBeenSet = true; m_updateStatus = value; }
    inline ScalingPolicy& WithUpdateStatus(LocationUpdateStatus value) { SetUpdateStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The fleet location. </p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    ScalingPolicy& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ScalingStatusType m_status{ScalingStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    int m_scalingAdjustment{0};
    bool m_scalingAdjustmentHasBeenSet = false;

    ScalingAdjustmentType m_scalingAdjustmentType{ScalingAdjustmentType::NOT_SET};
    bool m_scalingAdjustmentTypeHasBeenSet = false;

    ComparisonOperatorType m_comparisonOperator{ComparisonOperatorType::NOT_SET};
    bool m_comparisonOperatorHasBeenSet = false;

    double m_threshold{0.0};
    bool m_thresholdHasBeenSet = false;

    int m_evaluationPeriods{0};
    bool m_evaluationPeriodsHasBeenSet = false;

    MetricName m_metricName{MetricName::NOT_SET};
    bool m_metricNameHasBeenSet = false;

    PolicyType m_policyType{PolicyType::NOT_SET};
    bool m_policyTypeHasBeenSet = false;

    TargetConfiguration m_targetConfiguration;
    bool m_targetConfigurationHasBeenSet = false;

    LocationUpdateStatus m_updateStatus{LocationUpdateStatus::NOT_SET};
    bool m_updateStatusHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
