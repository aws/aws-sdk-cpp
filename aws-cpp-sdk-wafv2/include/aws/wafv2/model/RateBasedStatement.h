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
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/RateBasedStatementAggregateKeyType.h>
#include <aws/wafv2/model/Statement.h>
#include <utility>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WAFV2
{
namespace Model
{
  class Statement;

  /**
   * <note> <p>This is the latest version of <b>AWS WAF</b>, named AWS WAFV2,
   * released in November, 2019. For information, including how to migrate your AWS
   * WAF resources from the prior release, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. </p> </note> <p>A rate-based rule tracks the rate of
   * requests for each originating IP address, and triggers the rule action when the
   * rate exceeds a limit that you specify on the number of requests in any 5-minute
   * time span. You can use this to put a temporary block on requests from an IP
   * address that is sending excessive requests.</p> <p>When the rule action
   * triggers, AWS WAF blocks additional requests from the IP address until the
   * request rate falls below the limit.</p> <p>You can optionally nest another
   * statement inside the rate-based statement, to narrow the scope of the rule so
   * that it only counts requests that match the nested statement. For example, based
   * on recent requests that you have seen from an attacker, you might create a
   * rate-based rule with a nested AND rule statement that contains the following
   * nested statements:</p> <ul> <li> <p>An IP match statement with an IP set that
   * specified the address 192.0.2.44.</p> </li> <li> <p>A string match statement
   * that searches in the User-Agent header for the string BadBot.</p> </li> </ul>
   * <p>In this rate-based rule, you also define a rate limit. For this example, the
   * rate limit is 1,000. Requests that meet both of the conditions in the statements
   * are counted. If the count exceeds 1,000 requests per five minutes, the rule
   * action triggers. Requests that do not meet both conditions are not counted
   * towards the rate limit and are not affected by this rule.</p> <p>You cannot nest
   * a <code>RateBasedStatement</code>, for example for use inside a
   * <code>NotStatement</code> or <code>OrStatement</code>. It can only be referenced
   * as a top-level statement within a rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RateBasedStatement">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API RateBasedStatement
  {
  public:
    RateBasedStatement();
    RateBasedStatement(Aws::Utils::Json::JsonView jsonValue);
    RateBasedStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The limit on requests per 5-minute period for a single originating IP
     * address. If the statement includes a <code>ScopDownStatement</code>, this limit
     * is applied only to the requests that match the statement.</p>
     */
    inline long long GetLimit() const{ return m_limit; }

    /**
     * <p>The limit on requests per 5-minute period for a single originating IP
     * address. If the statement includes a <code>ScopDownStatement</code>, this limit
     * is applied only to the requests that match the statement.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The limit on requests per 5-minute period for a single originating IP
     * address. If the statement includes a <code>ScopDownStatement</code>, this limit
     * is applied only to the requests that match the statement.</p>
     */
    inline void SetLimit(long long value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The limit on requests per 5-minute period for a single originating IP
     * address. If the statement includes a <code>ScopDownStatement</code>, this limit
     * is applied only to the requests that match the statement.</p>
     */
    inline RateBasedStatement& WithLimit(long long value) { SetLimit(value); return *this;}


    /**
     * <p>Setting that indicates how to aggregate the request counts. Currently, you
     * must set this to <code>IP</code>. The request counts are aggregated on IP
     * addresses. </p>
     */
    inline const RateBasedStatementAggregateKeyType& GetAggregateKeyType() const{ return m_aggregateKeyType; }

    /**
     * <p>Setting that indicates how to aggregate the request counts. Currently, you
     * must set this to <code>IP</code>. The request counts are aggregated on IP
     * addresses. </p>
     */
    inline bool AggregateKeyTypeHasBeenSet() const { return m_aggregateKeyTypeHasBeenSet; }

    /**
     * <p>Setting that indicates how to aggregate the request counts. Currently, you
     * must set this to <code>IP</code>. The request counts are aggregated on IP
     * addresses. </p>
     */
    inline void SetAggregateKeyType(const RateBasedStatementAggregateKeyType& value) { m_aggregateKeyTypeHasBeenSet = true; m_aggregateKeyType = value; }

    /**
     * <p>Setting that indicates how to aggregate the request counts. Currently, you
     * must set this to <code>IP</code>. The request counts are aggregated on IP
     * addresses. </p>
     */
    inline void SetAggregateKeyType(RateBasedStatementAggregateKeyType&& value) { m_aggregateKeyTypeHasBeenSet = true; m_aggregateKeyType = std::move(value); }

    /**
     * <p>Setting that indicates how to aggregate the request counts. Currently, you
     * must set this to <code>IP</code>. The request counts are aggregated on IP
     * addresses. </p>
     */
    inline RateBasedStatement& WithAggregateKeyType(const RateBasedStatementAggregateKeyType& value) { SetAggregateKeyType(value); return *this;}

    /**
     * <p>Setting that indicates how to aggregate the request counts. Currently, you
     * must set this to <code>IP</code>. The request counts are aggregated on IP
     * addresses. </p>
     */
    inline RateBasedStatement& WithAggregateKeyType(RateBasedStatementAggregateKeyType&& value) { SetAggregateKeyType(std::move(value)); return *this;}


    /**
     * <p>An optional nested statement that narrows the scope of the rate-based
     * statement to matching web requests. This can be any nestable statement, and you
     * can nest statements at any level below this scope-down statement.</p>
     */
    const Statement& GetScopeDownStatement() const;

    /**
     * <p>An optional nested statement that narrows the scope of the rate-based
     * statement to matching web requests. This can be any nestable statement, and you
     * can nest statements at any level below this scope-down statement.</p>
     */
    bool ScopeDownStatementHasBeenSet() const;

    /**
     * <p>An optional nested statement that narrows the scope of the rate-based
     * statement to matching web requests. This can be any nestable statement, and you
     * can nest statements at any level below this scope-down statement.</p>
     */
    void SetScopeDownStatement(const Statement& value);

    /**
     * <p>An optional nested statement that narrows the scope of the rate-based
     * statement to matching web requests. This can be any nestable statement, and you
     * can nest statements at any level below this scope-down statement.</p>
     */
    void SetScopeDownStatement(Statement&& value);

    /**
     * <p>An optional nested statement that narrows the scope of the rate-based
     * statement to matching web requests. This can be any nestable statement, and you
     * can nest statements at any level below this scope-down statement.</p>
     */
    RateBasedStatement& WithScopeDownStatement(const Statement& value);

    /**
     * <p>An optional nested statement that narrows the scope of the rate-based
     * statement to matching web requests. This can be any nestable statement, and you
     * can nest statements at any level below this scope-down statement.</p>
     */
    RateBasedStatement& WithScopeDownStatement(Statement&& value);

  private:

    long long m_limit;
    bool m_limitHasBeenSet;

    RateBasedStatementAggregateKeyType m_aggregateKeyType;
    bool m_aggregateKeyTypeHasBeenSet;

    Aws::Vector<Statement> m_scopeDownStatement;
    bool m_scopeDownStatementHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
