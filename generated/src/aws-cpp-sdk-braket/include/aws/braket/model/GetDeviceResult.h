/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/braket/model/DeviceStatus.h>
#include <aws/braket/model/DeviceType.h>
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


    /**
     * <p>The ARN of the device.</p>
     */
    inline const Aws::String& GetDeviceArn() const{ return m_deviceArn; }

    /**
     * <p>The ARN of the device.</p>
     */
    inline void SetDeviceArn(const Aws::String& value) { m_deviceArn = value; }

    /**
     * <p>The ARN of the device.</p>
     */
    inline void SetDeviceArn(Aws::String&& value) { m_deviceArn = std::move(value); }

    /**
     * <p>The ARN of the device.</p>
     */
    inline void SetDeviceArn(const char* value) { m_deviceArn.assign(value); }

    /**
     * <p>The ARN of the device.</p>
     */
    inline GetDeviceResult& WithDeviceArn(const Aws::String& value) { SetDeviceArn(value); return *this;}

    /**
     * <p>The ARN of the device.</p>
     */
    inline GetDeviceResult& WithDeviceArn(Aws::String&& value) { SetDeviceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the device.</p>
     */
    inline GetDeviceResult& WithDeviceArn(const char* value) { SetDeviceArn(value); return *this;}


    /**
     * <p>Details about the capabilities of the device.</p>
     */
    inline const Aws::String& GetDeviceCapabilities() const{ return m_deviceCapabilities; }

    /**
     * <p>Details about the capabilities of the device.</p>
     */
    inline void SetDeviceCapabilities(const Aws::String& value) { m_deviceCapabilities = value; }

    /**
     * <p>Details about the capabilities of the device.</p>
     */
    inline void SetDeviceCapabilities(Aws::String&& value) { m_deviceCapabilities = std::move(value); }

    /**
     * <p>Details about the capabilities of the device.</p>
     */
    inline void SetDeviceCapabilities(const char* value) { m_deviceCapabilities.assign(value); }

    /**
     * <p>Details about the capabilities of the device.</p>
     */
    inline GetDeviceResult& WithDeviceCapabilities(const Aws::String& value) { SetDeviceCapabilities(value); return *this;}

    /**
     * <p>Details about the capabilities of the device.</p>
     */
    inline GetDeviceResult& WithDeviceCapabilities(Aws::String&& value) { SetDeviceCapabilities(std::move(value)); return *this;}

    /**
     * <p>Details about the capabilities of the device.</p>
     */
    inline GetDeviceResult& WithDeviceCapabilities(const char* value) { SetDeviceCapabilities(value); return *this;}


    /**
     * <p>The name of the device.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p>The name of the device.</p>
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceName = value; }

    /**
     * <p>The name of the device.</p>
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceName = std::move(value); }

    /**
     * <p>The name of the device.</p>
     */
    inline void SetDeviceName(const char* value) { m_deviceName.assign(value); }

    /**
     * <p>The name of the device.</p>
     */
    inline GetDeviceResult& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The name of the device.</p>
     */
    inline GetDeviceResult& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>The name of the device.</p>
     */
    inline GetDeviceResult& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


    /**
     * <p>The status of the device.</p>
     */
    inline const DeviceStatus& GetDeviceStatus() const{ return m_deviceStatus; }

    /**
     * <p>The status of the device.</p>
     */
    inline void SetDeviceStatus(const DeviceStatus& value) { m_deviceStatus = value; }

    /**
     * <p>The status of the device.</p>
     */
    inline void SetDeviceStatus(DeviceStatus&& value) { m_deviceStatus = std::move(value); }

    /**
     * <p>The status of the device.</p>
     */
    inline GetDeviceResult& WithDeviceStatus(const DeviceStatus& value) { SetDeviceStatus(value); return *this;}

    /**
     * <p>The status of the device.</p>
     */
    inline GetDeviceResult& WithDeviceStatus(DeviceStatus&& value) { SetDeviceStatus(std::move(value)); return *this;}


    /**
     * <p>The type of the device.</p>
     */
    inline const DeviceType& GetDeviceType() const{ return m_deviceType; }

    /**
     * <p>The type of the device.</p>
     */
    inline void SetDeviceType(const DeviceType& value) { m_deviceType = value; }

    /**
     * <p>The type of the device.</p>
     */
    inline void SetDeviceType(DeviceType&& value) { m_deviceType = std::move(value); }

    /**
     * <p>The type of the device.</p>
     */
    inline GetDeviceResult& WithDeviceType(const DeviceType& value) { SetDeviceType(value); return *this;}

    /**
     * <p>The type of the device.</p>
     */
    inline GetDeviceResult& WithDeviceType(DeviceType&& value) { SetDeviceType(std::move(value)); return *this;}


    /**
     * <p>The name of the partner company for the device.</p>
     */
    inline const Aws::String& GetProviderName() const{ return m_providerName; }

    /**
     * <p>The name of the partner company for the device.</p>
     */
    inline void SetProviderName(const Aws::String& value) { m_providerName = value; }

    /**
     * <p>The name of the partner company for the device.</p>
     */
    inline void SetProviderName(Aws::String&& value) { m_providerName = std::move(value); }

    /**
     * <p>The name of the partner company for the device.</p>
     */
    inline void SetProviderName(const char* value) { m_providerName.assign(value); }

    /**
     * <p>The name of the partner company for the device.</p>
     */
    inline GetDeviceResult& WithProviderName(const Aws::String& value) { SetProviderName(value); return *this;}

    /**
     * <p>The name of the partner company for the device.</p>
     */
    inline GetDeviceResult& WithProviderName(Aws::String&& value) { SetProviderName(std::move(value)); return *this;}

    /**
     * <p>The name of the partner company for the device.</p>
     */
    inline GetDeviceResult& WithProviderName(const char* value) { SetProviderName(value); return *this;}

  private:

    Aws::String m_deviceArn;

    Aws::String m_deviceCapabilities;

    Aws::String m_deviceName;

    DeviceStatus m_deviceStatus;

    DeviceType m_deviceType;

    Aws::String m_providerName;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
