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
#include <aws/pricing/Pricing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Pricing
{
namespace Model
{
  class AWS_PRICING_API GetProductsResult
  {
  public:
    GetProductsResult();
    GetProductsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetProductsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The format version of the response. For example, aws_v1.</p>
     */
    inline const Aws::String& GetFormatVersion() const{ return m_formatVersion; }

    /**
     * <p>The format version of the response. For example, aws_v1.</p>
     */
    inline void SetFormatVersion(const Aws::String& value) { m_formatVersion = value; }

    /**
     * <p>The format version of the response. For example, aws_v1.</p>
     */
    inline void SetFormatVersion(Aws::String&& value) { m_formatVersion = std::move(value); }

    /**
     * <p>The format version of the response. For example, aws_v1.</p>
     */
    inline void SetFormatVersion(const char* value) { m_formatVersion.assign(value); }

    /**
     * <p>The format version of the response. For example, aws_v1.</p>
     */
    inline GetProductsResult& WithFormatVersion(const Aws::String& value) { SetFormatVersion(value); return *this;}

    /**
     * <p>The format version of the response. For example, aws_v1.</p>
     */
    inline GetProductsResult& WithFormatVersion(Aws::String&& value) { SetFormatVersion(std::move(value)); return *this;}

    /**
     * <p>The format version of the response. For example, aws_v1.</p>
     */
    inline GetProductsResult& WithFormatVersion(const char* value) { SetFormatVersion(value); return *this;}


    /**
     * <p>The list of products that match your filters. The list contains both the
     * product metadata and the price information.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPriceList() const{ return m_priceList; }

    /**
     * <p>The list of products that match your filters. The list contains both the
     * product metadata and the price information.</p>
     */
    inline void SetPriceList(const Aws::Vector<Aws::String>& value) { m_priceList = value; }

    /**
     * <p>The list of products that match your filters. The list contains both the
     * product metadata and the price information.</p>
     */
    inline void SetPriceList(Aws::Vector<Aws::String>&& value) { m_priceList = std::move(value); }

    /**
     * <p>The list of products that match your filters. The list contains both the
     * product metadata and the price information.</p>
     */
    inline GetProductsResult& WithPriceList(const Aws::Vector<Aws::String>& value) { SetPriceList(value); return *this;}

    /**
     * <p>The list of products that match your filters. The list contains both the
     * product metadata and the price information.</p>
     */
    inline GetProductsResult& WithPriceList(Aws::Vector<Aws::String>&& value) { SetPriceList(std::move(value)); return *this;}

    /**
     * <p>The list of products that match your filters. The list contains both the
     * product metadata and the price information.</p>
     */
    inline GetProductsResult& AddPriceList(const Aws::String& value) { m_priceList.push_back(value); return *this; }

    /**
     * <p>The list of products that match your filters. The list contains both the
     * product metadata and the price information.</p>
     */
    inline GetProductsResult& AddPriceList(Aws::String&& value) { m_priceList.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of products that match your filters. The list contains both the
     * product metadata and the price information.</p>
     */
    inline GetProductsResult& AddPriceList(const char* value) { m_priceList.push_back(value); return *this; }


    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline GetProductsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline GetProductsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline GetProductsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_formatVersion;

    Aws::Vector<Aws::String> m_priceList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Pricing
} // namespace Aws
