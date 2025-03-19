/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/SnowflakeTableSchema.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

SnowflakeTableSchema::SnowflakeTableSchema(JsonView jsonValue)
{
  *this = jsonValue;
}

SnowflakeTableSchema& SnowflakeTableSchema::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("v1"))
  {
    Aws::Utils::Array<JsonView> v1JsonList = jsonValue.GetArray("v1");
    for(unsigned v1Index = 0; v1Index < v1JsonList.GetLength(); ++v1Index)
    {
      m_v1.push_back(v1JsonList[v1Index].AsObject());
    }
    m_v1HasBeenSet = true;
  }
  return *this;
}

JsonValue SnowflakeTableSchema::Jsonize() const
{
  JsonValue payload;

  if(m_v1HasBeenSet)
  {
   Aws::Utils::Array<JsonValue> v1JsonList(m_v1.size());
   for(unsigned v1Index = 0; v1Index < v1JsonList.GetLength(); ++v1Index)
   {
     v1JsonList[v1Index].AsObject(m_v1[v1Index].Jsonize());
   }
   payload.WithArray("v1", std::move(v1JsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
