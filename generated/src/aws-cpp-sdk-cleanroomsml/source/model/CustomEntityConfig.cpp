/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/CustomEntityConfig.h>
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

CustomEntityConfig::CustomEntityConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomEntityConfig& CustomEntityConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customDataIdentifiers"))
  {
    Aws::Utils::Array<JsonView> customDataIdentifiersJsonList = jsonValue.GetArray("customDataIdentifiers");
    for(unsigned customDataIdentifiersIndex = 0; customDataIdentifiersIndex < customDataIdentifiersJsonList.GetLength(); ++customDataIdentifiersIndex)
    {
      m_customDataIdentifiers.push_back(customDataIdentifiersJsonList[customDataIdentifiersIndex].AsString());
    }
    m_customDataIdentifiersHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomEntityConfig::Jsonize() const
{
  JsonValue payload;

  if(m_customDataIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customDataIdentifiersJsonList(m_customDataIdentifiers.size());
   for(unsigned customDataIdentifiersIndex = 0; customDataIdentifiersIndex < customDataIdentifiersJsonList.GetLength(); ++customDataIdentifiersIndex)
   {
     customDataIdentifiersJsonList[customDataIdentifiersIndex].AsString(m_customDataIdentifiers[customDataIdentifiersIndex]);
   }
   payload.WithArray("customDataIdentifiers", std::move(customDataIdentifiersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
