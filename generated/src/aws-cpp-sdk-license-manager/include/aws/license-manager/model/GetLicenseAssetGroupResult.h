/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
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
class GetLicenseAssetGroupResult {
 public:
  AWS_LICENSEMANAGER_API GetLicenseAssetGroupResult() = default;
  AWS_LICENSEMANAGER_API GetLicenseAssetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LICENSEMANAGER_API GetLicenseAssetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>License asset group.</p>
   */
  inline const LicenseAssetGroup& GetLicenseAssetGroup() const { return m_licenseAssetGroup; }
  template <typename LicenseAssetGroupT = LicenseAssetGroup>
  void SetLicenseAssetGroup(LicenseAssetGroupT&& value) {
    m_licenseAssetGroupHasBeenSet = true;
    m_licenseAssetGroup = std::forward<LicenseAssetGroupT>(value);
  }
  template <typename LicenseAssetGroupT = LicenseAssetGroup>
  GetLicenseAssetGroupResult& WithLicenseAssetGroup(LicenseAssetGroupT&& value) {
    SetLicenseAssetGroup(std::forward<LicenseAssetGroupT>(value));
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
  GetLicenseAssetGroupResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  LicenseAssetGroup m_licenseAssetGroup;

  Aws::String m_requestId;
  bool m_licenseAssetGroupHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
