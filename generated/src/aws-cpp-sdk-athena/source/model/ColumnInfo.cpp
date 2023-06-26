/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ColumnInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

ColumnInfo::ColumnInfo() : 
    m_catalogNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_precision(0),
    m_precisionHasBeenSet(false),
    m_scale(0),
    m_scaleHasBeenSet(false),
    m_nullable(ColumnNullable::NOT_SET),
    m_nullableHasBeenSet(false),
    m_caseSensitive(false),
    m_caseSensitiveHasBeenSet(false)
{
}

ColumnInfo::ColumnInfo(JsonView jsonValue) : 
    m_catalogNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_precision(0),
    m_precisionHasBeenSet(false),
    m_scale(0),
    m_scaleHasBeenSet(false),
    m_nullable(ColumnNullable::NOT_SET),
    m_nullableHasBeenSet(false),
    m_caseSensitive(false),
    m_caseSensitiveHasBeenSet(false)
{
  *this = jsonValue;
}

ColumnInfo& ColumnInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CatalogName"))
  {
    m_catalogName = jsonValue.GetString("CatalogName");

    m_catalogNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaName"))
  {
    m_schemaName = jsonValue.GetString("SchemaName");

    m_schemaNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Label"))
  {
    m_label = jsonValue.GetString("Label");

    m_labelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Precision"))
  {
    m_precision = jsonValue.GetInteger("Precision");

    m_precisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Scale"))
  {
    m_scale = jsonValue.GetInteger("Scale");

    m_scaleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Nullable"))
  {
    m_nullable = ColumnNullableMapper::GetColumnNullableForName(jsonValue.GetString("Nullable"));

    m_nullableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CaseSensitive"))
  {
    m_caseSensitive = jsonValue.GetBool("CaseSensitive");

    m_caseSensitiveHasBeenSet = true;
  }

  return *this;
}

JsonValue ColumnInfo::Jsonize() const
{
  JsonValue payload;

  if(m_catalogNameHasBeenSet)
  {
   payload.WithString("CatalogName", m_catalogName);

  }

  if(m_schemaNameHasBeenSet)
  {
   payload.WithString("SchemaName", m_schemaName);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_labelHasBeenSet)
  {
   payload.WithString("Label", m_label);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_precisionHasBeenSet)
  {
   payload.WithInteger("Precision", m_precision);

  }

  if(m_scaleHasBeenSet)
  {
   payload.WithInteger("Scale", m_scale);

  }

  if(m_nullableHasBeenSet)
  {
   payload.WithString("Nullable", ColumnNullableMapper::GetNameForColumnNullable(m_nullable));
  }

  if(m_caseSensitiveHasBeenSet)
  {
   payload.WithBool("CaseSensitive", m_caseSensitive);

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
