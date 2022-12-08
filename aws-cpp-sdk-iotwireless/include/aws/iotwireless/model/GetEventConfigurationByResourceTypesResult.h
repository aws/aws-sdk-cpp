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
    AWS_IOTWIRELESS_API GetEventConfigurationByResourceTypesResult();
    AWS_IOTWIRELESS_API GetEventConfigurationByResourceTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetEventConfigurationByResourceTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Resource type event configuration for the device registration state
     * event.</p>
     */
    inline const DeviceRegistrationStateResourceTypeEventConfiguration& GetDeviceRegistrationState() const{ return m_deviceRegistrationState; }

    /**
     * <p>Resource type event configuration for the device registration state
     * event.</p>
     */
    inline void SetDeviceRegistrationState(const DeviceRegistrationStateResourceTypeEventConfiguration& value) { m_deviceRegistrationState = value; }

    /**
     * <p>Resource type event configuration for the device registration state
     * event.</p>
     */
    inline void SetDeviceRegistrationState(DeviceRegistrationStateResourceTypeEventConfiguration&& value) { m_deviceRegistrationState = std::move(value); }

    /**
     * <p>Resource type event configuration for the device registration state
     * event.</p>
     */
    inline GetEventConfigurationByResourceTypesResult& WithDeviceRegistrationState(const DeviceRegistrationStateResourceTypeEventConfiguration& value) { SetDeviceRegistrationState(value); return *this;}

    /**
     * <p>Resource type event configuration for the device registration state
     * event.</p>
     */
    inline GetEventConfigurationByResourceTypesResult& WithDeviceRegistrationState(DeviceRegistrationStateResourceTypeEventConfiguration&& value) { SetDeviceRegistrationState(std::move(value)); return *this;}


    /**
     * <p>Resource type event configuration for the proximity event.</p>
     */
    inline const ProximityResourceTypeEventConfiguration& GetProximity() const{ return m_proximity; }

    /**
     * <p>Resource type event configuration for the proximity event.</p>
     */
    inline void SetProximity(const ProximityResourceTypeEventConfiguration& value) { m_proximity = value; }

    /**
     * <p>Resource type event configuration for the proximity event.</p>
     */
    inline void SetProximity(ProximityResourceTypeEventConfiguration&& value) { m_proximity = std::move(value); }

    /**
     * <p>Resource type event configuration for the proximity event.</p>
     */
    inline GetEventConfigurationByResourceTypesResult& WithProximity(const ProximityResourceTypeEventConfiguration& value) { SetProximity(value); return *this;}

    /**
     * <p>Resource type event configuration for the proximity event.</p>
     */
    inline GetEventConfigurationByResourceTypesResult& WithProximity(ProximityResourceTypeEventConfiguration&& value) { SetProximity(std::move(value)); return *this;}


    /**
     * <p>Resource type event configuration for the join event.</p>
     */
    inline const JoinResourceTypeEventConfiguration& GetJoin() const{ return m_join; }

    /**
     * <p>Resource type event configuration for the join event.</p>
     */
    inline void SetJoin(const JoinResourceTypeEventConfiguration& value) { m_join = value; }

    /**
     * <p>Resource type event configuration for the join event.</p>
     */
    inline void SetJoin(JoinResourceTypeEventConfiguration&& value) { m_join = std::move(value); }

    /**
     * <p>Resource type event configuration for the join event.</p>
     */
    inline GetEventConfigurationByResourceTypesResult& WithJoin(const JoinResourceTypeEventConfiguration& value) { SetJoin(value); return *this;}

    /**
     * <p>Resource type event configuration for the join event.</p>
     */
    inline GetEventConfigurationByResourceTypesResult& WithJoin(JoinResourceTypeEventConfiguration&& value) { SetJoin(std::move(value)); return *this;}


    /**
     * <p>Resource type event configuration for the connection status event.</p>
     */
    inline const ConnectionStatusResourceTypeEventConfiguration& GetConnectionStatus() const{ return m_connectionStatus; }

    /**
     * <p>Resource type event configuration for the connection status event.</p>
     */
    inline void SetConnectionStatus(const ConnectionStatusResourceTypeEventConfiguration& value) { m_connectionStatus = value; }

    /**
     * <p>Resource type event configuration for the connection status event.</p>
     */
    inline void SetConnectionStatus(ConnectionStatusResourceTypeEventConfiguration&& value) { m_connectionStatus = std::move(value); }

    /**
     * <p>Resource type event configuration for the connection status event.</p>
     */
    inline GetEventConfigurationByResourceTypesResult& WithConnectionStatus(const ConnectionStatusResourceTypeEventConfiguration& value) { SetConnectionStatus(value); return *this;}

    /**
     * <p>Resource type event configuration for the connection status event.</p>
     */
    inline GetEventConfigurationByResourceTypesResult& WithConnectionStatus(ConnectionStatusResourceTypeEventConfiguration&& value) { SetConnectionStatus(std::move(value)); return *this;}


    /**
     * <p>Resource type event configuration object for the message delivery status
     * event.</p>
     */
    inline const MessageDeliveryStatusResourceTypeEventConfiguration& GetMessageDeliveryStatus() const{ return m_messageDeliveryStatus; }

    /**
     * <p>Resource type event configuration object for the message delivery status
     * event.</p>
     */
    inline void SetMessageDeliveryStatus(const MessageDeliveryStatusResourceTypeEventConfiguration& value) { m_messageDeliveryStatus = value; }

    /**
     * <p>Resource type event configuration object for the message delivery status
     * event.</p>
     */
    inline void SetMessageDeliveryStatus(MessageDeliveryStatusResourceTypeEventConfiguration&& value) { m_messageDeliveryStatus = std::move(value); }

    /**
     * <p>Resource type event configuration object for the message delivery status
     * event.</p>
     */
    inline GetEventConfigurationByResourceTypesResult& WithMessageDeliveryStatus(const MessageDeliveryStatusResourceTypeEventConfiguration& value) { SetMessageDeliveryStatus(value); return *this;}

    /**
     * <p>Resource type event configuration object for the message delivery status
     * event.</p>
     */
    inline GetEventConfigurationByResourceTypesResult& WithMessageDeliveryStatus(MessageDeliveryStatusResourceTypeEventConfiguration&& value) { SetMessageDeliveryStatus(std::move(value)); return *this;}

  private:

    DeviceRegistrationStateResourceTypeEventConfiguration m_deviceRegistrationState;

    ProximityResourceTypeEventConfiguration m_proximity;

    JoinResourceTypeEventConfiguration m_join;

    ConnectionStatusResourceTypeEventConfiguration m_connectionStatus;

    MessageDeliveryStatusResourceTypeEventConfiguration m_messageDeliveryStatus;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
