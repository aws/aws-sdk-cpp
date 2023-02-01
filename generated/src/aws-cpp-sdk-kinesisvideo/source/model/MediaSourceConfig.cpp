/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/MediaSourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

MediaSourceConfig::MediaSourceConfig() : 
    m_mediaUriSecretArnHasBeenSet(false),
    m_mediaUriType(MediaUriType::NOT_SET),
    m_mediaUriTypeHasBeenSet(false)
{
}

MediaSourceConfig::MediaSourceConfig(JsonView jsonValue) : 
    m_mediaUriSecretArnHasBeenSet(false),
    m_mediaUriType(MediaUriType::NOT_SET),
    m_mediaUriTypeHasBeenSet(false)
{
  *this = jsonValue;
}

MediaSourceConfig& MediaSourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MediaUriSecretArn"))
  {
    m_mediaUriSecretArn = jsonValue.GetString("MediaUriSecretArn");

    m_mediaUriSecretArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediaUriType"))
  {
    m_mediaUriType = MediaUriTypeMapper::GetMediaUriTypeForName(jsonValue.GetString("MediaUriType"));

    m_mediaUriTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue MediaSourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_mediaUriSecretArnHasBeenSet)
  {
   payload.WithString("MediaUriSecretArn", m_mediaUriSecretArn);

  }

  if(m_mediaUriTypeHasBeenSet)
  {
   payload.WithString("MediaUriType", MediaUriTypeMapper::GetNameForMediaUriType(m_mediaUriType));
  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
