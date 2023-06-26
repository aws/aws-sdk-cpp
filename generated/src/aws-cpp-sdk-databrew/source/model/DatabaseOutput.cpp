/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/DatabaseOutput.h>
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

DatabaseOutput::DatabaseOutput() : 
    m_glueConnectionNameHasBeenSet(false),
    m_databaseOptionsHasBeenSet(false),
    m_databaseOutputMode(DatabaseOutputMode::NOT_SET),
    m_databaseOutputModeHasBeenSet(false)
{
}

DatabaseOutput::DatabaseOutput(JsonView jsonValue) : 
    m_glueConnectionNameHasBeenSet(false),
    m_databaseOptionsHasBeenSet(false),
    m_databaseOutputMode(DatabaseOutputMode::NOT_SET),
    m_databaseOutputModeHasBeenSet(false)
{
  *this = jsonValue;
}

DatabaseOutput& DatabaseOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GlueConnectionName"))
  {
    m_glueConnectionName = jsonValue.GetString("GlueConnectionName");

    m_glueConnectionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseOptions"))
  {
    m_databaseOptions = jsonValue.GetObject("DatabaseOptions");

    m_databaseOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseOutputMode"))
  {
    m_databaseOutputMode = DatabaseOutputModeMapper::GetDatabaseOutputModeForName(jsonValue.GetString("DatabaseOutputMode"));

    m_databaseOutputModeHasBeenSet = true;
  }

  return *this;
}

JsonValue DatabaseOutput::Jsonize() const
{
  JsonValue payload;

  if(m_glueConnectionNameHasBeenSet)
  {
   payload.WithString("GlueConnectionName", m_glueConnectionName);

  }

  if(m_databaseOptionsHasBeenSet)
  {
   payload.WithObject("DatabaseOptions", m_databaseOptions.Jsonize());

  }

  if(m_databaseOutputModeHasBeenSet)
  {
   payload.WithString("DatabaseOutputMode", DatabaseOutputModeMapper::GetNameForDatabaseOutputMode(m_databaseOutputMode));
  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
