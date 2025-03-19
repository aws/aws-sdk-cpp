/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifybackend/model/S3BucketInfo.h>
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
namespace AmplifyBackend
{
namespace Model
{
  class ListS3BucketsResult
  {
  public:
    AWS_AMPLIFYBACKEND_API ListS3BucketsResult() = default;
    AWS_AMPLIFYBACKEND_API ListS3BucketsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYBACKEND_API ListS3BucketsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of S3 buckets.</p>
     */
    inline const Aws::Vector<S3BucketInfo>& GetBuckets() const { return m_buckets; }
    template<typename BucketsT = Aws::Vector<S3BucketInfo>>
    void SetBuckets(BucketsT&& value) { m_bucketsHasBeenSet = true; m_buckets = std::forward<BucketsT>(value); }
    template<typename BucketsT = Aws::Vector<S3BucketInfo>>
    ListS3BucketsResult& WithBuckets(BucketsT&& value) { SetBuckets(std::forward<BucketsT>(value)); return *this;}
    template<typename BucketsT = S3BucketInfo>
    ListS3BucketsResult& AddBuckets(BucketsT&& value) { m_bucketsHasBeenSet = true; m_buckets.emplace_back(std::forward<BucketsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListS3BucketsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListS3BucketsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<S3BucketInfo> m_buckets;
    bool m_bucketsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
