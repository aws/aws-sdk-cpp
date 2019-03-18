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
#include <aws/pinpoint/model/EndpointItemResponse.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/EventItemResponse.h>
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
   * The response that's provided after registering the endpoint.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ItemResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API ItemResponse
  {
  public:
    ItemResponse();
    ItemResponse(Aws::Utils::Json::JsonView jsonValue);
    ItemResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The response received after the endpoint was accepted.
     */
    inline const EndpointItemResponse& GetEndpointItemResponse() const{ return m_endpointItemResponse; }

    /**
     * The response received after the endpoint was accepted.
     */
    inline bool EndpointItemResponseHasBeenSet() const { return m_endpointItemResponseHasBeenSet; }

    /**
     * The response received after the endpoint was accepted.
     */
    inline void SetEndpointItemResponse(const EndpointItemResponse& value) { m_endpointItemResponseHasBeenSet = true; m_endpointItemResponse = value; }

    /**
     * The response received after the endpoint was accepted.
     */
    inline void SetEndpointItemResponse(EndpointItemResponse&& value) { m_endpointItemResponseHasBeenSet = true; m_endpointItemResponse = std::move(value); }

    /**
     * The response received after the endpoint was accepted.
     */
    inline ItemResponse& WithEndpointItemResponse(const EndpointItemResponse& value) { SetEndpointItemResponse(value); return *this;}

    /**
     * The response received after the endpoint was accepted.
     */
    inline ItemResponse& WithEndpointItemResponse(EndpointItemResponse&& value) { SetEndpointItemResponse(std::move(value)); return *this;}


    /**
     * A multipart response object that contains a key and value for each event ID in
     * the request. In each object, the event ID is the key, and an EventItemResponse
     * object is the value.
     */
    inline const Aws::Map<Aws::String, EventItemResponse>& GetEventsItemResponse() const{ return m_eventsItemResponse; }

    /**
     * A multipart response object that contains a key and value for each event ID in
     * the request. In each object, the event ID is the key, and an EventItemResponse
     * object is the value.
     */
    inline bool EventsItemResponseHasBeenSet() const { return m_eventsItemResponseHasBeenSet; }

    /**
     * A multipart response object that contains a key and value for each event ID in
     * the request. In each object, the event ID is the key, and an EventItemResponse
     * object is the value.
     */
    inline void SetEventsItemResponse(const Aws::Map<Aws::String, EventItemResponse>& value) { m_eventsItemResponseHasBeenSet = true; m_eventsItemResponse = value; }

    /**
     * A multipart response object that contains a key and value for each event ID in
     * the request. In each object, the event ID is the key, and an EventItemResponse
     * object is the value.
     */
    inline void SetEventsItemResponse(Aws::Map<Aws::String, EventItemResponse>&& value) { m_eventsItemResponseHasBeenSet = true; m_eventsItemResponse = std::move(value); }

    /**
     * A multipart response object that contains a key and value for each event ID in
     * the request. In each object, the event ID is the key, and an EventItemResponse
     * object is the value.
     */
    inline ItemResponse& WithEventsItemResponse(const Aws::Map<Aws::String, EventItemResponse>& value) { SetEventsItemResponse(value); return *this;}

    /**
     * A multipart response object that contains a key and value for each event ID in
     * the request. In each object, the event ID is the key, and an EventItemResponse
     * object is the value.
     */
    inline ItemResponse& WithEventsItemResponse(Aws::Map<Aws::String, EventItemResponse>&& value) { SetEventsItemResponse(std::move(value)); return *this;}

    /**
     * A multipart response object that contains a key and value for each event ID in
     * the request. In each object, the event ID is the key, and an EventItemResponse
     * object is the value.
     */
    inline ItemResponse& AddEventsItemResponse(const Aws::String& key, const EventItemResponse& value) { m_eventsItemResponseHasBeenSet = true; m_eventsItemResponse.emplace(key, value); return *this; }

    /**
     * A multipart response object that contains a key and value for each event ID in
     * the request. In each object, the event ID is the key, and an EventItemResponse
     * object is the value.
     */
    inline ItemResponse& AddEventsItemResponse(Aws::String&& key, const EventItemResponse& value) { m_eventsItemResponseHasBeenSet = true; m_eventsItemResponse.emplace(std::move(key), value); return *this; }

    /**
     * A multipart response object that contains a key and value for each event ID in
     * the request. In each object, the event ID is the key, and an EventItemResponse
     * object is the value.
     */
    inline ItemResponse& AddEventsItemResponse(const Aws::String& key, EventItemResponse&& value) { m_eventsItemResponseHasBeenSet = true; m_eventsItemResponse.emplace(key, std::move(value)); return *this; }

    /**
     * A multipart response object that contains a key and value for each event ID in
     * the request. In each object, the event ID is the key, and an EventItemResponse
     * object is the value.
     */
    inline ItemResponse& AddEventsItemResponse(Aws::String&& key, EventItemResponse&& value) { m_eventsItemResponseHasBeenSet = true; m_eventsItemResponse.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * A multipart response object that contains a key and value for each event ID in
     * the request. In each object, the event ID is the key, and an EventItemResponse
     * object is the value.
     */
    inline ItemResponse& AddEventsItemResponse(const char* key, EventItemResponse&& value) { m_eventsItemResponseHasBeenSet = true; m_eventsItemResponse.emplace(key, std::move(value)); return *this; }

    /**
     * A multipart response object that contains a key and value for each event ID in
     * the request. In each object, the event ID is the key, and an EventItemResponse
     * object is the value.
     */
    inline ItemResponse& AddEventsItemResponse(const char* key, const EventItemResponse& value) { m_eventsItemResponseHasBeenSet = true; m_eventsItemResponse.emplace(key, value); return *this; }

  private:

    EndpointItemResponse m_endpointItemResponse;
    bool m_endpointItemResponseHasBeenSet;

    Aws::Map<Aws::String, EventItemResponse> m_eventsItemResponse;
    bool m_eventsItemResponseHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
