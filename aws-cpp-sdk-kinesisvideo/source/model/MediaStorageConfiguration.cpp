/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/MediaStorageConfiguration.h>
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

MediaStorageConfiguration::MediaStorageConfiguration() : 
    m_streamARNHasBeenSet(false),
    m_status(MediaStorageConfigurationStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

MediaStorageConfiguration::MediaStorageConfiguration(JsonView jsonValue) : 
    m_streamARNHasBeenSet(false),
    m_status(MediaStorageConfigurationStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

MediaStorageConfiguration& MediaStorageConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StreamARN"))
  {
    m_streamARN = jsonValue.GetString("StreamARN");

    m_streamARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = MediaStorageConfigurationStatusMapper::GetMediaStorageConfigurationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue MediaStorageConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_streamARNHasBeenSet)
  {
   payload.WithString("StreamARN", m_streamARN);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", MediaStorageConfigurationStatusMapper::GetNameForMediaStorageConfigurationStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
