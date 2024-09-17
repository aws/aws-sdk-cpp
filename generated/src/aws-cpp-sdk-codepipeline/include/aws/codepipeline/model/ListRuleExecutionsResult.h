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
    AWS_CODEPIPELINE_API ListRuleExecutionsResult();
    AWS_CODEPIPELINE_API ListRuleExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API ListRuleExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the output for listing rule executions.</p>
     */
    inline const Aws::Vector<RuleExecutionDetail>& GetRuleExecutionDetails() const{ return m_ruleExecutionDetails; }
    inline void SetRuleExecutionDetails(const Aws::Vector<RuleExecutionDetail>& value) { m_ruleExecutionDetails = value; }
    inline void SetRuleExecutionDetails(Aws::Vector<RuleExecutionDetail>&& value) { m_ruleExecutionDetails = std::move(value); }
    inline ListRuleExecutionsResult& WithRuleExecutionDetails(const Aws::Vector<RuleExecutionDetail>& value) { SetRuleExecutionDetails(value); return *this;}
    inline ListRuleExecutionsResult& WithRuleExecutionDetails(Aws::Vector<RuleExecutionDetail>&& value) { SetRuleExecutionDetails(std::move(value)); return *this;}
    inline ListRuleExecutionsResult& AddRuleExecutionDetails(const RuleExecutionDetail& value) { m_ruleExecutionDetails.push_back(value); return *this; }
    inline ListRuleExecutionsResult& AddRuleExecutionDetails(RuleExecutionDetail&& value) { m_ruleExecutionDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that can be used in the next <code>ListRuleExecutions</code> call. To
     * view all items in the list, continue to call this operation with each subsequent
     * token until no more nextToken values are returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRuleExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRuleExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRuleExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRuleExecutionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRuleExecutionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRuleExecutionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<RuleExecutionDetail> m_ruleExecutionDetails;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
