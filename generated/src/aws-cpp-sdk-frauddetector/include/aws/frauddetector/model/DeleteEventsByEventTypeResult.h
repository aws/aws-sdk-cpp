/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DeleteEventsByEventTypeResult
  {
  public:
    AWS_FRAUDDETECTOR_API DeleteEventsByEventTypeResult() = default;
    AWS_FRAUDDETECTOR_API DeleteEventsByEventTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API DeleteEventsByEventTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Name of event type for which to delete the events.</p>
     */
    inline const Aws::String& GetEventTypeName() const { return m_eventTypeName; }
    template<typename EventTypeNameT = Aws::String>
    void SetEventTypeName(EventTypeNameT&& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = std::forward<EventTypeNameT>(value); }
    template<typename EventTypeNameT = Aws::String>
    DeleteEventsByEventTypeResult& WithEventTypeName(EventTypeNameT&& value) { SetEventTypeName(std::forward<EventTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the delete request.</p>
     */
    inline const Aws::String& GetEventsDeletionStatus() const { return m_eventsDeletionStatus; }
    template<typename EventsDeletionStatusT = Aws::String>
    void SetEventsDeletionStatus(EventsDeletionStatusT&& value) { m_eventsDeletionStatusHasBeenSet = true; m_eventsDeletionStatus = std::forward<EventsDeletionStatusT>(value); }
    template<typename EventsDeletionStatusT = Aws::String>
    DeleteEventsByEventTypeResult& WithEventsDeletionStatus(EventsDeletionStatusT&& value) { SetEventsDeletionStatus(std::forward<EventsDeletionStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteEventsByEventTypeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventTypeName;
    bool m_eventTypeNameHasBeenSet = false;

    Aws::String m_eventsDeletionStatus;
    bool m_eventsDeletionStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
