/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-devices/IoT1ClickDevicesService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_IOT1CLICKDEVICESSERVICE_API GetDeviceMethodsResult() = default;
    AWS_IOT1CLICKDEVICESSERVICE_API GetDeviceMethodsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT1CLICKDEVICESSERVICE_API GetDeviceMethodsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of available device APIs.</p>
     */
    inline const Aws::Vector<DeviceMethod>& GetDeviceMethods() const { return m_deviceMethods; }
    template<typename DeviceMethodsT = Aws::Vector<DeviceMethod>>
    void SetDeviceMethods(DeviceMethodsT&& value) { m_deviceMethodsHasBeenSet = true; m_deviceMethods = std::forward<DeviceMethodsT>(value); }
    template<typename DeviceMethodsT = Aws::Vector<DeviceMethod>>
    GetDeviceMethodsResult& WithDeviceMethods(DeviceMethodsT&& value) { SetDeviceMethods(std::forward<DeviceMethodsT>(value)); return *this;}
    template<typename DeviceMethodsT = DeviceMethod>
    GetDeviceMethodsResult& AddDeviceMethods(DeviceMethodsT&& value) { m_deviceMethodsHasBeenSet = true; m_deviceMethods.emplace_back(std::forward<DeviceMethodsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDeviceMethodsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DeviceMethod> m_deviceMethods;
    bool m_deviceMethodsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
