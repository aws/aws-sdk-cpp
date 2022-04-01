﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/RuleSummary.h>
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
namespace WAFRegional
{
namespace Model
{
  class AWS_WAFREGIONAL_API ListRateBasedRulesResult
  {
  public:
    ListRateBasedRulesResult();
    ListRateBasedRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListRateBasedRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If you have more <code>Rules</code> than the number that you specified for
     * <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>Rules</code>, submit another
     * <code>ListRateBasedRules</code> request, and specify the <code>NextMarker</code>
     * value from the response in the <code>NextMarker</code> value in the next
     * request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If you have more <code>Rules</code> than the number that you specified for
     * <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>Rules</code>, submit another
     * <code>ListRateBasedRules</code> request, and specify the <code>NextMarker</code>
     * value from the response in the <code>NextMarker</code> value in the next
     * request.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>If you have more <code>Rules</code> than the number that you specified for
     * <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>Rules</code>, submit another
     * <code>ListRateBasedRules</code> request, and specify the <code>NextMarker</code>
     * value from the response in the <code>NextMarker</code> value in the next
     * request.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>If you have more <code>Rules</code> than the number that you specified for
     * <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>Rules</code>, submit another
     * <code>ListRateBasedRules</code> request, and specify the <code>NextMarker</code>
     * value from the response in the <code>NextMarker</code> value in the next
     * request.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>If you have more <code>Rules</code> than the number that you specified for
     * <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>Rules</code>, submit another
     * <code>ListRateBasedRules</code> request, and specify the <code>NextMarker</code>
     * value from the response in the <code>NextMarker</code> value in the next
     * request.</p>
     */
    inline ListRateBasedRulesResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If you have more <code>Rules</code> than the number that you specified for
     * <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>Rules</code>, submit another
     * <code>ListRateBasedRules</code> request, and specify the <code>NextMarker</code>
     * value from the response in the <code>NextMarker</code> value in the next
     * request.</p>
     */
    inline ListRateBasedRulesResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If you have more <code>Rules</code> than the number that you specified for
     * <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>Rules</code>, submit another
     * <code>ListRateBasedRules</code> request, and specify the <code>NextMarker</code>
     * value from the response in the <code>NextMarker</code> value in the next
     * request.</p>
     */
    inline ListRateBasedRulesResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


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
    inline void SetRules(Aws::Vector<RuleSummary>&& value) { m_rules = std::move(value); }

    /**
     * <p>An array of <a>RuleSummary</a> objects.</p>
     */
    inline ListRateBasedRulesResult& WithRules(const Aws::Vector<RuleSummary>& value) { SetRules(value); return *this;}

    /**
     * <p>An array of <a>RuleSummary</a> objects.</p>
     */
    inline ListRateBasedRulesResult& WithRules(Aws::Vector<RuleSummary>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>An array of <a>RuleSummary</a> objects.</p>
     */
    inline ListRateBasedRulesResult& AddRules(const RuleSummary& value) { m_rules.push_back(value); return *this; }

    /**
     * <p>An array of <a>RuleSummary</a> objects.</p>
     */
    inline ListRateBasedRulesResult& AddRules(RuleSummary&& value) { m_rules.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextMarker;

    Aws::Vector<RuleSummary> m_rules;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
