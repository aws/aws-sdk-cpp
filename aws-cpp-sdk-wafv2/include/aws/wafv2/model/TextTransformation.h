/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/TextTransformationType.h>
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
   *  <p>This is the latest version of <b>AWS WAF</b>, named AWS WAFV2,
   * released in November, 2019. For information, including how to migrate your AWS
   * WAF resources from the prior release, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. </p>  <p>Text transformations eliminate some of
   * the unusual formatting that attackers use in web requests in an effort to bypass
   * detection. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/TextTransformation">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API TextTransformation
  {
  public:
    TextTransformation();
    TextTransformation(Aws::Utils::Json::JsonView jsonValue);
    TextTransformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Sets the relative processing order for multiple transformations that are
     * defined for a rule statement. AWS WAF processes all transformations, from lowest
     * priority to highest, before inspecting the transformed content. The priorities
     * don't need to be consecutive, but they must all be different. </p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>Sets the relative processing order for multiple transformations that are
     * defined for a rule statement. AWS WAF processes all transformations, from lowest
     * priority to highest, before inspecting the transformed content. The priorities
     * don't need to be consecutive, but they must all be different. </p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>Sets the relative processing order for multiple transformations that are
     * defined for a rule statement. AWS WAF processes all transformations, from lowest
     * priority to highest, before inspecting the transformed content. The priorities
     * don't need to be consecutive, but they must all be different. </p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>Sets the relative processing order for multiple transformations that are
     * defined for a rule statement. AWS WAF processes all transformations, from lowest
     * priority to highest, before inspecting the transformed content. The priorities
     * don't need to be consecutive, but they must all be different. </p>
     */
    inline TextTransformation& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>You can specify the following transformation types:</p> <p> <b>CMD_LINE</b>
     * </p> <p>When you're concerned that attackers are injecting an operating system
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
     * option to decode a URL-encoded value.</p> <p> <b>NONE</b> </p> <p>Specify
     * <code>NONE</code> if you don't want any text transformations.</p>
     */
    inline const TextTransformationType& GetType() const{ return m_type; }

    /**
     * <p>You can specify the following transformation types:</p> <p> <b>CMD_LINE</b>
     * </p> <p>When you're concerned that attackers are injecting an operating system
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
     * option to decode a URL-encoded value.</p> <p> <b>NONE</b> </p> <p>Specify
     * <code>NONE</code> if you don't want any text transformations.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>You can specify the following transformation types:</p> <p> <b>CMD_LINE</b>
     * </p> <p>When you're concerned that attackers are injecting an operating system
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
     * option to decode a URL-encoded value.</p> <p> <b>NONE</b> </p> <p>Specify
     * <code>NONE</code> if you don't want any text transformations.</p>
     */
    inline void SetType(const TextTransformationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>You can specify the following transformation types:</p> <p> <b>CMD_LINE</b>
     * </p> <p>When you're concerned that attackers are injecting an operating system
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
     * option to decode a URL-encoded value.</p> <p> <b>NONE</b> </p> <p>Specify
     * <code>NONE</code> if you don't want any text transformations.</p>
     */
    inline void SetType(TextTransformationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>You can specify the following transformation types:</p> <p> <b>CMD_LINE</b>
     * </p> <p>When you're concerned that attackers are injecting an operating system
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
     * option to decode a URL-encoded value.</p> <p> <b>NONE</b> </p> <p>Specify
     * <code>NONE</code> if you don't want any text transformations.</p>
     */
    inline TextTransformation& WithType(const TextTransformationType& value) { SetType(value); return *this;}

    /**
     * <p>You can specify the following transformation types:</p> <p> <b>CMD_LINE</b>
     * </p> <p>When you're concerned that attackers are injecting an operating system
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
     * option to decode a URL-encoded value.</p> <p> <b>NONE</b> </p> <p>Specify
     * <code>NONE</code> if you don't want any text transformations.</p>
     */
    inline TextTransformation& WithType(TextTransformationType&& value) { SetType(std::move(value)); return *this;}

  private:

    int m_priority;
    bool m_priorityHasBeenSet;

    TextTransformationType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
