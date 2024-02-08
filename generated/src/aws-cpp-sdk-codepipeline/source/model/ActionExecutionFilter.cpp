/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ActionExecutionFilter.h>
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

ActionExecutionFilter::ActionExecutionFilter() : 
    m_pipelineExecutionIdHasBeenSet(false),
    m_latestInPipelineExecutionHasBeenSet(false)
{
}

ActionExecutionFilter::ActionExecutionFilter(JsonView jsonValue) : 
    m_pipelineExecutionIdHasBeenSet(false),
    m_latestInPipelineExecutionHasBeenSet(false)
{
  *this = jsonValue;
}

ActionExecutionFilter& ActionExecutionFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pipelineExecutionId"))
  {
    m_pipelineExecutionId = jsonValue.GetString("pipelineExecutionId");

    m_pipelineExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("latestInPipelineExecution"))
  {
    m_latestInPipelineExecution = jsonValue.GetObject("latestInPipelineExecution");

    m_latestInPipelineExecutionHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionExecutionFilter::Jsonize() const
{
  JsonValue payload;

  if(m_pipelineExecutionIdHasBeenSet)
  {
   payload.WithString("pipelineExecutionId", m_pipelineExecutionId);

  }

  if(m_latestInPipelineExecutionHasBeenSet)
  {
   payload.WithObject("latestInPipelineExecution", m_latestInPipelineExecution.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
