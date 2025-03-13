/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/DeviceInstance.h>
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
namespace DeviceFarm
{
namespace Model
{
  class GetDeviceInstanceResult
  {
  public:
    AWS_DEVICEFARM_API GetDeviceInstanceResult() = default;
    AWS_DEVICEFARM_API GetDeviceInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API GetDeviceInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains information about your device instance.</p>
     */
    inline const DeviceInstance& GetDeviceInstance() const { return m_deviceInstance; }
    template<typename DeviceInstanceT = DeviceInstance>
    void SetDeviceInstance(DeviceInstanceT&& value) { m_deviceInstanceHasBeenSet = true; m_deviceInstance = std::forward<DeviceInstanceT>(value); }
    template<typename DeviceInstanceT = DeviceInstance>
    GetDeviceInstanceResult& WithDeviceInstance(DeviceInstanceT&& value) { SetDeviceInstance(std::forward<DeviceInstanceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDeviceInstanceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DeviceInstance m_deviceInstance;
    bool m_deviceInstanceHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
