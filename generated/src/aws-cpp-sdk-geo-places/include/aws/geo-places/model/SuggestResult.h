/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/model/SuggestResultItem.h>
#include <aws/geo-places/model/QueryRefinement.h>
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
  class SuggestResult
  {
  public:
    AWS_GEOPLACES_API SuggestResult() = default;
    AWS_GEOPLACES_API SuggestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GEOPLACES_API SuggestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    SuggestResult& WithPricingBucket(PricingBucketT&& value) { SetPricingBucket(std::forward<PricingBucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of places or results returned for a query. </p>
     */
    inline const Aws::Vector<SuggestResultItem>& GetResultItems() const { return m_resultItems; }
    template<typename ResultItemsT = Aws::Vector<SuggestResultItem>>
    void SetResultItems(ResultItemsT&& value) { m_resultItemsHasBeenSet = true; m_resultItems = std::forward<ResultItemsT>(value); }
    template<typename ResultItemsT = Aws::Vector<SuggestResultItem>>
    SuggestResult& WithResultItems(ResultItemsT&& value) { SetResultItems(std::forward<ResultItemsT>(value)); return *this;}
    template<typename ResultItemsT = SuggestResultItem>
    SuggestResult& AddResultItems(ResultItemsT&& value) { m_resultItemsHasBeenSet = true; m_resultItems.emplace_back(std::forward<ResultItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Maximum number of query terms to be returned for use with a search text
     * query.</p>
     */
    inline const Aws::Vector<QueryRefinement>& GetQueryRefinements() const { return m_queryRefinements; }
    template<typename QueryRefinementsT = Aws::Vector<QueryRefinement>>
    void SetQueryRefinements(QueryRefinementsT&& value) { m_queryRefinementsHasBeenSet = true; m_queryRefinements = std::forward<QueryRefinementsT>(value); }
    template<typename QueryRefinementsT = Aws::Vector<QueryRefinement>>
    SuggestResult& WithQueryRefinements(QueryRefinementsT&& value) { SetQueryRefinements(std::forward<QueryRefinementsT>(value)); return *this;}
    template<typename QueryRefinementsT = QueryRefinement>
    SuggestResult& AddQueryRefinements(QueryRefinementsT&& value) { m_queryRefinementsHasBeenSet = true; m_queryRefinements.emplace_back(std::forward<QueryRefinementsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SuggestResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pricingBucket;
    bool m_pricingBucketHasBeenSet = false;

    Aws::Vector<SuggestResultItem> m_resultItems;
    bool m_resultItemsHasBeenSet = false;

    Aws::Vector<QueryRefinement> m_queryRefinements;
    bool m_queryRefinementsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
