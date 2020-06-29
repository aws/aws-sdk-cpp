/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/Media.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

Media::Media() : 
    m_mediaFileUriHasBeenSet(false)
{
}

Media::Media(JsonView jsonValue) : 
    m_mediaFileUriHasBeenSet(false)
{
  *this = jsonValue;
}

Media& Media::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MediaFileUri"))
  {
    m_mediaFileUri = jsonValue.GetString("MediaFileUri");

    m_mediaFileUriHasBeenSet = true;
  }

  return *this;
}

JsonValue Media::Jsonize() const
{
  JsonValue payload;

  if(m_mediaFileUriHasBeenSet)
  {
   payload.WithString("MediaFileUri", m_mediaFileUri);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
