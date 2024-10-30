/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/model/SearchNearbyResultItem.h>
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
namespace GeoPlaces
{
namespace Model
{
  class SearchNearbyResult
  {
  public:
    AWS_GEOPLACES_API SearchNearbyResult();
    AWS_GEOPLACES_API SearchNearbyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GEOPLACES_API SearchNearbyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pricing bucket for which the query is charged at.</p> <p>For more
     * inforamtion on pricing, please visit <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service
     * Pricing</a>.</p>
     */
    inline const Aws::String& GetPricingBucket() const{ return m_pricingBucket; }
    inline void SetPricingBucket(const Aws::String& value) { m_pricingBucket = value; }
    inline void SetPricingBucket(Aws::String&& value) { m_pricingBucket = std::move(value); }
    inline void SetPricingBucket(const char* value) { m_pricingBucket.assign(value); }
    inline SearchNearbyResult& WithPricingBucket(const Aws::String& value) { SetPricingBucket(value); return *this;}
    inline SearchNearbyResult& WithPricingBucket(Aws::String&& value) { SetPricingBucket(std::move(value)); return *this;}
    inline SearchNearbyResult& WithPricingBucket(const char* value) { SetPricingBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of places or results returned for a query. </p>
     */
    inline const Aws::Vector<SearchNearbyResultItem>& GetResultItems() const{ return m_resultItems; }
    inline void SetResultItems(const Aws::Vector<SearchNearbyResultItem>& value) { m_resultItems = value; }
    inline void SetResultItems(Aws::Vector<SearchNearbyResultItem>&& value) { m_resultItems = std::move(value); }
    inline SearchNearbyResult& WithResultItems(const Aws::Vector<SearchNearbyResultItem>& value) { SetResultItems(value); return *this;}
    inline SearchNearbyResult& WithResultItems(Aws::Vector<SearchNearbyResultItem>&& value) { SetResultItems(std::move(value)); return *this;}
    inline SearchNearbyResult& AddResultItems(const SearchNearbyResultItem& value) { m_resultItems.push_back(value); return *this; }
    inline SearchNearbyResult& AddResultItems(SearchNearbyResultItem&& value) { m_resultItems.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline SearchNearbyResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchNearbyResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchNearbyResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchNearbyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchNearbyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchNearbyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_pricingBucket;

    Aws::Vector<SearchNearbyResultItem> m_resultItems;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
