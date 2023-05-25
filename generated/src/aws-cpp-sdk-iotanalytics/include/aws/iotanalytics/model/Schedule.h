/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Schedule
  {
  public:
    AWS_IOTANALYTICS_API Schedule();
    AWS_IOTANALYTICS_API Schedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Schedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The expression that defines when to trigger an update. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">Schedule
     * Expressions for Rules</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>The expression that defines when to trigger an update. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">Schedule
     * Expressions for Rules</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>The expression that defines when to trigger an update. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">Schedule
     * Expressions for Rules</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>The expression that defines when to trigger an update. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">Schedule
     * Expressions for Rules</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>The expression that defines when to trigger an update. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">Schedule
     * Expressions for Rules</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>The expression that defines when to trigger an update. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">Schedule
     * Expressions for Rules</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline Schedule& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>The expression that defines when to trigger an update. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">Schedule
     * Expressions for Rules</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline Schedule& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>The expression that defines when to trigger an update. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">Schedule
     * Expressions for Rules</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline Schedule& WithExpression(const char* value) { SetExpression(value); return *this;}

  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
