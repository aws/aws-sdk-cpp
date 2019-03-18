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
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/FieldToMatch.h>
#include <aws/waf/model/TextTransformation.h>
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
namespace WAF
{
namespace Model
{

  /**
   * <p>Specifies the part of a web request that you want AWS WAF to inspect for
   * snippets of malicious SQL code and, if you want AWS WAF to inspect a header, the
   * name of the header.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/SqlInjectionMatchTuple">AWS
   * API Reference</a></p>
   */
  class AWS_WAF_API SqlInjectionMatchTuple
  {
  public:
    SqlInjectionMatchTuple();
    SqlInjectionMatchTuple(Aws::Utils::Json::JsonView jsonValue);
    SqlInjectionMatchTuple& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies where in a web request to look for snippets of malicious SQL
     * code.</p>
     */
    inline const FieldToMatch& GetFieldToMatch() const{ return m_fieldToMatch; }

    /**
     * <p>Specifies where in a web request to look for snippets of malicious SQL
     * code.</p>
     */
    inline bool FieldToMatchHasBeenSet() const { return m_fieldToMatchHasBeenSet; }

    /**
     * <p>Specifies where in a web request to look for snippets of malicious SQL
     * code.</p>
     */
    inline void SetFieldToMatch(const FieldToMatch& value) { m_fieldToMatchHasBeenSet = true; m_fieldToMatch = value; }

    /**
     * <p>Specifies where in a web request to look for snippets of malicious SQL
     * code.</p>
     */
    inline void SetFieldToMatch(FieldToMatch&& value) { m_fieldToMatchHasBeenSet = true; m_fieldToMatch = std::move(value); }

    /**
     * <p>Specifies where in a web request to look for snippets of malicious SQL
     * code.</p>
     */
    inline SqlInjectionMatchTuple& WithFieldToMatch(const FieldToMatch& value) { SetFieldToMatch(value); return *this;}

    /**
     * <p>Specifies where in a web request to look for snippets of malicious SQL
     * code.</p>
     */
    inline SqlInjectionMatchTuple& WithFieldToMatch(FieldToMatch&& value) { SetFieldToMatch(std::move(value)); return *this;}


    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass AWS WAF. If you specify a
     * transformation, AWS WAF performs the transformation on <code>FieldToMatch</code>
     * before inspecting a request for a match.</p> <p>You can only specify a single
     * type of TextTransformation.</p> <p> <b>CMD_LINE</b> </p> <p>When you're
     * concerned that attackers are injecting an operating system command line command
     * and using unusual formatting to disguise some or all of the command, use this
     * option to perform the following transformations:</p> <ul> <li> <p>Delete the
     * following characters: \ " ' ^</p> </li> <li> <p>Delete spaces before the
     * following characters: / (</p> </li> <li> <p>Replace the following characters
     * with a space: , ;</p> </li> <li> <p>Replace multiple spaces with one space</p>
     * </li> <li> <p>Convert uppercase letters (A-Z) to lowercase (a-z)</p> </li> </ul>
     * <p> <b>COMPRESS_WHITE_SPACE</b> </p> <p>Use this option to replace the following
     * characters with a space character (decimal 32):</p> <ul> <li> <p>\f, formfeed,
     * decimal 12</p> </li> <li> <p>\t, tab, decimal 9</p> </li> <li> <p>\n, newline,
     * decimal 10</p> </li> <li> <p>\r, carriage return, decimal 13</p> </li> <li>
     * <p>\v, vertical tab, decimal 11</p> </li> <li> <p>non-breaking space, decimal
     * 160</p> </li> </ul> <p> <code>COMPRESS_WHITE_SPACE</code> also replaces multiple
     * spaces with one space.</p> <p> <b>HTML_ENTITY_DECODE</b> </p> <p>Use this option
     * to replace HTML-encoded characters with unencoded characters.
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
     * transformation, AWS WAF performs the transformation on <code>FieldToMatch</code>
     * before inspecting a request for a match.</p> <p>You can only specify a single
     * type of TextTransformation.</p> <p> <b>CMD_LINE</b> </p> <p>When you're
     * concerned that attackers are injecting an operating system command line command
     * and using unusual formatting to disguise some or all of the command, use this
     * option to perform the following transformations:</p> <ul> <li> <p>Delete the
     * following characters: \ " ' ^</p> </li> <li> <p>Delete spaces before the
     * following characters: / (</p> </li> <li> <p>Replace the following characters
     * with a space: , ;</p> </li> <li> <p>Replace multiple spaces with one space</p>
     * </li> <li> <p>Convert uppercase letters (A-Z) to lowercase (a-z)</p> </li> </ul>
     * <p> <b>COMPRESS_WHITE_SPACE</b> </p> <p>Use this option to replace the following
     * characters with a space character (decimal 32):</p> <ul> <li> <p>\f, formfeed,
     * decimal 12</p> </li> <li> <p>\t, tab, decimal 9</p> </li> <li> <p>\n, newline,
     * decimal 10</p> </li> <li> <p>\r, carriage return, decimal 13</p> </li> <li>
     * <p>\v, vertical tab, decimal 11</p> </li> <li> <p>non-breaking space, decimal
     * 160</p> </li> </ul> <p> <code>COMPRESS_WHITE_SPACE</code> also replaces multiple
     * spaces with one space.</p> <p> <b>HTML_ENTITY_DECODE</b> </p> <p>Use this option
     * to replace HTML-encoded characters with unencoded characters.
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
     * transformation, AWS WAF performs the transformation on <code>FieldToMatch</code>
     * before inspecting a request for a match.</p> <p>You can only specify a single
     * type of TextTransformation.</p> <p> <b>CMD_LINE</b> </p> <p>When you're
     * concerned that attackers are injecting an operating system command line command
     * and using unusual formatting to disguise some or all of the command, use this
     * option to perform the following transformations:</p> <ul> <li> <p>Delete the
     * following characters: \ " ' ^</p> </li> <li> <p>Delete spaces before the
     * following characters: / (</p> </li> <li> <p>Replace the following characters
     * with a space: , ;</p> </li> <li> <p>Replace multiple spaces with one space</p>
     * </li> <li> <p>Convert uppercase letters (A-Z) to lowercase (a-z)</p> </li> </ul>
     * <p> <b>COMPRESS_WHITE_SPACE</b> </p> <p>Use this option to replace the following
     * characters with a space character (decimal 32):</p> <ul> <li> <p>\f, formfeed,
     * decimal 12</p> </li> <li> <p>\t, tab, decimal 9</p> </li> <li> <p>\n, newline,
     * decimal 10</p> </li> <li> <p>\r, carriage return, decimal 13</p> </li> <li>
     * <p>\v, vertical tab, decimal 11</p> </li> <li> <p>non-breaking space, decimal
     * 160</p> </li> </ul> <p> <code>COMPRESS_WHITE_SPACE</code> also replaces multiple
     * spaces with one space.</p> <p> <b>HTML_ENTITY_DECODE</b> </p> <p>Use this option
     * to replace HTML-encoded characters with unencoded characters.
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
     * transformation, AWS WAF performs the transformation on <code>FieldToMatch</code>
     * before inspecting a request for a match.</p> <p>You can only specify a single
     * type of TextTransformation.</p> <p> <b>CMD_LINE</b> </p> <p>When you're
     * concerned that attackers are injecting an operating system command line command
     * and using unusual formatting to disguise some or all of the command, use this
     * option to perform the following transformations:</p> <ul> <li> <p>Delete the
     * following characters: \ " ' ^</p> </li> <li> <p>Delete spaces before the
     * following characters: / (</p> </li> <li> <p>Replace the following characters
     * with a space: , ;</p> </li> <li> <p>Replace multiple spaces with one space</p>
     * </li> <li> <p>Convert uppercase letters (A-Z) to lowercase (a-z)</p> </li> </ul>
     * <p> <b>COMPRESS_WHITE_SPACE</b> </p> <p>Use this option to replace the following
     * characters with a space character (decimal 32):</p> <ul> <li> <p>\f, formfeed,
     * decimal 12</p> </li> <li> <p>\t, tab, decimal 9</p> </li> <li> <p>\n, newline,
     * decimal 10</p> </li> <li> <p>\r, carriage return, decimal 13</p> </li> <li>
     * <p>\v, vertical tab, decimal 11</p> </li> <li> <p>non-breaking space, decimal
     * 160</p> </li> </ul> <p> <code>COMPRESS_WHITE_SPACE</code> also replaces multiple
     * spaces with one space.</p> <p> <b>HTML_ENTITY_DECODE</b> </p> <p>Use this option
     * to replace HTML-encoded characters with unencoded characters.
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
     * transformation, AWS WAF performs the transformation on <code>FieldToMatch</code>
     * before inspecting a request for a match.</p> <p>You can only specify a single
     * type of TextTransformation.</p> <p> <b>CMD_LINE</b> </p> <p>When you're
     * concerned that attackers are injecting an operating system command line command
     * and using unusual formatting to disguise some or all of the command, use this
     * option to perform the following transformations:</p> <ul> <li> <p>Delete the
     * following characters: \ " ' ^</p> </li> <li> <p>Delete spaces before the
     * following characters: / (</p> </li> <li> <p>Replace the following characters
     * with a space: , ;</p> </li> <li> <p>Replace multiple spaces with one space</p>
     * </li> <li> <p>Convert uppercase letters (A-Z) to lowercase (a-z)</p> </li> </ul>
     * <p> <b>COMPRESS_WHITE_SPACE</b> </p> <p>Use this option to replace the following
     * characters with a space character (decimal 32):</p> <ul> <li> <p>\f, formfeed,
     * decimal 12</p> </li> <li> <p>\t, tab, decimal 9</p> </li> <li> <p>\n, newline,
     * decimal 10</p> </li> <li> <p>\r, carriage return, decimal 13</p> </li> <li>
     * <p>\v, vertical tab, decimal 11</p> </li> <li> <p>non-breaking space, decimal
     * 160</p> </li> </ul> <p> <code>COMPRESS_WHITE_SPACE</code> also replaces multiple
     * spaces with one space.</p> <p> <b>HTML_ENTITY_DECODE</b> </p> <p>Use this option
     * to replace HTML-encoded characters with unencoded characters.
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
    inline SqlInjectionMatchTuple& WithTextTransformation(const TextTransformation& value) { SetTextTransformation(value); return *this;}

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass AWS WAF. If you specify a
     * transformation, AWS WAF performs the transformation on <code>FieldToMatch</code>
     * before inspecting a request for a match.</p> <p>You can only specify a single
     * type of TextTransformation.</p> <p> <b>CMD_LINE</b> </p> <p>When you're
     * concerned that attackers are injecting an operating system command line command
     * and using unusual formatting to disguise some or all of the command, use this
     * option to perform the following transformations:</p> <ul> <li> <p>Delete the
     * following characters: \ " ' ^</p> </li> <li> <p>Delete spaces before the
     * following characters: / (</p> </li> <li> <p>Replace the following characters
     * with a space: , ;</p> </li> <li> <p>Replace multiple spaces with one space</p>
     * </li> <li> <p>Convert uppercase letters (A-Z) to lowercase (a-z)</p> </li> </ul>
     * <p> <b>COMPRESS_WHITE_SPACE</b> </p> <p>Use this option to replace the following
     * characters with a space character (decimal 32):</p> <ul> <li> <p>\f, formfeed,
     * decimal 12</p> </li> <li> <p>\t, tab, decimal 9</p> </li> <li> <p>\n, newline,
     * decimal 10</p> </li> <li> <p>\r, carriage return, decimal 13</p> </li> <li>
     * <p>\v, vertical tab, decimal 11</p> </li> <li> <p>non-breaking space, decimal
     * 160</p> </li> </ul> <p> <code>COMPRESS_WHITE_SPACE</code> also replaces multiple
     * spaces with one space.</p> <p> <b>HTML_ENTITY_DECODE</b> </p> <p>Use this option
     * to replace HTML-encoded characters with unencoded characters.
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
    inline SqlInjectionMatchTuple& WithTextTransformation(TextTransformation&& value) { SetTextTransformation(std::move(value)); return *this;}

  private:

    FieldToMatch m_fieldToMatch;
    bool m_fieldToMatchHasBeenSet;

    TextTransformation m_textTransformation;
    bool m_textTransformationHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
