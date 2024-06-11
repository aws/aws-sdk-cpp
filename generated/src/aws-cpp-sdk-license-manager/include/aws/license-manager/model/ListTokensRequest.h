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
  class ListTokensRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API ListTokensRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTokens"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Token IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTokenIds() const{ return m_tokenIds; }
    inline bool TokenIdsHasBeenSet() const { return m_tokenIdsHasBeenSet; }
    inline void SetTokenIds(const Aws::Vector<Aws::String>& value) { m_tokenIdsHasBeenSet = true; m_tokenIds = value; }
    inline void SetTokenIds(Aws::Vector<Aws::String>&& value) { m_tokenIdsHasBeenSet = true; m_tokenIds = std::move(value); }
    inline ListTokensRequest& WithTokenIds(const Aws::Vector<Aws::String>& value) { SetTokenIds(value); return *this;}
    inline ListTokensRequest& WithTokenIds(Aws::Vector<Aws::String>&& value) { SetTokenIds(std::move(value)); return *this;}
    inline ListTokensRequest& AddTokenIds(const Aws::String& value) { m_tokenIdsHasBeenSet = true; m_tokenIds.push_back(value); return *this; }
    inline ListTokensRequest& AddTokenIds(Aws::String&& value) { m_tokenIdsHasBeenSet = true; m_tokenIds.push_back(std::move(value)); return *this; }
    inline ListTokensRequest& AddTokenIds(const char* value) { m_tokenIdsHasBeenSet = true; m_tokenIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters to scope the results. The following filter is supported:</p> <ul>
     * <li> <p> <code>LicenseArns</code> </p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline ListTokensRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline ListTokensRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline ListTokensRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline ListTokensRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
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
    inline ListTokensRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTokensRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTokensRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of results to return in a single call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListTokensRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_tokenIds;
    bool m_tokenIdsHasBeenSet = false;

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
