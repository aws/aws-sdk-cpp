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
    m_insertableImagesHasBeenSet(false),
    m_sdrReferenceWhiteLevel(0),
    m_sdrReferenceWhiteLevelHasBeenSet(false)
{
}

ImageInserter::ImageInserter(JsonView jsonValue) : 
    m_insertableImagesHasBeenSet(false),
    m_sdrReferenceWhiteLevel(0),
    m_sdrReferenceWhiteLevelHasBeenSet(false)
{
  *this = jsonValue;
}

ImageInserter& ImageInserter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("insertableImages"))
  {
    Aws::Utils::Array<JsonView> insertableImagesJsonList = jsonValue.GetArray("insertableImages");
    for(unsigned insertableImagesIndex = 0; insertableImagesIndex < insertableImagesJsonList.GetLength(); ++insertableImagesIndex)
    {
      m_insertableImages.push_back(insertableImagesJsonList[insertableImagesIndex].AsObject());
    }
    m_insertableImagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sdrReferenceWhiteLevel"))
  {
    m_sdrReferenceWhiteLevel = jsonValue.GetInteger("sdrReferenceWhiteLevel");

    m_sdrReferenceWhiteLevelHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageInserter::Jsonize() const
{
  JsonValue payload;

  if(m_insertableImagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> insertableImagesJsonList(m_insertableImages.size());
   for(unsigned insertableImagesIndex = 0; insertableImagesIndex < insertableImagesJsonList.GetLength(); ++insertableImagesIndex)
   {
     insertableImagesJsonList[insertableImagesIndex].AsObject(m_insertableImages[insertableImagesIndex].Jsonize());
   }
   payload.WithArray("insertableImages", std::move(insertableImagesJsonList));

  }

  if(m_sdrReferenceWhiteLevelHasBeenSet)
  {
   payload.WithInteger("sdrReferenceWhiteLevel", m_sdrReferenceWhiteLevel);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
