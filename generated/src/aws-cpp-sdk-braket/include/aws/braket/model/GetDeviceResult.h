/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/braket/model/DeviceStatus.h>
#include <aws/braket/model/DeviceType.h>
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
    AWS_BRAKET_API GetDeviceResult();
    AWS_BRAKET_API GetDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BRAKET_API GetDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the device.</p>
     */
    inline const Aws::String& GetDeviceArn() const{ return m_deviceArn; }
    inline void SetDeviceArn(const Aws::String& value) { m_deviceArn = value; }
    inline void SetDeviceArn(Aws::String&& value) { m_deviceArn = std::move(value); }
    inline void SetDeviceArn(const char* value) { m_deviceArn.assign(value); }
    inline GetDeviceResult& WithDeviceArn(const Aws::String& value) { SetDeviceArn(value); return *this;}
    inline GetDeviceResult& WithDeviceArn(Aws::String&& value) { SetDeviceArn(std::move(value)); return *this;}
    inline GetDeviceResult& WithDeviceArn(const char* value) { SetDeviceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the capabilities of the device.</p>
     */
    inline const Aws::String& GetDeviceCapabilities() const{ return m_deviceCapabilities; }
    inline void SetDeviceCapabilities(const Aws::String& value) { m_deviceCapabilities = value; }
    inline void SetDeviceCapabilities(Aws::String&& value) { m_deviceCapabilities = std::move(value); }
    inline void SetDeviceCapabilities(const char* value) { m_deviceCapabilities.assign(value); }
    inline GetDeviceResult& WithDeviceCapabilities(const Aws::String& value) { SetDeviceCapabilities(value); return *this;}
    inline GetDeviceResult& WithDeviceCapabilities(Aws::String&& value) { SetDeviceCapabilities(std::move(value)); return *this;}
    inline GetDeviceResult& WithDeviceCapabilities(const char* value) { SetDeviceCapabilities(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the device.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }
    inline void SetDeviceName(const Aws::String& value) { m_deviceName = value; }
    inline void SetDeviceName(Aws::String&& value) { m_deviceName = std::move(value); }
    inline void SetDeviceName(const char* value) { m_deviceName.assign(value); }
    inline GetDeviceResult& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}
    inline GetDeviceResult& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}
    inline GetDeviceResult& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of information about tasks and jobs queued on a device.</p>
     */
    inline const Aws::Vector<DeviceQueueInfo>& GetDeviceQueueInfo() const{ return m_deviceQueueInfo; }
    inline void SetDeviceQueueInfo(const Aws::Vector<DeviceQueueInfo>& value) { m_deviceQueueInfo = value; }
    inline void SetDeviceQueueInfo(Aws::Vector<DeviceQueueInfo>&& value) { m_deviceQueueInfo = std::move(value); }
    inline GetDeviceResult& WithDeviceQueueInfo(const Aws::Vector<DeviceQueueInfo>& value) { SetDeviceQueueInfo(value); return *this;}
    inline GetDeviceResult& WithDeviceQueueInfo(Aws::Vector<DeviceQueueInfo>&& value) { SetDeviceQueueInfo(std::move(value)); return *this;}
    inline GetDeviceResult& AddDeviceQueueInfo(const DeviceQueueInfo& value) { m_deviceQueueInfo.push_back(value); return *this; }
    inline GetDeviceResult& AddDeviceQueueInfo(DeviceQueueInfo&& value) { m_deviceQueueInfo.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the device.</p>
     */
    inline const DeviceStatus& GetDeviceStatus() const{ return m_deviceStatus; }
    inline void SetDeviceStatus(const DeviceStatus& value) { m_deviceStatus = value; }
    inline void SetDeviceStatus(DeviceStatus&& value) { m_deviceStatus = std::move(value); }
    inline GetDeviceResult& WithDeviceStatus(const DeviceStatus& value) { SetDeviceStatus(value); return *this;}
    inline GetDeviceResult& WithDeviceStatus(DeviceStatus&& value) { SetDeviceStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the device.</p>
     */
    inline const DeviceType& GetDeviceType() const{ return m_deviceType; }
    inline void SetDeviceType(const DeviceType& value) { m_deviceType = value; }
    inline void SetDeviceType(DeviceType&& value) { m_deviceType = std::move(value); }
    inline GetDeviceResult& WithDeviceType(const DeviceType& value) { SetDeviceType(value); return *this;}
    inline GetDeviceResult& WithDeviceType(DeviceType&& value) { SetDeviceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the partner company for the device.</p>
     */
    inline const Aws::String& GetProviderName() const{ return m_providerName; }
    inline void SetProviderName(const Aws::String& value) { m_providerName = value; }
    inline void SetProviderName(Aws::String&& value) { m_providerName = std::move(value); }
    inline void SetProviderName(const char* value) { m_providerName.assign(value); }
    inline GetDeviceResult& WithProviderName(const Aws::String& value) { SetProviderName(value); return *this;}
    inline GetDeviceResult& WithProviderName(Aws::String&& value) { SetProviderName(std::move(value)); return *this;}
    inline GetDeviceResult& WithProviderName(const char* value) { SetProviderName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDeviceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDeviceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDeviceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_deviceArn;

    Aws::String m_deviceCapabilities;

    Aws::String m_deviceName;

    Aws::Vector<DeviceQueueInfo> m_deviceQueueInfo;

    DeviceStatus m_deviceStatus;

    DeviceType m_deviceType;

    Aws::String m_providerName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
