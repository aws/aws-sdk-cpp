/**
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
    AWS_LIGHTSAIL_API GetBucketsResult() = default;
    AWS_LIGHTSAIL_API GetBucketsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetBucketsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that describe buckets.</p>
     */
    inline const Aws::Vector<Bucket>& GetBuckets() const { return m_buckets; }
    template<typename BucketsT = Aws::Vector<Bucket>>
    void SetBuckets(BucketsT&& value) { m_bucketsHasBeenSet = true; m_buckets = std::forward<BucketsT>(value); }
    template<typename BucketsT = Aws::Vector<Bucket>>
    GetBucketsResult& WithBuckets(BucketsT&& value) { SetBuckets(std::forward<BucketsT>(value)); return *this;}
    template<typename BucketsT = Bucket>
    GetBucketsResult& AddBuckets(BucketsT&& value) { m_bucketsHasBeenSet = true; m_buckets.emplace_back(std::forward<BucketsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetBuckets</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetBucketsResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the synchronization status of the Amazon S3
     * account-level block public access feature for your Lightsail buckets.</p> <p>For
     * more information about this feature and how it affects Lightsail buckets, see <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-block-public-access-for-buckets">Block
     * public access for buckets in Amazon Lightsail</a>.</p>
     */
    inline const AccountLevelBpaSync& GetAccountLevelBpaSync() const { return m_accountLevelBpaSync; }
    template<typename AccountLevelBpaSyncT = AccountLevelBpaSync>
    void SetAccountLevelBpaSync(AccountLevelBpaSyncT&& value) { m_accountLevelBpaSyncHasBeenSet = true; m_accountLevelBpaSync = std::forward<AccountLevelBpaSyncT>(value); }
    template<typename AccountLevelBpaSyncT = AccountLevelBpaSync>
    GetBucketsResult& WithAccountLevelBpaSync(AccountLevelBpaSyncT&& value) { SetAccountLevelBpaSync(std::forward<AccountLevelBpaSyncT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBucketsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Bucket> m_buckets;
    bool m_bucketsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    AccountLevelBpaSync m_accountLevelBpaSync;
    bool m_accountLevelBpaSyncHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
