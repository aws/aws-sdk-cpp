/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>A notification that's associated with a budget. A budget can have up to ten
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
  class Notification
  {
  public:
    AWS_BUDGETS_API Notification() = default;
    AWS_BUDGETS_API Notification(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Notification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether the notification is for how much you have spent
     * (<code>ACTUAL</code>) or for how much that you're forecasted to spend
     * (<code>FORECASTED</code>).</p>
     */
    inline NotificationType GetNotificationType() const { return m_notificationType; }
    inline bool NotificationTypeHasBeenSet() const { return m_notificationTypeHasBeenSet; }
    inline void SetNotificationType(NotificationType value) { m_notificationTypeHasBeenSet = true; m_notificationType = value; }
    inline Notification& WithNotificationType(NotificationType value) { SetNotificationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The comparison that's used for this notification.</p>
     */
    inline ComparisonOperator GetComparisonOperator() const { return m_comparisonOperator; }
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }
    inline void SetComparisonOperator(ComparisonOperator value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }
    inline Notification& WithComparisonOperator(ComparisonOperator value) { SetComparisonOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The threshold that's associated with a notification. Thresholds are always a
     * percentage, and many customers find value being alerted between 50% - 200% of
     * the budgeted amount. The maximum limit for your threshold is 1,000,000% above
     * the budgeted amount.</p>
     */
    inline double GetThreshold() const { return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }
    inline Notification& WithThreshold(double value) { SetThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of threshold for a notification. For <code>ABSOLUTE_VALUE</code>
     * thresholds, Amazon Web Services notifies you when you go over or are forecasted
     * to go over your total cost threshold. For <code>PERCENTAGE</code> thresholds,
     * Amazon Web Services notifies you when you go over or are forecasted to go over a
     * certain percentage of your forecasted spend. For example, if you have a budget
     * for 200 dollars and you have a <code>PERCENTAGE</code> threshold of 80%, Amazon
     * Web Services notifies you when you go over 160 dollars.</p>
     */
    inline ThresholdType GetThresholdType() const { return m_thresholdType; }
    inline bool ThresholdTypeHasBeenSet() const { return m_thresholdTypeHasBeenSet; }
    inline void SetThresholdType(ThresholdType value) { m_thresholdTypeHasBeenSet = true; m_thresholdType = value; }
    inline Notification& WithThresholdType(ThresholdType value) { SetThresholdType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether this notification is in alarm. If a budget notification is
     * in the <code>ALARM</code> state, you passed the set threshold for the
     * budget.</p>
     */
    inline NotificationState GetNotificationState() const { return m_notificationState; }
    inline bool NotificationStateHasBeenSet() const { return m_notificationStateHasBeenSet; }
    inline void SetNotificationState(NotificationState value) { m_notificationStateHasBeenSet = true; m_notificationState = value; }
    inline Notification& WithNotificationState(NotificationState value) { SetNotificationState(value); return *this;}
    ///@}
  private:

    NotificationType m_notificationType{NotificationType::NOT_SET};
    bool m_notificationTypeHasBeenSet = false;

    ComparisonOperator m_comparisonOperator{ComparisonOperator::NOT_SET};
    bool m_comparisonOperatorHasBeenSet = false;

    double m_threshold{0.0};
    bool m_thresholdHasBeenSet = false;

    ThresholdType m_thresholdType{ThresholdType::NOT_SET};
    bool m_thresholdTypeHasBeenSet = false;

    NotificationState m_notificationState{NotificationState::NOT_SET};
    bool m_notificationStateHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
