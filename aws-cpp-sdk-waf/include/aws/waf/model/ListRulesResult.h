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
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/RuleSummary.h>

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
namespace WAF
{
namespace Model
{
  class AWS_WAF_API ListRulesResult
  {
  public:
    ListRulesResult();
    ListRulesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListRulesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>If you have more <code>Rules</code> than the number that you specified for
     * <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>Rules</code>, submit another
     * <code>ListRules</code> request, and specify the <code>NextMarker</code> value
     * from the response in the <code>NextMarker</code> value in the next request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If you have more <code>Rules</code> than the number that you specified for
     * <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>Rules</code>, submit another
     * <code>ListRules</code> request, and specify the <code>NextMarker</code> value
     * from the response in the <code>NextMarker</code> value in the next request.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>If you have more <code>Rules</code> than the number that you specified for
     * <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>Rules</code>, submit another
     * <code>ListRules</code> request, and specify the <code>NextMarker</code> value
     * from the response in the <code>NextMarker</code> value in the next request.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = value; }

    /**
     * <p>If you have more <code>Rules</code> than the number that you specified for
     * <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>Rules</code>, submit another
     * <code>ListRules</code> request, and specify the <code>NextMarker</code> value
     * from the response in the <code>NextMarker</code> value in the next request.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>If you have more <code>Rules</code> than the number that you specified for
     * <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>Rules</code>, submit another
     * <code>ListRules</code> request, and specify the <code>NextMarker</code> value
     * from the response in the <code>NextMarker</code> value in the next request.</p>
     */
    inline ListRulesResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If you have more <code>Rules</code> than the number that you specified for
     * <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>Rules</code>, submit another
     * <code>ListRules</code> request, and specify the <code>NextMarker</code> value
     * from the response in the <code>NextMarker</code> value in the next request.</p>
     */
    inline ListRulesResult& WithNextMarker(Aws::String&& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If you have more <code>Rules</code> than the number that you specified for
     * <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>Rules</code>, submit another
     * <code>ListRules</code> request, and specify the <code>NextMarker</code> value
     * from the response in the <code>NextMarker</code> value in the next request.</p>
     */
    inline ListRulesResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

    /**
     * <p>An array of <a>RuleSummary</a> objects.</p>
     */
    inline const Aws::Vector<RuleSummary>& GetRules() const{ return m_rules; }

    /**
     * <p>An array of <a>RuleSummary</a> objects.</p>
     */
    inline void SetRules(const Aws::Vector<RuleSummary>& value) { m_rules = value; }

    /**
     * <p>An array of <a>RuleSummary</a> objects.</p>
     */
    inline void SetRules(Aws::Vector<RuleSummary>&& value) { m_rules = value; }

    /**
     * <p>An array of <a>RuleSummary</a> objects.</p>
     */
    inline ListRulesResult& WithRules(const Aws::Vector<RuleSummary>& value) { SetRules(value); return *this;}

    /**
     * <p>An array of <a>RuleSummary</a> objects.</p>
     */
    inline ListRulesResult& WithRules(Aws::Vector<RuleSummary>&& value) { SetRules(value); return *this;}

    /**
     * <p>An array of <a>RuleSummary</a> objects.</p>
     */
    inline ListRulesResult& AddRules(const RuleSummary& value) { m_rules.push_back(value); return *this; }

    /**
     * <p>An array of <a>RuleSummary</a> objects.</p>
     */
    inline ListRulesResult& AddRules(RuleSummary&& value) { m_rules.push_back(value); return *this; }

  private:
    Aws::String m_nextMarker;
    Aws::Vector<RuleSummary> m_rules;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
