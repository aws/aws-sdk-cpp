/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents/model/NotificationAction.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Contains information about one or more notification actions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/AlarmNotification">AWS
   * API Reference</a></p>
   */
  class AlarmNotification
  {
  public:
    AWS_IOTEVENTS_API AlarmNotification();
    AWS_IOTEVENTS_API AlarmNotification(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API AlarmNotification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains the notification settings of an alarm model. The settings apply to
     * all alarms that were created based on this alarm model.</p>
     */
    inline const Aws::Vector<NotificationAction>& GetNotificationActions() const{ return m_notificationActions; }

    /**
     * <p>Contains the notification settings of an alarm model. The settings apply to
     * all alarms that were created based on this alarm model.</p>
     */
    inline bool NotificationActionsHasBeenSet() const { return m_notificationActionsHasBeenSet; }

    /**
     * <p>Contains the notification settings of an alarm model. The settings apply to
     * all alarms that were created based on this alarm model.</p>
     */
    inline void SetNotificationActions(const Aws::Vector<NotificationAction>& value) { m_notificationActionsHasBeenSet = true; m_notificationActions = value; }

    /**
     * <p>Contains the notification settings of an alarm model. The settings apply to
     * all alarms that were created based on this alarm model.</p>
     */
    inline void SetNotificationActions(Aws::Vector<NotificationAction>&& value) { m_notificationActionsHasBeenSet = true; m_notificationActions = std::move(value); }

    /**
     * <p>Contains the notification settings of an alarm model. The settings apply to
     * all alarms that were created based on this alarm model.</p>
     */
    inline AlarmNotification& WithNotificationActions(const Aws::Vector<NotificationAction>& value) { SetNotificationActions(value); return *this;}

    /**
     * <p>Contains the notification settings of an alarm model. The settings apply to
     * all alarms that were created based on this alarm model.</p>
     */
    inline AlarmNotification& WithNotificationActions(Aws::Vector<NotificationAction>&& value) { SetNotificationActions(std::move(value)); return *this;}

    /**
     * <p>Contains the notification settings of an alarm model. The settings apply to
     * all alarms that were created based on this alarm model.</p>
     */
    inline AlarmNotification& AddNotificationActions(const NotificationAction& value) { m_notificationActionsHasBeenSet = true; m_notificationActions.push_back(value); return *this; }

    /**
     * <p>Contains the notification settings of an alarm model. The settings apply to
     * all alarms that were created based on this alarm model.</p>
     */
    inline AlarmNotification& AddNotificationActions(NotificationAction&& value) { m_notificationActionsHasBeenSet = true; m_notificationActions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<NotificationAction> m_notificationActions;
    bool m_notificationActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
