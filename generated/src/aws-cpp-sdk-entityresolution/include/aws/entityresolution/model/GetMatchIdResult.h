/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
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
namespace EntityResolution
{
namespace Model
{
  class GetMatchIdResult
  {
  public:
    AWS_ENTITYRESOLUTION_API GetMatchIdResult() = default;
    AWS_ENTITYRESOLUTION_API GetMatchIdResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API GetMatchIdResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifiers for this group of match records.</p>
     */
    inline const Aws::String& GetMatchId() const { return m_matchId; }
    template<typename MatchIdT = Aws::String>
    void SetMatchId(MatchIdT&& value) { m_matchIdHasBeenSet = true; m_matchId = std::forward<MatchIdT>(value); }
    template<typename MatchIdT = Aws::String>
    GetMatchIdResult& WithMatchId(MatchIdT&& value) { SetMatchId(std::forward<MatchIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule the record matched on.</p>
     */
    inline const Aws::String& GetMatchRule() const { return m_matchRule; }
    template<typename MatchRuleT = Aws::String>
    void SetMatchRule(MatchRuleT&& value) { m_matchRuleHasBeenSet = true; m_matchRule = std::forward<MatchRuleT>(value); }
    template<typename MatchRuleT = Aws::String>
    GetMatchIdResult& WithMatchRule(MatchRuleT&& value) { SetMatchRule(std::forward<MatchRuleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMatchIdResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_matchId;
    bool m_matchIdHasBeenSet = false;

    Aws::String m_matchRule;
    bool m_matchRuleHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
