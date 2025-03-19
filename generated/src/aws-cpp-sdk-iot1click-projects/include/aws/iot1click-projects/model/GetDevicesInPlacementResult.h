/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-projects/IoT1ClickProjects_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace IoT1ClickProjects
{
namespace Model
{
  class GetDevicesInPlacementResult
  {
  public:
    AWS_IOT1CLICKPROJECTS_API GetDevicesInPlacementResult() = default;
    AWS_IOT1CLICKPROJECTS_API GetDevicesInPlacementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT1CLICKPROJECTS_API GetDevicesInPlacementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object containing the devices (zero or more) within the placement.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDevices() const { return m_devices; }
    template<typename DevicesT = Aws::Map<Aws::String, Aws::String>>
    void SetDevices(DevicesT&& value) { m_devicesHasBeenSet = true; m_devices = std::forward<DevicesT>(value); }
    template<typename DevicesT = Aws::Map<Aws::String, Aws::String>>
    GetDevicesInPlacementResult& WithDevices(DevicesT&& value) { SetDevices(std::forward<DevicesT>(value)); return *this;}
    template<typename DevicesKeyT = Aws::String, typename DevicesValueT = Aws::String>
    GetDevicesInPlacementResult& AddDevices(DevicesKeyT&& key, DevicesValueT&& value) {
      m_devicesHasBeenSet = true; m_devices.emplace(std::forward<DevicesKeyT>(key), std::forward<DevicesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDevicesInPlacementResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_devices;
    bool m_devicesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickProjects
} // namespace Aws
