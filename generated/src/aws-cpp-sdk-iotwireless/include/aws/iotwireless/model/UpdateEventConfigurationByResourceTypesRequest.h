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
    AWS_IOTWIRELESS_API UpdateEventConfigurationByResourceTypesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEventConfigurationByResourceTypes"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    /**
     * <p>Device registration state resource type event configuration object for
     * enabling and disabling wireless gateway topic.</p>
     */
    inline const DeviceRegistrationStateResourceTypeEventConfiguration& GetDeviceRegistrationState() const{ return m_deviceRegistrationState; }

    /**
     * <p>Device registration state resource type event configuration object for
     * enabling and disabling wireless gateway topic.</p>
     */
    inline bool DeviceRegistrationStateHasBeenSet() const { return m_deviceRegistrationStateHasBeenSet; }

    /**
     * <p>Device registration state resource type event configuration object for
     * enabling and disabling wireless gateway topic.</p>
     */
    inline void SetDeviceRegistrationState(const DeviceRegistrationStateResourceTypeEventConfiguration& value) { m_deviceRegistrationStateHasBeenSet = true; m_deviceRegistrationState = value; }

    /**
     * <p>Device registration state resource type event configuration object for
     * enabling and disabling wireless gateway topic.</p>
     */
    inline void SetDeviceRegistrationState(DeviceRegistrationStateResourceTypeEventConfiguration&& value) { m_deviceRegistrationStateHasBeenSet = true; m_deviceRegistrationState = std::move(value); }

    /**
     * <p>Device registration state resource type event configuration object for
     * enabling and disabling wireless gateway topic.</p>
     */
    inline UpdateEventConfigurationByResourceTypesRequest& WithDeviceRegistrationState(const DeviceRegistrationStateResourceTypeEventConfiguration& value) { SetDeviceRegistrationState(value); return *this;}

    /**
     * <p>Device registration state resource type event configuration object for
     * enabling and disabling wireless gateway topic.</p>
     */
    inline UpdateEventConfigurationByResourceTypesRequest& WithDeviceRegistrationState(DeviceRegistrationStateResourceTypeEventConfiguration&& value) { SetDeviceRegistrationState(std::move(value)); return *this;}


    /**
     * <p>Proximity resource type event configuration object for enabling and disabling
     * wireless gateway topic.</p>
     */
    inline const ProximityResourceTypeEventConfiguration& GetProximity() const{ return m_proximity; }

    /**
     * <p>Proximity resource type event configuration object for enabling and disabling
     * wireless gateway topic.</p>
     */
    inline bool ProximityHasBeenSet() const { return m_proximityHasBeenSet; }

    /**
     * <p>Proximity resource type event configuration object for enabling and disabling
     * wireless gateway topic.</p>
     */
    inline void SetProximity(const ProximityResourceTypeEventConfiguration& value) { m_proximityHasBeenSet = true; m_proximity = value; }

    /**
     * <p>Proximity resource type event configuration object for enabling and disabling
     * wireless gateway topic.</p>
     */
    inline void SetProximity(ProximityResourceTypeEventConfiguration&& value) { m_proximityHasBeenSet = true; m_proximity = std::move(value); }

    /**
     * <p>Proximity resource type event configuration object for enabling and disabling
     * wireless gateway topic.</p>
     */
    inline UpdateEventConfigurationByResourceTypesRequest& WithProximity(const ProximityResourceTypeEventConfiguration& value) { SetProximity(value); return *this;}

    /**
     * <p>Proximity resource type event configuration object for enabling and disabling
     * wireless gateway topic.</p>
     */
    inline UpdateEventConfigurationByResourceTypesRequest& WithProximity(ProximityResourceTypeEventConfiguration&& value) { SetProximity(std::move(value)); return *this;}


    /**
     * <p>Join resource type event configuration object for enabling and disabling
     * wireless device topic.</p>
     */
    inline const JoinResourceTypeEventConfiguration& GetJoin() const{ return m_join; }

    /**
     * <p>Join resource type event configuration object for enabling and disabling
     * wireless device topic.</p>
     */
    inline bool JoinHasBeenSet() const { return m_joinHasBeenSet; }

    /**
     * <p>Join resource type event configuration object for enabling and disabling
     * wireless device topic.</p>
     */
    inline void SetJoin(const JoinResourceTypeEventConfiguration& value) { m_joinHasBeenSet = true; m_join = value; }

    /**
     * <p>Join resource type event configuration object for enabling and disabling
     * wireless device topic.</p>
     */
    inline void SetJoin(JoinResourceTypeEventConfiguration&& value) { m_joinHasBeenSet = true; m_join = std::move(value); }

    /**
     * <p>Join resource type event configuration object for enabling and disabling
     * wireless device topic.</p>
     */
    inline UpdateEventConfigurationByResourceTypesRequest& WithJoin(const JoinResourceTypeEventConfiguration& value) { SetJoin(value); return *this;}

    /**
     * <p>Join resource type event configuration object for enabling and disabling
     * wireless device topic.</p>
     */
    inline UpdateEventConfigurationByResourceTypesRequest& WithJoin(JoinResourceTypeEventConfiguration&& value) { SetJoin(std::move(value)); return *this;}


    /**
     * <p>Connection status resource type event configuration object for enabling and
     * disabling wireless gateway topic.</p>
     */
    inline const ConnectionStatusResourceTypeEventConfiguration& GetConnectionStatus() const{ return m_connectionStatus; }

    /**
     * <p>Connection status resource type event configuration object for enabling and
     * disabling wireless gateway topic.</p>
     */
    inline bool ConnectionStatusHasBeenSet() const { return m_connectionStatusHasBeenSet; }

    /**
     * <p>Connection status resource type event configuration object for enabling and
     * disabling wireless gateway topic.</p>
     */
    inline void SetConnectionStatus(const ConnectionStatusResourceTypeEventConfiguration& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = value; }

    /**
     * <p>Connection status resource type event configuration object for enabling and
     * disabling wireless gateway topic.</p>
     */
    inline void SetConnectionStatus(ConnectionStatusResourceTypeEventConfiguration&& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = std::move(value); }

    /**
     * <p>Connection status resource type event configuration object for enabling and
     * disabling wireless gateway topic.</p>
     */
    inline UpdateEventConfigurationByResourceTypesRequest& WithConnectionStatus(const ConnectionStatusResourceTypeEventConfiguration& value) { SetConnectionStatus(value); return *this;}

    /**
     * <p>Connection status resource type event configuration object for enabling and
     * disabling wireless gateway topic.</p>
     */
    inline UpdateEventConfigurationByResourceTypesRequest& WithConnectionStatus(ConnectionStatusResourceTypeEventConfiguration&& value) { SetConnectionStatus(std::move(value)); return *this;}


    /**
     * <p>Message delivery status resource type event configuration object for enabling
     * and disabling wireless device topic.</p>
     */
    inline const MessageDeliveryStatusResourceTypeEventConfiguration& GetMessageDeliveryStatus() const{ return m_messageDeliveryStatus; }

    /**
     * <p>Message delivery status resource type event configuration object for enabling
     * and disabling wireless device topic.</p>
     */
    inline bool MessageDeliveryStatusHasBeenSet() const { return m_messageDeliveryStatusHasBeenSet; }

    /**
     * <p>Message delivery status resource type event configuration object for enabling
     * and disabling wireless device topic.</p>
     */
    inline void SetMessageDeliveryStatus(const MessageDeliveryStatusResourceTypeEventConfiguration& value) { m_messageDeliveryStatusHasBeenSet = true; m_messageDeliveryStatus = value; }

    /**
     * <p>Message delivery status resource type event configuration object for enabling
     * and disabling wireless device topic.</p>
     */
    inline void SetMessageDeliveryStatus(MessageDeliveryStatusResourceTypeEventConfiguration&& value) { m_messageDeliveryStatusHasBeenSet = true; m_messageDeliveryStatus = std::move(value); }

    /**
     * <p>Message delivery status resource type event configuration object for enabling
     * and disabling wireless device topic.</p>
     */
    inline UpdateEventConfigurationByResourceTypesRequest& WithMessageDeliveryStatus(const MessageDeliveryStatusResourceTypeEventConfiguration& value) { SetMessageDeliveryStatus(value); return *this;}

    /**
     * <p>Message delivery status resource type event configuration object for enabling
     * and disabling wireless device topic.</p>
     */
    inline UpdateEventConfigurationByResourceTypesRequest& WithMessageDeliveryStatus(MessageDeliveryStatusResourceTypeEventConfiguration&& value) { SetMessageDeliveryStatus(std::move(value)); return *this;}

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
