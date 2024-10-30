/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/model/AutocompleteResultItem.h>
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
  class AutocompleteResult
  {
  public:
    AWS_GEOPLACES_API AutocompleteResult();
    AWS_GEOPLACES_API AutocompleteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GEOPLACES_API AutocompleteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline AutocompleteResult& WithPricingBucket(const Aws::String& value) { SetPricingBucket(value); return *this;}
    inline AutocompleteResult& WithPricingBucket(Aws::String&& value) { SetPricingBucket(std::move(value)); return *this;}
    inline AutocompleteResult& WithPricingBucket(const char* value) { SetPricingBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of places or results returned for a query. </p>
     */
    inline const Aws::Vector<AutocompleteResultItem>& GetResultItems() const{ return m_resultItems; }
    inline void SetResultItems(const Aws::Vector<AutocompleteResultItem>& value) { m_resultItems = value; }
    inline void SetResultItems(Aws::Vector<AutocompleteResultItem>&& value) { m_resultItems = std::move(value); }
    inline AutocompleteResult& WithResultItems(const Aws::Vector<AutocompleteResultItem>& value) { SetResultItems(value); return *this;}
    inline AutocompleteResult& WithResultItems(Aws::Vector<AutocompleteResultItem>&& value) { SetResultItems(std::move(value)); return *this;}
    inline AutocompleteResult& AddResultItems(const AutocompleteResultItem& value) { m_resultItems.push_back(value); return *this; }
    inline AutocompleteResult& AddResultItems(AutocompleteResultItem&& value) { m_resultItems.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AutocompleteResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AutocompleteResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AutocompleteResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_pricingBucket;

    Aws::Vector<AutocompleteResultItem> m_resultItems;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
