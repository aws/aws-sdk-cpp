﻿/**
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
  class ListReceivedGrantsRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API ListReceivedGrantsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListReceivedGrants"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Amazon Resource Names (ARNs) of the grants.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGrantArns() const{ return m_grantArns; }
    inline bool GrantArnsHasBeenSet() const { return m_grantArnsHasBeenSet; }
    inline void SetGrantArns(const Aws::Vector<Aws::String>& value) { m_grantArnsHasBeenSet = true; m_grantArns = value; }
    inline void SetGrantArns(Aws::Vector<Aws::String>&& value) { m_grantArnsHasBeenSet = true; m_grantArns = std::move(value); }
    inline ListReceivedGrantsRequest& WithGrantArns(const Aws::Vector<Aws::String>& value) { SetGrantArns(value); return *this;}
    inline ListReceivedGrantsRequest& WithGrantArns(Aws::Vector<Aws::String>&& value) { SetGrantArns(std::move(value)); return *this;}
    inline ListReceivedGrantsRequest& AddGrantArns(const Aws::String& value) { m_grantArnsHasBeenSet = true; m_grantArns.push_back(value); return *this; }
    inline ListReceivedGrantsRequest& AddGrantArns(Aws::String&& value) { m_grantArnsHasBeenSet = true; m_grantArns.push_back(std::move(value)); return *this; }
    inline ListReceivedGrantsRequest& AddGrantArns(const char* value) { m_grantArnsHasBeenSet = true; m_grantArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters to scope the results. The following filters are supported:</p> <ul>
     * <li> <p> <code>ProductSKU</code> </p> </li> <li> <p>
     * <code>LicenseIssuerName</code> </p> </li> <li> <p> <code>LicenseArn</code> </p>
     * </li> <li> <p> <code>GrantStatus</code> </p> </li> <li> <p>
     * <code>GranterAccountId</code> </p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline ListReceivedGrantsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline ListReceivedGrantsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline ListReceivedGrantsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline ListReceivedGrantsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListReceivedGrantsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListReceivedGrantsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListReceivedGrantsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of results to return in a single call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListReceivedGrantsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_grantArns;
    bool m_grantArnsHasBeenSet = false;

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
