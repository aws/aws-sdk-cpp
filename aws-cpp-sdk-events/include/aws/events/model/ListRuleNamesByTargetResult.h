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
  class AWS_CLOUDWATCHEVENTS_API ListRuleNamesByTargetResult
  {
  public:
    ListRuleNamesByTargetResult();
    ListRuleNamesByTargetResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListRuleNamesByTargetResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <zonbook> <simpara>The names of the rules that can invoke the given
     * target.</simpara> </zonbook> <xhtml> <p>The names of the rules that can invoke
     * the given target.</p> </xhtml>
     */
    inline const Aws::Vector<Aws::String>& GetRuleNames() const{ return m_ruleNames; }

    /**
     * <zonbook> <simpara>The names of the rules that can invoke the given
     * target.</simpara> </zonbook> <xhtml> <p>The names of the rules that can invoke
     * the given target.</p> </xhtml>
     */
    inline void SetRuleNames(const Aws::Vector<Aws::String>& value) { m_ruleNames = value; }

    /**
     * <zonbook> <simpara>The names of the rules that can invoke the given
     * target.</simpara> </zonbook> <xhtml> <p>The names of the rules that can invoke
     * the given target.</p> </xhtml>
     */
    inline void SetRuleNames(Aws::Vector<Aws::String>&& value) { m_ruleNames = value; }

    /**
     * <zonbook> <simpara>The names of the rules that can invoke the given
     * target.</simpara> </zonbook> <xhtml> <p>The names of the rules that can invoke
     * the given target.</p> </xhtml>
     */
    inline ListRuleNamesByTargetResult& WithRuleNames(const Aws::Vector<Aws::String>& value) { SetRuleNames(value); return *this;}

    /**
     * <zonbook> <simpara>The names of the rules that can invoke the given
     * target.</simpara> </zonbook> <xhtml> <p>The names of the rules that can invoke
     * the given target.</p> </xhtml>
     */
    inline ListRuleNamesByTargetResult& WithRuleNames(Aws::Vector<Aws::String>&& value) { SetRuleNames(value); return *this;}

    /**
     * <zonbook> <simpara>The names of the rules that can invoke the given
     * target.</simpara> </zonbook> <xhtml> <p>The names of the rules that can invoke
     * the given target.</p> </xhtml>
     */
    inline ListRuleNamesByTargetResult& AddRuleNames(const Aws::String& value) { m_ruleNames.push_back(value); return *this; }

    /**
     * <zonbook> <simpara>The names of the rules that can invoke the given
     * target.</simpara> </zonbook> <xhtml> <p>The names of the rules that can invoke
     * the given target.</p> </xhtml>
     */
    inline ListRuleNamesByTargetResult& AddRuleNames(Aws::String&& value) { m_ruleNames.push_back(value); return *this; }

    /**
     * <zonbook> <simpara>The names of the rules that can invoke the given
     * target.</simpara> </zonbook> <xhtml> <p>The names of the rules that can invoke
     * the given target.</p> </xhtml>
     */
    inline ListRuleNamesByTargetResult& AddRuleNames(const char* value) { m_ruleNames.push_back(value); return *this; }

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
    inline ListRuleNamesByTargetResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <zonbook> <simpara>Indicates whether there are additional results to retrieve.
     * If there are no more results, the value is null.</simpara> </zonbook> <xhtml>
     * <p>Indicates whether there are additional results to retrieve. If there are no
     * more results, the value is null.</p> </xhtml>
     */
    inline ListRuleNamesByTargetResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <zonbook> <simpara>Indicates whether there are additional results to retrieve.
     * If there are no more results, the value is null.</simpara> </zonbook> <xhtml>
     * <p>Indicates whether there are additional results to retrieve. If there are no
     * more results, the value is null.</p> </xhtml>
     */
    inline ListRuleNamesByTargetResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_ruleNames;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
