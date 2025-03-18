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
    AWS_IOTWIRELESS_API UpdateResourceEventConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResourceEventConfiguration"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;

    AWS_IOTWIRELESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Resource identifier to opt in for event messaging.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    UpdateResourceEventConfigurationRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier type of the particular resource identifier for event
     * configuration.</p>
     */
    inline IdentifierType GetIdentifierType() const { return m_identifierType; }
    inline bool IdentifierTypeHasBeenSet() const { return m_identifierTypeHasBeenSet; }
    inline void SetIdentifierType(IdentifierType value) { m_identifierTypeHasBeenSet = true; m_identifierType = value; }
    inline UpdateResourceEventConfigurationRequest& WithIdentifierType(IdentifierType value) { SetIdentifierType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Partner type of the resource if the identifier type is
     * <code>PartnerAccountId</code> </p>
     */
    inline EventNotificationPartnerType GetPartnerType() const { return m_partnerType; }
    inline bool PartnerTypeHasBeenSet() const { return m_partnerTypeHasBeenSet; }
    inline void SetPartnerType(EventNotificationPartnerType value) { m_partnerTypeHasBeenSet = true; m_partnerType = value; }
    inline UpdateResourceEventConfigurationRequest& WithPartnerType(EventNotificationPartnerType value) { SetPartnerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Event configuration for the device registration state event.</p>
     */
    inline const DeviceRegistrationStateEventConfiguration& GetDeviceRegistrationState() const { return m_deviceRegistrationState; }
    inline bool DeviceRegistrationStateHasBeenSet() const { return m_deviceRegistrationStateHasBeenSet; }
    template<typename DeviceRegistrationStateT = DeviceRegistrationStateEventConfiguration>
    void SetDeviceRegistrationState(DeviceRegistrationStateT&& value) { m_deviceRegistrationStateHasBeenSet = true; m_deviceRegistrationState = std::forward<DeviceRegistrationStateT>(value); }
    template<typename DeviceRegistrationStateT = DeviceRegistrationStateEventConfiguration>
    UpdateResourceEventConfigurationRequest& WithDeviceRegistrationState(DeviceRegistrationStateT&& value) { SetDeviceRegistrationState(std::forward<DeviceRegistrationStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Event configuration for the proximity event.</p>
     */
    inline const ProximityEventConfiguration& GetProximity() const { return m_proximity; }
    inline bool ProximityHasBeenSet() const { return m_proximityHasBeenSet; }
    template<typename ProximityT = ProximityEventConfiguration>
    void SetProximity(ProximityT&& value) { m_proximityHasBeenSet = true; m_proximity = std::forward<ProximityT>(value); }
    template<typename ProximityT = ProximityEventConfiguration>
    UpdateResourceEventConfigurationRequest& WithProximity(ProximityT&& value) { SetProximity(std::forward<ProximityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Event configuration for the join event.</p>
     */
    inline const JoinEventConfiguration& GetJoin() const { return m_join; }
    inline bool JoinHasBeenSet() const { return m_joinHasBeenSet; }
    template<typename JoinT = JoinEventConfiguration>
    void SetJoin(JoinT&& value) { m_joinHasBeenSet = true; m_join = std::forward<JoinT>(value); }
    template<typename JoinT = JoinEventConfiguration>
    UpdateResourceEventConfigurationRequest& WithJoin(JoinT&& value) { SetJoin(std::forward<JoinT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Event configuration for the connection status event.</p>
     */
    inline const ConnectionStatusEventConfiguration& GetConnectionStatus() const { return m_connectionStatus; }
    inline bool ConnectionStatusHasBeenSet() const { return m_connectionStatusHasBeenSet; }
    template<typename ConnectionStatusT = ConnectionStatusEventConfiguration>
    void SetConnectionStatus(ConnectionStatusT&& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = std::forward<ConnectionStatusT>(value); }
    template<typename ConnectionStatusT = ConnectionStatusEventConfiguration>
    UpdateResourceEventConfigurationRequest& WithConnectionStatus(ConnectionStatusT&& value) { SetConnectionStatus(std::forward<ConnectionStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Event configuration for the message delivery status event.</p>
     */
    inline const MessageDeliveryStatusEventConfiguration& GetMessageDeliveryStatus() const { return m_messageDeliveryStatus; }
    inline bool MessageDeliveryStatusHasBeenSet() const { return m_messageDeliveryStatusHasBeenSet; }
    template<typename MessageDeliveryStatusT = MessageDeliveryStatusEventConfiguration>
    void SetMessageDeliveryStatus(MessageDeliveryStatusT&& value) { m_messageDeliveryStatusHasBeenSet = true; m_messageDeliveryStatus = std::forward<MessageDeliveryStatusT>(value); }
    template<typename MessageDeliveryStatusT = MessageDeliveryStatusEventConfiguration>
    UpdateResourceEventConfigurationRequest& WithMessageDeliveryStatus(MessageDeliveryStatusT&& value) { SetMessageDeliveryStatus(std::forward<MessageDeliveryStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    IdentifierType m_identifierType{IdentifierType::NOT_SET};
    bool m_identifierTypeHasBeenSet = false;

    EventNotificationPartnerType m_partnerType{EventNotificationPartnerType::NOT_SET};
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
