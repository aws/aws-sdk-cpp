/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/PublicEndpoint.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/Event.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * A batch of PublicEndpoints and Events to process.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EventsBatch">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API EventsBatch
  {
  public:
    EventsBatch();
    EventsBatch(Aws::Utils::Json::JsonView jsonValue);
    EventsBatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The PublicEndpoint attached to the EndpointId from the request.
     */
    inline const PublicEndpoint& GetEndpoint() const{ return m_endpoint; }

    /**
     * The PublicEndpoint attached to the EndpointId from the request.
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * The PublicEndpoint attached to the EndpointId from the request.
     */
    inline void SetEndpoint(const PublicEndpoint& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * The PublicEndpoint attached to the EndpointId from the request.
     */
    inline void SetEndpoint(PublicEndpoint&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * The PublicEndpoint attached to the EndpointId from the request.
     */
    inline EventsBatch& WithEndpoint(const PublicEndpoint& value) { SetEndpoint(value); return *this;}

    /**
     * The PublicEndpoint attached to the EndpointId from the request.
     */
    inline EventsBatch& WithEndpoint(PublicEndpoint&& value) { SetEndpoint(std::move(value)); return *this;}


    /**
     * An object that contains a set of events associated with the endpoint.
     */
    inline const Aws::Map<Aws::String, Event>& GetEvents() const{ return m_events; }

    /**
     * An object that contains a set of events associated with the endpoint.
     */
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }

    /**
     * An object that contains a set of events associated with the endpoint.
     */
    inline void SetEvents(const Aws::Map<Aws::String, Event>& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * An object that contains a set of events associated with the endpoint.
     */
    inline void SetEvents(Aws::Map<Aws::String, Event>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }

    /**
     * An object that contains a set of events associated with the endpoint.
     */
    inline EventsBatch& WithEvents(const Aws::Map<Aws::String, Event>& value) { SetEvents(value); return *this;}

    /**
     * An object that contains a set of events associated with the endpoint.
     */
    inline EventsBatch& WithEvents(Aws::Map<Aws::String, Event>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * An object that contains a set of events associated with the endpoint.
     */
    inline EventsBatch& AddEvents(const Aws::String& key, const Event& value) { m_eventsHasBeenSet = true; m_events.emplace(key, value); return *this; }

    /**
     * An object that contains a set of events associated with the endpoint.
     */
    inline EventsBatch& AddEvents(Aws::String&& key, const Event& value) { m_eventsHasBeenSet = true; m_events.emplace(std::move(key), value); return *this; }

    /**
     * An object that contains a set of events associated with the endpoint.
     */
    inline EventsBatch& AddEvents(const Aws::String& key, Event&& value) { m_eventsHasBeenSet = true; m_events.emplace(key, std::move(value)); return *this; }

    /**
     * An object that contains a set of events associated with the endpoint.
     */
    inline EventsBatch& AddEvents(Aws::String&& key, Event&& value) { m_eventsHasBeenSet = true; m_events.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * An object that contains a set of events associated with the endpoint.
     */
    inline EventsBatch& AddEvents(const char* key, Event&& value) { m_eventsHasBeenSet = true; m_events.emplace(key, std::move(value)); return *this; }

    /**
     * An object that contains a set of events associated with the endpoint.
     */
    inline EventsBatch& AddEvents(const char* key, const Event& value) { m_eventsHasBeenSet = true; m_events.emplace(key, value); return *this; }

  private:

    PublicEndpoint m_endpoint;
    bool m_endpointHasBeenSet;

    Aws::Map<Aws::String, Event> m_events;
    bool m_eventsHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
