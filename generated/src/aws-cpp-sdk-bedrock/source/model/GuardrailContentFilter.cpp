/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailContentFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

GuardrailContentFilter::GuardrailContentFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailContentFilter& GuardrailContentFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = GuardrailContentFilterTypeMapper::GetGuardrailContentFilterTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputStrength"))
  {
    m_inputStrength = GuardrailFilterStrengthMapper::GetGuardrailFilterStrengthForName(jsonValue.GetString("inputStrength"));
    m_inputStrengthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputStrength"))
  {
    m_outputStrength = GuardrailFilterStrengthMapper::GetGuardrailFilterStrengthForName(jsonValue.GetString("outputStrength"));
    m_outputStrengthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputModalities"))
  {
    Aws::Utils::Array<JsonView> inputModalitiesJsonList = jsonValue.GetArray("inputModalities");
    for(unsigned inputModalitiesIndex = 0; inputModalitiesIndex < inputModalitiesJsonList.GetLength(); ++inputModalitiesIndex)
    {
      m_inputModalities.push_back(GuardrailModalityMapper::GetGuardrailModalityForName(inputModalitiesJsonList[inputModalitiesIndex].AsString()));
    }
    m_inputModalitiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputModalities"))
  {
    Aws::Utils::Array<JsonView> outputModalitiesJsonList = jsonValue.GetArray("outputModalities");
    for(unsigned outputModalitiesIndex = 0; outputModalitiesIndex < outputModalitiesJsonList.GetLength(); ++outputModalitiesIndex)
    {
      m_outputModalities.push_back(GuardrailModalityMapper::GetGuardrailModalityForName(outputModalitiesJsonList[outputModalitiesIndex].AsString()));
    }
    m_outputModalitiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputAction"))
  {
    m_inputAction = GuardrailContentFilterActionMapper::GetGuardrailContentFilterActionForName(jsonValue.GetString("inputAction"));
    m_inputActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputAction"))
  {
    m_outputAction = GuardrailContentFilterActionMapper::GetGuardrailContentFilterActionForName(jsonValue.GetString("outputAction"));
    m_outputActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputEnabled"))
  {
    m_inputEnabled = jsonValue.GetBool("inputEnabled");
    m_inputEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputEnabled"))
  {
    m_outputEnabled = jsonValue.GetBool("outputEnabled");
    m_outputEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailContentFilter::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", GuardrailContentFilterTypeMapper::GetNameForGuardrailContentFilterType(m_type));
  }

  if(m_inputStrengthHasBeenSet)
  {
   payload.WithString("inputStrength", GuardrailFilterStrengthMapper::GetNameForGuardrailFilterStrength(m_inputStrength));
  }

  if(m_outputStrengthHasBeenSet)
  {
   payload.WithString("outputStrength", GuardrailFilterStrengthMapper::GetNameForGuardrailFilterStrength(m_outputStrength));
  }

  if(m_inputModalitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputModalitiesJsonList(m_inputModalities.size());
   for(unsigned inputModalitiesIndex = 0; inputModalitiesIndex < inputModalitiesJsonList.GetLength(); ++inputModalitiesIndex)
   {
     inputModalitiesJsonList[inputModalitiesIndex].AsString(GuardrailModalityMapper::GetNameForGuardrailModality(m_inputModalities[inputModalitiesIndex]));
   }
   payload.WithArray("inputModalities", std::move(inputModalitiesJsonList));

  }

  if(m_outputModalitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputModalitiesJsonList(m_outputModalities.size());
   for(unsigned outputModalitiesIndex = 0; outputModalitiesIndex < outputModalitiesJsonList.GetLength(); ++outputModalitiesIndex)
   {
     outputModalitiesJsonList[outputModalitiesIndex].AsString(GuardrailModalityMapper::GetNameForGuardrailModality(m_outputModalities[outputModalitiesIndex]));
   }
   payload.WithArray("outputModalities", std::move(outputModalitiesJsonList));

  }

  if(m_inputActionHasBeenSet)
  {
   payload.WithString("inputAction", GuardrailContentFilterActionMapper::GetNameForGuardrailContentFilterAction(m_inputAction));
  }

  if(m_outputActionHasBeenSet)
  {
   payload.WithString("outputAction", GuardrailContentFilterActionMapper::GetNameForGuardrailContentFilterAction(m_outputAction));
  }

  if(m_inputEnabledHasBeenSet)
  {
   payload.WithBool("inputEnabled", m_inputEnabled);

  }

  if(m_outputEnabledHasBeenSet)
  {
   payload.WithBool("outputEnabled", m_outputEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
