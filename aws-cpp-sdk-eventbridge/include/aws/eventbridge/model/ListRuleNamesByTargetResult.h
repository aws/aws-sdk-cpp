/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/eventbridge/EventBridge_EXPORTS.h>
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
namespace EventBridge
{
namespace Model
{
  class AWS_EVENTBRIDGE_API ListRuleNamesByTargetResult
  {
  public:
    ListRuleNamesByTargetResult();
    ListRuleNamesByTargetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListRuleNamesByTargetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The names of the rules that can invoke the given target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRuleNames() const{ return m_ruleNames; }

    /**
     * <p>The names of the rules that can invoke the given target.</p>
     */
    inline void SetRuleNames(const Aws::Vector<Aws::String>& value) { m_ruleNames = value; }

    /**
     * <p>The names of the rules that can invoke the given target.</p>
     */
    inline void SetRuleNames(Aws::Vector<Aws::String>&& value) { m_ruleNames = std::move(value); }

    /**
     * <p>The names of the rules that can invoke the given target.</p>
     */
    inline ListRuleNamesByTargetResult& WithRuleNames(const Aws::Vector<Aws::String>& value) { SetRuleNames(value); return *this;}

    /**
     * <p>The names of the rules that can invoke the given target.</p>
     */
    inline ListRuleNamesByTargetResult& WithRuleNames(Aws::Vector<Aws::String>&& value) { SetRuleNames(std::move(value)); return *this;}

    /**
     * <p>The names of the rules that can invoke the given target.</p>
     */
    inline ListRuleNamesByTargetResult& AddRuleNames(const Aws::String& value) { m_ruleNames.push_back(value); return *this; }

    /**
     * <p>The names of the rules that can invoke the given target.</p>
     */
    inline ListRuleNamesByTargetResult& AddRuleNames(Aws::String&& value) { m_ruleNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the rules that can invoke the given target.</p>
     */
    inline ListRuleNamesByTargetResult& AddRuleNames(const char* value) { m_ruleNames.push_back(value); return *this; }


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
    inline ListRuleNamesByTargetResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Indicates whether there are additional results to retrieve. If there are no
     * more results, the value is null.</p>
     */
    inline ListRuleNamesByTargetResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Indicates whether there are additional results to retrieve. If there are no
     * more results, the value is null.</p>
     */
    inline ListRuleNamesByTargetResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_ruleNames;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
