/*
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

#include <aws/rekognition/model/Image.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

Image::Image() : 
    m_bytesHasBeenSet(false),
    m_s3ObjectHasBeenSet(false)
{
}

Image::Image(const JsonValue& jsonValue) : 
    m_bytesHasBeenSet(false),
    m_s3ObjectHasBeenSet(false)
{
  *this = jsonValue;
}

Image& Image::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Bytes"))
  {
    m_bytes = HashingUtils::Base64Decode(jsonValue.GetString("Bytes"));
    m_bytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Object"))
  {
    m_s3Object = jsonValue.GetObject("S3Object");

    m_s3ObjectHasBeenSet = true;
  }

  return *this;
}

JsonValue Image::Jsonize() const
{
  JsonValue payload;

  if(m_bytesHasBeenSet)
  {
   payload.WithString("Bytes", HashingUtils::Base64Encode(m_bytes));
  }

  if(m_s3ObjectHasBeenSet)
  {
   payload.WithObject("S3Object", m_s3Object.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws