/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>

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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides the configuration information for suggested query spell
   * corrections.</p> <p>Suggested spell corrections are based on words that appear
   * in your indexed documents and how closely a corrected word matches a misspelled
   * word.</p> <p>This feature is designed with certain defaults or limits. For
   * information on the current limits and how to request more support for some
   * limits, see the <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/query-spell-check.html">Spell
   * Checker documentation</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/SpellCorrectionConfiguration">AWS
   * API Reference</a></p>
   */
  class SpellCorrectionConfiguration
  {
  public:
    AWS_KENDRA_API SpellCorrectionConfiguration();
    AWS_KENDRA_API SpellCorrectionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API SpellCorrectionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> <code>TRUE</code> to suggest spell corrections for queries.</p>
     */
    inline bool GetIncludeQuerySpellCheckSuggestions() const{ return m_includeQuerySpellCheckSuggestions; }

    /**
     * <p> <code>TRUE</code> to suggest spell corrections for queries.</p>
     */
    inline bool IncludeQuerySpellCheckSuggestionsHasBeenSet() const { return m_includeQuerySpellCheckSuggestionsHasBeenSet; }

    /**
     * <p> <code>TRUE</code> to suggest spell corrections for queries.</p>
     */
    inline void SetIncludeQuerySpellCheckSuggestions(bool value) { m_includeQuerySpellCheckSuggestionsHasBeenSet = true; m_includeQuerySpellCheckSuggestions = value; }

    /**
     * <p> <code>TRUE</code> to suggest spell corrections for queries.</p>
     */
    inline SpellCorrectionConfiguration& WithIncludeQuerySpellCheckSuggestions(bool value) { SetIncludeQuerySpellCheckSuggestions(value); return *this;}

  private:

    bool m_includeQuerySpellCheckSuggestions;
    bool m_includeQuerySpellCheckSuggestionsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
