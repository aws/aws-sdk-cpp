/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/RuleExecutionDetail.h>
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
namespace CodePipeline
{
namespace Model
{
  class ListRuleExecutionsResult
  {
  public:
    AWS_CODEPIPELINE_API ListRuleExecutionsResult() = default;
    AWS_CODEPIPELINE_API ListRuleExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API ListRuleExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the output for listing rule executions.</p>
     */
    inline const Aws::Vector<RuleExecutionDetail>& GetRuleExecutionDetails() const { return m_ruleExecutionDetails; }
    template<typename RuleExecutionDetailsT = Aws::Vector<RuleExecutionDetail>>
    void SetRuleExecutionDetails(RuleExecutionDetailsT&& value) { m_ruleExecutionDetailsHasBeenSet = true; m_ruleExecutionDetails = std::forward<RuleExecutionDetailsT>(value); }
    template<typename RuleExecutionDetailsT = Aws::Vector<RuleExecutionDetail>>
    ListRuleExecutionsResult& WithRuleExecutionDetails(RuleExecutionDetailsT&& value) { SetRuleExecutionDetails(std::forward<RuleExecutionDetailsT>(value)); return *this;}
    template<typename RuleExecutionDetailsT = RuleExecutionDetail>
    ListRuleExecutionsResult& AddRuleExecutionDetails(RuleExecutionDetailsT&& value) { m_ruleExecutionDetailsHasBeenSet = true; m_ruleExecutionDetails.emplace_back(std::forward<RuleExecutionDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that can be used in the next <code>ListRuleExecutions</code> call. To
     * view all items in the list, continue to call this operation with each subsequent
     * token until no more nextToken values are returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRuleExecutionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRuleExecutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RuleExecutionDetail> m_ruleExecutionDetails;
    bool m_ruleExecutionDetailsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
