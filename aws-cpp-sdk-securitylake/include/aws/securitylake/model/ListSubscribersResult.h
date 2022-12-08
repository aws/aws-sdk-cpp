/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securitylake/model/SubscriberResource.h>
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
namespace SecurityLake
{
namespace Model
{
  class ListSubscribersResult
  {
  public:
    AWS_SECURITYLAKE_API ListSubscribersResult();
    AWS_SECURITYLAKE_API ListSubscribersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API ListSubscribersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If nextToken is returned, there are more results available. You can make the
     * call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If nextToken is returned, there are more results available. You can make the
     * call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If nextToken is returned, there are more results available. You can make the
     * call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If nextToken is returned, there are more results available. You can make the
     * call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If nextToken is returned, there are more results available. You can make the
     * call again using the returned token to retrieve the next page.</p>
     */
    inline ListSubscribersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If nextToken is returned, there are more results available. You can make the
     * call again using the returned token to retrieve the next page.</p>
     */
    inline ListSubscribersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If nextToken is returned, there are more results available. You can make the
     * call again using the returned token to retrieve the next page.</p>
     */
    inline ListSubscribersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The subscribers available in the specified Security Lake account ID.</p>
     */
    inline const Aws::Vector<SubscriberResource>& GetSubscribers() const{ return m_subscribers; }

    /**
     * <p>The subscribers available in the specified Security Lake account ID.</p>
     */
    inline void SetSubscribers(const Aws::Vector<SubscriberResource>& value) { m_subscribers = value; }

    /**
     * <p>The subscribers available in the specified Security Lake account ID.</p>
     */
    inline void SetSubscribers(Aws::Vector<SubscriberResource>&& value) { m_subscribers = std::move(value); }

    /**
     * <p>The subscribers available in the specified Security Lake account ID.</p>
     */
    inline ListSubscribersResult& WithSubscribers(const Aws::Vector<SubscriberResource>& value) { SetSubscribers(value); return *this;}

    /**
     * <p>The subscribers available in the specified Security Lake account ID.</p>
     */
    inline ListSubscribersResult& WithSubscribers(Aws::Vector<SubscriberResource>&& value) { SetSubscribers(std::move(value)); return *this;}

    /**
     * <p>The subscribers available in the specified Security Lake account ID.</p>
     */
    inline ListSubscribersResult& AddSubscribers(const SubscriberResource& value) { m_subscribers.push_back(value); return *this; }

    /**
     * <p>The subscribers available in the specified Security Lake account ID.</p>
     */
    inline ListSubscribersResult& AddSubscribers(SubscriberResource&& value) { m_subscribers.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<SubscriberResource> m_subscribers;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
