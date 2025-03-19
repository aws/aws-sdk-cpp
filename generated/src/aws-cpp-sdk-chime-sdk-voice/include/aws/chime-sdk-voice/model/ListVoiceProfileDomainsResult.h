/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/VoiceProfileDomainSummary.h>
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
  class ListVoiceProfileDomainsResult
  {
  public:
    AWS_CHIMESDKVOICE_API ListVoiceProfileDomainsResult() = default;
    AWS_CHIMESDKVOICE_API ListVoiceProfileDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API ListVoiceProfileDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of voice profile domains.</p>
     */
    inline const Aws::Vector<VoiceProfileDomainSummary>& GetVoiceProfileDomains() const { return m_voiceProfileDomains; }
    template<typename VoiceProfileDomainsT = Aws::Vector<VoiceProfileDomainSummary>>
    void SetVoiceProfileDomains(VoiceProfileDomainsT&& value) { m_voiceProfileDomainsHasBeenSet = true; m_voiceProfileDomains = std::forward<VoiceProfileDomainsT>(value); }
    template<typename VoiceProfileDomainsT = Aws::Vector<VoiceProfileDomainSummary>>
    ListVoiceProfileDomainsResult& WithVoiceProfileDomains(VoiceProfileDomainsT&& value) { SetVoiceProfileDomains(std::forward<VoiceProfileDomainsT>(value)); return *this;}
    template<typename VoiceProfileDomainsT = VoiceProfileDomainSummary>
    ListVoiceProfileDomainsResult& AddVoiceProfileDomains(VoiceProfileDomainsT&& value) { m_voiceProfileDomainsHasBeenSet = true; m_voiceProfileDomains.emplace_back(std::forward<VoiceProfileDomainsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVoiceProfileDomainsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVoiceProfileDomainsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VoiceProfileDomainSummary> m_voiceProfileDomains;
    bool m_voiceProfileDomainsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
