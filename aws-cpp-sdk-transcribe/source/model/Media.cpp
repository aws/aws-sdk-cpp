﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
