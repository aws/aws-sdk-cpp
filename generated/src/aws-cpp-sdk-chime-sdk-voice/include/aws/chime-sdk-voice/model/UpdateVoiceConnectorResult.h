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
    AWS_CHIMESDKVOICE_API UpdateVoiceConnectorResult() = default;
    AWS_CHIMESDKVOICE_API UpdateVoiceConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API UpdateVoiceConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The updated Voice Connector details.</p>
     */
    inline const VoiceConnector& GetVoiceConnector() const { return m_voiceConnector; }
    template<typename VoiceConnectorT = VoiceConnector>
    void SetVoiceConnector(VoiceConnectorT&& value) { m_voiceConnectorHasBeenSet = true; m_voiceConnector = std::forward<VoiceConnectorT>(value); }
    template<typename VoiceConnectorT = VoiceConnector>
    UpdateVoiceConnectorResult& WithVoiceConnector(VoiceConnectorT&& value) { SetVoiceConnector(std::forward<VoiceConnectorT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateVoiceConnectorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VoiceConnector m_voiceConnector;
    bool m_voiceConnectorHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
