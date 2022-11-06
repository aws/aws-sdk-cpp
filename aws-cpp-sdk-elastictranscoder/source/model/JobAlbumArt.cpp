/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

JobAlbumArt::JobAlbumArt(JsonView jsonValue) : 
    m_mergePolicyHasBeenSet(false),
    m_artworkHasBeenSet(false)
{
  *this = jsonValue;
}

JobAlbumArt& JobAlbumArt::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MergePolicy"))
  {
    m_mergePolicy = jsonValue.GetString("MergePolicy");

    m_mergePolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Artwork"))
  {
    Aws::Utils::Array<JsonView> artworkJsonList = jsonValue.GetArray("Artwork");
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
   Aws::Utils::Array<JsonValue> artworkJsonList(m_artwork.size());
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
