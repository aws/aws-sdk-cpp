/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/ScaleInProtectedInstances.h>
#include <aws/autoscaling/model/StandbyInstances.h>
#include <aws/autoscaling/model/AlarmSpecification.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Describes the preferences for an instance refresh.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/RefreshPreferences">AWS
   * API Reference</a></p>
   */
  class RefreshPreferences
  {
  public:
    AWS_AUTOSCALING_API RefreshPreferences() = default;
    AWS_AUTOSCALING_API RefreshPreferences(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API RefreshPreferences& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Specifies the minimum percentage of the group to keep in service, healthy,
     * and ready to use to support your workload to allow the operation to continue.
     * The value is expressed as a percentage of the desired capacity of the Auto
     * Scaling group. Value range is 0 to 100.</p> <p>If you do not specify this
     * property, the default is 90 percent, or the percentage set in the instance
     * maintenance policy for the Auto Scaling group, if defined.</p>
     */
    inline int GetMinHealthyPercentage() const { return m_minHealthyPercentage; }
    inline bool MinHealthyPercentageHasBeenSet() const { return m_minHealthyPercentageHasBeenSet; }
    inline void SetMinHealthyPercentage(int value) { m_minHealthyPercentageHasBeenSet = true; m_minHealthyPercentage = value; }
    inline RefreshPreferences& WithMinHealthyPercentage(int value) { SetMinHealthyPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time period, in seconds, during which an instance refresh waits before
     * moving on to replacing the next instance after a new instance enters the
     * <code>InService</code> state.</p> <p>This property is not required for normal
     * usage. Instead, use the <code>DefaultInstanceWarmup</code> property of the Auto
     * Scaling group. The <code>InstanceWarmup</code> and
     * <code>DefaultInstanceWarmup</code> properties work the same way. Only specify
     * this property if you must override the <code>DefaultInstanceWarmup</code>
     * property. </p> <p> If you do not specify this property, the instance warmup by
     * default is the value of the <code>DefaultInstanceWarmup</code> property, if
     * defined (which is recommended in all cases), or the
     * <code>HealthCheckGracePeriod</code> property otherwise.</p>
     */
    inline int GetInstanceWarmup() const { return m_instanceWarmup; }
    inline bool InstanceWarmupHasBeenSet() const { return m_instanceWarmupHasBeenSet; }
    inline void SetInstanceWarmup(int value) { m_instanceWarmupHasBeenSet = true; m_instanceWarmup = value; }
    inline RefreshPreferences& WithInstanceWarmup(int value) { SetInstanceWarmup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) Threshold values for each checkpoint in ascending order. Each
     * number must be unique. To replace all instances in the Auto Scaling group, the
     * last number in the array must be <code>100</code>.</p> <p>For usage examples,
     * see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-adding-checkpoints-instance-refresh.html">Add
     * checkpoints to an instance refresh</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<int>& GetCheckpointPercentages() const { return m_checkpointPercentages; }
    inline bool CheckpointPercentagesHasBeenSet() const { return m_checkpointPercentagesHasBeenSet; }
    template<typename CheckpointPercentagesT = Aws::Vector<int>>
    void SetCheckpointPercentages(CheckpointPercentagesT&& value) { m_checkpointPercentagesHasBeenSet = true; m_checkpointPercentages = std::forward<CheckpointPercentagesT>(value); }
    template<typename CheckpointPercentagesT = Aws::Vector<int>>
    RefreshPreferences& WithCheckpointPercentages(CheckpointPercentagesT&& value) { SetCheckpointPercentages(std::forward<CheckpointPercentagesT>(value)); return *this;}
    inline RefreshPreferences& AddCheckpointPercentages(int value) { m_checkpointPercentagesHasBeenSet = true; m_checkpointPercentages.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Optional) The amount of time, in seconds, to wait after a checkpoint before
     * continuing. This property is optional, but if you specify a value for it, you
     * must also specify a value for <code>CheckpointPercentages</code>. If you specify
     * a value for <code>CheckpointPercentages</code> and not for
     * <code>CheckpointDelay</code>, the <code>CheckpointDelay</code> defaults to
     * <code>3600</code> (1 hour). </p>
     */
    inline int GetCheckpointDelay() const { return m_checkpointDelay; }
    inline bool CheckpointDelayHasBeenSet() const { return m_checkpointDelayHasBeenSet; }
    inline void SetCheckpointDelay(int value) { m_checkpointDelayHasBeenSet = true; m_checkpointDelay = value; }
    inline RefreshPreferences& WithCheckpointDelay(int value) { SetCheckpointDelay(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) Indicates whether skip matching is enabled. If enabled
     * (<code>true</code>), then Amazon EC2 Auto Scaling skips replacing instances that
     * match the desired configuration. If no desired configuration is specified, then
     * it skips replacing instances that have the same launch template and instance
     * types that the Auto Scaling group was using before the start of the instance
     * refresh. The default is <code>false</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-refresh-skip-matching.html">Use
     * an instance refresh with skip matching</a> in the <i>Amazon EC2 Auto Scaling
     * User Guide</i>.</p>
     */
    inline bool GetSkipMatching() const { return m_skipMatching; }
    inline bool SkipMatchingHasBeenSet() const { return m_skipMatchingHasBeenSet; }
    inline void SetSkipMatching(bool value) { m_skipMatchingHasBeenSet = true; m_skipMatching = value; }
    inline RefreshPreferences& WithSkipMatching(bool value) { SetSkipMatching(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) Indicates whether to roll back the Auto Scaling group to its
     * previous configuration if the instance refresh fails or a CloudWatch alarm
     * threshold is met. The default is <code>false</code>.</p> <p>A rollback is not
     * supported in the following situations: </p> <ul> <li> <p>There is no desired
     * configuration specified for the instance refresh.</p> </li> <li> <p>The Auto
     * Scaling group has a launch template that uses an Amazon Web Services Systems
     * Manager parameter instead of an AMI ID for the <code>ImageId</code>
     * property.</p> </li> <li> <p>The Auto Scaling group uses the launch template's
     * <code>$Latest</code> or <code>$Default</code> version.</p> </li> </ul> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/instance-refresh-rollback.html">Undo
     * changes with a rollback</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline bool GetAutoRollback() const { return m_autoRollback; }
    inline bool AutoRollbackHasBeenSet() const { return m_autoRollbackHasBeenSet; }
    inline void SetAutoRollback(bool value) { m_autoRollbackHasBeenSet = true; m_autoRollback = value; }
    inline RefreshPreferences& WithAutoRollback(bool value) { SetAutoRollback(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Choose the behavior that you want Amazon EC2 Auto Scaling to use if instances
     * protected from scale in are found. </p> <p>The following lists the valid
     * values:</p> <dl> <dt>Refresh</dt> <dd> <p>Amazon EC2 Auto Scaling replaces
     * instances that are protected from scale in.</p> </dd> <dt>Ignore</dt> <dd>
     * <p>Amazon EC2 Auto Scaling ignores instances that are protected from scale in
     * and continues to replace instances that are not protected.</p> </dd> <dt>Wait
     * (default)</dt> <dd> <p>Amazon EC2 Auto Scaling waits one hour for you to remove
     * scale-in protection. Otherwise, the instance refresh will fail.</p> </dd> </dl>
     */
    inline ScaleInProtectedInstances GetScaleInProtectedInstances() const { return m_scaleInProtectedInstances; }
    inline bool ScaleInProtectedInstancesHasBeenSet() const { return m_scaleInProtectedInstancesHasBeenSet; }
    inline void SetScaleInProtectedInstances(ScaleInProtectedInstances value) { m_scaleInProtectedInstancesHasBeenSet = true; m_scaleInProtectedInstances = value; }
    inline RefreshPreferences& WithScaleInProtectedInstances(ScaleInProtectedInstances value) { SetScaleInProtectedInstances(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Choose the behavior that you want Amazon EC2 Auto Scaling to use if instances
     * in <code>Standby</code> state are found.</p> <p>The following lists the valid
     * values:</p> <dl> <dt>Terminate</dt> <dd> <p>Amazon EC2 Auto Scaling terminates
     * instances that are in <code>Standby</code>.</p> </dd> <dt>Ignore</dt> <dd>
     * <p>Amazon EC2 Auto Scaling ignores instances that are in <code>Standby</code>
     * and continues to replace instances that are in the <code>InService</code>
     * state.</p> </dd> <dt>Wait (default)</dt> <dd> <p>Amazon EC2 Auto Scaling waits
     * one hour for you to return the instances to service. Otherwise, the instance
     * refresh will fail.</p> </dd> </dl>
     */
    inline StandbyInstances GetStandbyInstances() const { return m_standbyInstances; }
    inline bool StandbyInstancesHasBeenSet() const { return m_standbyInstancesHasBeenSet; }
    inline void SetStandbyInstances(StandbyInstances value) { m_standbyInstancesHasBeenSet = true; m_standbyInstances = value; }
    inline RefreshPreferences& WithStandbyInstances(StandbyInstances value) { SetStandbyInstances(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) The CloudWatch alarm specification. CloudWatch alarms can be used
     * to identify any issues and fail the operation if an alarm threshold is met.</p>
     */
    inline const AlarmSpecification& GetAlarmSpecification() const { return m_alarmSpecification; }
    inline bool AlarmSpecificationHasBeenSet() const { return m_alarmSpecificationHasBeenSet; }
    template<typename AlarmSpecificationT = AlarmSpecification>
    void SetAlarmSpecification(AlarmSpecificationT&& value) { m_alarmSpecificationHasBeenSet = true; m_alarmSpecification = std::forward<AlarmSpecificationT>(value); }
    template<typename AlarmSpecificationT = AlarmSpecification>
    RefreshPreferences& WithAlarmSpecification(AlarmSpecificationT&& value) { SetAlarmSpecification(std::forward<AlarmSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum percentage of the group that can be in service and
     * healthy, or pending, to support your workload when replacing instances. The
     * value is expressed as a percentage of the desired capacity of the Auto Scaling
     * group. Value range is 100 to 200.</p> <p>If you specify
     * <code>MaxHealthyPercentage</code>, you must also specify
     * <code>MinHealthyPercentage</code>, and the difference between them cannot be
     * greater than 100. A larger range increases the number of instances that can be
     * replaced at the same time.</p> <p>If you do not specify this property, the
     * default is 100 percent, or the percentage set in the instance maintenance policy
     * for the Auto Scaling group, if defined.</p>
     */
    inline int GetMaxHealthyPercentage() const { return m_maxHealthyPercentage; }
    inline bool MaxHealthyPercentageHasBeenSet() const { return m_maxHealthyPercentageHasBeenSet; }
    inline void SetMaxHealthyPercentage(int value) { m_maxHealthyPercentageHasBeenSet = true; m_maxHealthyPercentage = value; }
    inline RefreshPreferences& WithMaxHealthyPercentage(int value) { SetMaxHealthyPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The amount of time, in seconds, to wait at the end of an instance refresh
     * before the instance refresh is considered complete. </p>
     */
    inline int GetBakeTime() const { return m_bakeTime; }
    inline bool BakeTimeHasBeenSet() const { return m_bakeTimeHasBeenSet; }
    inline void SetBakeTime(int value) { m_bakeTimeHasBeenSet = true; m_bakeTime = value; }
    inline RefreshPreferences& WithBakeTime(int value) { SetBakeTime(value); return *this;}
    ///@}
  private:

    int m_minHealthyPercentage{0};
    bool m_minHealthyPercentageHasBeenSet = false;

    int m_instanceWarmup{0};
    bool m_instanceWarmupHasBeenSet = false;

    Aws::Vector<int> m_checkpointPercentages;
    bool m_checkpointPercentagesHasBeenSet = false;

    int m_checkpointDelay{0};
    bool m_checkpointDelayHasBeenSet = false;

    bool m_skipMatching{false};
    bool m_skipMatchingHasBeenSet = false;

    bool m_autoRollback{false};
    bool m_autoRollbackHasBeenSet = false;

    ScaleInProtectedInstances m_scaleInProtectedInstances{ScaleInProtectedInstances::NOT_SET};
    bool m_scaleInProtectedInstancesHasBeenSet = false;

    StandbyInstances m_standbyInstances{StandbyInstances::NOT_SET};
    bool m_standbyInstancesHasBeenSet = false;

    AlarmSpecification m_alarmSpecification;
    bool m_alarmSpecificationHasBeenSet = false;

    int m_maxHealthyPercentage{0};
    bool m_maxHealthyPercentageHasBeenSet = false;

    int m_bakeTime{0};
    bool m_bakeTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
