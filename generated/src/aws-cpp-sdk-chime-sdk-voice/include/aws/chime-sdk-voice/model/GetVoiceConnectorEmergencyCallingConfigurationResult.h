/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/EmergencyCallingConfiguration.h>
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
  class GetVoiceConnectorEmergencyCallingConfigurationResult
  {
  public:
    AWS_CHIMESDKVOICE_API GetVoiceConnectorEmergencyCallingConfigurationResult();
    AWS_CHIMESDKVOICE_API GetVoiceConnectorEmergencyCallingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API GetVoiceConnectorEmergencyCallingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the emergency calling configuration.</p>
     */
    inline const EmergencyCallingConfiguration& GetEmergencyCallingConfiguration() const{ return m_emergencyCallingConfiguration; }

    /**
     * <p>The details of the emergency calling configuration.</p>
     */
    inline void SetEmergencyCallingConfiguration(const EmergencyCallingConfiguration& value) { m_emergencyCallingConfiguration = value; }

    /**
     * <p>The details of the emergency calling configuration.</p>
     */
    inline void SetEmergencyCallingConfiguration(EmergencyCallingConfiguration&& value) { m_emergencyCallingConfiguration = std::move(value); }

    /**
     * <p>The details of the emergency calling configuration.</p>
     */
    inline GetVoiceConnectorEmergencyCallingConfigurationResult& WithEmergencyCallingConfiguration(const EmergencyCallingConfiguration& value) { SetEmergencyCallingConfiguration(value); return *this;}

    /**
     * <p>The details of the emergency calling configuration.</p>
     */
    inline GetVoiceConnectorEmergencyCallingConfigurationResult& WithEmergencyCallingConfiguration(EmergencyCallingConfiguration&& value) { SetEmergencyCallingConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetVoiceConnectorEmergencyCallingConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetVoiceConnectorEmergencyCallingConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetVoiceConnectorEmergencyCallingConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EmergencyCallingConfiguration m_emergencyCallingConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
