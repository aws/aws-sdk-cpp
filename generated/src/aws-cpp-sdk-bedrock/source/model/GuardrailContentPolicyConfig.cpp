/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailContentPolicyConfig.h>
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

GuardrailContentPolicyConfig::GuardrailContentPolicyConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailContentPolicyConfig& GuardrailContentPolicyConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("filtersConfig"))
  {
    Aws::Utils::Array<JsonView> filtersConfigJsonList = jsonValue.GetArray("filtersConfig");
    for(unsigned filtersConfigIndex = 0; filtersConfigIndex < filtersConfigJsonList.GetLength(); ++filtersConfigIndex)
    {
      m_filtersConfig.push_back(filtersConfigJsonList[filtersConfigIndex].AsObject());
    }
    m_filtersConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tierConfig"))
  {
    m_tierConfig = jsonValue.GetObject("tierConfig");
    m_tierConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailContentPolicyConfig::Jsonize() const
{
  JsonValue payload;

  if(m_filtersConfigHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersConfigJsonList(m_filtersConfig.size());
   for(unsigned filtersConfigIndex = 0; filtersConfigIndex < filtersConfigJsonList.GetLength(); ++filtersConfigIndex)
   {
     filtersConfigJsonList[filtersConfigIndex].AsObject(m_filtersConfig[filtersConfigIndex].Jsonize());
   }
   payload.WithArray("filtersConfig", std::move(filtersConfigJsonList));

  }

  if(m_tierConfigHasBeenSet)
  {
   payload.WithObject("tierConfig", m_tierConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
