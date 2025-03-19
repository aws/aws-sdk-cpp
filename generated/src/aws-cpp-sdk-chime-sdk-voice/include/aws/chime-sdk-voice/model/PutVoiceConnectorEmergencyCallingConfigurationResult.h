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
  class PutVoiceConnectorEmergencyCallingConfigurationResult
  {
  public:
    AWS_CHIMESDKVOICE_API PutVoiceConnectorEmergencyCallingConfigurationResult() = default;
    AWS_CHIMESDKVOICE_API PutVoiceConnectorEmergencyCallingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API PutVoiceConnectorEmergencyCallingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The updated configuration.</p>
     */
    inline const EmergencyCallingConfiguration& GetEmergencyCallingConfiguration() const { return m_emergencyCallingConfiguration; }
    template<typename EmergencyCallingConfigurationT = EmergencyCallingConfiguration>
    void SetEmergencyCallingConfiguration(EmergencyCallingConfigurationT&& value) { m_emergencyCallingConfigurationHasBeenSet = true; m_emergencyCallingConfiguration = std::forward<EmergencyCallingConfigurationT>(value); }
    template<typename EmergencyCallingConfigurationT = EmergencyCallingConfiguration>
    PutVoiceConnectorEmergencyCallingConfigurationResult& WithEmergencyCallingConfiguration(EmergencyCallingConfigurationT&& value) { SetEmergencyCallingConfiguration(std::forward<EmergencyCallingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutVoiceConnectorEmergencyCallingConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EmergencyCallingConfiguration m_emergencyCallingConfiguration;
    bool m_emergencyCallingConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
