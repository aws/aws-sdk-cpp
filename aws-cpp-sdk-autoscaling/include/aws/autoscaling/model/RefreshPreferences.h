/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_AUTOSCALING_API RefreshPreferences();
    AWS_AUTOSCALING_API RefreshPreferences(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API RefreshPreferences& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The amount of capacity in the Auto Scaling group that must pass your group's
     * health checks to allow the operation to continue. The value is expressed as a
     * percentage of the desired capacity of the Auto Scaling group (rounded up to the
     * nearest integer). The default is <code>90</code>.</p> <p>Setting the minimum
     * healthy percentage to 100 percent limits the rate of replacement to one instance
     * at a time. In contrast, setting it to 0 percent has the effect of replacing all
     * instances at the same time. </p>
     */
    inline int GetMinHealthyPercentage() const{ return m_minHealthyPercentage; }

    /**
     * <p>The amount of capacity in the Auto Scaling group that must pass your group's
     * health checks to allow the operation to continue. The value is expressed as a
     * percentage of the desired capacity of the Auto Scaling group (rounded up to the
     * nearest integer). The default is <code>90</code>.</p> <p>Setting the minimum
     * healthy percentage to 100 percent limits the rate of replacement to one instance
     * at a time. In contrast, setting it to 0 percent has the effect of replacing all
     * instances at the same time. </p>
     */
    inline bool MinHealthyPercentageHasBeenSet() const { return m_minHealthyPercentageHasBeenSet; }

    /**
     * <p>The amount of capacity in the Auto Scaling group that must pass your group's
     * health checks to allow the operation to continue. The value is expressed as a
     * percentage of the desired capacity of the Auto Scaling group (rounded up to the
     * nearest integer). The default is <code>90</code>.</p> <p>Setting the minimum
     * healthy percentage to 100 percent limits the rate of replacement to one instance
     * at a time. In contrast, setting it to 0 percent has the effect of replacing all
     * instances at the same time. </p>
     */
    inline void SetMinHealthyPercentage(int value) { m_minHealthyPercentageHasBeenSet = true; m_minHealthyPercentage = value; }

    /**
     * <p>The amount of capacity in the Auto Scaling group that must pass your group's
     * health checks to allow the operation to continue. The value is expressed as a
     * percentage of the desired capacity of the Auto Scaling group (rounded up to the
     * nearest integer). The default is <code>90</code>.</p> <p>Setting the minimum
     * healthy percentage to 100 percent limits the rate of replacement to one instance
     * at a time. In contrast, setting it to 0 percent has the effect of replacing all
     * instances at the same time. </p>
     */
    inline RefreshPreferences& WithMinHealthyPercentage(int value) { SetMinHealthyPercentage(value); return *this;}


    /**
     * <p> <i>Not needed if the default instance warmup is defined for the group.</i>
     * </p> <p>The duration of the instance warmup, in seconds.</p>  <p>The
     * default is to use the value for the default instance warmup defined for the
     * group. If default instance warmup is null, then <code>InstanceWarmup</code>
     * falls back to the value of the health check grace period.</p> 
     */
    inline int GetInstanceWarmup() const{ return m_instanceWarmup; }

    /**
     * <p> <i>Not needed if the default instance warmup is defined for the group.</i>
     * </p> <p>The duration of the instance warmup, in seconds.</p>  <p>The
     * default is to use the value for the default instance warmup defined for the
     * group. If default instance warmup is null, then <code>InstanceWarmup</code>
     * falls back to the value of the health check grace period.</p> 
     */
    inline bool InstanceWarmupHasBeenSet() const { return m_instanceWarmupHasBeenSet; }

    /**
     * <p> <i>Not needed if the default instance warmup is defined for the group.</i>
     * </p> <p>The duration of the instance warmup, in seconds.</p>  <p>The
     * default is to use the value for the default instance warmup defined for the
     * group. If default instance warmup is null, then <code>InstanceWarmup</code>
     * falls back to the value of the health check grace period.</p> 
     */
    inline void SetInstanceWarmup(int value) { m_instanceWarmupHasBeenSet = true; m_instanceWarmup = value; }

    /**
     * <p> <i>Not needed if the default instance warmup is defined for the group.</i>
     * </p> <p>The duration of the instance warmup, in seconds.</p>  <p>The
     * default is to use the value for the default instance warmup defined for the
     * group. If default instance warmup is null, then <code>InstanceWarmup</code>
     * falls back to the value of the health check grace period.</p> 
     */
    inline RefreshPreferences& WithInstanceWarmup(int value) { SetInstanceWarmup(value); return *this;}


    /**
     * <p>Threshold values for each checkpoint in ascending order. Each number must be
     * unique. To replace all instances in the Auto Scaling group, the last number in
     * the array must be <code>100</code>.</p> <p>For usage examples, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-adding-checkpoints-instance-refresh.html">Adding
     * checkpoints to an instance refresh</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<int>& GetCheckpointPercentages() const{ return m_checkpointPercentages; }

    /**
     * <p>Threshold values for each checkpoint in ascending order. Each number must be
     * unique. To replace all instances in the Auto Scaling group, the last number in
     * the array must be <code>100</code>.</p> <p>For usage examples, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-adding-checkpoints-instance-refresh.html">Adding
     * checkpoints to an instance refresh</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline bool CheckpointPercentagesHasBeenSet() const { return m_checkpointPercentagesHasBeenSet; }

    /**
     * <p>Threshold values for each checkpoint in ascending order. Each number must be
     * unique. To replace all instances in the Auto Scaling group, the last number in
     * the array must be <code>100</code>.</p> <p>For usage examples, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-adding-checkpoints-instance-refresh.html">Adding
     * checkpoints to an instance refresh</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline void SetCheckpointPercentages(const Aws::Vector<int>& value) { m_checkpointPercentagesHasBeenSet = true; m_checkpointPercentages = value; }

    /**
     * <p>Threshold values for each checkpoint in ascending order. Each number must be
     * unique. To replace all instances in the Auto Scaling group, the last number in
     * the array must be <code>100</code>.</p> <p>For usage examples, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-adding-checkpoints-instance-refresh.html">Adding
     * checkpoints to an instance refresh</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline void SetCheckpointPercentages(Aws::Vector<int>&& value) { m_checkpointPercentagesHasBeenSet = true; m_checkpointPercentages = std::move(value); }

    /**
     * <p>Threshold values for each checkpoint in ascending order. Each number must be
     * unique. To replace all instances in the Auto Scaling group, the last number in
     * the array must be <code>100</code>.</p> <p>For usage examples, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-adding-checkpoints-instance-refresh.html">Adding
     * checkpoints to an instance refresh</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline RefreshPreferences& WithCheckpointPercentages(const Aws::Vector<int>& value) { SetCheckpointPercentages(value); return *this;}

    /**
     * <p>Threshold values for each checkpoint in ascending order. Each number must be
     * unique. To replace all instances in the Auto Scaling group, the last number in
     * the array must be <code>100</code>.</p> <p>For usage examples, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-adding-checkpoints-instance-refresh.html">Adding
     * checkpoints to an instance refresh</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline RefreshPreferences& WithCheckpointPercentages(Aws::Vector<int>&& value) { SetCheckpointPercentages(std::move(value)); return *this;}

    /**
     * <p>Threshold values for each checkpoint in ascending order. Each number must be
     * unique. To replace all instances in the Auto Scaling group, the last number in
     * the array must be <code>100</code>.</p> <p>For usage examples, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-adding-checkpoints-instance-refresh.html">Adding
     * checkpoints to an instance refresh</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline RefreshPreferences& AddCheckpointPercentages(int value) { m_checkpointPercentagesHasBeenSet = true; m_checkpointPercentages.push_back(value); return *this; }


    /**
     * <p>The amount of time, in seconds, to wait after a checkpoint before continuing.
     * This property is optional, but if you specify a value for it, you must also
     * specify a value for <code>CheckpointPercentages</code>. If you specify a value
     * for <code>CheckpointPercentages</code> and not for <code>CheckpointDelay</code>,
     * the <code>CheckpointDelay</code> defaults to <code>3600</code> (1 hour). </p>
     */
    inline int GetCheckpointDelay() const{ return m_checkpointDelay; }

    /**
     * <p>The amount of time, in seconds, to wait after a checkpoint before continuing.
     * This property is optional, but if you specify a value for it, you must also
     * specify a value for <code>CheckpointPercentages</code>. If you specify a value
     * for <code>CheckpointPercentages</code> and not for <code>CheckpointDelay</code>,
     * the <code>CheckpointDelay</code> defaults to <code>3600</code> (1 hour). </p>
     */
    inline bool CheckpointDelayHasBeenSet() const { return m_checkpointDelayHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, to wait after a checkpoint before continuing.
     * This property is optional, but if you specify a value for it, you must also
     * specify a value for <code>CheckpointPercentages</code>. If you specify a value
     * for <code>CheckpointPercentages</code> and not for <code>CheckpointDelay</code>,
     * the <code>CheckpointDelay</code> defaults to <code>3600</code> (1 hour). </p>
     */
    inline void SetCheckpointDelay(int value) { m_checkpointDelayHasBeenSet = true; m_checkpointDelay = value; }

    /**
     * <p>The amount of time, in seconds, to wait after a checkpoint before continuing.
     * This property is optional, but if you specify a value for it, you must also
     * specify a value for <code>CheckpointPercentages</code>. If you specify a value
     * for <code>CheckpointPercentages</code> and not for <code>CheckpointDelay</code>,
     * the <code>CheckpointDelay</code> defaults to <code>3600</code> (1 hour). </p>
     */
    inline RefreshPreferences& WithCheckpointDelay(int value) { SetCheckpointDelay(value); return *this;}


    /**
     * <p>A boolean value that indicates whether skip matching is enabled. If true,
     * then Amazon EC2 Auto Scaling skips replacing instances that match the desired
     * configuration. If no desired configuration is specified, then it skips replacing
     * instances that have the same configuration that is already set on the group. The
     * default is <code>false</code>.</p>
     */
    inline bool GetSkipMatching() const{ return m_skipMatching; }

    /**
     * <p>A boolean value that indicates whether skip matching is enabled. If true,
     * then Amazon EC2 Auto Scaling skips replacing instances that match the desired
     * configuration. If no desired configuration is specified, then it skips replacing
     * instances that have the same configuration that is already set on the group. The
     * default is <code>false</code>.</p>
     */
    inline bool SkipMatchingHasBeenSet() const { return m_skipMatchingHasBeenSet; }

    /**
     * <p>A boolean value that indicates whether skip matching is enabled. If true,
     * then Amazon EC2 Auto Scaling skips replacing instances that match the desired
     * configuration. If no desired configuration is specified, then it skips replacing
     * instances that have the same configuration that is already set on the group. The
     * default is <code>false</code>.</p>
     */
    inline void SetSkipMatching(bool value) { m_skipMatchingHasBeenSet = true; m_skipMatching = value; }

    /**
     * <p>A boolean value that indicates whether skip matching is enabled. If true,
     * then Amazon EC2 Auto Scaling skips replacing instances that match the desired
     * configuration. If no desired configuration is specified, then it skips replacing
     * instances that have the same configuration that is already set on the group. The
     * default is <code>false</code>.</p>
     */
    inline RefreshPreferences& WithSkipMatching(bool value) { SetSkipMatching(value); return *this;}

  private:

    int m_minHealthyPercentage;
    bool m_minHealthyPercentageHasBeenSet = false;

    int m_instanceWarmup;
    bool m_instanceWarmupHasBeenSet = false;

    Aws::Vector<int> m_checkpointPercentages;
    bool m_checkpointPercentagesHasBeenSet = false;

    int m_checkpointDelay;
    bool m_checkpointDelayHasBeenSet = false;

    bool m_skipMatching;
    bool m_skipMatchingHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
