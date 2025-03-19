/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/IdMappingTableSchemaTypeProperties.h>
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

IdMappingTableSchemaTypeProperties::IdMappingTableSchemaTypeProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

IdMappingTableSchemaTypeProperties& IdMappingTableSchemaTypeProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("idMappingTableInputSource"))
  {
    Aws::Utils::Array<JsonView> idMappingTableInputSourceJsonList = jsonValue.GetArray("idMappingTableInputSource");
    for(unsigned idMappingTableInputSourceIndex = 0; idMappingTableInputSourceIndex < idMappingTableInputSourceJsonList.GetLength(); ++idMappingTableInputSourceIndex)
    {
      m_idMappingTableInputSource.push_back(idMappingTableInputSourceJsonList[idMappingTableInputSourceIndex].AsObject());
    }
    m_idMappingTableInputSourceHasBeenSet = true;
  }
  return *this;
}

JsonValue IdMappingTableSchemaTypeProperties::Jsonize() const
{
  JsonValue payload;

  if(m_idMappingTableInputSourceHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> idMappingTableInputSourceJsonList(m_idMappingTableInputSource.size());
   for(unsigned idMappingTableInputSourceIndex = 0; idMappingTableInputSourceIndex < idMappingTableInputSourceJsonList.GetLength(); ++idMappingTableInputSourceIndex)
   {
     idMappingTableInputSourceJsonList[idMappingTableInputSourceIndex].AsObject(m_idMappingTableInputSource[idMappingTableInputSourceIndex].Jsonize());
   }
   payload.WithArray("idMappingTableInputSource", std::move(idMappingTableInputSourceJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
