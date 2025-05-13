/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/LicenseManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/Filter.h>
#include <utility>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

  /**
   */
  class ListLicenseConfigurationsRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API ListLicenseConfigurationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLicenseConfigurations"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Amazon Resource Names (ARN) of the license configurations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLicenseConfigurationArns() const { return m_licenseConfigurationArns; }
    inline bool LicenseConfigurationArnsHasBeenSet() const { return m_licenseConfigurationArnsHasBeenSet; }
    template<typename LicenseConfigurationArnsT = Aws::Vector<Aws::String>>
    void SetLicenseConfigurationArns(LicenseConfigurationArnsT&& value) { m_licenseConfigurationArnsHasBeenSet = true; m_licenseConfigurationArns = std::forward<LicenseConfigurationArnsT>(value); }
    template<typename LicenseConfigurationArnsT = Aws::Vector<Aws::String>>
    ListLicenseConfigurationsRequest& WithLicenseConfigurationArns(LicenseConfigurationArnsT&& value) { SetLicenseConfigurationArns(std::forward<LicenseConfigurationArnsT>(value)); return *this;}
    template<typename LicenseConfigurationArnsT = Aws::String>
    ListLicenseConfigurationsRequest& AddLicenseConfigurationArns(LicenseConfigurationArnsT&& value) { m_licenseConfigurationArnsHasBeenSet = true; m_licenseConfigurationArns.emplace_back(std::forward<LicenseConfigurationArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Maximum number of results to return in a single call.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListLicenseConfigurationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLicenseConfigurationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters to scope the results. The following filters and logical operators are
     * supported:</p> <ul> <li> <p> <code>licenseCountingType</code> - The dimension
     * for which licenses are counted. Possible values are <code>vCPU</code> |
     * <code>Instance</code> | <code>Core</code> | <code>Socket</code>.</p> </li> <li>
     * <p> <code>enforceLicenseCount</code> - A Boolean value that indicates whether
     * hard license enforcement is used.</p> </li> <li> <p>
     * <code>usagelimitExceeded</code> - A Boolean value that indicates whether the
     * available licenses have been exceeded.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    ListLicenseConfigurationsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    ListLicenseConfigurationsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_licenseConfigurationArns;
    bool m_licenseConfigurationArnsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
