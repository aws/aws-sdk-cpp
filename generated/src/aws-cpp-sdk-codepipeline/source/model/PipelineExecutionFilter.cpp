/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/PipelineExecutionFilter.h>
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

PipelineExecutionFilter::PipelineExecutionFilter() : 
    m_succeededInStageHasBeenSet(false)
{
}

PipelineExecutionFilter::PipelineExecutionFilter(JsonView jsonValue) : 
    m_succeededInStageHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineExecutionFilter& PipelineExecutionFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("succeededInStage"))
  {
    m_succeededInStage = jsonValue.GetObject("succeededInStage");

    m_succeededInStageHasBeenSet = true;
  }

  return *this;
}

JsonValue PipelineExecutionFilter::Jsonize() const
{
  JsonValue payload;

  if(m_succeededInStageHasBeenSet)
  {
   payload.WithObject("succeededInStage", m_succeededInStage.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
