/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/CookieMatchPattern.h>
#include <aws/wafv2/model/MapMatchScope.h>
#include <aws/wafv2/model/OversizeHandling.h>
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
   * <p>Inspect the cookies in the web request. You can specify the parts of the
   * cookies to inspect and you can narrow the set of cookies to inspect by including
   * or excluding specific keys.</p> <p>This is used to indicate the web request
   * component to inspect, in the <a>FieldToMatch</a> specification. </p> <p>Example
   * JSON: <code>"Cookies": { "MatchPattern": { "All": {} }, "MatchScope": "KEY",
   * "OversizeHandling": "MATCH" }</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/Cookies">AWS API
   * Reference</a></p>
   */
  class Cookies
  {
  public:
    AWS_WAFV2_API Cookies();
    AWS_WAFV2_API Cookies(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Cookies& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The filter to use to identify the subset of cookies to inspect in a web
     * request. </p> <p>You must specify exactly one setting: either <code>All</code>,
     * <code>IncludedCookies</code>, or <code>ExcludedCookies</code>.</p> <p>Example
     * JSON: <code>"MatchPattern": { "IncludedCookies": {"KeyToInclude1",
     * "KeyToInclude2", "KeyToInclude3"} }</code> </p>
     */
    inline const CookieMatchPattern& GetMatchPattern() const{ return m_matchPattern; }

    /**
     * <p>The filter to use to identify the subset of cookies to inspect in a web
     * request. </p> <p>You must specify exactly one setting: either <code>All</code>,
     * <code>IncludedCookies</code>, or <code>ExcludedCookies</code>.</p> <p>Example
     * JSON: <code>"MatchPattern": { "IncludedCookies": {"KeyToInclude1",
     * "KeyToInclude2", "KeyToInclude3"} }</code> </p>
     */
    inline bool MatchPatternHasBeenSet() const { return m_matchPatternHasBeenSet; }

    /**
     * <p>The filter to use to identify the subset of cookies to inspect in a web
     * request. </p> <p>You must specify exactly one setting: either <code>All</code>,
     * <code>IncludedCookies</code>, or <code>ExcludedCookies</code>.</p> <p>Example
     * JSON: <code>"MatchPattern": { "IncludedCookies": {"KeyToInclude1",
     * "KeyToInclude2", "KeyToInclude3"} }</code> </p>
     */
    inline void SetMatchPattern(const CookieMatchPattern& value) { m_matchPatternHasBeenSet = true; m_matchPattern = value; }

    /**
     * <p>The filter to use to identify the subset of cookies to inspect in a web
     * request. </p> <p>You must specify exactly one setting: either <code>All</code>,
     * <code>IncludedCookies</code>, or <code>ExcludedCookies</code>.</p> <p>Example
     * JSON: <code>"MatchPattern": { "IncludedCookies": {"KeyToInclude1",
     * "KeyToInclude2", "KeyToInclude3"} }</code> </p>
     */
    inline void SetMatchPattern(CookieMatchPattern&& value) { m_matchPatternHasBeenSet = true; m_matchPattern = std::move(value); }

    /**
     * <p>The filter to use to identify the subset of cookies to inspect in a web
     * request. </p> <p>You must specify exactly one setting: either <code>All</code>,
     * <code>IncludedCookies</code>, or <code>ExcludedCookies</code>.</p> <p>Example
     * JSON: <code>"MatchPattern": { "IncludedCookies": {"KeyToInclude1",
     * "KeyToInclude2", "KeyToInclude3"} }</code> </p>
     */
    inline Cookies& WithMatchPattern(const CookieMatchPattern& value) { SetMatchPattern(value); return *this;}

    /**
     * <p>The filter to use to identify the subset of cookies to inspect in a web
     * request. </p> <p>You must specify exactly one setting: either <code>All</code>,
     * <code>IncludedCookies</code>, or <code>ExcludedCookies</code>.</p> <p>Example
     * JSON: <code>"MatchPattern": { "IncludedCookies": {"KeyToInclude1",
     * "KeyToInclude2", "KeyToInclude3"} }</code> </p>
     */
    inline Cookies& WithMatchPattern(CookieMatchPattern&& value) { SetMatchPattern(std::move(value)); return *this;}


    /**
     * <p>The parts of the cookies to inspect with the rule inspection criteria. If you
     * specify <code>All</code>, WAF inspects both keys and values. </p>
     */
    inline const MapMatchScope& GetMatchScope() const{ return m_matchScope; }

    /**
     * <p>The parts of the cookies to inspect with the rule inspection criteria. If you
     * specify <code>All</code>, WAF inspects both keys and values. </p>
     */
    inline bool MatchScopeHasBeenSet() const { return m_matchScopeHasBeenSet; }

    /**
     * <p>The parts of the cookies to inspect with the rule inspection criteria. If you
     * specify <code>All</code>, WAF inspects both keys and values. </p>
     */
    inline void SetMatchScope(const MapMatchScope& value) { m_matchScopeHasBeenSet = true; m_matchScope = value; }

    /**
     * <p>The parts of the cookies to inspect with the rule inspection criteria. If you
     * specify <code>All</code>, WAF inspects both keys and values. </p>
     */
    inline void SetMatchScope(MapMatchScope&& value) { m_matchScopeHasBeenSet = true; m_matchScope = std::move(value); }

    /**
     * <p>The parts of the cookies to inspect with the rule inspection criteria. If you
     * specify <code>All</code>, WAF inspects both keys and values. </p>
     */
    inline Cookies& WithMatchScope(const MapMatchScope& value) { SetMatchScope(value); return *this;}

    /**
     * <p>The parts of the cookies to inspect with the rule inspection criteria. If you
     * specify <code>All</code>, WAF inspects both keys and values. </p>
     */
    inline Cookies& WithMatchScope(MapMatchScope&& value) { SetMatchScope(std::move(value)); return *this;}


    /**
     * <p>What WAF should do if the cookies of the request are larger than WAF can
     * inspect. WAF does not support inspecting the entire contents of request cookies
     * when they exceed 8 KB (8192 bytes) or 200 total cookies. The underlying host
     * service forwards a maximum of 200 cookies and at most 8 KB of cookie contents to
     * WAF. </p> <p>The options for oversize handling are the following:</p> <ul> <li>
     * <p> <code>CONTINUE</code> - Inspect the cookies normally, according to the rule
     * inspection criteria. </p> </li> <li> <p> <code>MATCH</code> - Treat the web
     * request as matching the rule statement. WAF applies the rule action to the
     * request.</p> </li> <li> <p> <code>NO_MATCH</code> - Treat the web request as not
     * matching the rule statement.</p> </li> </ul>
     */
    inline const OversizeHandling& GetOversizeHandling() const{ return m_oversizeHandling; }

    /**
     * <p>What WAF should do if the cookies of the request are larger than WAF can
     * inspect. WAF does not support inspecting the entire contents of request cookies
     * when they exceed 8 KB (8192 bytes) or 200 total cookies. The underlying host
     * service forwards a maximum of 200 cookies and at most 8 KB of cookie contents to
     * WAF. </p> <p>The options for oversize handling are the following:</p> <ul> <li>
     * <p> <code>CONTINUE</code> - Inspect the cookies normally, according to the rule
     * inspection criteria. </p> </li> <li> <p> <code>MATCH</code> - Treat the web
     * request as matching the rule statement. WAF applies the rule action to the
     * request.</p> </li> <li> <p> <code>NO_MATCH</code> - Treat the web request as not
     * matching the rule statement.</p> </li> </ul>
     */
    inline bool OversizeHandlingHasBeenSet() const { return m_oversizeHandlingHasBeenSet; }

    /**
     * <p>What WAF should do if the cookies of the request are larger than WAF can
     * inspect. WAF does not support inspecting the entire contents of request cookies
     * when they exceed 8 KB (8192 bytes) or 200 total cookies. The underlying host
     * service forwards a maximum of 200 cookies and at most 8 KB of cookie contents to
     * WAF. </p> <p>The options for oversize handling are the following:</p> <ul> <li>
     * <p> <code>CONTINUE</code> - Inspect the cookies normally, according to the rule
     * inspection criteria. </p> </li> <li> <p> <code>MATCH</code> - Treat the web
     * request as matching the rule statement. WAF applies the rule action to the
     * request.</p> </li> <li> <p> <code>NO_MATCH</code> - Treat the web request as not
     * matching the rule statement.</p> </li> </ul>
     */
    inline void SetOversizeHandling(const OversizeHandling& value) { m_oversizeHandlingHasBeenSet = true; m_oversizeHandling = value; }

    /**
     * <p>What WAF should do if the cookies of the request are larger than WAF can
     * inspect. WAF does not support inspecting the entire contents of request cookies
     * when they exceed 8 KB (8192 bytes) or 200 total cookies. The underlying host
     * service forwards a maximum of 200 cookies and at most 8 KB of cookie contents to
     * WAF. </p> <p>The options for oversize handling are the following:</p> <ul> <li>
     * <p> <code>CONTINUE</code> - Inspect the cookies normally, according to the rule
     * inspection criteria. </p> </li> <li> <p> <code>MATCH</code> - Treat the web
     * request as matching the rule statement. WAF applies the rule action to the
     * request.</p> </li> <li> <p> <code>NO_MATCH</code> - Treat the web request as not
     * matching the rule statement.</p> </li> </ul>
     */
    inline void SetOversizeHandling(OversizeHandling&& value) { m_oversizeHandlingHasBeenSet = true; m_oversizeHandling = std::move(value); }

    /**
     * <p>What WAF should do if the cookies of the request are larger than WAF can
     * inspect. WAF does not support inspecting the entire contents of request cookies
     * when they exceed 8 KB (8192 bytes) or 200 total cookies. The underlying host
     * service forwards a maximum of 200 cookies and at most 8 KB of cookie contents to
     * WAF. </p> <p>The options for oversize handling are the following:</p> <ul> <li>
     * <p> <code>CONTINUE</code> - Inspect the cookies normally, according to the rule
     * inspection criteria. </p> </li> <li> <p> <code>MATCH</code> - Treat the web
     * request as matching the rule statement. WAF applies the rule action to the
     * request.</p> </li> <li> <p> <code>NO_MATCH</code> - Treat the web request as not
     * matching the rule statement.</p> </li> </ul>
     */
    inline Cookies& WithOversizeHandling(const OversizeHandling& value) { SetOversizeHandling(value); return *this;}

    /**
     * <p>What WAF should do if the cookies of the request are larger than WAF can
     * inspect. WAF does not support inspecting the entire contents of request cookies
     * when they exceed 8 KB (8192 bytes) or 200 total cookies. The underlying host
     * service forwards a maximum of 200 cookies and at most 8 KB of cookie contents to
     * WAF. </p> <p>The options for oversize handling are the following:</p> <ul> <li>
     * <p> <code>CONTINUE</code> - Inspect the cookies normally, according to the rule
     * inspection criteria. </p> </li> <li> <p> <code>MATCH</code> - Treat the web
     * request as matching the rule statement. WAF applies the rule action to the
     * request.</p> </li> <li> <p> <code>NO_MATCH</code> - Treat the web request as not
     * matching the rule statement.</p> </li> </ul>
     */
    inline Cookies& WithOversizeHandling(OversizeHandling&& value) { SetOversizeHandling(std::move(value)); return *this;}

  private:

    CookieMatchPattern m_matchPattern;
    bool m_matchPatternHasBeenSet = false;

    MapMatchScope m_matchScope;
    bool m_matchScopeHasBeenSet = false;

    OversizeHandling m_oversizeHandling;
    bool m_oversizeHandlingHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
