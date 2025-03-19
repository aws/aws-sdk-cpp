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
  class PutEventsConfigurationResult
  {
  public:
    AWS_CHIME_API PutEventsConfigurationResult() = default;
    AWS_CHIME_API PutEventsConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API PutEventsConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The configuration that allows a bot to receive outgoing events. Can be an
     * HTTPS endpoint or an AWS Lambda function ARN.</p>
     */
    inline const EventsConfiguration& GetEventsConfiguration() const { return m_eventsConfiguration; }
    template<typename EventsConfigurationT = EventsConfiguration>
    void SetEventsConfiguration(EventsConfigurationT&& value) { m_eventsConfigurationHasBeenSet = true; m_eventsConfiguration = std::forward<EventsConfigurationT>(value); }
    template<typename EventsConfigurationT = EventsConfiguration>
    PutEventsConfigurationResult& WithEventsConfiguration(EventsConfigurationT&& value) { SetEventsConfiguration(std::forward<EventsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutEventsConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
