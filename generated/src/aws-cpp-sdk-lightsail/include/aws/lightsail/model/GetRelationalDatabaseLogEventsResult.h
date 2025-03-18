/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/LogEvent.h>
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
  class GetRelationalDatabaseLogEventsResult
  {
  public:
    AWS_LIGHTSAIL_API GetRelationalDatabaseLogEventsResult() = default;
    AWS_LIGHTSAIL_API GetRelationalDatabaseLogEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetRelationalDatabaseLogEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object describing the result of your get relational database log events
     * request.</p>
     */
    inline const Aws::Vector<LogEvent>& GetResourceLogEvents() const { return m_resourceLogEvents; }
    template<typename ResourceLogEventsT = Aws::Vector<LogEvent>>
    void SetResourceLogEvents(ResourceLogEventsT&& value) { m_resourceLogEventsHasBeenSet = true; m_resourceLogEvents = std::forward<ResourceLogEventsT>(value); }
    template<typename ResourceLogEventsT = Aws::Vector<LogEvent>>
    GetRelationalDatabaseLogEventsResult& WithResourceLogEvents(ResourceLogEventsT&& value) { SetResourceLogEvents(std::forward<ResourceLogEventsT>(value)); return *this;}
    template<typename ResourceLogEventsT = LogEvent>
    GetRelationalDatabaseLogEventsResult& AddResourceLogEvents(ResourceLogEventsT&& value) { m_resourceLogEventsHasBeenSet = true; m_resourceLogEvents.emplace_back(std::forward<ResourceLogEventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token used for advancing to the previous page of results from your get
     * relational database log events request.</p>
     */
    inline const Aws::String& GetNextBackwardToken() const { return m_nextBackwardToken; }
    template<typename NextBackwardTokenT = Aws::String>
    void SetNextBackwardToken(NextBackwardTokenT&& value) { m_nextBackwardTokenHasBeenSet = true; m_nextBackwardToken = std::forward<NextBackwardTokenT>(value); }
    template<typename NextBackwardTokenT = Aws::String>
    GetRelationalDatabaseLogEventsResult& WithNextBackwardToken(NextBackwardTokenT&& value) { SetNextBackwardToken(std::forward<NextBackwardTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token used for advancing to the next page of results from your get
     * relational database log events request.</p>
     */
    inline const Aws::String& GetNextForwardToken() const { return m_nextForwardToken; }
    template<typename NextForwardTokenT = Aws::String>
    void SetNextForwardToken(NextForwardTokenT&& value) { m_nextForwardTokenHasBeenSet = true; m_nextForwardToken = std::forward<NextForwardTokenT>(value); }
    template<typename NextForwardTokenT = Aws::String>
    GetRelationalDatabaseLogEventsResult& WithNextForwardToken(NextForwardTokenT&& value) { SetNextForwardToken(std::forward<NextForwardTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRelationalDatabaseLogEventsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LogEvent> m_resourceLogEvents;
    bool m_resourceLogEventsHasBeenSet = false;

    Aws::String m_nextBackwardToken;
    bool m_nextBackwardTokenHasBeenSet = false;

    Aws::String m_nextForwardToken;
    bool m_nextForwardTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
