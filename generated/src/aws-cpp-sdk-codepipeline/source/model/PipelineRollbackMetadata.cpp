/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/PipelineRollbackMetadata.h>
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

PipelineRollbackMetadata::PipelineRollbackMetadata() : 
    m_rollbackTargetPipelineExecutionIdHasBeenSet(false)
{
}

PipelineRollbackMetadata::PipelineRollbackMetadata(JsonView jsonValue) : 
    m_rollbackTargetPipelineExecutionIdHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineRollbackMetadata& PipelineRollbackMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("rollbackTargetPipelineExecutionId"))
  {
    m_rollbackTargetPipelineExecutionId = jsonValue.GetString("rollbackTargetPipelineExecutionId");

    m_rollbackTargetPipelineExecutionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PipelineRollbackMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_rollbackTargetPipelineExecutionIdHasBeenSet)
  {
   payload.WithString("rollbackTargetPipelineExecutionId", m_rollbackTargetPipelineExecutionId);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
