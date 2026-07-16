/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/ImageLayerAggregation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

ImageLayerAggregation::ImageLayerAggregation(JsonView jsonValue) { *this = jsonValue; }

ImageLayerAggregation& ImageLayerAggregation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("repositories")) {
    Aws::Utils::Array<JsonView> repositoriesJsonList = jsonValue.GetArray("repositories");
    for (unsigned repositoriesIndex = 0; repositoriesIndex < repositoriesJsonList.GetLength(); ++repositoriesIndex) {
      m_repositories.push_back(repositoriesJsonList[repositoriesIndex].AsObject());
    }
    m_repositoriesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceIds")) {
    Aws::Utils::Array<JsonView> resourceIdsJsonList = jsonValue.GetArray("resourceIds");
    for (unsigned resourceIdsIndex = 0; resourceIdsIndex < resourceIdsJsonList.GetLength(); ++resourceIdsIndex) {
      m_resourceIds.push_back(resourceIdsJsonList[resourceIdsIndex].AsObject());
    }
    m_resourceIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("layerHashes")) {
    Aws::Utils::Array<JsonView> layerHashesJsonList = jsonValue.GetArray("layerHashes");
    for (unsigned layerHashesIndex = 0; layerHashesIndex < layerHashesJsonList.GetLength(); ++layerHashesIndex) {
      m_layerHashes.push_back(layerHashesJsonList[layerHashesIndex].AsObject());
    }
    m_layerHashesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudProviders")) {
    Aws::Utils::Array<JsonView> cloudProvidersJsonList = jsonValue.GetArray("cloudProviders");
    for (unsigned cloudProvidersIndex = 0; cloudProvidersIndex < cloudProvidersJsonList.GetLength(); ++cloudProvidersIndex) {
      m_cloudProviders.push_back(cloudProvidersJsonList[cloudProvidersIndex].AsObject());
    }
    m_cloudProvidersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudAccountIds")) {
    Aws::Utils::Array<JsonView> cloudAccountIdsJsonList = jsonValue.GetArray("cloudAccountIds");
    for (unsigned cloudAccountIdsIndex = 0; cloudAccountIdsIndex < cloudAccountIdsJsonList.GetLength(); ++cloudAccountIdsIndex) {
      m_cloudAccountIds.push_back(cloudAccountIdsJsonList[cloudAccountIdsIndex].AsObject());
    }
    m_cloudAccountIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudOrgIds")) {
    Aws::Utils::Array<JsonView> cloudOrgIdsJsonList = jsonValue.GetArray("cloudOrgIds");
    for (unsigned cloudOrgIdsIndex = 0; cloudOrgIdsIndex < cloudOrgIdsJsonList.GetLength(); ++cloudOrgIdsIndex) {
      m_cloudOrgIds.push_back(cloudOrgIdsJsonList[cloudOrgIdsIndex].AsObject());
    }
    m_cloudOrgIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudRegions")) {
    Aws::Utils::Array<JsonView> cloudRegionsJsonList = jsonValue.GetArray("cloudRegions");
    for (unsigned cloudRegionsIndex = 0; cloudRegionsIndex < cloudRegionsJsonList.GetLength(); ++cloudRegionsIndex) {
      m_cloudRegions.push_back(cloudRegionsJsonList[cloudRegionsIndex].AsObject());
    }
    m_cloudRegionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudPartitions")) {
    Aws::Utils::Array<JsonView> cloudPartitionsJsonList = jsonValue.GetArray("cloudPartitions");
    for (unsigned cloudPartitionsIndex = 0; cloudPartitionsIndex < cloudPartitionsJsonList.GetLength(); ++cloudPartitionsIndex) {
      m_cloudPartitions.push_back(cloudPartitionsJsonList[cloudPartitionsIndex].AsObject());
    }
    m_cloudPartitionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sortOrder")) {
    m_sortOrder = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("sortOrder"));
    m_sortOrderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sortBy")) {
    m_sortBy = ImageLayerSortByMapper::GetImageLayerSortByForName(jsonValue.GetString("sortBy"));
    m_sortByHasBeenSet = true;
  }
  return *this;
}

JsonValue ImageLayerAggregation::Jsonize() const {
  JsonValue payload;

  if (m_repositoriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> repositoriesJsonList(m_repositories.size());
    for (unsigned repositoriesIndex = 0; repositoriesIndex < repositoriesJsonList.GetLength(); ++repositoriesIndex) {
      repositoriesJsonList[repositoriesIndex].AsObject(m_repositories[repositoriesIndex].Jsonize());
    }
    payload.WithArray("repositories", std::move(repositoriesJsonList));
  }

  if (m_resourceIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceIdsJsonList(m_resourceIds.size());
    for (unsigned resourceIdsIndex = 0; resourceIdsIndex < resourceIdsJsonList.GetLength(); ++resourceIdsIndex) {
      resourceIdsJsonList[resourceIdsIndex].AsObject(m_resourceIds[resourceIdsIndex].Jsonize());
    }
    payload.WithArray("resourceIds", std::move(resourceIdsJsonList));
  }

  if (m_layerHashesHasBeenSet) {
    Aws::Utils::Array<JsonValue> layerHashesJsonList(m_layerHashes.size());
    for (unsigned layerHashesIndex = 0; layerHashesIndex < layerHashesJsonList.GetLength(); ++layerHashesIndex) {
      layerHashesJsonList[layerHashesIndex].AsObject(m_layerHashes[layerHashesIndex].Jsonize());
    }
    payload.WithArray("layerHashes", std::move(layerHashesJsonList));
  }

  if (m_cloudProvidersHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudProvidersJsonList(m_cloudProviders.size());
    for (unsigned cloudProvidersIndex = 0; cloudProvidersIndex < cloudProvidersJsonList.GetLength(); ++cloudProvidersIndex) {
      cloudProvidersJsonList[cloudProvidersIndex].AsObject(m_cloudProviders[cloudProvidersIndex].Jsonize());
    }
    payload.WithArray("cloudProviders", std::move(cloudProvidersJsonList));
  }

  if (m_cloudAccountIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudAccountIdsJsonList(m_cloudAccountIds.size());
    for (unsigned cloudAccountIdsIndex = 0; cloudAccountIdsIndex < cloudAccountIdsJsonList.GetLength(); ++cloudAccountIdsIndex) {
      cloudAccountIdsJsonList[cloudAccountIdsIndex].AsObject(m_cloudAccountIds[cloudAccountIdsIndex].Jsonize());
    }
    payload.WithArray("cloudAccountIds", std::move(cloudAccountIdsJsonList));
  }

  if (m_cloudOrgIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudOrgIdsJsonList(m_cloudOrgIds.size());
    for (unsigned cloudOrgIdsIndex = 0; cloudOrgIdsIndex < cloudOrgIdsJsonList.GetLength(); ++cloudOrgIdsIndex) {
      cloudOrgIdsJsonList[cloudOrgIdsIndex].AsObject(m_cloudOrgIds[cloudOrgIdsIndex].Jsonize());
    }
    payload.WithArray("cloudOrgIds", std::move(cloudOrgIdsJsonList));
  }

  if (m_cloudRegionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudRegionsJsonList(m_cloudRegions.size());
    for (unsigned cloudRegionsIndex = 0; cloudRegionsIndex < cloudRegionsJsonList.GetLength(); ++cloudRegionsIndex) {
      cloudRegionsJsonList[cloudRegionsIndex].AsObject(m_cloudRegions[cloudRegionsIndex].Jsonize());
    }
    payload.WithArray("cloudRegions", std::move(cloudRegionsJsonList));
  }

  if (m_cloudPartitionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudPartitionsJsonList(m_cloudPartitions.size());
    for (unsigned cloudPartitionsIndex = 0; cloudPartitionsIndex < cloudPartitionsJsonList.GetLength(); ++cloudPartitionsIndex) {
      cloudPartitionsJsonList[cloudPartitionsIndex].AsObject(m_cloudPartitions[cloudPartitionsIndex].Jsonize());
    }
    payload.WithArray("cloudPartitions", std::move(cloudPartitionsJsonList));
  }

  if (m_sortOrderHasBeenSet) {
    payload.WithString("sortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if (m_sortByHasBeenSet) {
    payload.WithString("sortBy", ImageLayerSortByMapper::GetNameForImageLayerSortBy(m_sortBy));
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
