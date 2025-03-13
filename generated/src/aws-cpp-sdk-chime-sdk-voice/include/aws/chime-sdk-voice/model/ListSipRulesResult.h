/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/SipRule.h>
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
  class ListSipRulesResult
  {
  public:
    AWS_CHIMESDKVOICE_API ListSipRulesResult() = default;
    AWS_CHIMESDKVOICE_API ListSipRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API ListSipRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of SIP rules and details.</p>
     */
    inline const Aws::Vector<SipRule>& GetSipRules() const { return m_sipRules; }
    template<typename SipRulesT = Aws::Vector<SipRule>>
    void SetSipRules(SipRulesT&& value) { m_sipRulesHasBeenSet = true; m_sipRules = std::forward<SipRulesT>(value); }
    template<typename SipRulesT = Aws::Vector<SipRule>>
    ListSipRulesResult& WithSipRules(SipRulesT&& value) { SetSipRules(std::forward<SipRulesT>(value)); return *this;}
    template<typename SipRulesT = SipRule>
    ListSipRulesResult& AddSipRules(SipRulesT&& value) { m_sipRulesHasBeenSet = true; m_sipRules.emplace_back(std::forward<SipRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSipRulesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSipRulesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SipRule> m_sipRules;
    bool m_sipRulesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
