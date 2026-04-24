/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/LicenseManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LicenseManager {
namespace Model {

/**
 * <p>Asset.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/Asset">AWS
 * API Reference</a></p>
 */
class Asset {
 public:
  AWS_LICENSEMANAGER_API Asset() = default;
  AWS_LICENSEMANAGER_API Asset(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API Asset& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Amazon Resource Name (ARN) of the asset.</p>
   */
  inline const Aws::String& GetAssetArn() const { return m_assetArn; }
  inline bool AssetArnHasBeenSet() const { return m_assetArnHasBeenSet; }
  template <typename AssetArnT = Aws::String>
  void SetAssetArn(AssetArnT&& value) {
    m_assetArnHasBeenSet = true;
    m_assetArn = std::forward<AssetArnT>(value);
  }
  template <typename AssetArnT = Aws::String>
  Asset& WithAssetArn(AssetArnT&& value) {
    SetAssetArn(std::forward<AssetArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Latest asset discovery time.</p>
   */
  inline const Aws::Utils::DateTime& GetLatestAssetDiscoveryTime() const { return m_latestAssetDiscoveryTime; }
  inline bool LatestAssetDiscoveryTimeHasBeenSet() const { return m_latestAssetDiscoveryTimeHasBeenSet; }
  template <typename LatestAssetDiscoveryTimeT = Aws::Utils::DateTime>
  void SetLatestAssetDiscoveryTime(LatestAssetDiscoveryTimeT&& value) {
    m_latestAssetDiscoveryTimeHasBeenSet = true;
    m_latestAssetDiscoveryTime = std::forward<LatestAssetDiscoveryTimeT>(value);
  }
  template <typename LatestAssetDiscoveryTimeT = Aws::Utils::DateTime>
  Asset& WithLatestAssetDiscoveryTime(LatestAssetDiscoveryTimeT&& value) {
    SetLatestAssetDiscoveryTime(std::forward<LatestAssetDiscoveryTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_assetArn;

  Aws::Utils::DateTime m_latestAssetDiscoveryTime{};
  bool m_assetArnHasBeenSet = false;
  bool m_latestAssetDiscoveryTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
