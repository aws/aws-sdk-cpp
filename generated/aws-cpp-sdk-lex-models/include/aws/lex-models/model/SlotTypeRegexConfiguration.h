﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>Provides a regular expression used to validate the value of a
   * slot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/SlotTypeRegexConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_LEXMODELBUILDINGSERVICE_API SlotTypeRegexConfiguration
  {
  public:
    SlotTypeRegexConfiguration();
    SlotTypeRegexConfiguration(Aws::Utils::Json::JsonView jsonValue);
    SlotTypeRegexConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A regular expression used to validate the value of a slot. </p> <p>Use a
     * standard regular expression. Amazon Lex supports the following characters in the
     * regular expression:</p> <ul> <li> <p>A-Z, a-z</p> </li> <li> <p>0-9</p> </li>
     * <li> <p>Unicode characters ("\ u&lt;Unicode&gt;")</p> </li> </ul> <p>Represent
     * Unicode characters with four digits, for example "\u0041" or "\u005A".</p>
     * <p>The following regular expression operators are not supported:</p> <ul> <li>
     * <p>Infinite repeaters: *, +, or {x,} with no upper bound.</p> </li> <li> <p>Wild
     * card (.)</p> </li> </ul>
     */
    inline const Aws::String& GetPattern() const{ return m_pattern; }

    /**
     * <p>A regular expression used to validate the value of a slot. </p> <p>Use a
     * standard regular expression. Amazon Lex supports the following characters in the
     * regular expression:</p> <ul> <li> <p>A-Z, a-z</p> </li> <li> <p>0-9</p> </li>
     * <li> <p>Unicode characters ("\ u&lt;Unicode&gt;")</p> </li> </ul> <p>Represent
     * Unicode characters with four digits, for example "\u0041" or "\u005A".</p>
     * <p>The following regular expression operators are not supported:</p> <ul> <li>
     * <p>Infinite repeaters: *, +, or {x,} with no upper bound.</p> </li> <li> <p>Wild
     * card (.)</p> </li> </ul>
     */
    inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }

    /**
     * <p>A regular expression used to validate the value of a slot. </p> <p>Use a
     * standard regular expression. Amazon Lex supports the following characters in the
     * regular expression:</p> <ul> <li> <p>A-Z, a-z</p> </li> <li> <p>0-9</p> </li>
     * <li> <p>Unicode characters ("\ u&lt;Unicode&gt;")</p> </li> </ul> <p>Represent
     * Unicode characters with four digits, for example "\u0041" or "\u005A".</p>
     * <p>The following regular expression operators are not supported:</p> <ul> <li>
     * <p>Infinite repeaters: *, +, or {x,} with no upper bound.</p> </li> <li> <p>Wild
     * card (.)</p> </li> </ul>
     */
    inline void SetPattern(const Aws::String& value) { m_patternHasBeenSet = true; m_pattern = value; }

    /**
     * <p>A regular expression used to validate the value of a slot. </p> <p>Use a
     * standard regular expression. Amazon Lex supports the following characters in the
     * regular expression:</p> <ul> <li> <p>A-Z, a-z</p> </li> <li> <p>0-9</p> </li>
     * <li> <p>Unicode characters ("\ u&lt;Unicode&gt;")</p> </li> </ul> <p>Represent
     * Unicode characters with four digits, for example "\u0041" or "\u005A".</p>
     * <p>The following regular expression operators are not supported:</p> <ul> <li>
     * <p>Infinite repeaters: *, +, or {x,} with no upper bound.</p> </li> <li> <p>Wild
     * card (.)</p> </li> </ul>
     */
    inline void SetPattern(Aws::String&& value) { m_patternHasBeenSet = true; m_pattern = std::move(value); }

    /**
     * <p>A regular expression used to validate the value of a slot. </p> <p>Use a
     * standard regular expression. Amazon Lex supports the following characters in the
     * regular expression:</p> <ul> <li> <p>A-Z, a-z</p> </li> <li> <p>0-9</p> </li>
     * <li> <p>Unicode characters ("\ u&lt;Unicode&gt;")</p> </li> </ul> <p>Represent
     * Unicode characters with four digits, for example "\u0041" or "\u005A".</p>
     * <p>The following regular expression operators are not supported:</p> <ul> <li>
     * <p>Infinite repeaters: *, +, or {x,} with no upper bound.</p> </li> <li> <p>Wild
     * card (.)</p> </li> </ul>
     */
    inline void SetPattern(const char* value) { m_patternHasBeenSet = true; m_pattern.assign(value); }

    /**
     * <p>A regular expression used to validate the value of a slot. </p> <p>Use a
     * standard regular expression. Amazon Lex supports the following characters in the
     * regular expression:</p> <ul> <li> <p>A-Z, a-z</p> </li> <li> <p>0-9</p> </li>
     * <li> <p>Unicode characters ("\ u&lt;Unicode&gt;")</p> </li> </ul> <p>Represent
     * Unicode characters with four digits, for example "\u0041" or "\u005A".</p>
     * <p>The following regular expression operators are not supported:</p> <ul> <li>
     * <p>Infinite repeaters: *, +, or {x,} with no upper bound.</p> </li> <li> <p>Wild
     * card (.)</p> </li> </ul>
     */
    inline SlotTypeRegexConfiguration& WithPattern(const Aws::String& value) { SetPattern(value); return *this;}

    /**
     * <p>A regular expression used to validate the value of a slot. </p> <p>Use a
     * standard regular expression. Amazon Lex supports the following characters in the
     * regular expression:</p> <ul> <li> <p>A-Z, a-z</p> </li> <li> <p>0-9</p> </li>
     * <li> <p>Unicode characters ("\ u&lt;Unicode&gt;")</p> </li> </ul> <p>Represent
     * Unicode characters with four digits, for example "\u0041" or "\u005A".</p>
     * <p>The following regular expression operators are not supported:</p> <ul> <li>
     * <p>Infinite repeaters: *, +, or {x,} with no upper bound.</p> </li> <li> <p>Wild
     * card (.)</p> </li> </ul>
     */
    inline SlotTypeRegexConfiguration& WithPattern(Aws::String&& value) { SetPattern(std::move(value)); return *this;}

    /**
     * <p>A regular expression used to validate the value of a slot. </p> <p>Use a
     * standard regular expression. Amazon Lex supports the following characters in the
     * regular expression:</p> <ul> <li> <p>A-Z, a-z</p> </li> <li> <p>0-9</p> </li>
     * <li> <p>Unicode characters ("\ u&lt;Unicode&gt;")</p> </li> </ul> <p>Represent
     * Unicode characters with four digits, for example "\u0041" or "\u005A".</p>
     * <p>The following regular expression operators are not supported:</p> <ul> <li>
     * <p>Infinite repeaters: *, +, or {x,} with no upper bound.</p> </li> <li> <p>Wild
     * card (.)</p> </li> </ul>
     */
    inline SlotTypeRegexConfiguration& WithPattern(const char* value) { SetPattern(value); return *this;}

  private:

    Aws::String m_pattern;
    bool m_patternHasBeenSet;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
