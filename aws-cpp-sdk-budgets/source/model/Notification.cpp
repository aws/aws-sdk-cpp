/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/Notification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Budgets
{
namespace Model
{

Notification::Notification() : 
    m_notificationType(NotificationType::NOT_SET),
    m_notificationTypeHasBeenSet(false),
    m_comparisonOperator(ComparisonOperator::NOT_SET),
    m_comparisonOperatorHasBeenSet(false),
    m_threshold(0.0),
    m_thresholdHasBeenSet(false),
    m_thresholdType(ThresholdType::NOT_SET),
    m_thresholdTypeHasBeenSet(false),
    m_notificationState(NotificationState::NOT_SET),
    m_notificationStateHasBeenSet(false)
{
}

Notification::Notification(JsonView jsonValue) : 
    m_notificationType(NotificationType::NOT_SET),
    m_notificationTypeHasBeenSet(false),
    m_comparisonOperator(ComparisonOperator::NOT_SET),
    m_comparisonOperatorHasBeenSet(false),
    m_threshold(0.0),
    m_thresholdHasBeenSet(false),
    m_thresholdType(ThresholdType::NOT_SET),
    m_thresholdTypeHasBeenSet(false),
    m_notificationState(NotificationState::NOT_SET),
    m_notificationStateHasBeenSet(false)
{
  *this = jsonValue;
}

Notification& Notification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NotificationType"))
  {
    m_notificationType = NotificationTypeMapper::GetNotificationTypeForName(jsonValue.GetString("NotificationType"));

    m_notificationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComparisonOperator"))
  {
    m_comparisonOperator = ComparisonOperatorMapper::GetComparisonOperatorForName(jsonValue.GetString("ComparisonOperator"));

    m_comparisonOperatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Threshold"))
  {
    m_threshold = jsonValue.GetDouble("Threshold");

    m_thresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThresholdType"))
  {
    m_thresholdType = ThresholdTypeMapper::GetThresholdTypeForName(jsonValue.GetString("ThresholdType"));

    m_thresholdTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotificationState"))
  {
    m_notificationState = NotificationStateMapper::GetNotificationStateForName(jsonValue.GetString("NotificationState"));

    m_notificationStateHasBeenSet = true;
  }

  return *this;
}

JsonValue Notification::Jsonize() const
{
  JsonValue payload;

  if(m_notificationTypeHasBeenSet)
  {
   payload.WithString("NotificationType", NotificationTypeMapper::GetNameForNotificationType(m_notificationType));
  }

  if(m_comparisonOperatorHasBeenSet)
  {
   payload.WithString("ComparisonOperator", ComparisonOperatorMapper::GetNameForComparisonOperator(m_comparisonOperator));
  }

  if(m_thresholdHasBeenSet)
  {
   payload.WithDouble("Threshold", m_threshold);

  }

  if(m_thresholdTypeHasBeenSet)
  {
   payload.WithString("ThresholdType", ThresholdTypeMapper::GetNameForThresholdType(m_thresholdType));
  }

  if(m_notificationStateHasBeenSet)
  {
   payload.WithString("NotificationState", NotificationStateMapper::GetNameForNotificationState(m_notificationState));
  }

  return payload;
}

} // namespace Model
} // namespace Budgets
} // namespace Aws
