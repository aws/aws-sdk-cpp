/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/ByteMatchStatement.h>
#include <aws/wafv2/model/SqliMatchStatement.h>
#include <aws/wafv2/model/XssMatchStatement.h>
#include <aws/wafv2/model/SizeConstraintStatement.h>
#include <aws/wafv2/model/GeoMatchStatement.h>
#include <aws/wafv2/model/RuleGroupReferenceStatement.h>
#include <aws/wafv2/model/IPSetReferenceStatement.h>
#include <aws/wafv2/model/RegexPatternSetReferenceStatement.h>
#include <aws/wafv2/model/LabelMatchStatement.h>
#include <aws/wafv2/model/RegexMatchStatement.h>
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
  class RateBasedStatement;
  class AndStatement;
  class OrStatement;
  class NotStatement;
  class ManagedRuleGroupStatement;

  /**
   * <p>The processing guidance for a <a>Rule</a>, used by WAF to determine whether a
   * web request matches the rule. </p> <p>For example specifications, see the
   * examples section of <a>CreateWebACL</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/Statement">AWS API
   * Reference</a></p>
   */
  class Statement
  {
  public:
    AWS_WAFV2_API Statement();
    AWS_WAFV2_API Statement(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Statement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A rule statement that defines a string match search for WAF to apply to web
     * requests. The byte match statement provides the bytes to search for, the
     * location in requests that you want WAF to search, and other settings. The bytes
     * to search for are typically a string that corresponds with ASCII characters. In
     * the WAF console and the developer guide, this is called a string match
     * statement.</p>
     */
    inline const ByteMatchStatement& GetByteMatchStatement() const{ return m_byteMatchStatement; }

    /**
     * <p>A rule statement that defines a string match search for WAF to apply to web
     * requests. The byte match statement provides the bytes to search for, the
     * location in requests that you want WAF to search, and other settings. The bytes
     * to search for are typically a string that corresponds with ASCII characters. In
     * the WAF console and the developer guide, this is called a string match
     * statement.</p>
     */
    inline bool ByteMatchStatementHasBeenSet() const { return m_byteMatchStatementHasBeenSet; }

    /**
     * <p>A rule statement that defines a string match search for WAF to apply to web
     * requests. The byte match statement provides the bytes to search for, the
     * location in requests that you want WAF to search, and other settings. The bytes
     * to search for are typically a string that corresponds with ASCII characters. In
     * the WAF console and the developer guide, this is called a string match
     * statement.</p>
     */
    inline void SetByteMatchStatement(const ByteMatchStatement& value) { m_byteMatchStatementHasBeenSet = true; m_byteMatchStatement = value; }

    /**
     * <p>A rule statement that defines a string match search for WAF to apply to web
     * requests. The byte match statement provides the bytes to search for, the
     * location in requests that you want WAF to search, and other settings. The bytes
     * to search for are typically a string that corresponds with ASCII characters. In
     * the WAF console and the developer guide, this is called a string match
     * statement.</p>
     */
    inline void SetByteMatchStatement(ByteMatchStatement&& value) { m_byteMatchStatementHasBeenSet = true; m_byteMatchStatement = std::move(value); }

    /**
     * <p>A rule statement that defines a string match search for WAF to apply to web
     * requests. The byte match statement provides the bytes to search for, the
     * location in requests that you want WAF to search, and other settings. The bytes
     * to search for are typically a string that corresponds with ASCII characters. In
     * the WAF console and the developer guide, this is called a string match
     * statement.</p>
     */
    inline Statement& WithByteMatchStatement(const ByteMatchStatement& value) { SetByteMatchStatement(value); return *this;}

    /**
     * <p>A rule statement that defines a string match search for WAF to apply to web
     * requests. The byte match statement provides the bytes to search for, the
     * location in requests that you want WAF to search, and other settings. The bytes
     * to search for are typically a string that corresponds with ASCII characters. In
     * the WAF console and the developer guide, this is called a string match
     * statement.</p>
     */
    inline Statement& WithByteMatchStatement(ByteMatchStatement&& value) { SetByteMatchStatement(std::move(value)); return *this;}


    /**
     * <p>A rule statement that inspects for malicious SQL code. Attackers insert
     * malicious SQL code into web requests to do things like modify your database or
     * extract data from it. </p>
     */
    inline const SqliMatchStatement& GetSqliMatchStatement() const{ return m_sqliMatchStatement; }

    /**
     * <p>A rule statement that inspects for malicious SQL code. Attackers insert
     * malicious SQL code into web requests to do things like modify your database or
     * extract data from it. </p>
     */
    inline bool SqliMatchStatementHasBeenSet() const { return m_sqliMatchStatementHasBeenSet; }

    /**
     * <p>A rule statement that inspects for malicious SQL code. Attackers insert
     * malicious SQL code into web requests to do things like modify your database or
     * extract data from it. </p>
     */
    inline void SetSqliMatchStatement(const SqliMatchStatement& value) { m_sqliMatchStatementHasBeenSet = true; m_sqliMatchStatement = value; }

    /**
     * <p>A rule statement that inspects for malicious SQL code. Attackers insert
     * malicious SQL code into web requests to do things like modify your database or
     * extract data from it. </p>
     */
    inline void SetSqliMatchStatement(SqliMatchStatement&& value) { m_sqliMatchStatementHasBeenSet = true; m_sqliMatchStatement = std::move(value); }

    /**
     * <p>A rule statement that inspects for malicious SQL code. Attackers insert
     * malicious SQL code into web requests to do things like modify your database or
     * extract data from it. </p>
     */
    inline Statement& WithSqliMatchStatement(const SqliMatchStatement& value) { SetSqliMatchStatement(value); return *this;}

    /**
     * <p>A rule statement that inspects for malicious SQL code. Attackers insert
     * malicious SQL code into web requests to do things like modify your database or
     * extract data from it. </p>
     */
    inline Statement& WithSqliMatchStatement(SqliMatchStatement&& value) { SetSqliMatchStatement(std::move(value)); return *this;}


    /**
     * <p>A rule statement that inspects for cross-site scripting (XSS) attacks. In XSS
     * attacks, the attacker uses vulnerabilities in a benign website as a vehicle to
     * inject malicious client-site scripts into other legitimate web browsers. </p>
     */
    inline const XssMatchStatement& GetXssMatchStatement() const{ return m_xssMatchStatement; }

    /**
     * <p>A rule statement that inspects for cross-site scripting (XSS) attacks. In XSS
     * attacks, the attacker uses vulnerabilities in a benign website as a vehicle to
     * inject malicious client-site scripts into other legitimate web browsers. </p>
     */
    inline bool XssMatchStatementHasBeenSet() const { return m_xssMatchStatementHasBeenSet; }

    /**
     * <p>A rule statement that inspects for cross-site scripting (XSS) attacks. In XSS
     * attacks, the attacker uses vulnerabilities in a benign website as a vehicle to
     * inject malicious client-site scripts into other legitimate web browsers. </p>
     */
    inline void SetXssMatchStatement(const XssMatchStatement& value) { m_xssMatchStatementHasBeenSet = true; m_xssMatchStatement = value; }

    /**
     * <p>A rule statement that inspects for cross-site scripting (XSS) attacks. In XSS
     * attacks, the attacker uses vulnerabilities in a benign website as a vehicle to
     * inject malicious client-site scripts into other legitimate web browsers. </p>
     */
    inline void SetXssMatchStatement(XssMatchStatement&& value) { m_xssMatchStatementHasBeenSet = true; m_xssMatchStatement = std::move(value); }

    /**
     * <p>A rule statement that inspects for cross-site scripting (XSS) attacks. In XSS
     * attacks, the attacker uses vulnerabilities in a benign website as a vehicle to
     * inject malicious client-site scripts into other legitimate web browsers. </p>
     */
    inline Statement& WithXssMatchStatement(const XssMatchStatement& value) { SetXssMatchStatement(value); return *this;}

    /**
     * <p>A rule statement that inspects for cross-site scripting (XSS) attacks. In XSS
     * attacks, the attacker uses vulnerabilities in a benign website as a vehicle to
     * inject malicious client-site scripts into other legitimate web browsers. </p>
     */
    inline Statement& WithXssMatchStatement(XssMatchStatement&& value) { SetXssMatchStatement(std::move(value)); return *this;}


    /**
     * <p>A rule statement that compares a number of bytes against the size of a
     * request component, using a comparison operator, such as greater than (&gt;) or
     * less than (&lt;). For example, you can use a size constraint statement to look
     * for query strings that are longer than 100 bytes. </p> <p>If you configure WAF
     * to inspect the request body, WAF inspects only the first 8192 bytes (8 KB). If
     * the request body for your web requests never exceeds 8192 bytes, you could use a
     * size constraint statement to block requests that have a request body greater
     * than 8192 bytes.</p> <p>If you choose URI for the value of Part of the request
     * to filter on, the slash (/) in the URI counts as one character. For example, the
     * URI <code>/logo.jpg</code> is nine characters long.</p>
     */
    inline const SizeConstraintStatement& GetSizeConstraintStatement() const{ return m_sizeConstraintStatement; }

    /**
     * <p>A rule statement that compares a number of bytes against the size of a
     * request component, using a comparison operator, such as greater than (&gt;) or
     * less than (&lt;). For example, you can use a size constraint statement to look
     * for query strings that are longer than 100 bytes. </p> <p>If you configure WAF
     * to inspect the request body, WAF inspects only the first 8192 bytes (8 KB). If
     * the request body for your web requests never exceeds 8192 bytes, you could use a
     * size constraint statement to block requests that have a request body greater
     * than 8192 bytes.</p> <p>If you choose URI for the value of Part of the request
     * to filter on, the slash (/) in the URI counts as one character. For example, the
     * URI <code>/logo.jpg</code> is nine characters long.</p>
     */
    inline bool SizeConstraintStatementHasBeenSet() const { return m_sizeConstraintStatementHasBeenSet; }

    /**
     * <p>A rule statement that compares a number of bytes against the size of a
     * request component, using a comparison operator, such as greater than (&gt;) or
     * less than (&lt;). For example, you can use a size constraint statement to look
     * for query strings that are longer than 100 bytes. </p> <p>If you configure WAF
     * to inspect the request body, WAF inspects only the first 8192 bytes (8 KB). If
     * the request body for your web requests never exceeds 8192 bytes, you could use a
     * size constraint statement to block requests that have a request body greater
     * than 8192 bytes.</p> <p>If you choose URI for the value of Part of the request
     * to filter on, the slash (/) in the URI counts as one character. For example, the
     * URI <code>/logo.jpg</code> is nine characters long.</p>
     */
    inline void SetSizeConstraintStatement(const SizeConstraintStatement& value) { m_sizeConstraintStatementHasBeenSet = true; m_sizeConstraintStatement = value; }

    /**
     * <p>A rule statement that compares a number of bytes against the size of a
     * request component, using a comparison operator, such as greater than (&gt;) or
     * less than (&lt;). For example, you can use a size constraint statement to look
     * for query strings that are longer than 100 bytes. </p> <p>If you configure WAF
     * to inspect the request body, WAF inspects only the first 8192 bytes (8 KB). If
     * the request body for your web requests never exceeds 8192 bytes, you could use a
     * size constraint statement to block requests that have a request body greater
     * than 8192 bytes.</p> <p>If you choose URI for the value of Part of the request
     * to filter on, the slash (/) in the URI counts as one character. For example, the
     * URI <code>/logo.jpg</code> is nine characters long.</p>
     */
    inline void SetSizeConstraintStatement(SizeConstraintStatement&& value) { m_sizeConstraintStatementHasBeenSet = true; m_sizeConstraintStatement = std::move(value); }

    /**
     * <p>A rule statement that compares a number of bytes against the size of a
     * request component, using a comparison operator, such as greater than (&gt;) or
     * less than (&lt;). For example, you can use a size constraint statement to look
     * for query strings that are longer than 100 bytes. </p> <p>If you configure WAF
     * to inspect the request body, WAF inspects only the first 8192 bytes (8 KB). If
     * the request body for your web requests never exceeds 8192 bytes, you could use a
     * size constraint statement to block requests that have a request body greater
     * than 8192 bytes.</p> <p>If you choose URI for the value of Part of the request
     * to filter on, the slash (/) in the URI counts as one character. For example, the
     * URI <code>/logo.jpg</code> is nine characters long.</p>
     */
    inline Statement& WithSizeConstraintStatement(const SizeConstraintStatement& value) { SetSizeConstraintStatement(value); return *this;}

    /**
     * <p>A rule statement that compares a number of bytes against the size of a
     * request component, using a comparison operator, such as greater than (&gt;) or
     * less than (&lt;). For example, you can use a size constraint statement to look
     * for query strings that are longer than 100 bytes. </p> <p>If you configure WAF
     * to inspect the request body, WAF inspects only the first 8192 bytes (8 KB). If
     * the request body for your web requests never exceeds 8192 bytes, you could use a
     * size constraint statement to block requests that have a request body greater
     * than 8192 bytes.</p> <p>If you choose URI for the value of Part of the request
     * to filter on, the slash (/) in the URI counts as one character. For example, the
     * URI <code>/logo.jpg</code> is nine characters long.</p>
     */
    inline Statement& WithSizeConstraintStatement(SizeConstraintStatement&& value) { SetSizeConstraintStatement(std::move(value)); return *this;}


    /**
     * <p>A rule statement that labels web requests by country and region and that
     * matches against web requests based on country code. A geo match rule labels
     * every request that it inspects regardless of whether it finds a match.</p> <ul>
     * <li> <p>To manage requests only by country, you can use this statement by itself
     * and specify the countries that you want to match against in the
     * <code>CountryCodes</code> array. </p> </li> <li> <p>Otherwise, configure your
     * geo match rule with Count action so that it only labels requests. Then, add one
     * or more label match rules to run after the geo match rule and configure them to
     * match against the geographic labels and handle the requests as needed. </p>
     * </li> </ul> <p>WAF labels requests using the alpha-2 country and region codes
     * from the International Organization for Standardization (ISO) 3166 standard. WAF
     * determines the codes using either the IP address in the web request origin or,
     * if you specify it, the address in the geo match <code>ForwardedIPConfig</code>.
     * </p> <p>If you use the web request origin, the label formats are
     * <code>awswaf:clientip:geo:region:&lt;ISO country code&gt;-&lt;ISO region
     * code&gt;</code> and <code>awswaf:clientip:geo:country:&lt;ISO country
     * code&gt;</code>.</p> <p>If you use a forwarded IP address, the label formats are
     * <code>awswaf:forwardedip:geo:region:&lt;ISO country code&gt;-&lt;ISO region
     * code&gt;</code> and <code>awswaf:forwardedip:geo:country:&lt;ISO country
     * code&gt;</code>.</p> <p>For additional details, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-rule-statement-type-geo-match.html">Geographic
     * match rule statement</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline const GeoMatchStatement& GetGeoMatchStatement() const{ return m_geoMatchStatement; }

    /**
     * <p>A rule statement that labels web requests by country and region and that
     * matches against web requests based on country code. A geo match rule labels
     * every request that it inspects regardless of whether it finds a match.</p> <ul>
     * <li> <p>To manage requests only by country, you can use this statement by itself
     * and specify the countries that you want to match against in the
     * <code>CountryCodes</code> array. </p> </li> <li> <p>Otherwise, configure your
     * geo match rule with Count action so that it only labels requests. Then, add one
     * or more label match rules to run after the geo match rule and configure them to
     * match against the geographic labels and handle the requests as needed. </p>
     * </li> </ul> <p>WAF labels requests using the alpha-2 country and region codes
     * from the International Organization for Standardization (ISO) 3166 standard. WAF
     * determines the codes using either the IP address in the web request origin or,
     * if you specify it, the address in the geo match <code>ForwardedIPConfig</code>.
     * </p> <p>If you use the web request origin, the label formats are
     * <code>awswaf:clientip:geo:region:&lt;ISO country code&gt;-&lt;ISO region
     * code&gt;</code> and <code>awswaf:clientip:geo:country:&lt;ISO country
     * code&gt;</code>.</p> <p>If you use a forwarded IP address, the label formats are
     * <code>awswaf:forwardedip:geo:region:&lt;ISO country code&gt;-&lt;ISO region
     * code&gt;</code> and <code>awswaf:forwardedip:geo:country:&lt;ISO country
     * code&gt;</code>.</p> <p>For additional details, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-rule-statement-type-geo-match.html">Geographic
     * match rule statement</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline bool GeoMatchStatementHasBeenSet() const { return m_geoMatchStatementHasBeenSet; }

    /**
     * <p>A rule statement that labels web requests by country and region and that
     * matches against web requests based on country code. A geo match rule labels
     * every request that it inspects regardless of whether it finds a match.</p> <ul>
     * <li> <p>To manage requests only by country, you can use this statement by itself
     * and specify the countries that you want to match against in the
     * <code>CountryCodes</code> array. </p> </li> <li> <p>Otherwise, configure your
     * geo match rule with Count action so that it only labels requests. Then, add one
     * or more label match rules to run after the geo match rule and configure them to
     * match against the geographic labels and handle the requests as needed. </p>
     * </li> </ul> <p>WAF labels requests using the alpha-2 country and region codes
     * from the International Organization for Standardization (ISO) 3166 standard. WAF
     * determines the codes using either the IP address in the web request origin or,
     * if you specify it, the address in the geo match <code>ForwardedIPConfig</code>.
     * </p> <p>If you use the web request origin, the label formats are
     * <code>awswaf:clientip:geo:region:&lt;ISO country code&gt;-&lt;ISO region
     * code&gt;</code> and <code>awswaf:clientip:geo:country:&lt;ISO country
     * code&gt;</code>.</p> <p>If you use a forwarded IP address, the label formats are
     * <code>awswaf:forwardedip:geo:region:&lt;ISO country code&gt;-&lt;ISO region
     * code&gt;</code> and <code>awswaf:forwardedip:geo:country:&lt;ISO country
     * code&gt;</code>.</p> <p>For additional details, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-rule-statement-type-geo-match.html">Geographic
     * match rule statement</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline void SetGeoMatchStatement(const GeoMatchStatement& value) { m_geoMatchStatementHasBeenSet = true; m_geoMatchStatement = value; }

    /**
     * <p>A rule statement that labels web requests by country and region and that
     * matches against web requests based on country code. A geo match rule labels
     * every request that it inspects regardless of whether it finds a match.</p> <ul>
     * <li> <p>To manage requests only by country, you can use this statement by itself
     * and specify the countries that you want to match against in the
     * <code>CountryCodes</code> array. </p> </li> <li> <p>Otherwise, configure your
     * geo match rule with Count action so that it only labels requests. Then, add one
     * or more label match rules to run after the geo match rule and configure them to
     * match against the geographic labels and handle the requests as needed. </p>
     * </li> </ul> <p>WAF labels requests using the alpha-2 country and region codes
     * from the International Organization for Standardization (ISO) 3166 standard. WAF
     * determines the codes using either the IP address in the web request origin or,
     * if you specify it, the address in the geo match <code>ForwardedIPConfig</code>.
     * </p> <p>If you use the web request origin, the label formats are
     * <code>awswaf:clientip:geo:region:&lt;ISO country code&gt;-&lt;ISO region
     * code&gt;</code> and <code>awswaf:clientip:geo:country:&lt;ISO country
     * code&gt;</code>.</p> <p>If you use a forwarded IP address, the label formats are
     * <code>awswaf:forwardedip:geo:region:&lt;ISO country code&gt;-&lt;ISO region
     * code&gt;</code> and <code>awswaf:forwardedip:geo:country:&lt;ISO country
     * code&gt;</code>.</p> <p>For additional details, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-rule-statement-type-geo-match.html">Geographic
     * match rule statement</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline void SetGeoMatchStatement(GeoMatchStatement&& value) { m_geoMatchStatementHasBeenSet = true; m_geoMatchStatement = std::move(value); }

    /**
     * <p>A rule statement that labels web requests by country and region and that
     * matches against web requests based on country code. A geo match rule labels
     * every request that it inspects regardless of whether it finds a match.</p> <ul>
     * <li> <p>To manage requests only by country, you can use this statement by itself
     * and specify the countries that you want to match against in the
     * <code>CountryCodes</code> array. </p> </li> <li> <p>Otherwise, configure your
     * geo match rule with Count action so that it only labels requests. Then, add one
     * or more label match rules to run after the geo match rule and configure them to
     * match against the geographic labels and handle the requests as needed. </p>
     * </li> </ul> <p>WAF labels requests using the alpha-2 country and region codes
     * from the International Organization for Standardization (ISO) 3166 standard. WAF
     * determines the codes using either the IP address in the web request origin or,
     * if you specify it, the address in the geo match <code>ForwardedIPConfig</code>.
     * </p> <p>If you use the web request origin, the label formats are
     * <code>awswaf:clientip:geo:region:&lt;ISO country code&gt;-&lt;ISO region
     * code&gt;</code> and <code>awswaf:clientip:geo:country:&lt;ISO country
     * code&gt;</code>.</p> <p>If you use a forwarded IP address, the label formats are
     * <code>awswaf:forwardedip:geo:region:&lt;ISO country code&gt;-&lt;ISO region
     * code&gt;</code> and <code>awswaf:forwardedip:geo:country:&lt;ISO country
     * code&gt;</code>.</p> <p>For additional details, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-rule-statement-type-geo-match.html">Geographic
     * match rule statement</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline Statement& WithGeoMatchStatement(const GeoMatchStatement& value) { SetGeoMatchStatement(value); return *this;}

    /**
     * <p>A rule statement that labels web requests by country and region and that
     * matches against web requests based on country code. A geo match rule labels
     * every request that it inspects regardless of whether it finds a match.</p> <ul>
     * <li> <p>To manage requests only by country, you can use this statement by itself
     * and specify the countries that you want to match against in the
     * <code>CountryCodes</code> array. </p> </li> <li> <p>Otherwise, configure your
     * geo match rule with Count action so that it only labels requests. Then, add one
     * or more label match rules to run after the geo match rule and configure them to
     * match against the geographic labels and handle the requests as needed. </p>
     * </li> </ul> <p>WAF labels requests using the alpha-2 country and region codes
     * from the International Organization for Standardization (ISO) 3166 standard. WAF
     * determines the codes using either the IP address in the web request origin or,
     * if you specify it, the address in the geo match <code>ForwardedIPConfig</code>.
     * </p> <p>If you use the web request origin, the label formats are
     * <code>awswaf:clientip:geo:region:&lt;ISO country code&gt;-&lt;ISO region
     * code&gt;</code> and <code>awswaf:clientip:geo:country:&lt;ISO country
     * code&gt;</code>.</p> <p>If you use a forwarded IP address, the label formats are
     * <code>awswaf:forwardedip:geo:region:&lt;ISO country code&gt;-&lt;ISO region
     * code&gt;</code> and <code>awswaf:forwardedip:geo:country:&lt;ISO country
     * code&gt;</code>.</p> <p>For additional details, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-rule-statement-type-geo-match.html">Geographic
     * match rule statement</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline Statement& WithGeoMatchStatement(GeoMatchStatement&& value) { SetGeoMatchStatement(std::move(value)); return *this;}


    /**
     * <p>A rule statement used to run the rules that are defined in a
     * <a>RuleGroup</a>. To use this, create a rule group with your rules, then provide
     * the ARN of the rule group in this statement.</p> <p>You cannot nest a
     * <code>RuleGroupReferenceStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. You can only use a rule
     * group reference statement at the top level inside a web ACL. </p>
     */
    inline const RuleGroupReferenceStatement& GetRuleGroupReferenceStatement() const{ return m_ruleGroupReferenceStatement; }

    /**
     * <p>A rule statement used to run the rules that are defined in a
     * <a>RuleGroup</a>. To use this, create a rule group with your rules, then provide
     * the ARN of the rule group in this statement.</p> <p>You cannot nest a
     * <code>RuleGroupReferenceStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. You can only use a rule
     * group reference statement at the top level inside a web ACL. </p>
     */
    inline bool RuleGroupReferenceStatementHasBeenSet() const { return m_ruleGroupReferenceStatementHasBeenSet; }

    /**
     * <p>A rule statement used to run the rules that are defined in a
     * <a>RuleGroup</a>. To use this, create a rule group with your rules, then provide
     * the ARN of the rule group in this statement.</p> <p>You cannot nest a
     * <code>RuleGroupReferenceStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. You can only use a rule
     * group reference statement at the top level inside a web ACL. </p>
     */
    inline void SetRuleGroupReferenceStatement(const RuleGroupReferenceStatement& value) { m_ruleGroupReferenceStatementHasBeenSet = true; m_ruleGroupReferenceStatement = value; }

    /**
     * <p>A rule statement used to run the rules that are defined in a
     * <a>RuleGroup</a>. To use this, create a rule group with your rules, then provide
     * the ARN of the rule group in this statement.</p> <p>You cannot nest a
     * <code>RuleGroupReferenceStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. You can only use a rule
     * group reference statement at the top level inside a web ACL. </p>
     */
    inline void SetRuleGroupReferenceStatement(RuleGroupReferenceStatement&& value) { m_ruleGroupReferenceStatementHasBeenSet = true; m_ruleGroupReferenceStatement = std::move(value); }

    /**
     * <p>A rule statement used to run the rules that are defined in a
     * <a>RuleGroup</a>. To use this, create a rule group with your rules, then provide
     * the ARN of the rule group in this statement.</p> <p>You cannot nest a
     * <code>RuleGroupReferenceStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. You can only use a rule
     * group reference statement at the top level inside a web ACL. </p>
     */
    inline Statement& WithRuleGroupReferenceStatement(const RuleGroupReferenceStatement& value) { SetRuleGroupReferenceStatement(value); return *this;}

    /**
     * <p>A rule statement used to run the rules that are defined in a
     * <a>RuleGroup</a>. To use this, create a rule group with your rules, then provide
     * the ARN of the rule group in this statement.</p> <p>You cannot nest a
     * <code>RuleGroupReferenceStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. You can only use a rule
     * group reference statement at the top level inside a web ACL. </p>
     */
    inline Statement& WithRuleGroupReferenceStatement(RuleGroupReferenceStatement&& value) { SetRuleGroupReferenceStatement(std::move(value)); return *this;}


    /**
     * <p>A rule statement used to detect web requests coming from particular IP
     * addresses or address ranges. To use this, create an <a>IPSet</a> that specifies
     * the addresses you want to detect, then use the ARN of that set in this
     * statement. To create an IP set, see <a>CreateIPSet</a>.</p> <p>Each IP set rule
     * statement references an IP set. You create and maintain the set independent of
     * your rules. This allows you to use the single set in multiple rules. When you
     * update the referenced set, WAF automatically updates all rules that reference
     * it.</p>
     */
    inline const IPSetReferenceStatement& GetIPSetReferenceStatement() const{ return m_iPSetReferenceStatement; }

    /**
     * <p>A rule statement used to detect web requests coming from particular IP
     * addresses or address ranges. To use this, create an <a>IPSet</a> that specifies
     * the addresses you want to detect, then use the ARN of that set in this
     * statement. To create an IP set, see <a>CreateIPSet</a>.</p> <p>Each IP set rule
     * statement references an IP set. You create and maintain the set independent of
     * your rules. This allows you to use the single set in multiple rules. When you
     * update the referenced set, WAF automatically updates all rules that reference
     * it.</p>
     */
    inline bool IPSetReferenceStatementHasBeenSet() const { return m_iPSetReferenceStatementHasBeenSet; }

    /**
     * <p>A rule statement used to detect web requests coming from particular IP
     * addresses or address ranges. To use this, create an <a>IPSet</a> that specifies
     * the addresses you want to detect, then use the ARN of that set in this
     * statement. To create an IP set, see <a>CreateIPSet</a>.</p> <p>Each IP set rule
     * statement references an IP set. You create and maintain the set independent of
     * your rules. This allows you to use the single set in multiple rules. When you
     * update the referenced set, WAF automatically updates all rules that reference
     * it.</p>
     */
    inline void SetIPSetReferenceStatement(const IPSetReferenceStatement& value) { m_iPSetReferenceStatementHasBeenSet = true; m_iPSetReferenceStatement = value; }

    /**
     * <p>A rule statement used to detect web requests coming from particular IP
     * addresses or address ranges. To use this, create an <a>IPSet</a> that specifies
     * the addresses you want to detect, then use the ARN of that set in this
     * statement. To create an IP set, see <a>CreateIPSet</a>.</p> <p>Each IP set rule
     * statement references an IP set. You create and maintain the set independent of
     * your rules. This allows you to use the single set in multiple rules. When you
     * update the referenced set, WAF automatically updates all rules that reference
     * it.</p>
     */
    inline void SetIPSetReferenceStatement(IPSetReferenceStatement&& value) { m_iPSetReferenceStatementHasBeenSet = true; m_iPSetReferenceStatement = std::move(value); }

    /**
     * <p>A rule statement used to detect web requests coming from particular IP
     * addresses or address ranges. To use this, create an <a>IPSet</a> that specifies
     * the addresses you want to detect, then use the ARN of that set in this
     * statement. To create an IP set, see <a>CreateIPSet</a>.</p> <p>Each IP set rule
     * statement references an IP set. You create and maintain the set independent of
     * your rules. This allows you to use the single set in multiple rules. When you
     * update the referenced set, WAF automatically updates all rules that reference
     * it.</p>
     */
    inline Statement& WithIPSetReferenceStatement(const IPSetReferenceStatement& value) { SetIPSetReferenceStatement(value); return *this;}

    /**
     * <p>A rule statement used to detect web requests coming from particular IP
     * addresses or address ranges. To use this, create an <a>IPSet</a> that specifies
     * the addresses you want to detect, then use the ARN of that set in this
     * statement. To create an IP set, see <a>CreateIPSet</a>.</p> <p>Each IP set rule
     * statement references an IP set. You create and maintain the set independent of
     * your rules. This allows you to use the single set in multiple rules. When you
     * update the referenced set, WAF automatically updates all rules that reference
     * it.</p>
     */
    inline Statement& WithIPSetReferenceStatement(IPSetReferenceStatement&& value) { SetIPSetReferenceStatement(std::move(value)); return *this;}


    /**
     * <p>A rule statement used to search web request components for matches with
     * regular expressions. To use this, create a <a>RegexPatternSet</a> that specifies
     * the expressions that you want to detect, then use the ARN of that set in this
     * statement. A web request matches the pattern set rule statement if the request
     * component matches any of the patterns in the set. To create a regex pattern set,
     * see <a>CreateRegexPatternSet</a>.</p> <p>Each regex pattern set rule statement
     * references a regex pattern set. You create and maintain the set independent of
     * your rules. This allows you to use the single set in multiple rules. When you
     * update the referenced set, WAF automatically updates all rules that reference
     * it.</p>
     */
    inline const RegexPatternSetReferenceStatement& GetRegexPatternSetReferenceStatement() const{ return m_regexPatternSetReferenceStatement; }

    /**
     * <p>A rule statement used to search web request components for matches with
     * regular expressions. To use this, create a <a>RegexPatternSet</a> that specifies
     * the expressions that you want to detect, then use the ARN of that set in this
     * statement. A web request matches the pattern set rule statement if the request
     * component matches any of the patterns in the set. To create a regex pattern set,
     * see <a>CreateRegexPatternSet</a>.</p> <p>Each regex pattern set rule statement
     * references a regex pattern set. You create and maintain the set independent of
     * your rules. This allows you to use the single set in multiple rules. When you
     * update the referenced set, WAF automatically updates all rules that reference
     * it.</p>
     */
    inline bool RegexPatternSetReferenceStatementHasBeenSet() const { return m_regexPatternSetReferenceStatementHasBeenSet; }

    /**
     * <p>A rule statement used to search web request components for matches with
     * regular expressions. To use this, create a <a>RegexPatternSet</a> that specifies
     * the expressions that you want to detect, then use the ARN of that set in this
     * statement. A web request matches the pattern set rule statement if the request
     * component matches any of the patterns in the set. To create a regex pattern set,
     * see <a>CreateRegexPatternSet</a>.</p> <p>Each regex pattern set rule statement
     * references a regex pattern set. You create and maintain the set independent of
     * your rules. This allows you to use the single set in multiple rules. When you
     * update the referenced set, WAF automatically updates all rules that reference
     * it.</p>
     */
    inline void SetRegexPatternSetReferenceStatement(const RegexPatternSetReferenceStatement& value) { m_regexPatternSetReferenceStatementHasBeenSet = true; m_regexPatternSetReferenceStatement = value; }

    /**
     * <p>A rule statement used to search web request components for matches with
     * regular expressions. To use this, create a <a>RegexPatternSet</a> that specifies
     * the expressions that you want to detect, then use the ARN of that set in this
     * statement. A web request matches the pattern set rule statement if the request
     * component matches any of the patterns in the set. To create a regex pattern set,
     * see <a>CreateRegexPatternSet</a>.</p> <p>Each regex pattern set rule statement
     * references a regex pattern set. You create and maintain the set independent of
     * your rules. This allows you to use the single set in multiple rules. When you
     * update the referenced set, WAF automatically updates all rules that reference
     * it.</p>
     */
    inline void SetRegexPatternSetReferenceStatement(RegexPatternSetReferenceStatement&& value) { m_regexPatternSetReferenceStatementHasBeenSet = true; m_regexPatternSetReferenceStatement = std::move(value); }

    /**
     * <p>A rule statement used to search web request components for matches with
     * regular expressions. To use this, create a <a>RegexPatternSet</a> that specifies
     * the expressions that you want to detect, then use the ARN of that set in this
     * statement. A web request matches the pattern set rule statement if the request
     * component matches any of the patterns in the set. To create a regex pattern set,
     * see <a>CreateRegexPatternSet</a>.</p> <p>Each regex pattern set rule statement
     * references a regex pattern set. You create and maintain the set independent of
     * your rules. This allows you to use the single set in multiple rules. When you
     * update the referenced set, WAF automatically updates all rules that reference
     * it.</p>
     */
    inline Statement& WithRegexPatternSetReferenceStatement(const RegexPatternSetReferenceStatement& value) { SetRegexPatternSetReferenceStatement(value); return *this;}

    /**
     * <p>A rule statement used to search web request components for matches with
     * regular expressions. To use this, create a <a>RegexPatternSet</a> that specifies
     * the expressions that you want to detect, then use the ARN of that set in this
     * statement. A web request matches the pattern set rule statement if the request
     * component matches any of the patterns in the set. To create a regex pattern set,
     * see <a>CreateRegexPatternSet</a>.</p> <p>Each regex pattern set rule statement
     * references a regex pattern set. You create and maintain the set independent of
     * your rules. This allows you to use the single set in multiple rules. When you
     * update the referenced set, WAF automatically updates all rules that reference
     * it.</p>
     */
    inline Statement& WithRegexPatternSetReferenceStatement(RegexPatternSetReferenceStatement&& value) { SetRegexPatternSetReferenceStatement(std::move(value)); return *this;}


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
     * <code>RateBasedStatement</code> inside a web ACL and inside a rule group. </p>
     */
    AWS_WAFV2_API const RateBasedStatement& GetRateBasedStatement() const;

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
     * <code>RateBasedStatement</code> inside a web ACL and inside a rule group. </p>
     */
    AWS_WAFV2_API bool RateBasedStatementHasBeenSet() const;

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
     * <code>RateBasedStatement</code> inside a web ACL and inside a rule group. </p>
     */
    AWS_WAFV2_API void SetRateBasedStatement(const RateBasedStatement& value);

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
     * <code>RateBasedStatement</code> inside a web ACL and inside a rule group. </p>
     */
    AWS_WAFV2_API void SetRateBasedStatement(RateBasedStatement&& value);

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
     * <code>RateBasedStatement</code> inside a web ACL and inside a rule group. </p>
     */
    AWS_WAFV2_API Statement& WithRateBasedStatement(const RateBasedStatement& value);

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
     * <code>RateBasedStatement</code> inside a web ACL and inside a rule group. </p>
     */
    AWS_WAFV2_API Statement& WithRateBasedStatement(RateBasedStatement&& value);


    /**
     * <p>A logical rule statement used to combine other rule statements with AND
     * logic. You provide more than one <a>Statement</a> within the
     * <code>AndStatement</code>. </p>
     */
    AWS_WAFV2_API const AndStatement& GetAndStatement() const;

    /**
     * <p>A logical rule statement used to combine other rule statements with AND
     * logic. You provide more than one <a>Statement</a> within the
     * <code>AndStatement</code>. </p>
     */
    AWS_WAFV2_API bool AndStatementHasBeenSet() const;

    /**
     * <p>A logical rule statement used to combine other rule statements with AND
     * logic. You provide more than one <a>Statement</a> within the
     * <code>AndStatement</code>. </p>
     */
    AWS_WAFV2_API void SetAndStatement(const AndStatement& value);

    /**
     * <p>A logical rule statement used to combine other rule statements with AND
     * logic. You provide more than one <a>Statement</a> within the
     * <code>AndStatement</code>. </p>
     */
    AWS_WAFV2_API void SetAndStatement(AndStatement&& value);

    /**
     * <p>A logical rule statement used to combine other rule statements with AND
     * logic. You provide more than one <a>Statement</a> within the
     * <code>AndStatement</code>. </p>
     */
    AWS_WAFV2_API Statement& WithAndStatement(const AndStatement& value);

    /**
     * <p>A logical rule statement used to combine other rule statements with AND
     * logic. You provide more than one <a>Statement</a> within the
     * <code>AndStatement</code>. </p>
     */
    AWS_WAFV2_API Statement& WithAndStatement(AndStatement&& value);


    /**
     * <p>A logical rule statement used to combine other rule statements with OR logic.
     * You provide more than one <a>Statement</a> within the <code>OrStatement</code>.
     * </p>
     */
    AWS_WAFV2_API const OrStatement& GetOrStatement() const;

    /**
     * <p>A logical rule statement used to combine other rule statements with OR logic.
     * You provide more than one <a>Statement</a> within the <code>OrStatement</code>.
     * </p>
     */
    AWS_WAFV2_API bool OrStatementHasBeenSet() const;

    /**
     * <p>A logical rule statement used to combine other rule statements with OR logic.
     * You provide more than one <a>Statement</a> within the <code>OrStatement</code>.
     * </p>
     */
    AWS_WAFV2_API void SetOrStatement(const OrStatement& value);

    /**
     * <p>A logical rule statement used to combine other rule statements with OR logic.
     * You provide more than one <a>Statement</a> within the <code>OrStatement</code>.
     * </p>
     */
    AWS_WAFV2_API void SetOrStatement(OrStatement&& value);

    /**
     * <p>A logical rule statement used to combine other rule statements with OR logic.
     * You provide more than one <a>Statement</a> within the <code>OrStatement</code>.
     * </p>
     */
    AWS_WAFV2_API Statement& WithOrStatement(const OrStatement& value);

    /**
     * <p>A logical rule statement used to combine other rule statements with OR logic.
     * You provide more than one <a>Statement</a> within the <code>OrStatement</code>.
     * </p>
     */
    AWS_WAFV2_API Statement& WithOrStatement(OrStatement&& value);


    /**
     * <p>A logical rule statement used to negate the results of another rule
     * statement. You provide one <a>Statement</a> within the
     * <code>NotStatement</code>.</p>
     */
    AWS_WAFV2_API const NotStatement& GetNotStatement() const;

    /**
     * <p>A logical rule statement used to negate the results of another rule
     * statement. You provide one <a>Statement</a> within the
     * <code>NotStatement</code>.</p>
     */
    AWS_WAFV2_API bool NotStatementHasBeenSet() const;

    /**
     * <p>A logical rule statement used to negate the results of another rule
     * statement. You provide one <a>Statement</a> within the
     * <code>NotStatement</code>.</p>
     */
    AWS_WAFV2_API void SetNotStatement(const NotStatement& value);

    /**
     * <p>A logical rule statement used to negate the results of another rule
     * statement. You provide one <a>Statement</a> within the
     * <code>NotStatement</code>.</p>
     */
    AWS_WAFV2_API void SetNotStatement(NotStatement&& value);

    /**
     * <p>A logical rule statement used to negate the results of another rule
     * statement. You provide one <a>Statement</a> within the
     * <code>NotStatement</code>.</p>
     */
    AWS_WAFV2_API Statement& WithNotStatement(const NotStatement& value);

    /**
     * <p>A logical rule statement used to negate the results of another rule
     * statement. You provide one <a>Statement</a> within the
     * <code>NotStatement</code>.</p>
     */
    AWS_WAFV2_API Statement& WithNotStatement(NotStatement&& value);


    /**
     * <p>A rule statement used to run the rules that are defined in a managed rule
     * group. To use this, provide the vendor name and the name of the rule group in
     * this statement. You can retrieve the required names by calling
     * <a>ListAvailableManagedRuleGroups</a>.</p> <p>You cannot nest a
     * <code>ManagedRuleGroupStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. It can only be referenced
     * as a top-level statement within a rule.</p>  <p>You are charged additional
     * fees when you use the WAF Bot Control managed rule group
     * <code>AWSManagedRulesBotControlRuleSet</code> or the WAF Fraud Control account
     * takeover prevention (ATP) managed rule group
     * <code>AWSManagedRulesATPRuleSet</code>. For more information, see <a
     * href="http://aws.amazon.com/waf/pricing/">WAF Pricing</a>.</p> 
     */
    AWS_WAFV2_API const ManagedRuleGroupStatement& GetManagedRuleGroupStatement() const;

    /**
     * <p>A rule statement used to run the rules that are defined in a managed rule
     * group. To use this, provide the vendor name and the name of the rule group in
     * this statement. You can retrieve the required names by calling
     * <a>ListAvailableManagedRuleGroups</a>.</p> <p>You cannot nest a
     * <code>ManagedRuleGroupStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. It can only be referenced
     * as a top-level statement within a rule.</p>  <p>You are charged additional
     * fees when you use the WAF Bot Control managed rule group
     * <code>AWSManagedRulesBotControlRuleSet</code> or the WAF Fraud Control account
     * takeover prevention (ATP) managed rule group
     * <code>AWSManagedRulesATPRuleSet</code>. For more information, see <a
     * href="http://aws.amazon.com/waf/pricing/">WAF Pricing</a>.</p> 
     */
    AWS_WAFV2_API bool ManagedRuleGroupStatementHasBeenSet() const;

    /**
     * <p>A rule statement used to run the rules that are defined in a managed rule
     * group. To use this, provide the vendor name and the name of the rule group in
     * this statement. You can retrieve the required names by calling
     * <a>ListAvailableManagedRuleGroups</a>.</p> <p>You cannot nest a
     * <code>ManagedRuleGroupStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. It can only be referenced
     * as a top-level statement within a rule.</p>  <p>You are charged additional
     * fees when you use the WAF Bot Control managed rule group
     * <code>AWSManagedRulesBotControlRuleSet</code> or the WAF Fraud Control account
     * takeover prevention (ATP) managed rule group
     * <code>AWSManagedRulesATPRuleSet</code>. For more information, see <a
     * href="http://aws.amazon.com/waf/pricing/">WAF Pricing</a>.</p> 
     */
    AWS_WAFV2_API void SetManagedRuleGroupStatement(const ManagedRuleGroupStatement& value);

    /**
     * <p>A rule statement used to run the rules that are defined in a managed rule
     * group. To use this, provide the vendor name and the name of the rule group in
     * this statement. You can retrieve the required names by calling
     * <a>ListAvailableManagedRuleGroups</a>.</p> <p>You cannot nest a
     * <code>ManagedRuleGroupStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. It can only be referenced
     * as a top-level statement within a rule.</p>  <p>You are charged additional
     * fees when you use the WAF Bot Control managed rule group
     * <code>AWSManagedRulesBotControlRuleSet</code> or the WAF Fraud Control account
     * takeover prevention (ATP) managed rule group
     * <code>AWSManagedRulesATPRuleSet</code>. For more information, see <a
     * href="http://aws.amazon.com/waf/pricing/">WAF Pricing</a>.</p> 
     */
    AWS_WAFV2_API void SetManagedRuleGroupStatement(ManagedRuleGroupStatement&& value);

    /**
     * <p>A rule statement used to run the rules that are defined in a managed rule
     * group. To use this, provide the vendor name and the name of the rule group in
     * this statement. You can retrieve the required names by calling
     * <a>ListAvailableManagedRuleGroups</a>.</p> <p>You cannot nest a
     * <code>ManagedRuleGroupStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. It can only be referenced
     * as a top-level statement within a rule.</p>  <p>You are charged additional
     * fees when you use the WAF Bot Control managed rule group
     * <code>AWSManagedRulesBotControlRuleSet</code> or the WAF Fraud Control account
     * takeover prevention (ATP) managed rule group
     * <code>AWSManagedRulesATPRuleSet</code>. For more information, see <a
     * href="http://aws.amazon.com/waf/pricing/">WAF Pricing</a>.</p> 
     */
    AWS_WAFV2_API Statement& WithManagedRuleGroupStatement(const ManagedRuleGroupStatement& value);

    /**
     * <p>A rule statement used to run the rules that are defined in a managed rule
     * group. To use this, provide the vendor name and the name of the rule group in
     * this statement. You can retrieve the required names by calling
     * <a>ListAvailableManagedRuleGroups</a>.</p> <p>You cannot nest a
     * <code>ManagedRuleGroupStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. It can only be referenced
     * as a top-level statement within a rule.</p>  <p>You are charged additional
     * fees when you use the WAF Bot Control managed rule group
     * <code>AWSManagedRulesBotControlRuleSet</code> or the WAF Fraud Control account
     * takeover prevention (ATP) managed rule group
     * <code>AWSManagedRulesATPRuleSet</code>. For more information, see <a
     * href="http://aws.amazon.com/waf/pricing/">WAF Pricing</a>.</p> 
     */
    AWS_WAFV2_API Statement& WithManagedRuleGroupStatement(ManagedRuleGroupStatement&& value);


    /**
     * <p>A rule statement to match against labels that have been added to the web
     * request by rules that have already run in the web ACL. </p> <p>The label match
     * statement provides the label or namespace string to search for. The label string
     * can represent a part or all of the fully qualified label name that had been
     * added to the web request. Fully qualified labels have a prefix, optional
     * namespaces, and label name. The prefix identifies the rule group or web ACL
     * context of the rule that added the label. If you do not provide the fully
     * qualified name in your label match string, WAF performs the search for labels
     * that were added in the same context as the label match statement. </p>
     */
    inline const LabelMatchStatement& GetLabelMatchStatement() const{ return m_labelMatchStatement; }

    /**
     * <p>A rule statement to match against labels that have been added to the web
     * request by rules that have already run in the web ACL. </p> <p>The label match
     * statement provides the label or namespace string to search for. The label string
     * can represent a part or all of the fully qualified label name that had been
     * added to the web request. Fully qualified labels have a prefix, optional
     * namespaces, and label name. The prefix identifies the rule group or web ACL
     * context of the rule that added the label. If you do not provide the fully
     * qualified name in your label match string, WAF performs the search for labels
     * that were added in the same context as the label match statement. </p>
     */
    inline bool LabelMatchStatementHasBeenSet() const { return m_labelMatchStatementHasBeenSet; }

    /**
     * <p>A rule statement to match against labels that have been added to the web
     * request by rules that have already run in the web ACL. </p> <p>The label match
     * statement provides the label or namespace string to search for. The label string
     * can represent a part or all of the fully qualified label name that had been
     * added to the web request. Fully qualified labels have a prefix, optional
     * namespaces, and label name. The prefix identifies the rule group or web ACL
     * context of the rule that added the label. If you do not provide the fully
     * qualified name in your label match string, WAF performs the search for labels
     * that were added in the same context as the label match statement. </p>
     */
    inline void SetLabelMatchStatement(const LabelMatchStatement& value) { m_labelMatchStatementHasBeenSet = true; m_labelMatchStatement = value; }

    /**
     * <p>A rule statement to match against labels that have been added to the web
     * request by rules that have already run in the web ACL. </p> <p>The label match
     * statement provides the label or namespace string to search for. The label string
     * can represent a part or all of the fully qualified label name that had been
     * added to the web request. Fully qualified labels have a prefix, optional
     * namespaces, and label name. The prefix identifies the rule group or web ACL
     * context of the rule that added the label. If you do not provide the fully
     * qualified name in your label match string, WAF performs the search for labels
     * that were added in the same context as the label match statement. </p>
     */
    inline void SetLabelMatchStatement(LabelMatchStatement&& value) { m_labelMatchStatementHasBeenSet = true; m_labelMatchStatement = std::move(value); }

    /**
     * <p>A rule statement to match against labels that have been added to the web
     * request by rules that have already run in the web ACL. </p> <p>The label match
     * statement provides the label or namespace string to search for. The label string
     * can represent a part or all of the fully qualified label name that had been
     * added to the web request. Fully qualified labels have a prefix, optional
     * namespaces, and label name. The prefix identifies the rule group or web ACL
     * context of the rule that added the label. If you do not provide the fully
     * qualified name in your label match string, WAF performs the search for labels
     * that were added in the same context as the label match statement. </p>
     */
    inline Statement& WithLabelMatchStatement(const LabelMatchStatement& value) { SetLabelMatchStatement(value); return *this;}

    /**
     * <p>A rule statement to match against labels that have been added to the web
     * request by rules that have already run in the web ACL. </p> <p>The label match
     * statement provides the label or namespace string to search for. The label string
     * can represent a part or all of the fully qualified label name that had been
     * added to the web request. Fully qualified labels have a prefix, optional
     * namespaces, and label name. The prefix identifies the rule group or web ACL
     * context of the rule that added the label. If you do not provide the fully
     * qualified name in your label match string, WAF performs the search for labels
     * that were added in the same context as the label match statement. </p>
     */
    inline Statement& WithLabelMatchStatement(LabelMatchStatement&& value) { SetLabelMatchStatement(std::move(value)); return *this;}


    /**
     * <p>A rule statement used to search web request components for a match against a
     * single regular expression. </p>
     */
    inline const RegexMatchStatement& GetRegexMatchStatement() const{ return m_regexMatchStatement; }

    /**
     * <p>A rule statement used to search web request components for a match against a
     * single regular expression. </p>
     */
    inline bool RegexMatchStatementHasBeenSet() const { return m_regexMatchStatementHasBeenSet; }

    /**
     * <p>A rule statement used to search web request components for a match against a
     * single regular expression. </p>
     */
    inline void SetRegexMatchStatement(const RegexMatchStatement& value) { m_regexMatchStatementHasBeenSet = true; m_regexMatchStatement = value; }

    /**
     * <p>A rule statement used to search web request components for a match against a
     * single regular expression. </p>
     */
    inline void SetRegexMatchStatement(RegexMatchStatement&& value) { m_regexMatchStatementHasBeenSet = true; m_regexMatchStatement = std::move(value); }

    /**
     * <p>A rule statement used to search web request components for a match against a
     * single regular expression. </p>
     */
    inline Statement& WithRegexMatchStatement(const RegexMatchStatement& value) { SetRegexMatchStatement(value); return *this;}

    /**
     * <p>A rule statement used to search web request components for a match against a
     * single regular expression. </p>
     */
    inline Statement& WithRegexMatchStatement(RegexMatchStatement&& value) { SetRegexMatchStatement(std::move(value)); return *this;}

  private:

    ByteMatchStatement m_byteMatchStatement;
    bool m_byteMatchStatementHasBeenSet = false;

    SqliMatchStatement m_sqliMatchStatement;
    bool m_sqliMatchStatementHasBeenSet = false;

    XssMatchStatement m_xssMatchStatement;
    bool m_xssMatchStatementHasBeenSet = false;

    SizeConstraintStatement m_sizeConstraintStatement;
    bool m_sizeConstraintStatementHasBeenSet = false;

    GeoMatchStatement m_geoMatchStatement;
    bool m_geoMatchStatementHasBeenSet = false;

    RuleGroupReferenceStatement m_ruleGroupReferenceStatement;
    bool m_ruleGroupReferenceStatementHasBeenSet = false;

    IPSetReferenceStatement m_iPSetReferenceStatement;
    bool m_iPSetReferenceStatementHasBeenSet = false;

    RegexPatternSetReferenceStatement m_regexPatternSetReferenceStatement;
    bool m_regexPatternSetReferenceStatementHasBeenSet = false;

    std::shared_ptr<RateBasedStatement> m_rateBasedStatement;
    bool m_rateBasedStatementHasBeenSet = false;

    std::shared_ptr<AndStatement> m_andStatement;
    bool m_andStatementHasBeenSet = false;

    std::shared_ptr<OrStatement> m_orStatement;
    bool m_orStatementHasBeenSet = false;

    std::shared_ptr<NotStatement> m_notStatement;
    bool m_notStatementHasBeenSet = false;

    std::shared_ptr<ManagedRuleGroupStatement> m_managedRuleGroupStatement;
    bool m_managedRuleGroupStatementHasBeenSet = false;

    LabelMatchStatement m_labelMatchStatement;
    bool m_labelMatchStatementHasBeenSet = false;

    RegexMatchStatement m_regexMatchStatement;
    bool m_regexMatchStatementHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
