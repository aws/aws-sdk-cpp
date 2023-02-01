/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/VoiceConnectorGroup.h>
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
  class UpdateVoiceConnectorGroupResult
  {
  public:
    AWS_CHIMESDKVOICE_API UpdateVoiceConnectorGroupResult();
    AWS_CHIMESDKVOICE_API UpdateVoiceConnectorGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API UpdateVoiceConnectorGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const VoiceConnectorGroup& GetVoiceConnectorGroup() const{ return m_voiceConnectorGroup; }

    
    inline void SetVoiceConnectorGroup(const VoiceConnectorGroup& value) { m_voiceConnectorGroup = value; }

    
    inline void SetVoiceConnectorGroup(VoiceConnectorGroup&& value) { m_voiceConnectorGroup = std::move(value); }

    
    inline UpdateVoiceConnectorGroupResult& WithVoiceConnectorGroup(const VoiceConnectorGroup& value) { SetVoiceConnectorGroup(value); return *this;}

    
    inline UpdateVoiceConnectorGroupResult& WithVoiceConnectorGroup(VoiceConnectorGroup&& value) { SetVoiceConnectorGroup(std::move(value)); return *this;}

  private:

    VoiceConnectorGroup m_voiceConnectorGroup;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
