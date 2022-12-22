/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ExecutorsSummary.h>
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

ExecutorsSummary::ExecutorsSummary() : 
    m_executorIdHasBeenSet(false),
    m_executorType(ExecutorType::NOT_SET),
    m_executorTypeHasBeenSet(false),
    m_startDateTime(0),
    m_startDateTimeHasBeenSet(false),
    m_terminationDateTime(0),
    m_terminationDateTimeHasBeenSet(false),
    m_executorState(ExecutorState::NOT_SET),
    m_executorStateHasBeenSet(false),
    m_executorSize(0),
    m_executorSizeHasBeenSet(false)
{
}

ExecutorsSummary::ExecutorsSummary(JsonView jsonValue) : 
    m_executorIdHasBeenSet(false),
    m_executorType(ExecutorType::NOT_SET),
    m_executorTypeHasBeenSet(false),
    m_startDateTime(0),
    m_startDateTimeHasBeenSet(false),
    m_terminationDateTime(0),
    m_terminationDateTimeHasBeenSet(false),
    m_executorState(ExecutorState::NOT_SET),
    m_executorStateHasBeenSet(false),
    m_executorSize(0),
    m_executorSizeHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutorsSummary& ExecutorsSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExecutorId"))
  {
    m_executorId = jsonValue.GetString("ExecutorId");

    m_executorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutorType"))
  {
    m_executorType = ExecutorTypeMapper::GetExecutorTypeForName(jsonValue.GetString("ExecutorType"));

    m_executorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartDateTime"))
  {
    m_startDateTime = jsonValue.GetInt64("StartDateTime");

    m_startDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TerminationDateTime"))
  {
    m_terminationDateTime = jsonValue.GetInt64("TerminationDateTime");

    m_terminationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutorState"))
  {
    m_executorState = ExecutorStateMapper::GetExecutorStateForName(jsonValue.GetString("ExecutorState"));

    m_executorStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutorSize"))
  {
    m_executorSize = jsonValue.GetInt64("ExecutorSize");

    m_executorSizeHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutorsSummary::Jsonize() const
{
  JsonValue payload;

  if(m_executorIdHasBeenSet)
  {
   payload.WithString("ExecutorId", m_executorId);

  }

  if(m_executorTypeHasBeenSet)
  {
   payload.WithString("ExecutorType", ExecutorTypeMapper::GetNameForExecutorType(m_executorType));
  }

  if(m_startDateTimeHasBeenSet)
  {
   payload.WithInt64("StartDateTime", m_startDateTime);

  }

  if(m_terminationDateTimeHasBeenSet)
  {
   payload.WithInt64("TerminationDateTime", m_terminationDateTime);

  }

  if(m_executorStateHasBeenSet)
  {
   payload.WithString("ExecutorState", ExecutorStateMapper::GetNameForExecutorState(m_executorState));
  }

  if(m_executorSizeHasBeenSet)
  {
   payload.WithInt64("ExecutorSize", m_executorSize);

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
