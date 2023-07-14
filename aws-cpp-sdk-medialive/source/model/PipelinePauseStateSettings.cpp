/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/PipelinePauseStateSettings.h>
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

PipelinePauseStateSettings::PipelinePauseStateSettings() : 
    m_pipelineId(PipelineId::NOT_SET),
    m_pipelineIdHasBeenSet(false)
{
}

PipelinePauseStateSettings::PipelinePauseStateSettings(JsonView jsonValue) : 
    m_pipelineId(PipelineId::NOT_SET),
    m_pipelineIdHasBeenSet(false)
{
  *this = jsonValue;
}

PipelinePauseStateSettings& PipelinePauseStateSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pipelineId"))
  {
    m_pipelineId = PipelineIdMapper::GetPipelineIdForName(jsonValue.GetString("pipelineId"));

    m_pipelineIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PipelinePauseStateSettings::Jsonize() const
{
  JsonValue payload;

  if(m_pipelineIdHasBeenSet)
  {
   payload.WithString("pipelineId", PipelineIdMapper::GetNameForPipelineId(m_pipelineId));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
