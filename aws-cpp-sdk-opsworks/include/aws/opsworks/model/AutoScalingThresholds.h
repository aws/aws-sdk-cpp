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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes a load-based auto scaling upscaling or downscaling threshold
   * configuration, which specifies when AWS OpsWorks Stacks starts or stops
   * load-based instances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/AutoScalingThresholds">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API AutoScalingThresholds
  {
  public:
    AutoScalingThresholds();
    AutoScalingThresholds(Aws::Utils::Json::JsonView jsonValue);
    AutoScalingThresholds& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of instances to add or remove when the load exceeds a
     * threshold.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The number of instances to add or remove when the load exceeds a
     * threshold.</p>
     */
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }

    /**
     * <p>The number of instances to add or remove when the load exceeds a
     * threshold.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The number of instances to add or remove when the load exceeds a
     * threshold.</p>
     */
    inline AutoScalingThresholds& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}


    /**
     * <p>The amount of time, in minutes, that the load must exceed a threshold before
     * more instances are added or removed.</p>
     */
    inline int GetThresholdsWaitTime() const{ return m_thresholdsWaitTime; }

    /**
     * <p>The amount of time, in minutes, that the load must exceed a threshold before
     * more instances are added or removed.</p>
     */
    inline bool ThresholdsWaitTimeHasBeenSet() const { return m_thresholdsWaitTimeHasBeenSet; }

    /**
     * <p>The amount of time, in minutes, that the load must exceed a threshold before
     * more instances are added or removed.</p>
     */
    inline void SetThresholdsWaitTime(int value) { m_thresholdsWaitTimeHasBeenSet = true; m_thresholdsWaitTime = value; }

    /**
     * <p>The amount of time, in minutes, that the load must exceed a threshold before
     * more instances are added or removed.</p>
     */
    inline AutoScalingThresholds& WithThresholdsWaitTime(int value) { SetThresholdsWaitTime(value); return *this;}


    /**
     * <p>The amount of time (in minutes) after a scaling event occurs that AWS
     * OpsWorks Stacks should ignore metrics and suppress additional scaling events.
     * For example, AWS OpsWorks Stacks adds new instances following an upscaling event
     * but the instances won't start reducing the load until they have been booted and
     * configured. There is no point in raising additional scaling events during that
     * operation, which typically takes several minutes. <code>IgnoreMetricsTime</code>
     * allows you to direct AWS OpsWorks Stacks to suppress scaling events long enough
     * to get the new instances online.</p>
     */
    inline int GetIgnoreMetricsTime() const{ return m_ignoreMetricsTime; }

    /**
     * <p>The amount of time (in minutes) after a scaling event occurs that AWS
     * OpsWorks Stacks should ignore metrics and suppress additional scaling events.
     * For example, AWS OpsWorks Stacks adds new instances following an upscaling event
     * but the instances won't start reducing the load until they have been booted and
     * configured. There is no point in raising additional scaling events during that
     * operation, which typically takes several minutes. <code>IgnoreMetricsTime</code>
     * allows you to direct AWS OpsWorks Stacks to suppress scaling events long enough
     * to get the new instances online.</p>
     */
    inline bool IgnoreMetricsTimeHasBeenSet() const { return m_ignoreMetricsTimeHasBeenSet; }

    /**
     * <p>The amount of time (in minutes) after a scaling event occurs that AWS
     * OpsWorks Stacks should ignore metrics and suppress additional scaling events.
     * For example, AWS OpsWorks Stacks adds new instances following an upscaling event
     * but the instances won't start reducing the load until they have been booted and
     * configured. There is no point in raising additional scaling events during that
     * operation, which typically takes several minutes. <code>IgnoreMetricsTime</code>
     * allows you to direct AWS OpsWorks Stacks to suppress scaling events long enough
     * to get the new instances online.</p>
     */
    inline void SetIgnoreMetricsTime(int value) { m_ignoreMetricsTimeHasBeenSet = true; m_ignoreMetricsTime = value; }

    /**
     * <p>The amount of time (in minutes) after a scaling event occurs that AWS
     * OpsWorks Stacks should ignore metrics and suppress additional scaling events.
     * For example, AWS OpsWorks Stacks adds new instances following an upscaling event
     * but the instances won't start reducing the load until they have been booted and
     * configured. There is no point in raising additional scaling events during that
     * operation, which typically takes several minutes. <code>IgnoreMetricsTime</code>
     * allows you to direct AWS OpsWorks Stacks to suppress scaling events long enough
     * to get the new instances online.</p>
     */
    inline AutoScalingThresholds& WithIgnoreMetricsTime(int value) { SetIgnoreMetricsTime(value); return *this;}


    /**
     * <p>The CPU utilization threshold, as a percent of the available CPU. A value of
     * -1 disables the threshold.</p>
     */
    inline double GetCpuThreshold() const{ return m_cpuThreshold; }

    /**
     * <p>The CPU utilization threshold, as a percent of the available CPU. A value of
     * -1 disables the threshold.</p>
     */
    inline bool CpuThresholdHasBeenSet() const { return m_cpuThresholdHasBeenSet; }

    /**
     * <p>The CPU utilization threshold, as a percent of the available CPU. A value of
     * -1 disables the threshold.</p>
     */
    inline void SetCpuThreshold(double value) { m_cpuThresholdHasBeenSet = true; m_cpuThreshold = value; }

    /**
     * <p>The CPU utilization threshold, as a percent of the available CPU. A value of
     * -1 disables the threshold.</p>
     */
    inline AutoScalingThresholds& WithCpuThreshold(double value) { SetCpuThreshold(value); return *this;}


    /**
     * <p>The memory utilization threshold, as a percent of the available memory. A
     * value of -1 disables the threshold.</p>
     */
    inline double GetMemoryThreshold() const{ return m_memoryThreshold; }

    /**
     * <p>The memory utilization threshold, as a percent of the available memory. A
     * value of -1 disables the threshold.</p>
     */
    inline bool MemoryThresholdHasBeenSet() const { return m_memoryThresholdHasBeenSet; }

    /**
     * <p>The memory utilization threshold, as a percent of the available memory. A
     * value of -1 disables the threshold.</p>
     */
    inline void SetMemoryThreshold(double value) { m_memoryThresholdHasBeenSet = true; m_memoryThreshold = value; }

    /**
     * <p>The memory utilization threshold, as a percent of the available memory. A
     * value of -1 disables the threshold.</p>
     */
    inline AutoScalingThresholds& WithMemoryThreshold(double value) { SetMemoryThreshold(value); return *this;}


    /**
     * <p>The load threshold. A value of -1 disables the threshold. For more
     * information about how load is computed, see <a
     * href="http://en.wikipedia.org/wiki/Load_%28computing%29">Load
     * (computing)</a>.</p>
     */
    inline double GetLoadThreshold() const{ return m_loadThreshold; }

    /**
     * <p>The load threshold. A value of -1 disables the threshold. For more
     * information about how load is computed, see <a
     * href="http://en.wikipedia.org/wiki/Load_%28computing%29">Load
     * (computing)</a>.</p>
     */
    inline bool LoadThresholdHasBeenSet() const { return m_loadThresholdHasBeenSet; }

    /**
     * <p>The load threshold. A value of -1 disables the threshold. For more
     * information about how load is computed, see <a
     * href="http://en.wikipedia.org/wiki/Load_%28computing%29">Load
     * (computing)</a>.</p>
     */
    inline void SetLoadThreshold(double value) { m_loadThresholdHasBeenSet = true; m_loadThreshold = value; }

    /**
     * <p>The load threshold. A value of -1 disables the threshold. For more
     * information about how load is computed, see <a
     * href="http://en.wikipedia.org/wiki/Load_%28computing%29">Load
     * (computing)</a>.</p>
     */
    inline AutoScalingThresholds& WithLoadThreshold(double value) { SetLoadThreshold(value); return *this;}


    /**
     * <p>Custom Cloudwatch auto scaling alarms, to be used as thresholds. This
     * parameter takes a list of up to five alarm names, which are case sensitive and
     * must be in the same region as the stack.</p> <note> <p>To use custom alarms, you
     * must update your service role to allow <code>cloudwatch:DescribeAlarms</code>.
     * You can either have AWS OpsWorks Stacks update the role for you when you first
     * use this feature or you can edit the role manually. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-servicerole.html">Allowing
     * AWS OpsWorks Stacks to Act on Your Behalf</a>.</p> </note>
     */
    inline const Aws::Vector<Aws::String>& GetAlarms() const{ return m_alarms; }

    /**
     * <p>Custom Cloudwatch auto scaling alarms, to be used as thresholds. This
     * parameter takes a list of up to five alarm names, which are case sensitive and
     * must be in the same region as the stack.</p> <note> <p>To use custom alarms, you
     * must update your service role to allow <code>cloudwatch:DescribeAlarms</code>.
     * You can either have AWS OpsWorks Stacks update the role for you when you first
     * use this feature or you can edit the role manually. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-servicerole.html">Allowing
     * AWS OpsWorks Stacks to Act on Your Behalf</a>.</p> </note>
     */
    inline bool AlarmsHasBeenSet() const { return m_alarmsHasBeenSet; }

    /**
     * <p>Custom Cloudwatch auto scaling alarms, to be used as thresholds. This
     * parameter takes a list of up to five alarm names, which are case sensitive and
     * must be in the same region as the stack.</p> <note> <p>To use custom alarms, you
     * must update your service role to allow <code>cloudwatch:DescribeAlarms</code>.
     * You can either have AWS OpsWorks Stacks update the role for you when you first
     * use this feature or you can edit the role manually. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-servicerole.html">Allowing
     * AWS OpsWorks Stacks to Act on Your Behalf</a>.</p> </note>
     */
    inline void SetAlarms(const Aws::Vector<Aws::String>& value) { m_alarmsHasBeenSet = true; m_alarms = value; }

    /**
     * <p>Custom Cloudwatch auto scaling alarms, to be used as thresholds. This
     * parameter takes a list of up to five alarm names, which are case sensitive and
     * must be in the same region as the stack.</p> <note> <p>To use custom alarms, you
     * must update your service role to allow <code>cloudwatch:DescribeAlarms</code>.
     * You can either have AWS OpsWorks Stacks update the role for you when you first
     * use this feature or you can edit the role manually. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-servicerole.html">Allowing
     * AWS OpsWorks Stacks to Act on Your Behalf</a>.</p> </note>
     */
    inline void SetAlarms(Aws::Vector<Aws::String>&& value) { m_alarmsHasBeenSet = true; m_alarms = std::move(value); }

    /**
     * <p>Custom Cloudwatch auto scaling alarms, to be used as thresholds. This
     * parameter takes a list of up to five alarm names, which are case sensitive and
     * must be in the same region as the stack.</p> <note> <p>To use custom alarms, you
     * must update your service role to allow <code>cloudwatch:DescribeAlarms</code>.
     * You can either have AWS OpsWorks Stacks update the role for you when you first
     * use this feature or you can edit the role manually. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-servicerole.html">Allowing
     * AWS OpsWorks Stacks to Act on Your Behalf</a>.</p> </note>
     */
    inline AutoScalingThresholds& WithAlarms(const Aws::Vector<Aws::String>& value) { SetAlarms(value); return *this;}

    /**
     * <p>Custom Cloudwatch auto scaling alarms, to be used as thresholds. This
     * parameter takes a list of up to five alarm names, which are case sensitive and
     * must be in the same region as the stack.</p> <note> <p>To use custom alarms, you
     * must update your service role to allow <code>cloudwatch:DescribeAlarms</code>.
     * You can either have AWS OpsWorks Stacks update the role for you when you first
     * use this feature or you can edit the role manually. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-servicerole.html">Allowing
     * AWS OpsWorks Stacks to Act on Your Behalf</a>.</p> </note>
     */
    inline AutoScalingThresholds& WithAlarms(Aws::Vector<Aws::String>&& value) { SetAlarms(std::move(value)); return *this;}

    /**
     * <p>Custom Cloudwatch auto scaling alarms, to be used as thresholds. This
     * parameter takes a list of up to five alarm names, which are case sensitive and
     * must be in the same region as the stack.</p> <note> <p>To use custom alarms, you
     * must update your service role to allow <code>cloudwatch:DescribeAlarms</code>.
     * You can either have AWS OpsWorks Stacks update the role for you when you first
     * use this feature or you can edit the role manually. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-servicerole.html">Allowing
     * AWS OpsWorks Stacks to Act on Your Behalf</a>.</p> </note>
     */
    inline AutoScalingThresholds& AddAlarms(const Aws::String& value) { m_alarmsHasBeenSet = true; m_alarms.push_back(value); return *this; }

    /**
     * <p>Custom Cloudwatch auto scaling alarms, to be used as thresholds. This
     * parameter takes a list of up to five alarm names, which are case sensitive and
     * must be in the same region as the stack.</p> <note> <p>To use custom alarms, you
     * must update your service role to allow <code>cloudwatch:DescribeAlarms</code>.
     * You can either have AWS OpsWorks Stacks update the role for you when you first
     * use this feature or you can edit the role manually. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-servicerole.html">Allowing
     * AWS OpsWorks Stacks to Act on Your Behalf</a>.</p> </note>
     */
    inline AutoScalingThresholds& AddAlarms(Aws::String&& value) { m_alarmsHasBeenSet = true; m_alarms.push_back(std::move(value)); return *this; }

    /**
     * <p>Custom Cloudwatch auto scaling alarms, to be used as thresholds. This
     * parameter takes a list of up to five alarm names, which are case sensitive and
     * must be in the same region as the stack.</p> <note> <p>To use custom alarms, you
     * must update your service role to allow <code>cloudwatch:DescribeAlarms</code>.
     * You can either have AWS OpsWorks Stacks update the role for you when you first
     * use this feature or you can edit the role manually. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-servicerole.html">Allowing
     * AWS OpsWorks Stacks to Act on Your Behalf</a>.</p> </note>
     */
    inline AutoScalingThresholds& AddAlarms(const char* value) { m_alarmsHasBeenSet = true; m_alarms.push_back(value); return *this; }

  private:

    int m_instanceCount;
    bool m_instanceCountHasBeenSet;

    int m_thresholdsWaitTime;
    bool m_thresholdsWaitTimeHasBeenSet;

    int m_ignoreMetricsTime;
    bool m_ignoreMetricsTimeHasBeenSet;

    double m_cpuThreshold;
    bool m_cpuThresholdHasBeenSet;

    double m_memoryThreshold;
    bool m_memoryThresholdHasBeenSet;

    double m_loadThreshold;
    bool m_loadThresholdHasBeenSet;

    Aws::Vector<Aws::String> m_alarms;
    bool m_alarmsHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
