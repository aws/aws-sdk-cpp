/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/SchemaListItem.h>
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

SchemaListItem::SchemaListItem() : 
    m_registryNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_schemaArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_schemaStatus(SchemaStatus::NOT_SET),
    m_schemaStatusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false)
{
}

SchemaListItem::SchemaListItem(JsonView jsonValue) : 
    m_registryNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_schemaArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_schemaStatus(SchemaStatus::NOT_SET),
    m_schemaStatusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

SchemaListItem& SchemaListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RegistryName"))
  {
    m_registryName = jsonValue.GetString("RegistryName");

    m_registryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaName"))
  {
    m_schemaName = jsonValue.GetString("SchemaName");

    m_schemaNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaArn"))
  {
    m_schemaArn = jsonValue.GetString("SchemaArn");

    m_schemaArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaStatus"))
  {
    m_schemaStatus = SchemaStatusMapper::GetSchemaStatusForName(jsonValue.GetString("SchemaStatus"));

    m_schemaStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetString("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedTime"))
  {
    m_updatedTime = jsonValue.GetString("UpdatedTime");

    m_updatedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue SchemaListItem::Jsonize() const
{
  JsonValue payload;

  if(m_registryNameHasBeenSet)
  {
   payload.WithString("RegistryName", m_registryName);

  }

  if(m_schemaNameHasBeenSet)
  {
   payload.WithString("SchemaName", m_schemaName);

  }

  if(m_schemaArnHasBeenSet)
  {
   payload.WithString("SchemaArn", m_schemaArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_schemaStatusHasBeenSet)
  {
   payload.WithString("SchemaStatus", SchemaStatusMapper::GetNameForSchemaStatus(m_schemaStatus));
  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithString("CreatedTime", m_createdTime);

  }

  if(m_updatedTimeHasBeenSet)
  {
   payload.WithString("UpdatedTime", m_updatedTime);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
