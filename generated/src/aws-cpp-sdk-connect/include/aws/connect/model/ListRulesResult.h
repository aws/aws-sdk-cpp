﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/RuleSummary.h>
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
namespace Connect
{
namespace Model
{
  class ListRulesResult
  {
  public:
    AWS_CONNECT_API ListRulesResult();
    AWS_CONNECT_API ListRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information about a rule.</p>
     */
    inline const Aws::Vector<RuleSummary>& GetRuleSummaryList() const{ return m_ruleSummaryList; }
    inline void SetRuleSummaryList(const Aws::Vector<RuleSummary>& value) { m_ruleSummaryList = value; }
    inline void SetRuleSummaryList(Aws::Vector<RuleSummary>&& value) { m_ruleSummaryList = std::move(value); }
    inline ListRulesResult& WithRuleSummaryList(const Aws::Vector<RuleSummary>& value) { SetRuleSummaryList(value); return *this;}
    inline ListRulesResult& WithRuleSummaryList(Aws::Vector<RuleSummary>&& value) { SetRuleSummaryList(std::move(value)); return *this;}
    inline ListRulesResult& AddRuleSummaryList(const RuleSummary& value) { m_ruleSummaryList.push_back(value); return *this; }
    inline ListRulesResult& AddRuleSummaryList(RuleSummary&& value) { m_ruleSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRulesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRulesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRulesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<RuleSummary> m_ruleSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
