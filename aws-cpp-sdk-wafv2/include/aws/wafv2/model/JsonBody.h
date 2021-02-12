/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/JsonMatchPattern.h>
#include <aws/wafv2/model/JsonMatchScope.h>
#include <aws/wafv2/model/BodyParsingFallbackBehavior.h>
#include <utility>

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

  /**
   * <p>The body of a web request, inspected as JSON. The body immediately follows
   * the request headers. This is used in the <a>FieldToMatch</a> specification.</p>
   * <p>Use the specifications in this object to indicate which parts of the JSON
   * body to inspect using the rule's inspection criteria. AWS WAF inspects only the
   * parts of the JSON that result from the matches that you indicate. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/JsonBody">AWS API
   * Reference</a></p>
   */
  class AWS_WAFV2_API JsonBody
  {
  public:
    JsonBody();
    JsonBody(Aws::Utils::Json::JsonView jsonValue);
    JsonBody& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The patterns to look for in the JSON body. AWS WAF inspects the results of
     * these pattern matches against the rule inspection criteria. </p>
     */
    inline const JsonMatchPattern& GetMatchPattern() const{ return m_matchPattern; }

    /**
     * <p>The patterns to look for in the JSON body. AWS WAF inspects the results of
     * these pattern matches against the rule inspection criteria. </p>
     */
    inline bool MatchPatternHasBeenSet() const { return m_matchPatternHasBeenSet; }

    /**
     * <p>The patterns to look for in the JSON body. AWS WAF inspects the results of
     * these pattern matches against the rule inspection criteria. </p>
     */
    inline void SetMatchPattern(const JsonMatchPattern& value) { m_matchPatternHasBeenSet = true; m_matchPattern = value; }

    /**
     * <p>The patterns to look for in the JSON body. AWS WAF inspects the results of
     * these pattern matches against the rule inspection criteria. </p>
     */
    inline void SetMatchPattern(JsonMatchPattern&& value) { m_matchPatternHasBeenSet = true; m_matchPattern = std::move(value); }

    /**
     * <p>The patterns to look for in the JSON body. AWS WAF inspects the results of
     * these pattern matches against the rule inspection criteria. </p>
     */
    inline JsonBody& WithMatchPattern(const JsonMatchPattern& value) { SetMatchPattern(value); return *this;}

    /**
     * <p>The patterns to look for in the JSON body. AWS WAF inspects the results of
     * these pattern matches against the rule inspection criteria. </p>
     */
    inline JsonBody& WithMatchPattern(JsonMatchPattern&& value) { SetMatchPattern(std::move(value)); return *this;}


    /**
     * <p>The parts of the JSON to match against using the <code>MatchPattern</code>.
     * If you specify <code>All</code>, AWS WAF matches against keys and values. </p>
     */
    inline const JsonMatchScope& GetMatchScope() const{ return m_matchScope; }

    /**
     * <p>The parts of the JSON to match against using the <code>MatchPattern</code>.
     * If you specify <code>All</code>, AWS WAF matches against keys and values. </p>
     */
    inline bool MatchScopeHasBeenSet() const { return m_matchScopeHasBeenSet; }

    /**
     * <p>The parts of the JSON to match against using the <code>MatchPattern</code>.
     * If you specify <code>All</code>, AWS WAF matches against keys and values. </p>
     */
    inline void SetMatchScope(const JsonMatchScope& value) { m_matchScopeHasBeenSet = true; m_matchScope = value; }

    /**
     * <p>The parts of the JSON to match against using the <code>MatchPattern</code>.
     * If you specify <code>All</code>, AWS WAF matches against keys and values. </p>
     */
    inline void SetMatchScope(JsonMatchScope&& value) { m_matchScopeHasBeenSet = true; m_matchScope = std::move(value); }

    /**
     * <p>The parts of the JSON to match against using the <code>MatchPattern</code>.
     * If you specify <code>All</code>, AWS WAF matches against keys and values. </p>
     */
    inline JsonBody& WithMatchScope(const JsonMatchScope& value) { SetMatchScope(value); return *this;}

    /**
     * <p>The parts of the JSON to match against using the <code>MatchPattern</code>.
     * If you specify <code>All</code>, AWS WAF matches against keys and values. </p>
     */
    inline JsonBody& WithMatchScope(JsonMatchScope&& value) { SetMatchScope(std::move(value)); return *this;}


    /**
     * <p>The inspection behavior to fall back to if the JSON in the request body is
     * invalid. For AWS WAF, invalid JSON is any content that isn't complete
     * syntactical JSON, content whose root node isn't an object or an array, and
     * duplicate keys in the content. </p> <p>You can specify the following fallback
     * behaviors:</p> <ul> <li> <p> <code>MATCH</code> - Treat the web request as
     * matching the rule statement. AWS WAF applies the rule action to the request.</p>
     * </li> <li> <p> <code>NO_MATCH</code> - Treat the web request as not matching the
     * rule statement.</p> </li> <li> <p> <code>EVALUATE_AS_STRING</code> - Inspect the
     * body as plain text. This option applies the text transformations and inspection
     * criteria that you defined for the JSON inspection to the body text string. </p>
     * </li> </ul> <p>If you don't provide this setting, when AWS WAF encounters
     * invalid JSON, it parses and inspects what it can, up to the first invalid JSON
     * that it encounters. </p>
     */
    inline const BodyParsingFallbackBehavior& GetInvalidFallbackBehavior() const{ return m_invalidFallbackBehavior; }

    /**
     * <p>The inspection behavior to fall back to if the JSON in the request body is
     * invalid. For AWS WAF, invalid JSON is any content that isn't complete
     * syntactical JSON, content whose root node isn't an object or an array, and
     * duplicate keys in the content. </p> <p>You can specify the following fallback
     * behaviors:</p> <ul> <li> <p> <code>MATCH</code> - Treat the web request as
     * matching the rule statement. AWS WAF applies the rule action to the request.</p>
     * </li> <li> <p> <code>NO_MATCH</code> - Treat the web request as not matching the
     * rule statement.</p> </li> <li> <p> <code>EVALUATE_AS_STRING</code> - Inspect the
     * body as plain text. This option applies the text transformations and inspection
     * criteria that you defined for the JSON inspection to the body text string. </p>
     * </li> </ul> <p>If you don't provide this setting, when AWS WAF encounters
     * invalid JSON, it parses and inspects what it can, up to the first invalid JSON
     * that it encounters. </p>
     */
    inline bool InvalidFallbackBehaviorHasBeenSet() const { return m_invalidFallbackBehaviorHasBeenSet; }

    /**
     * <p>The inspection behavior to fall back to if the JSON in the request body is
     * invalid. For AWS WAF, invalid JSON is any content that isn't complete
     * syntactical JSON, content whose root node isn't an object or an array, and
     * duplicate keys in the content. </p> <p>You can specify the following fallback
     * behaviors:</p> <ul> <li> <p> <code>MATCH</code> - Treat the web request as
     * matching the rule statement. AWS WAF applies the rule action to the request.</p>
     * </li> <li> <p> <code>NO_MATCH</code> - Treat the web request as not matching the
     * rule statement.</p> </li> <li> <p> <code>EVALUATE_AS_STRING</code> - Inspect the
     * body as plain text. This option applies the text transformations and inspection
     * criteria that you defined for the JSON inspection to the body text string. </p>
     * </li> </ul> <p>If you don't provide this setting, when AWS WAF encounters
     * invalid JSON, it parses and inspects what it can, up to the first invalid JSON
     * that it encounters. </p>
     */
    inline void SetInvalidFallbackBehavior(const BodyParsingFallbackBehavior& value) { m_invalidFallbackBehaviorHasBeenSet = true; m_invalidFallbackBehavior = value; }

    /**
     * <p>The inspection behavior to fall back to if the JSON in the request body is
     * invalid. For AWS WAF, invalid JSON is any content that isn't complete
     * syntactical JSON, content whose root node isn't an object or an array, and
     * duplicate keys in the content. </p> <p>You can specify the following fallback
     * behaviors:</p> <ul> <li> <p> <code>MATCH</code> - Treat the web request as
     * matching the rule statement. AWS WAF applies the rule action to the request.</p>
     * </li> <li> <p> <code>NO_MATCH</code> - Treat the web request as not matching the
     * rule statement.</p> </li> <li> <p> <code>EVALUATE_AS_STRING</code> - Inspect the
     * body as plain text. This option applies the text transformations and inspection
     * criteria that you defined for the JSON inspection to the body text string. </p>
     * </li> </ul> <p>If you don't provide this setting, when AWS WAF encounters
     * invalid JSON, it parses and inspects what it can, up to the first invalid JSON
     * that it encounters. </p>
     */
    inline void SetInvalidFallbackBehavior(BodyParsingFallbackBehavior&& value) { m_invalidFallbackBehaviorHasBeenSet = true; m_invalidFallbackBehavior = std::move(value); }

    /**
     * <p>The inspection behavior to fall back to if the JSON in the request body is
     * invalid. For AWS WAF, invalid JSON is any content that isn't complete
     * syntactical JSON, content whose root node isn't an object or an array, and
     * duplicate keys in the content. </p> <p>You can specify the following fallback
     * behaviors:</p> <ul> <li> <p> <code>MATCH</code> - Treat the web request as
     * matching the rule statement. AWS WAF applies the rule action to the request.</p>
     * </li> <li> <p> <code>NO_MATCH</code> - Treat the web request as not matching the
     * rule statement.</p> </li> <li> <p> <code>EVALUATE_AS_STRING</code> - Inspect the
     * body as plain text. This option applies the text transformations and inspection
     * criteria that you defined for the JSON inspection to the body text string. </p>
     * </li> </ul> <p>If you don't provide this setting, when AWS WAF encounters
     * invalid JSON, it parses and inspects what it can, up to the first invalid JSON
     * that it encounters. </p>
     */
    inline JsonBody& WithInvalidFallbackBehavior(const BodyParsingFallbackBehavior& value) { SetInvalidFallbackBehavior(value); return *this;}

    /**
     * <p>The inspection behavior to fall back to if the JSON in the request body is
     * invalid. For AWS WAF, invalid JSON is any content that isn't complete
     * syntactical JSON, content whose root node isn't an object or an array, and
     * duplicate keys in the content. </p> <p>You can specify the following fallback
     * behaviors:</p> <ul> <li> <p> <code>MATCH</code> - Treat the web request as
     * matching the rule statement. AWS WAF applies the rule action to the request.</p>
     * </li> <li> <p> <code>NO_MATCH</code> - Treat the web request as not matching the
     * rule statement.</p> </li> <li> <p> <code>EVALUATE_AS_STRING</code> - Inspect the
     * body as plain text. This option applies the text transformations and inspection
     * criteria that you defined for the JSON inspection to the body text string. </p>
     * </li> </ul> <p>If you don't provide this setting, when AWS WAF encounters
     * invalid JSON, it parses and inspects what it can, up to the first invalid JSON
     * that it encounters. </p>
     */
    inline JsonBody& WithInvalidFallbackBehavior(BodyParsingFallbackBehavior&& value) { SetInvalidFallbackBehavior(std::move(value)); return *this;}

  private:

    JsonMatchPattern m_matchPattern;
    bool m_matchPatternHasBeenSet;

    JsonMatchScope m_matchScope;
    bool m_matchScopeHasBeenSet;

    BodyParsingFallbackBehavior m_invalidFallbackBehavior;
    bool m_invalidFallbackBehaviorHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
