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
    AWS_GEOPLACES_API SuggestResult();
    AWS_GEOPLACES_API SuggestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GEOPLACES_API SuggestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline SuggestResult& WithPricingBucket(const Aws::String& value) { SetPricingBucket(value); return *this;}
    inline SuggestResult& WithPricingBucket(Aws::String&& value) { SetPricingBucket(std::move(value)); return *this;}
    inline SuggestResult& WithPricingBucket(const char* value) { SetPricingBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of places or results returned for a query. </p>
     */
    inline const Aws::Vector<SuggestResultItem>& GetResultItems() const{ return m_resultItems; }
    inline void SetResultItems(const Aws::Vector<SuggestResultItem>& value) { m_resultItems = value; }
    inline void SetResultItems(Aws::Vector<SuggestResultItem>&& value) { m_resultItems = std::move(value); }
    inline SuggestResult& WithResultItems(const Aws::Vector<SuggestResultItem>& value) { SetResultItems(value); return *this;}
    inline SuggestResult& WithResultItems(Aws::Vector<SuggestResultItem>&& value) { SetResultItems(std::move(value)); return *this;}
    inline SuggestResult& AddResultItems(const SuggestResultItem& value) { m_resultItems.push_back(value); return *this; }
    inline SuggestResult& AddResultItems(SuggestResultItem&& value) { m_resultItems.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Maximum number of query terms to be returned for use with a search text
     * query.</p>
     */
    inline const Aws::Vector<QueryRefinement>& GetQueryRefinements() const{ return m_queryRefinements; }
    inline void SetQueryRefinements(const Aws::Vector<QueryRefinement>& value) { m_queryRefinements = value; }
    inline void SetQueryRefinements(Aws::Vector<QueryRefinement>&& value) { m_queryRefinements = std::move(value); }
    inline SuggestResult& WithQueryRefinements(const Aws::Vector<QueryRefinement>& value) { SetQueryRefinements(value); return *this;}
    inline SuggestResult& WithQueryRefinements(Aws::Vector<QueryRefinement>&& value) { SetQueryRefinements(std::move(value)); return *this;}
    inline SuggestResult& AddQueryRefinements(const QueryRefinement& value) { m_queryRefinements.push_back(value); return *this; }
    inline SuggestResult& AddQueryRefinements(QueryRefinement&& value) { m_queryRefinements.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SuggestResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SuggestResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SuggestResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_pricingBucket;

    Aws::Vector<SuggestResultItem> m_resultItems;

    Aws::Vector<QueryRefinement> m_queryRefinements;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
