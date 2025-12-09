/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/Asset.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace LicenseManager {
namespace Model {
class ListAssetsForLicenseAssetGroupResult {
 public:
  AWS_LICENSEMANAGER_API ListAssetsForLicenseAssetGroupResult() = default;
  AWS_LICENSEMANAGER_API ListAssetsForLicenseAssetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LICENSEMANAGER_API ListAssetsForLicenseAssetGroupResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Assets.</p>
   */
  inline const Aws::Vector<Asset>& GetAssets() const { return m_assets; }
  template <typename AssetsT = Aws::Vector<Asset>>
  void SetAssets(AssetsT&& value) {
    m_assetsHasBeenSet = true;
    m_assets = std::forward<AssetsT>(value);
  }
  template <typename AssetsT = Aws::Vector<Asset>>
  ListAssetsForLicenseAssetGroupResult& WithAssets(AssetsT&& value) {
    SetAssets(std::forward<AssetsT>(value));
    return *this;
  }
  template <typename AssetsT = Asset>
  ListAssetsForLicenseAssetGroupResult& AddAssets(AssetsT&& value) {
    m_assetsHasBeenSet = true;
    m_assets.emplace_back(std::forward<AssetsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token for the next set of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAssetsForLicenseAssetGroupResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListAssetsForLicenseAssetGroupResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Asset> m_assets;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_assetsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
