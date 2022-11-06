/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/Origination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

Origination::Origination() : 
    m_routesHasBeenSet(false),
    m_disabled(false),
    m_disabledHasBeenSet(false)
{
}

Origination::Origination(JsonView jsonValue) : 
    m_routesHasBeenSet(false),
    m_disabled(false),
    m_disabledHasBeenSet(false)
{
  *this = jsonValue;
}

Origination& Origination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Routes"))
  {
    Aws::Utils::Array<JsonView> routesJsonList = jsonValue.GetArray("Routes");
    for(unsigned routesIndex = 0; routesIndex < routesJsonList.GetLength(); ++routesIndex)
    {
      m_routes.push_back(routesJsonList[routesIndex].AsObject());
    }
    m_routesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Disabled"))
  {
    m_disabled = jsonValue.GetBool("Disabled");

    m_disabledHasBeenSet = true;
  }

  return *this;
}

JsonValue Origination::Jsonize() const
{
  JsonValue payload;

  if(m_routesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> routesJsonList(m_routes.size());
   for(unsigned routesIndex = 0; routesIndex < routesJsonList.GetLength(); ++routesIndex)
   {
     routesJsonList[routesIndex].AsObject(m_routes[routesIndex].Jsonize());
   }
   payload.WithArray("Routes", std::move(routesJsonList));

  }

  if(m_disabledHasBeenSet)
  {
   payload.WithBool("Disabled", m_disabled);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
