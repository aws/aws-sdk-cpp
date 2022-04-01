/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastictranscoder/model/Preset.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

Preset::Preset() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_containerHasBeenSet(false),
    m_audioHasBeenSet(false),
    m_videoHasBeenSet(false),
    m_thumbnailsHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

Preset::Preset(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_containerHasBeenSet(false),
    m_audioHasBeenSet(false),
    m_videoHasBeenSet(false),
    m_thumbnailsHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Preset& Preset::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Container"))
  {
    m_container = jsonValue.GetString("Container");

    m_containerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Audio"))
  {
    m_audio = jsonValue.GetObject("Audio");

    m_audioHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Video"))
  {
    m_video = jsonValue.GetObject("Video");

    m_videoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Thumbnails"))
  {
    m_thumbnails = jsonValue.GetObject("Thumbnails");

    m_thumbnailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Preset::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_containerHasBeenSet)
  {
   payload.WithString("Container", m_container);

  }

  if(m_audioHasBeenSet)
  {
   payload.WithObject("Audio", m_audio.Jsonize());

  }

  if(m_videoHasBeenSet)
  {
   payload.WithObject("Video", m_video.Jsonize());

  }

  if(m_thumbnailsHasBeenSet)
  {
   payload.WithObject("Thumbnails", m_thumbnails.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
