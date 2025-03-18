/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/DeviceRegistrationStateResourceTypeEventConfiguration.h>
#include <aws/iotwireless/model/ProximityResourceTypeEventConfiguration.h>
#include <aws/iotwireless/model/JoinResourceTypeEventConfiguration.h>
#include <aws/iotwireless/model/ConnectionStatusResourceTypeEventConfiguration.h>
#include <aws/iotwireless/model/MessageDeliveryStatusResourceTypeEventConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTWireless
{
namespace Model
{
  class GetEventConfigurationByResourceTypesResult
  {
  public:
    AWS_IOTWIRELESS_API GetEventConfigurationByResourceTypesResult() = default;
    AWS_IOTWIRELESS_API GetEventConfigurationByResourceTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetEventConfigurationByResourceTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Resource type event configuration for the device registration state
     * event.</p>
     */
    inline const DeviceRegistrationStateResourceTypeEventConfiguration& GetDeviceRegistrationState() const { return m_deviceRegistrationState; }
    template<typename DeviceRegistrationStateT = DeviceRegistrationStateResourceTypeEventConfiguration>
    void SetDeviceRegistrationState(DeviceRegistrationStateT&& value) { m_deviceRegistrationStateHasBeenSet = true; m_deviceRegistrationState = std::forward<DeviceRegistrationStateT>(value); }
    template<typename DeviceRegistrationStateT = DeviceRegistrationStateResourceTypeEventConfiguration>
    GetEventConfigurationByResourceTypesResult& WithDeviceRegistrationState(DeviceRegistrationStateT&& value) { SetDeviceRegistrationState(std::forward<DeviceRegistrationStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Resource type event configuration for the proximity event.</p>
     */
    inline const ProximityResourceTypeEventConfiguration& GetProximity() const { return m_proximity; }
    template<typename ProximityT = ProximityResourceTypeEventConfiguration>
    void SetProximity(ProximityT&& value) { m_proximityHasBeenSet = true; m_proximity = std::forward<ProximityT>(value); }
    template<typename ProximityT = ProximityResourceTypeEventConfiguration>
    GetEventConfigurationByResourceTypesResult& WithProximity(ProximityT&& value) { SetProximity(std::forward<ProximityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Resource type event configuration for the join event.</p>
     */
    inline const JoinResourceTypeEventConfiguration& GetJoin() const { return m_join; }
    template<typename JoinT = JoinResourceTypeEventConfiguration>
    void SetJoin(JoinT&& value) { m_joinHasBeenSet = true; m_join = std::forward<JoinT>(value); }
    template<typename JoinT = JoinResourceTypeEventConfiguration>
    GetEventConfigurationByResourceTypesResult& WithJoin(JoinT&& value) { SetJoin(std::forward<JoinT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Resource type event configuration for the connection status event.</p>
     */
    inline const ConnectionStatusResourceTypeEventConfiguration& GetConnectionStatus() const { return m_connectionStatus; }
    template<typename ConnectionStatusT = ConnectionStatusResourceTypeEventConfiguration>
    void SetConnectionStatus(ConnectionStatusT&& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = std::forward<ConnectionStatusT>(value); }
    template<typename ConnectionStatusT = ConnectionStatusResourceTypeEventConfiguration>
    GetEventConfigurationByResourceTypesResult& WithConnectionStatus(ConnectionStatusT&& value) { SetConnectionStatus(std::forward<ConnectionStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Resource type event configuration object for the message delivery status
     * event.</p>
     */
    inline const MessageDeliveryStatusResourceTypeEventConfiguration& GetMessageDeliveryStatus() const { return m_messageDeliveryStatus; }
    template<typename MessageDeliveryStatusT = MessageDeliveryStatusResourceTypeEventConfiguration>
    void SetMessageDeliveryStatus(MessageDeliveryStatusT&& value) { m_messageDeliveryStatusHasBeenSet = true; m_messageDeliveryStatus = std::forward<MessageDeliveryStatusT>(value); }
    template<typename MessageDeliveryStatusT = MessageDeliveryStatusResourceTypeEventConfiguration>
    GetEventConfigurationByResourceTypesResult& WithMessageDeliveryStatus(MessageDeliveryStatusT&& value) { SetMessageDeliveryStatus(std::forward<MessageDeliveryStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEventConfigurationByResourceTypesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
