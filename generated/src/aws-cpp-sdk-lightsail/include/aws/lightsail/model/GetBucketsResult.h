﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/AccountLevelBpaSync.h>
#include <aws/lightsail/model/Bucket.h>
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
namespace Lightsail
{
namespace Model
{
  class GetBucketsResult
  {
  public:
    AWS_LIGHTSAIL_API GetBucketsResult();
    AWS_LIGHTSAIL_API GetBucketsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetBucketsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that describe buckets.</p>
     */
    inline const Aws::Vector<Bucket>& GetBuckets() const{ return m_buckets; }
    inline void SetBuckets(const Aws::Vector<Bucket>& value) { m_buckets = value; }
    inline void SetBuckets(Aws::Vector<Bucket>&& value) { m_buckets = std::move(value); }
    inline GetBucketsResult& WithBuckets(const Aws::Vector<Bucket>& value) { SetBuckets(value); return *this;}
    inline GetBucketsResult& WithBuckets(Aws::Vector<Bucket>&& value) { SetBuckets(std::move(value)); return *this;}
    inline GetBucketsResult& AddBuckets(const Bucket& value) { m_buckets.push_back(value); return *this; }
    inline GetBucketsResult& AddBuckets(Bucket&& value) { m_buckets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetBuckets</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline GetBucketsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline GetBucketsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline GetBucketsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the synchronization status of the Amazon S3
     * account-level block public access feature for your Lightsail buckets.</p> <p>For
     * more information about this feature and how it affects Lightsail buckets, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-block-public-access-for-buckets">Block
     * public access for buckets in Amazon Lightsail</a>.</p>
     */
    inline const AccountLevelBpaSync& GetAccountLevelBpaSync() const{ return m_accountLevelBpaSync; }
    inline void SetAccountLevelBpaSync(const AccountLevelBpaSync& value) { m_accountLevelBpaSync = value; }
    inline void SetAccountLevelBpaSync(AccountLevelBpaSync&& value) { m_accountLevelBpaSync = std::move(value); }
    inline GetBucketsResult& WithAccountLevelBpaSync(const AccountLevelBpaSync& value) { SetAccountLevelBpaSync(value); return *this;}
    inline GetBucketsResult& WithAccountLevelBpaSync(AccountLevelBpaSync&& value) { SetAccountLevelBpaSync(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetBucketsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetBucketsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetBucketsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Bucket> m_buckets;

    Aws::String m_nextPageToken;

    AccountLevelBpaSync m_accountLevelBpaSync;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
