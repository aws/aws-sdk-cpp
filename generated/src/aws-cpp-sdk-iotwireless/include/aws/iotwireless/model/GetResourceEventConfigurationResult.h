﻿/**
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
    AWS_IOTWIRELESS_API GetResourceEventConfigurationResult();
    AWS_IOTWIRELESS_API GetResourceEventConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetResourceEventConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Event configuration for the device registration state event.</p>
     */
    inline const DeviceRegistrationStateEventConfiguration& GetDeviceRegistrationState() const{ return m_deviceRegistrationState; }
    inline void SetDeviceRegistrationState(const DeviceRegistrationStateEventConfiguration& value) { m_deviceRegistrationState = value; }
    inline void SetDeviceRegistrationState(DeviceRegistrationStateEventConfiguration&& value) { m_deviceRegistrationState = std::move(value); }
    inline GetResourceEventConfigurationResult& WithDeviceRegistrationState(const DeviceRegistrationStateEventConfiguration& value) { SetDeviceRegistrationState(value); return *this;}
    inline GetResourceEventConfigurationResult& WithDeviceRegistrationState(DeviceRegistrationStateEventConfiguration&& value) { SetDeviceRegistrationState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Event configuration for the proximity event.</p>
     */
    inline const ProximityEventConfiguration& GetProximity() const{ return m_proximity; }
    inline void SetProximity(const ProximityEventConfiguration& value) { m_proximity = value; }
    inline void SetProximity(ProximityEventConfiguration&& value) { m_proximity = std::move(value); }
    inline GetResourceEventConfigurationResult& WithProximity(const ProximityEventConfiguration& value) { SetProximity(value); return *this;}
    inline GetResourceEventConfigurationResult& WithProximity(ProximityEventConfiguration&& value) { SetProximity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Event configuration for the join event.</p>
     */
    inline const JoinEventConfiguration& GetJoin() const{ return m_join; }
    inline void SetJoin(const JoinEventConfiguration& value) { m_join = value; }
    inline void SetJoin(JoinEventConfiguration&& value) { m_join = std::move(value); }
    inline GetResourceEventConfigurationResult& WithJoin(const JoinEventConfiguration& value) { SetJoin(value); return *this;}
    inline GetResourceEventConfigurationResult& WithJoin(JoinEventConfiguration&& value) { SetJoin(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Event configuration for the connection status event.</p>
     */
    inline const ConnectionStatusEventConfiguration& GetConnectionStatus() const{ return m_connectionStatus; }
    inline void SetConnectionStatus(const ConnectionStatusEventConfiguration& value) { m_connectionStatus = value; }
    inline void SetConnectionStatus(ConnectionStatusEventConfiguration&& value) { m_connectionStatus = std::move(value); }
    inline GetResourceEventConfigurationResult& WithConnectionStatus(const ConnectionStatusEventConfiguration& value) { SetConnectionStatus(value); return *this;}
    inline GetResourceEventConfigurationResult& WithConnectionStatus(ConnectionStatusEventConfiguration&& value) { SetConnectionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Event configuration for the message delivery status event.</p>
     */
    inline const MessageDeliveryStatusEventConfiguration& GetMessageDeliveryStatus() const{ return m_messageDeliveryStatus; }
    inline void SetMessageDeliveryStatus(const MessageDeliveryStatusEventConfiguration& value) { m_messageDeliveryStatus = value; }
    inline void SetMessageDeliveryStatus(MessageDeliveryStatusEventConfiguration&& value) { m_messageDeliveryStatus = std::move(value); }
    inline GetResourceEventConfigurationResult& WithMessageDeliveryStatus(const MessageDeliveryStatusEventConfiguration& value) { SetMessageDeliveryStatus(value); return *this;}
    inline GetResourceEventConfigurationResult& WithMessageDeliveryStatus(MessageDeliveryStatusEventConfiguration&& value) { SetMessageDeliveryStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetResourceEventConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetResourceEventConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetResourceEventConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DeviceRegistrationStateEventConfiguration m_deviceRegistrationState;

    ProximityEventConfiguration m_proximity;

    JoinEventConfiguration m_join;

    ConnectionStatusEventConfiguration m_connectionStatus;

    MessageDeliveryStatusEventConfiguration m_messageDeliveryStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
