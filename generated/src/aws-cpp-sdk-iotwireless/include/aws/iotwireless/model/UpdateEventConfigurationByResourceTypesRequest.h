/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/iotwireless/model/DeviceRegistrationStateResourceTypeEventConfiguration.h>
#include <aws/iotwireless/model/ProximityResourceTypeEventConfiguration.h>
#include <aws/iotwireless/model/JoinResourceTypeEventConfiguration.h>
#include <aws/iotwireless/model/ConnectionStatusResourceTypeEventConfiguration.h>
#include <aws/iotwireless/model/MessageDeliveryStatusResourceTypeEventConfiguration.h>
#include <utility>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class UpdateEventConfigurationByResourceTypesRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API UpdateEventConfigurationByResourceTypesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEventConfigurationByResourceTypes"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Device registration state resource type event configuration object for
     * enabling and disabling wireless gateway topic.</p>
     */
    inline const DeviceRegistrationStateResourceTypeEventConfiguration& GetDeviceRegistrationState() const { return m_deviceRegistrationState; }
    inline bool DeviceRegistrationStateHasBeenSet() const { return m_deviceRegistrationStateHasBeenSet; }
    template<typename DeviceRegistrationStateT = DeviceRegistrationStateResourceTypeEventConfiguration>
    void SetDeviceRegistrationState(DeviceRegistrationStateT&& value) { m_deviceRegistrationStateHasBeenSet = true; m_deviceRegistrationState = std::forward<DeviceRegistrationStateT>(value); }
    template<typename DeviceRegistrationStateT = DeviceRegistrationStateResourceTypeEventConfiguration>
    UpdateEventConfigurationByResourceTypesRequest& WithDeviceRegistrationState(DeviceRegistrationStateT&& value) { SetDeviceRegistrationState(std::forward<DeviceRegistrationStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Proximity resource type event configuration object for enabling and disabling
     * wireless gateway topic.</p>
     */
    inline const ProximityResourceTypeEventConfiguration& GetProximity() const { return m_proximity; }
    inline bool ProximityHasBeenSet() const { return m_proximityHasBeenSet; }
    template<typename ProximityT = ProximityResourceTypeEventConfiguration>
    void SetProximity(ProximityT&& value) { m_proximityHasBeenSet = true; m_proximity = std::forward<ProximityT>(value); }
    template<typename ProximityT = ProximityResourceTypeEventConfiguration>
    UpdateEventConfigurationByResourceTypesRequest& WithProximity(ProximityT&& value) { SetProximity(std::forward<ProximityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Join resource type event configuration object for enabling and disabling
     * wireless device topic.</p>
     */
    inline const JoinResourceTypeEventConfiguration& GetJoin() const { return m_join; }
    inline bool JoinHasBeenSet() const { return m_joinHasBeenSet; }
    template<typename JoinT = JoinResourceTypeEventConfiguration>
    void SetJoin(JoinT&& value) { m_joinHasBeenSet = true; m_join = std::forward<JoinT>(value); }
    template<typename JoinT = JoinResourceTypeEventConfiguration>
    UpdateEventConfigurationByResourceTypesRequest& WithJoin(JoinT&& value) { SetJoin(std::forward<JoinT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connection status resource type event configuration object for enabling and
     * disabling wireless gateway topic.</p>
     */
    inline const ConnectionStatusResourceTypeEventConfiguration& GetConnectionStatus() const { return m_connectionStatus; }
    inline bool ConnectionStatusHasBeenSet() const { return m_connectionStatusHasBeenSet; }
    template<typename ConnectionStatusT = ConnectionStatusResourceTypeEventConfiguration>
    void SetConnectionStatus(ConnectionStatusT&& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = std::forward<ConnectionStatusT>(value); }
    template<typename ConnectionStatusT = ConnectionStatusResourceTypeEventConfiguration>
    UpdateEventConfigurationByResourceTypesRequest& WithConnectionStatus(ConnectionStatusT&& value) { SetConnectionStatus(std::forward<ConnectionStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Message delivery status resource type event configuration object for enabling
     * and disabling wireless device topic.</p>
     */
    inline const MessageDeliveryStatusResourceTypeEventConfiguration& GetMessageDeliveryStatus() const { return m_messageDeliveryStatus; }
    inline bool MessageDeliveryStatusHasBeenSet() const { return m_messageDeliveryStatusHasBeenSet; }
    template<typename MessageDeliveryStatusT = MessageDeliveryStatusResourceTypeEventConfiguration>
    void SetMessageDeliveryStatus(MessageDeliveryStatusT&& value) { m_messageDeliveryStatusHasBeenSet = true; m_messageDeliveryStatus = std::forward<MessageDeliveryStatusT>(value); }
    template<typename MessageDeliveryStatusT = MessageDeliveryStatusResourceTypeEventConfiguration>
    UpdateEventConfigurationByResourceTypesRequest& WithMessageDeliveryStatus(MessageDeliveryStatusT&& value) { SetMessageDeliveryStatus(std::forward<MessageDeliveryStatusT>(value)); return *this;}
    ///@}
  private:

    DeviceRegistrationStateResourceTypeEventConfiguration m_deviceRegistrationState;
    bool m_deviceRegistrationStateHasBeenSet = false;

    ProximityResourceTypeEventConfiguration m_proximity;
    bool m_proximityHasBeenSet = false;

    JoinResourceTypeEventConfiguration m_join;
    bool m_joinHasBeenSet = false;

    ConnectionStatusResourceTypeEventConfiguration m_connectionStatus;
    bool m_connectionStatusHasBeenSet = false;

    MessageDeliveryStatusResourceTypeEventConfiguration m_messageDeliveryStatus;
    bool m_messageDeliveryStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
