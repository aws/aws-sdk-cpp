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
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/es/model/ReservedElasticsearchInstanceOffering.h>
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
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p>Container for results from
   * <code>DescribeReservedElasticsearchInstanceOfferings</code></p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeReservedElasticsearchInstanceOfferingsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API DescribeReservedElasticsearchInstanceOfferingsResult
  {
  public:
    DescribeReservedElasticsearchInstanceOfferingsResult();
    DescribeReservedElasticsearchInstanceOfferingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeReservedElasticsearchInstanceOfferingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeReservedElasticsearchInstanceOfferingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeReservedElasticsearchInstanceOfferingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeReservedElasticsearchInstanceOfferingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>List of reserved Elasticsearch instance offerings</p>
     */
    inline const Aws::Vector<ReservedElasticsearchInstanceOffering>& GetReservedElasticsearchInstanceOfferings() const{ return m_reservedElasticsearchInstanceOfferings; }

    /**
     * <p>List of reserved Elasticsearch instance offerings</p>
     */
    inline void SetReservedElasticsearchInstanceOfferings(const Aws::Vector<ReservedElasticsearchInstanceOffering>& value) { m_reservedElasticsearchInstanceOfferings = value; }

    /**
     * <p>List of reserved Elasticsearch instance offerings</p>
     */
    inline void SetReservedElasticsearchInstanceOfferings(Aws::Vector<ReservedElasticsearchInstanceOffering>&& value) { m_reservedElasticsearchInstanceOfferings = std::move(value); }

    /**
     * <p>List of reserved Elasticsearch instance offerings</p>
     */
    inline DescribeReservedElasticsearchInstanceOfferingsResult& WithReservedElasticsearchInstanceOfferings(const Aws::Vector<ReservedElasticsearchInstanceOffering>& value) { SetReservedElasticsearchInstanceOfferings(value); return *this;}

    /**
     * <p>List of reserved Elasticsearch instance offerings</p>
     */
    inline DescribeReservedElasticsearchInstanceOfferingsResult& WithReservedElasticsearchInstanceOfferings(Aws::Vector<ReservedElasticsearchInstanceOffering>&& value) { SetReservedElasticsearchInstanceOfferings(std::move(value)); return *this;}

    /**
     * <p>List of reserved Elasticsearch instance offerings</p>
     */
    inline DescribeReservedElasticsearchInstanceOfferingsResult& AddReservedElasticsearchInstanceOfferings(const ReservedElasticsearchInstanceOffering& value) { m_reservedElasticsearchInstanceOfferings.push_back(value); return *this; }

    /**
     * <p>List of reserved Elasticsearch instance offerings</p>
     */
    inline DescribeReservedElasticsearchInstanceOfferingsResult& AddReservedElasticsearchInstanceOfferings(ReservedElasticsearchInstanceOffering&& value) { m_reservedElasticsearchInstanceOfferings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ReservedElasticsearchInstanceOffering> m_reservedElasticsearchInstanceOfferings;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
