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
    AWS_IOTWIRELESS_API EventNotificationItemConfigurations();
    AWS_IOTWIRELESS_API EventNotificationItemConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API EventNotificationItemConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Device registration state event configuration for an event configuration
     * item.</p>
     */
    inline const DeviceRegistrationStateEventConfiguration& GetDeviceRegistrationState() const{ return m_deviceRegistrationState; }

    /**
     * <p>Device registration state event configuration for an event configuration
     * item.</p>
     */
    inline bool DeviceRegistrationStateHasBeenSet() const { return m_deviceRegistrationStateHasBeenSet; }

    /**
     * <p>Device registration state event configuration for an event configuration
     * item.</p>
     */
    inline void SetDeviceRegistrationState(const DeviceRegistrationStateEventConfiguration& value) { m_deviceRegistrationStateHasBeenSet = true; m_deviceRegistrationState = value; }

    /**
     * <p>Device registration state event configuration for an event configuration
     * item.</p>
     */
    inline void SetDeviceRegistrationState(DeviceRegistrationStateEventConfiguration&& value) { m_deviceRegistrationStateHasBeenSet = true; m_deviceRegistrationState = std::move(value); }

    /**
     * <p>Device registration state event configuration for an event configuration
     * item.</p>
     */
    inline EventNotificationItemConfigurations& WithDeviceRegistrationState(const DeviceRegistrationStateEventConfiguration& value) { SetDeviceRegistrationState(value); return *this;}

    /**
     * <p>Device registration state event configuration for an event configuration
     * item.</p>
     */
    inline EventNotificationItemConfigurations& WithDeviceRegistrationState(DeviceRegistrationStateEventConfiguration&& value) { SetDeviceRegistrationState(std::move(value)); return *this;}


    /**
     * <p>Proximity event configuration for an event configuration item.</p>
     */
    inline const ProximityEventConfiguration& GetProximity() const{ return m_proximity; }

    /**
     * <p>Proximity event configuration for an event configuration item.</p>
     */
    inline bool ProximityHasBeenSet() const { return m_proximityHasBeenSet; }

    /**
     * <p>Proximity event configuration for an event configuration item.</p>
     */
    inline void SetProximity(const ProximityEventConfiguration& value) { m_proximityHasBeenSet = true; m_proximity = value; }

    /**
     * <p>Proximity event configuration for an event configuration item.</p>
     */
    inline void SetProximity(ProximityEventConfiguration&& value) { m_proximityHasBeenSet = true; m_proximity = std::move(value); }

    /**
     * <p>Proximity event configuration for an event configuration item.</p>
     */
    inline EventNotificationItemConfigurations& WithProximity(const ProximityEventConfiguration& value) { SetProximity(value); return *this;}

    /**
     * <p>Proximity event configuration for an event configuration item.</p>
     */
    inline EventNotificationItemConfigurations& WithProximity(ProximityEventConfiguration&& value) { SetProximity(std::move(value)); return *this;}


    /**
     * <p>Join event configuration for an event configuration item.</p>
     */
    inline const JoinEventConfiguration& GetJoin() const{ return m_join; }

    /**
     * <p>Join event configuration for an event configuration item.</p>
     */
    inline bool JoinHasBeenSet() const { return m_joinHasBeenSet; }

    /**
     * <p>Join event configuration for an event configuration item.</p>
     */
    inline void SetJoin(const JoinEventConfiguration& value) { m_joinHasBeenSet = true; m_join = value; }

    /**
     * <p>Join event configuration for an event configuration item.</p>
     */
    inline void SetJoin(JoinEventConfiguration&& value) { m_joinHasBeenSet = true; m_join = std::move(value); }

    /**
     * <p>Join event configuration for an event configuration item.</p>
     */
    inline EventNotificationItemConfigurations& WithJoin(const JoinEventConfiguration& value) { SetJoin(value); return *this;}

    /**
     * <p>Join event configuration for an event configuration item.</p>
     */
    inline EventNotificationItemConfigurations& WithJoin(JoinEventConfiguration&& value) { SetJoin(std::move(value)); return *this;}


    /**
     * <p>Connection status event configuration for an event configuration item.</p>
     */
    inline const ConnectionStatusEventConfiguration& GetConnectionStatus() const{ return m_connectionStatus; }

    /**
     * <p>Connection status event configuration for an event configuration item.</p>
     */
    inline bool ConnectionStatusHasBeenSet() const { return m_connectionStatusHasBeenSet; }

    /**
     * <p>Connection status event configuration for an event configuration item.</p>
     */
    inline void SetConnectionStatus(const ConnectionStatusEventConfiguration& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = value; }

    /**
     * <p>Connection status event configuration for an event configuration item.</p>
     */
    inline void SetConnectionStatus(ConnectionStatusEventConfiguration&& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = std::move(value); }

    /**
     * <p>Connection status event configuration for an event configuration item.</p>
     */
    inline EventNotificationItemConfigurations& WithConnectionStatus(const ConnectionStatusEventConfiguration& value) { SetConnectionStatus(value); return *this;}

    /**
     * <p>Connection status event configuration for an event configuration item.</p>
     */
    inline EventNotificationItemConfigurations& WithConnectionStatus(ConnectionStatusEventConfiguration&& value) { SetConnectionStatus(std::move(value)); return *this;}


    /**
     * <p>Message delivery status event configuration for an event configuration
     * item.</p>
     */
    inline const MessageDeliveryStatusEventConfiguration& GetMessageDeliveryStatus() const{ return m_messageDeliveryStatus; }

    /**
     * <p>Message delivery status event configuration for an event configuration
     * item.</p>
     */
    inline bool MessageDeliveryStatusHasBeenSet() const { return m_messageDeliveryStatusHasBeenSet; }

    /**
     * <p>Message delivery status event configuration for an event configuration
     * item.</p>
     */
    inline void SetMessageDeliveryStatus(const MessageDeliveryStatusEventConfiguration& value) { m_messageDeliveryStatusHasBeenSet = true; m_messageDeliveryStatus = value; }

    /**
     * <p>Message delivery status event configuration for an event configuration
     * item.</p>
     */
    inline void SetMessageDeliveryStatus(MessageDeliveryStatusEventConfiguration&& value) { m_messageDeliveryStatusHasBeenSet = true; m_messageDeliveryStatus = std::move(value); }

    /**
     * <p>Message delivery status event configuration for an event configuration
     * item.</p>
     */
    inline EventNotificationItemConfigurations& WithMessageDeliveryStatus(const MessageDeliveryStatusEventConfiguration& value) { SetMessageDeliveryStatus(value); return *this;}

    /**
     * <p>Message delivery status event configuration for an event configuration
     * item.</p>
     */
    inline EventNotificationItemConfigurations& WithMessageDeliveryStatus(MessageDeliveryStatusEventConfiguration&& value) { SetMessageDeliveryStatus(std::move(value)); return *this;}

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
