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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProductViewSummary.h>
#include <aws/servicecatalog/model/ProductViewAggregationValue.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class AWS_SERVICECATALOG_API SearchProductsResult
  {
  public:
    SearchProductsResult();
    SearchProductsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SearchProductsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the product views.</p>
     */
    inline const Aws::Vector<ProductViewSummary>& GetProductViewSummaries() const{ return m_productViewSummaries; }

    /**
     * <p>Information about the product views.</p>
     */
    inline void SetProductViewSummaries(const Aws::Vector<ProductViewSummary>& value) { m_productViewSummaries = value; }

    /**
     * <p>Information about the product views.</p>
     */
    inline void SetProductViewSummaries(Aws::Vector<ProductViewSummary>&& value) { m_productViewSummaries = std::move(value); }

    /**
     * <p>Information about the product views.</p>
     */
    inline SearchProductsResult& WithProductViewSummaries(const Aws::Vector<ProductViewSummary>& value) { SetProductViewSummaries(value); return *this;}

    /**
     * <p>Information about the product views.</p>
     */
    inline SearchProductsResult& WithProductViewSummaries(Aws::Vector<ProductViewSummary>&& value) { SetProductViewSummaries(std::move(value)); return *this;}

    /**
     * <p>Information about the product views.</p>
     */
    inline SearchProductsResult& AddProductViewSummaries(const ProductViewSummary& value) { m_productViewSummaries.push_back(value); return *this; }

    /**
     * <p>Information about the product views.</p>
     */
    inline SearchProductsResult& AddProductViewSummaries(ProductViewSummary&& value) { m_productViewSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The product view aggregations.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<ProductViewAggregationValue>>& GetProductViewAggregations() const{ return m_productViewAggregations; }

    /**
     * <p>The product view aggregations.</p>
     */
    inline void SetProductViewAggregations(const Aws::Map<Aws::String, Aws::Vector<ProductViewAggregationValue>>& value) { m_productViewAggregations = value; }

    /**
     * <p>The product view aggregations.</p>
     */
    inline void SetProductViewAggregations(Aws::Map<Aws::String, Aws::Vector<ProductViewAggregationValue>>&& value) { m_productViewAggregations = std::move(value); }

    /**
     * <p>The product view aggregations.</p>
     */
    inline SearchProductsResult& WithProductViewAggregations(const Aws::Map<Aws::String, Aws::Vector<ProductViewAggregationValue>>& value) { SetProductViewAggregations(value); return *this;}

    /**
     * <p>The product view aggregations.</p>
     */
    inline SearchProductsResult& WithProductViewAggregations(Aws::Map<Aws::String, Aws::Vector<ProductViewAggregationValue>>&& value) { SetProductViewAggregations(std::move(value)); return *this;}

    /**
     * <p>The product view aggregations.</p>
     */
    inline SearchProductsResult& AddProductViewAggregations(const Aws::String& key, const Aws::Vector<ProductViewAggregationValue>& value) { m_productViewAggregations.emplace(key, value); return *this; }

    /**
     * <p>The product view aggregations.</p>
     */
    inline SearchProductsResult& AddProductViewAggregations(Aws::String&& key, const Aws::Vector<ProductViewAggregationValue>& value) { m_productViewAggregations.emplace(std::move(key), value); return *this; }

    /**
     * <p>The product view aggregations.</p>
     */
    inline SearchProductsResult& AddProductViewAggregations(const Aws::String& key, Aws::Vector<ProductViewAggregationValue>&& value) { m_productViewAggregations.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The product view aggregations.</p>
     */
    inline SearchProductsResult& AddProductViewAggregations(Aws::String&& key, Aws::Vector<ProductViewAggregationValue>&& value) { m_productViewAggregations.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The product view aggregations.</p>
     */
    inline SearchProductsResult& AddProductViewAggregations(const char* key, Aws::Vector<ProductViewAggregationValue>&& value) { m_productViewAggregations.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The product view aggregations.</p>
     */
    inline SearchProductsResult& AddProductViewAggregations(const char* key, const Aws::Vector<ProductViewAggregationValue>& value) { m_productViewAggregations.emplace(key, value); return *this; }


    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline SearchProductsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline SearchProductsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline SearchProductsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<ProductViewSummary> m_productViewSummaries;

    Aws::Map<Aws::String, Aws::Vector<ProductViewAggregationValue>> m_productViewAggregations;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
