/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/LicenseManagerRequest.h>
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/Filter.h>

#include <utility>

namespace Aws {
namespace LicenseManager {
namespace Model {

/**
 */
class ListLicenseConfigurationsForOrganizationRequest : public LicenseManagerRequest {
 public:
  AWS_LICENSEMANAGER_API ListLicenseConfigurationsForOrganizationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListLicenseConfigurationsForOrganization"; }

  AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

  AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>License configuration ARNs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetLicenseConfigurationArns() const { return m_licenseConfigurationArns; }
  inline bool LicenseConfigurationArnsHasBeenSet() const { return m_licenseConfigurationArnsHasBeenSet; }
  template <typename LicenseConfigurationArnsT = Aws::Vector<Aws::String>>
  void SetLicenseConfigurationArns(LicenseConfigurationArnsT&& value) {
    m_licenseConfigurationArnsHasBeenSet = true;
    m_licenseConfigurationArns = std::forward<LicenseConfigurationArnsT>(value);
  }
  template <typename LicenseConfigurationArnsT = Aws::Vector<Aws::String>>
  ListLicenseConfigurationsForOrganizationRequest& WithLicenseConfigurationArns(LicenseConfigurationArnsT&& value) {
    SetLicenseConfigurationArns(std::forward<LicenseConfigurationArnsT>(value));
    return *this;
  }
  template <typename LicenseConfigurationArnsT = Aws::String>
  ListLicenseConfigurationsForOrganizationRequest& AddLicenseConfigurationArns(LicenseConfigurationArnsT&& value) {
    m_licenseConfigurationArnsHasBeenSet = true;
    m_licenseConfigurationArns.emplace_back(std::forward<LicenseConfigurationArnsT>(value));
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
  inline ListLicenseConfigurationsForOrganizationRequest& WithMaxResults(int value) {
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
  ListLicenseConfigurationsForOrganizationRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters to scope the results.</p>
   */
  inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<Filter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<Filter>>
  ListLicenseConfigurationsForOrganizationRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = Filter>
  ListLicenseConfigurationsForOrganizationRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_licenseConfigurationArns;

  int m_maxResults{0};

  Aws::String m_nextToken;

  Aws::Vector<Filter> m_filters;
  bool m_licenseConfigurationArnsHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
