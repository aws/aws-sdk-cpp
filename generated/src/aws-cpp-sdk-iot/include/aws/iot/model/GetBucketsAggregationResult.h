﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/Bucket.h>
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
namespace IoT
{
namespace Model
{
  class GetBucketsAggregationResult
  {
  public:
    AWS_IOT_API GetBucketsAggregationResult();
    AWS_IOT_API GetBucketsAggregationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetBucketsAggregationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The total number of things that fit the query string criteria.</p>
     */
    inline int GetTotalCount() const{ return m_totalCount; }
    inline void SetTotalCount(int value) { m_totalCount = value; }
    inline GetBucketsAggregationResult& WithTotalCount(int value) { SetTotalCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The main part of the response with a list of buckets. Each bucket contains a
     * <code>keyValue</code> and a <code>count</code>.</p> <p> <code>keyValue</code>:
     * The aggregation field value counted for the particular bucket.</p> <p>
     * <code>count</code>: The number of documents that have that value.</p>
     */
    inline const Aws::Vector<Bucket>& GetBuckets() const{ return m_buckets; }
    inline void SetBuckets(const Aws::Vector<Bucket>& value) { m_buckets = value; }
    inline void SetBuckets(Aws::Vector<Bucket>&& value) { m_buckets = std::move(value); }
    inline GetBucketsAggregationResult& WithBuckets(const Aws::Vector<Bucket>& value) { SetBuckets(value); return *this;}
    inline GetBucketsAggregationResult& WithBuckets(Aws::Vector<Bucket>&& value) { SetBuckets(std::move(value)); return *this;}
    inline GetBucketsAggregationResult& AddBuckets(const Bucket& value) { m_buckets.push_back(value); return *this; }
    inline GetBucketsAggregationResult& AddBuckets(Bucket&& value) { m_buckets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetBucketsAggregationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetBucketsAggregationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetBucketsAggregationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_totalCount;

    Aws::Vector<Bucket> m_buckets;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
