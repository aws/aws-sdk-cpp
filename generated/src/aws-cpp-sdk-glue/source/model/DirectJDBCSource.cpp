/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DirectJDBCSource.h>
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

DirectJDBCSource::DirectJDBCSource(JsonView jsonValue)
{
  *this = jsonValue;
}

DirectJDBCSource& DirectJDBCSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetString("Database");
    m_databaseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Table"))
  {
    m_table = jsonValue.GetString("Table");
    m_tableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectionName"))
  {
    m_connectionName = jsonValue.GetString("ConnectionName");
    m_connectionNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectionType"))
  {
    m_connectionType = JDBCConnectionTypeMapper::GetJDBCConnectionTypeForName(jsonValue.GetString("ConnectionType"));
    m_connectionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RedshiftTmpDir"))
  {
    m_redshiftTmpDir = jsonValue.GetString("RedshiftTmpDir");
    m_redshiftTmpDirHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutputSchemas"))
  {
    Aws::Utils::Array<JsonView> outputSchemasJsonList = jsonValue.GetArray("OutputSchemas");
    for(unsigned outputSchemasIndex = 0; outputSchemasIndex < outputSchemasJsonList.GetLength(); ++outputSchemasIndex)
    {
      m_outputSchemas.push_back(outputSchemasJsonList[outputSchemasIndex].AsObject());
    }
    m_outputSchemasHasBeenSet = true;
  }
  return *this;
}

JsonValue DirectJDBCSource::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("Database", m_database);

  }

  if(m_tableHasBeenSet)
  {
   payload.WithString("Table", m_table);

  }

  if(m_connectionNameHasBeenSet)
  {
   payload.WithString("ConnectionName", m_connectionName);

  }

  if(m_connectionTypeHasBeenSet)
  {
   payload.WithString("ConnectionType", JDBCConnectionTypeMapper::GetNameForJDBCConnectionType(m_connectionType));
  }

  if(m_redshiftTmpDirHasBeenSet)
  {
   payload.WithString("RedshiftTmpDir", m_redshiftTmpDir);

  }

  if(m_outputSchemasHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputSchemasJsonList(m_outputSchemas.size());
   for(unsigned outputSchemasIndex = 0; outputSchemasIndex < outputSchemasJsonList.GetLength(); ++outputSchemasIndex)
   {
     outputSchemasJsonList[outputSchemasIndex].AsObject(m_outputSchemas[outputSchemasIndex].Jsonize());
   }
   payload.WithArray("OutputSchemas", std::move(outputSchemasJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
