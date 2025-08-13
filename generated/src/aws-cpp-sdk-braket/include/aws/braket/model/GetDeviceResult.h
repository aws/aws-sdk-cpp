/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/braket/model/DeviceType.h>
#include <aws/braket/model/DeviceStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/braket/model/DeviceQueueInfo.h>
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
namespace Braket
{
namespace Model
{
  class GetDeviceResult
  {
  public:
    AWS_BRAKET_API GetDeviceResult() = default;
    AWS_BRAKET_API GetDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BRAKET_API GetDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the device.</p>
     */
    inline const Aws::String& GetDeviceArn() const { return m_deviceArn; }
    template<typename DeviceArnT = Aws::String>
    void SetDeviceArn(DeviceArnT&& value) { m_deviceArnHasBeenSet = true; m_deviceArn = std::forward<DeviceArnT>(value); }
    template<typename DeviceArnT = Aws::String>
    GetDeviceResult& WithDeviceArn(DeviceArnT&& value) { SetDeviceArn(std::forward<DeviceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the device.</p>
     */
    inline const Aws::String& GetDeviceName() const { return m_deviceName; }
    template<typename DeviceNameT = Aws::String>
    void SetDeviceName(DeviceNameT&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::forward<DeviceNameT>(value); }
    template<typename DeviceNameT = Aws::String>
    GetDeviceResult& WithDeviceName(DeviceNameT&& value) { SetDeviceName(std::forward<DeviceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the partner company for the device.</p>
     */
    inline const Aws::String& GetProviderName() const { return m_providerName; }
    template<typename ProviderNameT = Aws::String>
    void SetProviderName(ProviderNameT&& value) { m_providerNameHasBeenSet = true; m_providerName = std::forward<ProviderNameT>(value); }
    template<typename ProviderNameT = Aws::String>
    GetDeviceResult& WithProviderName(ProviderNameT&& value) { SetProviderName(std::forward<ProviderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the device.</p>
     */
    inline DeviceType GetDeviceType() const { return m_deviceType; }
    inline void SetDeviceType(DeviceType value) { m_deviceTypeHasBeenSet = true; m_deviceType = value; }
    inline GetDeviceResult& WithDeviceType(DeviceType value) { SetDeviceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the device.</p>
     */
    inline DeviceStatus GetDeviceStatus() const { return m_deviceStatus; }
    inline void SetDeviceStatus(DeviceStatus value) { m_deviceStatusHasBeenSet = true; m_deviceStatus = value; }
    inline GetDeviceResult& WithDeviceStatus(DeviceStatus value) { SetDeviceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the capabilities of the device.</p>
     */
    inline const Aws::String& GetDeviceCapabilities() const { return m_deviceCapabilities; }
    template<typename DeviceCapabilitiesT = Aws::String>
    void SetDeviceCapabilities(DeviceCapabilitiesT&& value) { m_deviceCapabilitiesHasBeenSet = true; m_deviceCapabilities = std::forward<DeviceCapabilitiesT>(value); }
    template<typename DeviceCapabilitiesT = Aws::String>
    GetDeviceResult& WithDeviceCapabilities(DeviceCapabilitiesT&& value) { SetDeviceCapabilities(std::forward<DeviceCapabilitiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of quantum tasks and hybrid jobs currently queued on the
     * device.</p>
     */
    inline const Aws::Vector<DeviceQueueInfo>& GetDeviceQueueInfo() const { return m_deviceQueueInfo; }
    template<typename DeviceQueueInfoT = Aws::Vector<DeviceQueueInfo>>
    void SetDeviceQueueInfo(DeviceQueueInfoT&& value) { m_deviceQueueInfoHasBeenSet = true; m_deviceQueueInfo = std::forward<DeviceQueueInfoT>(value); }
    template<typename DeviceQueueInfoT = Aws::Vector<DeviceQueueInfo>>
    GetDeviceResult& WithDeviceQueueInfo(DeviceQueueInfoT&& value) { SetDeviceQueueInfo(std::forward<DeviceQueueInfoT>(value)); return *this;}
    template<typename DeviceQueueInfoT = DeviceQueueInfo>
    GetDeviceResult& AddDeviceQueueInfo(DeviceQueueInfoT&& value) { m_deviceQueueInfoHasBeenSet = true; m_deviceQueueInfo.emplace_back(std::forward<DeviceQueueInfoT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDeviceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceArn;
    bool m_deviceArnHasBeenSet = false;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    Aws::String m_providerName;
    bool m_providerNameHasBeenSet = false;

    DeviceType m_deviceType{DeviceType::NOT_SET};
    bool m_deviceTypeHasBeenSet = false;

    DeviceStatus m_deviceStatus{DeviceStatus::NOT_SET};
    bool m_deviceStatusHasBeenSet = false;

    Aws::String m_deviceCapabilities;
    bool m_deviceCapabilitiesHasBeenSet = false;

    Aws::Vector<DeviceQueueInfo> m_deviceQueueInfo;
    bool m_deviceQueueInfoHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
