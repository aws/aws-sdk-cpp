/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/MarketplaceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/model/Sort.h>
#include <aws/marketplace-catalog/model/Filter.h>
#include <utility>

namespace Aws
{
namespace MarketplaceCatalog
{
namespace Model
{

  /**
   */
  class ListEntitiesRequest : public MarketplaceCatalogRequest
  {
  public:
    AWS_MARKETPLACECATALOG_API ListEntitiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEntities"; }

    AWS_MARKETPLACECATALOG_API Aws::String SerializePayload() const override;


    /**
     * <p>The catalog related to the request. Fixed value: <code>AWSMarketplace</code>
     * </p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }

    /**
     * <p>The catalog related to the request. Fixed value: <code>AWSMarketplace</code>
     * </p>
     */
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }

    /**
     * <p>The catalog related to the request. Fixed value: <code>AWSMarketplace</code>
     * </p>
     */
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }

    /**
     * <p>The catalog related to the request. Fixed value: <code>AWSMarketplace</code>
     * </p>
     */
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }

    /**
     * <p>The catalog related to the request. Fixed value: <code>AWSMarketplace</code>
     * </p>
     */
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }

    /**
     * <p>The catalog related to the request. Fixed value: <code>AWSMarketplace</code>
     * </p>
     */
    inline ListEntitiesRequest& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}

    /**
     * <p>The catalog related to the request. Fixed value: <code>AWSMarketplace</code>
     * </p>
     */
    inline ListEntitiesRequest& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}

    /**
     * <p>The catalog related to the request. Fixed value: <code>AWSMarketplace</code>
     * </p>
     */
    inline ListEntitiesRequest& WithCatalog(const char* value) { SetCatalog(value); return *this;}


    /**
     * <p>The type of entities to retrieve.</p>
     */
    inline const Aws::String& GetEntityType() const{ return m_entityType; }

    /**
     * <p>The type of entities to retrieve.</p>
     */
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }

    /**
     * <p>The type of entities to retrieve.</p>
     */
    inline void SetEntityType(const Aws::String& value) { m_entityTypeHasBeenSet = true; m_entityType = value; }

    /**
     * <p>The type of entities to retrieve.</p>
     */
    inline void SetEntityType(Aws::String&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::move(value); }

    /**
     * <p>The type of entities to retrieve.</p>
     */
    inline void SetEntityType(const char* value) { m_entityTypeHasBeenSet = true; m_entityType.assign(value); }

    /**
     * <p>The type of entities to retrieve.</p>
     */
    inline ListEntitiesRequest& WithEntityType(const Aws::String& value) { SetEntityType(value); return *this;}

    /**
     * <p>The type of entities to retrieve.</p>
     */
    inline ListEntitiesRequest& WithEntityType(Aws::String&& value) { SetEntityType(std::move(value)); return *this;}

    /**
     * <p>The type of entities to retrieve.</p>
     */
    inline ListEntitiesRequest& WithEntityType(const char* value) { SetEntityType(value); return *this;}


    /**
     * <p>An array of filter objects. Each filter object contains two attributes,
     * <code>filterName</code> and <code>filterValues</code>.</p>
     */
    inline const Aws::Vector<Filter>& GetFilterList() const{ return m_filterList; }

    /**
     * <p>An array of filter objects. Each filter object contains two attributes,
     * <code>filterName</code> and <code>filterValues</code>.</p>
     */
    inline bool FilterListHasBeenSet() const { return m_filterListHasBeenSet; }

    /**
     * <p>An array of filter objects. Each filter object contains two attributes,
     * <code>filterName</code> and <code>filterValues</code>.</p>
     */
    inline void SetFilterList(const Aws::Vector<Filter>& value) { m_filterListHasBeenSet = true; m_filterList = value; }

    /**
     * <p>An array of filter objects. Each filter object contains two attributes,
     * <code>filterName</code> and <code>filterValues</code>.</p>
     */
    inline void SetFilterList(Aws::Vector<Filter>&& value) { m_filterListHasBeenSet = true; m_filterList = std::move(value); }

    /**
     * <p>An array of filter objects. Each filter object contains two attributes,
     * <code>filterName</code> and <code>filterValues</code>.</p>
     */
    inline ListEntitiesRequest& WithFilterList(const Aws::Vector<Filter>& value) { SetFilterList(value); return *this;}

    /**
     * <p>An array of filter objects. Each filter object contains two attributes,
     * <code>filterName</code> and <code>filterValues</code>.</p>
     */
    inline ListEntitiesRequest& WithFilterList(Aws::Vector<Filter>&& value) { SetFilterList(std::move(value)); return *this;}

    /**
     * <p>An array of filter objects. Each filter object contains two attributes,
     * <code>filterName</code> and <code>filterValues</code>.</p>
     */
    inline ListEntitiesRequest& AddFilterList(const Filter& value) { m_filterListHasBeenSet = true; m_filterList.push_back(value); return *this; }

    /**
     * <p>An array of filter objects. Each filter object contains two attributes,
     * <code>filterName</code> and <code>filterValues</code>.</p>
     */
    inline ListEntitiesRequest& AddFilterList(Filter&& value) { m_filterListHasBeenSet = true; m_filterList.push_back(std::move(value)); return *this; }


    /**
     * <p>An object that contains two attributes, <code>SortBy</code> and
     * <code>SortOrder</code>.</p>
     */
    inline const Sort& GetSort() const{ return m_sort; }

    /**
     * <p>An object that contains two attributes, <code>SortBy</code> and
     * <code>SortOrder</code>.</p>
     */
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }

    /**
     * <p>An object that contains two attributes, <code>SortBy</code> and
     * <code>SortOrder</code>.</p>
     */
    inline void SetSort(const Sort& value) { m_sortHasBeenSet = true; m_sort = value; }

    /**
     * <p>An object that contains two attributes, <code>SortBy</code> and
     * <code>SortOrder</code>.</p>
     */
    inline void SetSort(Sort&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }

    /**
     * <p>An object that contains two attributes, <code>SortBy</code> and
     * <code>SortOrder</code>.</p>
     */
    inline ListEntitiesRequest& WithSort(const Sort& value) { SetSort(value); return *this;}

    /**
     * <p>An object that contains two attributes, <code>SortBy</code> and
     * <code>SortOrder</code>.</p>
     */
    inline ListEntitiesRequest& WithSort(Sort&& value) { SetSort(std::move(value)); return *this;}


    /**
     * <p>The value of the next token, if it exists. Null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The value of the next token, if it exists. Null if there are no more
     * results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The value of the next token, if it exists. Null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The value of the next token, if it exists. Null if there are no more
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The value of the next token, if it exists. Null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The value of the next token, if it exists. Null if there are no more
     * results.</p>
     */
    inline ListEntitiesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The value of the next token, if it exists. Null if there are no more
     * results.</p>
     */
    inline ListEntitiesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The value of the next token, if it exists. Null if there are no more
     * results.</p>
     */
    inline ListEntitiesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specifies the upper limit of the elements on a single page. If a value isn't
     * provided, the default value is 20.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Specifies the upper limit of the elements on a single page. If a value isn't
     * provided, the default value is 20.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Specifies the upper limit of the elements on a single page. If a value isn't
     * provided, the default value is 20.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Specifies the upper limit of the elements on a single page. If a value isn't
     * provided, the default value is 20.</p>
     */
    inline ListEntitiesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_entityType;
    bool m_entityTypeHasBeenSet = false;

    Aws::Vector<Filter> m_filterList;
    bool m_filterListHasBeenSet = false;

    Sort m_sort;
    bool m_sortHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
