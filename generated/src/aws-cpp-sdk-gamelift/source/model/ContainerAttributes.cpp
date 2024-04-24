/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ContainerAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

ContainerAttributes::ContainerAttributes() : 
    m_containerPortMappingsHasBeenSet(false)
{
}

ContainerAttributes::ContainerAttributes(JsonView jsonValue) : 
    m_containerPortMappingsHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerAttributes& ContainerAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContainerPortMappings"))
  {
    Aws::Utils::Array<JsonView> containerPortMappingsJsonList = jsonValue.GetArray("ContainerPortMappings");
    for(unsigned containerPortMappingsIndex = 0; containerPortMappingsIndex < containerPortMappingsJsonList.GetLength(); ++containerPortMappingsIndex)
    {
      m_containerPortMappings.push_back(containerPortMappingsJsonList[containerPortMappingsIndex].AsObject());
    }
    m_containerPortMappingsHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_containerPortMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containerPortMappingsJsonList(m_containerPortMappings.size());
   for(unsigned containerPortMappingsIndex = 0; containerPortMappingsIndex < containerPortMappingsJsonList.GetLength(); ++containerPortMappingsIndex)
   {
     containerPortMappingsJsonList[containerPortMappingsIndex].AsObject(m_containerPortMappings[containerPortMappingsIndex].Jsonize());
   }
   payload.WithArray("ContainerPortMappings", std::move(containerPortMappingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
