﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Provides a regular expression used to validate the value of a
   * slot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SlotValueRegexFilter">AWS
   * API Reference</a></p>
   */
  class SlotValueRegexFilter
  {
  public:
    AWS_LEXMODELSV2_API SlotValueRegexFilter() = default;
    AWS_LEXMODELSV2_API SlotValueRegexFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SlotValueRegexFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A regular expression used to validate the value of a slot.</p> <p> Use a
     * standard regular expression. Amazon Lex supports the following characters in the
     * regular expression: </p> <ul> <li> <p>A-Z, a-z</p> </li> <li> <p>0-9</p> </li>
     * <li> <p>Unicode characters ("\⁠u&lt;Unicode&gt;")</p> </li> </ul> <p> Represent
     * Unicode characters with four digits, for example "\⁠u0041" or "\⁠u005A". </p>
     * <p> The following regular expression operators are not supported: </p> <ul> <li>
     * <p>Infinite repeaters: *, +, or {x,} with no upper bound.</p> </li> <li> <p>Wild
     * card (.)</p> </li> </ul>
     */
    inline const Aws::String& GetPattern() const { return m_pattern; }
    inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }
    template<typename PatternT = Aws::String>
    void SetPattern(PatternT&& value) { m_patternHasBeenSet = true; m_pattern = std::forward<PatternT>(value); }
    template<typename PatternT = Aws::String>
    SlotValueRegexFilter& WithPattern(PatternT&& value) { SetPattern(std::forward<PatternT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pattern;
    bool m_patternHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
