/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/VoiceProfile.h>
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
  class CreateVoiceProfileResult
  {
  public:
    AWS_CHIMESDKVOICE_API CreateVoiceProfileResult() = default;
    AWS_CHIMESDKVOICE_API CreateVoiceProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API CreateVoiceProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The requested voice profile.</p>
     */
    inline const VoiceProfile& GetVoiceProfile() const { return m_voiceProfile; }
    template<typename VoiceProfileT = VoiceProfile>
    void SetVoiceProfile(VoiceProfileT&& value) { m_voiceProfileHasBeenSet = true; m_voiceProfile = std::forward<VoiceProfileT>(value); }
    template<typename VoiceProfileT = VoiceProfile>
    CreateVoiceProfileResult& WithVoiceProfile(VoiceProfileT&& value) { SetVoiceProfile(std::forward<VoiceProfileT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateVoiceProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VoiceProfile m_voiceProfile;
    bool m_voiceProfileHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
