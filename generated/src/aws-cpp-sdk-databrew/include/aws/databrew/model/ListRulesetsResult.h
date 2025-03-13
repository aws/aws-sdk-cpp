/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/model/RulesetItem.h>
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
namespace GlueDataBrew
{
namespace Model
{
  class ListRulesetsResult
  {
  public:
    AWS_GLUEDATABREW_API ListRulesetsResult() = default;
    AWS_GLUEDATABREW_API ListRulesetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUEDATABREW_API ListRulesetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of RulesetItem. RulesetItem contains meta data of a ruleset.</p>
     */
    inline const Aws::Vector<RulesetItem>& GetRulesets() const { return m_rulesets; }
    template<typename RulesetsT = Aws::Vector<RulesetItem>>
    void SetRulesets(RulesetsT&& value) { m_rulesetsHasBeenSet = true; m_rulesets = std::forward<RulesetsT>(value); }
    template<typename RulesetsT = Aws::Vector<RulesetItem>>
    ListRulesetsResult& WithRulesets(RulesetsT&& value) { SetRulesets(std::forward<RulesetsT>(value)); return *this;}
    template<typename RulesetsT = RulesetItem>
    ListRulesetsResult& AddRulesets(RulesetsT&& value) { m_rulesetsHasBeenSet = true; m_rulesets.emplace_back(std::forward<RulesetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRulesetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRulesetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RulesetItem> m_rulesets;
    bool m_rulesetsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
