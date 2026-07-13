/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/ContainerImageAggregation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

ContainerImageAggregation::ContainerImageAggregation(JsonView jsonValue) { *this = jsonValue; }

ContainerImageAggregation& ContainerImageAggregation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resourceIds")) {
    Aws::Utils::Array<JsonView> resourceIdsJsonList = jsonValue.GetArray("resourceIds");
    for (unsigned resourceIdsIndex = 0; resourceIdsIndex < resourceIdsJsonList.GetLength(); ++resourceIdsIndex) {
      m_resourceIds.push_back(resourceIdsJsonList[resourceIdsIndex].AsObject());
    }
    m_resourceIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("imageDigests")) {
    Aws::Utils::Array<JsonView> imageDigestsJsonList = jsonValue.GetArray("imageDigests");
    for (unsigned imageDigestsIndex = 0; imageDigestsIndex < imageDigestsJsonList.GetLength(); ++imageDigestsIndex) {
      m_imageDigests.push_back(imageDigestsJsonList[imageDigestsIndex].AsObject());
    }
    m_imageDigestsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("repositories")) {
    Aws::Utils::Array<JsonView> repositoriesJsonList = jsonValue.GetArray("repositories");
    for (unsigned repositoriesIndex = 0; repositoriesIndex < repositoriesJsonList.GetLength(); ++repositoriesIndex) {
      m_repositories.push_back(repositoriesJsonList[repositoriesIndex].AsObject());
    }
    m_repositoriesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("registries")) {
    Aws::Utils::Array<JsonView> registriesJsonList = jsonValue.GetArray("registries");
    for (unsigned registriesIndex = 0; registriesIndex < registriesJsonList.GetLength(); ++registriesIndex) {
      m_registries.push_back(registriesJsonList[registriesIndex].AsObject());
    }
    m_registriesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("architectures")) {
    Aws::Utils::Array<JsonView> architecturesJsonList = jsonValue.GetArray("architectures");
    for (unsigned architecturesIndex = 0; architecturesIndex < architecturesJsonList.GetLength(); ++architecturesIndex) {
      m_architectures.push_back(architecturesJsonList[architecturesIndex].AsObject());
    }
    m_architecturesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("imageTags")) {
    Aws::Utils::Array<JsonView> imageTagsJsonList = jsonValue.GetArray("imageTags");
    for (unsigned imageTagsIndex = 0; imageTagsIndex < imageTagsJsonList.GetLength(); ++imageTagsIndex) {
      m_imageTags.push_back(imageTagsJsonList[imageTagsIndex].AsObject());
    }
    m_imageTagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudProviders")) {
    Aws::Utils::Array<JsonView> cloudProvidersJsonList = jsonValue.GetArray("cloudProviders");
    for (unsigned cloudProvidersIndex = 0; cloudProvidersIndex < cloudProvidersJsonList.GetLength(); ++cloudProvidersIndex) {
      m_cloudProviders.push_back(cloudProvidersJsonList[cloudProvidersIndex].AsObject());
    }
    m_cloudProvidersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudPartitions")) {
    Aws::Utils::Array<JsonView> cloudPartitionsJsonList = jsonValue.GetArray("cloudPartitions");
    for (unsigned cloudPartitionsIndex = 0; cloudPartitionsIndex < cloudPartitionsJsonList.GetLength(); ++cloudPartitionsIndex) {
      m_cloudPartitions.push_back(cloudPartitionsJsonList[cloudPartitionsIndex].AsObject());
    }
    m_cloudPartitionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudRegions")) {
    Aws::Utils::Array<JsonView> cloudRegionsJsonList = jsonValue.GetArray("cloudRegions");
    for (unsigned cloudRegionsIndex = 0; cloudRegionsIndex < cloudRegionsJsonList.GetLength(); ++cloudRegionsIndex) {
      m_cloudRegions.push_back(cloudRegionsJsonList[cloudRegionsIndex].AsObject());
    }
    m_cloudRegionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudOrgIds")) {
    Aws::Utils::Array<JsonView> cloudOrgIdsJsonList = jsonValue.GetArray("cloudOrgIds");
    for (unsigned cloudOrgIdsIndex = 0; cloudOrgIdsIndex < cloudOrgIdsJsonList.GetLength(); ++cloudOrgIdsIndex) {
      m_cloudOrgIds.push_back(cloudOrgIdsJsonList[cloudOrgIdsIndex].AsObject());
    }
    m_cloudOrgIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudAccountIds")) {
    Aws::Utils::Array<JsonView> cloudAccountIdsJsonList = jsonValue.GetArray("cloudAccountIds");
    for (unsigned cloudAccountIdsIndex = 0; cloudAccountIdsIndex < cloudAccountIdsJsonList.GetLength(); ++cloudAccountIdsIndex) {
      m_cloudAccountIds.push_back(cloudAccountIdsJsonList[cloudAccountIdsIndex].AsObject());
    }
    m_cloudAccountIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastInUseAt")) {
    Aws::Utils::Array<JsonView> lastInUseAtJsonList = jsonValue.GetArray("lastInUseAt");
    for (unsigned lastInUseAtIndex = 0; lastInUseAtIndex < lastInUseAtJsonList.GetLength(); ++lastInUseAtIndex) {
      m_lastInUseAt.push_back(lastInUseAtJsonList[lastInUseAtIndex].AsObject());
    }
    m_lastInUseAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inUseCount")) {
    Aws::Utils::Array<JsonView> inUseCountJsonList = jsonValue.GetArray("inUseCount");
    for (unsigned inUseCountIndex = 0; inUseCountIndex < inUseCountJsonList.GetLength(); ++inUseCountIndex) {
      m_inUseCount.push_back(inUseCountJsonList[inUseCountIndex].AsObject());
    }
    m_inUseCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sortOrder")) {
    m_sortOrder = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("sortOrder"));
    m_sortOrderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sortBy")) {
    m_sortBy = ContainerImageSortByMapper::GetContainerImageSortByForName(jsonValue.GetString("sortBy"));
    m_sortByHasBeenSet = true;
  }
  return *this;
}

JsonValue ContainerImageAggregation::Jsonize() const {
  JsonValue payload;

  if (m_resourceIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceIdsJsonList(m_resourceIds.size());
    for (unsigned resourceIdsIndex = 0; resourceIdsIndex < resourceIdsJsonList.GetLength(); ++resourceIdsIndex) {
      resourceIdsJsonList[resourceIdsIndex].AsObject(m_resourceIds[resourceIdsIndex].Jsonize());
    }
    payload.WithArray("resourceIds", std::move(resourceIdsJsonList));
  }

  if (m_imageDigestsHasBeenSet) {
    Aws::Utils::Array<JsonValue> imageDigestsJsonList(m_imageDigests.size());
    for (unsigned imageDigestsIndex = 0; imageDigestsIndex < imageDigestsJsonList.GetLength(); ++imageDigestsIndex) {
      imageDigestsJsonList[imageDigestsIndex].AsObject(m_imageDigests[imageDigestsIndex].Jsonize());
    }
    payload.WithArray("imageDigests", std::move(imageDigestsJsonList));
  }

  if (m_repositoriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> repositoriesJsonList(m_repositories.size());
    for (unsigned repositoriesIndex = 0; repositoriesIndex < repositoriesJsonList.GetLength(); ++repositoriesIndex) {
      repositoriesJsonList[repositoriesIndex].AsObject(m_repositories[repositoriesIndex].Jsonize());
    }
    payload.WithArray("repositories", std::move(repositoriesJsonList));
  }

  if (m_registriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> registriesJsonList(m_registries.size());
    for (unsigned registriesIndex = 0; registriesIndex < registriesJsonList.GetLength(); ++registriesIndex) {
      registriesJsonList[registriesIndex].AsObject(m_registries[registriesIndex].Jsonize());
    }
    payload.WithArray("registries", std::move(registriesJsonList));
  }

  if (m_architecturesHasBeenSet) {
    Aws::Utils::Array<JsonValue> architecturesJsonList(m_architectures.size());
    for (unsigned architecturesIndex = 0; architecturesIndex < architecturesJsonList.GetLength(); ++architecturesIndex) {
      architecturesJsonList[architecturesIndex].AsObject(m_architectures[architecturesIndex].Jsonize());
    }
    payload.WithArray("architectures", std::move(architecturesJsonList));
  }

  if (m_imageTagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> imageTagsJsonList(m_imageTags.size());
    for (unsigned imageTagsIndex = 0; imageTagsIndex < imageTagsJsonList.GetLength(); ++imageTagsIndex) {
      imageTagsJsonList[imageTagsIndex].AsObject(m_imageTags[imageTagsIndex].Jsonize());
    }
    payload.WithArray("imageTags", std::move(imageTagsJsonList));
  }

  if (m_cloudProvidersHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudProvidersJsonList(m_cloudProviders.size());
    for (unsigned cloudProvidersIndex = 0; cloudProvidersIndex < cloudProvidersJsonList.GetLength(); ++cloudProvidersIndex) {
      cloudProvidersJsonList[cloudProvidersIndex].AsObject(m_cloudProviders[cloudProvidersIndex].Jsonize());
    }
    payload.WithArray("cloudProviders", std::move(cloudProvidersJsonList));
  }

  if (m_cloudPartitionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudPartitionsJsonList(m_cloudPartitions.size());
    for (unsigned cloudPartitionsIndex = 0; cloudPartitionsIndex < cloudPartitionsJsonList.GetLength(); ++cloudPartitionsIndex) {
      cloudPartitionsJsonList[cloudPartitionsIndex].AsObject(m_cloudPartitions[cloudPartitionsIndex].Jsonize());
    }
    payload.WithArray("cloudPartitions", std::move(cloudPartitionsJsonList));
  }

  if (m_cloudRegionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudRegionsJsonList(m_cloudRegions.size());
    for (unsigned cloudRegionsIndex = 0; cloudRegionsIndex < cloudRegionsJsonList.GetLength(); ++cloudRegionsIndex) {
      cloudRegionsJsonList[cloudRegionsIndex].AsObject(m_cloudRegions[cloudRegionsIndex].Jsonize());
    }
    payload.WithArray("cloudRegions", std::move(cloudRegionsJsonList));
  }

  if (m_cloudOrgIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudOrgIdsJsonList(m_cloudOrgIds.size());
    for (unsigned cloudOrgIdsIndex = 0; cloudOrgIdsIndex < cloudOrgIdsJsonList.GetLength(); ++cloudOrgIdsIndex) {
      cloudOrgIdsJsonList[cloudOrgIdsIndex].AsObject(m_cloudOrgIds[cloudOrgIdsIndex].Jsonize());
    }
    payload.WithArray("cloudOrgIds", std::move(cloudOrgIdsJsonList));
  }

  if (m_cloudAccountIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudAccountIdsJsonList(m_cloudAccountIds.size());
    for (unsigned cloudAccountIdsIndex = 0; cloudAccountIdsIndex < cloudAccountIdsJsonList.GetLength(); ++cloudAccountIdsIndex) {
      cloudAccountIdsJsonList[cloudAccountIdsIndex].AsObject(m_cloudAccountIds[cloudAccountIdsIndex].Jsonize());
    }
    payload.WithArray("cloudAccountIds", std::move(cloudAccountIdsJsonList));
  }

  if (m_lastInUseAtHasBeenSet) {
    Aws::Utils::Array<JsonValue> lastInUseAtJsonList(m_lastInUseAt.size());
    for (unsigned lastInUseAtIndex = 0; lastInUseAtIndex < lastInUseAtJsonList.GetLength(); ++lastInUseAtIndex) {
      lastInUseAtJsonList[lastInUseAtIndex].AsObject(m_lastInUseAt[lastInUseAtIndex].Jsonize());
    }
    payload.WithArray("lastInUseAt", std::move(lastInUseAtJsonList));
  }

  if (m_inUseCountHasBeenSet) {
    Aws::Utils::Array<JsonValue> inUseCountJsonList(m_inUseCount.size());
    for (unsigned inUseCountIndex = 0; inUseCountIndex < inUseCountJsonList.GetLength(); ++inUseCountIndex) {
      inUseCountJsonList[inUseCountIndex].AsObject(m_inUseCount[inUseCountIndex].Jsonize());
    }
    payload.WithArray("inUseCount", std::move(inUseCountJsonList));
  }

  if (m_sortOrderHasBeenSet) {
    payload.WithString("sortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if (m_sortByHasBeenSet) {
    payload.WithString("sortBy", ContainerImageSortByMapper::GetNameForContainerImageSortBy(m_sortBy));
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
