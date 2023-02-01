/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-devices/IoT1ClickDevicesService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot1click-devices/model/DeviceMethod.h>
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
namespace IoT1ClickDevicesService
{
namespace Model
{
  class GetDeviceMethodsResult
  {
  public:
    AWS_IOT1CLICKDEVICESSERVICE_API GetDeviceMethodsResult();
    AWS_IOT1CLICKDEVICESSERVICE_API GetDeviceMethodsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT1CLICKDEVICESSERVICE_API GetDeviceMethodsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of available device APIs.</p>
     */
    inline const Aws::Vector<DeviceMethod>& GetDeviceMethods() const{ return m_deviceMethods; }

    /**
     * <p>List of available device APIs.</p>
     */
    inline void SetDeviceMethods(const Aws::Vector<DeviceMethod>& value) { m_deviceMethods = value; }

    /**
     * <p>List of available device APIs.</p>
     */
    inline void SetDeviceMethods(Aws::Vector<DeviceMethod>&& value) { m_deviceMethods = std::move(value); }

    /**
     * <p>List of available device APIs.</p>
     */
    inline GetDeviceMethodsResult& WithDeviceMethods(const Aws::Vector<DeviceMethod>& value) { SetDeviceMethods(value); return *this;}

    /**
     * <p>List of available device APIs.</p>
     */
    inline GetDeviceMethodsResult& WithDeviceMethods(Aws::Vector<DeviceMethod>&& value) { SetDeviceMethods(std::move(value)); return *this;}

    /**
     * <p>List of available device APIs.</p>
     */
    inline GetDeviceMethodsResult& AddDeviceMethods(const DeviceMethod& value) { m_deviceMethods.push_back(value); return *this; }

    /**
     * <p>List of available device APIs.</p>
     */
    inline GetDeviceMethodsResult& AddDeviceMethods(DeviceMethod&& value) { m_deviceMethods.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DeviceMethod> m_deviceMethods;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
