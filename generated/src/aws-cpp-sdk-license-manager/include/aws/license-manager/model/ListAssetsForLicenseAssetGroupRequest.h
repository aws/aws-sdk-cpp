/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/LicenseManagerRequest.h>
#include <aws/license-manager/LicenseManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace LicenseManager {
namespace Model {

/**
 */
class ListAssetsForLicenseAssetGroupRequest : public LicenseManagerRequest {
 public:
  AWS_LICENSEMANAGER_API ListAssetsForLicenseAssetGroupRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListAssetsForLicenseAssetGroup"; }

  AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

  AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Amazon Resource Name (ARN) of the license asset group.</p>
   */
  inline const Aws::String& GetLicenseAssetGroupArn() const { return m_licenseAssetGroupArn; }
  inline bool LicenseAssetGroupArnHasBeenSet() const { return m_licenseAssetGroupArnHasBeenSet; }
  template <typename LicenseAssetGroupArnT = Aws::String>
  void SetLicenseAssetGroupArn(LicenseAssetGroupArnT&& value) {
    m_licenseAssetGroupArnHasBeenSet = true;
    m_licenseAssetGroupArn = std::forward<LicenseAssetGroupArnT>(value);
  }
  template <typename LicenseAssetGroupArnT = Aws::String>
  ListAssetsForLicenseAssetGroupRequest& WithLicenseAssetGroupArn(LicenseAssetGroupArnT&& value) {
    SetLicenseAssetGroupArn(std::forward<LicenseAssetGroupArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Asset type. The possible values are <code>Instance</code> |
   * <code>License</code> | <code>LicenseConfiguration</code>.</p>
   */
  inline const Aws::String& GetAssetType() const { return m_assetType; }
  inline bool AssetTypeHasBeenSet() const { return m_assetTypeHasBeenSet; }
  template <typename AssetTypeT = Aws::String>
  void SetAssetType(AssetTypeT&& value) {
    m_assetTypeHasBeenSet = true;
    m_assetType = std::forward<AssetTypeT>(value);
  }
  template <typename AssetTypeT = Aws::String>
  ListAssetsForLicenseAssetGroupRequest& WithAssetType(AssetTypeT&& value) {
    SetAssetType(std::forward<AssetTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum number of results to return in a single call.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListAssetsForLicenseAssetGroupRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token for the next set of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAssetsForLicenseAssetGroupRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_licenseAssetGroupArn;
  bool m_licenseAssetGroupArnHasBeenSet = false;

  Aws::String m_assetType;
  bool m_assetTypeHasBeenSet = false;

  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
