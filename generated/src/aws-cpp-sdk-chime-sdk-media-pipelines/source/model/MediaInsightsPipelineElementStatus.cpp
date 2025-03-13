/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/MediaInsightsPipelineElementStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

MediaInsightsPipelineElementStatus::MediaInsightsPipelineElementStatus(JsonView jsonValue)
{
  *this = jsonValue;
}

MediaInsightsPipelineElementStatus& MediaInsightsPipelineElementStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = MediaInsightsPipelineConfigurationElementTypeMapper::GetMediaInsightsPipelineConfigurationElementTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = MediaPipelineElementStatusMapper::GetMediaPipelineElementStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue MediaInsightsPipelineElementStatus::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", MediaInsightsPipelineConfigurationElementTypeMapper::GetNameForMediaInsightsPipelineConfigurationElementType(m_type));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", MediaPipelineElementStatusMapper::GetNameForMediaPipelineElementStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
