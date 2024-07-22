/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/ivschat/IvschatRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace ivschat
{
namespace Model
{

  /**
   */
  class SendEventRequest : public IvschatRequest
  {
  public:
    AWS_IVSCHAT_API SendEventRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendEvent"; }

    AWS_IVSCHAT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Identifier of the room to which the event will be sent. Currently this must
     * be an ARN.</p>
     */
    inline const Aws::String& GetRoomIdentifier() const{ return m_roomIdentifier; }
    inline bool RoomIdentifierHasBeenSet() const { return m_roomIdentifierHasBeenSet; }
    inline void SetRoomIdentifier(const Aws::String& value) { m_roomIdentifierHasBeenSet = true; m_roomIdentifier = value; }
    inline void SetRoomIdentifier(Aws::String&& value) { m_roomIdentifierHasBeenSet = true; m_roomIdentifier = std::move(value); }
    inline void SetRoomIdentifier(const char* value) { m_roomIdentifierHasBeenSet = true; m_roomIdentifier.assign(value); }
    inline SendEventRequest& WithRoomIdentifier(const Aws::String& value) { SetRoomIdentifier(value); return *this;}
    inline SendEventRequest& WithRoomIdentifier(Aws::String&& value) { SetRoomIdentifier(std::move(value)); return *this;}
    inline SendEventRequest& WithRoomIdentifier(const char* value) { SetRoomIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application-defined name of the event to send to clients.</p>
     */
    inline const Aws::String& GetEventName() const{ return m_eventName; }
    inline bool EventNameHasBeenSet() const { return m_eventNameHasBeenSet; }
    inline void SetEventName(const Aws::String& value) { m_eventNameHasBeenSet = true; m_eventName = value; }
    inline void SetEventName(Aws::String&& value) { m_eventNameHasBeenSet = true; m_eventName = std::move(value); }
    inline void SetEventName(const char* value) { m_eventNameHasBeenSet = true; m_eventName.assign(value); }
    inline SendEventRequest& WithEventName(const Aws::String& value) { SetEventName(value); return *this;}
    inline SendEventRequest& WithEventName(Aws::String&& value) { SetEventName(std::move(value)); return *this;}
    inline SendEventRequest& WithEventName(const char* value) { SetEventName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application-defined metadata to attach to the event sent to clients. The
     * maximum length of the metadata is 1 KB total.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline SendEventRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline SendEventRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline SendEventRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline SendEventRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline SendEventRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline SendEventRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline SendEventRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline SendEventRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline SendEventRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_roomIdentifier;
    bool m_roomIdentifierHasBeenSet = false;

    Aws::String m_eventName;
    bool m_eventNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
