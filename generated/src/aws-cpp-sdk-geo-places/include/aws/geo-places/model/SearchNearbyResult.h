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
    AWS_GEOPLACES_API SearchNearbyResult() = default;
    AWS_GEOPLACES_API SearchNearbyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GEOPLACES_API SearchNearbyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pricing bucket for which the query is charged at.</p> <p>For more
     * information on pricing, please visit <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service
     * Pricing</a>.</p>
     */
    inline const Aws::String& GetPricingBucket() const { return m_pricingBucket; }
    template<typename PricingBucketT = Aws::String>
    void SetPricingBucket(PricingBucketT&& value) { m_pricingBucketHasBeenSet = true; m_pricingBucket = std::forward<PricingBucketT>(value); }
    template<typename PricingBucketT = Aws::String>
    SearchNearbyResult& WithPricingBucket(PricingBucketT&& value) { SetPricingBucket(std::forward<PricingBucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of places or results returned for a query. </p>
     */
    inline const Aws::Vector<SearchNearbyResultItem>& GetResultItems() const { return m_resultItems; }
    template<typename ResultItemsT = Aws::Vector<SearchNearbyResultItem>>
    void SetResultItems(ResultItemsT&& value) { m_resultItemsHasBeenSet = true; m_resultItems = std::forward<ResultItemsT>(value); }
    template<typename ResultItemsT = Aws::Vector<SearchNearbyResultItem>>
    SearchNearbyResult& WithResultItems(ResultItemsT&& value) { SetResultItems(std::forward<ResultItemsT>(value)); return *this;}
    template<typename ResultItemsT = SearchNearbyResultItem>
    SearchNearbyResult& AddResultItems(ResultItemsT&& value) { m_resultItemsHasBeenSet = true; m_resultItems.emplace_back(std::forward<ResultItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchNearbyResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchNearbyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pricingBucket;
    bool m_pricingBucketHasBeenSet = false;

    Aws::Vector<SearchNearbyResultItem> m_resultItems;
    bool m_resultItemsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
