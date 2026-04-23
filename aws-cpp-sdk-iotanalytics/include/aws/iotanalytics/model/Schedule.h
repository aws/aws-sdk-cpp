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
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>The schedule for when to trigger an update.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/Schedule">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API Schedule
  {
  public:
    Schedule();
    Schedule(Aws::Utils::Json::JsonView jsonValue);
    Schedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The expression that defines when to trigger an update. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">
     * Schedule Expressions for Rules</a> in the Amazon CloudWatch Events User
     * Guide.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>The expression that defines when to trigger an update. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">
     * Schedule Expressions for Rules</a> in the Amazon CloudWatch Events User
     * Guide.</p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>The expression that defines when to trigger an update. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">
     * Schedule Expressions for Rules</a> in the Amazon CloudWatch Events User
     * Guide.</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>The expression that defines when to trigger an update. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">
     * Schedule Expressions for Rules</a> in the Amazon CloudWatch Events User
     * Guide.</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>The expression that defines when to trigger an update. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">
     * Schedule Expressions for Rules</a> in the Amazon CloudWatch Events User
     * Guide.</p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>The expression that defines when to trigger an update. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">
     * Schedule Expressions for Rules</a> in the Amazon CloudWatch Events User
     * Guide.</p>
     */
    inline Schedule& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>The expression that defines when to trigger an update. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">
     * Schedule Expressions for Rules</a> in the Amazon CloudWatch Events User
     * Guide.</p>
     */
    inline Schedule& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>The expression that defines when to trigger an update. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">
     * Schedule Expressions for Rules</a> in the Amazon CloudWatch Events User
     * Guide.</p>
     */
    inline Schedule& WithExpression(const char* value) { SetExpression(value); return *this;}

  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
