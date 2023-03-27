/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/LoggingConfiguration.h>
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
namespace ChimeSDKVoice
{
namespace Model
{
  class GetVoiceConnectorLoggingConfigurationResult
  {
  public:
    AWS_CHIMESDKVOICE_API GetVoiceConnectorLoggingConfigurationResult();
    AWS_CHIMESDKVOICE_API GetVoiceConnectorLoggingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API GetVoiceConnectorLoggingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The logging configuration details .</p>
     */
    inline const LoggingConfiguration& GetLoggingConfiguration() const{ return m_loggingConfiguration; }

    /**
     * <p>The logging configuration details .</p>
     */
    inline void SetLoggingConfiguration(const LoggingConfiguration& value) { m_loggingConfiguration = value; }

    /**
     * <p>The logging configuration details .</p>
     */
    inline void SetLoggingConfiguration(LoggingConfiguration&& value) { m_loggingConfiguration = std::move(value); }

    /**
     * <p>The logging configuration details .</p>
     */
    inline GetVoiceConnectorLoggingConfigurationResult& WithLoggingConfiguration(const LoggingConfiguration& value) { SetLoggingConfiguration(value); return *this;}

    /**
     * <p>The logging configuration details .</p>
     */
    inline GetVoiceConnectorLoggingConfigurationResult& WithLoggingConfiguration(LoggingConfiguration&& value) { SetLoggingConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetVoiceConnectorLoggingConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetVoiceConnectorLoggingConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetVoiceConnectorLoggingConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    LoggingConfiguration m_loggingConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
