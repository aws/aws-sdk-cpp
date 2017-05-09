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

#include <aws/rekognition/model/FaceMatch.h>
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

FaceMatch::FaceMatch() : 
    m_similarity(0.0),
    m_similarityHasBeenSet(false),
    m_faceHasBeenSet(false)
{
}

FaceMatch::FaceMatch(const JsonValue& jsonValue) : 
    m_similarity(0.0),
    m_similarityHasBeenSet(false),
    m_faceHasBeenSet(false)
{
  *this = jsonValue;
}

FaceMatch& FaceMatch::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Similarity"))
  {
    m_similarity = jsonValue.GetDouble("Similarity");

    m_similarityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Face"))
  {
    m_face = jsonValue.GetObject("Face");

    m_faceHasBeenSet = true;
  }

  return *this;
}

JsonValue FaceMatch::Jsonize() const
{
  JsonValue payload;

  if(m_similarityHasBeenSet)
  {
   payload.WithDouble("Similarity", m_similarity);

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