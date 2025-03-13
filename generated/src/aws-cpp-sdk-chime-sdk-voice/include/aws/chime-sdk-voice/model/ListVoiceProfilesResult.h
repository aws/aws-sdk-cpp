/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/VoiceProfileSummary.h>
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
  class ListVoiceProfilesResult
  {
  public:
    AWS_CHIMESDKVOICE_API ListVoiceProfilesResult() = default;
    AWS_CHIMESDKVOICE_API ListVoiceProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API ListVoiceProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of voice profiles.</p>
     */
    inline const Aws::Vector<VoiceProfileSummary>& GetVoiceProfiles() const { return m_voiceProfiles; }
    template<typename VoiceProfilesT = Aws::Vector<VoiceProfileSummary>>
    void SetVoiceProfiles(VoiceProfilesT&& value) { m_voiceProfilesHasBeenSet = true; m_voiceProfiles = std::forward<VoiceProfilesT>(value); }
    template<typename VoiceProfilesT = Aws::Vector<VoiceProfileSummary>>
    ListVoiceProfilesResult& WithVoiceProfiles(VoiceProfilesT&& value) { SetVoiceProfiles(std::forward<VoiceProfilesT>(value)); return *this;}
    template<typename VoiceProfilesT = VoiceProfileSummary>
    ListVoiceProfilesResult& AddVoiceProfiles(VoiceProfilesT&& value) { m_voiceProfilesHasBeenSet = true; m_voiceProfiles.emplace_back(std::forward<VoiceProfilesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token used to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVoiceProfilesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVoiceProfilesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VoiceProfileSummary> m_voiceProfiles;
    bool m_voiceProfilesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
