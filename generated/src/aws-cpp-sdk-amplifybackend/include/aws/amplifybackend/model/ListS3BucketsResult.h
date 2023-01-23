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
    AWS_AMPLIFYBACKEND_API ListS3BucketsResult();
    AWS_AMPLIFYBACKEND_API ListS3BucketsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYBACKEND_API ListS3BucketsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of S3 buckets.</p>
     */
    inline const Aws::Vector<S3BucketInfo>& GetBuckets() const{ return m_buckets; }

    /**
     * <p>The list of S3 buckets.</p>
     */
    inline void SetBuckets(const Aws::Vector<S3BucketInfo>& value) { m_buckets = value; }

    /**
     * <p>The list of S3 buckets.</p>
     */
    inline void SetBuckets(Aws::Vector<S3BucketInfo>&& value) { m_buckets = std::move(value); }

    /**
     * <p>The list of S3 buckets.</p>
     */
    inline ListS3BucketsResult& WithBuckets(const Aws::Vector<S3BucketInfo>& value) { SetBuckets(value); return *this;}

    /**
     * <p>The list of S3 buckets.</p>
     */
    inline ListS3BucketsResult& WithBuckets(Aws::Vector<S3BucketInfo>&& value) { SetBuckets(std::move(value)); return *this;}

    /**
     * <p>The list of S3 buckets.</p>
     */
    inline ListS3BucketsResult& AddBuckets(const S3BucketInfo& value) { m_buckets.push_back(value); return *this; }

    /**
     * <p>The list of S3 buckets.</p>
     */
    inline ListS3BucketsResult& AddBuckets(S3BucketInfo&& value) { m_buckets.push_back(std::move(value)); return *this; }


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline ListS3BucketsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline ListS3BucketsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline ListS3BucketsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<S3BucketInfo> m_buckets;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
