/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
    AWS_CONNECT_API ListRoutingProfileQueuesResult() = default;
    AWS_CONNECT_API ListRoutingProfileQueuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListRoutingProfileQueuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRoutingProfileQueuesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the routing profiles.</p>
     */
    inline const Aws::Vector<RoutingProfileQueueConfigSummary>& GetRoutingProfileQueueConfigSummaryList() const { return m_routingProfileQueueConfigSummaryList; }
    template<typename RoutingProfileQueueConfigSummaryListT = Aws::Vector<RoutingProfileQueueConfigSummary>>
    void SetRoutingProfileQueueConfigSummaryList(RoutingProfileQueueConfigSummaryListT&& value) { m_routingProfileQueueConfigSummaryListHasBeenSet = true; m_routingProfileQueueConfigSummaryList = std::forward<RoutingProfileQueueConfigSummaryListT>(value); }
    template<typename RoutingProfileQueueConfigSummaryListT = Aws::Vector<RoutingProfileQueueConfigSummary>>
    ListRoutingProfileQueuesResult& WithRoutingProfileQueueConfigSummaryList(RoutingProfileQueueConfigSummaryListT&& value) { SetRoutingProfileQueueConfigSummaryList(std::forward<RoutingProfileQueueConfigSummaryListT>(value)); return *this;}
    template<typename RoutingProfileQueueConfigSummaryListT = RoutingProfileQueueConfigSummary>
    ListRoutingProfileQueuesResult& AddRoutingProfileQueueConfigSummaryList(RoutingProfileQueueConfigSummaryListT&& value) { m_routingProfileQueueConfigSummaryListHasBeenSet = true; m_routingProfileQueueConfigSummaryList.emplace_back(std::forward<RoutingProfileQueueConfigSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp when this resource was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    ListRoutingProfileQueuesResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where this resource was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedRegion() const { return m_lastModifiedRegion; }
    template<typename LastModifiedRegionT = Aws::String>
    void SetLastModifiedRegion(LastModifiedRegionT&& value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion = std::forward<LastModifiedRegionT>(value); }
    template<typename LastModifiedRegionT = Aws::String>
    ListRoutingProfileQueuesResult& WithLastModifiedRegion(LastModifiedRegionT&& value) { SetLastModifiedRegion(std::forward<LastModifiedRegionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRoutingProfileQueuesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<RoutingProfileQueueConfigSummary> m_routingProfileQueueConfigSummaryList;
    bool m_routingProfileQueueConfigSummaryListHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_lastModifiedRegion;
    bool m_lastModifiedRegionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
