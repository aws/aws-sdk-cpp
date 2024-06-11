﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeReservedElasticsearchInstanceOfferingsResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DescribeReservedElasticsearchInstanceOfferingsResult();
    AWS_ELASTICSEARCHSERVICE_API DescribeReservedElasticsearchInstanceOfferingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API DescribeReservedElasticsearchInstanceOfferingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeReservedElasticsearchInstanceOfferingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeReservedElasticsearchInstanceOfferingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeReservedElasticsearchInstanceOfferingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of reserved Elasticsearch instance offerings</p>
     */
    inline const Aws::Vector<ReservedElasticsearchInstanceOffering>& GetReservedElasticsearchInstanceOfferings() const{ return m_reservedElasticsearchInstanceOfferings; }
    inline void SetReservedElasticsearchInstanceOfferings(const Aws::Vector<ReservedElasticsearchInstanceOffering>& value) { m_reservedElasticsearchInstanceOfferings = value; }
    inline void SetReservedElasticsearchInstanceOfferings(Aws::Vector<ReservedElasticsearchInstanceOffering>&& value) { m_reservedElasticsearchInstanceOfferings = std::move(value); }
    inline DescribeReservedElasticsearchInstanceOfferingsResult& WithReservedElasticsearchInstanceOfferings(const Aws::Vector<ReservedElasticsearchInstanceOffering>& value) { SetReservedElasticsearchInstanceOfferings(value); return *this;}
    inline DescribeReservedElasticsearchInstanceOfferingsResult& WithReservedElasticsearchInstanceOfferings(Aws::Vector<ReservedElasticsearchInstanceOffering>&& value) { SetReservedElasticsearchInstanceOfferings(std::move(value)); return *this;}
    inline DescribeReservedElasticsearchInstanceOfferingsResult& AddReservedElasticsearchInstanceOfferings(const ReservedElasticsearchInstanceOffering& value) { m_reservedElasticsearchInstanceOfferings.push_back(value); return *this; }
    inline DescribeReservedElasticsearchInstanceOfferingsResult& AddReservedElasticsearchInstanceOfferings(ReservedElasticsearchInstanceOffering&& value) { m_reservedElasticsearchInstanceOfferings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeReservedElasticsearchInstanceOfferingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeReservedElasticsearchInstanceOfferingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeReservedElasticsearchInstanceOfferingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ReservedElasticsearchInstanceOffering> m_reservedElasticsearchInstanceOfferings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
