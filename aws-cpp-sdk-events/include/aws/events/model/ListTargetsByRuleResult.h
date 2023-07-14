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
  class AWS_CLOUDWATCHEVENTS_API ListTargetsByRuleResult
  {
  public:
    ListTargetsByRuleResult();
    ListTargetsByRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTargetsByRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The targets assigned to the rule.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <p>The targets assigned to the rule.</p>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targets = value; }

    /**
     * <p>The targets assigned to the rule.</p>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targets = std::move(value); }

    /**
     * <p>The targets assigned to the rule.</p>
     */
    inline ListTargetsByRuleResult& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets assigned to the rule.</p>
     */
    inline ListTargetsByRuleResult& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The targets assigned to the rule.</p>
     */
    inline ListTargetsByRuleResult& AddTargets(const Target& value) { m_targets.push_back(value); return *this; }

    /**
     * <p>The targets assigned to the rule.</p>
     */
    inline ListTargetsByRuleResult& AddTargets(Target&& value) { m_targets.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether there are additional results to retrieve. If there are no
     * more results, the value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Indicates whether there are additional results to retrieve. If there are no
     * more results, the value is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Indicates whether there are additional results to retrieve. If there are no
     * more results, the value is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Indicates whether there are additional results to retrieve. If there are no
     * more results, the value is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Indicates whether there are additional results to retrieve. If there are no
     * more results, the value is null.</p>
     */
    inline ListTargetsByRuleResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Indicates whether there are additional results to retrieve. If there are no
     * more results, the value is null.</p>
     */
    inline ListTargetsByRuleResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Indicates whether there are additional results to retrieve. If there are no
     * more results, the value is null.</p>
     */
    inline ListTargetsByRuleResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Target> m_targets;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
