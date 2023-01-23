/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
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
  class SendDataToMulticastGroupResult
  {
  public:
    AWS_IOTWIRELESS_API SendDataToMulticastGroupResult();
    AWS_IOTWIRELESS_API SendDataToMulticastGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API SendDataToMulticastGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    
    inline void SetMessageId(const Aws::String& value) { m_messageId = value; }

    
    inline void SetMessageId(Aws::String&& value) { m_messageId = std::move(value); }

    
    inline void SetMessageId(const char* value) { m_messageId.assign(value); }

    
    inline SendDataToMulticastGroupResult& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    
    inline SendDataToMulticastGroupResult& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    
    inline SendDataToMulticastGroupResult& WithMessageId(const char* value) { SetMessageId(value); return *this;}

  private:

    Aws::String m_messageId;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
