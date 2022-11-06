/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Mapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

Mapping::Mapping() : 
    m_toKeyHasBeenSet(false),
    m_fromPathHasBeenSet(false),
    m_fromTypeHasBeenSet(false),
    m_toTypeHasBeenSet(false),
    m_dropped(false),
    m_droppedHasBeenSet(false),
    m_childrenHasBeenSet(false)
{
}

Mapping::Mapping(JsonView jsonValue) : 
    m_toKeyHasBeenSet(false),
    m_fromPathHasBeenSet(false),
    m_fromTypeHasBeenSet(false),
    m_toTypeHasBeenSet(false),
    m_dropped(false),
    m_droppedHasBeenSet(false),
    m_childrenHasBeenSet(false)
{
  *this = jsonValue;
}

Mapping& Mapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ToKey"))
  {
    m_toKey = jsonValue.GetString("ToKey");

    m_toKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FromPath"))
  {
    Aws::Utils::Array<JsonView> fromPathJsonList = jsonValue.GetArray("FromPath");
    for(unsigned fromPathIndex = 0; fromPathIndex < fromPathJsonList.GetLength(); ++fromPathIndex)
    {
      m_fromPath.push_back(fromPathJsonList[fromPathIndex].AsString());
    }
    m_fromPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FromType"))
  {
    m_fromType = jsonValue.GetString("FromType");

    m_fromTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ToType"))
  {
    m_toType = jsonValue.GetString("ToType");

    m_toTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Dropped"))
  {
    m_dropped = jsonValue.GetBool("Dropped");

    m_droppedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Children"))
  {
    Aws::Utils::Array<JsonView> childrenJsonList = jsonValue.GetArray("Children");
    for(unsigned childrenIndex = 0; childrenIndex < childrenJsonList.GetLength(); ++childrenIndex)
    {
      m_children.push_back(childrenJsonList[childrenIndex].AsObject());
    }
    m_childrenHasBeenSet = true;
  }

  return *this;
}

JsonValue Mapping::Jsonize() const
{
  JsonValue payload;

  if(m_toKeyHasBeenSet)
  {
   payload.WithString("ToKey", m_toKey);

  }

  if(m_fromPathHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fromPathJsonList(m_fromPath.size());
   for(unsigned fromPathIndex = 0; fromPathIndex < fromPathJsonList.GetLength(); ++fromPathIndex)
   {
     fromPathJsonList[fromPathIndex].AsString(m_fromPath[fromPathIndex]);
   }
   payload.WithArray("FromPath", std::move(fromPathJsonList));

  }

  if(m_fromTypeHasBeenSet)
  {
   payload.WithString("FromType", m_fromType);

  }

  if(m_toTypeHasBeenSet)
  {
   payload.WithString("ToType", m_toType);

  }

  if(m_droppedHasBeenSet)
  {
   payload.WithBool("Dropped", m_dropped);

  }

  if(m_childrenHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> childrenJsonList(m_children.size());
   for(unsigned childrenIndex = 0; childrenIndex < childrenJsonList.GetLength(); ++childrenIndex)
   {
     childrenJsonList[childrenIndex].AsObject(m_children[childrenIndex].Jsonize());
   }
   payload.WithArray("Children", std::move(childrenJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
