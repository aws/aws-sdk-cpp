/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/IcebergSchema.h>
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

IcebergSchema::IcebergSchema(JsonView jsonValue)
{
  *this = jsonValue;
}

IcebergSchema& IcebergSchema::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SchemaId"))
  {
    m_schemaId = jsonValue.GetInteger("SchemaId");
    m_schemaIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdentifierFieldIds"))
  {
    Aws::Utils::Array<JsonView> identifierFieldIdsJsonList = jsonValue.GetArray("IdentifierFieldIds");
    for(unsigned identifierFieldIdsIndex = 0; identifierFieldIdsIndex < identifierFieldIdsJsonList.GetLength(); ++identifierFieldIdsIndex)
    {
      m_identifierFieldIds.push_back(identifierFieldIdsJsonList[identifierFieldIdsIndex].AsInteger());
    }
    m_identifierFieldIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = IcebergStructTypeEnumMapper::GetIcebergStructTypeEnumForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Fields"))
  {
    Aws::Utils::Array<JsonView> fieldsJsonList = jsonValue.GetArray("Fields");
    for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
    {
      m_fields.push_back(fieldsJsonList[fieldsIndex].AsObject());
    }
    m_fieldsHasBeenSet = true;
  }
  return *this;
}

JsonValue IcebergSchema::Jsonize() const
{
  JsonValue payload;

  if(m_schemaIdHasBeenSet)
  {
   payload.WithInteger("SchemaId", m_schemaId);

  }

  if(m_identifierFieldIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> identifierFieldIdsJsonList(m_identifierFieldIds.size());
   for(unsigned identifierFieldIdsIndex = 0; identifierFieldIdsIndex < identifierFieldIdsJsonList.GetLength(); ++identifierFieldIdsIndex)
   {
     identifierFieldIdsJsonList[identifierFieldIdsIndex].AsInteger(m_identifierFieldIds[identifierFieldIdsIndex]);
   }
   payload.WithArray("IdentifierFieldIds", std::move(identifierFieldIdsJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", IcebergStructTypeEnumMapper::GetNameForIcebergStructTypeEnum(m_type));
  }

  if(m_fieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldsJsonList(m_fields.size());
   for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
   {
     fieldsJsonList[fieldsIndex].AsObject(m_fields[fieldsIndex].Jsonize());
   }
   payload.WithArray("Fields", std::move(fieldsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
