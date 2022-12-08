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
    AWS_LICENSEMANAGER_API ListReceivedLicensesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListReceivedLicenses"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Amazon Resource Names (ARNs) of the licenses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLicenseArns() const{ return m_licenseArns; }

    /**
     * <p>Amazon Resource Names (ARNs) of the licenses.</p>
     */
    inline bool LicenseArnsHasBeenSet() const { return m_licenseArnsHasBeenSet; }

    /**
     * <p>Amazon Resource Names (ARNs) of the licenses.</p>
     */
    inline void SetLicenseArns(const Aws::Vector<Aws::String>& value) { m_licenseArnsHasBeenSet = true; m_licenseArns = value; }

    /**
     * <p>Amazon Resource Names (ARNs) of the licenses.</p>
     */
    inline void SetLicenseArns(Aws::Vector<Aws::String>&& value) { m_licenseArnsHasBeenSet = true; m_licenseArns = std::move(value); }

    /**
     * <p>Amazon Resource Names (ARNs) of the licenses.</p>
     */
    inline ListReceivedLicensesRequest& WithLicenseArns(const Aws::Vector<Aws::String>& value) { SetLicenseArns(value); return *this;}

    /**
     * <p>Amazon Resource Names (ARNs) of the licenses.</p>
     */
    inline ListReceivedLicensesRequest& WithLicenseArns(Aws::Vector<Aws::String>&& value) { SetLicenseArns(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Names (ARNs) of the licenses.</p>
     */
    inline ListReceivedLicensesRequest& AddLicenseArns(const Aws::String& value) { m_licenseArnsHasBeenSet = true; m_licenseArns.push_back(value); return *this; }

    /**
     * <p>Amazon Resource Names (ARNs) of the licenses.</p>
     */
    inline ListReceivedLicensesRequest& AddLicenseArns(Aws::String&& value) { m_licenseArnsHasBeenSet = true; m_licenseArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Amazon Resource Names (ARNs) of the licenses.</p>
     */
    inline ListReceivedLicensesRequest& AddLicenseArns(const char* value) { m_licenseArnsHasBeenSet = true; m_licenseArns.push_back(value); return *this; }


    /**
     * <p>Filters to scope the results. The following filters are supported:</p> <ul>
     * <li> <p> <code>ProductSKU</code> </p> </li> <li> <p> <code>Status</code> </p>
     * </li> <li> <p> <code>Fingerprint</code> </p> </li> <li> <p>
     * <code>IssuerName</code> </p> </li> <li> <p> <code>Beneficiary</code> </p> </li>
     * </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Filters to scope the results. The following filters are supported:</p> <ul>
     * <li> <p> <code>ProductSKU</code> </p> </li> <li> <p> <code>Status</code> </p>
     * </li> <li> <p> <code>Fingerprint</code> </p> </li> <li> <p>
     * <code>IssuerName</code> </p> </li> <li> <p> <code>Beneficiary</code> </p> </li>
     * </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Filters to scope the results. The following filters are supported:</p> <ul>
     * <li> <p> <code>ProductSKU</code> </p> </li> <li> <p> <code>Status</code> </p>
     * </li> <li> <p> <code>Fingerprint</code> </p> </li> <li> <p>
     * <code>IssuerName</code> </p> </li> <li> <p> <code>Beneficiary</code> </p> </li>
     * </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Filters to scope the results. The following filters are supported:</p> <ul>
     * <li> <p> <code>ProductSKU</code> </p> </li> <li> <p> <code>Status</code> </p>
     * </li> <li> <p> <code>Fingerprint</code> </p> </li> <li> <p>
     * <code>IssuerName</code> </p> </li> <li> <p> <code>Beneficiary</code> </p> </li>
     * </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Filters to scope the results. The following filters are supported:</p> <ul>
     * <li> <p> <code>ProductSKU</code> </p> </li> <li> <p> <code>Status</code> </p>
     * </li> <li> <p> <code>Fingerprint</code> </p> </li> <li> <p>
     * <code>IssuerName</code> </p> </li> <li> <p> <code>Beneficiary</code> </p> </li>
     * </ul>
     */
    inline ListReceivedLicensesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Filters to scope the results. The following filters are supported:</p> <ul>
     * <li> <p> <code>ProductSKU</code> </p> </li> <li> <p> <code>Status</code> </p>
     * </li> <li> <p> <code>Fingerprint</code> </p> </li> <li> <p>
     * <code>IssuerName</code> </p> </li> <li> <p> <code>Beneficiary</code> </p> </li>
     * </ul>
     */
    inline ListReceivedLicensesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Filters to scope the results. The following filters are supported:</p> <ul>
     * <li> <p> <code>ProductSKU</code> </p> </li> <li> <p> <code>Status</code> </p>
     * </li> <li> <p> <code>Fingerprint</code> </p> </li> <li> <p>
     * <code>IssuerName</code> </p> </li> <li> <p> <code>Beneficiary</code> </p> </li>
     * </ul>
     */
    inline ListReceivedLicensesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Filters to scope the results. The following filters are supported:</p> <ul>
     * <li> <p> <code>ProductSKU</code> </p> </li> <li> <p> <code>Status</code> </p>
     * </li> <li> <p> <code>Fingerprint</code> </p> </li> <li> <p>
     * <code>IssuerName</code> </p> </li> <li> <p> <code>Beneficiary</code> </p> </li>
     * </ul>
     */
    inline ListReceivedLicensesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>Token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListReceivedLicensesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListReceivedLicensesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListReceivedLicensesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Maximum number of results to return in a single call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of results to return in a single call.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of results to return in a single call.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of results to return in a single call.</p>
     */
    inline ListReceivedLicensesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_licenseArns;
    bool m_licenseArnsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
