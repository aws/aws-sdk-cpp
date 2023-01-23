/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ExecutionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

ExecutionResult::ExecutionResult() : 
    m_errorInfoHasBeenSet(false),
    m_bytesProcessed(0),
    m_bytesProcessedHasBeenSet(false),
    m_bytesWritten(0),
    m_bytesWrittenHasBeenSet(false),
    m_recordsProcessed(0),
    m_recordsProcessedHasBeenSet(false)
{
}

ExecutionResult::ExecutionResult(JsonView jsonValue) : 
    m_errorInfoHasBeenSet(false),
    m_bytesProcessed(0),
    m_bytesProcessedHasBeenSet(false),
    m_bytesWritten(0),
    m_bytesWrittenHasBeenSet(false),
    m_recordsProcessed(0),
    m_recordsProcessedHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionResult& ExecutionResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorInfo"))
  {
    m_errorInfo = jsonValue.GetObject("errorInfo");

    m_errorInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bytesProcessed"))
  {
    m_bytesProcessed = jsonValue.GetInt64("bytesProcessed");

    m_bytesProcessedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bytesWritten"))
  {
    m_bytesWritten = jsonValue.GetInt64("bytesWritten");

    m_bytesWrittenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recordsProcessed"))
  {
    m_recordsProcessed = jsonValue.GetInt64("recordsProcessed");

    m_recordsProcessedHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutionResult::Jsonize() const
{
  JsonValue payload;

  if(m_errorInfoHasBeenSet)
  {
   payload.WithObject("errorInfo", m_errorInfo.Jsonize());

  }

  if(m_bytesProcessedHasBeenSet)
  {
   payload.WithInt64("bytesProcessed", m_bytesProcessed);

  }

  if(m_bytesWrittenHasBeenSet)
  {
   payload.WithInt64("bytesWritten", m_bytesWritten);

  }

  if(m_recordsProcessedHasBeenSet)
  {
   payload.WithInt64("recordsProcessed", m_recordsProcessed);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
