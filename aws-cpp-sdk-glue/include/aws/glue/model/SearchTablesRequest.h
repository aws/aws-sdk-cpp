/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/ResourceShareType.h>
#include <aws/glue/model/PropertyPredicate.h>
#include <aws/glue/model/SortCriterion.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class SearchTablesRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API SearchTablesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchTables"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier, consisting of <code> <i>account_id</i> </code>.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>A unique identifier, consisting of <code> <i>account_id</i> </code>.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>A unique identifier, consisting of <code> <i>account_id</i> </code>.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>A unique identifier, consisting of <code> <i>account_id</i> </code>.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>A unique identifier, consisting of <code> <i>account_id</i> </code>.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>A unique identifier, consisting of <code> <i>account_id</i> </code>.</p>
     */
    inline SearchTablesRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>A unique identifier, consisting of <code> <i>account_id</i> </code>.</p>
     */
    inline SearchTablesRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier, consisting of <code> <i>account_id</i> </code>.</p>
     */
    inline SearchTablesRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>A continuation token, included if this is a continuation call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, included if this is a continuation call.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A continuation token, included if this is a continuation call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A continuation token, included if this is a continuation call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, included if this is a continuation call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A continuation token, included if this is a continuation call.</p>
     */
    inline SearchTablesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, included if this is a continuation call.</p>
     */
    inline SearchTablesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, included if this is a continuation call.</p>
     */
    inline SearchTablesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of key-value pairs, and a comparator used to filter the search
     * results. Returns all entities matching the predicate.</p> <p>The
     * <code>Comparator</code> member of the <code>PropertyPredicate</code> struct is
     * used only for time fields, and can be omitted for other field types. Also, when
     * comparing string values, such as when <code>Key=Name</code>, a fuzzy match
     * algorithm is used. The <code>Key</code> field (for example, the value of the
     * <code>Name</code> field) is split on certain punctuation characters, for
     * example, -, :, #, etc. into tokens. Then each token is exact-match compared with
     * the <code>Value</code> member of <code>PropertyPredicate</code>. For example, if
     * <code>Key=Name</code> and <code>Value=link</code>, tables named
     * <code>customer-link</code> and <code>xx-link-yy</code> are returned, but
     * <code>xxlinkyy</code> is not returned.</p>
     */
    inline const Aws::Vector<PropertyPredicate>& GetFilters() const{ return m_filters; }

    /**
     * <p>A list of key-value pairs, and a comparator used to filter the search
     * results. Returns all entities matching the predicate.</p> <p>The
     * <code>Comparator</code> member of the <code>PropertyPredicate</code> struct is
     * used only for time fields, and can be omitted for other field types. Also, when
     * comparing string values, such as when <code>Key=Name</code>, a fuzzy match
     * algorithm is used. The <code>Key</code> field (for example, the value of the
     * <code>Name</code> field) is split on certain punctuation characters, for
     * example, -, :, #, etc. into tokens. Then each token is exact-match compared with
     * the <code>Value</code> member of <code>PropertyPredicate</code>. For example, if
     * <code>Key=Name</code> and <code>Value=link</code>, tables named
     * <code>customer-link</code> and <code>xx-link-yy</code> are returned, but
     * <code>xxlinkyy</code> is not returned.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A list of key-value pairs, and a comparator used to filter the search
     * results. Returns all entities matching the predicate.</p> <p>The
     * <code>Comparator</code> member of the <code>PropertyPredicate</code> struct is
     * used only for time fields, and can be omitted for other field types. Also, when
     * comparing string values, such as when <code>Key=Name</code>, a fuzzy match
     * algorithm is used. The <code>Key</code> field (for example, the value of the
     * <code>Name</code> field) is split on certain punctuation characters, for
     * example, -, :, #, etc. into tokens. Then each token is exact-match compared with
     * the <code>Value</code> member of <code>PropertyPredicate</code>. For example, if
     * <code>Key=Name</code> and <code>Value=link</code>, tables named
     * <code>customer-link</code> and <code>xx-link-yy</code> are returned, but
     * <code>xxlinkyy</code> is not returned.</p>
     */
    inline void SetFilters(const Aws::Vector<PropertyPredicate>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A list of key-value pairs, and a comparator used to filter the search
     * results. Returns all entities matching the predicate.</p> <p>The
     * <code>Comparator</code> member of the <code>PropertyPredicate</code> struct is
     * used only for time fields, and can be omitted for other field types. Also, when
     * comparing string values, such as when <code>Key=Name</code>, a fuzzy match
     * algorithm is used. The <code>Key</code> field (for example, the value of the
     * <code>Name</code> field) is split on certain punctuation characters, for
     * example, -, :, #, etc. into tokens. Then each token is exact-match compared with
     * the <code>Value</code> member of <code>PropertyPredicate</code>. For example, if
     * <code>Key=Name</code> and <code>Value=link</code>, tables named
     * <code>customer-link</code> and <code>xx-link-yy</code> are returned, but
     * <code>xxlinkyy</code> is not returned.</p>
     */
    inline void SetFilters(Aws::Vector<PropertyPredicate>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A list of key-value pairs, and a comparator used to filter the search
     * results. Returns all entities matching the predicate.</p> <p>The
     * <code>Comparator</code> member of the <code>PropertyPredicate</code> struct is
     * used only for time fields, and can be omitted for other field types. Also, when
     * comparing string values, such as when <code>Key=Name</code>, a fuzzy match
     * algorithm is used. The <code>Key</code> field (for example, the value of the
     * <code>Name</code> field) is split on certain punctuation characters, for
     * example, -, :, #, etc. into tokens. Then each token is exact-match compared with
     * the <code>Value</code> member of <code>PropertyPredicate</code>. For example, if
     * <code>Key=Name</code> and <code>Value=link</code>, tables named
     * <code>customer-link</code> and <code>xx-link-yy</code> are returned, but
     * <code>xxlinkyy</code> is not returned.</p>
     */
    inline SearchTablesRequest& WithFilters(const Aws::Vector<PropertyPredicate>& value) { SetFilters(value); return *this;}

    /**
     * <p>A list of key-value pairs, and a comparator used to filter the search
     * results. Returns all entities matching the predicate.</p> <p>The
     * <code>Comparator</code> member of the <code>PropertyPredicate</code> struct is
     * used only for time fields, and can be omitted for other field types. Also, when
     * comparing string values, such as when <code>Key=Name</code>, a fuzzy match
     * algorithm is used. The <code>Key</code> field (for example, the value of the
     * <code>Name</code> field) is split on certain punctuation characters, for
     * example, -, :, #, etc. into tokens. Then each token is exact-match compared with
     * the <code>Value</code> member of <code>PropertyPredicate</code>. For example, if
     * <code>Key=Name</code> and <code>Value=link</code>, tables named
     * <code>customer-link</code> and <code>xx-link-yy</code> are returned, but
     * <code>xxlinkyy</code> is not returned.</p>
     */
    inline SearchTablesRequest& WithFilters(Aws::Vector<PropertyPredicate>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs, and a comparator used to filter the search
     * results. Returns all entities matching the predicate.</p> <p>The
     * <code>Comparator</code> member of the <code>PropertyPredicate</code> struct is
     * used only for time fields, and can be omitted for other field types. Also, when
     * comparing string values, such as when <code>Key=Name</code>, a fuzzy match
     * algorithm is used. The <code>Key</code> field (for example, the value of the
     * <code>Name</code> field) is split on certain punctuation characters, for
     * example, -, :, #, etc. into tokens. Then each token is exact-match compared with
     * the <code>Value</code> member of <code>PropertyPredicate</code>. For example, if
     * <code>Key=Name</code> and <code>Value=link</code>, tables named
     * <code>customer-link</code> and <code>xx-link-yy</code> are returned, but
     * <code>xxlinkyy</code> is not returned.</p>
     */
    inline SearchTablesRequest& AddFilters(const PropertyPredicate& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>A list of key-value pairs, and a comparator used to filter the search
     * results. Returns all entities matching the predicate.</p> <p>The
     * <code>Comparator</code> member of the <code>PropertyPredicate</code> struct is
     * used only for time fields, and can be omitted for other field types. Also, when
     * comparing string values, such as when <code>Key=Name</code>, a fuzzy match
     * algorithm is used. The <code>Key</code> field (for example, the value of the
     * <code>Name</code> field) is split on certain punctuation characters, for
     * example, -, :, #, etc. into tokens. Then each token is exact-match compared with
     * the <code>Value</code> member of <code>PropertyPredicate</code>. For example, if
     * <code>Key=Name</code> and <code>Value=link</code>, tables named
     * <code>customer-link</code> and <code>xx-link-yy</code> are returned, but
     * <code>xxlinkyy</code> is not returned.</p>
     */
    inline SearchTablesRequest& AddFilters(PropertyPredicate&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>A string used for a text search.</p> <p>Specifying a value in quotes filters
     * based on an exact match to the value.</p>
     */
    inline const Aws::String& GetSearchText() const{ return m_searchText; }

    /**
     * <p>A string used for a text search.</p> <p>Specifying a value in quotes filters
     * based on an exact match to the value.</p>
     */
    inline bool SearchTextHasBeenSet() const { return m_searchTextHasBeenSet; }

    /**
     * <p>A string used for a text search.</p> <p>Specifying a value in quotes filters
     * based on an exact match to the value.</p>
     */
    inline void SetSearchText(const Aws::String& value) { m_searchTextHasBeenSet = true; m_searchText = value; }

    /**
     * <p>A string used for a text search.</p> <p>Specifying a value in quotes filters
     * based on an exact match to the value.</p>
     */
    inline void SetSearchText(Aws::String&& value) { m_searchTextHasBeenSet = true; m_searchText = std::move(value); }

    /**
     * <p>A string used for a text search.</p> <p>Specifying a value in quotes filters
     * based on an exact match to the value.</p>
     */
    inline void SetSearchText(const char* value) { m_searchTextHasBeenSet = true; m_searchText.assign(value); }

    /**
     * <p>A string used for a text search.</p> <p>Specifying a value in quotes filters
     * based on an exact match to the value.</p>
     */
    inline SearchTablesRequest& WithSearchText(const Aws::String& value) { SetSearchText(value); return *this;}

    /**
     * <p>A string used for a text search.</p> <p>Specifying a value in quotes filters
     * based on an exact match to the value.</p>
     */
    inline SearchTablesRequest& WithSearchText(Aws::String&& value) { SetSearchText(std::move(value)); return *this;}

    /**
     * <p>A string used for a text search.</p> <p>Specifying a value in quotes filters
     * based on an exact match to the value.</p>
     */
    inline SearchTablesRequest& WithSearchText(const char* value) { SetSearchText(value); return *this;}


    /**
     * <p>A list of criteria for sorting the results by a field name, in an ascending
     * or descending order.</p>
     */
    inline const Aws::Vector<SortCriterion>& GetSortCriteria() const{ return m_sortCriteria; }

    /**
     * <p>A list of criteria for sorting the results by a field name, in an ascending
     * or descending order.</p>
     */
    inline bool SortCriteriaHasBeenSet() const { return m_sortCriteriaHasBeenSet; }

    /**
     * <p>A list of criteria for sorting the results by a field name, in an ascending
     * or descending order.</p>
     */
    inline void SetSortCriteria(const Aws::Vector<SortCriterion>& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = value; }

    /**
     * <p>A list of criteria for sorting the results by a field name, in an ascending
     * or descending order.</p>
     */
    inline void SetSortCriteria(Aws::Vector<SortCriterion>&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = std::move(value); }

    /**
     * <p>A list of criteria for sorting the results by a field name, in an ascending
     * or descending order.</p>
     */
    inline SearchTablesRequest& WithSortCriteria(const Aws::Vector<SortCriterion>& value) { SetSortCriteria(value); return *this;}

    /**
     * <p>A list of criteria for sorting the results by a field name, in an ascending
     * or descending order.</p>
     */
    inline SearchTablesRequest& WithSortCriteria(Aws::Vector<SortCriterion>&& value) { SetSortCriteria(std::move(value)); return *this;}

    /**
     * <p>A list of criteria for sorting the results by a field name, in an ascending
     * or descending order.</p>
     */
    inline SearchTablesRequest& AddSortCriteria(const SortCriterion& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria.push_back(value); return *this; }

    /**
     * <p>A list of criteria for sorting the results by a field name, in an ascending
     * or descending order.</p>
     */
    inline SearchTablesRequest& AddSortCriteria(SortCriterion&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of tables to return in a single response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of tables to return in a single response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of tables to return in a single response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of tables to return in a single response.</p>
     */
    inline SearchTablesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Allows you to specify that you want to search the tables shared with your
     * account. The allowable values are <code>FOREIGN</code> or <code>ALL</code>. </p>
     * <ul> <li> <p>If set to <code>FOREIGN</code>, will search the tables shared with
     * your account. </p> </li> <li> <p>If set to <code>ALL</code>, will search the
     * tables shared with your account, as well as the tables in yor local account.
     * </p> </li> </ul>
     */
    inline const ResourceShareType& GetResourceShareType() const{ return m_resourceShareType; }

    /**
     * <p>Allows you to specify that you want to search the tables shared with your
     * account. The allowable values are <code>FOREIGN</code> or <code>ALL</code>. </p>
     * <ul> <li> <p>If set to <code>FOREIGN</code>, will search the tables shared with
     * your account. </p> </li> <li> <p>If set to <code>ALL</code>, will search the
     * tables shared with your account, as well as the tables in yor local account.
     * </p> </li> </ul>
     */
    inline bool ResourceShareTypeHasBeenSet() const { return m_resourceShareTypeHasBeenSet; }

    /**
     * <p>Allows you to specify that you want to search the tables shared with your
     * account. The allowable values are <code>FOREIGN</code> or <code>ALL</code>. </p>
     * <ul> <li> <p>If set to <code>FOREIGN</code>, will search the tables shared with
     * your account. </p> </li> <li> <p>If set to <code>ALL</code>, will search the
     * tables shared with your account, as well as the tables in yor local account.
     * </p> </li> </ul>
     */
    inline void SetResourceShareType(const ResourceShareType& value) { m_resourceShareTypeHasBeenSet = true; m_resourceShareType = value; }

    /**
     * <p>Allows you to specify that you want to search the tables shared with your
     * account. The allowable values are <code>FOREIGN</code> or <code>ALL</code>. </p>
     * <ul> <li> <p>If set to <code>FOREIGN</code>, will search the tables shared with
     * your account. </p> </li> <li> <p>If set to <code>ALL</code>, will search the
     * tables shared with your account, as well as the tables in yor local account.
     * </p> </li> </ul>
     */
    inline void SetResourceShareType(ResourceShareType&& value) { m_resourceShareTypeHasBeenSet = true; m_resourceShareType = std::move(value); }

    /**
     * <p>Allows you to specify that you want to search the tables shared with your
     * account. The allowable values are <code>FOREIGN</code> or <code>ALL</code>. </p>
     * <ul> <li> <p>If set to <code>FOREIGN</code>, will search the tables shared with
     * your account. </p> </li> <li> <p>If set to <code>ALL</code>, will search the
     * tables shared with your account, as well as the tables in yor local account.
     * </p> </li> </ul>
     */
    inline SearchTablesRequest& WithResourceShareType(const ResourceShareType& value) { SetResourceShareType(value); return *this;}

    /**
     * <p>Allows you to specify that you want to search the tables shared with your
     * account. The allowable values are <code>FOREIGN</code> or <code>ALL</code>. </p>
     * <ul> <li> <p>If set to <code>FOREIGN</code>, will search the tables shared with
     * your account. </p> </li> <li> <p>If set to <code>ALL</code>, will search the
     * tables shared with your account, as well as the tables in yor local account.
     * </p> </li> </ul>
     */
    inline SearchTablesRequest& WithResourceShareType(ResourceShareType&& value) { SetResourceShareType(std::move(value)); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<PropertyPredicate> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_searchText;
    bool m_searchTextHasBeenSet = false;

    Aws::Vector<SortCriterion> m_sortCriteria;
    bool m_sortCriteriaHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    ResourceShareType m_resourceShareType;
    bool m_resourceShareTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
