/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/FeaturedResultsSetSummary.h>
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
namespace kendra
{
namespace Model
{
  class ListFeaturedResultsSetsResult
  {
  public:
    AWS_KENDRA_API ListFeaturedResultsSetsResult();
    AWS_KENDRA_API ListFeaturedResultsSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API ListFeaturedResultsSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of summary information for one or more featured results sets.</p>
     */
    inline const Aws::Vector<FeaturedResultsSetSummary>& GetFeaturedResultsSetSummaryItems() const{ return m_featuredResultsSetSummaryItems; }

    /**
     * <p>An array of summary information for one or more featured results sets.</p>
     */
    inline void SetFeaturedResultsSetSummaryItems(const Aws::Vector<FeaturedResultsSetSummary>& value) { m_featuredResultsSetSummaryItems = value; }

    /**
     * <p>An array of summary information for one or more featured results sets.</p>
     */
    inline void SetFeaturedResultsSetSummaryItems(Aws::Vector<FeaturedResultsSetSummary>&& value) { m_featuredResultsSetSummaryItems = std::move(value); }

    /**
     * <p>An array of summary information for one or more featured results sets.</p>
     */
    inline ListFeaturedResultsSetsResult& WithFeaturedResultsSetSummaryItems(const Aws::Vector<FeaturedResultsSetSummary>& value) { SetFeaturedResultsSetSummaryItems(value); return *this;}

    /**
     * <p>An array of summary information for one or more featured results sets.</p>
     */
    inline ListFeaturedResultsSetsResult& WithFeaturedResultsSetSummaryItems(Aws::Vector<FeaturedResultsSetSummary>&& value) { SetFeaturedResultsSetSummaryItems(std::move(value)); return *this;}

    /**
     * <p>An array of summary information for one or more featured results sets.</p>
     */
    inline ListFeaturedResultsSetsResult& AddFeaturedResultsSetSummaryItems(const FeaturedResultsSetSummary& value) { m_featuredResultsSetSummaryItems.push_back(value); return *this; }

    /**
     * <p>An array of summary information for one or more featured results sets.</p>
     */
    inline ListFeaturedResultsSetsResult& AddFeaturedResultsSetSummaryItems(FeaturedResultsSetSummary&& value) { m_featuredResultsSetSummaryItems.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon Kendra returns a pagination token in the
     * response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Kendra returns a pagination token in the
     * response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Kendra returns a pagination token in the
     * response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Kendra returns a pagination token in the
     * response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Kendra returns a pagination token in the
     * response.</p>
     */
    inline ListFeaturedResultsSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Kendra returns a pagination token in the
     * response.</p>
     */
    inline ListFeaturedResultsSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Kendra returns a pagination token in the
     * response.</p>
     */
    inline ListFeaturedResultsSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListFeaturedResultsSetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListFeaturedResultsSetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListFeaturedResultsSetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<FeaturedResultsSetSummary> m_featuredResultsSetSummaryItems;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
