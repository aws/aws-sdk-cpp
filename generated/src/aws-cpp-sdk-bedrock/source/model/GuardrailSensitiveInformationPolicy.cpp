/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailSensitiveInformationPolicy.h>
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

GuardrailSensitiveInformationPolicy::GuardrailSensitiveInformationPolicy() : 
    m_piiEntitiesHasBeenSet(false),
    m_regexesHasBeenSet(false)
{
}

GuardrailSensitiveInformationPolicy::GuardrailSensitiveInformationPolicy(JsonView jsonValue) : 
    m_piiEntitiesHasBeenSet(false),
    m_regexesHasBeenSet(false)
{
  *this = jsonValue;
}

GuardrailSensitiveInformationPolicy& GuardrailSensitiveInformationPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("piiEntities"))
  {
    Aws::Utils::Array<JsonView> piiEntitiesJsonList = jsonValue.GetArray("piiEntities");
    for(unsigned piiEntitiesIndex = 0; piiEntitiesIndex < piiEntitiesJsonList.GetLength(); ++piiEntitiesIndex)
    {
      m_piiEntities.push_back(piiEntitiesJsonList[piiEntitiesIndex].AsObject());
    }
    m_piiEntitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("regexes"))
  {
    Aws::Utils::Array<JsonView> regexesJsonList = jsonValue.GetArray("regexes");
    for(unsigned regexesIndex = 0; regexesIndex < regexesJsonList.GetLength(); ++regexesIndex)
    {
      m_regexes.push_back(regexesJsonList[regexesIndex].AsObject());
    }
    m_regexesHasBeenSet = true;
  }

  return *this;
}

JsonValue GuardrailSensitiveInformationPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_piiEntitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> piiEntitiesJsonList(m_piiEntities.size());
   for(unsigned piiEntitiesIndex = 0; piiEntitiesIndex < piiEntitiesJsonList.GetLength(); ++piiEntitiesIndex)
   {
     piiEntitiesJsonList[piiEntitiesIndex].AsObject(m_piiEntities[piiEntitiesIndex].Jsonize());
   }
   payload.WithArray("piiEntities", std::move(piiEntitiesJsonList));

  }

  if(m_regexesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regexesJsonList(m_regexes.size());
   for(unsigned regexesIndex = 0; regexesIndex < regexesJsonList.GetLength(); ++regexesIndex)
   {
     regexesJsonList[regexesIndex].AsObject(m_regexes[regexesIndex].Jsonize());
   }
   payload.WithArray("regexes", std::move(regexesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
