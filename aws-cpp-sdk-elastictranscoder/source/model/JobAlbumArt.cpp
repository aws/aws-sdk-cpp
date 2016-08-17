/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elastictranscoder/model/JobAlbumArt.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

JobAlbumArt::JobAlbumArt() : 
    m_mergePolicyHasBeenSet(false),
    m_artworkHasBeenSet(false)
{
}

JobAlbumArt::JobAlbumArt(const JsonValue& jsonValue) : 
    m_mergePolicyHasBeenSet(false),
    m_artworkHasBeenSet(false)
{
  *this = jsonValue;
}

JobAlbumArt& JobAlbumArt::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("MergePolicy"))
  {
    m_mergePolicy = jsonValue.GetString("MergePolicy");

    m_mergePolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Artwork"))
  {
    Array<JsonValue> artworkJsonList = jsonValue.GetArray("Artwork");
    for(unsigned artworkIndex = 0; artworkIndex < artworkJsonList.GetLength(); ++artworkIndex)
    {
      m_artwork.push_back(artworkJsonList[artworkIndex].AsObject());
    }
    m_artworkHasBeenSet = true;
  }

  return *this;
}

JsonValue JobAlbumArt::Jsonize() const
{
  JsonValue payload;

  if(m_mergePolicyHasBeenSet)
  {
   payload.WithString("MergePolicy", m_mergePolicy);

  }

  if(m_artworkHasBeenSet)
  {
   Array<JsonValue> artworkJsonList(m_artwork.size());
   for(unsigned artworkIndex = 0; artworkIndex < artworkJsonList.GetLength(); ++artworkIndex)
   {
     artworkJsonList[artworkIndex].AsObject(m_artwork[artworkIndex].Jsonize());
   }
   payload.WithArray("Artwork", std::move(artworkJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws