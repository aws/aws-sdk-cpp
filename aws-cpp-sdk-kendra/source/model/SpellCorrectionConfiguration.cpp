/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/SpellCorrectionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

SpellCorrectionConfiguration::SpellCorrectionConfiguration() : 
    m_includeQuerySpellCheckSuggestions(false),
    m_includeQuerySpellCheckSuggestionsHasBeenSet(false)
{
}

SpellCorrectionConfiguration::SpellCorrectionConfiguration(JsonView jsonValue) : 
    m_includeQuerySpellCheckSuggestions(false),
    m_includeQuerySpellCheckSuggestionsHasBeenSet(false)
{
  *this = jsonValue;
}

SpellCorrectionConfiguration& SpellCorrectionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IncludeQuerySpellCheckSuggestions"))
  {
    m_includeQuerySpellCheckSuggestions = jsonValue.GetBool("IncludeQuerySpellCheckSuggestions");

    m_includeQuerySpellCheckSuggestionsHasBeenSet = true;
  }

  return *this;
}

JsonValue SpellCorrectionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_includeQuerySpellCheckSuggestionsHasBeenSet)
  {
   payload.WithBool("IncludeQuerySpellCheckSuggestions", m_includeQuerySpellCheckSuggestions);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
