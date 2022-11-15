/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/QueryExecution.h>
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

QueryExecution::QueryExecution() : 
    m_queryExecutionIdHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_statementType(StatementType::NOT_SET),
    m_statementTypeHasBeenSet(false),
    m_resultConfigurationHasBeenSet(false),
    m_resultReuseConfigurationHasBeenSet(false),
    m_queryExecutionContextHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statisticsHasBeenSet(false),
    m_workGroupHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_executionParametersHasBeenSet(false)
{
}

QueryExecution::QueryExecution(JsonView jsonValue) : 
    m_queryExecutionIdHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_statementType(StatementType::NOT_SET),
    m_statementTypeHasBeenSet(false),
    m_resultConfigurationHasBeenSet(false),
    m_resultReuseConfigurationHasBeenSet(false),
    m_queryExecutionContextHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statisticsHasBeenSet(false),
    m_workGroupHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_executionParametersHasBeenSet(false)
{
  *this = jsonValue;
}

QueryExecution& QueryExecution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QueryExecutionId"))
  {
    m_queryExecutionId = jsonValue.GetString("QueryExecutionId");

    m_queryExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Query"))
  {
    m_query = jsonValue.GetString("Query");

    m_queryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatementType"))
  {
    m_statementType = StatementTypeMapper::GetStatementTypeForName(jsonValue.GetString("StatementType"));

    m_statementTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResultConfiguration"))
  {
    m_resultConfiguration = jsonValue.GetObject("ResultConfiguration");

    m_resultConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResultReuseConfiguration"))
  {
    m_resultReuseConfiguration = jsonValue.GetObject("ResultReuseConfiguration");

    m_resultReuseConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueryExecutionContext"))
  {
    m_queryExecutionContext = jsonValue.GetObject("QueryExecutionContext");

    m_queryExecutionContextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Statistics"))
  {
    m_statistics = jsonValue.GetObject("Statistics");

    m_statisticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkGroup"))
  {
    m_workGroup = jsonValue.GetString("WorkGroup");

    m_workGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineVersion"))
  {
    m_engineVersion = jsonValue.GetObject("EngineVersion");

    m_engineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionParameters"))
  {
    Aws::Utils::Array<JsonView> executionParametersJsonList = jsonValue.GetArray("ExecutionParameters");
    for(unsigned executionParametersIndex = 0; executionParametersIndex < executionParametersJsonList.GetLength(); ++executionParametersIndex)
    {
      m_executionParameters.push_back(executionParametersJsonList[executionParametersIndex].AsString());
    }
    m_executionParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryExecution::Jsonize() const
{
  JsonValue payload;

  if(m_queryExecutionIdHasBeenSet)
  {
   payload.WithString("QueryExecutionId", m_queryExecutionId);

  }

  if(m_queryHasBeenSet)
  {
   payload.WithString("Query", m_query);

  }

  if(m_statementTypeHasBeenSet)
  {
   payload.WithString("StatementType", StatementTypeMapper::GetNameForStatementType(m_statementType));
  }

  if(m_resultConfigurationHasBeenSet)
  {
   payload.WithObject("ResultConfiguration", m_resultConfiguration.Jsonize());

  }

  if(m_resultReuseConfigurationHasBeenSet)
  {
   payload.WithObject("ResultReuseConfiguration", m_resultReuseConfiguration.Jsonize());

  }

  if(m_queryExecutionContextHasBeenSet)
  {
   payload.WithObject("QueryExecutionContext", m_queryExecutionContext.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  if(m_statisticsHasBeenSet)
  {
   payload.WithObject("Statistics", m_statistics.Jsonize());

  }

  if(m_workGroupHasBeenSet)
  {
   payload.WithString("WorkGroup", m_workGroup);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithObject("EngineVersion", m_engineVersion.Jsonize());

  }

  if(m_executionParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> executionParametersJsonList(m_executionParameters.size());
   for(unsigned executionParametersIndex = 0; executionParametersIndex < executionParametersJsonList.GetLength(); ++executionParametersIndex)
   {
     executionParametersJsonList[executionParametersIndex].AsString(m_executionParameters[executionParametersIndex]);
   }
   payload.WithArray("ExecutionParameters", std::move(executionParametersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
