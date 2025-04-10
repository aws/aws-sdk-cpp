﻿/**
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

ExecutionResult::ExecutionResult(JsonView jsonValue)
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
  if(jsonValue.ValueExists("numParallelProcesses"))
  {
    m_numParallelProcesses = jsonValue.GetInt64("numParallelProcesses");
    m_numParallelProcessesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxPageSize"))
  {
    m_maxPageSize = jsonValue.GetInt64("maxPageSize");
    m_maxPageSizeHasBeenSet = true;
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

  if(m_numParallelProcessesHasBeenSet)
  {
   payload.WithInt64("numParallelProcesses", m_numParallelProcesses);

  }

  if(m_maxPageSizeHasBeenSet)
  {
   payload.WithInt64("maxPageSize", m_maxPageSize);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
