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
class UpdateLicenseAssetRulesetResult {
 public:
  AWS_LICENSEMANAGER_API UpdateLicenseAssetRulesetResult() = default;
  AWS_LICENSEMANAGER_API UpdateLicenseAssetRulesetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LICENSEMANAGER_API UpdateLicenseAssetRulesetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Amazon Resource Name (ARN) of the license asset ruleset.</p>
   */
  inline const Aws::String& GetLicenseAssetRulesetArn() const { return m_licenseAssetRulesetArn; }
  template <typename LicenseAssetRulesetArnT = Aws::String>
  void SetLicenseAssetRulesetArn(LicenseAssetRulesetArnT&& value) {
    m_licenseAssetRulesetArnHasBeenSet = true;
    m_licenseAssetRulesetArn = std::forward<LicenseAssetRulesetArnT>(value);
  }
  template <typename LicenseAssetRulesetArnT = Aws::String>
  UpdateLicenseAssetRulesetResult& WithLicenseAssetRulesetArn(LicenseAssetRulesetArnT&& value) {
    SetLicenseAssetRulesetArn(std::forward<LicenseAssetRulesetArnT>(value));
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
  UpdateLicenseAssetRulesetResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_licenseAssetRulesetArn;

  Aws::String m_requestId;
  bool m_licenseAssetRulesetArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
