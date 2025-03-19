/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/VoiceConnectorGroup.h>
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
  class GetVoiceConnectorGroupResult
  {
  public:
    AWS_CHIMESDKVOICE_API GetVoiceConnectorGroupResult() = default;
    AWS_CHIMESDKVOICE_API GetVoiceConnectorGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API GetVoiceConnectorGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the Voice Connector group.</p>
     */
    inline const VoiceConnectorGroup& GetVoiceConnectorGroup() const { return m_voiceConnectorGroup; }
    template<typename VoiceConnectorGroupT = VoiceConnectorGroup>
    void SetVoiceConnectorGroup(VoiceConnectorGroupT&& value) { m_voiceConnectorGroupHasBeenSet = true; m_voiceConnectorGroup = std::forward<VoiceConnectorGroupT>(value); }
    template<typename VoiceConnectorGroupT = VoiceConnectorGroup>
    GetVoiceConnectorGroupResult& WithVoiceConnectorGroup(VoiceConnectorGroupT&& value) { SetVoiceConnectorGroup(std::forward<VoiceConnectorGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetVoiceConnectorGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VoiceConnectorGroup m_voiceConnectorGroup;
    bool m_voiceConnectorGroupHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
