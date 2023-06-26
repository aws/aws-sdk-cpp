/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/LogLevel.h>
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
  class GetResourceLogLevelResult
  {
  public:
    AWS_IOTWIRELESS_API GetResourceLogLevelResult();
    AWS_IOTWIRELESS_API GetResourceLogLevelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetResourceLogLevelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const LogLevel& GetLogLevel() const{ return m_logLevel; }

    
    inline void SetLogLevel(const LogLevel& value) { m_logLevel = value; }

    
    inline void SetLogLevel(LogLevel&& value) { m_logLevel = std::move(value); }

    
    inline GetResourceLogLevelResult& WithLogLevel(const LogLevel& value) { SetLogLevel(value); return *this;}

    
    inline GetResourceLogLevelResult& WithLogLevel(LogLevel&& value) { SetLogLevel(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetResourceLogLevelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetResourceLogLevelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetResourceLogLevelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    LogLevel m_logLevel;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
