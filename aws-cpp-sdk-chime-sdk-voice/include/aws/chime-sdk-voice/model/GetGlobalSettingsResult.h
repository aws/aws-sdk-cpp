/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/VoiceConnectorSettings.h>
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
  class GetGlobalSettingsResult
  {
  public:
    AWS_CHIMESDKVOICE_API GetGlobalSettingsResult();
    AWS_CHIMESDKVOICE_API GetGlobalSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API GetGlobalSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const VoiceConnectorSettings& GetVoiceConnector() const{ return m_voiceConnector; }

    
    inline void SetVoiceConnector(const VoiceConnectorSettings& value) { m_voiceConnector = value; }

    
    inline void SetVoiceConnector(VoiceConnectorSettings&& value) { m_voiceConnector = std::move(value); }

    
    inline GetGlobalSettingsResult& WithVoiceConnector(const VoiceConnectorSettings& value) { SetVoiceConnector(value); return *this;}

    
    inline GetGlobalSettingsResult& WithVoiceConnector(VoiceConnectorSettings&& value) { SetVoiceConnector(std::move(value)); return *this;}

  private:

    VoiceConnectorSettings m_voiceConnector;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
