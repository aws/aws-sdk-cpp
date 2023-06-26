/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/VoiceConnectorSettings.h>
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
  class GetGlobalSettingsResult
  {
  public:
    AWS_CHIMESDKVOICE_API GetGlobalSettingsResult();
    AWS_CHIMESDKVOICE_API GetGlobalSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API GetGlobalSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Voice Connector settings.</p>
     */
    inline const VoiceConnectorSettings& GetVoiceConnector() const{ return m_voiceConnector; }

    /**
     * <p>The Voice Connector settings.</p>
     */
    inline void SetVoiceConnector(const VoiceConnectorSettings& value) { m_voiceConnector = value; }

    /**
     * <p>The Voice Connector settings.</p>
     */
    inline void SetVoiceConnector(VoiceConnectorSettings&& value) { m_voiceConnector = std::move(value); }

    /**
     * <p>The Voice Connector settings.</p>
     */
    inline GetGlobalSettingsResult& WithVoiceConnector(const VoiceConnectorSettings& value) { SetVoiceConnector(value); return *this;}

    /**
     * <p>The Voice Connector settings.</p>
     */
    inline GetGlobalSettingsResult& WithVoiceConnector(VoiceConnectorSettings&& value) { SetVoiceConnector(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetGlobalSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetGlobalSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetGlobalSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    VoiceConnectorSettings m_voiceConnector;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
