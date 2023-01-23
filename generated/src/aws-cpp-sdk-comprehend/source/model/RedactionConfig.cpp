/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/RedactionConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

RedactionConfig::RedactionConfig() : 
    m_piiEntityTypesHasBeenSet(false),
    m_maskMode(PiiEntitiesDetectionMaskMode::NOT_SET),
    m_maskModeHasBeenSet(false),
    m_maskCharacterHasBeenSet(false)
{
}

RedactionConfig::RedactionConfig(JsonView jsonValue) : 
    m_piiEntityTypesHasBeenSet(false),
    m_maskMode(PiiEntitiesDetectionMaskMode::NOT_SET),
    m_maskModeHasBeenSet(false),
    m_maskCharacterHasBeenSet(false)
{
  *this = jsonValue;
}

RedactionConfig& RedactionConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PiiEntityTypes"))
  {
    Aws::Utils::Array<JsonView> piiEntityTypesJsonList = jsonValue.GetArray("PiiEntityTypes");
    for(unsigned piiEntityTypesIndex = 0; piiEntityTypesIndex < piiEntityTypesJsonList.GetLength(); ++piiEntityTypesIndex)
    {
      m_piiEntityTypes.push_back(PiiEntityTypeMapper::GetPiiEntityTypeForName(piiEntityTypesJsonList[piiEntityTypesIndex].AsString()));
    }
    m_piiEntityTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaskMode"))
  {
    m_maskMode = PiiEntitiesDetectionMaskModeMapper::GetPiiEntitiesDetectionMaskModeForName(jsonValue.GetString("MaskMode"));

    m_maskModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaskCharacter"))
  {
    m_maskCharacter = jsonValue.GetString("MaskCharacter");

    m_maskCharacterHasBeenSet = true;
  }

  return *this;
}

JsonValue RedactionConfig::Jsonize() const
{
  JsonValue payload;

  if(m_piiEntityTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> piiEntityTypesJsonList(m_piiEntityTypes.size());
   for(unsigned piiEntityTypesIndex = 0; piiEntityTypesIndex < piiEntityTypesJsonList.GetLength(); ++piiEntityTypesIndex)
   {
     piiEntityTypesJsonList[piiEntityTypesIndex].AsString(PiiEntityTypeMapper::GetNameForPiiEntityType(m_piiEntityTypes[piiEntityTypesIndex]));
   }
   payload.WithArray("PiiEntityTypes", std::move(piiEntityTypesJsonList));

  }

  if(m_maskModeHasBeenSet)
  {
   payload.WithString("MaskMode", PiiEntitiesDetectionMaskModeMapper::GetNameForPiiEntitiesDetectionMaskMode(m_maskMode));
  }

  if(m_maskCharacterHasBeenSet)
  {
   payload.WithString("MaskCharacter", m_maskCharacter);

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
