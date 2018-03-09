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

#include <aws/mediaconvert/model/ImageInserter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

ImageInserter::ImageInserter() : 
    m_insertableImagesHasBeenSet(false)
{
}

ImageInserter::ImageInserter(const JsonValue& jsonValue) : 
    m_insertableImagesHasBeenSet(false)
{
  *this = jsonValue;
}

ImageInserter& ImageInserter::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("insertableImages"))
  {
    Array<JsonValue> insertableImagesJsonList = jsonValue.GetArray("insertableImages");
    for(unsigned insertableImagesIndex = 0; insertableImagesIndex < insertableImagesJsonList.GetLength(); ++insertableImagesIndex)
    {
      m_insertableImages.push_back(insertableImagesJsonList[insertableImagesIndex].AsObject());
    }
    m_insertableImagesHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageInserter::Jsonize() const
{
  JsonValue payload;

  if(m_insertableImagesHasBeenSet)
  {
   Array<JsonValue> insertableImagesJsonList(m_insertableImages.size());
   for(unsigned insertableImagesIndex = 0; insertableImagesIndex < insertableImagesJsonList.GetLength(); ++insertableImagesIndex)
   {
     insertableImagesJsonList[insertableImagesIndex].AsObject(m_insertableImages[insertableImagesIndex].Jsonize());
   }
   payload.WithArray("insertableImages", std::move(insertableImagesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
