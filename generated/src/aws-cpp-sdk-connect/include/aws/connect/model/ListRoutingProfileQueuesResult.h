/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/RoutingProfileQueueConfigSummary.h>
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
  class ListRoutingProfileQueuesResult
  {
  public:
    AWS_CONNECT_API ListRoutingProfileQueuesResult();
    AWS_CONNECT_API ListRoutingProfileQueuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListRoutingProfileQueuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListRoutingProfileQueuesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListRoutingProfileQueuesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListRoutingProfileQueuesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Information about the routing profiles.</p>
     */
    inline const Aws::Vector<RoutingProfileQueueConfigSummary>& GetRoutingProfileQueueConfigSummaryList() const{ return m_routingProfileQueueConfigSummaryList; }

    /**
     * <p>Information about the routing profiles.</p>
     */
    inline void SetRoutingProfileQueueConfigSummaryList(const Aws::Vector<RoutingProfileQueueConfigSummary>& value) { m_routingProfileQueueConfigSummaryList = value; }

    /**
     * <p>Information about the routing profiles.</p>
     */
    inline void SetRoutingProfileQueueConfigSummaryList(Aws::Vector<RoutingProfileQueueConfigSummary>&& value) { m_routingProfileQueueConfigSummaryList = std::move(value); }

    /**
     * <p>Information about the routing profiles.</p>
     */
    inline ListRoutingProfileQueuesResult& WithRoutingProfileQueueConfigSummaryList(const Aws::Vector<RoutingProfileQueueConfigSummary>& value) { SetRoutingProfileQueueConfigSummaryList(value); return *this;}

    /**
     * <p>Information about the routing profiles.</p>
     */
    inline ListRoutingProfileQueuesResult& WithRoutingProfileQueueConfigSummaryList(Aws::Vector<RoutingProfileQueueConfigSummary>&& value) { SetRoutingProfileQueueConfigSummaryList(std::move(value)); return *this;}

    /**
     * <p>Information about the routing profiles.</p>
     */
    inline ListRoutingProfileQueuesResult& AddRoutingProfileQueueConfigSummaryList(const RoutingProfileQueueConfigSummary& value) { m_routingProfileQueueConfigSummaryList.push_back(value); return *this; }

    /**
     * <p>Information about the routing profiles.</p>
     */
    inline ListRoutingProfileQueuesResult& AddRoutingProfileQueueConfigSummaryList(RoutingProfileQueueConfigSummary&& value) { m_routingProfileQueueConfigSummaryList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<RoutingProfileQueueConfigSummary> m_routingProfileQueueConfigSummaryList;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
