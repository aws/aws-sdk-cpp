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
  class GetResourceEventConfigurationResult
  {
  public:
    AWS_IOTWIRELESS_API GetResourceEventConfigurationResult() = default;
    AWS_IOTWIRELESS_API GetResourceEventConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetResourceEventConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Event configuration for the device registration state event.</p>
     */
    inline const DeviceRegistrationStateEventConfiguration& GetDeviceRegistrationState() const { return m_deviceRegistrationState; }
    template<typename DeviceRegistrationStateT = DeviceRegistrationStateEventConfiguration>
    void SetDeviceRegistrationState(DeviceRegistrationStateT&& value) { m_deviceRegistrationStateHasBeenSet = true; m_deviceRegistrationState = std::forward<DeviceRegistrationStateT>(value); }
    template<typename DeviceRegistrationStateT = DeviceRegistrationStateEventConfiguration>
    GetResourceEventConfigurationResult& WithDeviceRegistrationState(DeviceRegistrationStateT&& value) { SetDeviceRegistrationState(std::forward<DeviceRegistrationStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Event configuration for the proximity event.</p>
     */
    inline const ProximityEventConfiguration& GetProximity() const { return m_proximity; }
    template<typename ProximityT = ProximityEventConfiguration>
    void SetProximity(ProximityT&& value) { m_proximityHasBeenSet = true; m_proximity = std::forward<ProximityT>(value); }
    template<typename ProximityT = ProximityEventConfiguration>
    GetResourceEventConfigurationResult& WithProximity(ProximityT&& value) { SetProximity(std::forward<ProximityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Event configuration for the join event.</p>
     */
    inline const JoinEventConfiguration& GetJoin() const { return m_join; }
    template<typename JoinT = JoinEventConfiguration>
    void SetJoin(JoinT&& value) { m_joinHasBeenSet = true; m_join = std::forward<JoinT>(value); }
    template<typename JoinT = JoinEventConfiguration>
    GetResourceEventConfigurationResult& WithJoin(JoinT&& value) { SetJoin(std::forward<JoinT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Event configuration for the connection status event.</p>
     */
    inline const ConnectionStatusEventConfiguration& GetConnectionStatus() const { return m_connectionStatus; }
    template<typename ConnectionStatusT = ConnectionStatusEventConfiguration>
    void SetConnectionStatus(ConnectionStatusT&& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = std::forward<ConnectionStatusT>(value); }
    template<typename ConnectionStatusT = ConnectionStatusEventConfiguration>
    GetResourceEventConfigurationResult& WithConnectionStatus(ConnectionStatusT&& value) { SetConnectionStatus(std::forward<ConnectionStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Event configuration for the message delivery status event.</p>
     */
    inline const MessageDeliveryStatusEventConfiguration& GetMessageDeliveryStatus() const { return m_messageDeliveryStatus; }
    template<typename MessageDeliveryStatusT = MessageDeliveryStatusEventConfiguration>
    void SetMessageDeliveryStatus(MessageDeliveryStatusT&& value) { m_messageDeliveryStatusHasBeenSet = true; m_messageDeliveryStatus = std::forward<MessageDeliveryStatusT>(value); }
    template<typename MessageDeliveryStatusT = MessageDeliveryStatusEventConfiguration>
    GetResourceEventConfigurationResult& WithMessageDeliveryStatus(MessageDeliveryStatusT&& value) { SetMessageDeliveryStatus(std::forward<MessageDeliveryStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResourceEventConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
