/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/VoiceConnector.h>
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


    
    inline const VoiceConnector& GetVoiceConnector() const{ return m_voiceConnector; }

    
    inline void SetVoiceConnector(const VoiceConnector& value) { m_voiceConnector = value; }

    
    inline void SetVoiceConnector(VoiceConnector&& value) { m_voiceConnector = std::move(value); }

    
    inline UpdateVoiceConnectorResult& WithVoiceConnector(const VoiceConnector& value) { SetVoiceConnector(value); return *this;}

    
    inline UpdateVoiceConnectorResult& WithVoiceConnector(VoiceConnector&& value) { SetVoiceConnector(std::move(value)); return *this;}

  private:

    VoiceConnector m_voiceConnector;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
