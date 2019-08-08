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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_GLUE_API SearchTablesRequest : public GlueRequest
  {
  public:
    SearchTablesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchTables"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier, consisting of <code>
     * <i>account_id</i>/datalake</code>.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>A unique identifier, consisting of <code>
     * <i>account_id</i>/datalake</code>.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>A unique identifier, consisting of <code>
     * <i>account_id</i>/datalake</code>.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>A unique identifier, consisting of <code>
     * <i>account_id</i>/datalake</code>.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>A unique identifier, consisting of <code>
     * <i>account_id</i>/datalake</code>.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>A unique identifier, consisting of <code>
     * <i>account_id</i>/datalake</code>.</p>
     */
    inline SearchTablesRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>A unique identifier, consisting of <code>
     * <i>account_id</i>/datalake</code>.</p>
     */
    inline SearchTablesRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier, consisting of <code>
     * <i>account_id</i>/datalake</code>.</p>
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
     * results. Returns all entities matching the predicate.</p>
     */
    inline const Aws::Vector<PropertyPredicate>& GetFilters() const{ return m_filters; }

    /**
     * <p>A list of key-value pairs, and a comparator used to filter the search
     * results. Returns all entities matching the predicate.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A list of key-value pairs, and a comparator used to filter the search
     * results. Returns all entities matching the predicate.</p>
     */
    inline void SetFilters(const Aws::Vector<PropertyPredicate>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A list of key-value pairs, and a comparator used to filter the search
     * results. Returns all entities matching the predicate.</p>
     */
    inline void SetFilters(Aws::Vector<PropertyPredicate>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A list of key-value pairs, and a comparator used to filter the search
     * results. Returns all entities matching the predicate.</p>
     */
    inline SearchTablesRequest& WithFilters(const Aws::Vector<PropertyPredicate>& value) { SetFilters(value); return *this;}

    /**
     * <p>A list of key-value pairs, and a comparator used to filter the search
     * results. Returns all entities matching the predicate.</p>
     */
    inline SearchTablesRequest& WithFilters(Aws::Vector<PropertyPredicate>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs, and a comparator used to filter the search
     * results. Returns all entities matching the predicate.</p>
     */
    inline SearchTablesRequest& AddFilters(const PropertyPredicate& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>A list of key-value pairs, and a comparator used to filter the search
     * results. Returns all entities matching the predicate.</p>
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

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::Vector<PropertyPredicate> m_filters;
    bool m_filtersHasBeenSet;

    Aws::String m_searchText;
    bool m_searchTextHasBeenSet;

    Aws::Vector<SortCriterion> m_sortCriteria;
    bool m_sortCriteriaHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
