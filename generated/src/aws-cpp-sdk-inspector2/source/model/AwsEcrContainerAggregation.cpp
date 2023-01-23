/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/AwsEcrContainerAggregation.h>
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

AwsEcrContainerAggregation::AwsEcrContainerAggregation() : 
    m_architecturesHasBeenSet(false),
    m_imageShasHasBeenSet(false),
    m_imageTagsHasBeenSet(false),
    m_repositoriesHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_sortBy(AwsEcrContainerSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
}

AwsEcrContainerAggregation::AwsEcrContainerAggregation(JsonView jsonValue) : 
    m_architecturesHasBeenSet(false),
    m_imageShasHasBeenSet(false),
    m_imageTagsHasBeenSet(false),
    m_repositoriesHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_sortBy(AwsEcrContainerSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcrContainerAggregation& AwsEcrContainerAggregation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("architectures"))
  {
    Aws::Utils::Array<JsonView> architecturesJsonList = jsonValue.GetArray("architectures");
    for(unsigned architecturesIndex = 0; architecturesIndex < architecturesJsonList.GetLength(); ++architecturesIndex)
    {
      m_architectures.push_back(architecturesJsonList[architecturesIndex].AsObject());
    }
    m_architecturesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageShas"))
  {
    Aws::Utils::Array<JsonView> imageShasJsonList = jsonValue.GetArray("imageShas");
    for(unsigned imageShasIndex = 0; imageShasIndex < imageShasJsonList.GetLength(); ++imageShasIndex)
    {
      m_imageShas.push_back(imageShasJsonList[imageShasIndex].AsObject());
    }
    m_imageShasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageTags"))
  {
    Aws::Utils::Array<JsonView> imageTagsJsonList = jsonValue.GetArray("imageTags");
    for(unsigned imageTagsIndex = 0; imageTagsIndex < imageTagsJsonList.GetLength(); ++imageTagsIndex)
    {
      m_imageTags.push_back(imageTagsJsonList[imageTagsIndex].AsObject());
    }
    m_imageTagsHasBeenSet = true;
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
    m_sortBy = AwsEcrContainerSortByMapper::GetAwsEcrContainerSortByForName(jsonValue.GetString("sortBy"));

    m_sortByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sortOrder"))
  {
    m_sortOrder = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("sortOrder"));

    m_sortOrderHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcrContainerAggregation::Jsonize() const
{
  JsonValue payload;

  if(m_architecturesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> architecturesJsonList(m_architectures.size());
   for(unsigned architecturesIndex = 0; architecturesIndex < architecturesJsonList.GetLength(); ++architecturesIndex)
   {
     architecturesJsonList[architecturesIndex].AsObject(m_architectures[architecturesIndex].Jsonize());
   }
   payload.WithArray("architectures", std::move(architecturesJsonList));

  }

  if(m_imageShasHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> imageShasJsonList(m_imageShas.size());
   for(unsigned imageShasIndex = 0; imageShasIndex < imageShasJsonList.GetLength(); ++imageShasIndex)
   {
     imageShasJsonList[imageShasIndex].AsObject(m_imageShas[imageShasIndex].Jsonize());
   }
   payload.WithArray("imageShas", std::move(imageShasJsonList));

  }

  if(m_imageTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> imageTagsJsonList(m_imageTags.size());
   for(unsigned imageTagsIndex = 0; imageTagsIndex < imageTagsJsonList.GetLength(); ++imageTagsIndex)
   {
     imageTagsJsonList[imageTagsIndex].AsObject(m_imageTags[imageTagsIndex].Jsonize());
   }
   payload.WithArray("imageTags", std::move(imageTagsJsonList));

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
   payload.WithString("sortBy", AwsEcrContainerSortByMapper::GetNameForAwsEcrContainerSortBy(m_sortBy));
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
