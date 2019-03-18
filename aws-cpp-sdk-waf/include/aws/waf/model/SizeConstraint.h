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
#include <aws/waf/model/ComparisonOperator.h>
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
   * <p>Specifies a constraint on the size of a part of the web request. AWS WAF uses
   * the <code>Size</code>, <code>ComparisonOperator</code>, and
   * <code>FieldToMatch</code> to build an expression in the form of
   * "<code>Size</code> <code>ComparisonOperator</code> size in bytes of
   * <code>FieldToMatch</code>". If that expression is true, the
   * <code>SizeConstraint</code> is considered to match.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/SizeConstraint">AWS
   * API Reference</a></p>
   */
  class AWS_WAF_API SizeConstraint
  {
  public:
    SizeConstraint();
    SizeConstraint(Aws::Utils::Json::JsonView jsonValue);
    SizeConstraint& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies where in a web request to look for the size constraint.</p>
     */
    inline const FieldToMatch& GetFieldToMatch() const{ return m_fieldToMatch; }

    /**
     * <p>Specifies where in a web request to look for the size constraint.</p>
     */
    inline bool FieldToMatchHasBeenSet() const { return m_fieldToMatchHasBeenSet; }

    /**
     * <p>Specifies where in a web request to look for the size constraint.</p>
     */
    inline void SetFieldToMatch(const FieldToMatch& value) { m_fieldToMatchHasBeenSet = true; m_fieldToMatch = value; }

    /**
     * <p>Specifies where in a web request to look for the size constraint.</p>
     */
    inline void SetFieldToMatch(FieldToMatch&& value) { m_fieldToMatchHasBeenSet = true; m_fieldToMatch = std::move(value); }

    /**
     * <p>Specifies where in a web request to look for the size constraint.</p>
     */
    inline SizeConstraint& WithFieldToMatch(const FieldToMatch& value) { SetFieldToMatch(value); return *this;}

    /**
     * <p>Specifies where in a web request to look for the size constraint.</p>
     */
    inline SizeConstraint& WithFieldToMatch(FieldToMatch&& value) { SetFieldToMatch(std::move(value)); return *this;}


    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass AWS WAF. If you specify a
     * transformation, AWS WAF performs the transformation on <code>FieldToMatch</code>
     * before inspecting a request for a match.</p> <p>You can only specify a single
     * type of TextTransformation.</p> <p>Note that if you choose <code>BODY</code> for
     * the value of <code>Type</code>, you must choose <code>NONE</code> for
     * <code>TextTransformation</code> because CloudFront forwards only the first 8192
     * bytes for inspection. </p> <p> <b>NONE</b> </p> <p>Specify <code>NONE</code> if
     * you don't want to perform any text transformations.</p> <p> <b>CMD_LINE</b> </p>
     * <p>When you're concerned that attackers are injecting an operating system
     * command line command and using unusual formatting to disguise some or all of the
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
     * option to decode a URL-encoded value.</p>
     */
    inline const TextTransformation& GetTextTransformation() const{ return m_textTransformation; }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass AWS WAF. If you specify a
     * transformation, AWS WAF performs the transformation on <code>FieldToMatch</code>
     * before inspecting a request for a match.</p> <p>You can only specify a single
     * type of TextTransformation.</p> <p>Note that if you choose <code>BODY</code> for
     * the value of <code>Type</code>, you must choose <code>NONE</code> for
     * <code>TextTransformation</code> because CloudFront forwards only the first 8192
     * bytes for inspection. </p> <p> <b>NONE</b> </p> <p>Specify <code>NONE</code> if
     * you don't want to perform any text transformations.</p> <p> <b>CMD_LINE</b> </p>
     * <p>When you're concerned that attackers are injecting an operating system
     * command line command and using unusual formatting to disguise some or all of the
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
     * option to decode a URL-encoded value.</p>
     */
    inline bool TextTransformationHasBeenSet() const { return m_textTransformationHasBeenSet; }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass AWS WAF. If you specify a
     * transformation, AWS WAF performs the transformation on <code>FieldToMatch</code>
     * before inspecting a request for a match.</p> <p>You can only specify a single
     * type of TextTransformation.</p> <p>Note that if you choose <code>BODY</code> for
     * the value of <code>Type</code>, you must choose <code>NONE</code> for
     * <code>TextTransformation</code> because CloudFront forwards only the first 8192
     * bytes for inspection. </p> <p> <b>NONE</b> </p> <p>Specify <code>NONE</code> if
     * you don't want to perform any text transformations.</p> <p> <b>CMD_LINE</b> </p>
     * <p>When you're concerned that attackers are injecting an operating system
     * command line command and using unusual formatting to disguise some or all of the
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
     * option to decode a URL-encoded value.</p>
     */
    inline void SetTextTransformation(const TextTransformation& value) { m_textTransformationHasBeenSet = true; m_textTransformation = value; }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass AWS WAF. If you specify a
     * transformation, AWS WAF performs the transformation on <code>FieldToMatch</code>
     * before inspecting a request for a match.</p> <p>You can only specify a single
     * type of TextTransformation.</p> <p>Note that if you choose <code>BODY</code> for
     * the value of <code>Type</code>, you must choose <code>NONE</code> for
     * <code>TextTransformation</code> because CloudFront forwards only the first 8192
     * bytes for inspection. </p> <p> <b>NONE</b> </p> <p>Specify <code>NONE</code> if
     * you don't want to perform any text transformations.</p> <p> <b>CMD_LINE</b> </p>
     * <p>When you're concerned that attackers are injecting an operating system
     * command line command and using unusual formatting to disguise some or all of the
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
     * option to decode a URL-encoded value.</p>
     */
    inline void SetTextTransformation(TextTransformation&& value) { m_textTransformationHasBeenSet = true; m_textTransformation = std::move(value); }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass AWS WAF. If you specify a
     * transformation, AWS WAF performs the transformation on <code>FieldToMatch</code>
     * before inspecting a request for a match.</p> <p>You can only specify a single
     * type of TextTransformation.</p> <p>Note that if you choose <code>BODY</code> for
     * the value of <code>Type</code>, you must choose <code>NONE</code> for
     * <code>TextTransformation</code> because CloudFront forwards only the first 8192
     * bytes for inspection. </p> <p> <b>NONE</b> </p> <p>Specify <code>NONE</code> if
     * you don't want to perform any text transformations.</p> <p> <b>CMD_LINE</b> </p>
     * <p>When you're concerned that attackers are injecting an operating system
     * command line command and using unusual formatting to disguise some or all of the
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
     * option to decode a URL-encoded value.</p>
     */
    inline SizeConstraint& WithTextTransformation(const TextTransformation& value) { SetTextTransformation(value); return *this;}

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass AWS WAF. If you specify a
     * transformation, AWS WAF performs the transformation on <code>FieldToMatch</code>
     * before inspecting a request for a match.</p> <p>You can only specify a single
     * type of TextTransformation.</p> <p>Note that if you choose <code>BODY</code> for
     * the value of <code>Type</code>, you must choose <code>NONE</code> for
     * <code>TextTransformation</code> because CloudFront forwards only the first 8192
     * bytes for inspection. </p> <p> <b>NONE</b> </p> <p>Specify <code>NONE</code> if
     * you don't want to perform any text transformations.</p> <p> <b>CMD_LINE</b> </p>
     * <p>When you're concerned that attackers are injecting an operating system
     * command line command and using unusual formatting to disguise some or all of the
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
     * option to decode a URL-encoded value.</p>
     */
    inline SizeConstraint& WithTextTransformation(TextTransformation&& value) { SetTextTransformation(std::move(value)); return *this;}


    /**
     * <p>The type of comparison you want AWS WAF to perform. AWS WAF uses this in
     * combination with the provided <code>Size</code> and <code>FieldToMatch</code> to
     * build an expression in the form of "<code>Size</code>
     * <code>ComparisonOperator</code> size in bytes of <code>FieldToMatch</code>". If
     * that expression is true, the <code>SizeConstraint</code> is considered to
     * match.</p> <p> <b>EQ</b>: Used to test if the <code>Size</code> is equal to the
     * size of the <code>FieldToMatch</code> </p> <p> <b>NE</b>: Used to test if the
     * <code>Size</code> is not equal to the size of the <code>FieldToMatch</code> </p>
     * <p> <b>LE</b>: Used to test if the <code>Size</code> is less than or equal to
     * the size of the <code>FieldToMatch</code> </p> <p> <b>LT</b>: Used to test if
     * the <code>Size</code> is strictly less than the size of the
     * <code>FieldToMatch</code> </p> <p> <b>GE</b>: Used to test if the
     * <code>Size</code> is greater than or equal to the size of the
     * <code>FieldToMatch</code> </p> <p> <b>GT</b>: Used to test if the
     * <code>Size</code> is strictly greater than the size of the
     * <code>FieldToMatch</code> </p>
     */
    inline const ComparisonOperator& GetComparisonOperator() const{ return m_comparisonOperator; }

    /**
     * <p>The type of comparison you want AWS WAF to perform. AWS WAF uses this in
     * combination with the provided <code>Size</code> and <code>FieldToMatch</code> to
     * build an expression in the form of "<code>Size</code>
     * <code>ComparisonOperator</code> size in bytes of <code>FieldToMatch</code>". If
     * that expression is true, the <code>SizeConstraint</code> is considered to
     * match.</p> <p> <b>EQ</b>: Used to test if the <code>Size</code> is equal to the
     * size of the <code>FieldToMatch</code> </p> <p> <b>NE</b>: Used to test if the
     * <code>Size</code> is not equal to the size of the <code>FieldToMatch</code> </p>
     * <p> <b>LE</b>: Used to test if the <code>Size</code> is less than or equal to
     * the size of the <code>FieldToMatch</code> </p> <p> <b>LT</b>: Used to test if
     * the <code>Size</code> is strictly less than the size of the
     * <code>FieldToMatch</code> </p> <p> <b>GE</b>: Used to test if the
     * <code>Size</code> is greater than or equal to the size of the
     * <code>FieldToMatch</code> </p> <p> <b>GT</b>: Used to test if the
     * <code>Size</code> is strictly greater than the size of the
     * <code>FieldToMatch</code> </p>
     */
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }

    /**
     * <p>The type of comparison you want AWS WAF to perform. AWS WAF uses this in
     * combination with the provided <code>Size</code> and <code>FieldToMatch</code> to
     * build an expression in the form of "<code>Size</code>
     * <code>ComparisonOperator</code> size in bytes of <code>FieldToMatch</code>". If
     * that expression is true, the <code>SizeConstraint</code> is considered to
     * match.</p> <p> <b>EQ</b>: Used to test if the <code>Size</code> is equal to the
     * size of the <code>FieldToMatch</code> </p> <p> <b>NE</b>: Used to test if the
     * <code>Size</code> is not equal to the size of the <code>FieldToMatch</code> </p>
     * <p> <b>LE</b>: Used to test if the <code>Size</code> is less than or equal to
     * the size of the <code>FieldToMatch</code> </p> <p> <b>LT</b>: Used to test if
     * the <code>Size</code> is strictly less than the size of the
     * <code>FieldToMatch</code> </p> <p> <b>GE</b>: Used to test if the
     * <code>Size</code> is greater than or equal to the size of the
     * <code>FieldToMatch</code> </p> <p> <b>GT</b>: Used to test if the
     * <code>Size</code> is strictly greater than the size of the
     * <code>FieldToMatch</code> </p>
     */
    inline void SetComparisonOperator(const ComparisonOperator& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    /**
     * <p>The type of comparison you want AWS WAF to perform. AWS WAF uses this in
     * combination with the provided <code>Size</code> and <code>FieldToMatch</code> to
     * build an expression in the form of "<code>Size</code>
     * <code>ComparisonOperator</code> size in bytes of <code>FieldToMatch</code>". If
     * that expression is true, the <code>SizeConstraint</code> is considered to
     * match.</p> <p> <b>EQ</b>: Used to test if the <code>Size</code> is equal to the
     * size of the <code>FieldToMatch</code> </p> <p> <b>NE</b>: Used to test if the
     * <code>Size</code> is not equal to the size of the <code>FieldToMatch</code> </p>
     * <p> <b>LE</b>: Used to test if the <code>Size</code> is less than or equal to
     * the size of the <code>FieldToMatch</code> </p> <p> <b>LT</b>: Used to test if
     * the <code>Size</code> is strictly less than the size of the
     * <code>FieldToMatch</code> </p> <p> <b>GE</b>: Used to test if the
     * <code>Size</code> is greater than or equal to the size of the
     * <code>FieldToMatch</code> </p> <p> <b>GT</b>: Used to test if the
     * <code>Size</code> is strictly greater than the size of the
     * <code>FieldToMatch</code> </p>
     */
    inline void SetComparisonOperator(ComparisonOperator&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = std::move(value); }

    /**
     * <p>The type of comparison you want AWS WAF to perform. AWS WAF uses this in
     * combination with the provided <code>Size</code> and <code>FieldToMatch</code> to
     * build an expression in the form of "<code>Size</code>
     * <code>ComparisonOperator</code> size in bytes of <code>FieldToMatch</code>". If
     * that expression is true, the <code>SizeConstraint</code> is considered to
     * match.</p> <p> <b>EQ</b>: Used to test if the <code>Size</code> is equal to the
     * size of the <code>FieldToMatch</code> </p> <p> <b>NE</b>: Used to test if the
     * <code>Size</code> is not equal to the size of the <code>FieldToMatch</code> </p>
     * <p> <b>LE</b>: Used to test if the <code>Size</code> is less than or equal to
     * the size of the <code>FieldToMatch</code> </p> <p> <b>LT</b>: Used to test if
     * the <code>Size</code> is strictly less than the size of the
     * <code>FieldToMatch</code> </p> <p> <b>GE</b>: Used to test if the
     * <code>Size</code> is greater than or equal to the size of the
     * <code>FieldToMatch</code> </p> <p> <b>GT</b>: Used to test if the
     * <code>Size</code> is strictly greater than the size of the
     * <code>FieldToMatch</code> </p>
     */
    inline SizeConstraint& WithComparisonOperator(const ComparisonOperator& value) { SetComparisonOperator(value); return *this;}

    /**
     * <p>The type of comparison you want AWS WAF to perform. AWS WAF uses this in
     * combination with the provided <code>Size</code> and <code>FieldToMatch</code> to
     * build an expression in the form of "<code>Size</code>
     * <code>ComparisonOperator</code> size in bytes of <code>FieldToMatch</code>". If
     * that expression is true, the <code>SizeConstraint</code> is considered to
     * match.</p> <p> <b>EQ</b>: Used to test if the <code>Size</code> is equal to the
     * size of the <code>FieldToMatch</code> </p> <p> <b>NE</b>: Used to test if the
     * <code>Size</code> is not equal to the size of the <code>FieldToMatch</code> </p>
     * <p> <b>LE</b>: Used to test if the <code>Size</code> is less than or equal to
     * the size of the <code>FieldToMatch</code> </p> <p> <b>LT</b>: Used to test if
     * the <code>Size</code> is strictly less than the size of the
     * <code>FieldToMatch</code> </p> <p> <b>GE</b>: Used to test if the
     * <code>Size</code> is greater than or equal to the size of the
     * <code>FieldToMatch</code> </p> <p> <b>GT</b>: Used to test if the
     * <code>Size</code> is strictly greater than the size of the
     * <code>FieldToMatch</code> </p>
     */
    inline SizeConstraint& WithComparisonOperator(ComparisonOperator&& value) { SetComparisonOperator(std::move(value)); return *this;}


    /**
     * <p>The size in bytes that you want AWS WAF to compare against the size of the
     * specified <code>FieldToMatch</code>. AWS WAF uses this in combination with
     * <code>ComparisonOperator</code> and <code>FieldToMatch</code> to build an
     * expression in the form of "<code>Size</code> <code>ComparisonOperator</code>
     * size in bytes of <code>FieldToMatch</code>". If that expression is true, the
     * <code>SizeConstraint</code> is considered to match.</p> <p>Valid values for size
     * are 0 - 21474836480 bytes (0 - 20 GB).</p> <p>If you specify <code>URI</code>
     * for the value of <code>Type</code>, the / in the URI counts as one character.
     * For example, the URI <code>/logo.jpg</code> is nine characters long.</p>
     */
    inline long long GetSize() const{ return m_size; }

    /**
     * <p>The size in bytes that you want AWS WAF to compare against the size of the
     * specified <code>FieldToMatch</code>. AWS WAF uses this in combination with
     * <code>ComparisonOperator</code> and <code>FieldToMatch</code> to build an
     * expression in the form of "<code>Size</code> <code>ComparisonOperator</code>
     * size in bytes of <code>FieldToMatch</code>". If that expression is true, the
     * <code>SizeConstraint</code> is considered to match.</p> <p>Valid values for size
     * are 0 - 21474836480 bytes (0 - 20 GB).</p> <p>If you specify <code>URI</code>
     * for the value of <code>Type</code>, the / in the URI counts as one character.
     * For example, the URI <code>/logo.jpg</code> is nine characters long.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The size in bytes that you want AWS WAF to compare against the size of the
     * specified <code>FieldToMatch</code>. AWS WAF uses this in combination with
     * <code>ComparisonOperator</code> and <code>FieldToMatch</code> to build an
     * expression in the form of "<code>Size</code> <code>ComparisonOperator</code>
     * size in bytes of <code>FieldToMatch</code>". If that expression is true, the
     * <code>SizeConstraint</code> is considered to match.</p> <p>Valid values for size
     * are 0 - 21474836480 bytes (0 - 20 GB).</p> <p>If you specify <code>URI</code>
     * for the value of <code>Type</code>, the / in the URI counts as one character.
     * For example, the URI <code>/logo.jpg</code> is nine characters long.</p>
     */
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size in bytes that you want AWS WAF to compare against the size of the
     * specified <code>FieldToMatch</code>. AWS WAF uses this in combination with
     * <code>ComparisonOperator</code> and <code>FieldToMatch</code> to build an
     * expression in the form of "<code>Size</code> <code>ComparisonOperator</code>
     * size in bytes of <code>FieldToMatch</code>". If that expression is true, the
     * <code>SizeConstraint</code> is considered to match.</p> <p>Valid values for size
     * are 0 - 21474836480 bytes (0 - 20 GB).</p> <p>If you specify <code>URI</code>
     * for the value of <code>Type</code>, the / in the URI counts as one character.
     * For example, the URI <code>/logo.jpg</code> is nine characters long.</p>
     */
    inline SizeConstraint& WithSize(long long value) { SetSize(value); return *this;}

  private:

    FieldToMatch m_fieldToMatch;
    bool m_fieldToMatchHasBeenSet;

    TextTransformation m_textTransformation;
    bool m_textTransformationHasBeenSet;

    ComparisonOperator m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet;

    long long m_size;
    bool m_sizeHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
