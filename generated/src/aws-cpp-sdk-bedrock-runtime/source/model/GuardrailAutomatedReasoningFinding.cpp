/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningFinding.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

GuardrailAutomatedReasoningFinding::GuardrailAutomatedReasoningFinding(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailAutomatedReasoningFinding& GuardrailAutomatedReasoningFinding::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("valid"))
  {
    m_valid = jsonValue.GetObject("valid");
    m_validHasBeenSet = true;
  }
  if(jsonValue.ValueExists("invalid"))
  {
    m_invalid = jsonValue.GetObject("invalid");
    m_invalidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("satisfiable"))
  {
    m_satisfiable = jsonValue.GetObject("satisfiable");
    m_satisfiableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("impossible"))
  {
    m_impossible = jsonValue.GetObject("impossible");
    m_impossibleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("translationAmbiguous"))
  {
    m_translationAmbiguous = jsonValue.GetObject("translationAmbiguous");
    m_translationAmbiguousHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tooComplex"))
  {
    m_tooComplex = jsonValue.GetObject("tooComplex");
    m_tooComplexHasBeenSet = true;
  }
  if(jsonValue.ValueExists("noTranslations"))
  {
    m_noTranslations = jsonValue.GetObject("noTranslations");
    m_noTranslationsHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailAutomatedReasoningFinding::Jsonize() const
{
  JsonValue payload;

  if(m_validHasBeenSet)
  {
   payload.WithObject("valid", m_valid.Jsonize());

  }

  if(m_invalidHasBeenSet)
  {
   payload.WithObject("invalid", m_invalid.Jsonize());

  }

  if(m_satisfiableHasBeenSet)
  {
   payload.WithObject("satisfiable", m_satisfiable.Jsonize());

  }

  if(m_impossibleHasBeenSet)
  {
   payload.WithObject("impossible", m_impossible.Jsonize());

  }

  if(m_translationAmbiguousHasBeenSet)
  {
   payload.WithObject("translationAmbiguous", m_translationAmbiguous.Jsonize());

  }

  if(m_tooComplexHasBeenSet)
  {
   payload.WithObject("tooComplex", m_tooComplex.Jsonize());

  }

  if(m_noTranslationsHasBeenSet)
  {
   payload.WithObject("noTranslations", m_noTranslations.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
