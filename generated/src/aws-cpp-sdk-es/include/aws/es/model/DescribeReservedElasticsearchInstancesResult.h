﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/es/model/ReservedElasticsearchInstance.h>
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
   * <code>DescribeReservedElasticsearchInstances</code></p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeReservedElasticsearchInstancesResponse">AWS
   * API Reference</a></p>
   */
  class DescribeReservedElasticsearchInstancesResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DescribeReservedElasticsearchInstancesResult();
    AWS_ELASTICSEARCHSERVICE_API DescribeReservedElasticsearchInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API DescribeReservedElasticsearchInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DescribeReservedElasticsearchInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeReservedElasticsearchInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeReservedElasticsearchInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>List of reserved Elasticsearch instances.</p>
     */
    inline const Aws::Vector<ReservedElasticsearchInstance>& GetReservedElasticsearchInstances() const{ return m_reservedElasticsearchInstances; }

    /**
     * <p>List of reserved Elasticsearch instances.</p>
     */
    inline void SetReservedElasticsearchInstances(const Aws::Vector<ReservedElasticsearchInstance>& value) { m_reservedElasticsearchInstances = value; }

    /**
     * <p>List of reserved Elasticsearch instances.</p>
     */
    inline void SetReservedElasticsearchInstances(Aws::Vector<ReservedElasticsearchInstance>&& value) { m_reservedElasticsearchInstances = std::move(value); }

    /**
     * <p>List of reserved Elasticsearch instances.</p>
     */
    inline DescribeReservedElasticsearchInstancesResult& WithReservedElasticsearchInstances(const Aws::Vector<ReservedElasticsearchInstance>& value) { SetReservedElasticsearchInstances(value); return *this;}

    /**
     * <p>List of reserved Elasticsearch instances.</p>
     */
    inline DescribeReservedElasticsearchInstancesResult& WithReservedElasticsearchInstances(Aws::Vector<ReservedElasticsearchInstance>&& value) { SetReservedElasticsearchInstances(std::move(value)); return *this;}

    /**
     * <p>List of reserved Elasticsearch instances.</p>
     */
    inline DescribeReservedElasticsearchInstancesResult& AddReservedElasticsearchInstances(const ReservedElasticsearchInstance& value) { m_reservedElasticsearchInstances.push_back(value); return *this; }

    /**
     * <p>List of reserved Elasticsearch instances.</p>
     */
    inline DescribeReservedElasticsearchInstancesResult& AddReservedElasticsearchInstances(ReservedElasticsearchInstance&& value) { m_reservedElasticsearchInstances.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeReservedElasticsearchInstancesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeReservedElasticsearchInstancesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeReservedElasticsearchInstancesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ReservedElasticsearchInstance> m_reservedElasticsearchInstances;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
