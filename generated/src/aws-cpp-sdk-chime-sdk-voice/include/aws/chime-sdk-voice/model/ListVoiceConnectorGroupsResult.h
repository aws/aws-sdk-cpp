/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListVoiceConnectorGroupsResult
  {
  public:
    AWS_CHIMESDKVOICE_API ListVoiceConnectorGroupsResult() = default;
    AWS_CHIMESDKVOICE_API ListVoiceConnectorGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API ListVoiceConnectorGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the Voice Connector groups.</p>
     */
    inline const Aws::Vector<VoiceConnectorGroup>& GetVoiceConnectorGroups() const { return m_voiceConnectorGroups; }
    template<typename VoiceConnectorGroupsT = Aws::Vector<VoiceConnectorGroup>>
    void SetVoiceConnectorGroups(VoiceConnectorGroupsT&& value) { m_voiceConnectorGroupsHasBeenSet = true; m_voiceConnectorGroups = std::forward<VoiceConnectorGroupsT>(value); }
    template<typename VoiceConnectorGroupsT = Aws::Vector<VoiceConnectorGroup>>
    ListVoiceConnectorGroupsResult& WithVoiceConnectorGroups(VoiceConnectorGroupsT&& value) { SetVoiceConnectorGroups(std::forward<VoiceConnectorGroupsT>(value)); return *this;}
    template<typename VoiceConnectorGroupsT = VoiceConnectorGroup>
    ListVoiceConnectorGroupsResult& AddVoiceConnectorGroups(VoiceConnectorGroupsT&& value) { m_voiceConnectorGroupsHasBeenSet = true; m_voiceConnectorGroups.emplace_back(std::forward<VoiceConnectorGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVoiceConnectorGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVoiceConnectorGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VoiceConnectorGroup> m_voiceConnectorGroups;
    bool m_voiceConnectorGroupsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
