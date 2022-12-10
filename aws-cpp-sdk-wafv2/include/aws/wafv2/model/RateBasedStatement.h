/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/RateBasedStatementAggregateKeyType.h>
#include <aws/wafv2/model/ForwardedIPConfig.h>
#include <utility>
#include <memory>

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
   * <p>A rate-based rule tracks the rate of requests for each originating IP
   * address, and triggers the rule action when the rate exceeds a limit that you
   * specify on the number of requests in any 5-minute time span. You can use this to
   * put a temporary block on requests from an IP address that is sending excessive
   * requests. </p> <p>WAF tracks and manages web requests separately for each
   * instance of a rate-based rule that you use. For example, if you provide the same
   * rate-based rule settings in two web ACLs, each of the two rule statements
   * represents a separate instance of the rate-based rule and gets its own tracking
   * and management by WAF. If you define a rate-based rule inside a rule group, and
   * then use that rule group in multiple places, each use creates a separate
   * instance of the rate-based rule that gets its own tracking and management by
   * WAF. </p> <p>When the rule action triggers, WAF blocks additional requests from
   * the IP address until the request rate falls below the limit.</p> <p>You can
   * optionally nest another statement inside the rate-based statement, to narrow the
   * scope of the rule so that it only counts requests that match the nested
   * statement. For example, based on recent requests that you have seen from an
   * attacker, you might create a rate-based rule with a nested AND rule statement
   * that contains the following nested statements:</p> <ul> <li> <p>An IP match
   * statement with an IP set that specified the address 192.0.2.44.</p> </li> <li>
   * <p>A string match statement that searches in the User-Agent header for the
   * string BadBot.</p> </li> </ul> <p>In this rate-based rule, you also define a
   * rate limit. For this example, the rate limit is 1,000. Requests that meet the
   * criteria of both of the nested statements are counted. If the count exceeds
   * 1,000 requests per five minutes, the rule action triggers. Requests that do not
   * meet the criteria of both of the nested statements are not counted towards the
   * rate limit and are not affected by this rule.</p> <p>You cannot nest a
   * <code>RateBasedStatement</code> inside another statement, for example inside a
   * <code>NotStatement</code> or <code>OrStatement</code>. You can define a
   * <code>RateBasedStatement</code> inside a web ACL and inside a rule group.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RateBasedStatement">AWS
   * API Reference</a></p>
   */
  class RateBasedStatement
  {
  public:
    AWS_WAFV2_API RateBasedStatement();
    AWS_WAFV2_API RateBasedStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RateBasedStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The limit on requests per 5-minute period for a single originating IP
     * address. If the statement includes a <code>ScopeDownStatement</code>, this limit
     * is applied only to the requests that match the statement.</p>
     */
    inline long long GetLimit() const{ return m_limit; }

    /**
     * <p>The limit on requests per 5-minute period for a single originating IP
     * address. If the statement includes a <code>ScopeDownStatement</code>, this limit
     * is applied only to the requests that match the statement.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The limit on requests per 5-minute period for a single originating IP
     * address. If the statement includes a <code>ScopeDownStatement</code>, this limit
     * is applied only to the requests that match the statement.</p>
     */
    inline void SetLimit(long long value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The limit on requests per 5-minute period for a single originating IP
     * address. If the statement includes a <code>ScopeDownStatement</code>, this limit
     * is applied only to the requests that match the statement.</p>
     */
    inline RateBasedStatement& WithLimit(long long value) { SetLimit(value); return *this;}


    /**
     * <p>Setting that indicates how to aggregate the request counts. The options are
     * the following:</p> <ul> <li> <p>IP - Aggregate the request counts on the IP
     * address from the web request origin.</p> </li> <li> <p>FORWARDED_IP - Aggregate
     * the request counts on the first IP address in an HTTP header. If you use this,
     * configure the <code>ForwardedIPConfig</code>, to specify the header to use. </p>
     * </li> </ul>
     */
    inline const RateBasedStatementAggregateKeyType& GetAggregateKeyType() const{ return m_aggregateKeyType; }

    /**
     * <p>Setting that indicates how to aggregate the request counts. The options are
     * the following:</p> <ul> <li> <p>IP - Aggregate the request counts on the IP
     * address from the web request origin.</p> </li> <li> <p>FORWARDED_IP - Aggregate
     * the request counts on the first IP address in an HTTP header. If you use this,
     * configure the <code>ForwardedIPConfig</code>, to specify the header to use. </p>
     * </li> </ul>
     */
    inline bool AggregateKeyTypeHasBeenSet() const { return m_aggregateKeyTypeHasBeenSet; }

    /**
     * <p>Setting that indicates how to aggregate the request counts. The options are
     * the following:</p> <ul> <li> <p>IP - Aggregate the request counts on the IP
     * address from the web request origin.</p> </li> <li> <p>FORWARDED_IP - Aggregate
     * the request counts on the first IP address in an HTTP header. If you use this,
     * configure the <code>ForwardedIPConfig</code>, to specify the header to use. </p>
     * </li> </ul>
     */
    inline void SetAggregateKeyType(const RateBasedStatementAggregateKeyType& value) { m_aggregateKeyTypeHasBeenSet = true; m_aggregateKeyType = value; }

    /**
     * <p>Setting that indicates how to aggregate the request counts. The options are
     * the following:</p> <ul> <li> <p>IP - Aggregate the request counts on the IP
     * address from the web request origin.</p> </li> <li> <p>FORWARDED_IP - Aggregate
     * the request counts on the first IP address in an HTTP header. If you use this,
     * configure the <code>ForwardedIPConfig</code>, to specify the header to use. </p>
     * </li> </ul>
     */
    inline void SetAggregateKeyType(RateBasedStatementAggregateKeyType&& value) { m_aggregateKeyTypeHasBeenSet = true; m_aggregateKeyType = std::move(value); }

    /**
     * <p>Setting that indicates how to aggregate the request counts. The options are
     * the following:</p> <ul> <li> <p>IP - Aggregate the request counts on the IP
     * address from the web request origin.</p> </li> <li> <p>FORWARDED_IP - Aggregate
     * the request counts on the first IP address in an HTTP header. If you use this,
     * configure the <code>ForwardedIPConfig</code>, to specify the header to use. </p>
     * </li> </ul>
     */
    inline RateBasedStatement& WithAggregateKeyType(const RateBasedStatementAggregateKeyType& value) { SetAggregateKeyType(value); return *this;}

    /**
     * <p>Setting that indicates how to aggregate the request counts. The options are
     * the following:</p> <ul> <li> <p>IP - Aggregate the request counts on the IP
     * address from the web request origin.</p> </li> <li> <p>FORWARDED_IP - Aggregate
     * the request counts on the first IP address in an HTTP header. If you use this,
     * configure the <code>ForwardedIPConfig</code>, to specify the header to use. </p>
     * </li> </ul>
     */
    inline RateBasedStatement& WithAggregateKeyType(RateBasedStatementAggregateKeyType&& value) { SetAggregateKeyType(std::move(value)); return *this;}


    /**
     * <p>An optional nested statement that narrows the scope of the web requests that
     * are evaluated by the rate-based statement. Requests are only tracked by the
     * rate-based statement if they match the scope-down statement. You can use any
     * nestable <a>Statement</a> in the scope-down statement, and you can nest
     * statements at any level, the same as you can for a rule statement. </p>
     */
    AWS_WAFV2_API const Statement& GetScopeDownStatement() const;

    /**
     * <p>An optional nested statement that narrows the scope of the web requests that
     * are evaluated by the rate-based statement. Requests are only tracked by the
     * rate-based statement if they match the scope-down statement. You can use any
     * nestable <a>Statement</a> in the scope-down statement, and you can nest
     * statements at any level, the same as you can for a rule statement. </p>
     */
    AWS_WAFV2_API bool ScopeDownStatementHasBeenSet() const;

    /**
     * <p>An optional nested statement that narrows the scope of the web requests that
     * are evaluated by the rate-based statement. Requests are only tracked by the
     * rate-based statement if they match the scope-down statement. You can use any
     * nestable <a>Statement</a> in the scope-down statement, and you can nest
     * statements at any level, the same as you can for a rule statement. </p>
     */
    AWS_WAFV2_API void SetScopeDownStatement(const Statement& value);

    /**
     * <p>An optional nested statement that narrows the scope of the web requests that
     * are evaluated by the rate-based statement. Requests are only tracked by the
     * rate-based statement if they match the scope-down statement. You can use any
     * nestable <a>Statement</a> in the scope-down statement, and you can nest
     * statements at any level, the same as you can for a rule statement. </p>
     */
    AWS_WAFV2_API void SetScopeDownStatement(Statement&& value);

    /**
     * <p>An optional nested statement that narrows the scope of the web requests that
     * are evaluated by the rate-based statement. Requests are only tracked by the
     * rate-based statement if they match the scope-down statement. You can use any
     * nestable <a>Statement</a> in the scope-down statement, and you can nest
     * statements at any level, the same as you can for a rule statement. </p>
     */
    AWS_WAFV2_API RateBasedStatement& WithScopeDownStatement(const Statement& value);

    /**
     * <p>An optional nested statement that narrows the scope of the web requests that
     * are evaluated by the rate-based statement. Requests are only tracked by the
     * rate-based statement if they match the scope-down statement. You can use any
     * nestable <a>Statement</a> in the scope-down statement, and you can nest
     * statements at any level, the same as you can for a rule statement. </p>
     */
    AWS_WAFV2_API RateBasedStatement& WithScopeDownStatement(Statement&& value);


    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, WAF doesn't apply the rule to the web request at all.</p> 
     * <p>This is required if <code>AggregateKeyType</code> is set to
     * <code>FORWARDED_IP</code>.</p>
     */
    inline const ForwardedIPConfig& GetForwardedIPConfig() const{ return m_forwardedIPConfig; }

    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, WAF doesn't apply the rule to the web request at all.</p> 
     * <p>This is required if <code>AggregateKeyType</code> is set to
     * <code>FORWARDED_IP</code>.</p>
     */
    inline bool ForwardedIPConfigHasBeenSet() const { return m_forwardedIPConfigHasBeenSet; }

    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, WAF doesn't apply the rule to the web request at all.</p> 
     * <p>This is required if <code>AggregateKeyType</code> is set to
     * <code>FORWARDED_IP</code>.</p>
     */
    inline void SetForwardedIPConfig(const ForwardedIPConfig& value) { m_forwardedIPConfigHasBeenSet = true; m_forwardedIPConfig = value; }

    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, WAF doesn't apply the rule to the web request at all.</p> 
     * <p>This is required if <code>AggregateKeyType</code> is set to
     * <code>FORWARDED_IP</code>.</p>
     */
    inline void SetForwardedIPConfig(ForwardedIPConfig&& value) { m_forwardedIPConfigHasBeenSet = true; m_forwardedIPConfig = std::move(value); }

    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, WAF doesn't apply the rule to the web request at all.</p> 
     * <p>This is required if <code>AggregateKeyType</code> is set to
     * <code>FORWARDED_IP</code>.</p>
     */
    inline RateBasedStatement& WithForwardedIPConfig(const ForwardedIPConfig& value) { SetForwardedIPConfig(value); return *this;}

    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, WAF doesn't apply the rule to the web request at all.</p> 
     * <p>This is required if <code>AggregateKeyType</code> is set to
     * <code>FORWARDED_IP</code>.</p>
     */
    inline RateBasedStatement& WithForwardedIPConfig(ForwardedIPConfig&& value) { SetForwardedIPConfig(std::move(value)); return *this;}

  private:

    long long m_limit;
    bool m_limitHasBeenSet = false;

    RateBasedStatementAggregateKeyType m_aggregateKeyType;
    bool m_aggregateKeyTypeHasBeenSet = false;

    std::shared_ptr<Statement> m_scopeDownStatement;
    bool m_scopeDownStatementHasBeenSet = false;

    ForwardedIPConfig m_forwardedIPConfig;
    bool m_forwardedIPConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
