/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ViolationEvent.h>
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
namespace IoT
{
namespace Model
{
  class ListViolationEventsResult
  {
  public:
    AWS_IOT_API ListViolationEventsResult() = default;
    AWS_IOT_API ListViolationEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListViolationEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The security profile violation alerts issued for this account during the
     * given time period, potentially filtered by security profile, behavior violated,
     * or thing (device) violating.</p>
     */
    inline const Aws::Vector<ViolationEvent>& GetViolationEvents() const { return m_violationEvents; }
    template<typename ViolationEventsT = Aws::Vector<ViolationEvent>>
    void SetViolationEvents(ViolationEventsT&& value) { m_violationEventsHasBeenSet = true; m_violationEvents = std::forward<ViolationEventsT>(value); }
    template<typename ViolationEventsT = Aws::Vector<ViolationEvent>>
    ListViolationEventsResult& WithViolationEvents(ViolationEventsT&& value) { SetViolationEvents(std::forward<ViolationEventsT>(value)); return *this;}
    template<typename ViolationEventsT = ViolationEvent>
    ListViolationEventsResult& AddViolationEvents(ViolationEventsT&& value) { m_violationEventsHasBeenSet = true; m_violationEvents.emplace_back(std::forward<ViolationEventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListViolationEventsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListViolationEventsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ViolationEvent> m_violationEvents;
    bool m_violationEventsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
