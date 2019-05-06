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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/servicecatalog/model/ProductViewSortBy.h>
#include <aws/servicecatalog/model/SortOrder.h>
#include <aws/servicecatalog/model/ProductSource.h>
#include <aws/servicecatalog/model/ProductViewFilterBy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class AWS_SERVICECATALOG_API SearchProductsAsAdminRequest : public ServiceCatalogRequest
  {
  public:
    SearchProductsAsAdminRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchProductsAsAdmin"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const{ return m_acceptLanguage; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const Aws::String& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(Aws::String&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::move(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const char* value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage.assign(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline SearchProductsAsAdminRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline SearchProductsAsAdminRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline SearchProductsAsAdminRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}


    /**
     * <p>The portfolio identifier.</p>
     */
    inline const Aws::String& GetPortfolioId() const{ return m_portfolioId; }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline bool PortfolioIdHasBeenSet() const { return m_portfolioIdHasBeenSet; }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline void SetPortfolioId(const Aws::String& value) { m_portfolioIdHasBeenSet = true; m_portfolioId = value; }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline void SetPortfolioId(Aws::String&& value) { m_portfolioIdHasBeenSet = true; m_portfolioId = std::move(value); }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline void SetPortfolioId(const char* value) { m_portfolioIdHasBeenSet = true; m_portfolioId.assign(value); }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline SearchProductsAsAdminRequest& WithPortfolioId(const Aws::String& value) { SetPortfolioId(value); return *this;}

    /**
     * <p>The portfolio identifier.</p>
     */
    inline SearchProductsAsAdminRequest& WithPortfolioId(Aws::String&& value) { SetPortfolioId(std::move(value)); return *this;}

    /**
     * <p>The portfolio identifier.</p>
     */
    inline SearchProductsAsAdminRequest& WithPortfolioId(const char* value) { SetPortfolioId(value); return *this;}


    /**
     * <p>The search filters. If no search filters are specified, the output includes
     * all products to which the administrator has access.</p>
     */
    inline const Aws::Map<ProductViewFilterBy, Aws::Vector<Aws::String>>& GetFilters() const{ return m_filters; }

    /**
     * <p>The search filters. If no search filters are specified, the output includes
     * all products to which the administrator has access.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The search filters. If no search filters are specified, the output includes
     * all products to which the administrator has access.</p>
     */
    inline void SetFilters(const Aws::Map<ProductViewFilterBy, Aws::Vector<Aws::String>>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The search filters. If no search filters are specified, the output includes
     * all products to which the administrator has access.</p>
     */
    inline void SetFilters(Aws::Map<ProductViewFilterBy, Aws::Vector<Aws::String>>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The search filters. If no search filters are specified, the output includes
     * all products to which the administrator has access.</p>
     */
    inline SearchProductsAsAdminRequest& WithFilters(const Aws::Map<ProductViewFilterBy, Aws::Vector<Aws::String>>& value) { SetFilters(value); return *this;}

    /**
     * <p>The search filters. If no search filters are specified, the output includes
     * all products to which the administrator has access.</p>
     */
    inline SearchProductsAsAdminRequest& WithFilters(Aws::Map<ProductViewFilterBy, Aws::Vector<Aws::String>>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The search filters. If no search filters are specified, the output includes
     * all products to which the administrator has access.</p>
     */
    inline SearchProductsAsAdminRequest& AddFilters(const ProductViewFilterBy& key, const Aws::Vector<Aws::String>& value) { m_filtersHasBeenSet = true; m_filters.emplace(key, value); return *this; }

    /**
     * <p>The search filters. If no search filters are specified, the output includes
     * all products to which the administrator has access.</p>
     */
    inline SearchProductsAsAdminRequest& AddFilters(ProductViewFilterBy&& key, const Aws::Vector<Aws::String>& value) { m_filtersHasBeenSet = true; m_filters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The search filters. If no search filters are specified, the output includes
     * all products to which the administrator has access.</p>
     */
    inline SearchProductsAsAdminRequest& AddFilters(const ProductViewFilterBy& key, Aws::Vector<Aws::String>&& value) { m_filtersHasBeenSet = true; m_filters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The search filters. If no search filters are specified, the output includes
     * all products to which the administrator has access.</p>
     */
    inline SearchProductsAsAdminRequest& AddFilters(ProductViewFilterBy&& key, Aws::Vector<Aws::String>&& value) { m_filtersHasBeenSet = true; m_filters.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>The sort field. If no value is specified, the results are not sorted.</p>
     */
    inline const ProductViewSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The sort field. If no value is specified, the results are not sorted.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The sort field. If no value is specified, the results are not sorted.</p>
     */
    inline void SetSortBy(const ProductViewSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The sort field. If no value is specified, the results are not sorted.</p>
     */
    inline void SetSortBy(ProductViewSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The sort field. If no value is specified, the results are not sorted.</p>
     */
    inline SearchProductsAsAdminRequest& WithSortBy(const ProductViewSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The sort field. If no value is specified, the results are not sorted.</p>
     */
    inline SearchProductsAsAdminRequest& WithSortBy(ProductViewSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The sort order. If no value is specified, the results are not sorted.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order. If no value is specified, the results are not sorted.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order. If no value is specified, the results are not sorted.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order. If no value is specified, the results are not sorted.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order. If no value is specified, the results are not sorted.</p>
     */
    inline SearchProductsAsAdminRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order. If no value is specified, the results are not sorted.</p>
     */
    inline SearchProductsAsAdminRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline const Aws::String& GetPageToken() const{ return m_pageToken; }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline bool PageTokenHasBeenSet() const { return m_pageTokenHasBeenSet; }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline void SetPageToken(const Aws::String& value) { m_pageTokenHasBeenSet = true; m_pageToken = value; }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline void SetPageToken(Aws::String&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::move(value); }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline void SetPageToken(const char* value) { m_pageTokenHasBeenSet = true; m_pageToken.assign(value); }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline SearchProductsAsAdminRequest& WithPageToken(const Aws::String& value) { SetPageToken(value); return *this;}

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline SearchProductsAsAdminRequest& WithPageToken(Aws::String&& value) { SetPageToken(std::move(value)); return *this;}

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline SearchProductsAsAdminRequest& WithPageToken(const char* value) { SetPageToken(value); return *this;}


    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline SearchProductsAsAdminRequest& WithPageSize(int value) { SetPageSize(value); return *this;}


    /**
     * <p>Access level of the source of the product.</p>
     */
    inline const ProductSource& GetProductSource() const{ return m_productSource; }

    /**
     * <p>Access level of the source of the product.</p>
     */
    inline bool ProductSourceHasBeenSet() const { return m_productSourceHasBeenSet; }

    /**
     * <p>Access level of the source of the product.</p>
     */
    inline void SetProductSource(const ProductSource& value) { m_productSourceHasBeenSet = true; m_productSource = value; }

    /**
     * <p>Access level of the source of the product.</p>
     */
    inline void SetProductSource(ProductSource&& value) { m_productSourceHasBeenSet = true; m_productSource = std::move(value); }

    /**
     * <p>Access level of the source of the product.</p>
     */
    inline SearchProductsAsAdminRequest& WithProductSource(const ProductSource& value) { SetProductSource(value); return *this;}

    /**
     * <p>Access level of the source of the product.</p>
     */
    inline SearchProductsAsAdminRequest& WithProductSource(ProductSource&& value) { SetProductSource(std::move(value)); return *this;}

  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet;

    Aws::String m_portfolioId;
    bool m_portfolioIdHasBeenSet;

    Aws::Map<ProductViewFilterBy, Aws::Vector<Aws::String>> m_filters;
    bool m_filtersHasBeenSet;

    ProductViewSortBy m_sortBy;
    bool m_sortByHasBeenSet;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet;

    int m_pageSize;
    bool m_pageSizeHasBeenSet;

    ProductSource m_productSource;
    bool m_productSourceHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
