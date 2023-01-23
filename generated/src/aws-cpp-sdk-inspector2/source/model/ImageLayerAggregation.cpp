/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ImageLayerAggregation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

ImageLayerAggregation::ImageLayerAggregation() : 
    m_layerHashesHasBeenSet(false),
    m_repositoriesHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_sortBy(ImageLayerSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
}

ImageLayerAggregation::ImageLayerAggregation(JsonView jsonValue) : 
    m_layerHashesHasBeenSet(false),
    m_repositoriesHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_sortBy(ImageLayerSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
  *this = jsonValue;
}

ImageLayerAggregation& ImageLayerAggregation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("layerHashes"))
  {
    Aws::Utils::Array<JsonView> layerHashesJsonList = jsonValue.GetArray("layerHashes");
    for(unsigned layerHashesIndex = 0; layerHashesIndex < layerHashesJsonList.GetLength(); ++layerHashesIndex)
    {
      m_layerHashes.push_back(layerHashesJsonList[layerHashesIndex].AsObject());
    }
    m_layerHashesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositories"))
  {
    Aws::Utils::Array<JsonView> repositoriesJsonList = jsonValue.GetArray("repositories");
    for(unsigned repositoriesIndex = 0; repositoriesIndex < repositoriesJsonList.GetLength(); ++repositoriesIndex)
    {
      m_repositories.push_back(repositoriesJsonList[repositoriesIndex].AsObject());
    }
    m_repositoriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceIds"))
  {
    Aws::Utils::Array<JsonView> resourceIdsJsonList = jsonValue.GetArray("resourceIds");
    for(unsigned resourceIdsIndex = 0; resourceIdsIndex < resourceIdsJsonList.GetLength(); ++resourceIdsIndex)
    {
      m_resourceIds.push_back(resourceIdsJsonList[resourceIdsIndex].AsObject());
    }
    m_resourceIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sortBy"))
  {
    m_sortBy = ImageLayerSortByMapper::GetImageLayerSortByForName(jsonValue.GetString("sortBy"));

    m_sortByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sortOrder"))
  {
    m_sortOrder = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("sortOrder"));

    m_sortOrderHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageLayerAggregation::Jsonize() const
{
  JsonValue payload;

  if(m_layerHashesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> layerHashesJsonList(m_layerHashes.size());
   for(unsigned layerHashesIndex = 0; layerHashesIndex < layerHashesJsonList.GetLength(); ++layerHashesIndex)
   {
     layerHashesJsonList[layerHashesIndex].AsObject(m_layerHashes[layerHashesIndex].Jsonize());
   }
   payload.WithArray("layerHashes", std::move(layerHashesJsonList));

  }

  if(m_repositoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> repositoriesJsonList(m_repositories.size());
   for(unsigned repositoriesIndex = 0; repositoriesIndex < repositoriesJsonList.GetLength(); ++repositoriesIndex)
   {
     repositoriesJsonList[repositoriesIndex].AsObject(m_repositories[repositoriesIndex].Jsonize());
   }
   payload.WithArray("repositories", std::move(repositoriesJsonList));

  }

  if(m_resourceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceIdsJsonList(m_resourceIds.size());
   for(unsigned resourceIdsIndex = 0; resourceIdsIndex < resourceIdsJsonList.GetLength(); ++resourceIdsIndex)
   {
     resourceIdsJsonList[resourceIdsIndex].AsObject(m_resourceIds[resourceIdsIndex].Jsonize());
   }
   payload.WithArray("resourceIds", std::move(resourceIdsJsonList));

  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("sortBy", ImageLayerSortByMapper::GetNameForImageLayerSortBy(m_sortBy));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("sortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
