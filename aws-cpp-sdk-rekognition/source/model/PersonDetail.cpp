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

#include <aws/rekognition/model/PersonDetail.h>
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

PersonDetail::PersonDetail() : 
    m_index(0),
    m_indexHasBeenSet(false),
    m_boundingBoxHasBeenSet(false),
    m_faceHasBeenSet(false)
{
}

PersonDetail::PersonDetail(const JsonValue& jsonValue) : 
    m_index(0),
    m_indexHasBeenSet(false),
    m_boundingBoxHasBeenSet(false),
    m_faceHasBeenSet(false)
{
  *this = jsonValue;
}

PersonDetail& PersonDetail::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Index"))
  {
    m_index = jsonValue.GetInt64("Index");

    m_indexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BoundingBox"))
  {
    m_boundingBox = jsonValue.GetObject("BoundingBox");

    m_boundingBoxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Face"))
  {
    m_face = jsonValue.GetObject("Face");

    m_faceHasBeenSet = true;
  }

  return *this;
}

JsonValue PersonDetail::Jsonize() const
{
  JsonValue payload;

  if(m_indexHasBeenSet)
  {
   payload.WithInt64("Index", m_index);

  }

  if(m_boundingBoxHasBeenSet)
  {
   payload.WithObject("BoundingBox", m_boundingBox.Jsonize());

  }

  if(m_faceHasBeenSet)
  {
   payload.WithObject("Face", m_face.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
