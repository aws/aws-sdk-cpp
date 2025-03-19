/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/DeviceRegistrationStateEventConfiguration.h>
#include <aws/iotwireless/model/ProximityEventConfiguration.h>
#include <aws/iotwireless/model/JoinEventConfiguration.h>
#include <aws/iotwireless/model/ConnectionStatusEventConfiguration.h>
#include <aws/iotwireless/model/MessageDeliveryStatusEventConfiguration.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>Object of all event configurations and the status of the event
   * topics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/EventNotificationItemConfigurations">AWS
   * API Reference</a></p>
   */
  class EventNotificationItemConfigurations
  {
  public:
    AWS_IOTWIRELESS_API EventNotificationItemConfigurations() = default;
    AWS_IOTWIRELESS_API EventNotificationItemConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API EventNotificationItemConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Device registration state event configuration for an event configuration
     * item.</p>
     */
    inline const DeviceRegistrationStateEventConfiguration& GetDeviceRegistrationState() const { return m_deviceRegistrationState; }
    inline bool DeviceRegistrationStateHasBeenSet() const { return m_deviceRegistrationStateHasBeenSet; }
    template<typename DeviceRegistrationStateT = DeviceRegistrationStateEventConfiguration>
    void SetDeviceRegistrationState(DeviceRegistrationStateT&& value) { m_deviceRegistrationStateHasBeenSet = true; m_deviceRegistrationState = std::forward<DeviceRegistrationStateT>(value); }
    template<typename DeviceRegistrationStateT = DeviceRegistrationStateEventConfiguration>
    EventNotificationItemConfigurations& WithDeviceRegistrationState(DeviceRegistrationStateT&& value) { SetDeviceRegistrationState(std::forward<DeviceRegistrationStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Proximity event configuration for an event configuration item.</p>
     */
    inline const ProximityEventConfiguration& GetProximity() const { return m_proximity; }
    inline bool ProximityHasBeenSet() const { return m_proximityHasBeenSet; }
    template<typename ProximityT = ProximityEventConfiguration>
    void SetProximity(ProximityT&& value) { m_proximityHasBeenSet = true; m_proximity = std::forward<ProximityT>(value); }
    template<typename ProximityT = ProximityEventConfiguration>
    EventNotificationItemConfigurations& WithProximity(ProximityT&& value) { SetProximity(std::forward<ProximityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Join event configuration for an event configuration item.</p>
     */
    inline const JoinEventConfiguration& GetJoin() const { return m_join; }
    inline bool JoinHasBeenSet() const { return m_joinHasBeenSet; }
    template<typename JoinT = JoinEventConfiguration>
    void SetJoin(JoinT&& value) { m_joinHasBeenSet = true; m_join = std::forward<JoinT>(value); }
    template<typename JoinT = JoinEventConfiguration>
    EventNotificationItemConfigurations& WithJoin(JoinT&& value) { SetJoin(std::forward<JoinT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connection status event configuration for an event configuration item.</p>
     */
    inline const ConnectionStatusEventConfiguration& GetConnectionStatus() const { return m_connectionStatus; }
    inline bool ConnectionStatusHasBeenSet() const { return m_connectionStatusHasBeenSet; }
    template<typename ConnectionStatusT = ConnectionStatusEventConfiguration>
    void SetConnectionStatus(ConnectionStatusT&& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = std::forward<ConnectionStatusT>(value); }
    template<typename ConnectionStatusT = ConnectionStatusEventConfiguration>
    EventNotificationItemConfigurations& WithConnectionStatus(ConnectionStatusT&& value) { SetConnectionStatus(std::forward<ConnectionStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Message delivery status event configuration for an event configuration
     * item.</p>
     */
    inline const MessageDeliveryStatusEventConfiguration& GetMessageDeliveryStatus() const { return m_messageDeliveryStatus; }
    inline bool MessageDeliveryStatusHasBeenSet() const { return m_messageDeliveryStatusHasBeenSet; }
    template<typename MessageDeliveryStatusT = MessageDeliveryStatusEventConfiguration>
    void SetMessageDeliveryStatus(MessageDeliveryStatusT&& value) { m_messageDeliveryStatusHasBeenSet = true; m_messageDeliveryStatus = std::forward<MessageDeliveryStatusT>(value); }
    template<typename MessageDeliveryStatusT = MessageDeliveryStatusEventConfiguration>
    EventNotificationItemConfigurations& WithMessageDeliveryStatus(MessageDeliveryStatusT&& value) { SetMessageDeliveryStatus(std::forward<MessageDeliveryStatusT>(value)); return *this;}
    ///@}
  private:

    DeviceRegistrationStateEventConfiguration m_deviceRegistrationState;
    bool m_deviceRegistrationStateHasBeenSet = false;

    ProximityEventConfiguration m_proximity;
    bool m_proximityHasBeenSet = false;

    JoinEventConfiguration m_join;
    bool m_joinHasBeenSet = false;

    ConnectionStatusEventConfiguration m_connectionStatus;
    bool m_connectionStatusHasBeenSet = false;

    MessageDeliveryStatusEventConfiguration m_messageDeliveryStatus;
    bool m_messageDeliveryStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
