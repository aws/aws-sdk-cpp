/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/Interpretation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{

Interpretation::Interpretation() : 
    m_nluConfidenceHasBeenSet(false),
    m_sentimentResponseHasBeenSet(false),
    m_intentHasBeenSet(false),
    m_interpretationSource(InterpretationSource::NOT_SET),
    m_interpretationSourceHasBeenSet(false)
{
}

Interpretation::Interpretation(JsonView jsonValue) : 
    m_nluConfidenceHasBeenSet(false),
    m_sentimentResponseHasBeenSet(false),
    m_intentHasBeenSet(false),
    m_interpretationSource(InterpretationSource::NOT_SET),
    m_interpretationSourceHasBeenSet(false)
{
  *this = jsonValue;
}

Interpretation& Interpretation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("nluConfidence"))
  {
    m_nluConfidence = jsonValue.GetObject("nluConfidence");

    m_nluConfidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sentimentResponse"))
  {
    m_sentimentResponse = jsonValue.GetObject("sentimentResponse");

    m_sentimentResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("intent"))
  {
    m_intent = jsonValue.GetObject("intent");

    m_intentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("interpretationSource"))
  {
    m_interpretationSource = InterpretationSourceMapper::GetInterpretationSourceForName(jsonValue.GetString("interpretationSource"));

    m_interpretationSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue Interpretation::Jsonize() const
{
  JsonValue payload;

  if(m_nluConfidenceHasBeenSet)
  {
   payload.WithObject("nluConfidence", m_nluConfidence.Jsonize());

  }

  if(m_sentimentResponseHasBeenSet)
  {
   payload.WithObject("sentimentResponse", m_sentimentResponse.Jsonize());

  }

  if(m_intentHasBeenSet)
  {
   payload.WithObject("intent", m_intent.Jsonize());

  }

  if(m_interpretationSourceHasBeenSet)
  {
   payload.WithString("interpretationSource", InterpretationSourceMapper::GetNameForInterpretationSource(m_interpretationSource));
  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
