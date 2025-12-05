/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/LicenseAssetGroup.h>

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
class ListLicenseAssetGroupsResult {
 public:
  AWS_LICENSEMANAGER_API ListLicenseAssetGroupsResult() = default;
  AWS_LICENSEMANAGER_API ListLicenseAssetGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LICENSEMANAGER_API ListLicenseAssetGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>License asset groups.</p>
   */
  inline const Aws::Vector<LicenseAssetGroup>& GetLicenseAssetGroups() const { return m_licenseAssetGroups; }
  template <typename LicenseAssetGroupsT = Aws::Vector<LicenseAssetGroup>>
  void SetLicenseAssetGroups(LicenseAssetGroupsT&& value) {
    m_licenseAssetGroupsHasBeenSet = true;
    m_licenseAssetGroups = std::forward<LicenseAssetGroupsT>(value);
  }
  template <typename LicenseAssetGroupsT = Aws::Vector<LicenseAssetGroup>>
  ListLicenseAssetGroupsResult& WithLicenseAssetGroups(LicenseAssetGroupsT&& value) {
    SetLicenseAssetGroups(std::forward<LicenseAssetGroupsT>(value));
    return *this;
  }
  template <typename LicenseAssetGroupsT = LicenseAssetGroup>
  ListLicenseAssetGroupsResult& AddLicenseAssetGroups(LicenseAssetGroupsT&& value) {
    m_licenseAssetGroupsHasBeenSet = true;
    m_licenseAssetGroups.emplace_back(std::forward<LicenseAssetGroupsT>(value));
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
  ListLicenseAssetGroupsResult& WithNextToken(NextTokenT&& value) {
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
  ListLicenseAssetGroupsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<LicenseAssetGroup> m_licenseAssetGroups;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_licenseAssetGroupsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
