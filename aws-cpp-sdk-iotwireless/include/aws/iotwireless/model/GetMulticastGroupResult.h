/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/LoRaWANMulticastGet.h>
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
  class GetMulticastGroupResult
  {
  public:
    AWS_IOTWIRELESS_API GetMulticastGroupResult();
    AWS_IOTWIRELESS_API GetMulticastGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetMulticastGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetArn() const{ return m_arn; }

    
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    
    inline void SetArn(const char* value) { m_arn.assign(value); }

    
    inline GetMulticastGroupResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    
    inline GetMulticastGroupResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    
    inline GetMulticastGroupResult& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline void SetId(const Aws::String& value) { m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_id.assign(value); }

    
    inline GetMulticastGroupResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline GetMulticastGroupResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline GetMulticastGroupResult& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline void SetName(const Aws::String& value) { m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_name.assign(value); }

    
    inline GetMulticastGroupResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline GetMulticastGroupResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline GetMulticastGroupResult& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_description.assign(value); }

    
    inline GetMulticastGroupResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline GetMulticastGroupResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline GetMulticastGroupResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const Aws::String& GetStatus() const{ return m_status; }

    
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    
    inline void SetStatus(const char* value) { m_status.assign(value); }

    
    inline GetMulticastGroupResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    
    inline GetMulticastGroupResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    
    inline GetMulticastGroupResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    
    inline const LoRaWANMulticastGet& GetLoRaWAN() const{ return m_loRaWAN; }

    
    inline void SetLoRaWAN(const LoRaWANMulticastGet& value) { m_loRaWAN = value; }

    
    inline void SetLoRaWAN(LoRaWANMulticastGet&& value) { m_loRaWAN = std::move(value); }

    
    inline GetMulticastGroupResult& WithLoRaWAN(const LoRaWANMulticastGet& value) { SetLoRaWAN(value); return *this;}

    
    inline GetMulticastGroupResult& WithLoRaWAN(LoRaWANMulticastGet&& value) { SetLoRaWAN(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    
    inline GetMulticastGroupResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    
    inline GetMulticastGroupResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_status;

    LoRaWANMulticastGet m_loRaWAN;

    Aws::Utils::DateTime m_createdAt;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
