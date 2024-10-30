/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/model/GeocodeResultItem.h>
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
  class GeocodeResult
  {
  public:
    AWS_GEOPLACES_API GeocodeResult();
    AWS_GEOPLACES_API GeocodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GEOPLACES_API GeocodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GeocodeResult& WithPricingBucket(const Aws::String& value) { SetPricingBucket(value); return *this;}
    inline GeocodeResult& WithPricingBucket(Aws::String&& value) { SetPricingBucket(std::move(value)); return *this;}
    inline GeocodeResult& WithPricingBucket(const char* value) { SetPricingBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of places or results returned for a query. </p>
     */
    inline const Aws::Vector<GeocodeResultItem>& GetResultItems() const{ return m_resultItems; }
    inline void SetResultItems(const Aws::Vector<GeocodeResultItem>& value) { m_resultItems = value; }
    inline void SetResultItems(Aws::Vector<GeocodeResultItem>&& value) { m_resultItems = std::move(value); }
    inline GeocodeResult& WithResultItems(const Aws::Vector<GeocodeResultItem>& value) { SetResultItems(value); return *this;}
    inline GeocodeResult& WithResultItems(Aws::Vector<GeocodeResultItem>&& value) { SetResultItems(std::move(value)); return *this;}
    inline GeocodeResult& AddResultItems(const GeocodeResultItem& value) { m_resultItems.push_back(value); return *this; }
    inline GeocodeResult& AddResultItems(GeocodeResultItem&& value) { m_resultItems.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GeocodeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GeocodeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GeocodeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_pricingBucket;

    Aws::Vector<GeocodeResultItem> m_resultItems;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
