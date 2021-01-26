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
#include <aws/wafv2/model/ManagedRuleGroupStatement.h>
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

  /**
   *  <p>This is the latest version of <b>AWS WAF</b>, named AWS WAFV2,
   * released in November, 2019. For information, including how to migrate your AWS
   * WAF resources from the prior release, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. </p>  <p>The processing guidance for a
   * <a>Rule</a>, used by AWS WAF to determine whether a web request matches the
   * rule. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/Statement">AWS API
   * Reference</a></p>
   */
  class AWS_WAFV2_API Statement
  {
  public:
    Statement();
    Statement(Aws::Utils::Json::JsonView jsonValue);
    Statement& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A rule statement that defines a string match search for AWS WAF to apply to
     * web requests. The byte match statement provides the bytes to search for, the
     * location in requests that you want AWS WAF to search, and other settings. The
     * bytes to search for are typically a string that corresponds with ASCII
     * characters. In the AWS WAF console and the developer guide, this is refered to
     * as a string match statement.</p>
     */
    inline const ByteMatchStatement& GetByteMatchStatement() const{ return m_byteMatchStatement; }

    /**
     * <p>A rule statement that defines a string match search for AWS WAF to apply to
     * web requests. The byte match statement provides the bytes to search for, the
     * location in requests that you want AWS WAF to search, and other settings. The
     * bytes to search for are typically a string that corresponds with ASCII
     * characters. In the AWS WAF console and the developer guide, this is refered to
     * as a string match statement.</p>
     */
    inline bool ByteMatchStatementHasBeenSet() const { return m_byteMatchStatementHasBeenSet; }

    /**
     * <p>A rule statement that defines a string match search for AWS WAF to apply to
     * web requests. The byte match statement provides the bytes to search for, the
     * location in requests that you want AWS WAF to search, and other settings. The
     * bytes to search for are typically a string that corresponds with ASCII
     * characters. In the AWS WAF console and the developer guide, this is refered to
     * as a string match statement.</p>
     */
    inline void SetByteMatchStatement(const ByteMatchStatement& value) { m_byteMatchStatementHasBeenSet = true; m_byteMatchStatement = value; }

    /**
     * <p>A rule statement that defines a string match search for AWS WAF to apply to
     * web requests. The byte match statement provides the bytes to search for, the
     * location in requests that you want AWS WAF to search, and other settings. The
     * bytes to search for are typically a string that corresponds with ASCII
     * characters. In the AWS WAF console and the developer guide, this is refered to
     * as a string match statement.</p>
     */
    inline void SetByteMatchStatement(ByteMatchStatement&& value) { m_byteMatchStatementHasBeenSet = true; m_byteMatchStatement = std::move(value); }

    /**
     * <p>A rule statement that defines a string match search for AWS WAF to apply to
     * web requests. The byte match statement provides the bytes to search for, the
     * location in requests that you want AWS WAF to search, and other settings. The
     * bytes to search for are typically a string that corresponds with ASCII
     * characters. In the AWS WAF console and the developer guide, this is refered to
     * as a string match statement.</p>
     */
    inline Statement& WithByteMatchStatement(const ByteMatchStatement& value) { SetByteMatchStatement(value); return *this;}

    /**
     * <p>A rule statement that defines a string match search for AWS WAF to apply to
     * web requests. The byte match statement provides the bytes to search for, the
     * location in requests that you want AWS WAF to search, and other settings. The
     * bytes to search for are typically a string that corresponds with ASCII
     * characters. In the AWS WAF console and the developer guide, this is refered to
     * as a string match statement.</p>
     */
    inline Statement& WithByteMatchStatement(ByteMatchStatement&& value) { SetByteMatchStatement(std::move(value)); return *this;}


    /**
     * <p>Attackers sometimes insert malicious SQL code into web requests in an effort
     * to extract data from your database. To allow or block web requests that appear
     * to contain malicious SQL code, create one or more SQL injection match
     * conditions. An SQL injection match condition identifies the part of web
     * requests, such as the URI or the query string, that you want AWS WAF to inspect.
     * Later in the process, when you create a web ACL, you specify whether to allow or
     * block requests that appear to contain malicious SQL code.</p>
     */
    inline const SqliMatchStatement& GetSqliMatchStatement() const{ return m_sqliMatchStatement; }

    /**
     * <p>Attackers sometimes insert malicious SQL code into web requests in an effort
     * to extract data from your database. To allow or block web requests that appear
     * to contain malicious SQL code, create one or more SQL injection match
     * conditions. An SQL injection match condition identifies the part of web
     * requests, such as the URI or the query string, that you want AWS WAF to inspect.
     * Later in the process, when you create a web ACL, you specify whether to allow or
     * block requests that appear to contain malicious SQL code.</p>
     */
    inline bool SqliMatchStatementHasBeenSet() const { return m_sqliMatchStatementHasBeenSet; }

    /**
     * <p>Attackers sometimes insert malicious SQL code into web requests in an effort
     * to extract data from your database. To allow or block web requests that appear
     * to contain malicious SQL code, create one or more SQL injection match
     * conditions. An SQL injection match condition identifies the part of web
     * requests, such as the URI or the query string, that you want AWS WAF to inspect.
     * Later in the process, when you create a web ACL, you specify whether to allow or
     * block requests that appear to contain malicious SQL code.</p>
     */
    inline void SetSqliMatchStatement(const SqliMatchStatement& value) { m_sqliMatchStatementHasBeenSet = true; m_sqliMatchStatement = value; }

    /**
     * <p>Attackers sometimes insert malicious SQL code into web requests in an effort
     * to extract data from your database. To allow or block web requests that appear
     * to contain malicious SQL code, create one or more SQL injection match
     * conditions. An SQL injection match condition identifies the part of web
     * requests, such as the URI or the query string, that you want AWS WAF to inspect.
     * Later in the process, when you create a web ACL, you specify whether to allow or
     * block requests that appear to contain malicious SQL code.</p>
     */
    inline void SetSqliMatchStatement(SqliMatchStatement&& value) { m_sqliMatchStatementHasBeenSet = true; m_sqliMatchStatement = std::move(value); }

    /**
     * <p>Attackers sometimes insert malicious SQL code into web requests in an effort
     * to extract data from your database. To allow or block web requests that appear
     * to contain malicious SQL code, create one or more SQL injection match
     * conditions. An SQL injection match condition identifies the part of web
     * requests, such as the URI or the query string, that you want AWS WAF to inspect.
     * Later in the process, when you create a web ACL, you specify whether to allow or
     * block requests that appear to contain malicious SQL code.</p>
     */
    inline Statement& WithSqliMatchStatement(const SqliMatchStatement& value) { SetSqliMatchStatement(value); return *this;}

    /**
     * <p>Attackers sometimes insert malicious SQL code into web requests in an effort
     * to extract data from your database. To allow or block web requests that appear
     * to contain malicious SQL code, create one or more SQL injection match
     * conditions. An SQL injection match condition identifies the part of web
     * requests, such as the URI or the query string, that you want AWS WAF to inspect.
     * Later in the process, when you create a web ACL, you specify whether to allow or
     * block requests that appear to contain malicious SQL code.</p>
     */
    inline Statement& WithSqliMatchStatement(SqliMatchStatement&& value) { SetSqliMatchStatement(std::move(value)); return *this;}


    /**
     * <p>A rule statement that defines a cross-site scripting (XSS) match search for
     * AWS WAF to apply to web requests. XSS attacks are those where the attacker uses
     * vulnerabilities in a benign website as a vehicle to inject malicious client-site
     * scripts into other legitimate web browsers. The XSS match statement provides the
     * location in requests that you want AWS WAF to search and text transformations to
     * use on the search area before AWS WAF searches for character sequences that are
     * likely to be malicious strings. </p>
     */
    inline const XssMatchStatement& GetXssMatchStatement() const{ return m_xssMatchStatement; }

    /**
     * <p>A rule statement that defines a cross-site scripting (XSS) match search for
     * AWS WAF to apply to web requests. XSS attacks are those where the attacker uses
     * vulnerabilities in a benign website as a vehicle to inject malicious client-site
     * scripts into other legitimate web browsers. The XSS match statement provides the
     * location in requests that you want AWS WAF to search and text transformations to
     * use on the search area before AWS WAF searches for character sequences that are
     * likely to be malicious strings. </p>
     */
    inline bool XssMatchStatementHasBeenSet() const { return m_xssMatchStatementHasBeenSet; }

    /**
     * <p>A rule statement that defines a cross-site scripting (XSS) match search for
     * AWS WAF to apply to web requests. XSS attacks are those where the attacker uses
     * vulnerabilities in a benign website as a vehicle to inject malicious client-site
     * scripts into other legitimate web browsers. The XSS match statement provides the
     * location in requests that you want AWS WAF to search and text transformations to
     * use on the search area before AWS WAF searches for character sequences that are
     * likely to be malicious strings. </p>
     */
    inline void SetXssMatchStatement(const XssMatchStatement& value) { m_xssMatchStatementHasBeenSet = true; m_xssMatchStatement = value; }

    /**
     * <p>A rule statement that defines a cross-site scripting (XSS) match search for
     * AWS WAF to apply to web requests. XSS attacks are those where the attacker uses
     * vulnerabilities in a benign website as a vehicle to inject malicious client-site
     * scripts into other legitimate web browsers. The XSS match statement provides the
     * location in requests that you want AWS WAF to search and text transformations to
     * use on the search area before AWS WAF searches for character sequences that are
     * likely to be malicious strings. </p>
     */
    inline void SetXssMatchStatement(XssMatchStatement&& value) { m_xssMatchStatementHasBeenSet = true; m_xssMatchStatement = std::move(value); }

    /**
     * <p>A rule statement that defines a cross-site scripting (XSS) match search for
     * AWS WAF to apply to web requests. XSS attacks are those where the attacker uses
     * vulnerabilities in a benign website as a vehicle to inject malicious client-site
     * scripts into other legitimate web browsers. The XSS match statement provides the
     * location in requests that you want AWS WAF to search and text transformations to
     * use on the search area before AWS WAF searches for character sequences that are
     * likely to be malicious strings. </p>
     */
    inline Statement& WithXssMatchStatement(const XssMatchStatement& value) { SetXssMatchStatement(value); return *this;}

    /**
     * <p>A rule statement that defines a cross-site scripting (XSS) match search for
     * AWS WAF to apply to web requests. XSS attacks are those where the attacker uses
     * vulnerabilities in a benign website as a vehicle to inject malicious client-site
     * scripts into other legitimate web browsers. The XSS match statement provides the
     * location in requests that you want AWS WAF to search and text transformations to
     * use on the search area before AWS WAF searches for character sequences that are
     * likely to be malicious strings. </p>
     */
    inline Statement& WithXssMatchStatement(XssMatchStatement&& value) { SetXssMatchStatement(std::move(value)); return *this;}


    /**
     * <p>A rule statement that compares a number of bytes against the size of a
     * request component, using a comparison operator, such as greater than (&gt;) or
     * less than (&lt;). For example, you can use a size constraint statement to look
     * for query strings that are longer than 100 bytes. </p> <p>If you configure AWS
     * WAF to inspect the request body, AWS WAF inspects only the first 8192 bytes (8
     * KB). If the request body for your web requests never exceeds 8192 bytes, you can
     * create a size constraint condition and block requests that have a request body
     * greater than 8192 bytes.</p> <p>If you choose URI for the value of Part of the
     * request to filter on, the slash (/) in the URI counts as one character. For
     * example, the URI <code>/logo.jpg</code> is nine characters long.</p>
     */
    inline const SizeConstraintStatement& GetSizeConstraintStatement() const{ return m_sizeConstraintStatement; }

    /**
     * <p>A rule statement that compares a number of bytes against the size of a
     * request component, using a comparison operator, such as greater than (&gt;) or
     * less than (&lt;). For example, you can use a size constraint statement to look
     * for query strings that are longer than 100 bytes. </p> <p>If you configure AWS
     * WAF to inspect the request body, AWS WAF inspects only the first 8192 bytes (8
     * KB). If the request body for your web requests never exceeds 8192 bytes, you can
     * create a size constraint condition and block requests that have a request body
     * greater than 8192 bytes.</p> <p>If you choose URI for the value of Part of the
     * request to filter on, the slash (/) in the URI counts as one character. For
     * example, the URI <code>/logo.jpg</code> is nine characters long.</p>
     */
    inline bool SizeConstraintStatementHasBeenSet() const { return m_sizeConstraintStatementHasBeenSet; }

    /**
     * <p>A rule statement that compares a number of bytes against the size of a
     * request component, using a comparison operator, such as greater than (&gt;) or
     * less than (&lt;). For example, you can use a size constraint statement to look
     * for query strings that are longer than 100 bytes. </p> <p>If you configure AWS
     * WAF to inspect the request body, AWS WAF inspects only the first 8192 bytes (8
     * KB). If the request body for your web requests never exceeds 8192 bytes, you can
     * create a size constraint condition and block requests that have a request body
     * greater than 8192 bytes.</p> <p>If you choose URI for the value of Part of the
     * request to filter on, the slash (/) in the URI counts as one character. For
     * example, the URI <code>/logo.jpg</code> is nine characters long.</p>
     */
    inline void SetSizeConstraintStatement(const SizeConstraintStatement& value) { m_sizeConstraintStatementHasBeenSet = true; m_sizeConstraintStatement = value; }

    /**
     * <p>A rule statement that compares a number of bytes against the size of a
     * request component, using a comparison operator, such as greater than (&gt;) or
     * less than (&lt;). For example, you can use a size constraint statement to look
     * for query strings that are longer than 100 bytes. </p> <p>If you configure AWS
     * WAF to inspect the request body, AWS WAF inspects only the first 8192 bytes (8
     * KB). If the request body for your web requests never exceeds 8192 bytes, you can
     * create a size constraint condition and block requests that have a request body
     * greater than 8192 bytes.</p> <p>If you choose URI for the value of Part of the
     * request to filter on, the slash (/) in the URI counts as one character. For
     * example, the URI <code>/logo.jpg</code> is nine characters long.</p>
     */
    inline void SetSizeConstraintStatement(SizeConstraintStatement&& value) { m_sizeConstraintStatementHasBeenSet = true; m_sizeConstraintStatement = std::move(value); }

    /**
     * <p>A rule statement that compares a number of bytes against the size of a
     * request component, using a comparison operator, such as greater than (&gt;) or
     * less than (&lt;). For example, you can use a size constraint statement to look
     * for query strings that are longer than 100 bytes. </p> <p>If you configure AWS
     * WAF to inspect the request body, AWS WAF inspects only the first 8192 bytes (8
     * KB). If the request body for your web requests never exceeds 8192 bytes, you can
     * create a size constraint condition and block requests that have a request body
     * greater than 8192 bytes.</p> <p>If you choose URI for the value of Part of the
     * request to filter on, the slash (/) in the URI counts as one character. For
     * example, the URI <code>/logo.jpg</code> is nine characters long.</p>
     */
    inline Statement& WithSizeConstraintStatement(const SizeConstraintStatement& value) { SetSizeConstraintStatement(value); return *this;}

    /**
     * <p>A rule statement that compares a number of bytes against the size of a
     * request component, using a comparison operator, such as greater than (&gt;) or
     * less than (&lt;). For example, you can use a size constraint statement to look
     * for query strings that are longer than 100 bytes. </p> <p>If you configure AWS
     * WAF to inspect the request body, AWS WAF inspects only the first 8192 bytes (8
     * KB). If the request body for your web requests never exceeds 8192 bytes, you can
     * create a size constraint condition and block requests that have a request body
     * greater than 8192 bytes.</p> <p>If you choose URI for the value of Part of the
     * request to filter on, the slash (/) in the URI counts as one character. For
     * example, the URI <code>/logo.jpg</code> is nine characters long.</p>
     */
    inline Statement& WithSizeConstraintStatement(SizeConstraintStatement&& value) { SetSizeConstraintStatement(std::move(value)); return *this;}


    /**
     * <p>A rule statement used to identify web requests based on country of origin.
     * </p>
     */
    inline const GeoMatchStatement& GetGeoMatchStatement() const{ return m_geoMatchStatement; }

    /**
     * <p>A rule statement used to identify web requests based on country of origin.
     * </p>
     */
    inline bool GeoMatchStatementHasBeenSet() const { return m_geoMatchStatementHasBeenSet; }

    /**
     * <p>A rule statement used to identify web requests based on country of origin.
     * </p>
     */
    inline void SetGeoMatchStatement(const GeoMatchStatement& value) { m_geoMatchStatementHasBeenSet = true; m_geoMatchStatement = value; }

    /**
     * <p>A rule statement used to identify web requests based on country of origin.
     * </p>
     */
    inline void SetGeoMatchStatement(GeoMatchStatement&& value) { m_geoMatchStatementHasBeenSet = true; m_geoMatchStatement = std::move(value); }

    /**
     * <p>A rule statement used to identify web requests based on country of origin.
     * </p>
     */
    inline Statement& WithGeoMatchStatement(const GeoMatchStatement& value) { SetGeoMatchStatement(value); return *this;}

    /**
     * <p>A rule statement used to identify web requests based on country of origin.
     * </p>
     */
    inline Statement& WithGeoMatchStatement(GeoMatchStatement&& value) { SetGeoMatchStatement(std::move(value)); return *this;}


    /**
     * <p>A rule statement used to run the rules that are defined in a
     * <a>RuleGroup</a>. To use this, create a rule group with your rules, then provide
     * the ARN of the rule group in this statement.</p> <p>You cannot nest a
     * <code>RuleGroupReferenceStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. It can only be referenced
     * as a top-level statement within a rule.</p>
     */
    inline const RuleGroupReferenceStatement& GetRuleGroupReferenceStatement() const{ return m_ruleGroupReferenceStatement; }

    /**
     * <p>A rule statement used to run the rules that are defined in a
     * <a>RuleGroup</a>. To use this, create a rule group with your rules, then provide
     * the ARN of the rule group in this statement.</p> <p>You cannot nest a
     * <code>RuleGroupReferenceStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. It can only be referenced
     * as a top-level statement within a rule.</p>
     */
    inline bool RuleGroupReferenceStatementHasBeenSet() const { return m_ruleGroupReferenceStatementHasBeenSet; }

    /**
     * <p>A rule statement used to run the rules that are defined in a
     * <a>RuleGroup</a>. To use this, create a rule group with your rules, then provide
     * the ARN of the rule group in this statement.</p> <p>You cannot nest a
     * <code>RuleGroupReferenceStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. It can only be referenced
     * as a top-level statement within a rule.</p>
     */
    inline void SetRuleGroupReferenceStatement(const RuleGroupReferenceStatement& value) { m_ruleGroupReferenceStatementHasBeenSet = true; m_ruleGroupReferenceStatement = value; }

    /**
     * <p>A rule statement used to run the rules that are defined in a
     * <a>RuleGroup</a>. To use this, create a rule group with your rules, then provide
     * the ARN of the rule group in this statement.</p> <p>You cannot nest a
     * <code>RuleGroupReferenceStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. It can only be referenced
     * as a top-level statement within a rule.</p>
     */
    inline void SetRuleGroupReferenceStatement(RuleGroupReferenceStatement&& value) { m_ruleGroupReferenceStatementHasBeenSet = true; m_ruleGroupReferenceStatement = std::move(value); }

    /**
     * <p>A rule statement used to run the rules that are defined in a
     * <a>RuleGroup</a>. To use this, create a rule group with your rules, then provide
     * the ARN of the rule group in this statement.</p> <p>You cannot nest a
     * <code>RuleGroupReferenceStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. It can only be referenced
     * as a top-level statement within a rule.</p>
     */
    inline Statement& WithRuleGroupReferenceStatement(const RuleGroupReferenceStatement& value) { SetRuleGroupReferenceStatement(value); return *this;}

    /**
     * <p>A rule statement used to run the rules that are defined in a
     * <a>RuleGroup</a>. To use this, create a rule group with your rules, then provide
     * the ARN of the rule group in this statement.</p> <p>You cannot nest a
     * <code>RuleGroupReferenceStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. It can only be referenced
     * as a top-level statement within a rule.</p>
     */
    inline Statement& WithRuleGroupReferenceStatement(RuleGroupReferenceStatement&& value) { SetRuleGroupReferenceStatement(std::move(value)); return *this;}


    /**
     * <p>A rule statement used to detect web requests coming from particular IP
     * addresses or address ranges. To use this, create an <a>IPSet</a> that specifies
     * the addresses you want to detect, then use the ARN of that set in this
     * statement. To create an IP set, see <a>CreateIPSet</a>.</p> <p>Each IP set rule
     * statement references an IP set. You create and maintain the set independent of
     * your rules. This allows you to use the single set in multiple rules. When you
     * update the referenced set, AWS WAF automatically updates all rules that
     * reference it.</p>
     */
    inline const IPSetReferenceStatement& GetIPSetReferenceStatement() const{ return m_iPSetReferenceStatement; }

    /**
     * <p>A rule statement used to detect web requests coming from particular IP
     * addresses or address ranges. To use this, create an <a>IPSet</a> that specifies
     * the addresses you want to detect, then use the ARN of that set in this
     * statement. To create an IP set, see <a>CreateIPSet</a>.</p> <p>Each IP set rule
     * statement references an IP set. You create and maintain the set independent of
     * your rules. This allows you to use the single set in multiple rules. When you
     * update the referenced set, AWS WAF automatically updates all rules that
     * reference it.</p>
     */
    inline bool IPSetReferenceStatementHasBeenSet() const { return m_iPSetReferenceStatementHasBeenSet; }

    /**
     * <p>A rule statement used to detect web requests coming from particular IP
     * addresses or address ranges. To use this, create an <a>IPSet</a> that specifies
     * the addresses you want to detect, then use the ARN of that set in this
     * statement. To create an IP set, see <a>CreateIPSet</a>.</p> <p>Each IP set rule
     * statement references an IP set. You create and maintain the set independent of
     * your rules. This allows you to use the single set in multiple rules. When you
     * update the referenced set, AWS WAF automatically updates all rules that
     * reference it.</p>
     */
    inline void SetIPSetReferenceStatement(const IPSetReferenceStatement& value) { m_iPSetReferenceStatementHasBeenSet = true; m_iPSetReferenceStatement = value; }

    /**
     * <p>A rule statement used to detect web requests coming from particular IP
     * addresses or address ranges. To use this, create an <a>IPSet</a> that specifies
     * the addresses you want to detect, then use the ARN of that set in this
     * statement. To create an IP set, see <a>CreateIPSet</a>.</p> <p>Each IP set rule
     * statement references an IP set. You create and maintain the set independent of
     * your rules. This allows you to use the single set in multiple rules. When you
     * update the referenced set, AWS WAF automatically updates all rules that
     * reference it.</p>
     */
    inline void SetIPSetReferenceStatement(IPSetReferenceStatement&& value) { m_iPSetReferenceStatementHasBeenSet = true; m_iPSetReferenceStatement = std::move(value); }

    /**
     * <p>A rule statement used to detect web requests coming from particular IP
     * addresses or address ranges. To use this, create an <a>IPSet</a> that specifies
     * the addresses you want to detect, then use the ARN of that set in this
     * statement. To create an IP set, see <a>CreateIPSet</a>.</p> <p>Each IP set rule
     * statement references an IP set. You create and maintain the set independent of
     * your rules. This allows you to use the single set in multiple rules. When you
     * update the referenced set, AWS WAF automatically updates all rules that
     * reference it.</p>
     */
    inline Statement& WithIPSetReferenceStatement(const IPSetReferenceStatement& value) { SetIPSetReferenceStatement(value); return *this;}

    /**
     * <p>A rule statement used to detect web requests coming from particular IP
     * addresses or address ranges. To use this, create an <a>IPSet</a> that specifies
     * the addresses you want to detect, then use the ARN of that set in this
     * statement. To create an IP set, see <a>CreateIPSet</a>.</p> <p>Each IP set rule
     * statement references an IP set. You create and maintain the set independent of
     * your rules. This allows you to use the single set in multiple rules. When you
     * update the referenced set, AWS WAF automatically updates all rules that
     * reference it.</p>
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
     * update the referenced set, AWS WAF automatically updates all rules that
     * reference it.</p>
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
     * update the referenced set, AWS WAF automatically updates all rules that
     * reference it.</p>
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
     * update the referenced set, AWS WAF automatically updates all rules that
     * reference it.</p>
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
     * update the referenced set, AWS WAF automatically updates all rules that
     * reference it.</p>
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
     * update the referenced set, AWS WAF automatically updates all rules that
     * reference it.</p>
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
     * update the referenced set, AWS WAF automatically updates all rules that
     * reference it.</p>
     */
    inline Statement& WithRegexPatternSetReferenceStatement(RegexPatternSetReferenceStatement&& value) { SetRegexPatternSetReferenceStatement(std::move(value)); return *this;}


    /**
     * <p>A rate-based rule tracks the rate of requests for each originating IP
     * address, and triggers the rule action when the rate exceeds a limit that you
     * specify on the number of requests in any 5-minute time span. You can use this to
     * put a temporary block on requests from an IP address that is sending excessive
     * requests.</p> <p>When the rule action triggers, AWS WAF blocks additional
     * requests from the IP address until the request rate falls below the limit.</p>
     * <p>You can optionally nest another statement inside the rate-based statement, to
     * narrow the scope of the rule so that it only counts requests that match the
     * nested statement. For example, based on recent requests that you have seen from
     * an attacker, you might create a rate-based rule with a nested AND rule statement
     * that contains the following nested statements:</p> <ul> <li> <p>An IP match
     * statement with an IP set that specified the address 192.0.2.44.</p> </li> <li>
     * <p>A string match statement that searches in the User-Agent header for the
     * string BadBot.</p> </li> </ul> <p>In this rate-based rule, you also define a
     * rate limit. For this example, the rate limit is 1,000. Requests that meet both
     * of the conditions in the statements are counted. If the count exceeds 1,000
     * requests per five minutes, the rule action triggers. Requests that do not meet
     * both conditions are not counted towards the rate limit and are not affected by
     * this rule.</p> <p>You cannot nest a <code>RateBasedStatement</code>, for example
     * for use inside a <code>NotStatement</code> or <code>OrStatement</code>. It can
     * only be referenced as a top-level statement within a rule.</p>
     */
    const RateBasedStatement& GetRateBasedStatement() const;

    /**
     * <p>A rate-based rule tracks the rate of requests for each originating IP
     * address, and triggers the rule action when the rate exceeds a limit that you
     * specify on the number of requests in any 5-minute time span. You can use this to
     * put a temporary block on requests from an IP address that is sending excessive
     * requests.</p> <p>When the rule action triggers, AWS WAF blocks additional
     * requests from the IP address until the request rate falls below the limit.</p>
     * <p>You can optionally nest another statement inside the rate-based statement, to
     * narrow the scope of the rule so that it only counts requests that match the
     * nested statement. For example, based on recent requests that you have seen from
     * an attacker, you might create a rate-based rule with a nested AND rule statement
     * that contains the following nested statements:</p> <ul> <li> <p>An IP match
     * statement with an IP set that specified the address 192.0.2.44.</p> </li> <li>
     * <p>A string match statement that searches in the User-Agent header for the
     * string BadBot.</p> </li> </ul> <p>In this rate-based rule, you also define a
     * rate limit. For this example, the rate limit is 1,000. Requests that meet both
     * of the conditions in the statements are counted. If the count exceeds 1,000
     * requests per five minutes, the rule action triggers. Requests that do not meet
     * both conditions are not counted towards the rate limit and are not affected by
     * this rule.</p> <p>You cannot nest a <code>RateBasedStatement</code>, for example
     * for use inside a <code>NotStatement</code> or <code>OrStatement</code>. It can
     * only be referenced as a top-level statement within a rule.</p>
     */
    bool RateBasedStatementHasBeenSet() const;

    /**
     * <p>A rate-based rule tracks the rate of requests for each originating IP
     * address, and triggers the rule action when the rate exceeds a limit that you
     * specify on the number of requests in any 5-minute time span. You can use this to
     * put a temporary block on requests from an IP address that is sending excessive
     * requests.</p> <p>When the rule action triggers, AWS WAF blocks additional
     * requests from the IP address until the request rate falls below the limit.</p>
     * <p>You can optionally nest another statement inside the rate-based statement, to
     * narrow the scope of the rule so that it only counts requests that match the
     * nested statement. For example, based on recent requests that you have seen from
     * an attacker, you might create a rate-based rule with a nested AND rule statement
     * that contains the following nested statements:</p> <ul> <li> <p>An IP match
     * statement with an IP set that specified the address 192.0.2.44.</p> </li> <li>
     * <p>A string match statement that searches in the User-Agent header for the
     * string BadBot.</p> </li> </ul> <p>In this rate-based rule, you also define a
     * rate limit. For this example, the rate limit is 1,000. Requests that meet both
     * of the conditions in the statements are counted. If the count exceeds 1,000
     * requests per five minutes, the rule action triggers. Requests that do not meet
     * both conditions are not counted towards the rate limit and are not affected by
     * this rule.</p> <p>You cannot nest a <code>RateBasedStatement</code>, for example
     * for use inside a <code>NotStatement</code> or <code>OrStatement</code>. It can
     * only be referenced as a top-level statement within a rule.</p>
     */
    void SetRateBasedStatement(const RateBasedStatement& value);

    /**
     * <p>A rate-based rule tracks the rate of requests for each originating IP
     * address, and triggers the rule action when the rate exceeds a limit that you
     * specify on the number of requests in any 5-minute time span. You can use this to
     * put a temporary block on requests from an IP address that is sending excessive
     * requests.</p> <p>When the rule action triggers, AWS WAF blocks additional
     * requests from the IP address until the request rate falls below the limit.</p>
     * <p>You can optionally nest another statement inside the rate-based statement, to
     * narrow the scope of the rule so that it only counts requests that match the
     * nested statement. For example, based on recent requests that you have seen from
     * an attacker, you might create a rate-based rule with a nested AND rule statement
     * that contains the following nested statements:</p> <ul> <li> <p>An IP match
     * statement with an IP set that specified the address 192.0.2.44.</p> </li> <li>
     * <p>A string match statement that searches in the User-Agent header for the
     * string BadBot.</p> </li> </ul> <p>In this rate-based rule, you also define a
     * rate limit. For this example, the rate limit is 1,000. Requests that meet both
     * of the conditions in the statements are counted. If the count exceeds 1,000
     * requests per five minutes, the rule action triggers. Requests that do not meet
     * both conditions are not counted towards the rate limit and are not affected by
     * this rule.</p> <p>You cannot nest a <code>RateBasedStatement</code>, for example
     * for use inside a <code>NotStatement</code> or <code>OrStatement</code>. It can
     * only be referenced as a top-level statement within a rule.</p>
     */
    void SetRateBasedStatement(RateBasedStatement&& value);

    /**
     * <p>A rate-based rule tracks the rate of requests for each originating IP
     * address, and triggers the rule action when the rate exceeds a limit that you
     * specify on the number of requests in any 5-minute time span. You can use this to
     * put a temporary block on requests from an IP address that is sending excessive
     * requests.</p> <p>When the rule action triggers, AWS WAF blocks additional
     * requests from the IP address until the request rate falls below the limit.</p>
     * <p>You can optionally nest another statement inside the rate-based statement, to
     * narrow the scope of the rule so that it only counts requests that match the
     * nested statement. For example, based on recent requests that you have seen from
     * an attacker, you might create a rate-based rule with a nested AND rule statement
     * that contains the following nested statements:</p> <ul> <li> <p>An IP match
     * statement with an IP set that specified the address 192.0.2.44.</p> </li> <li>
     * <p>A string match statement that searches in the User-Agent header for the
     * string BadBot.</p> </li> </ul> <p>In this rate-based rule, you also define a
     * rate limit. For this example, the rate limit is 1,000. Requests that meet both
     * of the conditions in the statements are counted. If the count exceeds 1,000
     * requests per five minutes, the rule action triggers. Requests that do not meet
     * both conditions are not counted towards the rate limit and are not affected by
     * this rule.</p> <p>You cannot nest a <code>RateBasedStatement</code>, for example
     * for use inside a <code>NotStatement</code> or <code>OrStatement</code>. It can
     * only be referenced as a top-level statement within a rule.</p>
     */
    Statement& WithRateBasedStatement(const RateBasedStatement& value);

    /**
     * <p>A rate-based rule tracks the rate of requests for each originating IP
     * address, and triggers the rule action when the rate exceeds a limit that you
     * specify on the number of requests in any 5-minute time span. You can use this to
     * put a temporary block on requests from an IP address that is sending excessive
     * requests.</p> <p>When the rule action triggers, AWS WAF blocks additional
     * requests from the IP address until the request rate falls below the limit.</p>
     * <p>You can optionally nest another statement inside the rate-based statement, to
     * narrow the scope of the rule so that it only counts requests that match the
     * nested statement. For example, based on recent requests that you have seen from
     * an attacker, you might create a rate-based rule with a nested AND rule statement
     * that contains the following nested statements:</p> <ul> <li> <p>An IP match
     * statement with an IP set that specified the address 192.0.2.44.</p> </li> <li>
     * <p>A string match statement that searches in the User-Agent header for the
     * string BadBot.</p> </li> </ul> <p>In this rate-based rule, you also define a
     * rate limit. For this example, the rate limit is 1,000. Requests that meet both
     * of the conditions in the statements are counted. If the count exceeds 1,000
     * requests per five minutes, the rule action triggers. Requests that do not meet
     * both conditions are not counted towards the rate limit and are not affected by
     * this rule.</p> <p>You cannot nest a <code>RateBasedStatement</code>, for example
     * for use inside a <code>NotStatement</code> or <code>OrStatement</code>. It can
     * only be referenced as a top-level statement within a rule.</p>
     */
    Statement& WithRateBasedStatement(RateBasedStatement&& value);


    /**
     * <p>A logical rule statement used to combine other rule statements with AND
     * logic. You provide more than one <a>Statement</a> within the
     * <code>AndStatement</code>. </p>
     */
    const AndStatement& GetAndStatement() const;

    /**
     * <p>A logical rule statement used to combine other rule statements with AND
     * logic. You provide more than one <a>Statement</a> within the
     * <code>AndStatement</code>. </p>
     */
    bool AndStatementHasBeenSet() const;

    /**
     * <p>A logical rule statement used to combine other rule statements with AND
     * logic. You provide more than one <a>Statement</a> within the
     * <code>AndStatement</code>. </p>
     */
    void SetAndStatement(const AndStatement& value);

    /**
     * <p>A logical rule statement used to combine other rule statements with AND
     * logic. You provide more than one <a>Statement</a> within the
     * <code>AndStatement</code>. </p>
     */
    void SetAndStatement(AndStatement&& value);

    /**
     * <p>A logical rule statement used to combine other rule statements with AND
     * logic. You provide more than one <a>Statement</a> within the
     * <code>AndStatement</code>. </p>
     */
    Statement& WithAndStatement(const AndStatement& value);

    /**
     * <p>A logical rule statement used to combine other rule statements with AND
     * logic. You provide more than one <a>Statement</a> within the
     * <code>AndStatement</code>. </p>
     */
    Statement& WithAndStatement(AndStatement&& value);


    /**
     * <p>A logical rule statement used to combine other rule statements with OR logic.
     * You provide more than one <a>Statement</a> within the <code>OrStatement</code>.
     * </p>
     */
    const OrStatement& GetOrStatement() const;

    /**
     * <p>A logical rule statement used to combine other rule statements with OR logic.
     * You provide more than one <a>Statement</a> within the <code>OrStatement</code>.
     * </p>
     */
    bool OrStatementHasBeenSet() const;

    /**
     * <p>A logical rule statement used to combine other rule statements with OR logic.
     * You provide more than one <a>Statement</a> within the <code>OrStatement</code>.
     * </p>
     */
    void SetOrStatement(const OrStatement& value);

    /**
     * <p>A logical rule statement used to combine other rule statements with OR logic.
     * You provide more than one <a>Statement</a> within the <code>OrStatement</code>.
     * </p>
     */
    void SetOrStatement(OrStatement&& value);

    /**
     * <p>A logical rule statement used to combine other rule statements with OR logic.
     * You provide more than one <a>Statement</a> within the <code>OrStatement</code>.
     * </p>
     */
    Statement& WithOrStatement(const OrStatement& value);

    /**
     * <p>A logical rule statement used to combine other rule statements with OR logic.
     * You provide more than one <a>Statement</a> within the <code>OrStatement</code>.
     * </p>
     */
    Statement& WithOrStatement(OrStatement&& value);


    /**
     * <p>A logical rule statement used to negate the results of another rule
     * statement. You provide one <a>Statement</a> within the
     * <code>NotStatement</code>.</p>
     */
    const NotStatement& GetNotStatement() const;

    /**
     * <p>A logical rule statement used to negate the results of another rule
     * statement. You provide one <a>Statement</a> within the
     * <code>NotStatement</code>.</p>
     */
    bool NotStatementHasBeenSet() const;

    /**
     * <p>A logical rule statement used to negate the results of another rule
     * statement. You provide one <a>Statement</a> within the
     * <code>NotStatement</code>.</p>
     */
    void SetNotStatement(const NotStatement& value);

    /**
     * <p>A logical rule statement used to negate the results of another rule
     * statement. You provide one <a>Statement</a> within the
     * <code>NotStatement</code>.</p>
     */
    void SetNotStatement(NotStatement&& value);

    /**
     * <p>A logical rule statement used to negate the results of another rule
     * statement. You provide one <a>Statement</a> within the
     * <code>NotStatement</code>.</p>
     */
    Statement& WithNotStatement(const NotStatement& value);

    /**
     * <p>A logical rule statement used to negate the results of another rule
     * statement. You provide one <a>Statement</a> within the
     * <code>NotStatement</code>.</p>
     */
    Statement& WithNotStatement(NotStatement&& value);


    /**
     * <p>A rule statement used to run the rules that are defined in a managed rule
     * group. To use this, provide the vendor name and the name of the rule group in
     * this statement. You can retrieve the required names by calling
     * <a>ListAvailableManagedRuleGroups</a>.</p> <p>You can't nest a
     * <code>ManagedRuleGroupStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. It can only be referenced
     * as a top-level statement within a rule.</p>
     */
    inline const ManagedRuleGroupStatement& GetManagedRuleGroupStatement() const{ return m_managedRuleGroupStatement; }

    /**
     * <p>A rule statement used to run the rules that are defined in a managed rule
     * group. To use this, provide the vendor name and the name of the rule group in
     * this statement. You can retrieve the required names by calling
     * <a>ListAvailableManagedRuleGroups</a>.</p> <p>You can't nest a
     * <code>ManagedRuleGroupStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. It can only be referenced
     * as a top-level statement within a rule.</p>
     */
    inline bool ManagedRuleGroupStatementHasBeenSet() const { return m_managedRuleGroupStatementHasBeenSet; }

    /**
     * <p>A rule statement used to run the rules that are defined in a managed rule
     * group. To use this, provide the vendor name and the name of the rule group in
     * this statement. You can retrieve the required names by calling
     * <a>ListAvailableManagedRuleGroups</a>.</p> <p>You can't nest a
     * <code>ManagedRuleGroupStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. It can only be referenced
     * as a top-level statement within a rule.</p>
     */
    inline void SetManagedRuleGroupStatement(const ManagedRuleGroupStatement& value) { m_managedRuleGroupStatementHasBeenSet = true; m_managedRuleGroupStatement = value; }

    /**
     * <p>A rule statement used to run the rules that are defined in a managed rule
     * group. To use this, provide the vendor name and the name of the rule group in
     * this statement. You can retrieve the required names by calling
     * <a>ListAvailableManagedRuleGroups</a>.</p> <p>You can't nest a
     * <code>ManagedRuleGroupStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. It can only be referenced
     * as a top-level statement within a rule.</p>
     */
    inline void SetManagedRuleGroupStatement(ManagedRuleGroupStatement&& value) { m_managedRuleGroupStatementHasBeenSet = true; m_managedRuleGroupStatement = std::move(value); }

    /**
     * <p>A rule statement used to run the rules that are defined in a managed rule
     * group. To use this, provide the vendor name and the name of the rule group in
     * this statement. You can retrieve the required names by calling
     * <a>ListAvailableManagedRuleGroups</a>.</p> <p>You can't nest a
     * <code>ManagedRuleGroupStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. It can only be referenced
     * as a top-level statement within a rule.</p>
     */
    inline Statement& WithManagedRuleGroupStatement(const ManagedRuleGroupStatement& value) { SetManagedRuleGroupStatement(value); return *this;}

    /**
     * <p>A rule statement used to run the rules that are defined in a managed rule
     * group. To use this, provide the vendor name and the name of the rule group in
     * this statement. You can retrieve the required names by calling
     * <a>ListAvailableManagedRuleGroups</a>.</p> <p>You can't nest a
     * <code>ManagedRuleGroupStatement</code>, for example for use inside a
     * <code>NotStatement</code> or <code>OrStatement</code>. It can only be referenced
     * as a top-level statement within a rule.</p>
     */
    inline Statement& WithManagedRuleGroupStatement(ManagedRuleGroupStatement&& value) { SetManagedRuleGroupStatement(std::move(value)); return *this;}

  private:

    ByteMatchStatement m_byteMatchStatement;
    bool m_byteMatchStatementHasBeenSet;

    SqliMatchStatement m_sqliMatchStatement;
    bool m_sqliMatchStatementHasBeenSet;

    XssMatchStatement m_xssMatchStatement;
    bool m_xssMatchStatementHasBeenSet;

    SizeConstraintStatement m_sizeConstraintStatement;
    bool m_sizeConstraintStatementHasBeenSet;

    GeoMatchStatement m_geoMatchStatement;
    bool m_geoMatchStatementHasBeenSet;

    RuleGroupReferenceStatement m_ruleGroupReferenceStatement;
    bool m_ruleGroupReferenceStatementHasBeenSet;

    IPSetReferenceStatement m_iPSetReferenceStatement;
    bool m_iPSetReferenceStatementHasBeenSet;

    RegexPatternSetReferenceStatement m_regexPatternSetReferenceStatement;
    bool m_regexPatternSetReferenceStatementHasBeenSet;

    std::shared_ptr<RateBasedStatement> m_rateBasedStatement;
    bool m_rateBasedStatementHasBeenSet;

    std::shared_ptr<AndStatement> m_andStatement;
    bool m_andStatementHasBeenSet;

    std::shared_ptr<OrStatement> m_orStatement;
    bool m_orStatementHasBeenSet;

    std::shared_ptr<NotStatement> m_notStatement;
    bool m_notStatementHasBeenSet;

    ManagedRuleGroupStatement m_managedRuleGroupStatement;
    bool m_managedRuleGroupStatementHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
