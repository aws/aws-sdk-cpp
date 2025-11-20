/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/LicenseManager_EXPORTS.h>

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
class UpdateLicenseAssetGroupResult {
 public:
  AWS_LICENSEMANAGER_API UpdateLicenseAssetGroupResult() = default;
  AWS_LICENSEMANAGER_API UpdateLicenseAssetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LICENSEMANAGER_API UpdateLicenseAssetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Amazon Resource Name (ARN) of the license asset group.</p>
   */
  inline const Aws::String& GetLicenseAssetGroupArn() const { return m_licenseAssetGroupArn; }
  template <typename LicenseAssetGroupArnT = Aws::String>
  void SetLicenseAssetGroupArn(LicenseAssetGroupArnT&& value) {
    m_licenseAssetGroupArnHasBeenSet = true;
    m_licenseAssetGroupArn = std::forward<LicenseAssetGroupArnT>(value);
  }
  template <typename LicenseAssetGroupArnT = Aws::String>
  UpdateLicenseAssetGroupResult& WithLicenseAssetGroupArn(LicenseAssetGroupArnT&& value) {
    SetLicenseAssetGroupArn(std::forward<LicenseAssetGroupArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>License asset group status.</p>
   */
  inline const Aws::String& GetStatus() const { return m_status; }
  template <typename StatusT = Aws::String>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::String>
  UpdateLicenseAssetGroupResult& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
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
  UpdateLicenseAssetGroupResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_licenseAssetGroupArn;
  bool m_licenseAssetGroupArnHasBeenSet = false;

  Aws::String m_status;
  bool m_statusHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
