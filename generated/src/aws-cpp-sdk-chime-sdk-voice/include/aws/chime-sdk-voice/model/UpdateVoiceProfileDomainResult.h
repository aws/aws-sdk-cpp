/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/VoiceProfileDomain.h>
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
  class UpdateVoiceProfileDomainResult
  {
  public:
    AWS_CHIMESDKVOICE_API UpdateVoiceProfileDomainResult() = default;
    AWS_CHIMESDKVOICE_API UpdateVoiceProfileDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API UpdateVoiceProfileDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The updated details of the voice profile domain.</p>
     */
    inline const VoiceProfileDomain& GetVoiceProfileDomain() const { return m_voiceProfileDomain; }
    template<typename VoiceProfileDomainT = VoiceProfileDomain>
    void SetVoiceProfileDomain(VoiceProfileDomainT&& value) { m_voiceProfileDomainHasBeenSet = true; m_voiceProfileDomain = std::forward<VoiceProfileDomainT>(value); }
    template<typename VoiceProfileDomainT = VoiceProfileDomain>
    UpdateVoiceProfileDomainResult& WithVoiceProfileDomain(VoiceProfileDomainT&& value) { SetVoiceProfileDomain(std::forward<VoiceProfileDomainT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateVoiceProfileDomainResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VoiceProfileDomain m_voiceProfileDomain;
    bool m_voiceProfileDomainHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
