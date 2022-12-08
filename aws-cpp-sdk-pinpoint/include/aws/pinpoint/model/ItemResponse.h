/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Provides information about the results of a request to create or update an
   * endpoint that's associated with an event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ItemResponse">AWS
   * API Reference</a></p>
   */
  class ItemResponse
  {
  public:
    AWS_PINPOINT_API ItemResponse();
    AWS_PINPOINT_API ItemResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API ItemResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The response that was received after the endpoint data was accepted.</p>
     */
    inline const EndpointItemResponse& GetEndpointItemResponse() const{ return m_endpointItemResponse; }

    /**
     * <p>The response that was received after the endpoint data was accepted.</p>
     */
    inline bool EndpointItemResponseHasBeenSet() const { return m_endpointItemResponseHasBeenSet; }

    /**
     * <p>The response that was received after the endpoint data was accepted.</p>
     */
    inline void SetEndpointItemResponse(const EndpointItemResponse& value) { m_endpointItemResponseHasBeenSet = true; m_endpointItemResponse = value; }

    /**
     * <p>The response that was received after the endpoint data was accepted.</p>
     */
    inline void SetEndpointItemResponse(EndpointItemResponse&& value) { m_endpointItemResponseHasBeenSet = true; m_endpointItemResponse = std::move(value); }

    /**
     * <p>The response that was received after the endpoint data was accepted.</p>
     */
    inline ItemResponse& WithEndpointItemResponse(const EndpointItemResponse& value) { SetEndpointItemResponse(value); return *this;}

    /**
     * <p>The response that was received after the endpoint data was accepted.</p>
     */
    inline ItemResponse& WithEndpointItemResponse(EndpointItemResponse&& value) { SetEndpointItemResponse(std::move(value)); return *this;}


    /**
     * <p>A multipart response object that contains a key and a value for each event in
     * the request. In each object, the event ID is the key and an EventItemResponse
     * object is the value.</p>
     */
    inline const Aws::Map<Aws::String, EventItemResponse>& GetEventsItemResponse() const{ return m_eventsItemResponse; }

    /**
     * <p>A multipart response object that contains a key and a value for each event in
     * the request. In each object, the event ID is the key and an EventItemResponse
     * object is the value.</p>
     */
    inline bool EventsItemResponseHasBeenSet() const { return m_eventsItemResponseHasBeenSet; }

    /**
     * <p>A multipart response object that contains a key and a value for each event in
     * the request. In each object, the event ID is the key and an EventItemResponse
     * object is the value.</p>
     */
    inline void SetEventsItemResponse(const Aws::Map<Aws::String, EventItemResponse>& value) { m_eventsItemResponseHasBeenSet = true; m_eventsItemResponse = value; }

    /**
     * <p>A multipart response object that contains a key and a value for each event in
     * the request. In each object, the event ID is the key and an EventItemResponse
     * object is the value.</p>
     */
    inline void SetEventsItemResponse(Aws::Map<Aws::String, EventItemResponse>&& value) { m_eventsItemResponseHasBeenSet = true; m_eventsItemResponse = std::move(value); }

    /**
     * <p>A multipart response object that contains a key and a value for each event in
     * the request. In each object, the event ID is the key and an EventItemResponse
     * object is the value.</p>
     */
    inline ItemResponse& WithEventsItemResponse(const Aws::Map<Aws::String, EventItemResponse>& value) { SetEventsItemResponse(value); return *this;}

    /**
     * <p>A multipart response object that contains a key and a value for each event in
     * the request. In each object, the event ID is the key and an EventItemResponse
     * object is the value.</p>
     */
    inline ItemResponse& WithEventsItemResponse(Aws::Map<Aws::String, EventItemResponse>&& value) { SetEventsItemResponse(std::move(value)); return *this;}

    /**
     * <p>A multipart response object that contains a key and a value for each event in
     * the request. In each object, the event ID is the key and an EventItemResponse
     * object is the value.</p>
     */
    inline ItemResponse& AddEventsItemResponse(const Aws::String& key, const EventItemResponse& value) { m_eventsItemResponseHasBeenSet = true; m_eventsItemResponse.emplace(key, value); return *this; }

    /**
     * <p>A multipart response object that contains a key and a value for each event in
     * the request. In each object, the event ID is the key and an EventItemResponse
     * object is the value.</p>
     */
    inline ItemResponse& AddEventsItemResponse(Aws::String&& key, const EventItemResponse& value) { m_eventsItemResponseHasBeenSet = true; m_eventsItemResponse.emplace(std::move(key), value); return *this; }

    /**
     * <p>A multipart response object that contains a key and a value for each event in
     * the request. In each object, the event ID is the key and an EventItemResponse
     * object is the value.</p>
     */
    inline ItemResponse& AddEventsItemResponse(const Aws::String& key, EventItemResponse&& value) { m_eventsItemResponseHasBeenSet = true; m_eventsItemResponse.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A multipart response object that contains a key and a value for each event in
     * the request. In each object, the event ID is the key and an EventItemResponse
     * object is the value.</p>
     */
    inline ItemResponse& AddEventsItemResponse(Aws::String&& key, EventItemResponse&& value) { m_eventsItemResponseHasBeenSet = true; m_eventsItemResponse.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A multipart response object that contains a key and a value for each event in
     * the request. In each object, the event ID is the key and an EventItemResponse
     * object is the value.</p>
     */
    inline ItemResponse& AddEventsItemResponse(const char* key, EventItemResponse&& value) { m_eventsItemResponseHasBeenSet = true; m_eventsItemResponse.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A multipart response object that contains a key and a value for each event in
     * the request. In each object, the event ID is the key and an EventItemResponse
     * object is the value.</p>
     */
    inline ItemResponse& AddEventsItemResponse(const char* key, const EventItemResponse& value) { m_eventsItemResponseHasBeenSet = true; m_eventsItemResponse.emplace(key, value); return *this; }

  private:

    EndpointItemResponse m_endpointItemResponse;
    bool m_endpointItemResponseHasBeenSet = false;

    Aws::Map<Aws::String, EventItemResponse> m_eventsItemResponse;
    bool m_eventsItemResponseHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
