/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/LicenseAssetGroupStatus.h>

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
class DeleteLicenseAssetGroupResult {
 public:
  AWS_LICENSEMANAGER_API DeleteLicenseAssetGroupResult() = default;
  AWS_LICENSEMANAGER_API DeleteLicenseAssetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LICENSEMANAGER_API DeleteLicenseAssetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>License asset group status.</p>
   */
  inline LicenseAssetGroupStatus GetStatus() const { return m_status; }
  inline void SetStatus(LicenseAssetGroupStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DeleteLicenseAssetGroupResult& WithStatus(LicenseAssetGroupStatus value) {
    SetStatus(value);
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
  DeleteLicenseAssetGroupResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  LicenseAssetGroupStatus m_status{LicenseAssetGroupStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
