﻿/*
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
#include <aws/events/model/Rule.h>

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
   * <p>The result of the <a>ListRules</a> operation.</p>
   */
  class AWS_CLOUDWATCHEVENTS_API ListRulesResult
  {
  public:
    ListRulesResult();
    ListRulesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListRulesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>List of rules matching the specified criteria.</p>
     */
    inline const Aws::Vector<Rule>& GetRules() const{ return m_rules; }

    /**
     * <p>List of rules matching the specified criteria.</p>
     */
    inline void SetRules(const Aws::Vector<Rule>& value) { m_rules = value; }

    /**
     * <p>List of rules matching the specified criteria.</p>
     */
    inline void SetRules(Aws::Vector<Rule>&& value) { m_rules = value; }

    /**
     * <p>List of rules matching the specified criteria.</p>
     */
    inline ListRulesResult& WithRules(const Aws::Vector<Rule>& value) { SetRules(value); return *this;}

    /**
     * <p>List of rules matching the specified criteria.</p>
     */
    inline ListRulesResult& WithRules(Aws::Vector<Rule>&& value) { SetRules(value); return *this;}

    /**
     * <p>List of rules matching the specified criteria.</p>
     */
    inline ListRulesResult& AddRules(const Rule& value) { m_rules.push_back(value); return *this; }

    /**
     * <p>List of rules matching the specified criteria.</p>
     */
    inline ListRulesResult& AddRules(Rule&& value) { m_rules.push_back(value); return *this; }

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
    inline ListRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Indicates that there are additional results to retrieve.</p>
     */
    inline ListRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>Indicates that there are additional results to retrieve.</p>
     */
    inline ListRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Rule> m_rules;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
