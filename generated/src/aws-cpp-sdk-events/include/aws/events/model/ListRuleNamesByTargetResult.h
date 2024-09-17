/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
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
namespace CloudWatchEvents
{
namespace Model
{
  class ListRuleNamesByTargetResult
  {
  public:
    AWS_CLOUDWATCHEVENTS_API ListRuleNamesByTargetResult();
    AWS_CLOUDWATCHEVENTS_API ListRuleNamesByTargetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API ListRuleNamesByTargetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The names of the rules that can invoke the given target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRuleNames() const{ return m_ruleNames; }
    inline void SetRuleNames(const Aws::Vector<Aws::String>& value) { m_ruleNames = value; }
    inline void SetRuleNames(Aws::Vector<Aws::String>&& value) { m_ruleNames = std::move(value); }
    inline ListRuleNamesByTargetResult& WithRuleNames(const Aws::Vector<Aws::String>& value) { SetRuleNames(value); return *this;}
    inline ListRuleNamesByTargetResult& WithRuleNames(Aws::Vector<Aws::String>&& value) { SetRuleNames(std::move(value)); return *this;}
    inline ListRuleNamesByTargetResult& AddRuleNames(const Aws::String& value) { m_ruleNames.push_back(value); return *this; }
    inline ListRuleNamesByTargetResult& AddRuleNames(Aws::String&& value) { m_ruleNames.push_back(std::move(value)); return *this; }
    inline ListRuleNamesByTargetResult& AddRuleNames(const char* value) { m_ruleNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether there are additional results to retrieve. If there are no
     * more results, the value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRuleNamesByTargetResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRuleNamesByTargetResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRuleNamesByTargetResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRuleNamesByTargetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRuleNamesByTargetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRuleNamesByTargetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_ruleNames;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
