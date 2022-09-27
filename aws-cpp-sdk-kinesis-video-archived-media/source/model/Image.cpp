/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-archived-media/model/Image.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisVideoArchivedMedia
{
namespace Model
{

Image::Image() : 
    m_timeStampHasBeenSet(false),
    m_error(ImageError::NOT_SET),
    m_errorHasBeenSet(false),
    m_imageContentHasBeenSet(false)
{
}

Image::Image(JsonView jsonValue) : 
    m_timeStampHasBeenSet(false),
    m_error(ImageError::NOT_SET),
    m_errorHasBeenSet(false),
    m_imageContentHasBeenSet(false)
{
  *this = jsonValue;
}

Image& Image::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimeStamp"))
  {
    m_timeStamp = jsonValue.GetDouble("TimeStamp");

    m_timeStampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Error"))
  {
    m_error = ImageErrorMapper::GetImageErrorForName(jsonValue.GetString("Error"));

    m_errorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageContent"))
  {
    m_imageContent = jsonValue.GetString("ImageContent");

    m_imageContentHasBeenSet = true;
  }

  return *this;
}

JsonValue Image::Jsonize() const
{
  JsonValue payload;

  if(m_timeStampHasBeenSet)
  {
   payload.WithDouble("TimeStamp", m_timeStamp.SecondsWithMSPrecision());
  }

  if(m_errorHasBeenSet)
  {
   payload.WithString("Error", ImageErrorMapper::GetNameForImageError(m_error));
  }

  if(m_imageContentHasBeenSet)
  {
   payload.WithString("ImageContent", m_imageContent);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
