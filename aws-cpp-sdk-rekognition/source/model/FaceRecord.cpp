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

#include <aws/rekognition/model/FaceRecord.h>
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

FaceRecord::FaceRecord() : 
    m_faceHasBeenSet(false),
    m_faceDetailHasBeenSet(false)
{
}

FaceRecord::FaceRecord(const JsonValue& jsonValue) : 
    m_faceHasBeenSet(false),
    m_faceDetailHasBeenSet(false)
{
  *this = jsonValue;
}

FaceRecord& FaceRecord::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Face"))
  {
    m_face = jsonValue.GetObject("Face");

    m_faceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FaceDetail"))
  {
    m_faceDetail = jsonValue.GetObject("FaceDetail");

    m_faceDetailHasBeenSet = true;
  }

  return *this;
}

JsonValue FaceRecord::Jsonize() const
{
  JsonValue payload;

  if(m_faceHasBeenSet)
  {
   payload.WithObject("Face", m_face.Jsonize());

  }

  if(m_faceDetailHasBeenSet)
  {
   payload.WithObject("FaceDetail", m_faceDetail.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws