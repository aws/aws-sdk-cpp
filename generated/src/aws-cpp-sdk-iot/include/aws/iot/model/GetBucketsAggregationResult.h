/**
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
    AWS_IOT_API GetBucketsAggregationResult() = default;
    AWS_IOT_API GetBucketsAggregationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetBucketsAggregationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The total number of things that fit the query string criteria.</p>
     */
    inline int GetTotalCount() const { return m_totalCount; }
    inline void SetTotalCount(int value) { m_totalCountHasBeenSet = true; m_totalCount = value; }
    inline GetBucketsAggregationResult& WithTotalCount(int value) { SetTotalCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The main part of the response with a list of buckets. Each bucket contains a
     * <code>keyValue</code> and a <code>count</code>.</p> <p> <code>keyValue</code>:
     * The aggregation field value counted for the particular bucket.</p> <p>
     * <code>count</code>: The number of documents that have that value.</p>
     */
    inline const Aws::Vector<Bucket>& GetBuckets() const { return m_buckets; }
    template<typename BucketsT = Aws::Vector<Bucket>>
    void SetBuckets(BucketsT&& value) { m_bucketsHasBeenSet = true; m_buckets = std::forward<BucketsT>(value); }
    template<typename BucketsT = Aws::Vector<Bucket>>
    GetBucketsAggregationResult& WithBuckets(BucketsT&& value) { SetBuckets(std::forward<BucketsT>(value)); return *this;}
    template<typename BucketsT = Bucket>
    GetBucketsAggregationResult& AddBuckets(BucketsT&& value) { m_bucketsHasBeenSet = true; m_buckets.emplace_back(std::forward<BucketsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBucketsAggregationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_totalCount{0};
    bool m_totalCountHasBeenSet = false;

    Aws::Vector<Bucket> m_buckets;
    bool m_bucketsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
