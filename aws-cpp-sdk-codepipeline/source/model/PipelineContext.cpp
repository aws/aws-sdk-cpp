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
