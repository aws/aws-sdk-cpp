/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/DatabaseInputDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

DatabaseInputDefinition::DatabaseInputDefinition() : 
    m_glueConnectionNameHasBeenSet(false),
    m_databaseTableNameHasBeenSet(false),
    m_tempDirectoryHasBeenSet(false)
{
}

DatabaseInputDefinition::DatabaseInputDefinition(JsonView jsonValue) : 
    m_glueConnectionNameHasBeenSet(false),
    m_databaseTableNameHasBeenSet(false),
    m_tempDirectoryHasBeenSet(false)
{
  *this = jsonValue;
}

DatabaseInputDefinition& DatabaseInputDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GlueConnectionName"))
  {
    m_glueConnectionName = jsonValue.GetString("GlueConnectionName");

    m_glueConnectionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseTableName"))
  {
    m_databaseTableName = jsonValue.GetString("DatabaseTableName");

    m_databaseTableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TempDirectory"))
  {
    m_tempDirectory = jsonValue.GetObject("TempDirectory");

    m_tempDirectoryHasBeenSet = true;
  }

  return *this;
}

JsonValue DatabaseInputDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_glueConnectionNameHasBeenSet)
  {
   payload.WithString("GlueConnectionName", m_glueConnectionName);

  }

  if(m_databaseTableNameHasBeenSet)
  {
   payload.WithString("DatabaseTableName", m_databaseTableName);

  }

  if(m_tempDirectoryHasBeenSet)
  {
   payload.WithObject("TempDirectory", m_tempDirectory.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
