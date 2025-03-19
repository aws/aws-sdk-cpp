/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/EventsConfiguration.h>
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
namespace Chime
{
namespace Model
{
  class GetEventsConfigurationResult
  {
  public:
    AWS_CHIME_API GetEventsConfigurationResult() = default;
    AWS_CHIME_API GetEventsConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API GetEventsConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The events configuration details.</p>
     */
    inline const EventsConfiguration& GetEventsConfiguration() const { return m_eventsConfiguration; }
    template<typename EventsConfigurationT = EventsConfiguration>
    void SetEventsConfiguration(EventsConfigurationT&& value) { m_eventsConfigurationHasBeenSet = true; m_eventsConfiguration = std::forward<EventsConfigurationT>(value); }
    template<typename EventsConfigurationT = EventsConfiguration>
    GetEventsConfigurationResult& WithEventsConfiguration(EventsConfigurationT&& value) { SetEventsConfiguration(std::forward<EventsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEventsConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EventsConfiguration m_eventsConfiguration;
    bool m_eventsConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
