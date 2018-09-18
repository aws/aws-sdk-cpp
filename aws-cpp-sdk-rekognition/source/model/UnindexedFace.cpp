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

#include <aws/rekognition/model/UnindexedFace.h>
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

UnindexedFace::UnindexedFace() : 
    m_reasonsHasBeenSet(false),
    m_faceDetailHasBeenSet(false)
{
}

UnindexedFace::UnindexedFace(JsonView jsonValue) : 
    m_reasonsHasBeenSet(false),
    m_faceDetailHasBeenSet(false)
{
  *this = jsonValue;
}

UnindexedFace& UnindexedFace::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Reasons"))
  {
    Array<JsonView> reasonsJsonList = jsonValue.GetArray("Reasons");
    for(unsigned reasonsIndex = 0; reasonsIndex < reasonsJsonList.GetLength(); ++reasonsIndex)
    {
      m_reasons.push_back(ReasonMapper::GetReasonForName(reasonsJsonList[reasonsIndex].AsString()));
    }
    m_reasonsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FaceDetail"))
  {
    m_faceDetail = jsonValue.GetObject("FaceDetail");

    m_faceDetailHasBeenSet = true;
  }

  return *this;
}

JsonValue UnindexedFace::Jsonize() const
{
  JsonValue payload;

  if(m_reasonsHasBeenSet)
  {
   Array<JsonValue> reasonsJsonList(m_reasons.size());
   for(unsigned reasonsIndex = 0; reasonsIndex < reasonsJsonList.GetLength(); ++reasonsIndex)
   {
     reasonsJsonList[reasonsIndex].AsString(ReasonMapper::GetNameForReason(m_reasons[reasonsIndex]));
   }
   payload.WithArray("Reasons", std::move(reasonsJsonList));

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
