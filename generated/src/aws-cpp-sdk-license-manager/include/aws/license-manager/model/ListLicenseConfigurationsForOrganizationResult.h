/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/LicenseConfiguration.h>

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
class ListLicenseConfigurationsForOrganizationResult {
 public:
  AWS_LICENSEMANAGER_API ListLicenseConfigurationsForOrganizationResult() = default;
  AWS_LICENSEMANAGER_API ListLicenseConfigurationsForOrganizationResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LICENSEMANAGER_API ListLicenseConfigurationsForOrganizationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>License configurations.</p>
   */
  inline const Aws::Vector<LicenseConfiguration>& GetLicenseConfigurations() const { return m_licenseConfigurations; }
  template <typename LicenseConfigurationsT = Aws::Vector<LicenseConfiguration>>
  void SetLicenseConfigurations(LicenseConfigurationsT&& value) {
    m_licenseConfigurationsHasBeenSet = true;
    m_licenseConfigurations = std::forward<LicenseConfigurationsT>(value);
  }
  template <typename LicenseConfigurationsT = Aws::Vector<LicenseConfiguration>>
  ListLicenseConfigurationsForOrganizationResult& WithLicenseConfigurations(LicenseConfigurationsT&& value) {
    SetLicenseConfigurations(std::forward<LicenseConfigurationsT>(value));
    return *this;
  }
  template <typename LicenseConfigurationsT = LicenseConfiguration>
  ListLicenseConfigurationsForOrganizationResult& AddLicenseConfigurations(LicenseConfigurationsT&& value) {
    m_licenseConfigurationsHasBeenSet = true;
    m_licenseConfigurations.emplace_back(std::forward<LicenseConfigurationsT>(value));
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
  ListLicenseConfigurationsForOrganizationResult& WithNextToken(NextTokenT&& value) {
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
  ListLicenseConfigurationsForOrganizationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<LicenseConfiguration> m_licenseConfigurations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_licenseConfigurationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
