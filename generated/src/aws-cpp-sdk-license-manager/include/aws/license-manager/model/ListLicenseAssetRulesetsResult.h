/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
class ListLicenseAssetRulesetsResult {
 public:
  AWS_LICENSEMANAGER_API ListLicenseAssetRulesetsResult() = default;
  AWS_LICENSEMANAGER_API ListLicenseAssetRulesetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LICENSEMANAGER_API ListLicenseAssetRulesetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>License asset rulesets.</p>
   */
  inline const Aws::Vector<LicenseAssetRuleset>& GetLicenseAssetRulesets() const { return m_licenseAssetRulesets; }
  template <typename LicenseAssetRulesetsT = Aws::Vector<LicenseAssetRuleset>>
  void SetLicenseAssetRulesets(LicenseAssetRulesetsT&& value) {
    m_licenseAssetRulesetsHasBeenSet = true;
    m_licenseAssetRulesets = std::forward<LicenseAssetRulesetsT>(value);
  }
  template <typename LicenseAssetRulesetsT = Aws::Vector<LicenseAssetRuleset>>
  ListLicenseAssetRulesetsResult& WithLicenseAssetRulesets(LicenseAssetRulesetsT&& value) {
    SetLicenseAssetRulesets(std::forward<LicenseAssetRulesetsT>(value));
    return *this;
  }
  template <typename LicenseAssetRulesetsT = LicenseAssetRuleset>
  ListLicenseAssetRulesetsResult& AddLicenseAssetRulesets(LicenseAssetRulesetsT&& value) {
    m_licenseAssetRulesetsHasBeenSet = true;
    m_licenseAssetRulesets.emplace_back(std::forward<LicenseAssetRulesetsT>(value));
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
  ListLicenseAssetRulesetsResult& WithNextToken(NextTokenT&& value) {
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
  ListLicenseAssetRulesetsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<LicenseAssetRuleset> m_licenseAssetRulesets;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_licenseAssetRulesetsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
