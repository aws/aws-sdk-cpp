/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/Target.h>

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
  /**
   * <p>The result of the <a>ListTargetsByRule</a> operation.</p>
   */
  class AWS_CLOUDWATCHEVENTS_API ListTargetsByRuleResult
  {
  public:
    ListTargetsByRuleResult();
    ListTargetsByRuleResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTargetsByRuleResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Lists the targets assigned to the rule.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <p>Lists the targets assigned to the rule.</p>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targets = value; }

    /**
     * <p>Lists the targets assigned to the rule.</p>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targets = value; }

    /**
     * <p>Lists the targets assigned to the rule.</p>
     */
    inline ListTargetsByRuleResult& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>Lists the targets assigned to the rule.</p>
     */
    inline ListTargetsByRuleResult& WithTargets(Aws::Vector<Target>&& value) { SetTargets(value); return *this;}

    /**
     * <p>Lists the targets assigned to the rule.</p>
     */
    inline ListTargetsByRuleResult& AddTargets(const Target& value) { m_targets.push_back(value); return *this; }

    /**
     * <p>Lists the targets assigned to the rule.</p>
     */
    inline ListTargetsByRuleResult& AddTargets(Target&& value) { m_targets.push_back(value); return *this; }

    /**
     * <p>Indicates that there are additional results to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Indicates that there are additional results to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Indicates that there are additional results to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>Indicates that there are additional results to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Indicates that there are additional results to retrieve.</p>
     */
    inline ListTargetsByRuleResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Indicates that there are additional results to retrieve.</p>
     */
    inline ListTargetsByRuleResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>Indicates that there are additional results to retrieve.</p>
     */
    inline ListTargetsByRuleResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Target> m_targets;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
