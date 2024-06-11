﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/Target.h>
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
  class ListTargetsByRuleResult
  {
  public:
    AWS_CLOUDWATCHEVENTS_API ListTargetsByRuleResult();
    AWS_CLOUDWATCHEVENTS_API ListTargetsByRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API ListTargetsByRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The targets assigned to the rule.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targets = value; }
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targets = std::move(value); }
    inline ListTargetsByRuleResult& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}
    inline ListTargetsByRuleResult& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}
    inline ListTargetsByRuleResult& AddTargets(const Target& value) { m_targets.push_back(value); return *this; }
    inline ListTargetsByRuleResult& AddTargets(Target&& value) { m_targets.push_back(std::move(value)); return *this; }
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
    inline ListTargetsByRuleResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTargetsByRuleResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTargetsByRuleResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTargetsByRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTargetsByRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTargetsByRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Target> m_targets;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
