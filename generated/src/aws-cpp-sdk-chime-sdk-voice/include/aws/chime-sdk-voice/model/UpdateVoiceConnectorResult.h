/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/VoiceConnector.h>
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
  class UpdateVoiceConnectorResult
  {
  public:
    AWS_CHIMESDKVOICE_API UpdateVoiceConnectorResult();
    AWS_CHIMESDKVOICE_API UpdateVoiceConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API UpdateVoiceConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated Voice Connector details.</p>
     */
    inline const VoiceConnector& GetVoiceConnector() const{ return m_voiceConnector; }

    /**
     * <p>The updated Voice Connector details.</p>
     */
    inline void SetVoiceConnector(const VoiceConnector& value) { m_voiceConnector = value; }

    /**
     * <p>The updated Voice Connector details.</p>
     */
    inline void SetVoiceConnector(VoiceConnector&& value) { m_voiceConnector = std::move(value); }

    /**
     * <p>The updated Voice Connector details.</p>
     */
    inline UpdateVoiceConnectorResult& WithVoiceConnector(const VoiceConnector& value) { SetVoiceConnector(value); return *this;}

    /**
     * <p>The updated Voice Connector details.</p>
     */
    inline UpdateVoiceConnectorResult& WithVoiceConnector(VoiceConnector&& value) { SetVoiceConnector(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateVoiceConnectorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateVoiceConnectorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateVoiceConnectorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    VoiceConnector m_voiceConnector;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
