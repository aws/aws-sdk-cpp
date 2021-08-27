/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MultiplexProgramPipelineDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

MultiplexProgramPipelineDetail::MultiplexProgramPipelineDetail() : 
    m_activeChannelPipelineHasBeenSet(false),
    m_pipelineIdHasBeenSet(false)
{
}

MultiplexProgramPipelineDetail::MultiplexProgramPipelineDetail(JsonView jsonValue) : 
    m_activeChannelPipelineHasBeenSet(false),
    m_pipelineIdHasBeenSet(false)
{
  *this = jsonValue;
}

MultiplexProgramPipelineDetail& MultiplexProgramPipelineDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("activeChannelPipeline"))
  {
    m_activeChannelPipeline = jsonValue.GetString("activeChannelPipeline");

    m_activeChannelPipelineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipelineId"))
  {
    m_pipelineId = jsonValue.GetString("pipelineId");

    m_pipelineIdHasBeenSet = true;
  }

  return *this;
}

JsonValue MultiplexProgramPipelineDetail::Jsonize() const
{
  JsonValue payload;

  if(m_activeChannelPipelineHasBeenSet)
  {
   payload.WithString("activeChannelPipeline", m_activeChannelPipeline);

  }

  if(m_pipelineIdHasBeenSet)
  {
   payload.WithString("pipelineId", m_pipelineId);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
