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
  class AWS_CLOUDWATCHEVENTS_API ListTargetsByRuleResult
  {
  public:
    ListTargetsByRuleResult();
    ListTargetsByRuleResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTargetsByRuleResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <zonbook> <simpara>The targets assigned to the rule.</simpara> </zonbook>
     * <xhtml> <p>The targets assigned to the rule.</p> </xhtml>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <zonbook> <simpara>The targets assigned to the rule.</simpara> </zonbook>
     * <xhtml> <p>The targets assigned to the rule.</p> </xhtml>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targets = value; }

    /**
     * <zonbook> <simpara>The targets assigned to the rule.</simpara> </zonbook>
     * <xhtml> <p>The targets assigned to the rule.</p> </xhtml>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targets = value; }

    /**
     * <zonbook> <simpara>The targets assigned to the rule.</simpara> </zonbook>
     * <xhtml> <p>The targets assigned to the rule.</p> </xhtml>
     */
    inline ListTargetsByRuleResult& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <zonbook> <simpara>The targets assigned to the rule.</simpara> </zonbook>
     * <xhtml> <p>The targets assigned to the rule.</p> </xhtml>
     */
    inline ListTargetsByRuleResult& WithTargets(Aws::Vector<Target>&& value) { SetTargets(value); return *this;}

    /**
     * <zonbook> <simpara>The targets assigned to the rule.</simpara> </zonbook>
     * <xhtml> <p>The targets assigned to the rule.</p> </xhtml>
     */
    inline ListTargetsByRuleResult& AddTargets(const Target& value) { m_targets.push_back(value); return *this; }

    /**
     * <zonbook> <simpara>The targets assigned to the rule.</simpara> </zonbook>
     * <xhtml> <p>The targets assigned to the rule.</p> </xhtml>
     */
    inline ListTargetsByRuleResult& AddTargets(Target&& value) { m_targets.push_back(value); return *this; }

    /**
     * <zonbook> <simpara>Indicates whether there are additional results to retrieve.
     * If there are no more results, the value is null.</simpara> </zonbook> <xhtml>
     * <p>Indicates whether there are additional results to retrieve. If there are no
     * more results, the value is null.</p> </xhtml>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <zonbook> <simpara>Indicates whether there are additional results to retrieve.
     * If there are no more results, the value is null.</simpara> </zonbook> <xhtml>
     * <p>Indicates whether there are additional results to retrieve. If there are no
     * more results, the value is null.</p> </xhtml>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <zonbook> <simpara>Indicates whether there are additional results to retrieve.
     * If there are no more results, the value is null.</simpara> </zonbook> <xhtml>
     * <p>Indicates whether there are additional results to retrieve. If there are no
     * more results, the value is null.</p> </xhtml>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <zonbook> <simpara>Indicates whether there are additional results to retrieve.
     * If there are no more results, the value is null.</simpara> </zonbook> <xhtml>
     * <p>Indicates whether there are additional results to retrieve. If there are no
     * more results, the value is null.</p> </xhtml>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <zonbook> <simpara>Indicates whether there are additional results to retrieve.
     * If there are no more results, the value is null.</simpara> </zonbook> <xhtml>
     * <p>Indicates whether there are additional results to retrieve. If there are no
     * more results, the value is null.</p> </xhtml>
     */
    inline ListTargetsByRuleResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <zonbook> <simpara>Indicates whether there are additional results to retrieve.
     * If there are no more results, the value is null.</simpara> </zonbook> <xhtml>
     * <p>Indicates whether there are additional results to retrieve. If there are no
     * more results, the value is null.</p> </xhtml>
     */
    inline ListTargetsByRuleResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <zonbook> <simpara>Indicates whether there are additional results to retrieve.
     * If there are no more results, the value is null.</simpara> </zonbook> <xhtml>
     * <p>Indicates whether there are additional results to retrieve. If there are no
     * more results, the value is null.</p> </xhtml>
     */
    inline ListTargetsByRuleResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Target> m_targets;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
