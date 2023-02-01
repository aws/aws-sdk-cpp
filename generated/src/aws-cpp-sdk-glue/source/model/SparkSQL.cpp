/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/SparkSQL.h>
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

SparkSQL::SparkSQL() : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_sqlQueryHasBeenSet(false),
    m_sqlAliasesHasBeenSet(false),
    m_outputSchemasHasBeenSet(false)
{
}

SparkSQL::SparkSQL(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_sqlQueryHasBeenSet(false),
    m_sqlAliasesHasBeenSet(false),
    m_outputSchemasHasBeenSet(false)
{
  *this = jsonValue;
}

SparkSQL& SparkSQL::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Inputs"))
  {
    Aws::Utils::Array<JsonView> inputsJsonList = jsonValue.GetArray("Inputs");
    for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
    {
      m_inputs.push_back(inputsJsonList[inputsIndex].AsString());
    }
    m_inputsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SqlQuery"))
  {
    m_sqlQuery = jsonValue.GetString("SqlQuery");

    m_sqlQueryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SqlAliases"))
  {
    Aws::Utils::Array<JsonView> sqlAliasesJsonList = jsonValue.GetArray("SqlAliases");
    for(unsigned sqlAliasesIndex = 0; sqlAliasesIndex < sqlAliasesJsonList.GetLength(); ++sqlAliasesIndex)
    {
      m_sqlAliases.push_back(sqlAliasesJsonList[sqlAliasesIndex].AsObject());
    }
    m_sqlAliasesHasBeenSet = true;
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

JsonValue SparkSQL::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_inputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputsJsonList(m_inputs.size());
   for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
   {
     inputsJsonList[inputsIndex].AsString(m_inputs[inputsIndex]);
   }
   payload.WithArray("Inputs", std::move(inputsJsonList));

  }

  if(m_sqlQueryHasBeenSet)
  {
   payload.WithString("SqlQuery", m_sqlQuery);

  }

  if(m_sqlAliasesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sqlAliasesJsonList(m_sqlAliases.size());
   for(unsigned sqlAliasesIndex = 0; sqlAliasesIndex < sqlAliasesJsonList.GetLength(); ++sqlAliasesIndex)
   {
     sqlAliasesJsonList[sqlAliasesIndex].AsObject(m_sqlAliases[sqlAliasesIndex].Jsonize());
   }
   payload.WithArray("SqlAliases", std::move(sqlAliasesJsonList));

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
