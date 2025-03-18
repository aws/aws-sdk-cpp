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
  class ListReceivedLicensesRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API ListReceivedLicensesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListReceivedLicenses"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Amazon Resource Names (ARNs) of the licenses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLicenseArns() const { return m_licenseArns; }
    inline bool LicenseArnsHasBeenSet() const { return m_licenseArnsHasBeenSet; }
    template<typename LicenseArnsT = Aws::Vector<Aws::String>>
    void SetLicenseArns(LicenseArnsT&& value) { m_licenseArnsHasBeenSet = true; m_licenseArns = std::forward<LicenseArnsT>(value); }
    template<typename LicenseArnsT = Aws::Vector<Aws::String>>
    ListReceivedLicensesRequest& WithLicenseArns(LicenseArnsT&& value) { SetLicenseArns(std::forward<LicenseArnsT>(value)); return *this;}
    template<typename LicenseArnsT = Aws::String>
    ListReceivedLicensesRequest& AddLicenseArns(LicenseArnsT&& value) { m_licenseArnsHasBeenSet = true; m_licenseArns.emplace_back(std::forward<LicenseArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters to scope the results. The following filters are supported:</p> <ul>
     * <li> <p> <code>ProductSKU</code> </p> </li> <li> <p> <code>Status</code> </p>
     * </li> <li> <p> <code>Fingerprint</code> </p> </li> <li> <p>
     * <code>IssuerName</code> </p> </li> <li> <p> <code>Beneficiary</code> </p> </li>
     * </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    ListReceivedLicensesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    ListReceivedLicensesRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
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
    ListReceivedLicensesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of results to return in a single call.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListReceivedLicensesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_licenseArns;
    bool m_licenseArnsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
