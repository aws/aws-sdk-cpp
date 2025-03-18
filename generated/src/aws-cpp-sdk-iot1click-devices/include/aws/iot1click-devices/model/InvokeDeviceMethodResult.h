/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-devices/IoT1ClickDevicesService_EXPORTS.h>
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
namespace IoT1ClickDevicesService
{
namespace Model
{
  class InvokeDeviceMethodResult
  {
  public:
    AWS_IOT1CLICKDEVICESSERVICE_API InvokeDeviceMethodResult() = default;
    AWS_IOT1CLICKDEVICESSERVICE_API InvokeDeviceMethodResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT1CLICKDEVICESSERVICE_API InvokeDeviceMethodResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A JSON encoded string containing the device method response.</p>
     */
    inline const Aws::String& GetDeviceMethodResponse() const { return m_deviceMethodResponse; }
    template<typename DeviceMethodResponseT = Aws::String>
    void SetDeviceMethodResponse(DeviceMethodResponseT&& value) { m_deviceMethodResponseHasBeenSet = true; m_deviceMethodResponse = std::forward<DeviceMethodResponseT>(value); }
    template<typename DeviceMethodResponseT = Aws::String>
    InvokeDeviceMethodResult& WithDeviceMethodResponse(DeviceMethodResponseT&& value) { SetDeviceMethodResponse(std::forward<DeviceMethodResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    InvokeDeviceMethodResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceMethodResponse;
    bool m_deviceMethodResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
