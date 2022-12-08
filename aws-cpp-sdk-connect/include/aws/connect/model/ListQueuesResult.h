/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/QueueSummary.h>
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
  class ListQueuesResult
  {
  public:
    AWS_CONNECT_API ListQueuesResult();
    AWS_CONNECT_API ListQueuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListQueuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the queues.</p>
     */
    inline const Aws::Vector<QueueSummary>& GetQueueSummaryList() const{ return m_queueSummaryList; }

    /**
     * <p>Information about the queues.</p>
     */
    inline void SetQueueSummaryList(const Aws::Vector<QueueSummary>& value) { m_queueSummaryList = value; }

    /**
     * <p>Information about the queues.</p>
     */
    inline void SetQueueSummaryList(Aws::Vector<QueueSummary>&& value) { m_queueSummaryList = std::move(value); }

    /**
     * <p>Information about the queues.</p>
     */
    inline ListQueuesResult& WithQueueSummaryList(const Aws::Vector<QueueSummary>& value) { SetQueueSummaryList(value); return *this;}

    /**
     * <p>Information about the queues.</p>
     */
    inline ListQueuesResult& WithQueueSummaryList(Aws::Vector<QueueSummary>&& value) { SetQueueSummaryList(std::move(value)); return *this;}

    /**
     * <p>Information about the queues.</p>
     */
    inline ListQueuesResult& AddQueueSummaryList(const QueueSummary& value) { m_queueSummaryList.push_back(value); return *this; }

    /**
     * <p>Information about the queues.</p>
     */
    inline ListQueuesResult& AddQueueSummaryList(QueueSummary&& value) { m_queueSummaryList.push_back(std::move(value)); return *this; }


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
    inline ListQueuesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListQueuesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListQueuesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<QueueSummary> m_queueSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
