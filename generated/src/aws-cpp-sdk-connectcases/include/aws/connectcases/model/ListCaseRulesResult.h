/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/CaseRuleSummary.h>
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
namespace ConnectCases
{
namespace Model
{
  class ListCaseRulesResult
  {
  public:
    AWS_CONNECTCASES_API ListCaseRulesResult();
    AWS_CONNECTCASES_API ListCaseRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API ListCaseRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of field summary objects.</p>
     */
    inline const Aws::Vector<CaseRuleSummary>& GetCaseRules() const{ return m_caseRules; }
    inline void SetCaseRules(const Aws::Vector<CaseRuleSummary>& value) { m_caseRules = value; }
    inline void SetCaseRules(Aws::Vector<CaseRuleSummary>&& value) { m_caseRules = std::move(value); }
    inline ListCaseRulesResult& WithCaseRules(const Aws::Vector<CaseRuleSummary>& value) { SetCaseRules(value); return *this;}
    inline ListCaseRulesResult& WithCaseRules(Aws::Vector<CaseRuleSummary>&& value) { SetCaseRules(std::move(value)); return *this;}
    inline ListCaseRulesResult& AddCaseRules(const CaseRuleSummary& value) { m_caseRules.push_back(value); return *this; }
    inline ListCaseRulesResult& AddCaseRules(CaseRuleSummary&& value) { m_caseRules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCaseRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCaseRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCaseRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCaseRulesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCaseRulesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCaseRulesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CaseRuleSummary> m_caseRules;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
