/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/LogRedactionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

LogRedactionConfiguration::LogRedactionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

LogRedactionConfiguration& LogRedactionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("entitiesToRedact"))
  {
    Aws::Utils::Array<JsonView> entitiesToRedactJsonList = jsonValue.GetArray("entitiesToRedact");
    for(unsigned entitiesToRedactIndex = 0; entitiesToRedactIndex < entitiesToRedactJsonList.GetLength(); ++entitiesToRedactIndex)
    {
      m_entitiesToRedact.push_back(EntityTypeMapper::GetEntityTypeForName(entitiesToRedactJsonList[entitiesToRedactIndex].AsString()));
    }
    m_entitiesToRedactHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customEntityConfig"))
  {
    m_customEntityConfig = jsonValue.GetObject("customEntityConfig");
    m_customEntityConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue LogRedactionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_entitiesToRedactHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entitiesToRedactJsonList(m_entitiesToRedact.size());
   for(unsigned entitiesToRedactIndex = 0; entitiesToRedactIndex < entitiesToRedactJsonList.GetLength(); ++entitiesToRedactIndex)
   {
     entitiesToRedactJsonList[entitiesToRedactIndex].AsString(EntityTypeMapper::GetNameForEntityType(m_entitiesToRedact[entitiesToRedactIndex]));
   }
   payload.WithArray("entitiesToRedact", std::move(entitiesToRedactJsonList));

  }

  if(m_customEntityConfigHasBeenSet)
  {
   payload.WithObject("customEntityConfig", m_customEntityConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
