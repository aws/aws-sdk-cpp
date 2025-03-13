/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-devices/IoT1ClickDevicesService_EXPORTS.h>
#include <aws/iot1click-devices/model/DeviceDescription.h>
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
  class DescribeDeviceResult
  {
  public:
    AWS_IOT1CLICKDEVICESSERVICE_API DescribeDeviceResult() = default;
    AWS_IOT1CLICKDEVICESSERVICE_API DescribeDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT1CLICKDEVICESSERVICE_API DescribeDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Device details.</p>
     */
    inline const DeviceDescription& GetDeviceDescription() const { return m_deviceDescription; }
    template<typename DeviceDescriptionT = DeviceDescription>
    void SetDeviceDescription(DeviceDescriptionT&& value) { m_deviceDescriptionHasBeenSet = true; m_deviceDescription = std::forward<DeviceDescriptionT>(value); }
    template<typename DeviceDescriptionT = DeviceDescription>
    DescribeDeviceResult& WithDeviceDescription(DeviceDescriptionT&& value) { SetDeviceDescription(std::forward<DeviceDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDeviceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DeviceDescription m_deviceDescription;
    bool m_deviceDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
