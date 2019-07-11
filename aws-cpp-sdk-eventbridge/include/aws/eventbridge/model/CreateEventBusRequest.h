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
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/EventBridgeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EventBridge
{
namespace Model
{

  /**
   */
  class AWS_EVENTBRIDGE_API CreateEventBusRequest : public EventBridgeRequest
  {
  public:
    CreateEventBusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEventBus"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the new event bus. </p> <p>The names of custom event buses can't
     * contain the <code>/</code> character. You can't use the name
     * <code>default</code> for a custom event bus because this name is already used
     * for your account's default event bus.</p> <p>If this is a partner event bus, the
     * name must exactly match the name of the partner event source that this event bus
     * is matched to. This name will include the <code>/</code> character.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the new event bus. </p> <p>The names of custom event buses can't
     * contain the <code>/</code> character. You can't use the name
     * <code>default</code> for a custom event bus because this name is already used
     * for your account's default event bus.</p> <p>If this is a partner event bus, the
     * name must exactly match the name of the partner event source that this event bus
     * is matched to. This name will include the <code>/</code> character.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the new event bus. </p> <p>The names of custom event buses can't
     * contain the <code>/</code> character. You can't use the name
     * <code>default</code> for a custom event bus because this name is already used
     * for your account's default event bus.</p> <p>If this is a partner event bus, the
     * name must exactly match the name of the partner event source that this event bus
     * is matched to. This name will include the <code>/</code> character.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the new event bus. </p> <p>The names of custom event buses can't
     * contain the <code>/</code> character. You can't use the name
     * <code>default</code> for a custom event bus because this name is already used
     * for your account's default event bus.</p> <p>If this is a partner event bus, the
     * name must exactly match the name of the partner event source that this event bus
     * is matched to. This name will include the <code>/</code> character.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the new event bus. </p> <p>The names of custom event buses can't
     * contain the <code>/</code> character. You can't use the name
     * <code>default</code> for a custom event bus because this name is already used
     * for your account's default event bus.</p> <p>If this is a partner event bus, the
     * name must exactly match the name of the partner event source that this event bus
     * is matched to. This name will include the <code>/</code> character.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the new event bus. </p> <p>The names of custom event buses can't
     * contain the <code>/</code> character. You can't use the name
     * <code>default</code> for a custom event bus because this name is already used
     * for your account's default event bus.</p> <p>If this is a partner event bus, the
     * name must exactly match the name of the partner event source that this event bus
     * is matched to. This name will include the <code>/</code> character.</p>
     */
    inline CreateEventBusRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the new event bus. </p> <p>The names of custom event buses can't
     * contain the <code>/</code> character. You can't use the name
     * <code>default</code> for a custom event bus because this name is already used
     * for your account's default event bus.</p> <p>If this is a partner event bus, the
     * name must exactly match the name of the partner event source that this event bus
     * is matched to. This name will include the <code>/</code> character.</p>
     */
    inline CreateEventBusRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the new event bus. </p> <p>The names of custom event buses can't
     * contain the <code>/</code> character. You can't use the name
     * <code>default</code> for a custom event bus because this name is already used
     * for your account's default event bus.</p> <p>If this is a partner event bus, the
     * name must exactly match the name of the partner event source that this event bus
     * is matched to. This name will include the <code>/</code> character.</p>
     */
    inline CreateEventBusRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>If you're creating a partner event bus, this specifies the partner event
     * source that the new event bus will be matched with.</p>
     */
    inline const Aws::String& GetEventSourceName() const{ return m_eventSourceName; }

    /**
     * <p>If you're creating a partner event bus, this specifies the partner event
     * source that the new event bus will be matched with.</p>
     */
    inline bool EventSourceNameHasBeenSet() const { return m_eventSourceNameHasBeenSet; }

    /**
     * <p>If you're creating a partner event bus, this specifies the partner event
     * source that the new event bus will be matched with.</p>
     */
    inline void SetEventSourceName(const Aws::String& value) { m_eventSourceNameHasBeenSet = true; m_eventSourceName = value; }

    /**
     * <p>If you're creating a partner event bus, this specifies the partner event
     * source that the new event bus will be matched with.</p>
     */
    inline void SetEventSourceName(Aws::String&& value) { m_eventSourceNameHasBeenSet = true; m_eventSourceName = std::move(value); }

    /**
     * <p>If you're creating a partner event bus, this specifies the partner event
     * source that the new event bus will be matched with.</p>
     */
    inline void SetEventSourceName(const char* value) { m_eventSourceNameHasBeenSet = true; m_eventSourceName.assign(value); }

    /**
     * <p>If you're creating a partner event bus, this specifies the partner event
     * source that the new event bus will be matched with.</p>
     */
    inline CreateEventBusRequest& WithEventSourceName(const Aws::String& value) { SetEventSourceName(value); return *this;}

    /**
     * <p>If you're creating a partner event bus, this specifies the partner event
     * source that the new event bus will be matched with.</p>
     */
    inline CreateEventBusRequest& WithEventSourceName(Aws::String&& value) { SetEventSourceName(std::move(value)); return *this;}

    /**
     * <p>If you're creating a partner event bus, this specifies the partner event
     * source that the new event bus will be matched with.</p>
     */
    inline CreateEventBusRequest& WithEventSourceName(const char* value) { SetEventSourceName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_eventSourceName;
    bool m_eventSourceNameHasBeenSet;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
