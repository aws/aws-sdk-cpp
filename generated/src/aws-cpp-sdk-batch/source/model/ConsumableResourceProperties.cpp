/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ConsumableResourceProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

ConsumableResourceProperties::ConsumableResourceProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

ConsumableResourceProperties& ConsumableResourceProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("consumableResourceList"))
  {
    Aws::Utils::Array<JsonView> consumableResourceListJsonList = jsonValue.GetArray("consumableResourceList");
    for(unsigned consumableResourceListIndex = 0; consumableResourceListIndex < consumableResourceListJsonList.GetLength(); ++consumableResourceListIndex)
    {
      m_consumableResourceList.push_back(consumableResourceListJsonList[consumableResourceListIndex].AsObject());
    }
    m_consumableResourceListHasBeenSet = true;
  }
  return *this;
}

JsonValue ConsumableResourceProperties::Jsonize() const
{
  JsonValue payload;

  if(m_consumableResourceListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> consumableResourceListJsonList(m_consumableResourceList.size());
   for(unsigned consumableResourceListIndex = 0; consumableResourceListIndex < consumableResourceListJsonList.GetLength(); ++consumableResourceListIndex)
   {
     consumableResourceListJsonList[consumableResourceListIndex].AsObject(m_consumableResourceList[consumableResourceListIndex].Jsonize());
   }
   payload.WithArray("consumableResourceList", std::move(consumableResourceListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
