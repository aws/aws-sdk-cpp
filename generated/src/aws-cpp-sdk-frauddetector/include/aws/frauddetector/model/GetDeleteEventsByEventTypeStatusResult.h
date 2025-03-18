/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/AsyncJobStatus.h>
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
namespace FraudDetector
{
namespace Model
{
  class GetDeleteEventsByEventTypeStatusResult
  {
  public:
    AWS_FRAUDDETECTOR_API GetDeleteEventsByEventTypeStatusResult() = default;
    AWS_FRAUDDETECTOR_API GetDeleteEventsByEventTypeStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetDeleteEventsByEventTypeStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The event type name.</p>
     */
    inline const Aws::String& GetEventTypeName() const { return m_eventTypeName; }
    template<typename EventTypeNameT = Aws::String>
    void SetEventTypeName(EventTypeNameT&& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = std::forward<EventTypeNameT>(value); }
    template<typename EventTypeNameT = Aws::String>
    GetDeleteEventsByEventTypeStatusResult& WithEventTypeName(EventTypeNameT&& value) { SetEventTypeName(std::forward<EventTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deletion status.</p>
     */
    inline AsyncJobStatus GetEventsDeletionStatus() const { return m_eventsDeletionStatus; }
    inline void SetEventsDeletionStatus(AsyncJobStatus value) { m_eventsDeletionStatusHasBeenSet = true; m_eventsDeletionStatus = value; }
    inline GetDeleteEventsByEventTypeStatusResult& WithEventsDeletionStatus(AsyncJobStatus value) { SetEventsDeletionStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDeleteEventsByEventTypeStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventTypeName;
    bool m_eventTypeNameHasBeenSet = false;

    AsyncJobStatus m_eventsDeletionStatus{AsyncJobStatus::NOT_SET};
    bool m_eventsDeletionStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
