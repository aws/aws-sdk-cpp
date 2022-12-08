/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/CollectionSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace OpenSearchServerless
{
namespace Model
{
  class ListCollectionsResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API ListCollectionsResult();
    AWS_OPENSEARCHSERVERLESS_API ListCollectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API ListCollectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about each collection.</p>
     */
    inline const Aws::Vector<CollectionSummary>& GetCollectionSummaries() const{ return m_collectionSummaries; }

    /**
     * <p>Details about each collection.</p>
     */
    inline void SetCollectionSummaries(const Aws::Vector<CollectionSummary>& value) { m_collectionSummaries = value; }

    /**
     * <p>Details about each collection.</p>
     */
    inline void SetCollectionSummaries(Aws::Vector<CollectionSummary>&& value) { m_collectionSummaries = std::move(value); }

    /**
     * <p>Details about each collection.</p>
     */
    inline ListCollectionsResult& WithCollectionSummaries(const Aws::Vector<CollectionSummary>& value) { SetCollectionSummaries(value); return *this;}

    /**
     * <p>Details about each collection.</p>
     */
    inline ListCollectionsResult& WithCollectionSummaries(Aws::Vector<CollectionSummary>&& value) { SetCollectionSummaries(std::move(value)); return *this;}

    /**
     * <p>Details about each collection.</p>
     */
    inline ListCollectionsResult& AddCollectionSummaries(const CollectionSummary& value) { m_collectionSummaries.push_back(value); return *this; }

    /**
     * <p>Details about each collection.</p>
     */
    inline ListCollectionsResult& AddCollectionSummaries(CollectionSummary&& value) { m_collectionSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListCollectionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListCollectionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListCollectionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CollectionSummary> m_collectionSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
