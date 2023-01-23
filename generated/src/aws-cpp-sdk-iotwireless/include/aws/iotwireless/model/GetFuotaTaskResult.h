/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/FuotaTaskStatus.h>
#include <aws/iotwireless/model/LoRaWANFuotaTaskGetInfo.h>
#include <aws/core/utils/DateTime.h>
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
  class GetFuotaTaskResult
  {
  public:
    AWS_IOTWIRELESS_API GetFuotaTaskResult();
    AWS_IOTWIRELESS_API GetFuotaTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetFuotaTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetArn() const{ return m_arn; }

    
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    
    inline void SetArn(const char* value) { m_arn.assign(value); }

    
    inline GetFuotaTaskResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    
    inline GetFuotaTaskResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    
    inline GetFuotaTaskResult& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline void SetId(const Aws::String& value) { m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_id.assign(value); }

    
    inline GetFuotaTaskResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline GetFuotaTaskResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline GetFuotaTaskResult& WithId(const char* value) { SetId(value); return *this;}


    
    inline const FuotaTaskStatus& GetStatus() const{ return m_status; }

    
    inline void SetStatus(const FuotaTaskStatus& value) { m_status = value; }

    
    inline void SetStatus(FuotaTaskStatus&& value) { m_status = std::move(value); }

    
    inline GetFuotaTaskResult& WithStatus(const FuotaTaskStatus& value) { SetStatus(value); return *this;}

    
    inline GetFuotaTaskResult& WithStatus(FuotaTaskStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline void SetName(const Aws::String& value) { m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_name.assign(value); }

    
    inline GetFuotaTaskResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline GetFuotaTaskResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline GetFuotaTaskResult& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_description.assign(value); }

    
    inline GetFuotaTaskResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline GetFuotaTaskResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline GetFuotaTaskResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const LoRaWANFuotaTaskGetInfo& GetLoRaWAN() const{ return m_loRaWAN; }

    
    inline void SetLoRaWAN(const LoRaWANFuotaTaskGetInfo& value) { m_loRaWAN = value; }

    
    inline void SetLoRaWAN(LoRaWANFuotaTaskGetInfo&& value) { m_loRaWAN = std::move(value); }

    
    inline GetFuotaTaskResult& WithLoRaWAN(const LoRaWANFuotaTaskGetInfo& value) { SetLoRaWAN(value); return *this;}

    
    inline GetFuotaTaskResult& WithLoRaWAN(LoRaWANFuotaTaskGetInfo&& value) { SetLoRaWAN(std::move(value)); return *this;}


    
    inline const Aws::String& GetFirmwareUpdateImage() const{ return m_firmwareUpdateImage; }

    
    inline void SetFirmwareUpdateImage(const Aws::String& value) { m_firmwareUpdateImage = value; }

    
    inline void SetFirmwareUpdateImage(Aws::String&& value) { m_firmwareUpdateImage = std::move(value); }

    
    inline void SetFirmwareUpdateImage(const char* value) { m_firmwareUpdateImage.assign(value); }

    
    inline GetFuotaTaskResult& WithFirmwareUpdateImage(const Aws::String& value) { SetFirmwareUpdateImage(value); return *this;}

    
    inline GetFuotaTaskResult& WithFirmwareUpdateImage(Aws::String&& value) { SetFirmwareUpdateImage(std::move(value)); return *this;}

    
    inline GetFuotaTaskResult& WithFirmwareUpdateImage(const char* value) { SetFirmwareUpdateImage(value); return *this;}


    
    inline const Aws::String& GetFirmwareUpdateRole() const{ return m_firmwareUpdateRole; }

    
    inline void SetFirmwareUpdateRole(const Aws::String& value) { m_firmwareUpdateRole = value; }

    
    inline void SetFirmwareUpdateRole(Aws::String&& value) { m_firmwareUpdateRole = std::move(value); }

    
    inline void SetFirmwareUpdateRole(const char* value) { m_firmwareUpdateRole.assign(value); }

    
    inline GetFuotaTaskResult& WithFirmwareUpdateRole(const Aws::String& value) { SetFirmwareUpdateRole(value); return *this;}

    
    inline GetFuotaTaskResult& WithFirmwareUpdateRole(Aws::String&& value) { SetFirmwareUpdateRole(std::move(value)); return *this;}

    
    inline GetFuotaTaskResult& WithFirmwareUpdateRole(const char* value) { SetFirmwareUpdateRole(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    
    inline GetFuotaTaskResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    
    inline GetFuotaTaskResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_id;

    FuotaTaskStatus m_status;

    Aws::String m_name;

    Aws::String m_description;

    LoRaWANFuotaTaskGetInfo m_loRaWAN;

    Aws::String m_firmwareUpdateImage;

    Aws::String m_firmwareUpdateRole;

    Aws::Utils::DateTime m_createdAt;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
