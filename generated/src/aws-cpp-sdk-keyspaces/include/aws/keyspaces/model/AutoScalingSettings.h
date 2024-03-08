/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/keyspaces/model/AutoScalingPolicy.h>
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
namespace Keyspaces
{
namespace Model
{

  /**
   * <p>The optional auto scaling settings for a table with provisioned throughput
   * capacity.</p> <p>To turn on auto scaling for a table in
   * <code>throughputMode:PROVISIONED</code>, you must specify the following
   * parameters. </p> <p>Configure the minimum and maximum capacity units. The auto
   * scaling policy ensures that capacity never goes below the minimum or above the
   * maximum range.</p> <ul> <li> <p> <code>minimumUnits</code>: The minimum level of
   * throughput the table should always be ready to support. The value must be
   * between 1 and the max throughput per second quota for your account (40,000 by
   * default).</p> </li> <li> <p> <code>maximumUnits</code>: The maximum level of
   * throughput the table should always be ready to support. The value must be
   * between 1 and the max throughput per second quota for your account (40,000 by
   * default).</p> </li> <li> <p> <code>scalingPolicy</code>: Amazon Keyspaces
   * supports the <code>target tracking</code> scaling policy. The auto scaling
   * target is the provisioned capacity of the table. </p> <ul> <li> <p>
   * <code>targetTrackingScalingPolicyConfiguration</code>: To define the target
   * tracking policy, you must define the target value. </p> <ul> <li> <p>
   * <code>targetValue</code>: The target utilization rate of the table. Amazon
   * Keyspaces auto scaling ensures that the ratio of consumed capacity to
   * provisioned capacity stays at or near this value. You define
   * <code>targetValue</code> as a percentage. A <code>double</code> between 20 and
   * 90. (Required)</p> </li> <li> <p> <code>disableScaleIn</code>: A
   * <code>boolean</code> that specifies if <code>scale-in</code> is disabled or
   * enabled for the table. This parameter is disabled by default. To turn on
   * <code>scale-in</code>, set the <code>boolean</code> value to <code>FALSE</code>.
   * This means that capacity for a table can be automatically scaled down on your
   * behalf. (Optional) </p> </li> <li> <p> <code>scaleInCooldown</code>: A cooldown
   * period in seconds between scaling activities that lets the table stabilize
   * before another scale in activity starts. If no value is provided, the default is
   * 0. (Optional) </p> </li> <li> <p> <code>scaleOutCooldown</code>: A cooldown
   * period in seconds between scaling activities that lets the table stabilize
   * before another scale out activity starts. If no value is provided, the default
   * is 0. (Optional) </p> </li> </ul> </li> </ul> </li> </ul> <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/autoscaling.html">Managing
   * throughput capacity automatically with Amazon Keyspaces auto scaling</a> in the
   * <i>Amazon Keyspaces Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/AutoScalingSettings">AWS
   * API Reference</a></p>
   */
  class AutoScalingSettings
  {
  public:
    AWS_KEYSPACES_API AutoScalingSettings();
    AWS_KEYSPACES_API AutoScalingSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API AutoScalingSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This optional parameter enables auto scaling for the table if set to
     * <code>false</code>.</p>
     */
    inline bool GetAutoScalingDisabled() const{ return m_autoScalingDisabled; }

    /**
     * <p>This optional parameter enables auto scaling for the table if set to
     * <code>false</code>.</p>
     */
    inline bool AutoScalingDisabledHasBeenSet() const { return m_autoScalingDisabledHasBeenSet; }

    /**
     * <p>This optional parameter enables auto scaling for the table if set to
     * <code>false</code>.</p>
     */
    inline void SetAutoScalingDisabled(bool value) { m_autoScalingDisabledHasBeenSet = true; m_autoScalingDisabled = value; }

    /**
     * <p>This optional parameter enables auto scaling for the table if set to
     * <code>false</code>.</p>
     */
    inline AutoScalingSettings& WithAutoScalingDisabled(bool value) { SetAutoScalingDisabled(value); return *this;}


    /**
     * <p>The minimum level of throughput the table should always be ready to support.
     * The value must be between 1 and the max throughput per second quota for your
     * account (40,000 by default).</p>
     */
    inline long long GetMinimumUnits() const{ return m_minimumUnits; }

    /**
     * <p>The minimum level of throughput the table should always be ready to support.
     * The value must be between 1 and the max throughput per second quota for your
     * account (40,000 by default).</p>
     */
    inline bool MinimumUnitsHasBeenSet() const { return m_minimumUnitsHasBeenSet; }

    /**
     * <p>The minimum level of throughput the table should always be ready to support.
     * The value must be between 1 and the max throughput per second quota for your
     * account (40,000 by default).</p>
     */
    inline void SetMinimumUnits(long long value) { m_minimumUnitsHasBeenSet = true; m_minimumUnits = value; }

    /**
     * <p>The minimum level of throughput the table should always be ready to support.
     * The value must be between 1 and the max throughput per second quota for your
     * account (40,000 by default).</p>
     */
    inline AutoScalingSettings& WithMinimumUnits(long long value) { SetMinimumUnits(value); return *this;}


    /**
     * <p>Manage costs by specifying the maximum amount of throughput to provision. The
     * value must be between 1 and the max throughput per second quota for your account
     * (40,000 by default).</p>
     */
    inline long long GetMaximumUnits() const{ return m_maximumUnits; }

    /**
     * <p>Manage costs by specifying the maximum amount of throughput to provision. The
     * value must be between 1 and the max throughput per second quota for your account
     * (40,000 by default).</p>
     */
    inline bool MaximumUnitsHasBeenSet() const { return m_maximumUnitsHasBeenSet; }

    /**
     * <p>Manage costs by specifying the maximum amount of throughput to provision. The
     * value must be between 1 and the max throughput per second quota for your account
     * (40,000 by default).</p>
     */
    inline void SetMaximumUnits(long long value) { m_maximumUnitsHasBeenSet = true; m_maximumUnits = value; }

    /**
     * <p>Manage costs by specifying the maximum amount of throughput to provision. The
     * value must be between 1 and the max throughput per second quota for your account
     * (40,000 by default).</p>
     */
    inline AutoScalingSettings& WithMaximumUnits(long long value) { SetMaximumUnits(value); return *this;}


    /**
     * <p>Amazon Keyspaces supports the <code>target tracking</code> auto scaling
     * policy. With this policy, Amazon Keyspaces auto scaling ensures that the table's
     * ratio of consumed to provisioned capacity stays at or near the target value that
     * you specify. You define the target value as a percentage between 20 and 90.</p>
     */
    inline const AutoScalingPolicy& GetScalingPolicy() const{ return m_scalingPolicy; }

    /**
     * <p>Amazon Keyspaces supports the <code>target tracking</code> auto scaling
     * policy. With this policy, Amazon Keyspaces auto scaling ensures that the table's
     * ratio of consumed to provisioned capacity stays at or near the target value that
     * you specify. You define the target value as a percentage between 20 and 90.</p>
     */
    inline bool ScalingPolicyHasBeenSet() const { return m_scalingPolicyHasBeenSet; }

    /**
     * <p>Amazon Keyspaces supports the <code>target tracking</code> auto scaling
     * policy. With this policy, Amazon Keyspaces auto scaling ensures that the table's
     * ratio of consumed to provisioned capacity stays at or near the target value that
     * you specify. You define the target value as a percentage between 20 and 90.</p>
     */
    inline void SetScalingPolicy(const AutoScalingPolicy& value) { m_scalingPolicyHasBeenSet = true; m_scalingPolicy = value; }

    /**
     * <p>Amazon Keyspaces supports the <code>target tracking</code> auto scaling
     * policy. With this policy, Amazon Keyspaces auto scaling ensures that the table's
     * ratio of consumed to provisioned capacity stays at or near the target value that
     * you specify. You define the target value as a percentage between 20 and 90.</p>
     */
    inline void SetScalingPolicy(AutoScalingPolicy&& value) { m_scalingPolicyHasBeenSet = true; m_scalingPolicy = std::move(value); }

    /**
     * <p>Amazon Keyspaces supports the <code>target tracking</code> auto scaling
     * policy. With this policy, Amazon Keyspaces auto scaling ensures that the table's
     * ratio of consumed to provisioned capacity stays at or near the target value that
     * you specify. You define the target value as a percentage between 20 and 90.</p>
     */
    inline AutoScalingSettings& WithScalingPolicy(const AutoScalingPolicy& value) { SetScalingPolicy(value); return *this;}

    /**
     * <p>Amazon Keyspaces supports the <code>target tracking</code> auto scaling
     * policy. With this policy, Amazon Keyspaces auto scaling ensures that the table's
     * ratio of consumed to provisioned capacity stays at or near the target value that
     * you specify. You define the target value as a percentage between 20 and 90.</p>
     */
    inline AutoScalingSettings& WithScalingPolicy(AutoScalingPolicy&& value) { SetScalingPolicy(std::move(value)); return *this;}

  private:

    bool m_autoScalingDisabled;
    bool m_autoScalingDisabledHasBeenSet = false;

    long long m_minimumUnits;
    bool m_minimumUnitsHasBeenSet = false;

    long long m_maximumUnits;
    bool m_maximumUnitsHasBeenSet = false;

    AutoScalingPolicy m_scalingPolicy;
    bool m_scalingPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
