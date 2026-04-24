/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/SageMakerRunConfigurationOutput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

SageMakerRunConfigurationOutput::SageMakerRunConfigurationOutput(JsonView jsonValue) { *this = jsonValue; }

SageMakerRunConfigurationOutput& SageMakerRunConfigurationOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("region")) {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("trackingAssets")) {
    Aws::Map<Aws::String, JsonView> trackingAssetsJsonMap = jsonValue.GetObject("trackingAssets").GetAllObjects();
    for (auto& trackingAssetsItem : trackingAssetsJsonMap) {
      Aws::Utils::Array<JsonView> trackingAssetArns2JsonList = trackingAssetsItem.second.AsArray();
      Aws::Vector<Aws::String> trackingAssetArns2List;
      trackingAssetArns2List.reserve((size_t)trackingAssetArns2JsonList.GetLength());
      for (unsigned trackingAssetArns2Index = 0; trackingAssetArns2Index < trackingAssetArns2JsonList.GetLength();
           ++trackingAssetArns2Index) {
        trackingAssetArns2List.push_back(trackingAssetArns2JsonList[trackingAssetArns2Index].AsString());
      }
      m_trackingAssets[trackingAssetsItem.first] = std::move(trackingAssetArns2List);
    }
    m_trackingAssetsHasBeenSet = true;
  }
  return *this;
}

JsonValue SageMakerRunConfigurationOutput::Jsonize() const {
  JsonValue payload;

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_regionHasBeenSet) {
    payload.WithString("region", m_region);
  }

  if (m_trackingAssetsHasBeenSet) {
    JsonValue trackingAssetsJsonMap;
    for (auto& trackingAssetsItem : m_trackingAssets) {
      Aws::Utils::Array<JsonValue> trackingAssetArnsJsonList(trackingAssetsItem.second.size());
      for (unsigned trackingAssetArnsIndex = 0; trackingAssetArnsIndex < trackingAssetArnsJsonList.GetLength(); ++trackingAssetArnsIndex) {
        trackingAssetArnsJsonList[trackingAssetArnsIndex].AsString(trackingAssetsItem.second[trackingAssetArnsIndex]);
      }
      trackingAssetsJsonMap.WithArray(trackingAssetsItem.first, std::move(trackingAssetArnsJsonList));
    }
    payload.WithObject("trackingAssets", std::move(trackingAssetsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
