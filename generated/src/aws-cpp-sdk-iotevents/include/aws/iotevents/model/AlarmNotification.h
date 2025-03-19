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
    AWS_IOTEVENTS_API AlarmNotification() = default;
    AWS_IOTEVENTS_API AlarmNotification(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API AlarmNotification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the notification settings of an alarm model. The settings apply to
     * all alarms that were created based on this alarm model.</p>
     */
    inline const Aws::Vector<NotificationAction>& GetNotificationActions() const { return m_notificationActions; }
    inline bool NotificationActionsHasBeenSet() const { return m_notificationActionsHasBeenSet; }
    template<typename NotificationActionsT = Aws::Vector<NotificationAction>>
    void SetNotificationActions(NotificationActionsT&& value) { m_notificationActionsHasBeenSet = true; m_notificationActions = std::forward<NotificationActionsT>(value); }
    template<typename NotificationActionsT = Aws::Vector<NotificationAction>>
    AlarmNotification& WithNotificationActions(NotificationActionsT&& value) { SetNotificationActions(std::forward<NotificationActionsT>(value)); return *this;}
    template<typename NotificationActionsT = NotificationAction>
    AlarmNotification& AddNotificationActions(NotificationActionsT&& value) { m_notificationActionsHasBeenSet = true; m_notificationActions.emplace_back(std::forward<NotificationActionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<NotificationAction> m_notificationActions;
    bool m_notificationActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
