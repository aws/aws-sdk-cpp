﻿/**
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
   * <p>Text transformations eliminate some of the unusual formatting that attackers
   * use in web requests in an effort to bypass detection. </p><p><h3>See Also:</h3> 
   * <a
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
     * defined for a rule statement. WAF processes all transformations, from lowest
     * priority to highest, before inspecting the transformed content. The priorities
     * don't need to be consecutive, but they must all be different. </p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>Sets the relative processing order for multiple transformations that are
     * defined for a rule statement. WAF processes all transformations, from lowest
     * priority to highest, before inspecting the transformed content. The priorities
     * don't need to be consecutive, but they must all be different. </p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>Sets the relative processing order for multiple transformations that are
     * defined for a rule statement. WAF processes all transformations, from lowest
     * priority to highest, before inspecting the transformed content. The priorities
     * don't need to be consecutive, but they must all be different. </p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>Sets the relative processing order for multiple transformations that are
     * defined for a rule statement. WAF processes all transformations, from lowest
     * priority to highest, before inspecting the transformed content. The priorities
     * don't need to be consecutive, but they must all be different. </p>
     */
    inline TextTransformation& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>You can specify the following transformation types:</p> <p>
     * <b>BASE64_DECODE</b> - Decode a <code>Base64</code>-encoded string.</p> <p>
     * <b>BASE64_DECODE_EXT</b> - Decode a <code>Base64</code>-encoded string, but use
     * a forgiving implementation that ignores characters that aren't valid.</p> <p>
     * <b>CMD_LINE</b> - Command-line transformations. These are helpful in reducing
     * effectiveness of attackers who inject an operating system command-line command
     * and use unusual formatting to disguise some or all of the command. </p> <ul>
     * <li> <p>Delete the following characters: <code>\ " ' ^</code> </p> </li> <li>
     * <p>Delete spaces before the following characters: <code>/ (</code> </p> </li>
     * <li> <p>Replace the following characters with a space: <code>, ;</code> </p>
     * </li> <li> <p>Replace multiple spaces with one space</p> </li> <li> <p>Convert
     * uppercase letters (A-Z) to lowercase (a-z)</p> </li> </ul> <p>
     * <b>COMPRESS_WHITE_SPACE</b> - Replace these characters with a space character
     * (decimal 32): </p> <ul> <li> <p> <code>\f</code>, formfeed, decimal 12</p> </li>
     * <li> <p> <code>\t</code>, tab, decimal 9</p> </li> <li> <p> <code>\n</code>,
     * newline, decimal 10</p> </li> <li> <p> <code>\r</code>, carriage return, decimal
     * 13</p> </li> <li> <p> <code>\v</code>, vertical tab, decimal 11</p> </li> <li>
     * <p>Non-breaking space, decimal 160</p> </li> </ul> <p>
     * <code>COMPRESS_WHITE_SPACE</code> also replaces multiple spaces with one
     * space.</p> <p> <b>CSS_DECODE</b> - Decode characters that were encoded using CSS
     * 2.x escape rules <code>syndata.html#characters</code>. This function uses up to
     * two bytes in the decoding process, so it can help to uncover ASCII characters
     * that were encoded using CSS encoding that wouldn’t typically be encoded. It's
     * also useful in countering evasion, which is a combination of a backslash and
     * non-hexadecimal characters. For example, <code>ja\vascript</code> for
     * javascript. </p> <p> <b>ESCAPE_SEQ_DECODE</b> - Decode the following ANSI C
     * escape sequences: <code>\a</code>, <code>\b</code>, <code>\f</code>,
     * <code>\n</code>, <code>\r</code>, <code>\t</code>, <code>\v</code>,
     * <code>\\</code>, <code>\?</code>, <code>\'</code>, <code>\"</code>,
     * <code>\xHH</code> (hexadecimal), <code>\0OOO</code> (octal). Encodings that
     * aren't valid remain in the output. </p> <p> <b>HEX_DECODE</b> - Decode a string
     * of hexadecimal characters into a binary.</p> <p> <b>HTML_ENTITY_DECODE</b> -
     * Replace HTML-encoded characters with unencoded characters.
     * <code>HTML_ENTITY_DECODE</code> performs these operations: </p> <ul> <li>
     * <p>Replaces <code>(ampersand)quot;</code> with <code>"</code> </p> </li> <li>
     * <p>Replaces <code>(ampersand)nbsp;</code> with a non-breaking space, decimal
     * 160</p> </li> <li> <p>Replaces <code>(ampersand)lt;</code> with a "less than"
     * symbol</p> </li> <li> <p>Replaces <code>(ampersand)gt;</code> with
     * <code>&gt;</code> </p> </li> <li> <p>Replaces characters that are represented in
     * hexadecimal format, <code>(ampersand)#xhhhh;</code>, with the corresponding
     * characters</p> </li> <li> <p>Replaces characters that are represented in decimal
     * format, <code>(ampersand)#nnnn;</code>, with the corresponding characters</p>
     * </li> </ul> <p> <b>JS_DECODE</b> - Decode JavaScript escape sequences. If a
     * <code>\</code> <code>u</code> <code>HHHH</code> code is in the full-width ASCII
     * code range of <code>FF01-FF5E</code>, then the higher byte is used to detect and
     * adjust the lower byte. If not, only the lower byte is used and the higher byte
     * is zeroed, causing a possible loss of information. </p> <p> <b>LOWERCASE</b> -
     * Convert uppercase letters (A-Z) to lowercase (a-z). </p> <p> <b>MD5</b> -
     * Calculate an MD5 hash from the data in the input. The computed hash is in a raw
     * binary form. </p> <p> <b>NONE</b> - Specify <code>NONE</code> if you don't want
     * any text transformations. </p> <p> <b>NORMALIZE_PATH</b> - Remove multiple
     * slashes, directory self-references, and directory back-references that are not
     * at the beginning of the input from an input string. </p> <p>
     * <b>NORMALIZE_PATH_WIN</b> - This is the same as <code>NORMALIZE_PATH</code>, but
     * first converts backslash characters to forward slashes. </p> <p>
     * <b>REMOVE_NULLS</b> - Remove all <code>NULL</code> bytes from the input. </p>
     * <p> <b>REPLACE_COMMENTS</b> - Replace each occurrence of a C-style comment
     * (<code>/ * ... * /</code>) with a single space. Multiple consecutive occurrences
     * are not compressed. Unterminated comments are also replaced with a space (ASCII
     * 0x20). However, a standalone termination of a comment (<code>* /</code>) is not
     * acted upon. </p> <p> <b>REPLACE_NULLS</b> - Replace NULL bytes in the input with
     * space characters (ASCII <code>0x20</code>). </p> <p> <b>SQL_HEX_DECODE</b> -
     * Decode SQL hex data. Example (<code>0x414243</code>) will be decoded to
     * (<code>ABC</code>).</p> <p> <b>URL_DECODE</b> - Decode a URL-encoded value. </p>
     * <p> <b>URL_DECODE_UNI</b> - Like <code>URL_DECODE</code>, but with support for
     * Microsoft-specific <code>%u</code> encoding. If the code is in the full-width
     * ASCII code range of <code>FF01-FF5E</code>, the higher byte is used to detect
     * and adjust the lower byte. Otherwise, only the lower byte is used and the higher
     * byte is zeroed. </p> <p> <b>UTF8_TO_UNICODE</b> - Convert all UTF-8 character
     * sequences to Unicode. This helps input normalization, and minimizing
     * false-positives and false-negatives for non-English languages.</p>
     */
    inline const TextTransformationType& GetType() const{ return m_type; }

    /**
     * <p>You can specify the following transformation types:</p> <p>
     * <b>BASE64_DECODE</b> - Decode a <code>Base64</code>-encoded string.</p> <p>
     * <b>BASE64_DECODE_EXT</b> - Decode a <code>Base64</code>-encoded string, but use
     * a forgiving implementation that ignores characters that aren't valid.</p> <p>
     * <b>CMD_LINE</b> - Command-line transformations. These are helpful in reducing
     * effectiveness of attackers who inject an operating system command-line command
     * and use unusual formatting to disguise some or all of the command. </p> <ul>
     * <li> <p>Delete the following characters: <code>\ " ' ^</code> </p> </li> <li>
     * <p>Delete spaces before the following characters: <code>/ (</code> </p> </li>
     * <li> <p>Replace the following characters with a space: <code>, ;</code> </p>
     * </li> <li> <p>Replace multiple spaces with one space</p> </li> <li> <p>Convert
     * uppercase letters (A-Z) to lowercase (a-z)</p> </li> </ul> <p>
     * <b>COMPRESS_WHITE_SPACE</b> - Replace these characters with a space character
     * (decimal 32): </p> <ul> <li> <p> <code>\f</code>, formfeed, decimal 12</p> </li>
     * <li> <p> <code>\t</code>, tab, decimal 9</p> </li> <li> <p> <code>\n</code>,
     * newline, decimal 10</p> </li> <li> <p> <code>\r</code>, carriage return, decimal
     * 13</p> </li> <li> <p> <code>\v</code>, vertical tab, decimal 11</p> </li> <li>
     * <p>Non-breaking space, decimal 160</p> </li> </ul> <p>
     * <code>COMPRESS_WHITE_SPACE</code> also replaces multiple spaces with one
     * space.</p> <p> <b>CSS_DECODE</b> - Decode characters that were encoded using CSS
     * 2.x escape rules <code>syndata.html#characters</code>. This function uses up to
     * two bytes in the decoding process, so it can help to uncover ASCII characters
     * that were encoded using CSS encoding that wouldn’t typically be encoded. It's
     * also useful in countering evasion, which is a combination of a backslash and
     * non-hexadecimal characters. For example, <code>ja\vascript</code> for
     * javascript. </p> <p> <b>ESCAPE_SEQ_DECODE</b> - Decode the following ANSI C
     * escape sequences: <code>\a</code>, <code>\b</code>, <code>\f</code>,
     * <code>\n</code>, <code>\r</code>, <code>\t</code>, <code>\v</code>,
     * <code>\\</code>, <code>\?</code>, <code>\'</code>, <code>\"</code>,
     * <code>\xHH</code> (hexadecimal), <code>\0OOO</code> (octal). Encodings that
     * aren't valid remain in the output. </p> <p> <b>HEX_DECODE</b> - Decode a string
     * of hexadecimal characters into a binary.</p> <p> <b>HTML_ENTITY_DECODE</b> -
     * Replace HTML-encoded characters with unencoded characters.
     * <code>HTML_ENTITY_DECODE</code> performs these operations: </p> <ul> <li>
     * <p>Replaces <code>(ampersand)quot;</code> with <code>"</code> </p> </li> <li>
     * <p>Replaces <code>(ampersand)nbsp;</code> with a non-breaking space, decimal
     * 160</p> </li> <li> <p>Replaces <code>(ampersand)lt;</code> with a "less than"
     * symbol</p> </li> <li> <p>Replaces <code>(ampersand)gt;</code> with
     * <code>&gt;</code> </p> </li> <li> <p>Replaces characters that are represented in
     * hexadecimal format, <code>(ampersand)#xhhhh;</code>, with the corresponding
     * characters</p> </li> <li> <p>Replaces characters that are represented in decimal
     * format, <code>(ampersand)#nnnn;</code>, with the corresponding characters</p>
     * </li> </ul> <p> <b>JS_DECODE</b> - Decode JavaScript escape sequences. If a
     * <code>\</code> <code>u</code> <code>HHHH</code> code is in the full-width ASCII
     * code range of <code>FF01-FF5E</code>, then the higher byte is used to detect and
     * adjust the lower byte. If not, only the lower byte is used and the higher byte
     * is zeroed, causing a possible loss of information. </p> <p> <b>LOWERCASE</b> -
     * Convert uppercase letters (A-Z) to lowercase (a-z). </p> <p> <b>MD5</b> -
     * Calculate an MD5 hash from the data in the input. The computed hash is in a raw
     * binary form. </p> <p> <b>NONE</b> - Specify <code>NONE</code> if you don't want
     * any text transformations. </p> <p> <b>NORMALIZE_PATH</b> - Remove multiple
     * slashes, directory self-references, and directory back-references that are not
     * at the beginning of the input from an input string. </p> <p>
     * <b>NORMALIZE_PATH_WIN</b> - This is the same as <code>NORMALIZE_PATH</code>, but
     * first converts backslash characters to forward slashes. </p> <p>
     * <b>REMOVE_NULLS</b> - Remove all <code>NULL</code> bytes from the input. </p>
     * <p> <b>REPLACE_COMMENTS</b> - Replace each occurrence of a C-style comment
     * (<code>/ * ... * /</code>) with a single space. Multiple consecutive occurrences
     * are not compressed. Unterminated comments are also replaced with a space (ASCII
     * 0x20). However, a standalone termination of a comment (<code>* /</code>) is not
     * acted upon. </p> <p> <b>REPLACE_NULLS</b> - Replace NULL bytes in the input with
     * space characters (ASCII <code>0x20</code>). </p> <p> <b>SQL_HEX_DECODE</b> -
     * Decode SQL hex data. Example (<code>0x414243</code>) will be decoded to
     * (<code>ABC</code>).</p> <p> <b>URL_DECODE</b> - Decode a URL-encoded value. </p>
     * <p> <b>URL_DECODE_UNI</b> - Like <code>URL_DECODE</code>, but with support for
     * Microsoft-specific <code>%u</code> encoding. If the code is in the full-width
     * ASCII code range of <code>FF01-FF5E</code>, the higher byte is used to detect
     * and adjust the lower byte. Otherwise, only the lower byte is used and the higher
     * byte is zeroed. </p> <p> <b>UTF8_TO_UNICODE</b> - Convert all UTF-8 character
     * sequences to Unicode. This helps input normalization, and minimizing
     * false-positives and false-negatives for non-English languages.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>You can specify the following transformation types:</p> <p>
     * <b>BASE64_DECODE</b> - Decode a <code>Base64</code>-encoded string.</p> <p>
     * <b>BASE64_DECODE_EXT</b> - Decode a <code>Base64</code>-encoded string, but use
     * a forgiving implementation that ignores characters that aren't valid.</p> <p>
     * <b>CMD_LINE</b> - Command-line transformations. These are helpful in reducing
     * effectiveness of attackers who inject an operating system command-line command
     * and use unusual formatting to disguise some or all of the command. </p> <ul>
     * <li> <p>Delete the following characters: <code>\ " ' ^</code> </p> </li> <li>
     * <p>Delete spaces before the following characters: <code>/ (</code> </p> </li>
     * <li> <p>Replace the following characters with a space: <code>, ;</code> </p>
     * </li> <li> <p>Replace multiple spaces with one space</p> </li> <li> <p>Convert
     * uppercase letters (A-Z) to lowercase (a-z)</p> </li> </ul> <p>
     * <b>COMPRESS_WHITE_SPACE</b> - Replace these characters with a space character
     * (decimal 32): </p> <ul> <li> <p> <code>\f</code>, formfeed, decimal 12</p> </li>
     * <li> <p> <code>\t</code>, tab, decimal 9</p> </li> <li> <p> <code>\n</code>,
     * newline, decimal 10</p> </li> <li> <p> <code>\r</code>, carriage return, decimal
     * 13</p> </li> <li> <p> <code>\v</code>, vertical tab, decimal 11</p> </li> <li>
     * <p>Non-breaking space, decimal 160</p> </li> </ul> <p>
     * <code>COMPRESS_WHITE_SPACE</code> also replaces multiple spaces with one
     * space.</p> <p> <b>CSS_DECODE</b> - Decode characters that were encoded using CSS
     * 2.x escape rules <code>syndata.html#characters</code>. This function uses up to
     * two bytes in the decoding process, so it can help to uncover ASCII characters
     * that were encoded using CSS encoding that wouldn’t typically be encoded. It's
     * also useful in countering evasion, which is a combination of a backslash and
     * non-hexadecimal characters. For example, <code>ja\vascript</code> for
     * javascript. </p> <p> <b>ESCAPE_SEQ_DECODE</b> - Decode the following ANSI C
     * escape sequences: <code>\a</code>, <code>\b</code>, <code>\f</code>,
     * <code>\n</code>, <code>\r</code>, <code>\t</code>, <code>\v</code>,
     * <code>\\</code>, <code>\?</code>, <code>\'</code>, <code>\"</code>,
     * <code>\xHH</code> (hexadecimal), <code>\0OOO</code> (octal). Encodings that
     * aren't valid remain in the output. </p> <p> <b>HEX_DECODE</b> - Decode a string
     * of hexadecimal characters into a binary.</p> <p> <b>HTML_ENTITY_DECODE</b> -
     * Replace HTML-encoded characters with unencoded characters.
     * <code>HTML_ENTITY_DECODE</code> performs these operations: </p> <ul> <li>
     * <p>Replaces <code>(ampersand)quot;</code> with <code>"</code> </p> </li> <li>
     * <p>Replaces <code>(ampersand)nbsp;</code> with a non-breaking space, decimal
     * 160</p> </li> <li> <p>Replaces <code>(ampersand)lt;</code> with a "less than"
     * symbol</p> </li> <li> <p>Replaces <code>(ampersand)gt;</code> with
     * <code>&gt;</code> </p> </li> <li> <p>Replaces characters that are represented in
     * hexadecimal format, <code>(ampersand)#xhhhh;</code>, with the corresponding
     * characters</p> </li> <li> <p>Replaces characters that are represented in decimal
     * format, <code>(ampersand)#nnnn;</code>, with the corresponding characters</p>
     * </li> </ul> <p> <b>JS_DECODE</b> - Decode JavaScript escape sequences. If a
     * <code>\</code> <code>u</code> <code>HHHH</code> code is in the full-width ASCII
     * code range of <code>FF01-FF5E</code>, then the higher byte is used to detect and
     * adjust the lower byte. If not, only the lower byte is used and the higher byte
     * is zeroed, causing a possible loss of information. </p> <p> <b>LOWERCASE</b> -
     * Convert uppercase letters (A-Z) to lowercase (a-z). </p> <p> <b>MD5</b> -
     * Calculate an MD5 hash from the data in the input. The computed hash is in a raw
     * binary form. </p> <p> <b>NONE</b> - Specify <code>NONE</code> if you don't want
     * any text transformations. </p> <p> <b>NORMALIZE_PATH</b> - Remove multiple
     * slashes, directory self-references, and directory back-references that are not
     * at the beginning of the input from an input string. </p> <p>
     * <b>NORMALIZE_PATH_WIN</b> - This is the same as <code>NORMALIZE_PATH</code>, but
     * first converts backslash characters to forward slashes. </p> <p>
     * <b>REMOVE_NULLS</b> - Remove all <code>NULL</code> bytes from the input. </p>
     * <p> <b>REPLACE_COMMENTS</b> - Replace each occurrence of a C-style comment
     * (<code>/ * ... * /</code>) with a single space. Multiple consecutive occurrences
     * are not compressed. Unterminated comments are also replaced with a space (ASCII
     * 0x20). However, a standalone termination of a comment (<code>* /</code>) is not
     * acted upon. </p> <p> <b>REPLACE_NULLS</b> - Replace NULL bytes in the input with
     * space characters (ASCII <code>0x20</code>). </p> <p> <b>SQL_HEX_DECODE</b> -
     * Decode SQL hex data. Example (<code>0x414243</code>) will be decoded to
     * (<code>ABC</code>).</p> <p> <b>URL_DECODE</b> - Decode a URL-encoded value. </p>
     * <p> <b>URL_DECODE_UNI</b> - Like <code>URL_DECODE</code>, but with support for
     * Microsoft-specific <code>%u</code> encoding. If the code is in the full-width
     * ASCII code range of <code>FF01-FF5E</code>, the higher byte is used to detect
     * and adjust the lower byte. Otherwise, only the lower byte is used and the higher
     * byte is zeroed. </p> <p> <b>UTF8_TO_UNICODE</b> - Convert all UTF-8 character
     * sequences to Unicode. This helps input normalization, and minimizing
     * false-positives and false-negatives for non-English languages.</p>
     */
    inline void SetType(const TextTransformationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>You can specify the following transformation types:</p> <p>
     * <b>BASE64_DECODE</b> - Decode a <code>Base64</code>-encoded string.</p> <p>
     * <b>BASE64_DECODE_EXT</b> - Decode a <code>Base64</code>-encoded string, but use
     * a forgiving implementation that ignores characters that aren't valid.</p> <p>
     * <b>CMD_LINE</b> - Command-line transformations. These are helpful in reducing
     * effectiveness of attackers who inject an operating system command-line command
     * and use unusual formatting to disguise some or all of the command. </p> <ul>
     * <li> <p>Delete the following characters: <code>\ " ' ^</code> </p> </li> <li>
     * <p>Delete spaces before the following characters: <code>/ (</code> </p> </li>
     * <li> <p>Replace the following characters with a space: <code>, ;</code> </p>
     * </li> <li> <p>Replace multiple spaces with one space</p> </li> <li> <p>Convert
     * uppercase letters (A-Z) to lowercase (a-z)</p> </li> </ul> <p>
     * <b>COMPRESS_WHITE_SPACE</b> - Replace these characters with a space character
     * (decimal 32): </p> <ul> <li> <p> <code>\f</code>, formfeed, decimal 12</p> </li>
     * <li> <p> <code>\t</code>, tab, decimal 9</p> </li> <li> <p> <code>\n</code>,
     * newline, decimal 10</p> </li> <li> <p> <code>\r</code>, carriage return, decimal
     * 13</p> </li> <li> <p> <code>\v</code>, vertical tab, decimal 11</p> </li> <li>
     * <p>Non-breaking space, decimal 160</p> </li> </ul> <p>
     * <code>COMPRESS_WHITE_SPACE</code> also replaces multiple spaces with one
     * space.</p> <p> <b>CSS_DECODE</b> - Decode characters that were encoded using CSS
     * 2.x escape rules <code>syndata.html#characters</code>. This function uses up to
     * two bytes in the decoding process, so it can help to uncover ASCII characters
     * that were encoded using CSS encoding that wouldn’t typically be encoded. It's
     * also useful in countering evasion, which is a combination of a backslash and
     * non-hexadecimal characters. For example, <code>ja\vascript</code> for
     * javascript. </p> <p> <b>ESCAPE_SEQ_DECODE</b> - Decode the following ANSI C
     * escape sequences: <code>\a</code>, <code>\b</code>, <code>\f</code>,
     * <code>\n</code>, <code>\r</code>, <code>\t</code>, <code>\v</code>,
     * <code>\\</code>, <code>\?</code>, <code>\'</code>, <code>\"</code>,
     * <code>\xHH</code> (hexadecimal), <code>\0OOO</code> (octal). Encodings that
     * aren't valid remain in the output. </p> <p> <b>HEX_DECODE</b> - Decode a string
     * of hexadecimal characters into a binary.</p> <p> <b>HTML_ENTITY_DECODE</b> -
     * Replace HTML-encoded characters with unencoded characters.
     * <code>HTML_ENTITY_DECODE</code> performs these operations: </p> <ul> <li>
     * <p>Replaces <code>(ampersand)quot;</code> with <code>"</code> </p> </li> <li>
     * <p>Replaces <code>(ampersand)nbsp;</code> with a non-breaking space, decimal
     * 160</p> </li> <li> <p>Replaces <code>(ampersand)lt;</code> with a "less than"
     * symbol</p> </li> <li> <p>Replaces <code>(ampersand)gt;</code> with
     * <code>&gt;</code> </p> </li> <li> <p>Replaces characters that are represented in
     * hexadecimal format, <code>(ampersand)#xhhhh;</code>, with the corresponding
     * characters</p> </li> <li> <p>Replaces characters that are represented in decimal
     * format, <code>(ampersand)#nnnn;</code>, with the corresponding characters</p>
     * </li> </ul> <p> <b>JS_DECODE</b> - Decode JavaScript escape sequences. If a
     * <code>\</code> <code>u</code> <code>HHHH</code> code is in the full-width ASCII
     * code range of <code>FF01-FF5E</code>, then the higher byte is used to detect and
     * adjust the lower byte. If not, only the lower byte is used and the higher byte
     * is zeroed, causing a possible loss of information. </p> <p> <b>LOWERCASE</b> -
     * Convert uppercase letters (A-Z) to lowercase (a-z). </p> <p> <b>MD5</b> -
     * Calculate an MD5 hash from the data in the input. The computed hash is in a raw
     * binary form. </p> <p> <b>NONE</b> - Specify <code>NONE</code> if you don't want
     * any text transformations. </p> <p> <b>NORMALIZE_PATH</b> - Remove multiple
     * slashes, directory self-references, and directory back-references that are not
     * at the beginning of the input from an input string. </p> <p>
     * <b>NORMALIZE_PATH_WIN</b> - This is the same as <code>NORMALIZE_PATH</code>, but
     * first converts backslash characters to forward slashes. </p> <p>
     * <b>REMOVE_NULLS</b> - Remove all <code>NULL</code> bytes from the input. </p>
     * <p> <b>REPLACE_COMMENTS</b> - Replace each occurrence of a C-style comment
     * (<code>/ * ... * /</code>) with a single space. Multiple consecutive occurrences
     * are not compressed. Unterminated comments are also replaced with a space (ASCII
     * 0x20). However, a standalone termination of a comment (<code>* /</code>) is not
     * acted upon. </p> <p> <b>REPLACE_NULLS</b> - Replace NULL bytes in the input with
     * space characters (ASCII <code>0x20</code>). </p> <p> <b>SQL_HEX_DECODE</b> -
     * Decode SQL hex data. Example (<code>0x414243</code>) will be decoded to
     * (<code>ABC</code>).</p> <p> <b>URL_DECODE</b> - Decode a URL-encoded value. </p>
     * <p> <b>URL_DECODE_UNI</b> - Like <code>URL_DECODE</code>, but with support for
     * Microsoft-specific <code>%u</code> encoding. If the code is in the full-width
     * ASCII code range of <code>FF01-FF5E</code>, the higher byte is used to detect
     * and adjust the lower byte. Otherwise, only the lower byte is used and the higher
     * byte is zeroed. </p> <p> <b>UTF8_TO_UNICODE</b> - Convert all UTF-8 character
     * sequences to Unicode. This helps input normalization, and minimizing
     * false-positives and false-negatives for non-English languages.</p>
     */
    inline void SetType(TextTransformationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>You can specify the following transformation types:</p> <p>
     * <b>BASE64_DECODE</b> - Decode a <code>Base64</code>-encoded string.</p> <p>
     * <b>BASE64_DECODE_EXT</b> - Decode a <code>Base64</code>-encoded string, but use
     * a forgiving implementation that ignores characters that aren't valid.</p> <p>
     * <b>CMD_LINE</b> - Command-line transformations. These are helpful in reducing
     * effectiveness of attackers who inject an operating system command-line command
     * and use unusual formatting to disguise some or all of the command. </p> <ul>
     * <li> <p>Delete the following characters: <code>\ " ' ^</code> </p> </li> <li>
     * <p>Delete spaces before the following characters: <code>/ (</code> </p> </li>
     * <li> <p>Replace the following characters with a space: <code>, ;</code> </p>
     * </li> <li> <p>Replace multiple spaces with one space</p> </li> <li> <p>Convert
     * uppercase letters (A-Z) to lowercase (a-z)</p> </li> </ul> <p>
     * <b>COMPRESS_WHITE_SPACE</b> - Replace these characters with a space character
     * (decimal 32): </p> <ul> <li> <p> <code>\f</code>, formfeed, decimal 12</p> </li>
     * <li> <p> <code>\t</code>, tab, decimal 9</p> </li> <li> <p> <code>\n</code>,
     * newline, decimal 10</p> </li> <li> <p> <code>\r</code>, carriage return, decimal
     * 13</p> </li> <li> <p> <code>\v</code>, vertical tab, decimal 11</p> </li> <li>
     * <p>Non-breaking space, decimal 160</p> </li> </ul> <p>
     * <code>COMPRESS_WHITE_SPACE</code> also replaces multiple spaces with one
     * space.</p> <p> <b>CSS_DECODE</b> - Decode characters that were encoded using CSS
     * 2.x escape rules <code>syndata.html#characters</code>. This function uses up to
     * two bytes in the decoding process, so it can help to uncover ASCII characters
     * that were encoded using CSS encoding that wouldn’t typically be encoded. It's
     * also useful in countering evasion, which is a combination of a backslash and
     * non-hexadecimal characters. For example, <code>ja\vascript</code> for
     * javascript. </p> <p> <b>ESCAPE_SEQ_DECODE</b> - Decode the following ANSI C
     * escape sequences: <code>\a</code>, <code>\b</code>, <code>\f</code>,
     * <code>\n</code>, <code>\r</code>, <code>\t</code>, <code>\v</code>,
     * <code>\\</code>, <code>\?</code>, <code>\'</code>, <code>\"</code>,
     * <code>\xHH</code> (hexadecimal), <code>\0OOO</code> (octal). Encodings that
     * aren't valid remain in the output. </p> <p> <b>HEX_DECODE</b> - Decode a string
     * of hexadecimal characters into a binary.</p> <p> <b>HTML_ENTITY_DECODE</b> -
     * Replace HTML-encoded characters with unencoded characters.
     * <code>HTML_ENTITY_DECODE</code> performs these operations: </p> <ul> <li>
     * <p>Replaces <code>(ampersand)quot;</code> with <code>"</code> </p> </li> <li>
     * <p>Replaces <code>(ampersand)nbsp;</code> with a non-breaking space, decimal
     * 160</p> </li> <li> <p>Replaces <code>(ampersand)lt;</code> with a "less than"
     * symbol</p> </li> <li> <p>Replaces <code>(ampersand)gt;</code> with
     * <code>&gt;</code> </p> </li> <li> <p>Replaces characters that are represented in
     * hexadecimal format, <code>(ampersand)#xhhhh;</code>, with the corresponding
     * characters</p> </li> <li> <p>Replaces characters that are represented in decimal
     * format, <code>(ampersand)#nnnn;</code>, with the corresponding characters</p>
     * </li> </ul> <p> <b>JS_DECODE</b> - Decode JavaScript escape sequences. If a
     * <code>\</code> <code>u</code> <code>HHHH</code> code is in the full-width ASCII
     * code range of <code>FF01-FF5E</code>, then the higher byte is used to detect and
     * adjust the lower byte. If not, only the lower byte is used and the higher byte
     * is zeroed, causing a possible loss of information. </p> <p> <b>LOWERCASE</b> -
     * Convert uppercase letters (A-Z) to lowercase (a-z). </p> <p> <b>MD5</b> -
     * Calculate an MD5 hash from the data in the input. The computed hash is in a raw
     * binary form. </p> <p> <b>NONE</b> - Specify <code>NONE</code> if you don't want
     * any text transformations. </p> <p> <b>NORMALIZE_PATH</b> - Remove multiple
     * slashes, directory self-references, and directory back-references that are not
     * at the beginning of the input from an input string. </p> <p>
     * <b>NORMALIZE_PATH_WIN</b> - This is the same as <code>NORMALIZE_PATH</code>, but
     * first converts backslash characters to forward slashes. </p> <p>
     * <b>REMOVE_NULLS</b> - Remove all <code>NULL</code> bytes from the input. </p>
     * <p> <b>REPLACE_COMMENTS</b> - Replace each occurrence of a C-style comment
     * (<code>/ * ... * /</code>) with a single space. Multiple consecutive occurrences
     * are not compressed. Unterminated comments are also replaced with a space (ASCII
     * 0x20). However, a standalone termination of a comment (<code>* /</code>) is not
     * acted upon. </p> <p> <b>REPLACE_NULLS</b> - Replace NULL bytes in the input with
     * space characters (ASCII <code>0x20</code>). </p> <p> <b>SQL_HEX_DECODE</b> -
     * Decode SQL hex data. Example (<code>0x414243</code>) will be decoded to
     * (<code>ABC</code>).</p> <p> <b>URL_DECODE</b> - Decode a URL-encoded value. </p>
     * <p> <b>URL_DECODE_UNI</b> - Like <code>URL_DECODE</code>, but with support for
     * Microsoft-specific <code>%u</code> encoding. If the code is in the full-width
     * ASCII code range of <code>FF01-FF5E</code>, the higher byte is used to detect
     * and adjust the lower byte. Otherwise, only the lower byte is used and the higher
     * byte is zeroed. </p> <p> <b>UTF8_TO_UNICODE</b> - Convert all UTF-8 character
     * sequences to Unicode. This helps input normalization, and minimizing
     * false-positives and false-negatives for non-English languages.</p>
     */
    inline TextTransformation& WithType(const TextTransformationType& value) { SetType(value); return *this;}

    /**
     * <p>You can specify the following transformation types:</p> <p>
     * <b>BASE64_DECODE</b> - Decode a <code>Base64</code>-encoded string.</p> <p>
     * <b>BASE64_DECODE_EXT</b> - Decode a <code>Base64</code>-encoded string, but use
     * a forgiving implementation that ignores characters that aren't valid.</p> <p>
     * <b>CMD_LINE</b> - Command-line transformations. These are helpful in reducing
     * effectiveness of attackers who inject an operating system command-line command
     * and use unusual formatting to disguise some or all of the command. </p> <ul>
     * <li> <p>Delete the following characters: <code>\ " ' ^</code> </p> </li> <li>
     * <p>Delete spaces before the following characters: <code>/ (</code> </p> </li>
     * <li> <p>Replace the following characters with a space: <code>, ;</code> </p>
     * </li> <li> <p>Replace multiple spaces with one space</p> </li> <li> <p>Convert
     * uppercase letters (A-Z) to lowercase (a-z)</p> </li> </ul> <p>
     * <b>COMPRESS_WHITE_SPACE</b> - Replace these characters with a space character
     * (decimal 32): </p> <ul> <li> <p> <code>\f</code>, formfeed, decimal 12</p> </li>
     * <li> <p> <code>\t</code>, tab, decimal 9</p> </li> <li> <p> <code>\n</code>,
     * newline, decimal 10</p> </li> <li> <p> <code>\r</code>, carriage return, decimal
     * 13</p> </li> <li> <p> <code>\v</code>, vertical tab, decimal 11</p> </li> <li>
     * <p>Non-breaking space, decimal 160</p> </li> </ul> <p>
     * <code>COMPRESS_WHITE_SPACE</code> also replaces multiple spaces with one
     * space.</p> <p> <b>CSS_DECODE</b> - Decode characters that were encoded using CSS
     * 2.x escape rules <code>syndata.html#characters</code>. This function uses up to
     * two bytes in the decoding process, so it can help to uncover ASCII characters
     * that were encoded using CSS encoding that wouldn’t typically be encoded. It's
     * also useful in countering evasion, which is a combination of a backslash and
     * non-hexadecimal characters. For example, <code>ja\vascript</code> for
     * javascript. </p> <p> <b>ESCAPE_SEQ_DECODE</b> - Decode the following ANSI C
     * escape sequences: <code>\a</code>, <code>\b</code>, <code>\f</code>,
     * <code>\n</code>, <code>\r</code>, <code>\t</code>, <code>\v</code>,
     * <code>\\</code>, <code>\?</code>, <code>\'</code>, <code>\"</code>,
     * <code>\xHH</code> (hexadecimal), <code>\0OOO</code> (octal). Encodings that
     * aren't valid remain in the output. </p> <p> <b>HEX_DECODE</b> - Decode a string
     * of hexadecimal characters into a binary.</p> <p> <b>HTML_ENTITY_DECODE</b> -
     * Replace HTML-encoded characters with unencoded characters.
     * <code>HTML_ENTITY_DECODE</code> performs these operations: </p> <ul> <li>
     * <p>Replaces <code>(ampersand)quot;</code> with <code>"</code> </p> </li> <li>
     * <p>Replaces <code>(ampersand)nbsp;</code> with a non-breaking space, decimal
     * 160</p> </li> <li> <p>Replaces <code>(ampersand)lt;</code> with a "less than"
     * symbol</p> </li> <li> <p>Replaces <code>(ampersand)gt;</code> with
     * <code>&gt;</code> </p> </li> <li> <p>Replaces characters that are represented in
     * hexadecimal format, <code>(ampersand)#xhhhh;</code>, with the corresponding
     * characters</p> </li> <li> <p>Replaces characters that are represented in decimal
     * format, <code>(ampersand)#nnnn;</code>, with the corresponding characters</p>
     * </li> </ul> <p> <b>JS_DECODE</b> - Decode JavaScript escape sequences. If a
     * <code>\</code> <code>u</code> <code>HHHH</code> code is in the full-width ASCII
     * code range of <code>FF01-FF5E</code>, then the higher byte is used to detect and
     * adjust the lower byte. If not, only the lower byte is used and the higher byte
     * is zeroed, causing a possible loss of information. </p> <p> <b>LOWERCASE</b> -
     * Convert uppercase letters (A-Z) to lowercase (a-z). </p> <p> <b>MD5</b> -
     * Calculate an MD5 hash from the data in the input. The computed hash is in a raw
     * binary form. </p> <p> <b>NONE</b> - Specify <code>NONE</code> if you don't want
     * any text transformations. </p> <p> <b>NORMALIZE_PATH</b> - Remove multiple
     * slashes, directory self-references, and directory back-references that are not
     * at the beginning of the input from an input string. </p> <p>
     * <b>NORMALIZE_PATH_WIN</b> - This is the same as <code>NORMALIZE_PATH</code>, but
     * first converts backslash characters to forward slashes. </p> <p>
     * <b>REMOVE_NULLS</b> - Remove all <code>NULL</code> bytes from the input. </p>
     * <p> <b>REPLACE_COMMENTS</b> - Replace each occurrence of a C-style comment
     * (<code>/ * ... * /</code>) with a single space. Multiple consecutive occurrences
     * are not compressed. Unterminated comments are also replaced with a space (ASCII
     * 0x20). However, a standalone termination of a comment (<code>* /</code>) is not
     * acted upon. </p> <p> <b>REPLACE_NULLS</b> - Replace NULL bytes in the input with
     * space characters (ASCII <code>0x20</code>). </p> <p> <b>SQL_HEX_DECODE</b> -
     * Decode SQL hex data. Example (<code>0x414243</code>) will be decoded to
     * (<code>ABC</code>).</p> <p> <b>URL_DECODE</b> - Decode a URL-encoded value. </p>
     * <p> <b>URL_DECODE_UNI</b> - Like <code>URL_DECODE</code>, but with support for
     * Microsoft-specific <code>%u</code> encoding. If the code is in the full-width
     * ASCII code range of <code>FF01-FF5E</code>, the higher byte is used to detect
     * and adjust the lower byte. Otherwise, only the lower byte is used and the higher
     * byte is zeroed. </p> <p> <b>UTF8_TO_UNICODE</b> - Convert all UTF-8 character
     * sequences to Unicode. This helps input normalization, and minimizing
     * false-positives and false-negatives for non-English languages.</p>
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
