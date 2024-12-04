/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailContentFilterConfig.h>
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

GuardrailContentFilterConfig::GuardrailContentFilterConfig() : 
    m_type(GuardrailContentFilterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_inputStrength(GuardrailFilterStrength::NOT_SET),
    m_inputStrengthHasBeenSet(false),
    m_outputStrength(GuardrailFilterStrength::NOT_SET),
    m_outputStrengthHasBeenSet(false),
    m_inputModalitiesHasBeenSet(false),
    m_outputModalitiesHasBeenSet(false)
{
}

GuardrailContentFilterConfig::GuardrailContentFilterConfig(JsonView jsonValue)
  : GuardrailContentFilterConfig()
{
  *this = jsonValue;
}

GuardrailContentFilterConfig& GuardrailContentFilterConfig::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue GuardrailContentFilterConfig::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
