/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/GlueTableReference.h>
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

GlueTableReference::GlueTableReference() : 
    m_tableNameHasBeenSet(false),
    m_databaseNameHasBeenSet(false)
{
}

GlueTableReference::GlueTableReference(JsonView jsonValue) : 
    m_tableNameHasBeenSet(false),
    m_databaseNameHasBeenSet(false)
{
  *this = jsonValue;
}

GlueTableReference& GlueTableReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tableName"))
  {
    m_tableName = jsonValue.GetString("tableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("databaseName"))
  {
    m_databaseName = jsonValue.GetString("databaseName");

    m_databaseNameHasBeenSet = true;
  }

  return *this;
}

JsonValue GlueTableReference::Jsonize() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("tableName", m_tableName);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("databaseName", m_databaseName);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
