/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/IdentifierType.h>
#include <aws/iotwireless/model/EventNotificationPartnerType.h>
#include <aws/iotwireless/model/DeviceRegistrationStateEventConfiguration.h>
#include <aws/iotwireless/model/ProximityEventConfiguration.h>
#include <aws/iotwireless/model/JoinEventConfiguration.h>
#include <aws/iotwireless/model/ConnectionStatusEventConfiguration.h>
#include <aws/iotwireless/model/MessageDeliveryStatusEventConfiguration.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class UpdateResourceEventConfigurationRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API UpdateResourceEventConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResourceEventConfiguration"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;

    AWS_IOTWIRELESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Resource identifier to opt in for event messaging.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>Resource identifier to opt in for event messaging.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>Resource identifier to opt in for event messaging.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>Resource identifier to opt in for event messaging.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>Resource identifier to opt in for event messaging.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>Resource identifier to opt in for event messaging.</p>
     */
    inline UpdateResourceEventConfigurationRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>Resource identifier to opt in for event messaging.</p>
     */
    inline UpdateResourceEventConfigurationRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>Resource identifier to opt in for event messaging.</p>
     */
    inline UpdateResourceEventConfigurationRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>Identifier type of the particular resource identifier for event
     * configuration.</p>
     */
    inline const IdentifierType& GetIdentifierType() const{ return m_identifierType; }

    /**
     * <p>Identifier type of the particular resource identifier for event
     * configuration.</p>
     */
    inline bool IdentifierTypeHasBeenSet() const { return m_identifierTypeHasBeenSet; }

    /**
     * <p>Identifier type of the particular resource identifier for event
     * configuration.</p>
     */
    inline void SetIdentifierType(const IdentifierType& value) { m_identifierTypeHasBeenSet = true; m_identifierType = value; }

    /**
     * <p>Identifier type of the particular resource identifier for event
     * configuration.</p>
     */
    inline void SetIdentifierType(IdentifierType&& value) { m_identifierTypeHasBeenSet = true; m_identifierType = std::move(value); }

    /**
     * <p>Identifier type of the particular resource identifier for event
     * configuration.</p>
     */
    inline UpdateResourceEventConfigurationRequest& WithIdentifierType(const IdentifierType& value) { SetIdentifierType(value); return *this;}

    /**
     * <p>Identifier type of the particular resource identifier for event
     * configuration.</p>
     */
    inline UpdateResourceEventConfigurationRequest& WithIdentifierType(IdentifierType&& value) { SetIdentifierType(std::move(value)); return *this;}


    /**
     * <p>Partner type of the resource if the identifier type is
     * <code>PartnerAccountId</code> </p>
     */
    inline const EventNotificationPartnerType& GetPartnerType() const{ return m_partnerType; }

    /**
     * <p>Partner type of the resource if the identifier type is
     * <code>PartnerAccountId</code> </p>
     */
    inline bool PartnerTypeHasBeenSet() const { return m_partnerTypeHasBeenSet; }

    /**
     * <p>Partner type of the resource if the identifier type is
     * <code>PartnerAccountId</code> </p>
     */
    inline void SetPartnerType(const EventNotificationPartnerType& value) { m_partnerTypeHasBeenSet = true; m_partnerType = value; }

    /**
     * <p>Partner type of the resource if the identifier type is
     * <code>PartnerAccountId</code> </p>
     */
    inline void SetPartnerType(EventNotificationPartnerType&& value) { m_partnerTypeHasBeenSet = true; m_partnerType = std::move(value); }

    /**
     * <p>Partner type of the resource if the identifier type is
     * <code>PartnerAccountId</code> </p>
     */
    inline UpdateResourceEventConfigurationRequest& WithPartnerType(const EventNotificationPartnerType& value) { SetPartnerType(value); return *this;}

    /**
     * <p>Partner type of the resource if the identifier type is
     * <code>PartnerAccountId</code> </p>
     */
    inline UpdateResourceEventConfigurationRequest& WithPartnerType(EventNotificationPartnerType&& value) { SetPartnerType(std::move(value)); return *this;}


    /**
     * <p>Event configuration for the device registration state event.</p>
     */
    inline const DeviceRegistrationStateEventConfiguration& GetDeviceRegistrationState() const{ return m_deviceRegistrationState; }

    /**
     * <p>Event configuration for the device registration state event.</p>
     */
    inline bool DeviceRegistrationStateHasBeenSet() const { return m_deviceRegistrationStateHasBeenSet; }

    /**
     * <p>Event configuration for the device registration state event.</p>
     */
    inline void SetDeviceRegistrationState(const DeviceRegistrationStateEventConfiguration& value) { m_deviceRegistrationStateHasBeenSet = true; m_deviceRegistrationState = value; }

    /**
     * <p>Event configuration for the device registration state event.</p>
     */
    inline void SetDeviceRegistrationState(DeviceRegistrationStateEventConfiguration&& value) { m_deviceRegistrationStateHasBeenSet = true; m_deviceRegistrationState = std::move(value); }

    /**
     * <p>Event configuration for the device registration state event.</p>
     */
    inline UpdateResourceEventConfigurationRequest& WithDeviceRegistrationState(const DeviceRegistrationStateEventConfiguration& value) { SetDeviceRegistrationState(value); return *this;}

    /**
     * <p>Event configuration for the device registration state event.</p>
     */
    inline UpdateResourceEventConfigurationRequest& WithDeviceRegistrationState(DeviceRegistrationStateEventConfiguration&& value) { SetDeviceRegistrationState(std::move(value)); return *this;}


    /**
     * <p>Event configuration for the proximity event.</p>
     */
    inline const ProximityEventConfiguration& GetProximity() const{ return m_proximity; }

    /**
     * <p>Event configuration for the proximity event.</p>
     */
    inline bool ProximityHasBeenSet() const { return m_proximityHasBeenSet; }

    /**
     * <p>Event configuration for the proximity event.</p>
     */
    inline void SetProximity(const ProximityEventConfiguration& value) { m_proximityHasBeenSet = true; m_proximity = value; }

    /**
     * <p>Event configuration for the proximity event.</p>
     */
    inline void SetProximity(ProximityEventConfiguration&& value) { m_proximityHasBeenSet = true; m_proximity = std::move(value); }

    /**
     * <p>Event configuration for the proximity event.</p>
     */
    inline UpdateResourceEventConfigurationRequest& WithProximity(const ProximityEventConfiguration& value) { SetProximity(value); return *this;}

    /**
     * <p>Event configuration for the proximity event.</p>
     */
    inline UpdateResourceEventConfigurationRequest& WithProximity(ProximityEventConfiguration&& value) { SetProximity(std::move(value)); return *this;}


    /**
     * <p>Event configuration for the join event.</p>
     */
    inline const JoinEventConfiguration& GetJoin() const{ return m_join; }

    /**
     * <p>Event configuration for the join event.</p>
     */
    inline bool JoinHasBeenSet() const { return m_joinHasBeenSet; }

    /**
     * <p>Event configuration for the join event.</p>
     */
    inline void SetJoin(const JoinEventConfiguration& value) { m_joinHasBeenSet = true; m_join = value; }

    /**
     * <p>Event configuration for the join event.</p>
     */
    inline void SetJoin(JoinEventConfiguration&& value) { m_joinHasBeenSet = true; m_join = std::move(value); }

    /**
     * <p>Event configuration for the join event.</p>
     */
    inline UpdateResourceEventConfigurationRequest& WithJoin(const JoinEventConfiguration& value) { SetJoin(value); return *this;}

    /**
     * <p>Event configuration for the join event.</p>
     */
    inline UpdateResourceEventConfigurationRequest& WithJoin(JoinEventConfiguration&& value) { SetJoin(std::move(value)); return *this;}


    /**
     * <p>Event configuration for the connection status event.</p>
     */
    inline const ConnectionStatusEventConfiguration& GetConnectionStatus() const{ return m_connectionStatus; }

    /**
     * <p>Event configuration for the connection status event.</p>
     */
    inline bool ConnectionStatusHasBeenSet() const { return m_connectionStatusHasBeenSet; }

    /**
     * <p>Event configuration for the connection status event.</p>
     */
    inline void SetConnectionStatus(const ConnectionStatusEventConfiguration& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = value; }

    /**
     * <p>Event configuration for the connection status event.</p>
     */
    inline void SetConnectionStatus(ConnectionStatusEventConfiguration&& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = std::move(value); }

    /**
     * <p>Event configuration for the connection status event.</p>
     */
    inline UpdateResourceEventConfigurationRequest& WithConnectionStatus(const ConnectionStatusEventConfiguration& value) { SetConnectionStatus(value); return *this;}

    /**
     * <p>Event configuration for the connection status event.</p>
     */
    inline UpdateResourceEventConfigurationRequest& WithConnectionStatus(ConnectionStatusEventConfiguration&& value) { SetConnectionStatus(std::move(value)); return *this;}


    /**
     * <p>Event configuration for the message delivery status event.</p>
     */
    inline const MessageDeliveryStatusEventConfiguration& GetMessageDeliveryStatus() const{ return m_messageDeliveryStatus; }

    /**
     * <p>Event configuration for the message delivery status event.</p>
     */
    inline bool MessageDeliveryStatusHasBeenSet() const { return m_messageDeliveryStatusHasBeenSet; }

    /**
     * <p>Event configuration for the message delivery status event.</p>
     */
    inline void SetMessageDeliveryStatus(const MessageDeliveryStatusEventConfiguration& value) { m_messageDeliveryStatusHasBeenSet = true; m_messageDeliveryStatus = value; }

    /**
     * <p>Event configuration for the message delivery status event.</p>
     */
    inline void SetMessageDeliveryStatus(MessageDeliveryStatusEventConfiguration&& value) { m_messageDeliveryStatusHasBeenSet = true; m_messageDeliveryStatus = std::move(value); }

    /**
     * <p>Event configuration for the message delivery status event.</p>
     */
    inline UpdateResourceEventConfigurationRequest& WithMessageDeliveryStatus(const MessageDeliveryStatusEventConfiguration& value) { SetMessageDeliveryStatus(value); return *this;}

    /**
     * <p>Event configuration for the message delivery status event.</p>
     */
    inline UpdateResourceEventConfigurationRequest& WithMessageDeliveryStatus(MessageDeliveryStatusEventConfiguration&& value) { SetMessageDeliveryStatus(std::move(value)); return *this;}

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    IdentifierType m_identifierType;
    bool m_identifierTypeHasBeenSet = false;

    EventNotificationPartnerType m_partnerType;
    bool m_partnerTypeHasBeenSet = false;

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
