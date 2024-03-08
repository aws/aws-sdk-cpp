/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/MediaStreamSource.h>
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

MediaStreamSource::MediaStreamSource() : 
    m_sourceType(MediaPipelineSourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_sourceArnHasBeenSet(false)
{
}

MediaStreamSource::MediaStreamSource(JsonView jsonValue) : 
    m_sourceType(MediaPipelineSourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_sourceArnHasBeenSet(false)
{
  *this = jsonValue;
}

MediaStreamSource& MediaStreamSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = MediaPipelineSourceTypeMapper::GetMediaPipelineSourceTypeForName(jsonValue.GetString("SourceType"));

    m_sourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceArn"))
  {
    m_sourceArn = jsonValue.GetString("SourceArn");

    m_sourceArnHasBeenSet = true;
  }

  return *this;
}

JsonValue MediaStreamSource::Jsonize() const
{
  JsonValue payload;

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", MediaPipelineSourceTypeMapper::GetNameForMediaPipelineSourceType(m_sourceType));
  }

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("SourceArn", m_sourceArn);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
