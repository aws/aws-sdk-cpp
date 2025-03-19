/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListVoiceConnectorsResult
  {
  public:
    AWS_CHIMESDKVOICE_API ListVoiceConnectorsResult() = default;
    AWS_CHIMESDKVOICE_API ListVoiceConnectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API ListVoiceConnectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the Voice Connectors.</p>
     */
    inline const Aws::Vector<VoiceConnector>& GetVoiceConnectors() const { return m_voiceConnectors; }
    template<typename VoiceConnectorsT = Aws::Vector<VoiceConnector>>
    void SetVoiceConnectors(VoiceConnectorsT&& value) { m_voiceConnectorsHasBeenSet = true; m_voiceConnectors = std::forward<VoiceConnectorsT>(value); }
    template<typename VoiceConnectorsT = Aws::Vector<VoiceConnector>>
    ListVoiceConnectorsResult& WithVoiceConnectors(VoiceConnectorsT&& value) { SetVoiceConnectors(std::forward<VoiceConnectorsT>(value)); return *this;}
    template<typename VoiceConnectorsT = VoiceConnector>
    ListVoiceConnectorsResult& AddVoiceConnectors(VoiceConnectorsT&& value) { m_voiceConnectorsHasBeenSet = true; m_voiceConnectors.emplace_back(std::forward<VoiceConnectorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVoiceConnectorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVoiceConnectorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VoiceConnector> m_voiceConnectors;
    bool m_voiceConnectorsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
