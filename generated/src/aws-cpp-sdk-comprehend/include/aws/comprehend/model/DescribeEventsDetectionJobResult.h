/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/EventsDetectionJobProperties.h>
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
namespace Comprehend
{
namespace Model
{
  class DescribeEventsDetectionJobResult
  {
  public:
    AWS_COMPREHEND_API DescribeEventsDetectionJobResult() = default;
    AWS_COMPREHEND_API DescribeEventsDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeEventsDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains the properties associated with an event detection
     * job.</p>
     */
    inline const EventsDetectionJobProperties& GetEventsDetectionJobProperties() const { return m_eventsDetectionJobProperties; }
    template<typename EventsDetectionJobPropertiesT = EventsDetectionJobProperties>
    void SetEventsDetectionJobProperties(EventsDetectionJobPropertiesT&& value) { m_eventsDetectionJobPropertiesHasBeenSet = true; m_eventsDetectionJobProperties = std::forward<EventsDetectionJobPropertiesT>(value); }
    template<typename EventsDetectionJobPropertiesT = EventsDetectionJobProperties>
    DescribeEventsDetectionJobResult& WithEventsDetectionJobProperties(EventsDetectionJobPropertiesT&& value) { SetEventsDetectionJobProperties(std::forward<EventsDetectionJobPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEventsDetectionJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EventsDetectionJobProperties m_eventsDetectionJobProperties;
    bool m_eventsDetectionJobPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
