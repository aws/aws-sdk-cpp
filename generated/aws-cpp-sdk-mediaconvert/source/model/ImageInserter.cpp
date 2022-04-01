/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ImageInserter::ImageInserter(JsonView jsonValue) : 
    m_insertableImagesHasBeenSet(false)
{
  *this = jsonValue;
}

ImageInserter& ImageInserter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("insertableImages"))
  {
    Array<JsonView> insertableImagesJsonList = jsonValue.GetArray("insertableImages");
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
