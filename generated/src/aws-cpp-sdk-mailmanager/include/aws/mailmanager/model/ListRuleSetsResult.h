/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/RuleSet.h>
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
namespace MailManager
{
namespace Model
{
  class ListRuleSetsResult
  {
  public:
    AWS_MAILMANAGER_API ListRuleSetsResult() = default;
    AWS_MAILMANAGER_API ListRuleSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API ListRuleSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of rule sets.</p>
     */
    inline const Aws::Vector<RuleSet>& GetRuleSets() const { return m_ruleSets; }
    template<typename RuleSetsT = Aws::Vector<RuleSet>>
    void SetRuleSets(RuleSetsT&& value) { m_ruleSetsHasBeenSet = true; m_ruleSets = std::forward<RuleSetsT>(value); }
    template<typename RuleSetsT = Aws::Vector<RuleSet>>
    ListRuleSetsResult& WithRuleSets(RuleSetsT&& value) { SetRuleSets(std::forward<RuleSetsT>(value)); return *this;}
    template<typename RuleSetsT = RuleSet>
    ListRuleSetsResult& AddRuleSets(RuleSetsT&& value) { m_ruleSetsHasBeenSet = true; m_ruleSets.emplace_back(std::forward<RuleSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If NextToken is returned, there are more results available. The value of
     * NextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRuleSetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRuleSetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RuleSet> m_ruleSets;
    bool m_ruleSetsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
