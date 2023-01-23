/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/BucketMetadata.h>
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
namespace Macie2
{
namespace Model
{
  class DescribeBucketsResult
  {
  public:
    AWS_MACIE2_API DescribeBucketsResult();
    AWS_MACIE2_API DescribeBucketsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API DescribeBucketsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects, one for each bucket that matches the filter criteria
     * specified in the request.</p>
     */
    inline const Aws::Vector<BucketMetadata>& GetBuckets() const{ return m_buckets; }

    /**
     * <p>An array of objects, one for each bucket that matches the filter criteria
     * specified in the request.</p>
     */
    inline void SetBuckets(const Aws::Vector<BucketMetadata>& value) { m_buckets = value; }

    /**
     * <p>An array of objects, one for each bucket that matches the filter criteria
     * specified in the request.</p>
     */
    inline void SetBuckets(Aws::Vector<BucketMetadata>&& value) { m_buckets = std::move(value); }

    /**
     * <p>An array of objects, one for each bucket that matches the filter criteria
     * specified in the request.</p>
     */
    inline DescribeBucketsResult& WithBuckets(const Aws::Vector<BucketMetadata>& value) { SetBuckets(value); return *this;}

    /**
     * <p>An array of objects, one for each bucket that matches the filter criteria
     * specified in the request.</p>
     */
    inline DescribeBucketsResult& WithBuckets(Aws::Vector<BucketMetadata>&& value) { SetBuckets(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each bucket that matches the filter criteria
     * specified in the request.</p>
     */
    inline DescribeBucketsResult& AddBuckets(const BucketMetadata& value) { m_buckets.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each bucket that matches the filter criteria
     * specified in the request.</p>
     */
    inline DescribeBucketsResult& AddBuckets(BucketMetadata&& value) { m_buckets.push_back(std::move(value)); return *this; }


    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline DescribeBucketsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline DescribeBucketsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline DescribeBucketsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BucketMetadata> m_buckets;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
