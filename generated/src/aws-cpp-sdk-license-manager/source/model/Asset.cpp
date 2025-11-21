/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/license-manager/model/Asset.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LicenseManager {
namespace Model {

Asset::Asset(JsonView jsonValue) { *this = jsonValue; }

Asset& Asset::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AssetArn")) {
    m_assetArn = jsonValue.GetString("AssetArn");
    m_assetArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LatestAssetDiscoveryTime")) {
    m_latestAssetDiscoveryTime = jsonValue.GetDouble("LatestAssetDiscoveryTime");
    m_latestAssetDiscoveryTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue Asset::Jsonize() const {
  JsonValue payload;

  if (m_assetArnHasBeenSet) {
    payload.WithString("AssetArn", m_assetArn);
  }

  if (m_latestAssetDiscoveryTimeHasBeenSet) {
    payload.WithDouble("LatestAssetDiscoveryTime", m_latestAssetDiscoveryTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
