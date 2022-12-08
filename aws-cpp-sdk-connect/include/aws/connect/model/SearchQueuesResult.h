/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/Queue.h>
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
namespace Connect
{
namespace Model
{
  class SearchQueuesResult
  {
  public:
    AWS_CONNECT_API SearchQueuesResult();
    AWS_CONNECT_API SearchQueuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API SearchQueuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the queues.</p>
     */
    inline const Aws::Vector<Queue>& GetQueues() const{ return m_queues; }

    /**
     * <p>Information about the queues.</p>
     */
    inline void SetQueues(const Aws::Vector<Queue>& value) { m_queues = value; }

    /**
     * <p>Information about the queues.</p>
     */
    inline void SetQueues(Aws::Vector<Queue>&& value) { m_queues = std::move(value); }

    /**
     * <p>Information about the queues.</p>
     */
    inline SearchQueuesResult& WithQueues(const Aws::Vector<Queue>& value) { SetQueues(value); return *this;}

    /**
     * <p>Information about the queues.</p>
     */
    inline SearchQueuesResult& WithQueues(Aws::Vector<Queue>&& value) { SetQueues(std::move(value)); return *this;}

    /**
     * <p>Information about the queues.</p>
     */
    inline SearchQueuesResult& AddQueues(const Queue& value) { m_queues.push_back(value); return *this; }

    /**
     * <p>Information about the queues.</p>
     */
    inline SearchQueuesResult& AddQueues(Queue&& value) { m_queues.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline SearchQueuesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline SearchQueuesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline SearchQueuesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The total number of queues which matched your search query.</p>
     */
    inline long long GetApproximateTotalCount() const{ return m_approximateTotalCount; }

    /**
     * <p>The total number of queues which matched your search query.</p>
     */
    inline void SetApproximateTotalCount(long long value) { m_approximateTotalCount = value; }

    /**
     * <p>The total number of queues which matched your search query.</p>
     */
    inline SearchQueuesResult& WithApproximateTotalCount(long long value) { SetApproximateTotalCount(value); return *this;}

  private:

    Aws::Vector<Queue> m_queues;

    Aws::String m_nextToken;

    long long m_approximateTotalCount;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
