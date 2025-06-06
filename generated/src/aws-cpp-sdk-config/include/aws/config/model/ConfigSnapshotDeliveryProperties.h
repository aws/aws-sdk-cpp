﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/MaximumExecutionFrequency.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Provides options for how often Config delivers configuration snapshots to the
   * Amazon S3 bucket in your delivery channel.</p> <p>The frequency for a rule that
   * triggers evaluations for your resources when Config delivers the configuration
   * snapshot is set by one of two values, depending on which is less frequent:</p>
   * <ul> <li> <p>The value for the <code>deliveryFrequency</code> parameter within
   * the delivery channel configuration, which sets how often Config delivers
   * configuration snapshots. This value also sets how often Config invokes
   * evaluations for Config rules.</p> </li> <li> <p>The value for the
   * <code>MaximumExecutionFrequency</code> parameter, which sets the maximum
   * frequency with which Config invokes evaluations for the rule. For more
   * information, see <a>ConfigRule</a>.</p> </li> </ul> <p>If the
   * <code>deliveryFrequency</code> value is less frequent than the
   * <code>MaximumExecutionFrequency</code> value for a rule, Config invokes the rule
   * only as often as the <code>deliveryFrequency</code> value.</p> <ol> <li> <p>For
   * example, you want your rule to run evaluations when Config delivers the
   * configuration snapshot.</p> </li> <li> <p>You specify the
   * <code>MaximumExecutionFrequency</code> value for <code>Six_Hours</code>. </p>
   * </li> <li> <p>You then specify the delivery channel
   * <code>deliveryFrequency</code> value for <code>TwentyFour_Hours</code>.</p>
   * </li> <li> <p>Because the value for <code>deliveryFrequency</code> is less
   * frequent than <code>MaximumExecutionFrequency</code>, Config invokes evaluations
   * for the rule every 24 hours. </p> </li> </ol> <p>You should set the
   * <code>MaximumExecutionFrequency</code> value to be at least as frequent as the
   * <code>deliveryFrequency</code> value. You can view the
   * <code>deliveryFrequency</code> value by using the
   * <code>DescribeDeliveryChannnels</code> action.</p> <p>To update the
   * <code>deliveryFrequency</code> with which Config delivers your configuration
   * snapshots, use the <code>PutDeliveryChannel</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConfigSnapshotDeliveryProperties">AWS
   * API Reference</a></p>
   */
  class ConfigSnapshotDeliveryProperties
  {
  public:
    AWS_CONFIGSERVICE_API ConfigSnapshotDeliveryProperties() = default;
    AWS_CONFIGSERVICE_API ConfigSnapshotDeliveryProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConfigSnapshotDeliveryProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The frequency with which Config delivers configuration snapshots.</p>
     */
    inline MaximumExecutionFrequency GetDeliveryFrequency() const { return m_deliveryFrequency; }
    inline bool DeliveryFrequencyHasBeenSet() const { return m_deliveryFrequencyHasBeenSet; }
    inline void SetDeliveryFrequency(MaximumExecutionFrequency value) { m_deliveryFrequencyHasBeenSet = true; m_deliveryFrequency = value; }
    inline ConfigSnapshotDeliveryProperties& WithDeliveryFrequency(MaximumExecutionFrequency value) { SetDeliveryFrequency(value); return *this;}
    ///@}
  private:

    MaximumExecutionFrequency m_deliveryFrequency{MaximumExecutionFrequency::NOT_SET};
    bool m_deliveryFrequencyHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
