/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/internetmonitor/model/HealthEvent.h>
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
namespace InternetMonitor
{
namespace Model
{
  class ListHealthEventsResult
  {
  public:
    AWS_INTERNETMONITOR_API ListHealthEventsResult() = default;
    AWS_INTERNETMONITOR_API ListHealthEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INTERNETMONITOR_API ListHealthEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of health events.</p>
     */
    inline const Aws::Vector<HealthEvent>& GetHealthEvents() const { return m_healthEvents; }
    template<typename HealthEventsT = Aws::Vector<HealthEvent>>
    void SetHealthEvents(HealthEventsT&& value) { m_healthEventsHasBeenSet = true; m_healthEvents = std::forward<HealthEventsT>(value); }
    template<typename HealthEventsT = Aws::Vector<HealthEvent>>
    ListHealthEventsResult& WithHealthEvents(HealthEventsT&& value) { SetHealthEvents(std::forward<HealthEventsT>(value)); return *this;}
    template<typename HealthEventsT = HealthEvent>
    ListHealthEventsResult& AddHealthEvents(HealthEventsT&& value) { m_healthEventsHasBeenSet = true; m_healthEvents.emplace_back(std::forward<HealthEventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListHealthEventsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListHealthEventsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<HealthEvent> m_healthEvents;
    bool m_healthEventsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
