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
   * <p>Provides options for how often AWS Config delivers configuration snapshots to
   * the Amazon S3 bucket in your delivery channel.</p> <p>The frequency for a rule
   * that triggers evaluations for your resources when AWS Config delivers the
   * configuration snapshot is set by one of two values, depending on which is less
   * frequent:</p> <ul> <li> <p>The value for the <code>deliveryFrequency</code>
   * parameter within the delivery channel configuration, which sets how often AWS
   * Config delivers configuration snapshots. This value also sets how often AWS
   * Config invokes evaluations for AWS Config rules.</p> </li> <li> <p>The value for
   * the <code>MaximumExecutionFrequency</code> parameter, which sets the maximum
   * frequency with which AWS Config invokes evaluations for the rule. For more
   * information, see <a>ConfigRule</a>.</p> </li> </ul> <p>If the
   * <code>deliveryFrequency</code> value is less frequent than the
   * <code>MaximumExecutionFrequency</code> value for a rule, AWS Config invokes the
   * rule only as often as the <code>deliveryFrequency</code> value.</p> <ol> <li>
   * <p>For example, you want your rule to run evaluations when AWS Config delivers
   * the configuration snapshot.</p> </li> <li> <p>You specify the
   * <code>MaximumExecutionFrequency</code> value for <code>Six_Hours</code>. </p>
   * </li> <li> <p>You then specify the delivery channel
   * <code>deliveryFrequency</code> value for <code>TwentyFour_Hours</code>.</p>
   * </li> <li> <p>Because the value for <code>deliveryFrequency</code> is less
   * frequent than <code>MaximumExecutionFrequency</code>, AWS Config invokes
   * evaluations for the rule every 24 hours. </p> </li> </ol> <p>You should set the
   * <code>MaximumExecutionFrequency</code> value to be at least as frequent as the
   * <code>deliveryFrequency</code> value. You can view the
   * <code>deliveryFrequency</code> value by using the
   * <code>DescribeDeliveryChannnels</code> action.</p> <p>To update the
   * <code>deliveryFrequency</code> with which AWS Config delivers your configuration
   * snapshots, use the <code>PutDeliveryChannel</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConfigSnapshotDeliveryProperties">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API ConfigSnapshotDeliveryProperties
  {
  public:
    ConfigSnapshotDeliveryProperties();
    ConfigSnapshotDeliveryProperties(Aws::Utils::Json::JsonView jsonValue);
    ConfigSnapshotDeliveryProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The frequency with which AWS Config delivers configuration snapshots.</p>
     */
    inline const MaximumExecutionFrequency& GetDeliveryFrequency() const{ return m_deliveryFrequency; }

    /**
     * <p>The frequency with which AWS Config delivers configuration snapshots.</p>
     */
    inline bool DeliveryFrequencyHasBeenSet() const { return m_deliveryFrequencyHasBeenSet; }

    /**
     * <p>The frequency with which AWS Config delivers configuration snapshots.</p>
     */
    inline void SetDeliveryFrequency(const MaximumExecutionFrequency& value) { m_deliveryFrequencyHasBeenSet = true; m_deliveryFrequency = value; }

    /**
     * <p>The frequency with which AWS Config delivers configuration snapshots.</p>
     */
    inline void SetDeliveryFrequency(MaximumExecutionFrequency&& value) { m_deliveryFrequencyHasBeenSet = true; m_deliveryFrequency = std::move(value); }

    /**
     * <p>The frequency with which AWS Config delivers configuration snapshots.</p>
     */
    inline ConfigSnapshotDeliveryProperties& WithDeliveryFrequency(const MaximumExecutionFrequency& value) { SetDeliveryFrequency(value); return *this;}

    /**
     * <p>The frequency with which AWS Config delivers configuration snapshots.</p>
     */
    inline ConfigSnapshotDeliveryProperties& WithDeliveryFrequency(MaximumExecutionFrequency&& value) { SetDeliveryFrequency(std::move(value)); return *this;}

  private:

    MaximumExecutionFrequency m_deliveryFrequency;
    bool m_deliveryFrequencyHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
