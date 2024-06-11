﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-devices/IoT1ClickDevicesService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot1click-devices/model/DeviceEvent.h>
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
namespace IoT1ClickDevicesService
{
namespace Model
{
  class ListDeviceEventsResult
  {
  public:
    AWS_IOT1CLICKDEVICESSERVICE_API ListDeviceEventsResult();
    AWS_IOT1CLICKDEVICESSERVICE_API ListDeviceEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT1CLICKDEVICESSERVICE_API ListDeviceEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of zero or more elements describing the event(s) associated with
     * the
 device.</p>
     */
    inline const Aws::Vector<DeviceEvent>& GetEvents() const{ return m_events; }
    inline void SetEvents(const Aws::Vector<DeviceEvent>& value) { m_events = value; }
    inline void SetEvents(Aws::Vector<DeviceEvent>&& value) { m_events = std::move(value); }
    inline ListDeviceEventsResult& WithEvents(const Aws::Vector<DeviceEvent>& value) { SetEvents(value); return *this;}
    inline ListDeviceEventsResult& WithEvents(Aws::Vector<DeviceEvent>&& value) { SetEvents(std::move(value)); return *this;}
    inline ListDeviceEventsResult& AddEvents(const DeviceEvent& value) { m_events.push_back(value); return *this; }
    inline ListDeviceEventsResult& AddEvents(DeviceEvent&& value) { m_events.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDeviceEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDeviceEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDeviceEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDeviceEventsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDeviceEventsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDeviceEventsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DeviceEvent> m_events;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
