/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/TranslationSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Translate
{
namespace Model
{

TranslationSettings::TranslationSettings() : 
    m_formality(Formality::NOT_SET),
    m_formalityHasBeenSet(false),
    m_profanity(Profanity::NOT_SET),
    m_profanityHasBeenSet(false)
{
}

TranslationSettings::TranslationSettings(JsonView jsonValue) : 
    m_formality(Formality::NOT_SET),
    m_formalityHasBeenSet(false),
    m_profanity(Profanity::NOT_SET),
    m_profanityHasBeenSet(false)
{
  *this = jsonValue;
}

TranslationSettings& TranslationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Formality"))
  {
    m_formality = FormalityMapper::GetFormalityForName(jsonValue.GetString("Formality"));

    m_formalityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Profanity"))
  {
    m_profanity = ProfanityMapper::GetProfanityForName(jsonValue.GetString("Profanity"));

    m_profanityHasBeenSet = true;
  }

  return *this;
}

JsonValue TranslationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_formalityHasBeenSet)
  {
   payload.WithString("Formality", FormalityMapper::GetNameForFormality(m_formality));
  }

  if(m_profanityHasBeenSet)
  {
   payload.WithString("Profanity", ProfanityMapper::GetNameForProfanity(m_profanity));
  }

  return payload;
}

} // namespace Model
} // namespace Translate
} // namespace Aws
