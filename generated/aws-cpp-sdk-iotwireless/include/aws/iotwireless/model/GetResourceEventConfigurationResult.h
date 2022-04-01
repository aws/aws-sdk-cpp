﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/DeviceRegistrationStateEventConfiguration.h>
#include <aws/iotwireless/model/ProximityEventConfiguration.h>
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
  class AWS_IOTWIRELESS_API GetResourceEventConfigurationResult
  {
  public:
    GetResourceEventConfigurationResult();
    GetResourceEventConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetResourceEventConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Event configuration for the device registration state event</p>
     */
    inline const DeviceRegistrationStateEventConfiguration& GetDeviceRegistrationState() const{ return m_deviceRegistrationState; }

    /**
     * <p>Event configuration for the device registration state event</p>
     */
    inline void SetDeviceRegistrationState(const DeviceRegistrationStateEventConfiguration& value) { m_deviceRegistrationState = value; }

    /**
     * <p>Event configuration for the device registration state event</p>
     */
    inline void SetDeviceRegistrationState(DeviceRegistrationStateEventConfiguration&& value) { m_deviceRegistrationState = std::move(value); }

    /**
     * <p>Event configuration for the device registration state event</p>
     */
    inline GetResourceEventConfigurationResult& WithDeviceRegistrationState(const DeviceRegistrationStateEventConfiguration& value) { SetDeviceRegistrationState(value); return *this;}

    /**
     * <p>Event configuration for the device registration state event</p>
     */
    inline GetResourceEventConfigurationResult& WithDeviceRegistrationState(DeviceRegistrationStateEventConfiguration&& value) { SetDeviceRegistrationState(std::move(value)); return *this;}


    /**
     * <p>Event configuration for the Proximity event</p>
     */
    inline const ProximityEventConfiguration& GetProximity() const{ return m_proximity; }

    /**
     * <p>Event configuration for the Proximity event</p>
     */
    inline void SetProximity(const ProximityEventConfiguration& value) { m_proximity = value; }

    /**
     * <p>Event configuration for the Proximity event</p>
     */
    inline void SetProximity(ProximityEventConfiguration&& value) { m_proximity = std::move(value); }

    /**
     * <p>Event configuration for the Proximity event</p>
     */
    inline GetResourceEventConfigurationResult& WithProximity(const ProximityEventConfiguration& value) { SetProximity(value); return *this;}

    /**
     * <p>Event configuration for the Proximity event</p>
     */
    inline GetResourceEventConfigurationResult& WithProximity(ProximityEventConfiguration&& value) { SetProximity(std::move(value)); return *this;}

  private:

    DeviceRegistrationStateEventConfiguration m_deviceRegistrationState;

    ProximityEventConfiguration m_proximity;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
