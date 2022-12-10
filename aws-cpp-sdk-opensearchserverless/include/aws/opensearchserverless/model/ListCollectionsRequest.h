/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/OpenSearchServerlessRequest.h>
#include <aws/opensearchserverless/model/CollectionFilters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{

  /**
   */
  class ListCollectionsRequest : public OpenSearchServerlessRequest
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API ListCollectionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCollections"; }

    AWS_OPENSEARCHSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_OPENSEARCHSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>List of filter names and values that you can use for requests.</p>
     */
    inline const CollectionFilters& GetCollectionFilters() const{ return m_collectionFilters; }

    /**
     * <p>List of filter names and values that you can use for requests.</p>
     */
    inline bool CollectionFiltersHasBeenSet() const { return m_collectionFiltersHasBeenSet; }

    /**
     * <p>List of filter names and values that you can use for requests.</p>
     */
    inline void SetCollectionFilters(const CollectionFilters& value) { m_collectionFiltersHasBeenSet = true; m_collectionFilters = value; }

    /**
     * <p>List of filter names and values that you can use for requests.</p>
     */
    inline void SetCollectionFilters(CollectionFilters&& value) { m_collectionFiltersHasBeenSet = true; m_collectionFilters = std::move(value); }

    /**
     * <p>List of filter names and values that you can use for requests.</p>
     */
    inline ListCollectionsRequest& WithCollectionFilters(const CollectionFilters& value) { SetCollectionFilters(value); return *this;}

    /**
     * <p>List of filter names and values that you can use for requests.</p>
     */
    inline ListCollectionsRequest& WithCollectionFilters(CollectionFilters&& value) { SetCollectionFilters(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results to return. Default is 20. You can use
     * <code>nextToken</code> to get the next page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return. Default is 20. You can use
     * <code>nextToken</code> to get the next page of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return. Default is 20. You can use
     * <code>nextToken</code> to get the next page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return. Default is 20. You can use
     * <code>nextToken</code> to get the next page of results.</p>
     */
    inline ListCollectionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If your initial <code>ListCollections</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListCollections</code> operations, which returns results in the
     * next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If your initial <code>ListCollections</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListCollections</code> operations, which returns results in the
     * next page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If your initial <code>ListCollections</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListCollections</code> operations, which returns results in the
     * next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If your initial <code>ListCollections</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListCollections</code> operations, which returns results in the
     * next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If your initial <code>ListCollections</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListCollections</code> operations, which returns results in the
     * next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If your initial <code>ListCollections</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListCollections</code> operations, which returns results in the
     * next page.</p>
     */
    inline ListCollectionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If your initial <code>ListCollections</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListCollections</code> operations, which returns results in the
     * next page.</p>
     */
    inline ListCollectionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If your initial <code>ListCollections</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListCollections</code> operations, which returns results in the
     * next page.</p>
     */
    inline ListCollectionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    CollectionFilters m_collectionFilters;
    bool m_collectionFiltersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
