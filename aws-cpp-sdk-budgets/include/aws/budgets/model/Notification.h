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
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/model/NotificationType.h>
#include <aws/budgets/model/ComparisonOperator.h>
#include <aws/budgets/model/ThresholdType.h>
#include <aws/budgets/model/NotificationState.h>
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
namespace Budgets
{
namespace Model
{

  /**
   * <p>A notification that is associated with a budget. A budget can have up to five
   * notifications. </p> <p>Each notification must have at least one subscriber. A
   * notification can have one SNS subscriber and up to 10 email subscribers, for a
   * total of 11 subscribers.</p> <p>For example, if you have a budget for 200
   * dollars and you want to be notified when you go over 160 dollars, create a
   * notification with the following parameters:</p> <ul> <li> <p>A notificationType
   * of <code>ACTUAL</code> </p> </li> <li> <p>A <code>thresholdType</code> of
   * <code>PERCENTAGE</code> </p> </li> <li> <p>A <code>comparisonOperator</code> of
   * <code>GREATER_THAN</code> </p> </li> <li> <p>A notification
   * <code>threshold</code> of <code>80</code> </p> </li> </ul><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/Notification">AWS
   * API Reference</a></p>
   */
  class AWS_BUDGETS_API Notification
  {
  public:
    Notification();
    Notification(Aws::Utils::Json::JsonView jsonValue);
    Notification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether the notification is for how much you have spent (<code>ACTUAL</code>)
     * or for how much you're forecasted to spend (<code>FORECASTED</code>).</p>
     */
    inline const NotificationType& GetNotificationType() const{ return m_notificationType; }

    /**
     * <p>Whether the notification is for how much you have spent (<code>ACTUAL</code>)
     * or for how much you're forecasted to spend (<code>FORECASTED</code>).</p>
     */
    inline bool NotificationTypeHasBeenSet() const { return m_notificationTypeHasBeenSet; }

    /**
     * <p>Whether the notification is for how much you have spent (<code>ACTUAL</code>)
     * or for how much you're forecasted to spend (<code>FORECASTED</code>).</p>
     */
    inline void SetNotificationType(const NotificationType& value) { m_notificationTypeHasBeenSet = true; m_notificationType = value; }

    /**
     * <p>Whether the notification is for how much you have spent (<code>ACTUAL</code>)
     * or for how much you're forecasted to spend (<code>FORECASTED</code>).</p>
     */
    inline void SetNotificationType(NotificationType&& value) { m_notificationTypeHasBeenSet = true; m_notificationType = std::move(value); }

    /**
     * <p>Whether the notification is for how much you have spent (<code>ACTUAL</code>)
     * or for how much you're forecasted to spend (<code>FORECASTED</code>).</p>
     */
    inline Notification& WithNotificationType(const NotificationType& value) { SetNotificationType(value); return *this;}

    /**
     * <p>Whether the notification is for how much you have spent (<code>ACTUAL</code>)
     * or for how much you're forecasted to spend (<code>FORECASTED</code>).</p>
     */
    inline Notification& WithNotificationType(NotificationType&& value) { SetNotificationType(std::move(value)); return *this;}


    /**
     * <p>The comparison that is used for this notification.</p>
     */
    inline const ComparisonOperator& GetComparisonOperator() const{ return m_comparisonOperator; }

    /**
     * <p>The comparison that is used for this notification.</p>
     */
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }

    /**
     * <p>The comparison that is used for this notification.</p>
     */
    inline void SetComparisonOperator(const ComparisonOperator& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    /**
     * <p>The comparison that is used for this notification.</p>
     */
    inline void SetComparisonOperator(ComparisonOperator&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = std::move(value); }

    /**
     * <p>The comparison that is used for this notification.</p>
     */
    inline Notification& WithComparisonOperator(const ComparisonOperator& value) { SetComparisonOperator(value); return *this;}

    /**
     * <p>The comparison that is used for this notification.</p>
     */
    inline Notification& WithComparisonOperator(ComparisonOperator&& value) { SetComparisonOperator(std::move(value)); return *this;}


    /**
     * <p>The threshold that is associated with a notification. Thresholds are always a
     * percentage.</p>
     */
    inline double GetThreshold() const{ return m_threshold; }

    /**
     * <p>The threshold that is associated with a notification. Thresholds are always a
     * percentage.</p>
     */
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }

    /**
     * <p>The threshold that is associated with a notification. Thresholds are always a
     * percentage.</p>
     */
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }

    /**
     * <p>The threshold that is associated with a notification. Thresholds are always a
     * percentage.</p>
     */
    inline Notification& WithThreshold(double value) { SetThreshold(value); return *this;}


    /**
     * <p>The type of threshold for a notification. For <code>ABSOLUTE_VALUE</code>
     * thresholds, AWS notifies you when you go over or are forecasted to go over your
     * total cost threshold. For <code>PERCENTAGE</code> thresholds, AWS notifies you
     * when you go over or are forecasted to go over a certain percentage of your
     * forecasted spend. For example, if you have a budget for 200 dollars and you have
     * a <code>PERCENTAGE</code> threshold of 80%, AWS notifies you when you go over
     * 160 dollars.</p>
     */
    inline const ThresholdType& GetThresholdType() const{ return m_thresholdType; }

    /**
     * <p>The type of threshold for a notification. For <code>ABSOLUTE_VALUE</code>
     * thresholds, AWS notifies you when you go over or are forecasted to go over your
     * total cost threshold. For <code>PERCENTAGE</code> thresholds, AWS notifies you
     * when you go over or are forecasted to go over a certain percentage of your
     * forecasted spend. For example, if you have a budget for 200 dollars and you have
     * a <code>PERCENTAGE</code> threshold of 80%, AWS notifies you when you go over
     * 160 dollars.</p>
     */
    inline bool ThresholdTypeHasBeenSet() const { return m_thresholdTypeHasBeenSet; }

    /**
     * <p>The type of threshold for a notification. For <code>ABSOLUTE_VALUE</code>
     * thresholds, AWS notifies you when you go over or are forecasted to go over your
     * total cost threshold. For <code>PERCENTAGE</code> thresholds, AWS notifies you
     * when you go over or are forecasted to go over a certain percentage of your
     * forecasted spend. For example, if you have a budget for 200 dollars and you have
     * a <code>PERCENTAGE</code> threshold of 80%, AWS notifies you when you go over
     * 160 dollars.</p>
     */
    inline void SetThresholdType(const ThresholdType& value) { m_thresholdTypeHasBeenSet = true; m_thresholdType = value; }

    /**
     * <p>The type of threshold for a notification. For <code>ABSOLUTE_VALUE</code>
     * thresholds, AWS notifies you when you go over or are forecasted to go over your
     * total cost threshold. For <code>PERCENTAGE</code> thresholds, AWS notifies you
     * when you go over or are forecasted to go over a certain percentage of your
     * forecasted spend. For example, if you have a budget for 200 dollars and you have
     * a <code>PERCENTAGE</code> threshold of 80%, AWS notifies you when you go over
     * 160 dollars.</p>
     */
    inline void SetThresholdType(ThresholdType&& value) { m_thresholdTypeHasBeenSet = true; m_thresholdType = std::move(value); }

    /**
     * <p>The type of threshold for a notification. For <code>ABSOLUTE_VALUE</code>
     * thresholds, AWS notifies you when you go over or are forecasted to go over your
     * total cost threshold. For <code>PERCENTAGE</code> thresholds, AWS notifies you
     * when you go over or are forecasted to go over a certain percentage of your
     * forecasted spend. For example, if you have a budget for 200 dollars and you have
     * a <code>PERCENTAGE</code> threshold of 80%, AWS notifies you when you go over
     * 160 dollars.</p>
     */
    inline Notification& WithThresholdType(const ThresholdType& value) { SetThresholdType(value); return *this;}

    /**
     * <p>The type of threshold for a notification. For <code>ABSOLUTE_VALUE</code>
     * thresholds, AWS notifies you when you go over or are forecasted to go over your
     * total cost threshold. For <code>PERCENTAGE</code> thresholds, AWS notifies you
     * when you go over or are forecasted to go over a certain percentage of your
     * forecasted spend. For example, if you have a budget for 200 dollars and you have
     * a <code>PERCENTAGE</code> threshold of 80%, AWS notifies you when you go over
     * 160 dollars.</p>
     */
    inline Notification& WithThresholdType(ThresholdType&& value) { SetThresholdType(std::move(value)); return *this;}


    /**
     * <p>Whether this notification is in alarm. If a budget notification is in the
     * <code>ALARM</code> state, you have passed the set threshold for the budget.</p>
     */
    inline const NotificationState& GetNotificationState() const{ return m_notificationState; }

    /**
     * <p>Whether this notification is in alarm. If a budget notification is in the
     * <code>ALARM</code> state, you have passed the set threshold for the budget.</p>
     */
    inline bool NotificationStateHasBeenSet() const { return m_notificationStateHasBeenSet; }

    /**
     * <p>Whether this notification is in alarm. If a budget notification is in the
     * <code>ALARM</code> state, you have passed the set threshold for the budget.</p>
     */
    inline void SetNotificationState(const NotificationState& value) { m_notificationStateHasBeenSet = true; m_notificationState = value; }

    /**
     * <p>Whether this notification is in alarm. If a budget notification is in the
     * <code>ALARM</code> state, you have passed the set threshold for the budget.</p>
     */
    inline void SetNotificationState(NotificationState&& value) { m_notificationStateHasBeenSet = true; m_notificationState = std::move(value); }

    /**
     * <p>Whether this notification is in alarm. If a budget notification is in the
     * <code>ALARM</code> state, you have passed the set threshold for the budget.</p>
     */
    inline Notification& WithNotificationState(const NotificationState& value) { SetNotificationState(value); return *this;}

    /**
     * <p>Whether this notification is in alarm. If a budget notification is in the
     * <code>ALARM</code> state, you have passed the set threshold for the budget.</p>
     */
    inline Notification& WithNotificationState(NotificationState&& value) { SetNotificationState(std::move(value)); return *this;}

  private:

    NotificationType m_notificationType;
    bool m_notificationTypeHasBeenSet;

    ComparisonOperator m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet;

    double m_threshold;
    bool m_thresholdHasBeenSet;

    ThresholdType m_thresholdType;
    bool m_thresholdTypeHasBeenSet;

    NotificationState m_notificationState;
    bool m_notificationStateHasBeenSet;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
