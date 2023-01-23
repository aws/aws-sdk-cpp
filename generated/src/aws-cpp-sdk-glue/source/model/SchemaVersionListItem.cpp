/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/SchemaVersionListItem.h>
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

SchemaVersionListItem::SchemaVersionListItem() : 
    m_schemaArnHasBeenSet(false),
    m_schemaVersionIdHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false),
    m_status(SchemaVersionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

SchemaVersionListItem::SchemaVersionListItem(JsonView jsonValue) : 
    m_schemaArnHasBeenSet(false),
    m_schemaVersionIdHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false),
    m_status(SchemaVersionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
  *this = jsonValue;
}

SchemaVersionListItem& SchemaVersionListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SchemaArn"))
  {
    m_schemaArn = jsonValue.GetString("SchemaArn");

    m_schemaArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaVersionId"))
  {
    m_schemaVersionId = jsonValue.GetString("SchemaVersionId");

    m_schemaVersionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VersionNumber"))
  {
    m_versionNumber = jsonValue.GetInt64("VersionNumber");

    m_versionNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = SchemaVersionStatusMapper::GetSchemaVersionStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetString("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue SchemaVersionListItem::Jsonize() const
{
  JsonValue payload;

  if(m_schemaArnHasBeenSet)
  {
   payload.WithString("SchemaArn", m_schemaArn);

  }

  if(m_schemaVersionIdHasBeenSet)
  {
   payload.WithString("SchemaVersionId", m_schemaVersionId);

  }

  if(m_versionNumberHasBeenSet)
  {
   payload.WithInt64("VersionNumber", m_versionNumber);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", SchemaVersionStatusMapper::GetNameForSchemaVersionStatus(m_status));
  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithString("CreatedTime", m_createdTime);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
