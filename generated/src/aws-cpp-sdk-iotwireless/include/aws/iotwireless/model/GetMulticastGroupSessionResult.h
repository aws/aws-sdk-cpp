﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/LoRaWANMulticastSession.h>
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
namespace IoTWireless
{
namespace Model
{
  class GetMulticastGroupSessionResult
  {
  public:
    AWS_IOTWIRELESS_API GetMulticastGroupSessionResult();
    AWS_IOTWIRELESS_API GetMulticastGroupSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetMulticastGroupSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const LoRaWANMulticastSession& GetLoRaWAN() const{ return m_loRaWAN; }

    
    inline void SetLoRaWAN(const LoRaWANMulticastSession& value) { m_loRaWAN = value; }

    
    inline void SetLoRaWAN(LoRaWANMulticastSession&& value) { m_loRaWAN = std::move(value); }

    
    inline GetMulticastGroupSessionResult& WithLoRaWAN(const LoRaWANMulticastSession& value) { SetLoRaWAN(value); return *this;}

    
    inline GetMulticastGroupSessionResult& WithLoRaWAN(LoRaWANMulticastSession&& value) { SetLoRaWAN(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetMulticastGroupSessionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetMulticastGroupSessionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetMulticastGroupSessionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    LoRaWANMulticastSession m_loRaWAN;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
