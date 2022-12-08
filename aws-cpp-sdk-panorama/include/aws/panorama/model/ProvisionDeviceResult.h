/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/panorama/model/DeviceStatus.h>
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
namespace Panorama
{
namespace Model
{
  class ProvisionDeviceResult
  {
  public:
    AWS_PANORAMA_API ProvisionDeviceResult();
    AWS_PANORAMA_API ProvisionDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API ProvisionDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The device's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The device's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The device's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The device's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The device's ARN.</p>
     */
    inline ProvisionDeviceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The device's ARN.</p>
     */
    inline ProvisionDeviceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The device's ARN.</p>
     */
    inline ProvisionDeviceResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The device's configuration bundle.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCertificates() const{ return m_certificates; }

    /**
     * <p>The device's configuration bundle.</p>
     */
    inline void SetCertificates(const Aws::Utils::ByteBuffer& value) { m_certificates = value; }

    /**
     * <p>The device's configuration bundle.</p>
     */
    inline void SetCertificates(Aws::Utils::ByteBuffer&& value) { m_certificates = std::move(value); }

    /**
     * <p>The device's configuration bundle.</p>
     */
    inline ProvisionDeviceResult& WithCertificates(const Aws::Utils::ByteBuffer& value) { SetCertificates(value); return *this;}

    /**
     * <p>The device's configuration bundle.</p>
     */
    inline ProvisionDeviceResult& WithCertificates(Aws::Utils::ByteBuffer&& value) { SetCertificates(std::move(value)); return *this;}


    /**
     * <p>The device's ID.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The device's ID.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceId = value; }

    /**
     * <p>The device's ID.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceId = std::move(value); }

    /**
     * <p>The device's ID.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceId.assign(value); }

    /**
     * <p>The device's ID.</p>
     */
    inline ProvisionDeviceResult& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The device's ID.</p>
     */
    inline ProvisionDeviceResult& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The device's ID.</p>
     */
    inline ProvisionDeviceResult& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * <p>The device's IoT thing name.</p>
     */
    inline const Aws::String& GetIotThingName() const{ return m_iotThingName; }

    /**
     * <p>The device's IoT thing name.</p>
     */
    inline void SetIotThingName(const Aws::String& value) { m_iotThingName = value; }

    /**
     * <p>The device's IoT thing name.</p>
     */
    inline void SetIotThingName(Aws::String&& value) { m_iotThingName = std::move(value); }

    /**
     * <p>The device's IoT thing name.</p>
     */
    inline void SetIotThingName(const char* value) { m_iotThingName.assign(value); }

    /**
     * <p>The device's IoT thing name.</p>
     */
    inline ProvisionDeviceResult& WithIotThingName(const Aws::String& value) { SetIotThingName(value); return *this;}

    /**
     * <p>The device's IoT thing name.</p>
     */
    inline ProvisionDeviceResult& WithIotThingName(Aws::String&& value) { SetIotThingName(std::move(value)); return *this;}

    /**
     * <p>The device's IoT thing name.</p>
     */
    inline ProvisionDeviceResult& WithIotThingName(const char* value) { SetIotThingName(value); return *this;}


    /**
     * <p>The device's status.</p>
     */
    inline const DeviceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The device's status.</p>
     */
    inline void SetStatus(const DeviceStatus& value) { m_status = value; }

    /**
     * <p>The device's status.</p>
     */
    inline void SetStatus(DeviceStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The device's status.</p>
     */
    inline ProvisionDeviceResult& WithStatus(const DeviceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The device's status.</p>
     */
    inline ProvisionDeviceResult& WithStatus(DeviceStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::Utils::ByteBuffer m_certificates;

    Aws::String m_deviceId;

    Aws::String m_iotThingName;

    DeviceStatus m_status;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
