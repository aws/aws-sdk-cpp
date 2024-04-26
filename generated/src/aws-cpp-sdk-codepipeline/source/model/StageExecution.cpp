/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/StageExecution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

StageExecution::StageExecution() : 
    m_pipelineExecutionIdHasBeenSet(false),
    m_status(StageExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(ExecutionType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

StageExecution::StageExecution(JsonView jsonValue) : 
    m_pipelineExecutionIdHasBeenSet(false),
    m_status(StageExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(ExecutionType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

StageExecution& StageExecution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pipelineExecutionId"))
  {
    m_pipelineExecutionId = jsonValue.GetString("pipelineExecutionId");

    m_pipelineExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = StageExecutionStatusMapper::GetStageExecutionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = ExecutionTypeMapper::GetExecutionTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue StageExecution::Jsonize() const
{
  JsonValue payload;

  if(m_pipelineExecutionIdHasBeenSet)
  {
   payload.WithString("pipelineExecutionId", m_pipelineExecutionId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", StageExecutionStatusMapper::GetNameForStageExecutionStatus(m_status));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ExecutionTypeMapper::GetNameForExecutionType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
