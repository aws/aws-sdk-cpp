/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/PipelineContext.h>
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

PipelineContext::PipelineContext() : 
    m_pipelineNameHasBeenSet(false),
    m_stageHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_pipelineArnHasBeenSet(false),
    m_pipelineExecutionIdHasBeenSet(false)
{
}

PipelineContext::PipelineContext(JsonView jsonValue) : 
    m_pipelineNameHasBeenSet(false),
    m_stageHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_pipelineArnHasBeenSet(false),
    m_pipelineExecutionIdHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineContext& PipelineContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pipelineName"))
  {
    m_pipelineName = jsonValue.GetString("pipelineName");

    m_pipelineNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stage"))
  {
    m_stage = jsonValue.GetObject("stage");

    m_stageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("action"))
  {
    m_action = jsonValue.GetObject("action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipelineArn"))
  {
    m_pipelineArn = jsonValue.GetString("pipelineArn");

    m_pipelineArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipelineExecutionId"))
  {
    m_pipelineExecutionId = jsonValue.GetString("pipelineExecutionId");

    m_pipelineExecutionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PipelineContext::Jsonize() const
{
  JsonValue payload;

  if(m_pipelineNameHasBeenSet)
  {
   payload.WithString("pipelineName", m_pipelineName);

  }

  if(m_stageHasBeenSet)
  {
   payload.WithObject("stage", m_stage.Jsonize());

  }

  if(m_actionHasBeenSet)
  {
   payload.WithObject("action", m_action.Jsonize());

  }

  if(m_pipelineArnHasBeenSet)
  {
   payload.WithString("pipelineArn", m_pipelineArn);

  }

  if(m_pipelineExecutionIdHasBeenSet)
  {
   payload.WithString("pipelineExecutionId", m_pipelineExecutionId);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
