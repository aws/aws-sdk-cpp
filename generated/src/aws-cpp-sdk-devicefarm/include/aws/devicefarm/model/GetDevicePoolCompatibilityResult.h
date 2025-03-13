/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/DevicePoolCompatibilityResult.h>
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
  /**
   * <p>Represents the result of describe device pool compatibility
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDevicePoolCompatibilityResult">AWS
   * API Reference</a></p>
   */
  class GetDevicePoolCompatibilityResult
  {
  public:
    AWS_DEVICEFARM_API GetDevicePoolCompatibilityResult() = default;
    AWS_DEVICEFARM_API GetDevicePoolCompatibilityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API GetDevicePoolCompatibilityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about compatible devices.</p>
     */
    inline const Aws::Vector<DevicePoolCompatibilityResult>& GetCompatibleDevices() const { return m_compatibleDevices; }
    template<typename CompatibleDevicesT = Aws::Vector<DevicePoolCompatibilityResult>>
    void SetCompatibleDevices(CompatibleDevicesT&& value) { m_compatibleDevicesHasBeenSet = true; m_compatibleDevices = std::forward<CompatibleDevicesT>(value); }
    template<typename CompatibleDevicesT = Aws::Vector<DevicePoolCompatibilityResult>>
    GetDevicePoolCompatibilityResult& WithCompatibleDevices(CompatibleDevicesT&& value) { SetCompatibleDevices(std::forward<CompatibleDevicesT>(value)); return *this;}
    template<typename CompatibleDevicesT = DevicePoolCompatibilityResult>
    GetDevicePoolCompatibilityResult& AddCompatibleDevices(CompatibleDevicesT&& value) { m_compatibleDevicesHasBeenSet = true; m_compatibleDevices.emplace_back(std::forward<CompatibleDevicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about incompatible devices.</p>
     */
    inline const Aws::Vector<DevicePoolCompatibilityResult>& GetIncompatibleDevices() const { return m_incompatibleDevices; }
    template<typename IncompatibleDevicesT = Aws::Vector<DevicePoolCompatibilityResult>>
    void SetIncompatibleDevices(IncompatibleDevicesT&& value) { m_incompatibleDevicesHasBeenSet = true; m_incompatibleDevices = std::forward<IncompatibleDevicesT>(value); }
    template<typename IncompatibleDevicesT = Aws::Vector<DevicePoolCompatibilityResult>>
    GetDevicePoolCompatibilityResult& WithIncompatibleDevices(IncompatibleDevicesT&& value) { SetIncompatibleDevices(std::forward<IncompatibleDevicesT>(value)); return *this;}
    template<typename IncompatibleDevicesT = DevicePoolCompatibilityResult>
    GetDevicePoolCompatibilityResult& AddIncompatibleDevices(IncompatibleDevicesT&& value) { m_incompatibleDevicesHasBeenSet = true; m_incompatibleDevices.emplace_back(std::forward<IncompatibleDevicesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDevicePoolCompatibilityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DevicePoolCompatibilityResult> m_compatibleDevices;
    bool m_compatibleDevicesHasBeenSet = false;

    Aws::Vector<DevicePoolCompatibilityResult> m_incompatibleDevices;
    bool m_incompatibleDevicesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
