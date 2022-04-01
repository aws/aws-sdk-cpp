﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/model/CatalogItemClass.h>
#include <aws/outposts/model/SupportedStorageEnum.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Outposts
{
namespace Model
{

  /**
   */
  class AWS_OUTPOSTS_API ListCatalogItemsRequest : public OutpostsRequest
  {
  public:
    ListCatalogItemsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCatalogItems"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListCatalogItemsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListCatalogItemsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListCatalogItemsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline ListCatalogItemsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> A filter for the class of items in the catalog. </p> <p>Filter values are
     * case sensitive. If you specify multiple values for a filter, the values are
     * joined with an <code>OR</code>, and the request returns all results that match
     * any of the specified values.</p>
     */
    inline const Aws::Vector<CatalogItemClass>& GetItemClassFilter() const{ return m_itemClassFilter; }

    /**
     * <p> A filter for the class of items in the catalog. </p> <p>Filter values are
     * case sensitive. If you specify multiple values for a filter, the values are
     * joined with an <code>OR</code>, and the request returns all results that match
     * any of the specified values.</p>
     */
    inline bool ItemClassFilterHasBeenSet() const { return m_itemClassFilterHasBeenSet; }

    /**
     * <p> A filter for the class of items in the catalog. </p> <p>Filter values are
     * case sensitive. If you specify multiple values for a filter, the values are
     * joined with an <code>OR</code>, and the request returns all results that match
     * any of the specified values.</p>
     */
    inline void SetItemClassFilter(const Aws::Vector<CatalogItemClass>& value) { m_itemClassFilterHasBeenSet = true; m_itemClassFilter = value; }

    /**
     * <p> A filter for the class of items in the catalog. </p> <p>Filter values are
     * case sensitive. If you specify multiple values for a filter, the values are
     * joined with an <code>OR</code>, and the request returns all results that match
     * any of the specified values.</p>
     */
    inline void SetItemClassFilter(Aws::Vector<CatalogItemClass>&& value) { m_itemClassFilterHasBeenSet = true; m_itemClassFilter = std::move(value); }

    /**
     * <p> A filter for the class of items in the catalog. </p> <p>Filter values are
     * case sensitive. If you specify multiple values for a filter, the values are
     * joined with an <code>OR</code>, and the request returns all results that match
     * any of the specified values.</p>
     */
    inline ListCatalogItemsRequest& WithItemClassFilter(const Aws::Vector<CatalogItemClass>& value) { SetItemClassFilter(value); return *this;}

    /**
     * <p> A filter for the class of items in the catalog. </p> <p>Filter values are
     * case sensitive. If you specify multiple values for a filter, the values are
     * joined with an <code>OR</code>, and the request returns all results that match
     * any of the specified values.</p>
     */
    inline ListCatalogItemsRequest& WithItemClassFilter(Aws::Vector<CatalogItemClass>&& value) { SetItemClassFilter(std::move(value)); return *this;}

    /**
     * <p> A filter for the class of items in the catalog. </p> <p>Filter values are
     * case sensitive. If you specify multiple values for a filter, the values are
     * joined with an <code>OR</code>, and the request returns all results that match
     * any of the specified values.</p>
     */
    inline ListCatalogItemsRequest& AddItemClassFilter(const CatalogItemClass& value) { m_itemClassFilterHasBeenSet = true; m_itemClassFilter.push_back(value); return *this; }

    /**
     * <p> A filter for the class of items in the catalog. </p> <p>Filter values are
     * case sensitive. If you specify multiple values for a filter, the values are
     * joined with an <code>OR</code>, and the request returns all results that match
     * any of the specified values.</p>
     */
    inline ListCatalogItemsRequest& AddItemClassFilter(CatalogItemClass&& value) { m_itemClassFilterHasBeenSet = true; m_itemClassFilter.push_back(std::move(value)); return *this; }


    /**
     * <p> A filter for the storage options of items in the catalog. </p> <p>Filter
     * values are case sensitive. If you specify multiple values for a filter, the
     * values are joined with an <code>OR</code>, and the request returns all results
     * that match any of the specified values.</p>
     */
    inline const Aws::Vector<SupportedStorageEnum>& GetSupportedStorageFilter() const{ return m_supportedStorageFilter; }

    /**
     * <p> A filter for the storage options of items in the catalog. </p> <p>Filter
     * values are case sensitive. If you specify multiple values for a filter, the
     * values are joined with an <code>OR</code>, and the request returns all results
     * that match any of the specified values.</p>
     */
    inline bool SupportedStorageFilterHasBeenSet() const { return m_supportedStorageFilterHasBeenSet; }

    /**
     * <p> A filter for the storage options of items in the catalog. </p> <p>Filter
     * values are case sensitive. If you specify multiple values for a filter, the
     * values are joined with an <code>OR</code>, and the request returns all results
     * that match any of the specified values.</p>
     */
    inline void SetSupportedStorageFilter(const Aws::Vector<SupportedStorageEnum>& value) { m_supportedStorageFilterHasBeenSet = true; m_supportedStorageFilter = value; }

    /**
     * <p> A filter for the storage options of items in the catalog. </p> <p>Filter
     * values are case sensitive. If you specify multiple values for a filter, the
     * values are joined with an <code>OR</code>, and the request returns all results
     * that match any of the specified values.</p>
     */
    inline void SetSupportedStorageFilter(Aws::Vector<SupportedStorageEnum>&& value) { m_supportedStorageFilterHasBeenSet = true; m_supportedStorageFilter = std::move(value); }

    /**
     * <p> A filter for the storage options of items in the catalog. </p> <p>Filter
     * values are case sensitive. If you specify multiple values for a filter, the
     * values are joined with an <code>OR</code>, and the request returns all results
     * that match any of the specified values.</p>
     */
    inline ListCatalogItemsRequest& WithSupportedStorageFilter(const Aws::Vector<SupportedStorageEnum>& value) { SetSupportedStorageFilter(value); return *this;}

    /**
     * <p> A filter for the storage options of items in the catalog. </p> <p>Filter
     * values are case sensitive. If you specify multiple values for a filter, the
     * values are joined with an <code>OR</code>, and the request returns all results
     * that match any of the specified values.</p>
     */
    inline ListCatalogItemsRequest& WithSupportedStorageFilter(Aws::Vector<SupportedStorageEnum>&& value) { SetSupportedStorageFilter(std::move(value)); return *this;}

    /**
     * <p> A filter for the storage options of items in the catalog. </p> <p>Filter
     * values are case sensitive. If you specify multiple values for a filter, the
     * values are joined with an <code>OR</code>, and the request returns all results
     * that match any of the specified values.</p>
     */
    inline ListCatalogItemsRequest& AddSupportedStorageFilter(const SupportedStorageEnum& value) { m_supportedStorageFilterHasBeenSet = true; m_supportedStorageFilter.push_back(value); return *this; }

    /**
     * <p> A filter for the storage options of items in the catalog. </p> <p>Filter
     * values are case sensitive. If you specify multiple values for a filter, the
     * values are joined with an <code>OR</code>, and the request returns all results
     * that match any of the specified values.</p>
     */
    inline ListCatalogItemsRequest& AddSupportedStorageFilter(SupportedStorageEnum&& value) { m_supportedStorageFilterHasBeenSet = true; m_supportedStorageFilter.push_back(std::move(value)); return *this; }


    /**
     * <p> A filter for EC2 family options for items in the catalog. </p> <p>Filter
     * values are case sensitive. If you specify multiple values for a filter, the
     * values are joined with an <code>OR</code>, and the request returns all results
     * that match any of the specified values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEC2FamilyFilter() const{ return m_eC2FamilyFilter; }

    /**
     * <p> A filter for EC2 family options for items in the catalog. </p> <p>Filter
     * values are case sensitive. If you specify multiple values for a filter, the
     * values are joined with an <code>OR</code>, and the request returns all results
     * that match any of the specified values.</p>
     */
    inline bool EC2FamilyFilterHasBeenSet() const { return m_eC2FamilyFilterHasBeenSet; }

    /**
     * <p> A filter for EC2 family options for items in the catalog. </p> <p>Filter
     * values are case sensitive. If you specify multiple values for a filter, the
     * values are joined with an <code>OR</code>, and the request returns all results
     * that match any of the specified values.</p>
     */
    inline void SetEC2FamilyFilter(const Aws::Vector<Aws::String>& value) { m_eC2FamilyFilterHasBeenSet = true; m_eC2FamilyFilter = value; }

    /**
     * <p> A filter for EC2 family options for items in the catalog. </p> <p>Filter
     * values are case sensitive. If you specify multiple values for a filter, the
     * values are joined with an <code>OR</code>, and the request returns all results
     * that match any of the specified values.</p>
     */
    inline void SetEC2FamilyFilter(Aws::Vector<Aws::String>&& value) { m_eC2FamilyFilterHasBeenSet = true; m_eC2FamilyFilter = std::move(value); }

    /**
     * <p> A filter for EC2 family options for items in the catalog. </p> <p>Filter
     * values are case sensitive. If you specify multiple values for a filter, the
     * values are joined with an <code>OR</code>, and the request returns all results
     * that match any of the specified values.</p>
     */
    inline ListCatalogItemsRequest& WithEC2FamilyFilter(const Aws::Vector<Aws::String>& value) { SetEC2FamilyFilter(value); return *this;}

    /**
     * <p> A filter for EC2 family options for items in the catalog. </p> <p>Filter
     * values are case sensitive. If you specify multiple values for a filter, the
     * values are joined with an <code>OR</code>, and the request returns all results
     * that match any of the specified values.</p>
     */
    inline ListCatalogItemsRequest& WithEC2FamilyFilter(Aws::Vector<Aws::String>&& value) { SetEC2FamilyFilter(std::move(value)); return *this;}

    /**
     * <p> A filter for EC2 family options for items in the catalog. </p> <p>Filter
     * values are case sensitive. If you specify multiple values for a filter, the
     * values are joined with an <code>OR</code>, and the request returns all results
     * that match any of the specified values.</p>
     */
    inline ListCatalogItemsRequest& AddEC2FamilyFilter(const Aws::String& value) { m_eC2FamilyFilterHasBeenSet = true; m_eC2FamilyFilter.push_back(value); return *this; }

    /**
     * <p> A filter for EC2 family options for items in the catalog. </p> <p>Filter
     * values are case sensitive. If you specify multiple values for a filter, the
     * values are joined with an <code>OR</code>, and the request returns all results
     * that match any of the specified values.</p>
     */
    inline ListCatalogItemsRequest& AddEC2FamilyFilter(Aws::String&& value) { m_eC2FamilyFilterHasBeenSet = true; m_eC2FamilyFilter.push_back(std::move(value)); return *this; }

    /**
     * <p> A filter for EC2 family options for items in the catalog. </p> <p>Filter
     * values are case sensitive. If you specify multiple values for a filter, the
     * values are joined with an <code>OR</code>, and the request returns all results
     * that match any of the specified values.</p>
     */
    inline ListCatalogItemsRequest& AddEC2FamilyFilter(const char* value) { m_eC2FamilyFilterHasBeenSet = true; m_eC2FamilyFilter.push_back(value); return *this; }

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::Vector<CatalogItemClass> m_itemClassFilter;
    bool m_itemClassFilterHasBeenSet;

    Aws::Vector<SupportedStorageEnum> m_supportedStorageFilter;
    bool m_supportedStorageFilterHasBeenSet;

    Aws::Vector<Aws::String> m_eC2FamilyFilter;
    bool m_eC2FamilyFilterHasBeenSet;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
