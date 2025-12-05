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
class ListLicenseAssetRulesetsRequest : public LicenseManagerRequest {
 public:
  AWS_LICENSEMANAGER_API ListLicenseAssetRulesetsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListLicenseAssetRulesets"; }

  AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

  AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Filters to scope the results. Following filters are supported</p> <ul> <li>
   * <p> <code>Name</code> </p> </li> </ul>
   */
  inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<Filter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<Filter>>
  ListLicenseAssetRulesetsRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = Filter>
  ListLicenseAssetRulesetsRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to show License Manager managed license asset rulesets.</p>
   */
  inline bool GetShowAWSManagedLicenseAssetRulesets() const { return m_showAWSManagedLicenseAssetRulesets; }
  inline bool ShowAWSManagedLicenseAssetRulesetsHasBeenSet() const { return m_showAWSManagedLicenseAssetRulesetsHasBeenSet; }
  inline void SetShowAWSManagedLicenseAssetRulesets(bool value) {
    m_showAWSManagedLicenseAssetRulesetsHasBeenSet = true;
    m_showAWSManagedLicenseAssetRulesets = value;
  }
  inline ListLicenseAssetRulesetsRequest& WithShowAWSManagedLicenseAssetRulesets(bool value) {
    SetShowAWSManagedLicenseAssetRulesets(value);
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
  inline ListLicenseAssetRulesetsRequest& WithMaxResults(int value) {
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
  ListLicenseAssetRulesetsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Filter> m_filters;

  bool m_showAWSManagedLicenseAssetRulesets{false};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_filtersHasBeenSet = false;
  bool m_showAWSManagedLicenseAssetRulesetsHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
