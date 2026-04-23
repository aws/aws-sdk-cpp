/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_queryExecutionContextHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statisticsHasBeenSet(false),
    m_workGroupHasBeenSet(false)
{
}

QueryExecution::QueryExecution(JsonView jsonValue) : 
    m_queryExecutionIdHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_statementType(StatementType::NOT_SET),
    m_statementTypeHasBeenSet(false),
    m_resultConfigurationHasBeenSet(false),
    m_queryExecutionContextHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statisticsHasBeenSet(false),
    m_workGroupHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
