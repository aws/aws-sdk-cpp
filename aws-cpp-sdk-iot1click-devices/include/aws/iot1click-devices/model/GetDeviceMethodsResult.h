/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOT1CLICKDEVICESSERVICE_API GetDeviceMethodsResult
  {
  public:
    GetDeviceMethodsResult();
    GetDeviceMethodsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDeviceMethodsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
