/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_LICENSEMANAGER_API ListLicenseConfigurationsRequest : public LicenseManagerRequest
  {
  public:
    ListLicenseConfigurationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLicenseConfigurations"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An array of ARNs for the calling account’s license configurations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLicenseConfigurationArns() const{ return m_licenseConfigurationArns; }

    /**
     * <p>An array of ARNs for the calling account’s license configurations.</p>
     */
    inline bool LicenseConfigurationArnsHasBeenSet() const { return m_licenseConfigurationArnsHasBeenSet; }

    /**
     * <p>An array of ARNs for the calling account’s license configurations.</p>
     */
    inline void SetLicenseConfigurationArns(const Aws::Vector<Aws::String>& value) { m_licenseConfigurationArnsHasBeenSet = true; m_licenseConfigurationArns = value; }

    /**
     * <p>An array of ARNs for the calling account’s license configurations.</p>
     */
    inline void SetLicenseConfigurationArns(Aws::Vector<Aws::String>&& value) { m_licenseConfigurationArnsHasBeenSet = true; m_licenseConfigurationArns = std::move(value); }

    /**
     * <p>An array of ARNs for the calling account’s license configurations.</p>
     */
    inline ListLicenseConfigurationsRequest& WithLicenseConfigurationArns(const Aws::Vector<Aws::String>& value) { SetLicenseConfigurationArns(value); return *this;}

    /**
     * <p>An array of ARNs for the calling account’s license configurations.</p>
     */
    inline ListLicenseConfigurationsRequest& WithLicenseConfigurationArns(Aws::Vector<Aws::String>&& value) { SetLicenseConfigurationArns(std::move(value)); return *this;}

    /**
     * <p>An array of ARNs for the calling account’s license configurations.</p>
     */
    inline ListLicenseConfigurationsRequest& AddLicenseConfigurationArns(const Aws::String& value) { m_licenseConfigurationArnsHasBeenSet = true; m_licenseConfigurationArns.push_back(value); return *this; }

    /**
     * <p>An array of ARNs for the calling account’s license configurations.</p>
     */
    inline ListLicenseConfigurationsRequest& AddLicenseConfigurationArns(Aws::String&& value) { m_licenseConfigurationArnsHasBeenSet = true; m_licenseConfigurationArns.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of ARNs for the calling account’s license configurations.</p>
     */
    inline ListLicenseConfigurationsRequest& AddLicenseConfigurationArns(const char* value) { m_licenseConfigurationArnsHasBeenSet = true; m_licenseConfigurationArns.push_back(value); return *this; }


    /**
     * <p>Maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value.</p>
     */
    inline ListLicenseConfigurationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListLicenseConfigurationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListLicenseConfigurationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListLicenseConfigurationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>One or more filters.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p>
     */
    inline ListLicenseConfigurationsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p>
     */
    inline ListLicenseConfigurationsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p>
     */
    inline ListLicenseConfigurationsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p>
     */
    inline ListLicenseConfigurationsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_licenseConfigurationArns;
    bool m_licenseConfigurationArnsHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
