/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_MAILMANAGER_API ListRuleSetsResult();
    AWS_MAILMANAGER_API ListRuleSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API ListRuleSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If NextToken is returned, there are more results available. The value of
     * NextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRuleSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRuleSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRuleSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of rule sets.</p>
     */
    inline const Aws::Vector<RuleSet>& GetRuleSets() const{ return m_ruleSets; }
    inline void SetRuleSets(const Aws::Vector<RuleSet>& value) { m_ruleSets = value; }
    inline void SetRuleSets(Aws::Vector<RuleSet>&& value) { m_ruleSets = std::move(value); }
    inline ListRuleSetsResult& WithRuleSets(const Aws::Vector<RuleSet>& value) { SetRuleSets(value); return *this;}
    inline ListRuleSetsResult& WithRuleSets(Aws::Vector<RuleSet>&& value) { SetRuleSets(std::move(value)); return *this;}
    inline ListRuleSetsResult& AddRuleSets(const RuleSet& value) { m_ruleSets.push_back(value); return *this; }
    inline ListRuleSetsResult& AddRuleSets(RuleSet&& value) { m_ruleSets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRuleSetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRuleSetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRuleSetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<RuleSet> m_ruleSets;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
