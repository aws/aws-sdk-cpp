/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/StatementOutput.h>
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

StatementOutput::StatementOutput() : 
    m_dataHasBeenSet(false),
    m_executionCount(0),
    m_executionCountHasBeenSet(false),
    m_status(StatementState::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorNameHasBeenSet(false),
    m_errorValueHasBeenSet(false),
    m_tracebackHasBeenSet(false)
{
}

StatementOutput::StatementOutput(JsonView jsonValue) : 
    m_dataHasBeenSet(false),
    m_executionCount(0),
    m_executionCountHasBeenSet(false),
    m_status(StatementState::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorNameHasBeenSet(false),
    m_errorValueHasBeenSet(false),
    m_tracebackHasBeenSet(false)
{
  *this = jsonValue;
}

StatementOutput& StatementOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Data"))
  {
    m_data = jsonValue.GetObject("Data");

    m_dataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionCount"))
  {
    m_executionCount = jsonValue.GetInteger("ExecutionCount");

    m_executionCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatementStateMapper::GetStatementStateForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorName"))
  {
    m_errorName = jsonValue.GetString("ErrorName");

    m_errorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorValue"))
  {
    m_errorValue = jsonValue.GetString("ErrorValue");

    m_errorValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Traceback"))
  {
    Aws::Utils::Array<JsonView> tracebackJsonList = jsonValue.GetArray("Traceback");
    for(unsigned tracebackIndex = 0; tracebackIndex < tracebackJsonList.GetLength(); ++tracebackIndex)
    {
      m_traceback.push_back(tracebackJsonList[tracebackIndex].AsString());
    }
    m_tracebackHasBeenSet = true;
  }

  return *this;
}

JsonValue StatementOutput::Jsonize() const
{
  JsonValue payload;

  if(m_dataHasBeenSet)
  {
   payload.WithObject("Data", m_data.Jsonize());

  }

  if(m_executionCountHasBeenSet)
  {
   payload.WithInteger("ExecutionCount", m_executionCount);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StatementStateMapper::GetNameForStatementState(m_status));
  }

  if(m_errorNameHasBeenSet)
  {
   payload.WithString("ErrorName", m_errorName);

  }

  if(m_errorValueHasBeenSet)
  {
   payload.WithString("ErrorValue", m_errorValue);

  }

  if(m_tracebackHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tracebackJsonList(m_traceback.size());
   for(unsigned tracebackIndex = 0; tracebackIndex < tracebackJsonList.GetLength(); ++tracebackIndex)
   {
     tracebackJsonList[tracebackIndex].AsString(m_traceback[tracebackIndex]);
   }
   payload.WithArray("Traceback", std::move(tracebackJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
