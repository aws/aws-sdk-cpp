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

#include <aws/rekognition/model/Face.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

Face::Face() : 
    m_faceIdHasBeenSet(false),
    m_boundingBoxHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_externalImageIdHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false)
{
}

Face::Face(const JsonValue& jsonValue) : 
    m_faceIdHasBeenSet(false),
    m_boundingBoxHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_externalImageIdHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false)
{
  *this = jsonValue;
}

Face& Face::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("FaceId"))
  {
    m_faceId = jsonValue.GetString("FaceId");

    m_faceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BoundingBox"))
  {
    m_boundingBox = jsonValue.GetObject("BoundingBox");

    m_boundingBoxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageId"))
  {
    m_imageId = jsonValue.GetString("ImageId");

    m_imageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExternalImageId"))
  {
    m_externalImageId = jsonValue.GetString("ExternalImageId");

    m_externalImageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetDouble("Confidence");

    m_confidenceHasBeenSet = true;
  }

  return *this;
}

JsonValue Face::Jsonize() const
{
  JsonValue payload;

  if(m_faceIdHasBeenSet)
  {
   payload.WithString("FaceId", m_faceId);

  }

  if(m_boundingBoxHasBeenSet)
  {
   payload.WithObject("BoundingBox", m_boundingBox.Jsonize());

  }

  if(m_imageIdHasBeenSet)
  {
   payload.WithString("ImageId", m_imageId);

  }

  if(m_externalImageIdHasBeenSet)
  {
   payload.WithString("ExternalImageId", m_externalImageId);

  }

  if(m_confidenceHasBeenSet)
  {
   payload.WithDouble("Confidence", m_confidence);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws