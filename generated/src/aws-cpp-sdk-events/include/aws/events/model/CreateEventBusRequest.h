/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/events/CloudWatchEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/events/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{

  /**
   */
  class CreateEventBusRequest : public CloudWatchEventsRequest
  {
  public:
    AWS_CLOUDWATCHEVENTS_API CreateEventBusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEventBus"; }

    AWS_CLOUDWATCHEVENTS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHEVENTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the new event bus. </p> <p>Event bus names cannot contain the /
     * character. You can't use the name <code>default</code> for a custom event bus,
     * as this name is already used for your account's default event bus.</p> <p>If
     * this is a partner event bus, the name must exactly match the name of the partner
     * event source that this event bus is matched to.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the new event bus. </p> <p>Event bus names cannot contain the /
     * character. You can't use the name <code>default</code> for a custom event bus,
     * as this name is already used for your account's default event bus.</p> <p>If
     * this is a partner event bus, the name must exactly match the name of the partner
     * event source that this event bus is matched to.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the new event bus. </p> <p>Event bus names cannot contain the /
     * character. You can't use the name <code>default</code> for a custom event bus,
     * as this name is already used for your account's default event bus.</p> <p>If
     * this is a partner event bus, the name must exactly match the name of the partner
     * event source that this event bus is matched to.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the new event bus. </p> <p>Event bus names cannot contain the /
     * character. You can't use the name <code>default</code> for a custom event bus,
     * as this name is already used for your account's default event bus.</p> <p>If
     * this is a partner event bus, the name must exactly match the name of the partner
     * event source that this event bus is matched to.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the new event bus. </p> <p>Event bus names cannot contain the /
     * character. You can't use the name <code>default</code> for a custom event bus,
     * as this name is already used for your account's default event bus.</p> <p>If
     * this is a partner event bus, the name must exactly match the name of the partner
     * event source that this event bus is matched to.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the new event bus. </p> <p>Event bus names cannot contain the /
     * character. You can't use the name <code>default</code> for a custom event bus,
     * as this name is already used for your account's default event bus.</p> <p>If
     * this is a partner event bus, the name must exactly match the name of the partner
     * event source that this event bus is matched to.</p>
     */
    inline CreateEventBusRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the new event bus. </p> <p>Event bus names cannot contain the /
     * character. You can't use the name <code>default</code> for a custom event bus,
     * as this name is already used for your account's default event bus.</p> <p>If
     * this is a partner event bus, the name must exactly match the name of the partner
     * event source that this event bus is matched to.</p>
     */
    inline CreateEventBusRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the new event bus. </p> <p>Event bus names cannot contain the /
     * character. You can't use the name <code>default</code> for a custom event bus,
     * as this name is already used for your account's default event bus.</p> <p>If
     * this is a partner event bus, the name must exactly match the name of the partner
     * event source that this event bus is matched to.</p>
     */
    inline CreateEventBusRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>If you are creating a partner event bus, this specifies the partner event
     * source that the new event bus will be matched with.</p>
     */
    inline const Aws::String& GetEventSourceName() const{ return m_eventSourceName; }

    /**
     * <p>If you are creating a partner event bus, this specifies the partner event
     * source that the new event bus will be matched with.</p>
     */
    inline bool EventSourceNameHasBeenSet() const { return m_eventSourceNameHasBeenSet; }

    /**
     * <p>If you are creating a partner event bus, this specifies the partner event
     * source that the new event bus will be matched with.</p>
     */
    inline void SetEventSourceName(const Aws::String& value) { m_eventSourceNameHasBeenSet = true; m_eventSourceName = value; }

    /**
     * <p>If you are creating a partner event bus, this specifies the partner event
     * source that the new event bus will be matched with.</p>
     */
    inline void SetEventSourceName(Aws::String&& value) { m_eventSourceNameHasBeenSet = true; m_eventSourceName = std::move(value); }

    /**
     * <p>If you are creating a partner event bus, this specifies the partner event
     * source that the new event bus will be matched with.</p>
     */
    inline void SetEventSourceName(const char* value) { m_eventSourceNameHasBeenSet = true; m_eventSourceName.assign(value); }

    /**
     * <p>If you are creating a partner event bus, this specifies the partner event
     * source that the new event bus will be matched with.</p>
     */
    inline CreateEventBusRequest& WithEventSourceName(const Aws::String& value) { SetEventSourceName(value); return *this;}

    /**
     * <p>If you are creating a partner event bus, this specifies the partner event
     * source that the new event bus will be matched with.</p>
     */
    inline CreateEventBusRequest& WithEventSourceName(Aws::String&& value) { SetEventSourceName(std::move(value)); return *this;}

    /**
     * <p>If you are creating a partner event bus, this specifies the partner event
     * source that the new event bus will be matched with.</p>
     */
    inline CreateEventBusRequest& WithEventSourceName(const char* value) { SetEventSourceName(value); return *this;}


    /**
     * <p>Tags to associate with the event bus.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to associate with the event bus.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to associate with the event bus.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to associate with the event bus.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to associate with the event bus.</p>
     */
    inline CreateEventBusRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to associate with the event bus.</p>
     */
    inline CreateEventBusRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to associate with the event bus.</p>
     */
    inline CreateEventBusRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags to associate with the event bus.</p>
     */
    inline CreateEventBusRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_eventSourceName;
    bool m_eventSourceNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
