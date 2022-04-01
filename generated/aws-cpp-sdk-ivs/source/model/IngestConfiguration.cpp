/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/IngestConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IVS
{
namespace Model
{

IngestConfiguration::IngestConfiguration() : 
    m_audioHasBeenSet(false),
    m_videoHasBeenSet(false)
{
}

IngestConfiguration::IngestConfiguration(JsonView jsonValue) : 
    m_audioHasBeenSet(false),
    m_videoHasBeenSet(false)
{
  *this = jsonValue;
}

IngestConfiguration& IngestConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audio"))
  {
    m_audio = jsonValue.GetObject("audio");

    m_audioHasBeenSet = true;
  }

  if(jsonValue.ValueExists("video"))
  {
    m_video = jsonValue.GetObject("video");

    m_videoHasBeenSet = true;
  }

  return *this;
}

JsonValue IngestConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_audioHasBeenSet)
  {
   payload.WithObject("audio", m_audio.Jsonize());

  }

  if(m_videoHasBeenSet)
  {
   payload.WithObject("video", m_video.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IVS
} // namespace Aws
