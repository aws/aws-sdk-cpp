/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/LoRaWANDeviceProfile.h>
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
namespace IoTWireless
{
namespace Model
{
  class GetDeviceProfileResult
  {
  public:
    AWS_IOTWIRELESS_API GetDeviceProfileResult();
    AWS_IOTWIRELESS_API GetDeviceProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetDeviceProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline GetDeviceProfileResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline GetDeviceProfileResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline GetDeviceProfileResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the resource.</p>
     */
    inline GetDeviceProfileResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the resource.</p>
     */
    inline GetDeviceProfileResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource.</p>
     */
    inline GetDeviceProfileResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the device profile.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the device profile.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the device profile.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the device profile.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the device profile.</p>
     */
    inline GetDeviceProfileResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the device profile.</p>
     */
    inline GetDeviceProfileResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the device profile.</p>
     */
    inline GetDeviceProfileResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Information about the device profile.</p>
     */
    inline const LoRaWANDeviceProfile& GetLoRaWAN() const{ return m_loRaWAN; }

    /**
     * <p>Information about the device profile.</p>
     */
    inline void SetLoRaWAN(const LoRaWANDeviceProfile& value) { m_loRaWAN = value; }

    /**
     * <p>Information about the device profile.</p>
     */
    inline void SetLoRaWAN(LoRaWANDeviceProfile&& value) { m_loRaWAN = std::move(value); }

    /**
     * <p>Information about the device profile.</p>
     */
    inline GetDeviceProfileResult& WithLoRaWAN(const LoRaWANDeviceProfile& value) { SetLoRaWAN(value); return *this;}

    /**
     * <p>Information about the device profile.</p>
     */
    inline GetDeviceProfileResult& WithLoRaWAN(LoRaWANDeviceProfile&& value) { SetLoRaWAN(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_id;

    LoRaWANDeviceProfile m_loRaWAN;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
