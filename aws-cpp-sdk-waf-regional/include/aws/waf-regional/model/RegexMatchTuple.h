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
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/FieldToMatch.h>
#include <aws/waf-regional/model/TextTransformation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace WAFRegional
{
namespace Model
{

  /**
   * <p>The regular expression pattern that you want AWS WAF to search for in web
   * requests, the location in requests that you want AWS WAF to search, and other
   * settings. Each <code>RegexMatchTuple</code> object contains: </p> <ul> <li>
   * <p>The part of a web request that you want AWS WAF to inspect, such as a query
   * string or the value of the <code>User-Agent</code> header. </p> </li> <li>
   * <p>The identifier of the pattern (a regular expression) that you want AWS WAF to
   * look for. For more information, see <a>RegexPatternSet</a>. </p> </li> <li>
   * <p>Whether to perform any conversions on the request, such as converting it to
   * lowercase, before inspecting it for the specified string.</p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/RegexMatchTuple">AWS
   * API Reference</a></p>
   */
  class AWS_WAFREGIONAL_API RegexMatchTuple
  {
  public:
    RegexMatchTuple();
    RegexMatchTuple(Aws::Utils::Json::JsonView jsonValue);
    RegexMatchTuple& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies where in a web request to look for the
     * <code>RegexPatternSet</code>.</p>
     */
    inline const FieldToMatch& GetFieldToMatch() const{ return m_fieldToMatch; }

    /**
     * <p>Specifies where in a web request to look for the
     * <code>RegexPatternSet</code>.</p>
     */
    inline bool FieldToMatchHasBeenSet() const { return m_fieldToMatchHasBeenSet; }

    /**
     * <p>Specifies where in a web request to look for the
     * <code>RegexPatternSet</code>.</p>
     */
    inline void SetFieldToMatch(const FieldToMatch& value) { m_fieldToMatchHasBeenSet = true; m_fieldToMatch = value; }

    /**
     * <p>Specifies where in a web request to look for the
     * <code>RegexPatternSet</code>.</p>
     */
    inline void SetFieldToMatch(FieldToMatch&& value) { m_fieldToMatchHasBeenSet = true; m_fieldToMatch = std::move(value); }

    /**
     * <p>Specifies where in a web request to look for the
     * <code>RegexPatternSet</code>.</p>
     */
    inline RegexMatchTuple& WithFieldToMatch(const FieldToMatch& value) { SetFieldToMatch(value); return *this;}

    /**
     * <p>Specifies where in a web request to look for the
     * <code>RegexPatternSet</code>.</p>
     */
    inline RegexMatchTuple& WithFieldToMatch(FieldToMatch&& value) { SetFieldToMatch(std::move(value)); return *this;}


    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass AWS WAF. If you specify a
     * transformation, AWS WAF performs the transformation on
     * <code>RegexPatternSet</code> before inspecting a request for a match.</p> <p>You
     * can only specify a single type of TextTransformation.</p> <p> <b>CMD_LINE</b>
     * </p> <p>When you're concerned that attackers are injecting an operating system
     * commandline command and using unusual formatting to disguise some or all of the
     * command, use this option to perform the following transformations:</p> <ul> <li>
     * <p>Delete the following characters: \ " ' ^</p> </li> <li> <p>Delete spaces
     * before the following characters: / (</p> </li> <li> <p>Replace the following
     * characters with a space: , ;</p> </li> <li> <p>Replace multiple spaces with one
     * space</p> </li> <li> <p>Convert uppercase letters (A-Z) to lowercase (a-z)</p>
     * </li> </ul> <p> <b>COMPRESS_WHITE_SPACE</b> </p> <p>Use this option to replace
     * the following characters with a space character (decimal 32):</p> <ul> <li>
     * <p>\f, formfeed, decimal 12</p> </li> <li> <p>\t, tab, decimal 9</p> </li> <li>
     * <p>\n, newline, decimal 10</p> </li> <li> <p>\r, carriage return, decimal 13</p>
     * </li> <li> <p>\v, vertical tab, decimal 11</p> </li> <li> <p>non-breaking space,
     * decimal 160</p> </li> </ul> <p> <code>COMPRESS_WHITE_SPACE</code> also replaces
     * multiple spaces with one space.</p> <p> <b>HTML_ENTITY_DECODE</b> </p> <p>Use
     * this option to replace HTML-encoded characters with unencoded characters.
     * <code>HTML_ENTITY_DECODE</code> performs the following operations:</p> <ul> <li>
     * <p>Replaces <code>(ampersand)quot;</code> with <code>"</code> </p> </li> <li>
     * <p>Replaces <code>(ampersand)nbsp;</code> with a non-breaking space, decimal
     * 160</p> </li> <li> <p>Replaces <code>(ampersand)lt;</code> with a "less than"
     * symbol</p> </li> <li> <p>Replaces <code>(ampersand)gt;</code> with
     * <code>&gt;</code> </p> </li> <li> <p>Replaces characters that are represented in
     * hexadecimal format, <code>(ampersand)#xhhhh;</code>, with the corresponding
     * characters</p> </li> <li> <p>Replaces characters that are represented in decimal
     * format, <code>(ampersand)#nnnn;</code>, with the corresponding characters</p>
     * </li> </ul> <p> <b>LOWERCASE</b> </p> <p>Use this option to convert uppercase
     * letters (A-Z) to lowercase (a-z).</p> <p> <b>URL_DECODE</b> </p> <p>Use this
     * option to decode a URL-encoded value.</p> <p> <b>NONE</b> </p> <p>Specify
     * <code>NONE</code> if you don't want to perform any text transformations.</p>
     */
    inline const TextTransformation& GetTextTransformation() const{ return m_textTransformation; }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass AWS WAF. If you specify a
     * transformation, AWS WAF performs the transformation on
     * <code>RegexPatternSet</code> before inspecting a request for a match.</p> <p>You
     * can only specify a single type of TextTransformation.</p> <p> <b>CMD_LINE</b>
     * </p> <p>When you're concerned that attackers are injecting an operating system
     * commandline command and using unusual formatting to disguise some or all of the
     * command, use this option to perform the following transformations:</p> <ul> <li>
     * <p>Delete the following characters: \ " ' ^</p> </li> <li> <p>Delete spaces
     * before the following characters: / (</p> </li> <li> <p>Replace the following
     * characters with a space: , ;</p> </li> <li> <p>Replace multiple spaces with one
     * space</p> </li> <li> <p>Convert uppercase letters (A-Z) to lowercase (a-z)</p>
     * </li> </ul> <p> <b>COMPRESS_WHITE_SPACE</b> </p> <p>Use this option to replace
     * the following characters with a space character (decimal 32):</p> <ul> <li>
     * <p>\f, formfeed, decimal 12</p> </li> <li> <p>\t, tab, decimal 9</p> </li> <li>
     * <p>\n, newline, decimal 10</p> </li> <li> <p>\r, carriage return, decimal 13</p>
     * </li> <li> <p>\v, vertical tab, decimal 11</p> </li> <li> <p>non-breaking space,
     * decimal 160</p> </li> </ul> <p> <code>COMPRESS_WHITE_SPACE</code> also replaces
     * multiple spaces with one space.</p> <p> <b>HTML_ENTITY_DECODE</b> </p> <p>Use
     * this option to replace HTML-encoded characters with unencoded characters.
     * <code>HTML_ENTITY_DECODE</code> performs the following operations:</p> <ul> <li>
     * <p>Replaces <code>(ampersand)quot;</code> with <code>"</code> </p> </li> <li>
     * <p>Replaces <code>(ampersand)nbsp;</code> with a non-breaking space, decimal
     * 160</p> </li> <li> <p>Replaces <code>(ampersand)lt;</code> with a "less than"
     * symbol</p> </li> <li> <p>Replaces <code>(ampersand)gt;</code> with
     * <code>&gt;</code> </p> </li> <li> <p>Replaces characters that are represented in
     * hexadecimal format, <code>(ampersand)#xhhhh;</code>, with the corresponding
     * characters</p> </li> <li> <p>Replaces characters that are represented in decimal
     * format, <code>(ampersand)#nnnn;</code>, with the corresponding characters</p>
     * </li> </ul> <p> <b>LOWERCASE</b> </p> <p>Use this option to convert uppercase
     * letters (A-Z) to lowercase (a-z).</p> <p> <b>URL_DECODE</b> </p> <p>Use this
     * option to decode a URL-encoded value.</p> <p> <b>NONE</b> </p> <p>Specify
     * <code>NONE</code> if you don't want to perform any text transformations.</p>
     */
    inline bool TextTransformationHasBeenSet() const { return m_textTransformationHasBeenSet; }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass AWS WAF. If you specify a
     * transformation, AWS WAF performs the transformation on
     * <code>RegexPatternSet</code> before inspecting a request for a match.</p> <p>You
     * can only specify a single type of TextTransformation.</p> <p> <b>CMD_LINE</b>
     * </p> <p>When you're concerned that attackers are injecting an operating system
     * commandline command and using unusual formatting to disguise some or all of the
     * command, use this option to perform the following transformations:</p> <ul> <li>
     * <p>Delete the following characters: \ " ' ^</p> </li> <li> <p>Delete spaces
     * before the following characters: / (</p> </li> <li> <p>Replace the following
     * characters with a space: , ;</p> </li> <li> <p>Replace multiple spaces with one
     * space</p> </li> <li> <p>Convert uppercase letters (A-Z) to lowercase (a-z)</p>
     * </li> </ul> <p> <b>COMPRESS_WHITE_SPACE</b> </p> <p>Use this option to replace
     * the following characters with a space character (decimal 32):</p> <ul> <li>
     * <p>\f, formfeed, decimal 12</p> </li> <li> <p>\t, tab, decimal 9</p> </li> <li>
     * <p>\n, newline, decimal 10</p> </li> <li> <p>\r, carriage return, decimal 13</p>
     * </li> <li> <p>\v, vertical tab, decimal 11</p> </li> <li> <p>non-breaking space,
     * decimal 160</p> </li> </ul> <p> <code>COMPRESS_WHITE_SPACE</code> also replaces
     * multiple spaces with one space.</p> <p> <b>HTML_ENTITY_DECODE</b> </p> <p>Use
     * this option to replace HTML-encoded characters with unencoded characters.
     * <code>HTML_ENTITY_DECODE</code> performs the following operations:</p> <ul> <li>
     * <p>Replaces <code>(ampersand)quot;</code> with <code>"</code> </p> </li> <li>
     * <p>Replaces <code>(ampersand)nbsp;</code> with a non-breaking space, decimal
     * 160</p> </li> <li> <p>Replaces <code>(ampersand)lt;</code> with a "less than"
     * symbol</p> </li> <li> <p>Replaces <code>(ampersand)gt;</code> with
     * <code>&gt;</code> </p> </li> <li> <p>Replaces characters that are represented in
     * hexadecimal format, <code>(ampersand)#xhhhh;</code>, with the corresponding
     * characters</p> </li> <li> <p>Replaces characters that are represented in decimal
     * format, <code>(ampersand)#nnnn;</code>, with the corresponding characters</p>
     * </li> </ul> <p> <b>LOWERCASE</b> </p> <p>Use this option to convert uppercase
     * letters (A-Z) to lowercase (a-z).</p> <p> <b>URL_DECODE</b> </p> <p>Use this
     * option to decode a URL-encoded value.</p> <p> <b>NONE</b> </p> <p>Specify
     * <code>NONE</code> if you don't want to perform any text transformations.</p>
     */
    inline void SetTextTransformation(const TextTransformation& value) { m_textTransformationHasBeenSet = true; m_textTransformation = value; }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass AWS WAF. If you specify a
     * transformation, AWS WAF performs the transformation on
     * <code>RegexPatternSet</code> before inspecting a request for a match.</p> <p>You
     * can only specify a single type of TextTransformation.</p> <p> <b>CMD_LINE</b>
     * </p> <p>When you're concerned that attackers are injecting an operating system
     * commandline command and using unusual formatting to disguise some or all of the
     * command, use this option to perform the following transformations:</p> <ul> <li>
     * <p>Delete the following characters: \ " ' ^</p> </li> <li> <p>Delete spaces
     * before the following characters: / (</p> </li> <li> <p>Replace the following
     * characters with a space: , ;</p> </li> <li> <p>Replace multiple spaces with one
     * space</p> </li> <li> <p>Convert uppercase letters (A-Z) to lowercase (a-z)</p>
     * </li> </ul> <p> <b>COMPRESS_WHITE_SPACE</b> </p> <p>Use this option to replace
     * the following characters with a space character (decimal 32):</p> <ul> <li>
     * <p>\f, formfeed, decimal 12</p> </li> <li> <p>\t, tab, decimal 9</p> </li> <li>
     * <p>\n, newline, decimal 10</p> </li> <li> <p>\r, carriage return, decimal 13</p>
     * </li> <li> <p>\v, vertical tab, decimal 11</p> </li> <li> <p>non-breaking space,
     * decimal 160</p> </li> </ul> <p> <code>COMPRESS_WHITE_SPACE</code> also replaces
     * multiple spaces with one space.</p> <p> <b>HTML_ENTITY_DECODE</b> </p> <p>Use
     * this option to replace HTML-encoded characters with unencoded characters.
     * <code>HTML_ENTITY_DECODE</code> performs the following operations:</p> <ul> <li>
     * <p>Replaces <code>(ampersand)quot;</code> with <code>"</code> </p> </li> <li>
     * <p>Replaces <code>(ampersand)nbsp;</code> with a non-breaking space, decimal
     * 160</p> </li> <li> <p>Replaces <code>(ampersand)lt;</code> with a "less than"
     * symbol</p> </li> <li> <p>Replaces <code>(ampersand)gt;</code> with
     * <code>&gt;</code> </p> </li> <li> <p>Replaces characters that are represented in
     * hexadecimal format, <code>(ampersand)#xhhhh;</code>, with the corresponding
     * characters</p> </li> <li> <p>Replaces characters that are represented in decimal
     * format, <code>(ampersand)#nnnn;</code>, with the corresponding characters</p>
     * </li> </ul> <p> <b>LOWERCASE</b> </p> <p>Use this option to convert uppercase
     * letters (A-Z) to lowercase (a-z).</p> <p> <b>URL_DECODE</b> </p> <p>Use this
     * option to decode a URL-encoded value.</p> <p> <b>NONE</b> </p> <p>Specify
     * <code>NONE</code> if you don't want to perform any text transformations.</p>
     */
    inline void SetTextTransformation(TextTransformation&& value) { m_textTransformationHasBeenSet = true; m_textTransformation = std::move(value); }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass AWS WAF. If you specify a
     * transformation, AWS WAF performs the transformation on
     * <code>RegexPatternSet</code> before inspecting a request for a match.</p> <p>You
     * can only specify a single type of TextTransformation.</p> <p> <b>CMD_LINE</b>
     * </p> <p>When you're concerned that attackers are injecting an operating system
     * commandline command and using unusual formatting to disguise some or all of the
     * command, use this option to perform the following transformations:</p> <ul> <li>
     * <p>Delete the following characters: \ " ' ^</p> </li> <li> <p>Delete spaces
     * before the following characters: / (</p> </li> <li> <p>Replace the following
     * characters with a space: , ;</p> </li> <li> <p>Replace multiple spaces with one
     * space</p> </li> <li> <p>Convert uppercase letters (A-Z) to lowercase (a-z)</p>
     * </li> </ul> <p> <b>COMPRESS_WHITE_SPACE</b> </p> <p>Use this option to replace
     * the following characters with a space character (decimal 32):</p> <ul> <li>
     * <p>\f, formfeed, decimal 12</p> </li> <li> <p>\t, tab, decimal 9</p> </li> <li>
     * <p>\n, newline, decimal 10</p> </li> <li> <p>\r, carriage return, decimal 13</p>
     * </li> <li> <p>\v, vertical tab, decimal 11</p> </li> <li> <p>non-breaking space,
     * decimal 160</p> </li> </ul> <p> <code>COMPRESS_WHITE_SPACE</code> also replaces
     * multiple spaces with one space.</p> <p> <b>HTML_ENTITY_DECODE</b> </p> <p>Use
     * this option to replace HTML-encoded characters with unencoded characters.
     * <code>HTML_ENTITY_DECODE</code> performs the following operations:</p> <ul> <li>
     * <p>Replaces <code>(ampersand)quot;</code> with <code>"</code> </p> </li> <li>
     * <p>Replaces <code>(ampersand)nbsp;</code> with a non-breaking space, decimal
     * 160</p> </li> <li> <p>Replaces <code>(ampersand)lt;</code> with a "less than"
     * symbol</p> </li> <li> <p>Replaces <code>(ampersand)gt;</code> with
     * <code>&gt;</code> </p> </li> <li> <p>Replaces characters that are represented in
     * hexadecimal format, <code>(ampersand)#xhhhh;</code>, with the corresponding
     * characters</p> </li> <li> <p>Replaces characters that are represented in decimal
     * format, <code>(ampersand)#nnnn;</code>, with the corresponding characters</p>
     * </li> </ul> <p> <b>LOWERCASE</b> </p> <p>Use this option to convert uppercase
     * letters (A-Z) to lowercase (a-z).</p> <p> <b>URL_DECODE</b> </p> <p>Use this
     * option to decode a URL-encoded value.</p> <p> <b>NONE</b> </p> <p>Specify
     * <code>NONE</code> if you don't want to perform any text transformations.</p>
     */
    inline RegexMatchTuple& WithTextTransformation(const TextTransformation& value) { SetTextTransformation(value); return *this;}

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass AWS WAF. If you specify a
     * transformation, AWS WAF performs the transformation on
     * <code>RegexPatternSet</code> before inspecting a request for a match.</p> <p>You
     * can only specify a single type of TextTransformation.</p> <p> <b>CMD_LINE</b>
     * </p> <p>When you're concerned that attackers are injecting an operating system
     * commandline command and using unusual formatting to disguise some or all of the
     * command, use this option to perform the following transformations:</p> <ul> <li>
     * <p>Delete the following characters: \ " ' ^</p> </li> <li> <p>Delete spaces
     * before the following characters: / (</p> </li> <li> <p>Replace the following
     * characters with a space: , ;</p> </li> <li> <p>Replace multiple spaces with one
     * space</p> </li> <li> <p>Convert uppercase letters (A-Z) to lowercase (a-z)</p>
     * </li> </ul> <p> <b>COMPRESS_WHITE_SPACE</b> </p> <p>Use this option to replace
     * the following characters with a space character (decimal 32):</p> <ul> <li>
     * <p>\f, formfeed, decimal 12</p> </li> <li> <p>\t, tab, decimal 9</p> </li> <li>
     * <p>\n, newline, decimal 10</p> </li> <li> <p>\r, carriage return, decimal 13</p>
     * </li> <li> <p>\v, vertical tab, decimal 11</p> </li> <li> <p>non-breaking space,
     * decimal 160</p> </li> </ul> <p> <code>COMPRESS_WHITE_SPACE</code> also replaces
     * multiple spaces with one space.</p> <p> <b>HTML_ENTITY_DECODE</b> </p> <p>Use
     * this option to replace HTML-encoded characters with unencoded characters.
     * <code>HTML_ENTITY_DECODE</code> performs the following operations:</p> <ul> <li>
     * <p>Replaces <code>(ampersand)quot;</code> with <code>"</code> </p> </li> <li>
     * <p>Replaces <code>(ampersand)nbsp;</code> with a non-breaking space, decimal
     * 160</p> </li> <li> <p>Replaces <code>(ampersand)lt;</code> with a "less than"
     * symbol</p> </li> <li> <p>Replaces <code>(ampersand)gt;</code> with
     * <code>&gt;</code> </p> </li> <li> <p>Replaces characters that are represented in
     * hexadecimal format, <code>(ampersand)#xhhhh;</code>, with the corresponding
     * characters</p> </li> <li> <p>Replaces characters that are represented in decimal
     * format, <code>(ampersand)#nnnn;</code>, with the corresponding characters</p>
     * </li> </ul> <p> <b>LOWERCASE</b> </p> <p>Use this option to convert uppercase
     * letters (A-Z) to lowercase (a-z).</p> <p> <b>URL_DECODE</b> </p> <p>Use this
     * option to decode a URL-encoded value.</p> <p> <b>NONE</b> </p> <p>Specify
     * <code>NONE</code> if you don't want to perform any text transformations.</p>
     */
    inline RegexMatchTuple& WithTextTransformation(TextTransformation&& value) { SetTextTransformation(std::move(value)); return *this;}


    /**
     * <p>The <code>RegexPatternSetId</code> for a <code>RegexPatternSet</code>. You
     * use <code>RegexPatternSetId</code> to get information about a
     * <code>RegexPatternSet</code> (see <a>GetRegexPatternSet</a>), update a
     * <code>RegexPatternSet</code> (see <a>UpdateRegexPatternSet</a>), insert a
     * <code>RegexPatternSet</code> into a <code>RegexMatchSet</code> or delete one
     * from a <code>RegexMatchSet</code> (see <a>UpdateRegexMatchSet</a>), and delete
     * an <code>RegexPatternSet</code> from AWS WAF (see
     * <a>DeleteRegexPatternSet</a>).</p> <p> <code>RegexPatternSetId</code> is
     * returned by <a>CreateRegexPatternSet</a> and by <a>ListRegexPatternSets</a>.</p>
     */
    inline const Aws::String& GetRegexPatternSetId() const{ return m_regexPatternSetId; }

    /**
     * <p>The <code>RegexPatternSetId</code> for a <code>RegexPatternSet</code>. You
     * use <code>RegexPatternSetId</code> to get information about a
     * <code>RegexPatternSet</code> (see <a>GetRegexPatternSet</a>), update a
     * <code>RegexPatternSet</code> (see <a>UpdateRegexPatternSet</a>), insert a
     * <code>RegexPatternSet</code> into a <code>RegexMatchSet</code> or delete one
     * from a <code>RegexMatchSet</code> (see <a>UpdateRegexMatchSet</a>), and delete
     * an <code>RegexPatternSet</code> from AWS WAF (see
     * <a>DeleteRegexPatternSet</a>).</p> <p> <code>RegexPatternSetId</code> is
     * returned by <a>CreateRegexPatternSet</a> and by <a>ListRegexPatternSets</a>.</p>
     */
    inline bool RegexPatternSetIdHasBeenSet() const { return m_regexPatternSetIdHasBeenSet; }

    /**
     * <p>The <code>RegexPatternSetId</code> for a <code>RegexPatternSet</code>. You
     * use <code>RegexPatternSetId</code> to get information about a
     * <code>RegexPatternSet</code> (see <a>GetRegexPatternSet</a>), update a
     * <code>RegexPatternSet</code> (see <a>UpdateRegexPatternSet</a>), insert a
     * <code>RegexPatternSet</code> into a <code>RegexMatchSet</code> or delete one
     * from a <code>RegexMatchSet</code> (see <a>UpdateRegexMatchSet</a>), and delete
     * an <code>RegexPatternSet</code> from AWS WAF (see
     * <a>DeleteRegexPatternSet</a>).</p> <p> <code>RegexPatternSetId</code> is
     * returned by <a>CreateRegexPatternSet</a> and by <a>ListRegexPatternSets</a>.</p>
     */
    inline void SetRegexPatternSetId(const Aws::String& value) { m_regexPatternSetIdHasBeenSet = true; m_regexPatternSetId = value; }

    /**
     * <p>The <code>RegexPatternSetId</code> for a <code>RegexPatternSet</code>. You
     * use <code>RegexPatternSetId</code> to get information about a
     * <code>RegexPatternSet</code> (see <a>GetRegexPatternSet</a>), update a
     * <code>RegexPatternSet</code> (see <a>UpdateRegexPatternSet</a>), insert a
     * <code>RegexPatternSet</code> into a <code>RegexMatchSet</code> or delete one
     * from a <code>RegexMatchSet</code> (see <a>UpdateRegexMatchSet</a>), and delete
     * an <code>RegexPatternSet</code> from AWS WAF (see
     * <a>DeleteRegexPatternSet</a>).</p> <p> <code>RegexPatternSetId</code> is
     * returned by <a>CreateRegexPatternSet</a> and by <a>ListRegexPatternSets</a>.</p>
     */
    inline void SetRegexPatternSetId(Aws::String&& value) { m_regexPatternSetIdHasBeenSet = true; m_regexPatternSetId = std::move(value); }

    /**
     * <p>The <code>RegexPatternSetId</code> for a <code>RegexPatternSet</code>. You
     * use <code>RegexPatternSetId</code> to get information about a
     * <code>RegexPatternSet</code> (see <a>GetRegexPatternSet</a>), update a
     * <code>RegexPatternSet</code> (see <a>UpdateRegexPatternSet</a>), insert a
     * <code>RegexPatternSet</code> into a <code>RegexMatchSet</code> or delete one
     * from a <code>RegexMatchSet</code> (see <a>UpdateRegexMatchSet</a>), and delete
     * an <code>RegexPatternSet</code> from AWS WAF (see
     * <a>DeleteRegexPatternSet</a>).</p> <p> <code>RegexPatternSetId</code> is
     * returned by <a>CreateRegexPatternSet</a> and by <a>ListRegexPatternSets</a>.</p>
     */
    inline void SetRegexPatternSetId(const char* value) { m_regexPatternSetIdHasBeenSet = true; m_regexPatternSetId.assign(value); }

    /**
     * <p>The <code>RegexPatternSetId</code> for a <code>RegexPatternSet</code>. You
     * use <code>RegexPatternSetId</code> to get information about a
     * <code>RegexPatternSet</code> (see <a>GetRegexPatternSet</a>), update a
     * <code>RegexPatternSet</code> (see <a>UpdateRegexPatternSet</a>), insert a
     * <code>RegexPatternSet</code> into a <code>RegexMatchSet</code> or delete one
     * from a <code>RegexMatchSet</code> (see <a>UpdateRegexMatchSet</a>), and delete
     * an <code>RegexPatternSet</code> from AWS WAF (see
     * <a>DeleteRegexPatternSet</a>).</p> <p> <code>RegexPatternSetId</code> is
     * returned by <a>CreateRegexPatternSet</a> and by <a>ListRegexPatternSets</a>.</p>
     */
    inline RegexMatchTuple& WithRegexPatternSetId(const Aws::String& value) { SetRegexPatternSetId(value); return *this;}

    /**
     * <p>The <code>RegexPatternSetId</code> for a <code>RegexPatternSet</code>. You
     * use <code>RegexPatternSetId</code> to get information about a
     * <code>RegexPatternSet</code> (see <a>GetRegexPatternSet</a>), update a
     * <code>RegexPatternSet</code> (see <a>UpdateRegexPatternSet</a>), insert a
     * <code>RegexPatternSet</code> into a <code>RegexMatchSet</code> or delete one
     * from a <code>RegexMatchSet</code> (see <a>UpdateRegexMatchSet</a>), and delete
     * an <code>RegexPatternSet</code> from AWS WAF (see
     * <a>DeleteRegexPatternSet</a>).</p> <p> <code>RegexPatternSetId</code> is
     * returned by <a>CreateRegexPatternSet</a> and by <a>ListRegexPatternSets</a>.</p>
     */
    inline RegexMatchTuple& WithRegexPatternSetId(Aws::String&& value) { SetRegexPatternSetId(std::move(value)); return *this;}

    /**
     * <p>The <code>RegexPatternSetId</code> for a <code>RegexPatternSet</code>. You
     * use <code>RegexPatternSetId</code> to get information about a
     * <code>RegexPatternSet</code> (see <a>GetRegexPatternSet</a>), update a
     * <code>RegexPatternSet</code> (see <a>UpdateRegexPatternSet</a>), insert a
     * <code>RegexPatternSet</code> into a <code>RegexMatchSet</code> or delete one
     * from a <code>RegexMatchSet</code> (see <a>UpdateRegexMatchSet</a>), and delete
     * an <code>RegexPatternSet</code> from AWS WAF (see
     * <a>DeleteRegexPatternSet</a>).</p> <p> <code>RegexPatternSetId</code> is
     * returned by <a>CreateRegexPatternSet</a> and by <a>ListRegexPatternSets</a>.</p>
     */
    inline RegexMatchTuple& WithRegexPatternSetId(const char* value) { SetRegexPatternSetId(value); return *this;}

  private:

    FieldToMatch m_fieldToMatch;
    bool m_fieldToMatchHasBeenSet;

    TextTransformation m_textTransformation;
    bool m_textTransformationHasBeenSet;

    Aws::String m_regexPatternSetId;
    bool m_regexPatternSetIdHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
