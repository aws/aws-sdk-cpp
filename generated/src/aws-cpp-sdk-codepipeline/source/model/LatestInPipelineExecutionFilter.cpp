/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/LatestInPipelineExecutionFilter.h>
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

LatestInPipelineExecutionFilter::LatestInPipelineExecutionFilter() : 
    m_pipelineExecutionIdHasBeenSet(false),
    m_startTimeRange(StartTimeRange::NOT_SET),
    m_startTimeRangeHasBeenSet(false)
{
}

LatestInPipelineExecutionFilter::LatestInPipelineExecutionFilter(JsonView jsonValue) : 
    m_pipelineExecutionIdHasBeenSet(false),
    m_startTimeRange(StartTimeRange::NOT_SET),
    m_startTimeRangeHasBeenSet(false)
{
  *this = jsonValue;
}

LatestInPipelineExecutionFilter& LatestInPipelineExecutionFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pipelineExecutionId"))
  {
    m_pipelineExecutionId = jsonValue.GetString("pipelineExecutionId");

    m_pipelineExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTimeRange"))
  {
    m_startTimeRange = StartTimeRangeMapper::GetStartTimeRangeForName(jsonValue.GetString("startTimeRange"));

    m_startTimeRangeHasBeenSet = true;
  }

  return *this;
}

JsonValue LatestInPipelineExecutionFilter::Jsonize() const
{
  JsonValue payload;

  if(m_pipelineExecutionIdHasBeenSet)
  {
   payload.WithString("pipelineExecutionId", m_pipelineExecutionId);

  }

  if(m_startTimeRangeHasBeenSet)
  {
   payload.WithString("startTimeRange", StartTimeRangeMapper::GetNameForStartTimeRange(m_startTimeRange));
  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
