/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/LicenseAssetRuleset.h>

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
class GetLicenseAssetRulesetResult {
 public:
  AWS_LICENSEMANAGER_API GetLicenseAssetRulesetResult() = default;
  AWS_LICENSEMANAGER_API GetLicenseAssetRulesetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LICENSEMANAGER_API GetLicenseAssetRulesetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>License asset ruleset.</p>
   */
  inline const LicenseAssetRuleset& GetLicenseAssetRuleset() const { return m_licenseAssetRuleset; }
  template <typename LicenseAssetRulesetT = LicenseAssetRuleset>
  void SetLicenseAssetRuleset(LicenseAssetRulesetT&& value) {
    m_licenseAssetRulesetHasBeenSet = true;
    m_licenseAssetRuleset = std::forward<LicenseAssetRulesetT>(value);
  }
  template <typename LicenseAssetRulesetT = LicenseAssetRuleset>
  GetLicenseAssetRulesetResult& WithLicenseAssetRuleset(LicenseAssetRulesetT&& value) {
    SetLicenseAssetRuleset(std::forward<LicenseAssetRulesetT>(value));
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
  GetLicenseAssetRulesetResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  LicenseAssetRuleset m_licenseAssetRuleset;
  bool m_licenseAssetRulesetHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
