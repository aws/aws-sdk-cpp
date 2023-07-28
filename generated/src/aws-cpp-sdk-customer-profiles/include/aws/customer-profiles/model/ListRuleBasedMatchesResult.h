/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CustomerProfiles
{
namespace Model
{
  class ListRuleBasedMatchesResult
  {
  public:
    AWS_CUSTOMERPROFILES_API ListRuleBasedMatchesResult();
    AWS_CUSTOMERPROFILES_API ListRuleBasedMatchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API ListRuleBasedMatchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of <code>MatchIds</code> for the given domain.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchIds() const{ return m_matchIds; }

    /**
     * <p>The list of <code>MatchIds</code> for the given domain.</p>
     */
    inline void SetMatchIds(const Aws::Vector<Aws::String>& value) { m_matchIds = value; }

    /**
     * <p>The list of <code>MatchIds</code> for the given domain.</p>
     */
    inline void SetMatchIds(Aws::Vector<Aws::String>&& value) { m_matchIds = std::move(value); }

    /**
     * <p>The list of <code>MatchIds</code> for the given domain.</p>
     */
    inline ListRuleBasedMatchesResult& WithMatchIds(const Aws::Vector<Aws::String>& value) { SetMatchIds(value); return *this;}

    /**
     * <p>The list of <code>MatchIds</code> for the given domain.</p>
     */
    inline ListRuleBasedMatchesResult& WithMatchIds(Aws::Vector<Aws::String>&& value) { SetMatchIds(std::move(value)); return *this;}

    /**
     * <p>The list of <code>MatchIds</code> for the given domain.</p>
     */
    inline ListRuleBasedMatchesResult& AddMatchIds(const Aws::String& value) { m_matchIds.push_back(value); return *this; }

    /**
     * <p>The list of <code>MatchIds</code> for the given domain.</p>
     */
    inline ListRuleBasedMatchesResult& AddMatchIds(Aws::String&& value) { m_matchIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of <code>MatchIds</code> for the given domain.</p>
     */
    inline ListRuleBasedMatchesResult& AddMatchIds(const char* value) { m_matchIds.push_back(value); return *this; }


    /**
     * <p>The pagination token from the previous <code>ListRuleBasedMatches</code> API
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token from the previous <code>ListRuleBasedMatches</code> API
     * call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token from the previous <code>ListRuleBasedMatches</code> API
     * call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token from the previous <code>ListRuleBasedMatches</code> API
     * call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token from the previous <code>ListRuleBasedMatches</code> API
     * call.</p>
     */
    inline ListRuleBasedMatchesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token from the previous <code>ListRuleBasedMatches</code> API
     * call.</p>
     */
    inline ListRuleBasedMatchesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token from the previous <code>ListRuleBasedMatches</code> API
     * call.</p>
     */
    inline ListRuleBasedMatchesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListRuleBasedMatchesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListRuleBasedMatchesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListRuleBasedMatchesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_matchIds;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
