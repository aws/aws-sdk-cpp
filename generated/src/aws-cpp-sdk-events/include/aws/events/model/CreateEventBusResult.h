/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
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
namespace CloudWatchEvents
{
namespace Model
{
  class CreateEventBusResult
  {
  public:
    AWS_CLOUDWATCHEVENTS_API CreateEventBusResult() = default;
    AWS_CLOUDWATCHEVENTS_API CreateEventBusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API CreateEventBusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the new event bus.</p>
     */
    inline const Aws::String& GetEventBusArn() const { return m_eventBusArn; }
    template<typename EventBusArnT = Aws::String>
    void SetEventBusArn(EventBusArnT&& value) { m_eventBusArnHasBeenSet = true; m_eventBusArn = std::forward<EventBusArnT>(value); }
    template<typename EventBusArnT = Aws::String>
    CreateEventBusResult& WithEventBusArn(EventBusArnT&& value) { SetEventBusArn(std::forward<EventBusArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateEventBusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventBusArn;
    bool m_eventBusArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
