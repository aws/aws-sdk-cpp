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
#include <aws/personalize-events/PersonalizeEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace PersonalizeEvents
{
namespace Model
{

  /**
   * <p>Represents user interaction event information sent using the
   * <code>PutEvents</code> API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/Event">AWS
   * API Reference</a></p>
   */
  class AWS_PERSONALIZEEVENTS_API Event
  {
  public:
    Event();
    Event(Aws::Utils::Json::JsonView jsonValue);
    Event& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An ID associated with the event. If an event ID is not provided, Amazon
     * Personalize generates a unique ID for the event. An event ID is not used as an
     * input to the model. Amazon Personalize uses the event ID to distinquish unique
     * events. Any subsequent events after the first with the same event ID are not
     * used in model training.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>An ID associated with the event. If an event ID is not provided, Amazon
     * Personalize generates a unique ID for the event. An event ID is not used as an
     * input to the model. Amazon Personalize uses the event ID to distinquish unique
     * events. Any subsequent events after the first with the same event ID are not
     * used in model training.</p>
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

    /**
     * <p>An ID associated with the event. If an event ID is not provided, Amazon
     * Personalize generates a unique ID for the event. An event ID is not used as an
     * input to the model. Amazon Personalize uses the event ID to distinquish unique
     * events. Any subsequent events after the first with the same event ID are not
     * used in model training.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>An ID associated with the event. If an event ID is not provided, Amazon
     * Personalize generates a unique ID for the event. An event ID is not used as an
     * input to the model. Amazon Personalize uses the event ID to distinquish unique
     * events. Any subsequent events after the first with the same event ID are not
     * used in model training.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p>An ID associated with the event. If an event ID is not provided, Amazon
     * Personalize generates a unique ID for the event. An event ID is not used as an
     * input to the model. Amazon Personalize uses the event ID to distinquish unique
     * events. Any subsequent events after the first with the same event ID are not
     * used in model training.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>An ID associated with the event. If an event ID is not provided, Amazon
     * Personalize generates a unique ID for the event. An event ID is not used as an
     * input to the model. Amazon Personalize uses the event ID to distinquish unique
     * events. Any subsequent events after the first with the same event ID are not
     * used in model training.</p>
     */
    inline Event& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>An ID associated with the event. If an event ID is not provided, Amazon
     * Personalize generates a unique ID for the event. An event ID is not used as an
     * input to the model. Amazon Personalize uses the event ID to distinquish unique
     * events. Any subsequent events after the first with the same event ID are not
     * used in model training.</p>
     */
    inline Event& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>An ID associated with the event. If an event ID is not provided, Amazon
     * Personalize generates a unique ID for the event. An event ID is not used as an
     * input to the model. Amazon Personalize uses the event ID to distinquish unique
     * events. Any subsequent events after the first with the same event ID are not
     * used in model training.</p>
     */
    inline Event& WithEventId(const char* value) { SetEventId(value); return *this;}


    /**
     * <p>The type of event. This property corresponds to the <code>EVENT_TYPE</code>
     * field of the Interactions schema.</p>
     */
    inline const Aws::String& GetEventType() const{ return m_eventType; }

    /**
     * <p>The type of event. This property corresponds to the <code>EVENT_TYPE</code>
     * field of the Interactions schema.</p>
     */
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }

    /**
     * <p>The type of event. This property corresponds to the <code>EVENT_TYPE</code>
     * field of the Interactions schema.</p>
     */
    inline void SetEventType(const Aws::String& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * <p>The type of event. This property corresponds to the <code>EVENT_TYPE</code>
     * field of the Interactions schema.</p>
     */
    inline void SetEventType(Aws::String&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    /**
     * <p>The type of event. This property corresponds to the <code>EVENT_TYPE</code>
     * field of the Interactions schema.</p>
     */
    inline void SetEventType(const char* value) { m_eventTypeHasBeenSet = true; m_eventType.assign(value); }

    /**
     * <p>The type of event. This property corresponds to the <code>EVENT_TYPE</code>
     * field of the Interactions schema.</p>
     */
    inline Event& WithEventType(const Aws::String& value) { SetEventType(value); return *this;}

    /**
     * <p>The type of event. This property corresponds to the <code>EVENT_TYPE</code>
     * field of the Interactions schema.</p>
     */
    inline Event& WithEventType(Aws::String&& value) { SetEventType(std::move(value)); return *this;}

    /**
     * <p>The type of event. This property corresponds to the <code>EVENT_TYPE</code>
     * field of the Interactions schema.</p>
     */
    inline Event& WithEventType(const char* value) { SetEventType(value); return *this;}


    /**
     * <p>A string map of event-specific data that you might choose to record. For
     * example, if a user rates a movie on your site, you might send the movie ID and
     * rating, and the number of movie ratings made by the user.</p> <p>Each item in
     * the map consists of a key-value pair. For example,</p> <p> <code>{"itemId":
     * "movie1"}</code> </p> <p> <code>{"itemId": "movie2", "eventValue": "4.5"}</code>
     * </p> <p> <code>{"itemId": "movie3", "eventValue": "3", "numberOfRatings":
     * "12"}</code> </p> <p>The keys use camel case names that match the fields in the
     * Interactions schema. The <code>itemId</code> and <code>eventValue</code> keys
     * correspond to the <code>ITEM_ID</code> and <code>EVENT_VALUE</code> fields. In
     * the above example, the <code>eventType</code> might be 'MovieRating' with
     * <code>eventValue</code> being the rating. The <code>numberOfRatings</code> would
     * match the 'NUMBER_OF_RATINGS' field defined in the Interactions schema.</p>
     */
    inline const Aws::String& GetProperties() const{ return m_properties; }

    /**
     * <p>A string map of event-specific data that you might choose to record. For
     * example, if a user rates a movie on your site, you might send the movie ID and
     * rating, and the number of movie ratings made by the user.</p> <p>Each item in
     * the map consists of a key-value pair. For example,</p> <p> <code>{"itemId":
     * "movie1"}</code> </p> <p> <code>{"itemId": "movie2", "eventValue": "4.5"}</code>
     * </p> <p> <code>{"itemId": "movie3", "eventValue": "3", "numberOfRatings":
     * "12"}</code> </p> <p>The keys use camel case names that match the fields in the
     * Interactions schema. The <code>itemId</code> and <code>eventValue</code> keys
     * correspond to the <code>ITEM_ID</code> and <code>EVENT_VALUE</code> fields. In
     * the above example, the <code>eventType</code> might be 'MovieRating' with
     * <code>eventValue</code> being the rating. The <code>numberOfRatings</code> would
     * match the 'NUMBER_OF_RATINGS' field defined in the Interactions schema.</p>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p>A string map of event-specific data that you might choose to record. For
     * example, if a user rates a movie on your site, you might send the movie ID and
     * rating, and the number of movie ratings made by the user.</p> <p>Each item in
     * the map consists of a key-value pair. For example,</p> <p> <code>{"itemId":
     * "movie1"}</code> </p> <p> <code>{"itemId": "movie2", "eventValue": "4.5"}</code>
     * </p> <p> <code>{"itemId": "movie3", "eventValue": "3", "numberOfRatings":
     * "12"}</code> </p> <p>The keys use camel case names that match the fields in the
     * Interactions schema. The <code>itemId</code> and <code>eventValue</code> keys
     * correspond to the <code>ITEM_ID</code> and <code>EVENT_VALUE</code> fields. In
     * the above example, the <code>eventType</code> might be 'MovieRating' with
     * <code>eventValue</code> being the rating. The <code>numberOfRatings</code> would
     * match the 'NUMBER_OF_RATINGS' field defined in the Interactions schema.</p>
     */
    inline void SetProperties(const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>A string map of event-specific data that you might choose to record. For
     * example, if a user rates a movie on your site, you might send the movie ID and
     * rating, and the number of movie ratings made by the user.</p> <p>Each item in
     * the map consists of a key-value pair. For example,</p> <p> <code>{"itemId":
     * "movie1"}</code> </p> <p> <code>{"itemId": "movie2", "eventValue": "4.5"}</code>
     * </p> <p> <code>{"itemId": "movie3", "eventValue": "3", "numberOfRatings":
     * "12"}</code> </p> <p>The keys use camel case names that match the fields in the
     * Interactions schema. The <code>itemId</code> and <code>eventValue</code> keys
     * correspond to the <code>ITEM_ID</code> and <code>EVENT_VALUE</code> fields. In
     * the above example, the <code>eventType</code> might be 'MovieRating' with
     * <code>eventValue</code> being the rating. The <code>numberOfRatings</code> would
     * match the 'NUMBER_OF_RATINGS' field defined in the Interactions schema.</p>
     */
    inline void SetProperties(Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p>A string map of event-specific data that you might choose to record. For
     * example, if a user rates a movie on your site, you might send the movie ID and
     * rating, and the number of movie ratings made by the user.</p> <p>Each item in
     * the map consists of a key-value pair. For example,</p> <p> <code>{"itemId":
     * "movie1"}</code> </p> <p> <code>{"itemId": "movie2", "eventValue": "4.5"}</code>
     * </p> <p> <code>{"itemId": "movie3", "eventValue": "3", "numberOfRatings":
     * "12"}</code> </p> <p>The keys use camel case names that match the fields in the
     * Interactions schema. The <code>itemId</code> and <code>eventValue</code> keys
     * correspond to the <code>ITEM_ID</code> and <code>EVENT_VALUE</code> fields. In
     * the above example, the <code>eventType</code> might be 'MovieRating' with
     * <code>eventValue</code> being the rating. The <code>numberOfRatings</code> would
     * match the 'NUMBER_OF_RATINGS' field defined in the Interactions schema.</p>
     */
    inline void SetProperties(const char* value) { m_propertiesHasBeenSet = true; m_properties.assign(value); }

    /**
     * <p>A string map of event-specific data that you might choose to record. For
     * example, if a user rates a movie on your site, you might send the movie ID and
     * rating, and the number of movie ratings made by the user.</p> <p>Each item in
     * the map consists of a key-value pair. For example,</p> <p> <code>{"itemId":
     * "movie1"}</code> </p> <p> <code>{"itemId": "movie2", "eventValue": "4.5"}</code>
     * </p> <p> <code>{"itemId": "movie3", "eventValue": "3", "numberOfRatings":
     * "12"}</code> </p> <p>The keys use camel case names that match the fields in the
     * Interactions schema. The <code>itemId</code> and <code>eventValue</code> keys
     * correspond to the <code>ITEM_ID</code> and <code>EVENT_VALUE</code> fields. In
     * the above example, the <code>eventType</code> might be 'MovieRating' with
     * <code>eventValue</code> being the rating. The <code>numberOfRatings</code> would
     * match the 'NUMBER_OF_RATINGS' field defined in the Interactions schema.</p>
     */
    inline Event& WithProperties(const Aws::String& value) { SetProperties(value); return *this;}

    /**
     * <p>A string map of event-specific data that you might choose to record. For
     * example, if a user rates a movie on your site, you might send the movie ID and
     * rating, and the number of movie ratings made by the user.</p> <p>Each item in
     * the map consists of a key-value pair. For example,</p> <p> <code>{"itemId":
     * "movie1"}</code> </p> <p> <code>{"itemId": "movie2", "eventValue": "4.5"}</code>
     * </p> <p> <code>{"itemId": "movie3", "eventValue": "3", "numberOfRatings":
     * "12"}</code> </p> <p>The keys use camel case names that match the fields in the
     * Interactions schema. The <code>itemId</code> and <code>eventValue</code> keys
     * correspond to the <code>ITEM_ID</code> and <code>EVENT_VALUE</code> fields. In
     * the above example, the <code>eventType</code> might be 'MovieRating' with
     * <code>eventValue</code> being the rating. The <code>numberOfRatings</code> would
     * match the 'NUMBER_OF_RATINGS' field defined in the Interactions schema.</p>
     */
    inline Event& WithProperties(Aws::String&& value) { SetProperties(std::move(value)); return *this;}

    /**
     * <p>A string map of event-specific data that you might choose to record. For
     * example, if a user rates a movie on your site, you might send the movie ID and
     * rating, and the number of movie ratings made by the user.</p> <p>Each item in
     * the map consists of a key-value pair. For example,</p> <p> <code>{"itemId":
     * "movie1"}</code> </p> <p> <code>{"itemId": "movie2", "eventValue": "4.5"}</code>
     * </p> <p> <code>{"itemId": "movie3", "eventValue": "3", "numberOfRatings":
     * "12"}</code> </p> <p>The keys use camel case names that match the fields in the
     * Interactions schema. The <code>itemId</code> and <code>eventValue</code> keys
     * correspond to the <code>ITEM_ID</code> and <code>EVENT_VALUE</code> fields. In
     * the above example, the <code>eventType</code> might be 'MovieRating' with
     * <code>eventValue</code> being the rating. The <code>numberOfRatings</code> would
     * match the 'NUMBER_OF_RATINGS' field defined in the Interactions schema.</p>
     */
    inline Event& WithProperties(const char* value) { SetProperties(value); return *this;}


    /**
     * <p>The timestamp on the client side when the event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetSentAt() const{ return m_sentAt; }

    /**
     * <p>The timestamp on the client side when the event occurred.</p>
     */
    inline bool SentAtHasBeenSet() const { return m_sentAtHasBeenSet; }

    /**
     * <p>The timestamp on the client side when the event occurred.</p>
     */
    inline void SetSentAt(const Aws::Utils::DateTime& value) { m_sentAtHasBeenSet = true; m_sentAt = value; }

    /**
     * <p>The timestamp on the client side when the event occurred.</p>
     */
    inline void SetSentAt(Aws::Utils::DateTime&& value) { m_sentAtHasBeenSet = true; m_sentAt = std::move(value); }

    /**
     * <p>The timestamp on the client side when the event occurred.</p>
     */
    inline Event& WithSentAt(const Aws::Utils::DateTime& value) { SetSentAt(value); return *this;}

    /**
     * <p>The timestamp on the client side when the event occurred.</p>
     */
    inline Event& WithSentAt(Aws::Utils::DateTime&& value) { SetSentAt(std::move(value)); return *this;}

  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet;

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet;

    Aws::String m_properties;
    bool m_propertiesHasBeenSet;

    Aws::Utils::DateTime m_sentAt;
    bool m_sentAtHasBeenSet;
  };

} // namespace Model
} // namespace PersonalizeEvents
} // namespace Aws
