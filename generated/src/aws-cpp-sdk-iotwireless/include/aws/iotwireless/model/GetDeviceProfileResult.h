/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/LoRaWANDeviceProfile.h>
#include <aws/iotwireless/model/SidewalkGetDeviceProfile.h>
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


    ///@{
    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetDeviceProfileResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetDeviceProfileResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetDeviceProfileResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetDeviceProfileResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetDeviceProfileResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetDeviceProfileResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the device profile.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetDeviceProfileResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetDeviceProfileResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetDeviceProfileResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the device profile.</p>
     */
    inline const LoRaWANDeviceProfile& GetLoRaWAN() const{ return m_loRaWAN; }
    inline void SetLoRaWAN(const LoRaWANDeviceProfile& value) { m_loRaWAN = value; }
    inline void SetLoRaWAN(LoRaWANDeviceProfile&& value) { m_loRaWAN = std::move(value); }
    inline GetDeviceProfileResult& WithLoRaWAN(const LoRaWANDeviceProfile& value) { SetLoRaWAN(value); return *this;}
    inline GetDeviceProfileResult& WithLoRaWAN(LoRaWANDeviceProfile&& value) { SetLoRaWAN(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Sidewalk parameters in the device profile.</p>
     */
    inline const SidewalkGetDeviceProfile& GetSidewalk() const{ return m_sidewalk; }
    inline void SetSidewalk(const SidewalkGetDeviceProfile& value) { m_sidewalk = value; }
    inline void SetSidewalk(SidewalkGetDeviceProfile&& value) { m_sidewalk = std::move(value); }
    inline GetDeviceProfileResult& WithSidewalk(const SidewalkGetDeviceProfile& value) { SetSidewalk(value); return *this;}
    inline GetDeviceProfileResult& WithSidewalk(SidewalkGetDeviceProfile&& value) { SetSidewalk(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDeviceProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDeviceProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDeviceProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_id;

    LoRaWANDeviceProfile m_loRaWAN;

    SidewalkGetDeviceProfile m_sidewalk;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
