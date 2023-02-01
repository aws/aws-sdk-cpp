/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/EmergencyCallingConfiguration.h>
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


    
    inline const EmergencyCallingConfiguration& GetEmergencyCallingConfiguration() const{ return m_emergencyCallingConfiguration; }

    
    inline void SetEmergencyCallingConfiguration(const EmergencyCallingConfiguration& value) { m_emergencyCallingConfiguration = value; }

    
    inline void SetEmergencyCallingConfiguration(EmergencyCallingConfiguration&& value) { m_emergencyCallingConfiguration = std::move(value); }

    
    inline GetVoiceConnectorEmergencyCallingConfigurationResult& WithEmergencyCallingConfiguration(const EmergencyCallingConfiguration& value) { SetEmergencyCallingConfiguration(value); return *this;}

    
    inline GetVoiceConnectorEmergencyCallingConfigurationResult& WithEmergencyCallingConfiguration(EmergencyCallingConfiguration&& value) { SetEmergencyCallingConfiguration(std::move(value)); return *this;}

  private:

    EmergencyCallingConfiguration m_emergencyCallingConfiguration;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
